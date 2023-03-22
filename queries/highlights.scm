[
 "bool"
 "class"
 "end"
 "integer"
 "macro"
 "object"

 "onerror"
 "import"
 "record"
 "with"
 "while"
 "private"
 "local"
 "if"
 "elif"
 "else"
 "const"

 "return"
 "string"
 "tarray"
 "tbfile"
 "trechandler"
 "tstreamdoc"
 "var"
] @keyword

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
(class_definition (parent_classes (identifier) @class))
