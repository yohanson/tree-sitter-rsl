; vi:ts=1:sw=1:et
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
 "end"
 "class"
 "with"
 "for"
 "while"
 "const"
 "return"
 "var"
 "import"
 "local"
 "private"
] @keyword

"import" @import
"macro" @function

(attribute) @attribute

[
 "."
 ","
 ";"
] @punctuation.delimiter

[
 "["
 "]"
 "("
 ")"
] @punctuation.bracket

[
 "{"
 "}"
] @punctuation.special

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

(class_definition (identifier) @class)
(class_definition (identifier) @class (identifier) @class)


(if_statement [
 "if"
 "elif"
 "else"
 "end"
] @conditional)

(for_loop [
  "for"
  "end"
] @keyword @loop)

(while_loop [
 "while"
 "end"
] @loop)
