[
    (class_definition)
    (macro_definition)
    (while_loop)
    (for_loop)
    (if_statement)
] @indent.begin

(if_statement [ "else" "elif" ] @indent.branch)

"end" @indent.branch

(macro_definition (error_handler) @indent.branch)

(comment) @indent.auto
