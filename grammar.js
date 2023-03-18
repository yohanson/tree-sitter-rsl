// vi:ts=2:sw=2:et

module.exports = grammar({
  name: 'rsl',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  rules: {
    unit: $ => repeat(
      choice(
        $._definition,
        $._statement
      )
    ),
    _definition: $ => choice(
      $.function_definition,
      $.class_definition,
      $._variable_definition_block,
    ),

    comment: $ => token(choice(
      seq('//', /(\\(.|\r?\n)|[^\\\n])*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),

    _end: $ => seq(
      caseInsensitive('end'),
      optional(';')
    ),

    variable_definition: $ => seq(
      $.identifier,
      optional(
        seq(
          optional($.type_hint),
          $.assignment_operator,
          $._expression,
        )
      )
    ),
    _variable_definition_block: $ => seq(
      caseInsensitive('var'),
      $.variable_definition,
      repeat(
        seq(
          ',',
          $.variable_definition
        )
      ),
      ';'
    ),

    class_definition: $ => seq(
      caseInsensitive('class'),
      optional($.parent_classes),
      $.identifier,
      optional($.parameter_list),
      $.class_body,
    ),
    class_body: $ => seq(
      repeat(choice(
        $._variable_definition_block,
        $.function_definition,
        $._statement,
      )),
      $._end
    ),

    parent_classes: $ => seq(
      '(',
        $.identifier,
        repeat(seq(
          ',',
          $.identifier,
        )),
        ')'
    ),

    function_definition: $ => seq(
      caseInsensitive('macro'),
      $.identifier,
      $.parameter_list,
      optional($.type_hint),
      field('function_body', $.block),
    ),

    type_hint: $ => seq(
      ':',
      $._type,
    ),

    parameter_list: $ => seq(
      '(',
        repeat(seq(
          $.identifier,
          optional(',')
        )),
        ')',
    ),

    argument_list: $ => seq(
      '(',
      commaSep($._expression),
      ')',
    ),

    _type: $ => choice(
      $.scalar_type,
      $.object_type,
    ),
    scalar_type: $ => choice(
      caseInsensitive('bool'),
      caseInsensitive('integer'),
      caseInsensitive('string'),
    ),
    object_type: $ => choice(
      caseInsensitive('tbfile'),
      caseInsensitive('trechandler'),
      caseInsensitive('tarray'),
      caseInsensitive('tstreamdoc'),
      caseInsensitive('object'),
    ),
    block: $ => seq(
      repeat(choice(
        $._variable_definition_block,
        $._statement,
      )),
      $._end
    ),
    _statement: $ => seq(
      choice(
        $.return_statement,
        $.function_call,
        $.variable_assignment,
      ),
      ';'
    ),
    return_statement: $ => seq(
      caseInsensitive('return'),
      $._expression,
    ),
    function_call: $ => seq(
      repeat($.qualification_prefix),
      $.identifier,
      $.argument_list,
    ),
    variable_assignment: $ => seq(
      repeat($.qualification_prefix),
      $.identifier,
      $.assignment_operator,
      $._expression,
    ),
    _expression: $ => choice(
      $.identifier,
      $.number,
      $.string_literal,
      $.function_call,
      $.binary_expression,
      // more
    ),

    qualification_prefix: $ => seq(
      $.identifier,
      '.',
    ),

    binary_expression: $ => prec.left(seq($._expression, $.binary_operator, $._expression)),
    binary_operator: $ => choice(
      prec.left(3, $.multiplication_operator),
      prec.left(2, $.add_operator),
      prec.right($.assignment_operator),
    ),
    multiplication_operator: $ => choice('*', '/'),
    add_operator: $ => choice('+', '-'),
    assignment_operator: $ => '=',

    identifier: $ => /[a-zA-Zа-яА-Я_][a-zA-Zа-яА-Я0-9_]*/,
    number: $ => /\d+/,
    string_literal: $ => /"[^"]*"/,
  }
});

function caseInsensitive (keyword, aliasAsWord = true) {
  let result = new RegExp(keyword
    .split('')
    .map(l => l !== l.toUpperCase() ? `[${l.toLowerCase()}${l.toUpperCase()}]`: l)
    .join('')
  )
  if (aliasAsWord) result = alias(result, keyword)
  return result
}

function commaSep (rule) {
  return optional(commaSep1(rule))
}

function commaSep1 (rule) {
  return seq(rule, repeat(seq(',', rule)))
}
