#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 92
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment_inline = 1,
  sym_comment_block = 2,
  anon_sym_EQ = 3,
  aux_sym_variable_definition_token1 = 4,
  anon_sym_COMMA = 5,
  anon_sym_SEMI = 6,
  aux_sym_class_definition_token1 = 7,
  aux_sym_class_definition_token2 = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  aux_sym_function_definition_token1 = 11,
  anon_sym_COLON = 12,
  aux_sym_scalar_type_token1 = 13,
  aux_sym_scalar_type_token2 = 14,
  aux_sym_scalar_type_token3 = 15,
  aux_sym_object_type_token1 = 16,
  aux_sym_object_type_token2 = 17,
  aux_sym_object_type_token3 = 18,
  aux_sym_object_type_token4 = 19,
  aux_sym_object_type_token5 = 20,
  aux_sym_block_token1 = 21,
  anon_sym_return = 22,
  sym_identifier = 23,
  sym_number = 24,
  sym_string_literal = 25,
  sym_source_file = 26,
  sym__definition = 27,
  sym__comment = 28,
  sym_variable_definition_single = 29,
  sym_variable_definition = 30,
  sym_class_definition = 31,
  sym_parent_classes = 32,
  sym_function_definition = 33,
  sym_type_hint = 34,
  sym_parameter_list = 35,
  sym_argument_list = 36,
  sym__type = 37,
  sym_scalar_type = 38,
  sym_object_type = 39,
  sym_block = 40,
  sym__statement = 41,
  sym_return_statement = 42,
  sym_function_call = 43,
  sym__expression = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_variable_definition_repeat1 = 46,
  aux_sym_class_definition_repeat1 = 47,
  aux_sym_parent_classes_repeat1 = 48,
  aux_sym_parameter_list_repeat1 = 49,
  aux_sym_argument_list_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment_inline] = "comment_inline",
  [sym_comment_block] = "comment_block",
  [anon_sym_EQ] = "=",
  [aux_sym_variable_definition_token1] = "variable_definition_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [aux_sym_class_definition_token1] = "class_definition_token1",
  [aux_sym_class_definition_token2] = "class_definition_token2",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_function_definition_token1] = "function_definition_token1",
  [anon_sym_COLON] = ":",
  [aux_sym_scalar_type_token1] = "scalar_type_token1",
  [aux_sym_scalar_type_token2] = "scalar_type_token2",
  [aux_sym_scalar_type_token3] = "scalar_type_token3",
  [aux_sym_object_type_token1] = "object_type_token1",
  [aux_sym_object_type_token2] = "object_type_token2",
  [aux_sym_object_type_token3] = "object_type_token3",
  [aux_sym_object_type_token4] = "object_type_token4",
  [aux_sym_object_type_token5] = "object_type_token5",
  [aux_sym_block_token1] = "block_token1",
  [anon_sym_return] = "return",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_string_literal] = "string_literal",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__comment] = "_comment",
  [sym_variable_definition_single] = "variable_definition_single",
  [sym_variable_definition] = "variable_definition",
  [sym_class_definition] = "class_definition",
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
  [sym__expression] = "_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_variable_definition_repeat1] = "variable_definition_repeat1",
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
  [aux_sym_parent_classes_repeat1] = "parent_classes_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment_inline] = sym_comment_inline,
  [sym_comment_block] = sym_comment_block,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_variable_definition_token1] = aux_sym_variable_definition_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_class_definition_token1] = aux_sym_class_definition_token1,
  [aux_sym_class_definition_token2] = aux_sym_class_definition_token2,
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
  [aux_sym_block_token1] = aux_sym_block_token1,
  [anon_sym_return] = anon_sym_return,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_string_literal] = sym_string_literal,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__comment] = sym__comment,
  [sym_variable_definition_single] = sym_variable_definition_single,
  [sym_variable_definition] = sym_variable_definition,
  [sym_class_definition] = sym_class_definition,
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
  [sym__expression] = sym__expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_variable_definition_repeat1] = aux_sym_variable_definition_repeat1,
  [aux_sym_class_definition_repeat1] = aux_sym_class_definition_repeat1,
  [aux_sym_parent_classes_repeat1] = aux_sym_parent_classes_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment_inline] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_block] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_class_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_token2] = {
    .visible = false,
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
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_scalar_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scalar_type_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scalar_type_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_type_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_type_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_type_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_type_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_definition_single] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_class_definition] = {
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_repeat1] = {
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
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
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
  [29] = 11,
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
  [44] = 19,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 45,
  [50] = 50,
  [51] = 51,
  [52] = 23,
  [53] = 22,
  [54] = 21,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 61,
  [65] = 65,
  [66] = 66,
  [67] = 66,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 72,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 83,
  [89] = 89,
  [90] = 89,
  [91] = 91,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(75);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == ';') ADVANCE(82);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(56);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(51);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(15);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(22);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(69);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(19);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(125);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(115);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(109);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 9:
      if (lookahead == ';') ADVANCE(85);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(66);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(38);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(33);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(72);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 22:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 25:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 26:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 27:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 28:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 29:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 30:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(93);
      END_STATE();
    case 40:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 41:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 42:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(34);
      END_STATE();
    case 45:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 46:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 47:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 49:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 50:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 51:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 52:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 53:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 54:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 55:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 56:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 58:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 59:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 60:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 61:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 62:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 63:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 64:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 65:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 66:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      END_STATE();
    case 68:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(67);
      END_STATE();
    case 69:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 70:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(31);
      END_STATE();
    case 72:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 73:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(96);
      END_STATE();
    case 74:
      if (eof) ADVANCE(75);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(82);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(15);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      END_STATE();
    case 75:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_comment_inline);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment_block);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_variable_definition_token1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_variable_definition_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_class_definition_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_class_definition_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_class_definition_token2);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_function_definition_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_function_definition_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_scalar_type_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_scalar_type_token2);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_scalar_type_token3);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_object_type_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_object_type_token2);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_object_type_token3);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_object_type_token4);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_object_type_token5);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_block_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_block_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ';') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 74},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 74},
  [13] = {.lex_state = 74},
  [14] = {.lex_state = 74},
  [15] = {.lex_state = 74},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 74},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 74},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 74},
  [26] = {.lex_state = 74},
  [27] = {.lex_state = 74},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 74},
  [31] = {.lex_state = 74},
  [32] = {.lex_state = 74},
  [33] = {.lex_state = 74},
  [34] = {.lex_state = 74},
  [35] = {.lex_state = 74},
  [36] = {.lex_state = 74},
  [37] = {.lex_state = 74},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment_inline] = ACTIONS(1),
    [sym_comment_block] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_variable_definition_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [aux_sym_block_token1] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(80),
    [sym__definition] = STATE(10),
    [sym__comment] = STATE(10),
    [sym_variable_definition] = STATE(10),
    [sym_class_definition] = STATE(10),
    [sym_function_definition] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment_inline] = ACTIONS(5),
    [sym_comment_block] = ACTIONS(5),
    [aux_sym_variable_definition_token1] = ACTIONS(7),
    [aux_sym_class_definition_token1] = ACTIONS(9),
    [aux_sym_function_definition_token1] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(15), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(17), 1,
      aux_sym_class_definition_token1,
    ACTIONS(19), 1,
      aux_sym_class_definition_token2,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_function_definition_token1,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(6), 1,
      sym_parameter_list,
    ACTIONS(13), 2,
      sym_comment_inline,
      sym_comment_block,
    STATE(4), 4,
      sym__statement,
      sym_return_statement,
      sym_function_call,
      aux_sym_class_definition_repeat1,
    STATE(14), 6,
      sym__definition,
      sym__comment,
      sym_variable_definition,
      sym_class_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [43] = 11,
    ACTIONS(15), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(17), 1,
      aux_sym_class_definition_token1,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_function_definition_token1,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(31), 1,
      aux_sym_class_definition_token2,
    STATE(7), 1,
      sym_parameter_list,
    ACTIONS(29), 2,
      sym_comment_inline,
      sym_comment_block,
    STATE(5), 4,
      sym__statement,
      sym_return_statement,
      sym_function_call,
      aux_sym_class_definition_repeat1,
    STATE(13), 6,
      sym__definition,
      sym__comment,
      sym_variable_definition,
      sym_class_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [86] = 9,
    ACTIONS(15), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(17), 1,
      aux_sym_class_definition_token1,
    ACTIONS(23), 1,
      aux_sym_function_definition_token1,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(31), 1,
      aux_sym_class_definition_token2,
    ACTIONS(29), 2,
      sym_comment_inline,
      sym_comment_block,
    STATE(11), 4,
      sym__statement,
      sym_return_statement,
      sym_function_call,
      aux_sym_class_definition_repeat1,
    STATE(13), 6,
      sym__definition,
      sym__comment,
      sym_variable_definition,
      sym_class_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [123] = 9,
    ACTIONS(15), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(17), 1,
      aux_sym_class_definition_token1,
    ACTIONS(23), 1,
      aux_sym_function_definition_token1,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(35), 1,
      aux_sym_class_definition_token2,
    ACTIONS(33), 2,
      sym_comment_inline,
      sym_comment_block,
    STATE(11), 4,
      sym__statement,
      sym_return_statement,
      sym_function_call,
      aux_sym_class_definition_repeat1,
    STATE(12), 6,
      sym__definition,
      sym__comment,
      sym_variable_definition,
      sym_class_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [160] = 9,
    ACTIONS(15), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(17), 1,
      aux_sym_class_definition_token1,
    ACTIONS(23), 1,
      aux_sym_function_definition_token1,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(31), 1,
      aux_sym_class_definition_token2,
    ACTIONS(29), 2,
      sym_comment_inline,
      sym_comment_block,
    STATE(5), 4,
      sym__statement,
      sym_return_statement,
      sym_function_call,
      aux_sym_class_definition_repeat1,
    STATE(13), 6,
      sym__definition,
      sym__comment,
      sym_variable_definition,
      sym_class_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [197] = 9,
    ACTIONS(15), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(17), 1,
      aux_sym_class_definition_token1,
    ACTIONS(23), 1,
      aux_sym_function_definition_token1,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(35), 1,
      aux_sym_class_definition_token2,
    ACTIONS(33), 2,
      sym_comment_inline,
      sym_comment_block,
    STATE(8), 4,
      sym__statement,
      sym_return_statement,
      sym_function_call,
      aux_sym_class_definition_repeat1,
    STATE(12), 6,
      sym__definition,
      sym__comment,
      sym_variable_definition,
      sym_class_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [234] = 9,
    ACTIONS(15), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(17), 1,
      aux_sym_class_definition_token1,
    ACTIONS(23), 1,
      aux_sym_function_definition_token1,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym_class_definition_token2,
    ACTIONS(37), 2,
      sym_comment_inline,
      sym_comment_block,
    STATE(11), 4,
      sym__statement,
      sym_return_statement,
      sym_function_call,
      aux_sym_class_definition_repeat1,
    STATE(15), 6,
      sym__definition,
      sym__comment,
      sym_variable_definition,
      sym_class_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [271] = 6,
    ACTIONS(46), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(49), 1,
      aux_sym_class_definition_token1,
    ACTIONS(52), 1,
      aux_sym_function_definition_token1,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      aux_sym_class_definition_token2,
    ACTIONS(43), 2,
      sym_comment_inline,
      sym_comment_block,
    STATE(9), 6,
      sym__definition,
      sym__comment,
      sym_variable_definition,
      sym_class_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [297] = 6,
    ACTIONS(7), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(9), 1,
      aux_sym_class_definition_token1,
    ACTIONS(11), 1,
      aux_sym_function_definition_token1,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 2,
      sym_comment_inline,
      sym_comment_block,
    STATE(9), 6,
      sym__definition,
      sym__comment,
      sym_variable_definition,
      sym_class_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [322] = 5,
    ACTIONS(63), 1,
      anon_sym_return,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(59), 3,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_class_definition_token2,
    ACTIONS(61), 3,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_function_definition_token1,
    STATE(11), 4,
      sym__statement,
      sym_return_statement,
      sym_function_call,
      aux_sym_class_definition_repeat1,
  [345] = 6,
    ACTIONS(7), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(9), 1,
      aux_sym_class_definition_token1,
    ACTIONS(11), 1,
      aux_sym_function_definition_token1,
    ACTIONS(39), 1,
      aux_sym_class_definition_token2,
    ACTIONS(57), 2,
      sym_comment_inline,
      sym_comment_block,
    STATE(9), 6,
      sym__definition,
      sym__comment,
      sym_variable_definition,
      sym_class_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [370] = 6,
    ACTIONS(7), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(9), 1,
      aux_sym_class_definition_token1,
    ACTIONS(11), 1,
      aux_sym_function_definition_token1,
    ACTIONS(35), 1,
      aux_sym_class_definition_token2,
    ACTIONS(57), 2,
      sym_comment_inline,
      sym_comment_block,
    STATE(9), 6,
      sym__definition,
      sym__comment,
      sym_variable_definition,
      sym_class_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [395] = 6,
    ACTIONS(7), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(9), 1,
      aux_sym_class_definition_token1,
    ACTIONS(11), 1,
      aux_sym_function_definition_token1,
    ACTIONS(31), 1,
      aux_sym_class_definition_token2,
    ACTIONS(57), 2,
      sym_comment_inline,
      sym_comment_block,
    STATE(9), 6,
      sym__definition,
      sym__comment,
      sym_variable_definition,
      sym_class_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [420] = 6,
    ACTIONS(7), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(9), 1,
      aux_sym_class_definition_token1,
    ACTIONS(11), 1,
      aux_sym_function_definition_token1,
    ACTIONS(69), 1,
      aux_sym_class_definition_token2,
    ACTIONS(57), 2,
      sym_comment_inline,
      sym_comment_block,
    STATE(9), 6,
      sym__definition,
      sym__comment,
      sym_variable_definition,
      sym_class_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [445] = 3,
    ACTIONS(71), 3,
      aux_sym_scalar_type_token1,
      aux_sym_scalar_type_token2,
      aux_sym_scalar_type_token3,
    STATE(50), 3,
      sym__type,
      sym_scalar_type,
      sym_object_type,
    ACTIONS(73), 5,
      aux_sym_object_type_token1,
      aux_sym_object_type_token2,
      aux_sym_object_type_token3,
      aux_sym_object_type_token4,
      aux_sym_object_type_token5,
  [463] = 7,
    ACTIONS(75), 1,
      anon_sym_COLON,
    ACTIONS(77), 1,
      aux_sym_block_token1,
    ACTIONS(79), 1,
      anon_sym_return,
    ACTIONS(81), 1,
      sym_identifier,
    STATE(24), 1,
      sym_type_hint,
    STATE(26), 1,
      sym_block,
    STATE(28), 4,
      sym__statement,
      sym_return_statement,
      sym_function_call,
      aux_sym_class_definition_repeat1,
  [488] = 2,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(83), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [501] = 2,
    ACTIONS(87), 3,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_class_definition_token2,
    ACTIONS(89), 5,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_function_definition_token1,
      anon_sym_return,
      sym_identifier,
  [514] = 2,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    ACTIONS(91), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [527] = 2,
    ACTIONS(95), 3,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_class_definition_token2,
    ACTIONS(97), 5,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_function_definition_token1,
      anon_sym_return,
      sym_identifier,
  [540] = 2,
    ACTIONS(99), 3,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_class_definition_token2,
    ACTIONS(101), 5,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_function_definition_token1,
      anon_sym_return,
      sym_identifier,
  [553] = 2,
    ACTIONS(103), 3,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_class_definition_token2,
    ACTIONS(105), 5,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_function_definition_token1,
      anon_sym_return,
      sym_identifier,
  [566] = 5,
    ACTIONS(77), 1,
      aux_sym_block_token1,
    ACTIONS(79), 1,
      anon_sym_return,
    ACTIONS(81), 1,
      sym_identifier,
    STATE(25), 1,
      sym_block,
    STATE(28), 4,
      sym__statement,
      sym_return_statement,
      sym_function_call,
      aux_sym_class_definition_repeat1,
  [585] = 1,
    ACTIONS(107), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [595] = 1,
    ACTIONS(109), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [605] = 1,
    ACTIONS(111), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [615] = 4,
    ACTIONS(79), 1,
      anon_sym_return,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(113), 1,
      aux_sym_block_token1,
    STATE(29), 4,
      sym__statement,
      sym_return_statement,
      sym_function_call,
      aux_sym_class_definition_repeat1,
  [631] = 4,
    ACTIONS(61), 1,
      aux_sym_block_token1,
    ACTIONS(115), 1,
      anon_sym_return,
    ACTIONS(118), 1,
      sym_identifier,
    STATE(29), 4,
      sym__statement,
      sym_return_statement,
      sym_function_call,
      aux_sym_class_definition_repeat1,
  [647] = 1,
    ACTIONS(121), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [657] = 1,
    ACTIONS(123), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [667] = 1,
    ACTIONS(83), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [677] = 1,
    ACTIONS(125), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [687] = 1,
    ACTIONS(127), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [697] = 1,
    ACTIONS(129), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [707] = 1,
    ACTIONS(131), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [717] = 1,
    ACTIONS(133), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [727] = 4,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      aux_sym_argument_list_repeat1,
    STATE(41), 1,
      sym__expression,
    ACTIONS(137), 3,
      sym_identifier,
      sym_number,
      sym_string_literal,
  [742] = 4,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym_argument_list_repeat1,
    STATE(41), 1,
      sym__expression,
    ACTIONS(141), 3,
      sym_identifier,
      sym_number,
      sym_string_literal,
  [757] = 4,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym_argument_list_repeat1,
    STATE(41), 1,
      sym__expression,
    ACTIONS(137), 3,
      sym_identifier,
      sym_number,
      sym_string_literal,
  [772] = 2,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(148), 4,
      anon_sym_RPAREN,
      sym_identifier,
      sym_number,
      sym_string_literal,
  [782] = 4,
    ACTIONS(75), 1,
      anon_sym_COLON,
    ACTIONS(150), 1,
      anon_sym_EQ,
    STATE(91), 1,
      sym_type_hint,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [796] = 2,
    ACTIONS(154), 1,
      anon_sym_EQ,
    ACTIONS(156), 3,
      aux_sym_block_token1,
      anon_sym_return,
      sym_identifier,
  [805] = 2,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 3,
      aux_sym_block_token1,
      anon_sym_return,
      sym_identifier,
  [814] = 2,
    STATE(88), 1,
      sym__expression,
    ACTIONS(158), 3,
      sym_identifier,
      sym_number,
      sym_string_literal,
  [823] = 2,
    STATE(68), 1,
      sym__expression,
    ACTIONS(160), 3,
      sym_identifier,
      sym_number,
      sym_string_literal,
  [832] = 2,
    STATE(74), 1,
      sym__expression,
    ACTIONS(162), 3,
      sym_identifier,
      sym_number,
      sym_string_literal,
  [841] = 1,
    ACTIONS(139), 4,
      anon_sym_RPAREN,
      sym_identifier,
      sym_number,
      sym_string_literal,
  [848] = 2,
    STATE(83), 1,
      sym__expression,
    ACTIONS(164), 3,
      sym_identifier,
      sym_number,
      sym_string_literal,
  [857] = 2,
    ACTIONS(166), 1,
      anon_sym_EQ,
    ACTIONS(168), 3,
      aux_sym_block_token1,
      anon_sym_return,
      sym_identifier,
  [866] = 2,
    ACTIONS(170), 1,
      anon_sym_EQ,
    ACTIONS(172), 3,
      aux_sym_block_token1,
      anon_sym_return,
      sym_identifier,
  [875] = 2,
    ACTIONS(103), 1,
      anon_sym_COLON,
    ACTIONS(105), 3,
      aux_sym_block_token1,
      anon_sym_return,
      sym_identifier,
  [884] = 1,
    ACTIONS(101), 3,
      aux_sym_block_token1,
      anon_sym_return,
      sym_identifier,
  [890] = 1,
    ACTIONS(97), 3,
      aux_sym_block_token1,
      anon_sym_return,
      sym_identifier,
  [896] = 3,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    STATE(65), 1,
      aux_sym_variable_definition_repeat1,
  [906] = 3,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      sym_identifier,
    STATE(82), 1,
      sym_parent_classes,
  [916] = 3,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_parent_classes_repeat1,
  [926] = 3,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      aux_sym_variable_definition_repeat1,
  [936] = 3,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_parent_classes_repeat1,
  [946] = 2,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [954] = 3,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(66), 1,
      aux_sym_parameter_list_repeat1,
  [964] = 3,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(203), 1,
      sym_identifier,
    STATE(62), 1,
      aux_sym_parameter_list_repeat1,
  [974] = 3,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_parent_classes_repeat1,
  [984] = 3,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_parameter_list_repeat1,
  [994] = 3,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    STATE(65), 1,
      aux_sym_variable_definition_repeat1,
  [1004] = 3,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_parameter_list_repeat1,
  [1014] = 3,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_parameter_list_repeat1,
  [1024] = 1,
    ACTIONS(219), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1029] = 1,
    ACTIONS(191), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1034] = 2,
    ACTIONS(221), 1,
      sym_identifier,
    STATE(58), 1,
      sym_variable_definition_single,
  [1041] = 2,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_parameter_list,
  [1048] = 2,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym_argument_list,
  [1055] = 1,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1060] = 1,
    ACTIONS(227), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1065] = 2,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym_argument_list,
  [1072] = 2,
    ACTIONS(221), 1,
      sym_identifier,
    STATE(73), 1,
      sym_variable_definition_single,
  [1079] = 1,
    ACTIONS(201), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [1084] = 1,
    ACTIONS(229), 1,
      sym_identifier,
  [1088] = 1,
    ACTIONS(231), 1,
      sym_identifier,
  [1092] = 1,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
  [1096] = 1,
    ACTIONS(235), 1,
      sym_identifier,
  [1100] = 1,
    ACTIONS(237), 1,
      sym_identifier,
  [1104] = 1,
    ACTIONS(239), 1,
      anon_sym_SEMI,
  [1108] = 1,
    ACTIONS(241), 1,
      anon_sym_SEMI,
  [1112] = 1,
    ACTIONS(243), 1,
      anon_sym_SEMI,
  [1116] = 1,
    ACTIONS(245), 1,
      sym_identifier,
  [1120] = 1,
    ACTIONS(247), 1,
      sym_identifier,
  [1124] = 1,
    ACTIONS(249), 1,
      anon_sym_SEMI,
  [1128] = 1,
    ACTIONS(251), 1,
      anon_sym_SEMI,
  [1132] = 1,
    ACTIONS(253), 1,
      anon_sym_SEMI,
  [1136] = 1,
    ACTIONS(255), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 160,
  [SMALL_STATE(7)] = 197,
  [SMALL_STATE(8)] = 234,
  [SMALL_STATE(9)] = 271,
  [SMALL_STATE(10)] = 297,
  [SMALL_STATE(11)] = 322,
  [SMALL_STATE(12)] = 345,
  [SMALL_STATE(13)] = 370,
  [SMALL_STATE(14)] = 395,
  [SMALL_STATE(15)] = 420,
  [SMALL_STATE(16)] = 445,
  [SMALL_STATE(17)] = 463,
  [SMALL_STATE(18)] = 488,
  [SMALL_STATE(19)] = 501,
  [SMALL_STATE(20)] = 514,
  [SMALL_STATE(21)] = 527,
  [SMALL_STATE(22)] = 540,
  [SMALL_STATE(23)] = 553,
  [SMALL_STATE(24)] = 566,
  [SMALL_STATE(25)] = 585,
  [SMALL_STATE(26)] = 595,
  [SMALL_STATE(27)] = 605,
  [SMALL_STATE(28)] = 615,
  [SMALL_STATE(29)] = 631,
  [SMALL_STATE(30)] = 647,
  [SMALL_STATE(31)] = 657,
  [SMALL_STATE(32)] = 667,
  [SMALL_STATE(33)] = 677,
  [SMALL_STATE(34)] = 687,
  [SMALL_STATE(35)] = 697,
  [SMALL_STATE(36)] = 707,
  [SMALL_STATE(37)] = 717,
  [SMALL_STATE(38)] = 727,
  [SMALL_STATE(39)] = 742,
  [SMALL_STATE(40)] = 757,
  [SMALL_STATE(41)] = 772,
  [SMALL_STATE(42)] = 782,
  [SMALL_STATE(43)] = 796,
  [SMALL_STATE(44)] = 805,
  [SMALL_STATE(45)] = 814,
  [SMALL_STATE(46)] = 823,
  [SMALL_STATE(47)] = 832,
  [SMALL_STATE(48)] = 841,
  [SMALL_STATE(49)] = 848,
  [SMALL_STATE(50)] = 857,
  [SMALL_STATE(51)] = 866,
  [SMALL_STATE(52)] = 875,
  [SMALL_STATE(53)] = 884,
  [SMALL_STATE(54)] = 890,
  [SMALL_STATE(55)] = 896,
  [SMALL_STATE(56)] = 906,
  [SMALL_STATE(57)] = 916,
  [SMALL_STATE(58)] = 926,
  [SMALL_STATE(59)] = 936,
  [SMALL_STATE(60)] = 946,
  [SMALL_STATE(61)] = 954,
  [SMALL_STATE(62)] = 964,
  [SMALL_STATE(63)] = 974,
  [SMALL_STATE(64)] = 984,
  [SMALL_STATE(65)] = 994,
  [SMALL_STATE(66)] = 1004,
  [SMALL_STATE(67)] = 1014,
  [SMALL_STATE(68)] = 1024,
  [SMALL_STATE(69)] = 1029,
  [SMALL_STATE(70)] = 1034,
  [SMALL_STATE(71)] = 1041,
  [SMALL_STATE(72)] = 1048,
  [SMALL_STATE(73)] = 1055,
  [SMALL_STATE(74)] = 1060,
  [SMALL_STATE(75)] = 1065,
  [SMALL_STATE(76)] = 1072,
  [SMALL_STATE(77)] = 1079,
  [SMALL_STATE(78)] = 1084,
  [SMALL_STATE(79)] = 1088,
  [SMALL_STATE(80)] = 1092,
  [SMALL_STATE(81)] = 1096,
  [SMALL_STATE(82)] = 1100,
  [SMALL_STATE(83)] = 1104,
  [SMALL_STATE(84)] = 1108,
  [SMALL_STATE(85)] = 1112,
  [SMALL_STATE(86)] = 1116,
  [SMALL_STATE(87)] = 1120,
  [SMALL_STATE(88)] = 1124,
  [SMALL_STATE(89)] = 1128,
  [SMALL_STATE(90)] = 1132,
  [SMALL_STATE(91)] = 1136,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(49),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(75),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(45),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(72),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(41),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_single, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_type, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_hint, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_hint, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_type, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parent_classes_repeat1, 2), SHIFT_REPEAT(86),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parent_classes_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(60),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2), SHIFT_REPEAT(76),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_single, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_single, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent_classes, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent_classes, 4),
  [233] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
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
