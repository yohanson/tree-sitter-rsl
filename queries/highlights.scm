[
 "bool"
 "string"
 "integer"
 "record"
] @type.builtin

[
 "tarray"
 "tbfile"
 "trechandler"
 "tstreamdoc"
 "object"
] @type

[
 "onerror"
 "import"
 "macro"
 "end"
 "class"
 "with"
 "while"
 "if"
 "elif"
 "else"
 "const"
 "return"
 "var"
] @keyword

[
 "private"
 "local"
] @attribute

[
 "."
 ","
 ";"
] @punctuation.delimiter

(variable_definition (identifier) @variable)
(variable_assignment (identifier) @variable)
(qualification_prefix (identifier) @variable)

(macro_definition (identifier) @function)
(macro_call (identifier) @function)

(comment) @comment
(number) @number

(string) @string
(binary_operator) @operator
(assignment_operator) @operator
; (identifier) @identifier

(class_definition (identifier) @class)
(class_definition (identifier) @class (identifier) @class)
