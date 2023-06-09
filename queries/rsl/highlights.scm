; vi:ts=1:sw=1:et
(scalar_type) @type.builtin
(object_type) @type.builtin

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
 "var"
 "import"
 "local"
 "private"
 "if"
 "else"
 "elif"
] @keyword

(boolean_literal) @boolean

(constant_builtin) @constant.builtin
(special_literal) @constant.builtin

(variable_builtin) @variable.builtin
;(macro_builtin) @function.builtin

"import" @include
"return" @keyword.return

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

(macro_definition
  "macro" @keyword.function
  (identifier) @function)
(macro_call (identifier) @function)

(constant_definition
  "const" @definition.constant
  (constant) @constant
)

(comment) @comment
(number) @number

(string) @string
(template) @string
(binary_operator) @operator
(unary_operator) @operator
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
] @repeat)

(while_loop [
 "while"
 "end"
] @repeat)

(record_definition [ "record" "file" ] @type.builtin (identifier) @variable)
(record_definition (record_parameter) @attribute @keyword)

(array_definition "array" @type.builtin (identifier) @variable)

(error_handler "onerror" @exception)
