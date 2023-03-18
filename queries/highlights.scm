[
 "bool"
 "class"
 "end"
 "integer"
 "macro"
 "object"
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
] @delimiter

(variable_definition (identifier) @variable)
(variable_assignment (identifier) @variable)
(qualification_prefix (identifier) @variable)

(function_definition (identifier) @function)
(function_call (identifier) @function)

(comment) @comment
(number) @number
(binary_operator) @operator
(assignment_operator) @operator
; (identifier) @identifier

(class_definition (identifier) @class)
(class_definition (parent_classes (identifier) @class))
