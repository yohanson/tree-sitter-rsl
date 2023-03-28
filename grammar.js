// vi:ts=2:sw=2:et

module.exports = grammar({
  name: 'rsl',

  extras: $ => [
    /[ \t\r\n]/,
    $.comment,
  ],

  word: $ => $._word_identifier,
  
  conflicts: $ => [
    [$.variable_definition, $.identifier],
  ],

  rules: {
    unit: $ => seq(
      optional(semicolonSep1(choice(
        $.import,
        $._definition,
        $._statement,
      ))),
      optional($.error_handler),
      optional(seq(
        $._end,
        optional(';')
      )),
    ),

    error_handler: $ => seq(
      caseInsensitive('onerror'),
      optional(seq('(', $.identifier, ')')),
      $._statement_list
    ),

    _definition_list: $ => semicolonSep1($._definition),

    import: $ => seq(
      caseInsensitive('import'),
      commaSep1($.filename),
    ),

    filename: $ => choice(
      $.identifier,
      $.string,
    ),

    _word_identifier: $ => /[a-zA-Zа-яА-Я_][a-zA-Zа-яА-Я0-9_]*/,
    _special_identifier: $ => seq('{', repeat1(/\S/), '}'),
    identifier: $ => choice(
      $._word_identifier,
      $._special_identifier,
    ),

    _definition: $ => choice(
      $.macro_definition,
      $.class_definition,
    ),

    _statement: $ => choice(
      $.array_definition,
      $.file_definition,
      $.record_definition,
      $.while_loop,
      $.for_loop,
      $.if_statement,
      $.return_statement,
      $.output_statement,
      $.macro_call,
      $.constant_definition,
      $.variable_definition,
      $.variable_assignment,
      $.with_definition,
    ),

    class_body: $ => semicolonSep1(choice(
      $.macro_definition,
      $._statement,
    )),

    macro_body: $ => semicolonSep1(choice(
      $._statement,
      $.macro_definition,
    )),

    _statement_list: $ => semicolonSep1($._statement),
    macro_definition: $ => seq(
      optional($.attribute),
      caseInsensitive('macro'),
      $.identifier,
      $.parameter_list,
      optional($.type_declaration),
      optional($.macro_body),
      optional($.error_handler),
      $._end,
    ),

    _typed_identifier: $ => seq(
      field('name', $.identifier),
      optional($.type_declaration),
    ),

    type_declaration: $ => seq(':', $.type),


    type: $ => choice(
      $.scalar_type,
      $.object_type,
    ),
    scalar_type: $ => choice(
      caseInsensitive('variant'),
      caseInsensitive('integer'),
      caseInsensitive('money'),
      caseInsensitive('double'),
      caseInsensitive('doublel'),
      caseInsensitive('string'),
      caseInsensitive('bool'),
      caseInsensitive('date'),
      caseInsensitive('time'),
      caseInsensitive('procref'),
      caseInsensitive('datetime'),
      caseInsensitive('r2m'),
      caseInsensitive('memaddr'),
    ),
    object_type: $ => choice(
      caseInsensitive('tbfile'),
      caseInsensitive('trechandler'),
      caseInsensitive('tarray'),
      caseInsensitive('tstreamdoc'),
      caseInsensitive('object'),
    ),

    variable_definition: $ => seq(
      optional($.attribute),
      caseInsensitive('var'),
      $._identifier_init_list,
    ),

    _identifier_init_list: $ => prec.left(commaSep1($._variable_initialization)),

    _variable_initialization: $ => seq(
      $._typed_identifier,
      optional(
        seq(
          $.assignment_operator,
          $._expression,
        )
      )
    ),

    constant_definition: $ => seq(
      optional($.attribute),
      caseInsensitive('const'),
      commaSep1(seq(
        $.constant,
        $.assignment_operator,
        $._expression,
      )),
    ),
    constant: $ => $._typed_identifier,

    array_definition: $ => seq(
      optional($.attribute),
      caseInsensitive('array'),
      commaSep1($.identifier),
    ),

    file_definition: $ => seq(
      optional($.attribute),
      caseInsensitive('file'),
      $.identifier,
      '(',
      commaSep1($.filename),
      ')',
      repeat($.file_parameter),
    ),
    file_parameter: $ => choice(
      caseInsensitive('normal'),
      caseInsensitive('key number'),
      caseInsensitive('write'),
      caseInsensitive('mem'),
      seq(caseInsensitive('txt'), optional($.number)),
      caseInsensitive('btr'),
      caseInsensitive('sort number'),
      caseInsensitive('dbf'),
      caseInsensitive('dialog'),
      caseInsensitive('blob'),
    ),

    record_definition: $ => seq(
      optional($.attribute),
      caseInsensitive('record'),
      $.identifier,
      '(',
      commaSep1($.filename),
      ')',
      repeat($.file_parameter),
    ),

    number: $ => /\d+/,
    string: $ => repeat1(/"[^"]*"/),

    comment: $ => token(choice(
      seq('//', /(\\(.|\r?\n)|[^\\\n])*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),

    _end: $ => caseInsensitive('end'),

    class_definition: $ => seq(
      optional($.attribute),
      caseInsensitive('class'),
      optional(seq('(', field('parent_class', $.identifier), ')')),
      field('class_name', $.identifier),
      optional($.parameter_list),
      optional(field('class_body', $.class_body)),
      optional($.error_handler),
      $._end,
    ),

    attribute: $ => choice(
      caseInsensitive('local'),
      caseInsensitive('private'),
    ),

    with_definition: $ => seq(
      caseInsensitive('with'),
      '(', $.identifier, ')',
      $._statement_list,
      $._end,
    ),

    parameter_list: $ => seq(
      '(',
      commaSep($._typed_identifier),
      ')',
    ),

    argument_list: $ => seq(
      '(',
      optional(commaSep($._expression)),
      ')',
    ),


    // for (var i, 0, 100, 1)
    for_loop: $ => seq(
      caseInsensitive('for'),
      optional($.for_arguments),
      optional($._statement_list),
      $._end
    ),

    for_arguments: $ => seq(
      '(',
      field('variable', choice(
        $.variable_definition,
        $.identifier
      )),
      optional(seq(
        ',', field('start', $._expression),
        optional(seq(
          ',', field('end', $._expression),
          optional(seq(
            ',', field('step', $._expression)
          )),
        )),
      )),
      ')',
    ),

    while_loop: $ => prec(10, seq(
      caseInsensitive('while'),
      $.condition,
      optional($._statement_list),
      $._end
    )),

    if_statement: $ => seq(
      caseInsensitive('if'),
      $.condition,
      optional($._statement_list),
      repeat(seq(
        caseInsensitive('elif'),
        $.condition,
        optional($._statement_list),
      )),
      prec(1, optional(seq(
        'else',
        optional($._statement_list),
      ))),
      $._end
    ),

    condition: $ => seq('(', $._expression, ')'),
    
    return_statement: $ => seq(
      caseInsensitive('return'),
      $._expression,
    ),

    output_statement: $ => seq(
      '[', $.string, ']',
      optional(seq('(', commaSep($._expression), ')'))
    ),

    macro_call: $ => seq(
      repeat($.qualification_prefix),
      choice(
        $._macro_call_with_parentheses,
        prec(-2, $._macro_call_without_parentheses),
      )
    ),

    _macro_call_without_parentheses: $ => seq(
      field('name', $.identifier),
    ),

    _macro_call_with_parentheses: $ => seq(
      field('name', $.identifier),
      $.argument_list,
    ),

    variable_assignment: $ => seq(
      repeat($.qualification_prefix),
      $.identifier,
      $.assignment_operator,
      $._expression,
    ),
    _expression: $ => prec(1, choice(
      $.identifier,
      $.number,
      $.string,
      prec(-1, $.macro_call),
      $.binary_expression,
      $._subscript_identifier,
      // more
    )),

    qualification_prefix: $ => seq(
      choice(
        $.identifier,
        $._macro_call_with_parentheses,
      ),
      '.',
    ),

    _subscript_identifier: $ => seq(
      repeat($.qualification_prefix),
      $.identifier,
      $.subscript,
    ),

    subscript: $ => seq(
      '[',
      $._expression,
      ']'
    ),

    binary_expression: $ => prec.left(seq($._expression, $.binary_operator, $._expression)),
    binary_operator: $ => choice(
      prec.left(3, $.multiplication_operator),
      prec.left(2, $.add_operator),
      prec.left(1, $.relation_operator),
      prec.right($.assignment_operator),
    ),
    multiplication_operator: $ => choice('*', '/', caseInsensitive('and')),
    add_operator: $ => choice('+', '-', caseInsensitive('or')),
    relation_operator: $ => choice('==', '!=', '<', '<=', '>', '>='),
    assignment_operator: $ => '=',

  }
});

function caseInsensitive (keyword, aliasAsWord = true) {
  let result = token(
    prec(1,
      new RegExp(
        keyword
        .split('')
        .map(l => l.toLowerCase() !== l.toUpperCase() ? `[${l.toUpperCase()}${l.toLowerCase()}]`: l)
        .join('')
      )
    )
  )
  if (aliasAsWord) result = alias(result, keyword)
  return result
}

function commaSep (rule, delimiter = ',') {
  return optional(commaSep1(rule, delimiter))
}

function commaSep1 (rule, delimiter = ',') {
  return seq(rule, repeat(seq(delimiter, rule)))
}

function semicolonSep1(rule, delimiter = ';') {
  return seq(rule, repeat(seq(delimiter, rule)), optional(delimiter))
}

function semicolonSep(rule, delimiter = ';') {
  return optional(semicolonSep1(rule, delimiter))
}
