;"macro" @indent.begin
(macro_definition) @indent.begin

 ; "end" @indent.branch

(if_statement) @indent.begin
(if_statement "elif") @indent.branch
(if_statement "else") @indent.branch
