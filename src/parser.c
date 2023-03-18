#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 127
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  sym_comment = 1,
  aux_sym__end_token1 = 2,
  anon_sym_SEMI = 3,
  aux_sym__variable_definition_block_token1 = 4,
  anon_sym_COMMA = 5,
  aux_sym_class_definition_token1 = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  aux_sym_function_definition_token1 = 9,
  anon_sym_COLON = 10,
  aux_sym_scalar_type_token1 = 11,
  aux_sym_scalar_type_token2 = 12,
  aux_sym_scalar_type_token3 = 13,
  aux_sym_object_type_token1 = 14,
  aux_sym_object_type_token2 = 15,
  aux_sym_object_type_token3 = 16,
  aux_sym_object_type_token4 = 17,
  aux_sym_object_type_token5 = 18,
  aux_sym_return_statement_token1 = 19,
  anon_sym_DOT = 20,
  anon_sym_STAR = 21,
  anon_sym_SLASH = 22,
  anon_sym_PLUS = 23,
  anon_sym_DASH = 24,
  sym_assignment_operator = 25,
  sym_identifier = 26,
  sym_number = 27,
  sym_string_literal = 28,
  sym_unit = 29,
  sym__definition = 30,
  sym__end = 31,
  sym_variable_definition = 32,
  sym__variable_definition_block = 33,
  sym_class_definition = 34,
  sym_class_body = 35,
  sym_parent_classes = 36,
  sym_function_definition = 37,
  sym_type_hint = 38,
  sym_parameter_list = 39,
  sym_argument_list = 40,
  sym__type = 41,
  sym_scalar_type = 42,
  sym_object_type = 43,
  sym_block = 44,
  sym__statement = 45,
  sym_return_statement = 46,
  sym_function_call = 47,
  sym_variable_assignment = 48,
  sym__expression = 49,
  sym_qualification_prefix = 50,
  sym_binary_expression = 51,
  sym_binary_operator = 52,
  sym_multiplication_operator = 53,
  sym_add_operator = 54,
  aux_sym_unit_repeat1 = 55,
  aux_sym__variable_definition_block_repeat1 = 56,
  aux_sym_class_body_repeat1 = 57,
  aux_sym_parent_classes_repeat1 = 58,
  aux_sym_parameter_list_repeat1 = 59,
  aux_sym_argument_list_repeat1 = 60,
  aux_sym_block_repeat1 = 61,
  aux_sym_function_call_repeat1 = 62,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [aux_sym__end_token1] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym__variable_definition_block_token1] = "var",
  [anon_sym_COMMA] = ",",
  [aux_sym_class_definition_token1] = "class",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_function_definition_token1] = "macro",
  [anon_sym_COLON] = ":",
  [aux_sym_scalar_type_token1] = "bool",
  [aux_sym_scalar_type_token2] = "integer",
  [aux_sym_scalar_type_token3] = "string",
  [aux_sym_object_type_token1] = "tbfile",
  [aux_sym_object_type_token2] = "trechandler",
  [aux_sym_object_type_token3] = "tarray",
  [aux_sym_object_type_token4] = "tstreamdoc",
  [aux_sym_object_type_token5] = "object",
  [aux_sym_return_statement_token1] = "return",
  [anon_sym_DOT] = ".",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym_assignment_operator] = "assignment_operator",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_string_literal] = "string_literal",
  [sym_unit] = "unit",
  [sym__definition] = "_definition",
  [sym__end] = "_end",
  [sym_variable_definition] = "variable_definition",
  [sym__variable_definition_block] = "_variable_definition_block",
  [sym_class_definition] = "class_definition",
  [sym_class_body] = "class_body",
  [sym_parent_classes] = "parent_classes",
  [sym_function_definition] = "function_definition",
  [sym_type_hint] = "type_hint",
  [sym_parameter_list] = "parameter_list",
  [sym_argument_list] = "argument_list",
  [sym__type] = "_type",
  [sym_scalar_type] = "scalar_type",
  [sym_object_type] = "object_type",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym_function_call] = "function_call",
  [sym_variable_assignment] = "variable_assignment",
  [sym__expression] = "_expression",
  [sym_qualification_prefix] = "qualification_prefix",
  [sym_binary_expression] = "binary_expression",
  [sym_binary_operator] = "binary_operator",
  [sym_multiplication_operator] = "multiplication_operator",
  [sym_add_operator] = "add_operator",
  [aux_sym_unit_repeat1] = "unit_repeat1",
  [aux_sym__variable_definition_block_repeat1] = "_variable_definition_block_repeat1",
  [aux_sym_class_body_repeat1] = "class_body_repeat1",
  [aux_sym_parent_classes_repeat1] = "parent_classes_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [aux_sym__end_token1] = aux_sym__end_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym__variable_definition_block_token1] = aux_sym__variable_definition_block_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_class_definition_token1] = aux_sym_class_definition_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_function_definition_token1] = aux_sym_function_definition_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_scalar_type_token1] = aux_sym_scalar_type_token1,
  [aux_sym_scalar_type_token2] = aux_sym_scalar_type_token2,
  [aux_sym_scalar_type_token3] = aux_sym_scalar_type_token3,
  [aux_sym_object_type_token1] = aux_sym_object_type_token1,
  [aux_sym_object_type_token2] = aux_sym_object_type_token2,
  [aux_sym_object_type_token3] = aux_sym_object_type_token3,
  [aux_sym_object_type_token4] = aux_sym_object_type_token4,
  [aux_sym_object_type_token5] = aux_sym_object_type_token5,
  [aux_sym_return_statement_token1] = aux_sym_return_statement_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_assignment_operator] = sym_assignment_operator,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_string_literal] = sym_string_literal,
  [sym_unit] = sym_unit,
  [sym__definition] = sym__definition,
  [sym__end] = sym__end,
  [sym_variable_definition] = sym_variable_definition,
  [sym__variable_definition_block] = sym__variable_definition_block,
  [sym_class_definition] = sym_class_definition,
  [sym_class_body] = sym_class_body,
  [sym_parent_classes] = sym_parent_classes,
  [sym_function_definition] = sym_function_definition,
  [sym_type_hint] = sym_type_hint,
  [sym_parameter_list] = sym_parameter_list,
  [sym_argument_list] = sym_argument_list,
  [sym__type] = sym__type,
  [sym_scalar_type] = sym_scalar_type,
  [sym_object_type] = sym_object_type,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym_function_call] = sym_function_call,
  [sym_variable_assignment] = sym_variable_assignment,
  [sym__expression] = sym__expression,
  [sym_qualification_prefix] = sym_qualification_prefix,
  [sym_binary_expression] = sym_binary_expression,
  [sym_binary_operator] = sym_binary_operator,
  [sym_multiplication_operator] = sym_multiplication_operator,
  [sym_add_operator] = sym_add_operator,
  [aux_sym_unit_repeat1] = aux_sym_unit_repeat1,
  [aux_sym__variable_definition_block_repeat1] = aux_sym__variable_definition_block_repeat1,
  [aux_sym_class_body_repeat1] = aux_sym_class_body_repeat1,
  [aux_sym_parent_classes_repeat1] = aux_sym_parent_classes_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__end_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__variable_definition_block_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_class_definition_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_definition_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_scalar_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_scalar_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_scalar_type_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_object_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_object_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_object_type_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_object_type_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_object_type_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_return_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_assignment_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__variable_definition_block] = {
    .visible = false,
    .named = true,
  },
  [sym_class_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_class_body] = {
    .visible = true,
    .named = true,
  },
  [sym_parent_classes] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type_hint] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_scalar_type] = {
    .visible = true,
    .named = true,
  },
  [sym_object_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_qualification_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplication_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_add_operator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__variable_definition_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parent_classes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_function_body = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function_body] = "function_body",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function_body, 3},
  [1] =
    {field_function_body, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 40,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 46,
  [61] = 44,
  [62] = 53,
  [63] = 59,
  [64] = 52,
  [65] = 65,
  [66] = 55,
  [67] = 51,
  [68] = 47,
  [69] = 54,
  [70] = 45,
  [71] = 71,
  [72] = 53,
  [73] = 73,
  [74] = 54,
  [75] = 51,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 83,
  [85] = 85,
  [86] = 79,
  [87] = 87,
  [88] = 80,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 85,
  [99] = 99,
  [100] = 79,
  [101] = 101,
  [102] = 102,
  [103] = 80,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 107,
  [109] = 107,
  [110] = 110,
  [111] = 111,
  [112] = 106,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 115,
  [121] = 115,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 114,
  [126] = 126,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(72);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == ';') ADVANCE(78);
      if (lookahead == '=') ADVANCE(104);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(49);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(45);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(8);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(15);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(26);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(63);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(12);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(124);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(105);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(74);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '=') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 8:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 10:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(60);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(25);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(67);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 18:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 19:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 20:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 21:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 33:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 34:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(14);
      END_STATE();
    case 35:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(27);
      END_STATE();
    case 38:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 39:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 40:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 41:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 42:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 43:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 44:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 45:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 46:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 47:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 49:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 51:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 52:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 53:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 54:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 55:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 56:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 57:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 58:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 59:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 60:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      END_STATE();
    case 62:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(61);
      END_STATE();
    case 63:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(52);
      END_STATE();
    case 64:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 66:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(23);
      END_STATE();
    case 67:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 68:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 69:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(75);
      END_STATE();
    case 71:
      if (eof) ADVANCE(72);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(78);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(111);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(105);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(70);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__end_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__end_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__variable_definition_block_token1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__variable_definition_block_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_class_definition_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_class_definition_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_function_definition_token1);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_function_definition_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_scalar_type_token1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_scalar_type_token2);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_scalar_type_token3);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_object_type_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_object_type_token2);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_object_type_token3);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_object_type_token4);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_object_type_token5);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_return_statement_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_return_statement_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(74);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_assignment_operator);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 71},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 71},
  [5] = {.lex_state = 71},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 71},
  [41] = {.lex_state = 71},
  [42] = {.lex_state = 71},
  [43] = {.lex_state = 71},
  [44] = {.lex_state = 71},
  [45] = {.lex_state = 71},
  [46] = {.lex_state = 71},
  [47] = {.lex_state = 71},
  [48] = {.lex_state = 71},
  [49] = {.lex_state = 71},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 71},
  [52] = {.lex_state = 71},
  [53] = {.lex_state = 71},
  [54] = {.lex_state = 71},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym__end_token1] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym__variable_definition_block_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_class_definition_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_function_definition_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_scalar_type_token1] = ACTIONS(1),
    [aux_sym_scalar_type_token2] = ACTIONS(1),
    [aux_sym_scalar_type_token3] = ACTIONS(1),
    [aux_sym_object_type_token1] = ACTIONS(1),
    [aux_sym_object_type_token2] = ACTIONS(1),
    [aux_sym_object_type_token3] = ACTIONS(1),
    [aux_sym_object_type_token4] = ACTIONS(1),
    [aux_sym_object_type_token5] = ACTIONS(1),
    [aux_sym_return_statement_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_assignment_operator] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_unit] = STATE(118),
    [sym__definition] = STATE(5),
    [sym__variable_definition_block] = STATE(5),
    [sym_class_definition] = STATE(5),
    [sym_function_definition] = STATE(5),
    [sym__statement] = STATE(5),
    [sym_return_statement] = STATE(120),
    [sym_function_call] = STATE(120),
    [sym_variable_assignment] = STATE(120),
    [sym_qualification_prefix] = STATE(89),
    [aux_sym_unit_repeat1] = STATE(5),
    [aux_sym_function_call_repeat1] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym__variable_definition_block_token1] = ACTIONS(7),
    [aux_sym_class_definition_token1] = ACTIONS(9),
    [aux_sym_function_definition_token1] = ACTIONS(11),
    [aux_sym_return_statement_token1] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_return_statement_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      aux_sym__end_token1,
    ACTIONS(19), 1,
      aux_sym__variable_definition_block_token1,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_function_definition_token1,
    STATE(6), 1,
      sym_parameter_list,
    STATE(41), 1,
      sym__end,
    STATE(43), 1,
      sym_class_body,
    STATE(89), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
    STATE(115), 3,
      sym_return_statement,
      sym_function_call,
      sym_variable_assignment,
    STATE(10), 4,
      sym__variable_definition_block,
      sym_function_definition,
      sym__statement,
      aux_sym_class_body_repeat1,
  [46] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_return_statement_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      aux_sym__end_token1,
    ACTIONS(19), 1,
      aux_sym__variable_definition_block_token1,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_function_definition_token1,
    STATE(9), 1,
      sym_parameter_list,
    STATE(41), 1,
      sym__end,
    STATE(49), 1,
      sym_class_body,
    STATE(89), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
    STATE(115), 3,
      sym_return_statement,
      sym_function_call,
      sym_variable_assignment,
    STATE(10), 4,
      sym__variable_definition_block,
      sym_function_definition,
      sym__statement,
      aux_sym_class_body_repeat1,
  [92] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      aux_sym__variable_definition_block_token1,
    ACTIONS(30), 1,
      aux_sym_class_definition_token1,
    ACTIONS(33), 1,
      aux_sym_function_definition_token1,
    ACTIONS(36), 1,
      aux_sym_return_statement_token1,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(89), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
    STATE(120), 3,
      sym_return_statement,
      sym_function_call,
      sym_variable_assignment,
    STATE(4), 6,
      sym__definition,
      sym__variable_definition_block,
      sym_class_definition,
      sym_function_definition,
      sym__statement,
      aux_sym_unit_repeat1,
  [131] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym__variable_definition_block_token1,
    ACTIONS(9), 1,
      aux_sym_class_definition_token1,
    ACTIONS(11), 1,
      aux_sym_function_definition_token1,
    ACTIONS(13), 1,
      aux_sym_return_statement_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(89), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
    STATE(120), 3,
      sym_return_statement,
      sym_function_call,
      sym_variable_assignment,
    STATE(4), 6,
      sym__definition,
      sym__variable_definition_block,
      sym_class_definition,
      sym_function_definition,
      sym__statement,
      aux_sym_unit_repeat1,
  [170] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_return_statement_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      aux_sym__end_token1,
    ACTIONS(19), 1,
      aux_sym__variable_definition_block_token1,
    ACTIONS(23), 1,
      aux_sym_function_definition_token1,
    STATE(41), 1,
      sym__end,
    STATE(49), 1,
      sym_class_body,
    STATE(89), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
    STATE(115), 3,
      sym_return_statement,
      sym_function_call,
      sym_variable_assignment,
    STATE(10), 4,
      sym__variable_definition_block,
      sym_function_definition,
      sym__statement,
      aux_sym_class_body_repeat1,
  [210] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_return_statement_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      aux_sym__end_token1,
    ACTIONS(44), 1,
      aux_sym__variable_definition_block_token1,
    ACTIONS(46), 1,
      anon_sym_COLON,
    STATE(13), 1,
      sym_type_hint,
    STATE(44), 1,
      sym_block,
    STATE(46), 1,
      sym__end,
    STATE(89), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
    STATE(15), 3,
      sym__variable_definition_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(121), 3,
      sym_return_statement,
      sym_function_call,
      sym_variable_assignment,
  [252] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_return_statement_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(44), 1,
      aux_sym__variable_definition_block_token1,
    ACTIONS(46), 1,
      anon_sym_COLON,
    ACTIONS(48), 1,
      aux_sym__end_token1,
    STATE(12), 1,
      sym_type_hint,
    STATE(60), 1,
      sym__end,
    STATE(61), 1,
      sym_block,
    STATE(89), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
    STATE(14), 3,
      sym__variable_definition_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(121), 3,
      sym_return_statement,
      sym_function_call,
      sym_variable_assignment,
  [294] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_return_statement_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      aux_sym__end_token1,
    ACTIONS(19), 1,
      aux_sym__variable_definition_block_token1,
    ACTIONS(23), 1,
      aux_sym_function_definition_token1,
    STATE(41), 1,
      sym__end,
    STATE(48), 1,
      sym_class_body,
    STATE(89), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
    STATE(115), 3,
      sym_return_statement,
      sym_function_call,
      sym_variable_assignment,
    STATE(10), 4,
      sym__variable_definition_block,
      sym_function_definition,
      sym__statement,
      aux_sym_class_body_repeat1,
  [334] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_return_statement_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      aux_sym__end_token1,
    ACTIONS(19), 1,
      aux_sym__variable_definition_block_token1,
    ACTIONS(23), 1,
      aux_sym_function_definition_token1,
    STATE(42), 1,
      sym__end,
    STATE(89), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
    STATE(115), 3,
      sym_return_statement,
      sym_function_call,
      sym_variable_assignment,
    STATE(11), 4,
      sym__variable_definition_block,
      sym_function_definition,
      sym__statement,
      aux_sym_class_body_repeat1,
  [371] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      aux_sym__end_token1,
    ACTIONS(52), 1,
      aux_sym__variable_definition_block_token1,
    ACTIONS(55), 1,
      aux_sym_function_definition_token1,
    ACTIONS(58), 1,
      aux_sym_return_statement_token1,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(89), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
    STATE(115), 3,
      sym_return_statement,
      sym_function_call,
      sym_variable_assignment,
    STATE(11), 4,
      sym__variable_definition_block,
      sym_function_definition,
      sym__statement,
      aux_sym_class_body_repeat1,
  [405] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_return_statement_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(44), 1,
      aux_sym__variable_definition_block_token1,
    ACTIONS(48), 1,
      aux_sym__end_token1,
    STATE(60), 1,
      sym__end,
    STATE(68), 1,
      sym_block,
    STATE(89), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
    STATE(14), 3,
      sym__variable_definition_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(121), 3,
      sym_return_statement,
      sym_function_call,
      sym_variable_assignment,
  [441] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_return_statement_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      aux_sym__end_token1,
    ACTIONS(44), 1,
      aux_sym__variable_definition_block_token1,
    STATE(46), 1,
      sym__end,
    STATE(47), 1,
      sym_block,
    STATE(89), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
    STATE(15), 3,
      sym__variable_definition_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(121), 3,
      sym_return_statement,
      sym_function_call,
      sym_variable_assignment,
  [477] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_return_statement_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(44), 1,
      aux_sym__variable_definition_block_token1,
    ACTIONS(48), 1,
      aux_sym__end_token1,
    STATE(70), 1,
      sym__end,
    STATE(89), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
    STATE(16), 3,
      sym__variable_definition_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(121), 3,
      sym_return_statement,
      sym_function_call,
      sym_variable_assignment,
  [510] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_return_statement_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      aux_sym__end_token1,
    ACTIONS(44), 1,
      aux_sym__variable_definition_block_token1,
    STATE(45), 1,
      sym__end,
    STATE(89), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
    STATE(16), 3,
      sym__variable_definition_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(121), 3,
      sym_return_statement,
      sym_function_call,
      sym_variable_assignment,
  [543] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      aux_sym__end_token1,
    ACTIONS(66), 1,
      aux_sym__variable_definition_block_token1,
    ACTIONS(69), 1,
      aux_sym_return_statement_token1,
    ACTIONS(72), 1,
      sym_identifier,
    STATE(89), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
    STATE(16), 3,
      sym__variable_definition_block,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(121), 3,
      sym_return_statement,
      sym_function_call,
      sym_variable_assignment,
  [573] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(85), 1,
      sym_assignment_operator,
    STATE(36), 1,
      sym_binary_operator,
    STATE(82), 1,
      aux_sym_argument_list_repeat1,
    STATE(92), 1,
      sym_add_operator,
    STATE(93), 1,
      sym_multiplication_operator,
    ACTIONS(83), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [608] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    STATE(36), 1,
      sym_binary_operator,
    STATE(92), 1,
      sym_add_operator,
    STATE(93), 1,
      sym_multiplication_operator,
    ACTIONS(87), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_assignment_operator,
  [633] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_SLASH,
    STATE(29), 1,
      sym_argument_list,
    ACTIONS(91), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_assignment_operator,
  [658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 3,
      aux_sym_scalar_type_token1,
      aux_sym_scalar_type_token2,
      aux_sym_scalar_type_token3,
    STATE(58), 3,
      sym__type,
      sym_scalar_type,
      sym_object_type,
    ACTIONS(101), 5,
      aux_sym_object_type_token1,
      aux_sym_object_type_token2,
      aux_sym_object_type_token3,
      aux_sym_object_type_token4,
      aux_sym_object_type_token5,
  [679] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(85), 1,
      sym_assignment_operator,
    STATE(36), 1,
      sym_binary_operator,
    STATE(92), 1,
      sym_add_operator,
    STATE(93), 1,
      sym_multiplication_operator,
    ACTIONS(83), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [709] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(85), 1,
      sym_assignment_operator,
    STATE(36), 1,
      sym_binary_operator,
    STATE(92), 1,
      sym_add_operator,
    STATE(93), 1,
      sym_multiplication_operator,
    ACTIONS(83), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [739] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(85), 1,
      sym_assignment_operator,
    STATE(36), 1,
      sym_binary_operator,
    STATE(92), 1,
      sym_add_operator,
    STATE(93), 1,
      sym_multiplication_operator,
    ACTIONS(83), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(107), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [769] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(85), 1,
      sym_assignment_operator,
    ACTIONS(109), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      sym_binary_operator,
    STATE(92), 1,
      sym_add_operator,
    STATE(93), 1,
      sym_multiplication_operator,
    ACTIONS(83), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [798] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 2,
      sym_number,
      sym_string_literal,
    STATE(102), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
    STATE(17), 3,
      sym_function_call,
      sym__expression,
      sym_binary_expression,
  [821] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(85), 1,
      sym_assignment_operator,
    ACTIONS(117), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      sym_binary_operator,
    STATE(92), 1,
      sym_add_operator,
    STATE(93), 1,
      sym_multiplication_operator,
    ACTIONS(83), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [850] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(85), 1,
      sym_assignment_operator,
    ACTIONS(119), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      sym_binary_operator,
    STATE(92), 1,
      sym_add_operator,
    STATE(93), 1,
      sym_multiplication_operator,
    ACTIONS(83), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [879] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(121), 2,
      sym_number,
      sym_string_literal,
    STATE(102), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
    STATE(24), 3,
      sym_function_call,
      sym__expression,
      sym_binary_expression,
  [899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_SLASH,
    ACTIONS(123), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_assignment_operator,
  [915] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(127), 2,
      sym_number,
      sym_string_literal,
    STATE(102), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
    STATE(27), 3,
      sym_function_call,
      sym__expression,
      sym_binary_expression,
  [935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_SLASH,
    ACTIONS(129), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_assignment_operator,
  [951] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(133), 2,
      sym_number,
      sym_string_literal,
    STATE(102), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
    STATE(21), 3,
      sym_function_call,
      sym__expression,
      sym_binary_expression,
  [971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_SLASH,
    ACTIONS(135), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_assignment_operator,
  [987] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(139), 2,
      sym_number,
      sym_string_literal,
    STATE(102), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
    STATE(23), 3,
      sym_function_call,
      sym__expression,
      sym_binary_expression,
  [1007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_SLASH,
    ACTIONS(141), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_assignment_operator,
  [1023] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(145), 2,
      sym_number,
      sym_string_literal,
    STATE(102), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
    STATE(18), 3,
      sym_function_call,
      sym__expression,
      sym_binary_expression,
  [1043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_SLASH,
    ACTIONS(147), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_assignment_operator,
  [1059] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(151), 2,
      sym_number,
      sym_string_literal,
    STATE(102), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
    STATE(26), 3,
      sym_function_call,
      sym__expression,
      sym_binary_expression,
  [1079] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(153), 2,
      sym_number,
      sym_string_literal,
    STATE(102), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
    STATE(22), 3,
      sym_function_call,
      sym__expression,
      sym_binary_expression,
  [1099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 1,
      anon_sym_SEMI,
    ACTIONS(159), 5,
      aux_sym__variable_definition_block_token1,
      aux_sym_class_definition_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 5,
      aux_sym__variable_definition_block_token1,
      aux_sym_class_definition_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 5,
      aux_sym__variable_definition_block_token1,
      aux_sym_class_definition_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 5,
      aux_sym__variable_definition_block_token1,
      aux_sym_class_definition_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 5,
      aux_sym__variable_definition_block_token1,
      aux_sym_class_definition_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 5,
      aux_sym__variable_definition_block_token1,
      aux_sym_class_definition_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 5,
      aux_sym__variable_definition_block_token1,
      aux_sym_class_definition_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 5,
      aux_sym__variable_definition_block_token1,
      aux_sym_class_definition_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 5,
      aux_sym__variable_definition_block_token1,
      aux_sym_class_definition_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 5,
      aux_sym__variable_definition_block_token1,
      aux_sym_class_definition_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    ACTIONS(159), 5,
      aux_sym__end_token1,
      aux_sym__variable_definition_block_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 5,
      aux_sym__variable_definition_block_token1,
      aux_sym_class_definition_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 5,
      aux_sym__variable_definition_block_token1,
      aux_sym_class_definition_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 5,
      aux_sym__variable_definition_block_token1,
      aux_sym_class_definition_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 5,
      aux_sym__variable_definition_block_token1,
      aux_sym_class_definition_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 5,
      aux_sym__end_token1,
      aux_sym__variable_definition_block_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_assignment_operator,
    ACTIONS(217), 4,
      aux_sym__end_token1,
      aux_sym__variable_definition_block_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_assignment_operator,
    ACTIONS(221), 4,
      aux_sym__end_token1,
      aux_sym__variable_definition_block_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym_assignment_operator,
    ACTIONS(225), 4,
      aux_sym__end_token1,
      aux_sym__variable_definition_block_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_COLON,
    ACTIONS(229), 4,
      aux_sym__end_token1,
      aux_sym__variable_definition_block_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 5,
      aux_sym__end_token1,
      aux_sym__variable_definition_block_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 5,
      aux_sym__end_token1,
      aux_sym__variable_definition_block_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 5,
      aux_sym__end_token1,
      aux_sym__variable_definition_block_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 5,
      aux_sym__end_token1,
      aux_sym__variable_definition_block_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 5,
      aux_sym__end_token1,
      aux_sym__variable_definition_block_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1430] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_COLON,
    ACTIONS(235), 1,
      sym_assignment_operator,
    STATE(122), 1,
      sym_type_hint,
    ACTIONS(233), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_COLON,
    ACTIONS(215), 4,
      aux_sym__end_token1,
      aux_sym__variable_definition_block_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 5,
      aux_sym__end_token1,
      aux_sym__variable_definition_block_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 5,
      aux_sym__end_token1,
      aux_sym__variable_definition_block_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 5,
      aux_sym__end_token1,
      aux_sym__variable_definition_block_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 5,
      aux_sym__end_token1,
      aux_sym__variable_definition_block_token1,
      aux_sym_function_definition_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1504] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(239), 1,
      sym_assignment_operator,
    STATE(33), 1,
      sym_argument_list,
  [1520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 4,
      aux_sym__end_token1,
      aux_sym__variable_definition_block_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1530] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(241), 1,
      sym_assignment_operator,
    STATE(29), 1,
      sym_argument_list,
  [1546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 4,
      aux_sym__end_token1,
      aux_sym__variable_definition_block_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 4,
      aux_sym__end_token1,
      aux_sym__variable_definition_block_token1,
      aux_sym_return_statement_token1,
      sym_identifier,
  [1566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym__variable_definition_block_repeat1,
  [1579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      sym_identifier,
    STATE(117), 1,
      sym_parent_classes,
  [1592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_parent_classes_repeat1,
  [1605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_SEMI,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym__variable_definition_block_repeat1,
  [1618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      aux_sym__variable_definition_block_repeat1,
  [1631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(264), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [1642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      aux_sym_argument_list_repeat1,
  [1655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    ACTIONS(270), 1,
      sym_identifier,
    STATE(90), 1,
      aux_sym_parameter_list_repeat1,
  [1668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      sym_identifier,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_parameter_list_repeat1,
  [1681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_parameter_list_repeat1,
  [1694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(276), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      aux_sym__variable_definition_block_repeat1,
  [1707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_parent_classes_repeat1,
  [1720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      aux_sym__variable_definition_block_repeat1,
  [1733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(101), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
  [1744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    ACTIONS(289), 1,
      sym_identifier,
    STATE(90), 1,
      aux_sym_parameter_list_repeat1,
  [1757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_DOT,
    STATE(33), 1,
      sym_argument_list,
  [1770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 3,
      sym_identifier,
      sym_number,
      sym_string_literal,
  [1779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 3,
      sym_identifier,
      sym_number,
      sym_string_literal,
  [1788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 3,
      sym_identifier,
      sym_number,
      sym_string_literal,
  [1797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 3,
      sym_identifier,
      sym_number,
      sym_string_literal,
  [1806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 3,
      sym_identifier,
      sym_number,
      sym_string_literal,
  [1815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_argument_list_repeat1,
  [1828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      sym_identifier,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_parameter_list_repeat1,
  [1841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_parent_classes_repeat1,
  [1854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      aux_sym__variable_definition_block_repeat1,
  [1867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_identifier,
    STATE(101), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
  [1878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym_identifier,
    STATE(101), 2,
      sym_qualification_prefix,
      aux_sym_function_call_repeat1,
  [1889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_SEMI,
    STATE(100), 1,
      aux_sym__variable_definition_block_repeat1,
  [1902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_identifier,
    STATE(105), 1,
      sym_variable_definition,
  [1912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_parameter_list,
  [1930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_identifier,
    STATE(80), 1,
      sym_variable_definition,
  [1940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_identifier,
    STATE(88), 1,
      sym_variable_definition,
  [1950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_identifier,
    STATE(103), 1,
      sym_variable_definition,
  [1960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [1976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym_parameter_list,
  [1986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_identifier,
  [1993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_identifier,
  [2000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SEMI,
  [2007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_DOT,
  [2014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_identifier,
  [2021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
  [2028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_identifier,
  [2035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_SEMI,
  [2042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_SEMI,
  [2049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym_assignment_operator,
  [2056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym_identifier,
  [2063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_identifier,
  [2070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym_identifier,
  [2077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 131,
  [SMALL_STATE(6)] = 170,
  [SMALL_STATE(7)] = 210,
  [SMALL_STATE(8)] = 252,
  [SMALL_STATE(9)] = 294,
  [SMALL_STATE(10)] = 334,
  [SMALL_STATE(11)] = 371,
  [SMALL_STATE(12)] = 405,
  [SMALL_STATE(13)] = 441,
  [SMALL_STATE(14)] = 477,
  [SMALL_STATE(15)] = 510,
  [SMALL_STATE(16)] = 543,
  [SMALL_STATE(17)] = 573,
  [SMALL_STATE(18)] = 608,
  [SMALL_STATE(19)] = 633,
  [SMALL_STATE(20)] = 658,
  [SMALL_STATE(21)] = 679,
  [SMALL_STATE(22)] = 709,
  [SMALL_STATE(23)] = 739,
  [SMALL_STATE(24)] = 769,
  [SMALL_STATE(25)] = 798,
  [SMALL_STATE(26)] = 821,
  [SMALL_STATE(27)] = 850,
  [SMALL_STATE(28)] = 879,
  [SMALL_STATE(29)] = 899,
  [SMALL_STATE(30)] = 915,
  [SMALL_STATE(31)] = 935,
  [SMALL_STATE(32)] = 951,
  [SMALL_STATE(33)] = 971,
  [SMALL_STATE(34)] = 987,
  [SMALL_STATE(35)] = 1007,
  [SMALL_STATE(36)] = 1023,
  [SMALL_STATE(37)] = 1043,
  [SMALL_STATE(38)] = 1059,
  [SMALL_STATE(39)] = 1079,
  [SMALL_STATE(40)] = 1099,
  [SMALL_STATE(41)] = 1116,
  [SMALL_STATE(42)] = 1130,
  [SMALL_STATE(43)] = 1144,
  [SMALL_STATE(44)] = 1158,
  [SMALL_STATE(45)] = 1172,
  [SMALL_STATE(46)] = 1186,
  [SMALL_STATE(47)] = 1200,
  [SMALL_STATE(48)] = 1214,
  [SMALL_STATE(49)] = 1228,
  [SMALL_STATE(50)] = 1242,
  [SMALL_STATE(51)] = 1256,
  [SMALL_STATE(52)] = 1270,
  [SMALL_STATE(53)] = 1284,
  [SMALL_STATE(54)] = 1298,
  [SMALL_STATE(55)] = 1312,
  [SMALL_STATE(56)] = 1323,
  [SMALL_STATE(57)] = 1336,
  [SMALL_STATE(58)] = 1349,
  [SMALL_STATE(59)] = 1362,
  [SMALL_STATE(60)] = 1375,
  [SMALL_STATE(61)] = 1386,
  [SMALL_STATE(62)] = 1397,
  [SMALL_STATE(63)] = 1408,
  [SMALL_STATE(64)] = 1419,
  [SMALL_STATE(65)] = 1430,
  [SMALL_STATE(66)] = 1447,
  [SMALL_STATE(67)] = 1460,
  [SMALL_STATE(68)] = 1471,
  [SMALL_STATE(69)] = 1482,
  [SMALL_STATE(70)] = 1493,
  [SMALL_STATE(71)] = 1504,
  [SMALL_STATE(72)] = 1520,
  [SMALL_STATE(73)] = 1530,
  [SMALL_STATE(74)] = 1546,
  [SMALL_STATE(75)] = 1556,
  [SMALL_STATE(76)] = 1566,
  [SMALL_STATE(77)] = 1579,
  [SMALL_STATE(78)] = 1592,
  [SMALL_STATE(79)] = 1605,
  [SMALL_STATE(80)] = 1618,
  [SMALL_STATE(81)] = 1631,
  [SMALL_STATE(82)] = 1642,
  [SMALL_STATE(83)] = 1655,
  [SMALL_STATE(84)] = 1668,
  [SMALL_STATE(85)] = 1681,
  [SMALL_STATE(86)] = 1694,
  [SMALL_STATE(87)] = 1707,
  [SMALL_STATE(88)] = 1720,
  [SMALL_STATE(89)] = 1733,
  [SMALL_STATE(90)] = 1744,
  [SMALL_STATE(91)] = 1757,
  [SMALL_STATE(92)] = 1770,
  [SMALL_STATE(93)] = 1779,
  [SMALL_STATE(94)] = 1788,
  [SMALL_STATE(95)] = 1797,
  [SMALL_STATE(96)] = 1806,
  [SMALL_STATE(97)] = 1815,
  [SMALL_STATE(98)] = 1828,
  [SMALL_STATE(99)] = 1841,
  [SMALL_STATE(100)] = 1854,
  [SMALL_STATE(101)] = 1867,
  [SMALL_STATE(102)] = 1878,
  [SMALL_STATE(103)] = 1889,
  [SMALL_STATE(104)] = 1902,
  [SMALL_STATE(105)] = 1912,
  [SMALL_STATE(106)] = 1920,
  [SMALL_STATE(107)] = 1930,
  [SMALL_STATE(108)] = 1940,
  [SMALL_STATE(109)] = 1950,
  [SMALL_STATE(110)] = 1960,
  [SMALL_STATE(111)] = 1968,
  [SMALL_STATE(112)] = 1976,
  [SMALL_STATE(113)] = 1986,
  [SMALL_STATE(114)] = 1993,
  [SMALL_STATE(115)] = 2000,
  [SMALL_STATE(116)] = 2007,
  [SMALL_STATE(117)] = 2014,
  [SMALL_STATE(118)] = 2021,
  [SMALL_STATE(119)] = 2028,
  [SMALL_STATE(120)] = 2035,
  [SMALL_STATE(121)] = 2042,
  [SMALL_STATE(122)] = 2049,
  [SMALL_STATE(123)] = 2056,
  [SMALL_STATE(124)] = 2063,
  [SMALL_STATE(125)] = 2070,
  [SMALL_STATE(126)] = 2077,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(109),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(77),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(114),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(38),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(73),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(108),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(125),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(38),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(73),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(107),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(38),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(73),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_body, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_body, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 5),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_definition_block, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_definition_block, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_definition_block, 4),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_definition_block, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_type, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_type, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_hint, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_hint, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__variable_definition_block_repeat1, 2),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__variable_definition_block_repeat1, 2), SHIFT_REPEAT(104),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parent_classes_repeat1, 2), SHIFT_REPEAT(123),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parent_classes_repeat1, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(81),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_operator, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplication_operator, 1),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(39),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(116),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualification_prefix, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [326] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent_classes, 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent_classes, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rsl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
