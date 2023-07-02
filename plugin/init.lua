local function get_tree_sitter_rsl_path()
    local ending = "tree-sitter-rsl/queries"
    local all_queries = vim.api.nvim_get_runtime_file('queries', true)
    for i, x in pairs(all_queries) do
        if x:sub(-#ending) == ending then
            return x:sub(1, - #"/queries" - 1)
        end
    end
    return nil
end

local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
parser_config.rsl = {
  install_info = {
    url = get_tree_sitter_rsl_path(),
    files = {"src/parser.c"},
    generate_requires_npm = false,
    requires_generate_from_grammar = false,
  },
  filetype = "mac",
}
