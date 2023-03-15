function caseInsensitive (keyword) {
  return new RegExp(keyword
    .split('')
    .map(letter => `[${letter.toLowerCase()}${letter.toUpperCase()}]`)
    .join('')
  )
}

module.exports = grammar({
  name: 'rsl',

  rules: {
    source_file: $ => repeat($._definition),
    _definition: $ => choice(
        $.function_definition,
        $.class_definition,
        $.variable_definition,
        $._comment,
    ),

    _comment: $ => choice(
        $.comment_inline,
        $.comment_block,
    ),

    comment_inline: $ => /\/\/.*\n/,
    comment_block: $ => /\/\*.*\*\//,

    variable_definition: $ => seq(
        caseInsensitive('var'),
        $.identifier,
        repeat(seq(
            ',',
            $.identifier,
        )),
        ';'
    ),

    class_definition: $ => seq(
        caseInsensitive('class'),
        optional($.parent_classes),
        $.identifier,
        optional($.parameter_list),
        optional(repeat($._statement)),
        repeat($._definition),
        caseInsensitive('end;'),
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
        caseInsensitive('Macro'),
        $.identifier,
        $.parameter_list,
        optional(seq(
            ':',
            $._type,
        )),
        $.block,
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
        repeat(seq(
            choice(
                $._expression,
            ),
            optional(',')
        )),
        ')',
    ),
    _type: $ => choice(
        $.scalar_type,
        $.object_type,
    ),
    scalar_type: $ => choice(
        caseInsensitive('Bool'),
        caseInsensitive('Integer'),
        caseInsensitive('String'),
    ),
    object_type: $ => choice(
        caseInsensitive('TBFile'),
        caseInsensitive('TRecHandler'),
        caseInsensitive('TArray'),
        caseInsensitive('TStreamDoc'),
        caseInsensitive('Object'),
    ),
    block: $ => seq(
        repeat($._statement),
        caseInsensitive('end'),
        optional(';'),
    ),
    _statement: $ => choice(
        $.return_statement,
        $.function_call,
    ),
    return_statement: $ => seq(
        'return',
        $._expression,
        ';'
    ),
    function_call: $ => seq(
        $.identifier,
        $.argument_list,
        ';'
    ),
    _expression: $ => choice(
        $.identifier,
        $.number,
        $.string_literal,
        // more
    ),
    identifier: $ => /[a-zA-Zа-яА-Я_][a-zA-Zа-яА-Я0-9_]*/,
    number: $ => /\d+/,
    string_literal: $ => /"[^"]*"/,
    extras: $ => choice(
        $._comment,
    ),
  }
});

