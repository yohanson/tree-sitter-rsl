#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 82
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment_inline = 1,
  sym_comment_block = 2,
  aux_sym_variable_definition_token1 = 3,
  anon_sym_COMMA = 4,
  anon_sym_SEMI = 5,
  aux_sym_class_definition_token1 = 6,
  aux_sym_class_definition_token2 = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  aux_sym_function_definition_token1 = 10,
  anon_sym_COLON = 11,
  aux_sym_scalar_type_token1 = 12,
  aux_sym_scalar_type_token2 = 13,
  aux_sym_scalar_type_token3 = 14,
  aux_sym_object_type_token1 = 15,
  aux_sym_object_type_token2 = 16,
  aux_sym_object_type_token3 = 17,
  aux_sym_object_type_token4 = 18,
  aux_sym_object_type_token5 = 19,
  aux_sym_block_token1 = 20,
  anon_sym_return = 21,
  sym_identifier = 22,
  sym_number = 23,
  sym_string_literal = 24,
  sym_source_file = 25,
  sym__definition = 26,
  sym__comment = 27,
  sym_variable_definition = 28,
  sym_class_definition = 29,
  sym_parent_classes = 30,
  sym_function_definition = 31,
  sym_parameter_list = 32,
  sym_argument_list = 33,
  sym__type = 34,
  sym_scalar_type = 35,
  sym_object_type = 36,
  sym_block = 37,
  sym__statement = 38,
  sym_return_statement = 39,
  sym_function_call = 40,
  sym__expression = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_variable_definition_repeat1 = 43,
  aux_sym_class_definition_repeat1 = 44,
  aux_sym_parameter_list_repeat1 = 45,
  aux_sym_argument_list_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment_inline] = "comment_inline",
  [sym_comment_block] = "comment_block",
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
  [sym_variable_definition] = "variable_definition",
  [sym_class_definition] = "class_definition",
  [sym_parent_classes] = "parent_classes",
  [sym_function_definition] = "function_definition",
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
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment_inline] = sym_comment_inline,
  [sym_comment_block] = sym_comment_block,
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
  [sym_variable_definition] = sym_variable_definition,
  [sym_class_definition] = sym_class_definition,
  [sym_parent_classes] = sym_parent_classes,
  [sym_function_definition] = sym_function_definition,
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
  [27] = 11,
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
  [43] = 20,
  [44] = 42,
  [45] = 45,
  [46] = 22,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 18,
  [56] = 56,
  [57] = 19,
  [58] = 53,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 51,
  [63] = 63,
  [64] = 64,
  [65] = 64,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 76,
  [79] = 73,
  [80] = 80,
  [81] = 81,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(75);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == ';') ADVANCE(81);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(124);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(108);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
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
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 9:
      if (lookahead == ';') ADVANCE(84);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(100);
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
          lookahead == 'c') ADVANCE(96);
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
          lookahead == 'd') ADVANCE(98);
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
          lookahead == 'e') ADVANCE(93);
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
          lookahead == 'g') ADVANCE(92);
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
          lookahead == 'l') ADVANCE(90);
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
          lookahead == 'o') ADVANCE(87);
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
          lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 61:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 62:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(94);
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
          lookahead == 's') ADVANCE(82);
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
          lookahead == 't') ADVANCE(97);
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
          lookahead == 'y') ADVANCE(95);
      END_STATE();
    case 74:
      if (eof) ADVANCE(75);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(81);
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
      ACCEPT_TOKEN(aux_sym_variable_definition_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_variable_definition_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SEMI);
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
      ACCEPT_TOKEN(aux_sym_class_definition_token2);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_function_definition_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_function_definition_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_scalar_type_token1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_scalar_type_token2);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_scalar_type_token3);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_object_type_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_object_type_token2);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_object_type_token3);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_object_type_token4);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_object_type_token5);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_block_token1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_block_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ';') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(120);
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
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 74},
  [10] = {.lex_state = 74},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 74},
  [13] = {.lex_state = 74},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 74},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 74},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 74},
  [25] = {.lex_state = 74},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 74},
  [29] = {.lex_state = 74},
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
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment_inline] = ACTIONS(1),
    [sym_comment_block] = ACTIONS(1),
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
    [sym_source_file] = STATE(75),
    [sym__definition] = STATE(14),
    [sym__comment] = STATE(14),
    [sym_variable_definition] = STATE(14),
    [sym_class_definition] = STATE(14),
    [sym_function_definition] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
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
    STATE(5), 1,
      sym_parameter_list,
    ACTIONS(13), 2,
      sym_comment_inline,
      sym_comment_block,
    STATE(4), 4,
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
    STATE(8), 1,
      sym_parameter_list,
    ACTIONS(29), 2,
      sym_comment_inline,
      sym_comment_block,
    STATE(6), 4,
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
    ACTIONS(31), 1,
      aux_sym_class_definition_token2,
    ACTIONS(29), 2,
      sym_comment_inline,
      sym_comment_block,
    STATE(6), 4,
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
    STATE(10), 6,
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
    ACTIONS(35), 1,
      aux_sym_class_definition_token2,
    ACTIONS(33), 2,
      sym_comment_inline,
      sym_comment_block,
    STATE(7), 4,
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
    ACTIONS(57), 1,
      aux_sym_class_definition_token2,
    ACTIONS(55), 2,
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
    ACTIONS(55), 2,
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
    ACTIONS(55), 2,
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
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 2,
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
    ACTIONS(31), 1,
      aux_sym_class_definition_token2,
    ACTIONS(55), 2,
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
    STATE(23), 3,
      sym__type,
      sym_scalar_type,
      sym_object_type,
    ACTIONS(73), 5,
      aux_sym_object_type_token1,
      aux_sym_object_type_token2,
      aux_sym_object_type_token3,
      aux_sym_object_type_token4,
      aux_sym_object_type_token5,
  [463] = 6,
    ACTIONS(75), 1,
      anon_sym_COLON,
    ACTIONS(77), 1,
      aux_sym_block_token1,
    ACTIONS(79), 1,
      anon_sym_return,
    ACTIONS(81), 1,
      sym_identifier,
    STATE(35), 1,
      sym_block,
    STATE(26), 4,
      sym__statement,
      sym_return_statement,
      sym_function_call,
      aux_sym_class_definition_repeat1,
  [485] = 2,
    ACTIONS(83), 3,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_class_definition_token2,
    ACTIONS(85), 5,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_function_definition_token1,
      anon_sym_return,
      sym_identifier,
  [498] = 2,
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
  [511] = 2,
    ACTIONS(91), 3,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_class_definition_token2,
    ACTIONS(93), 5,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_function_definition_token1,
      anon_sym_return,
      sym_identifier,
  [524] = 2,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    ACTIONS(95), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [537] = 2,
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
  [550] = 5,
    ACTIONS(77), 1,
      aux_sym_block_token1,
    ACTIONS(79), 1,
      anon_sym_return,
    ACTIONS(81), 1,
      sym_identifier,
    STATE(31), 1,
      sym_block,
    STATE(26), 4,
      sym__statement,
      sym_return_statement,
      sym_function_call,
      aux_sym_class_definition_repeat1,
  [569] = 2,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    ACTIONS(103), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [582] = 1,
    ACTIONS(103), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [592] = 4,
    ACTIONS(79), 1,
      anon_sym_return,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(107), 1,
      aux_sym_block_token1,
    STATE(27), 4,
      sym__statement,
      sym_return_statement,
      sym_function_call,
      aux_sym_class_definition_repeat1,
  [608] = 4,
    ACTIONS(61), 1,
      aux_sym_block_token1,
    ACTIONS(109), 1,
      anon_sym_return,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(27), 4,
      sym__statement,
      sym_return_statement,
      sym_function_call,
      aux_sym_class_definition_repeat1,
  [624] = 1,
    ACTIONS(115), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [634] = 1,
    ACTIONS(117), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [644] = 1,
    ACTIONS(119), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [654] = 1,
    ACTIONS(121), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [664] = 1,
    ACTIONS(123), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [674] = 1,
    ACTIONS(125), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [684] = 1,
    ACTIONS(127), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [694] = 1,
    ACTIONS(129), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [704] = 1,
    ACTIONS(131), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [714] = 1,
    ACTIONS(133), 7,
      ts_builtin_sym_end,
      sym_comment_inline,
      sym_comment_block,
      aux_sym_variable_definition_token1,
      aux_sym_class_definition_token1,
      aux_sym_class_definition_token2,
      aux_sym_function_definition_token1,
  [724] = 4,
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
  [739] = 4,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_argument_list_repeat1,
    STATE(41), 1,
      sym__expression,
    ACTIONS(137), 3,
      sym_identifier,
      sym_number,
      sym_string_literal,
  [754] = 4,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      aux_sym_argument_list_repeat1,
    STATE(41), 1,
      sym__expression,
    ACTIONS(143), 3,
      sym_identifier,
      sym_number,
      sym_string_literal,
  [769] = 2,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(148), 4,
      anon_sym_RPAREN,
      sym_identifier,
      sym_number,
      sym_string_literal,
  [779] = 2,
    STATE(78), 1,
      sym__expression,
    ACTIONS(150), 3,
      sym_identifier,
      sym_number,
      sym_string_literal,
  [788] = 2,
    ACTIONS(91), 1,
      anon_sym_COLON,
    ACTIONS(93), 3,
      aux_sym_block_token1,
      anon_sym_return,
      sym_identifier,
  [797] = 2,
    STATE(76), 1,
      sym__expression,
    ACTIONS(152), 3,
      sym_identifier,
      sym_number,
      sym_string_literal,
  [806] = 3,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(157), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [817] = 2,
    ACTIONS(99), 1,
      anon_sym_COLON,
    ACTIONS(101), 3,
      aux_sym_block_token1,
      anon_sym_return,
      sym_identifier,
  [826] = 1,
    ACTIONS(141), 4,
      anon_sym_RPAREN,
      sym_identifier,
      sym_number,
      sym_string_literal,
  [833] = 1,
    ACTIONS(159), 3,
      aux_sym_block_token1,
      anon_sym_return,
      sym_identifier,
  [839] = 2,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(163), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [847] = 3,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(50), 1,
      aux_sym_parameter_list_repeat1,
  [857] = 3,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(50), 1,
      aux_sym_parameter_list_repeat1,
  [867] = 1,
    ACTIONS(157), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [873] = 3,
    ACTIONS(172), 1,
      sym_identifier,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym_parameter_list_repeat1,
  [883] = 1,
    ACTIONS(176), 3,
      aux_sym_block_token1,
      anon_sym_return,
      sym_identifier,
  [889] = 1,
    ACTIONS(85), 3,
      aux_sym_block_token1,
      anon_sym_return,
      sym_identifier,
  [895] = 3,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_variable_definition_repeat1,
  [905] = 1,
    ACTIONS(89), 3,
      aux_sym_block_token1,
      anon_sym_return,
      sym_identifier,
  [911] = 3,
    ACTIONS(172), 1,
      sym_identifier,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_parameter_list_repeat1,
  [921] = 3,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_variable_definition_repeat1,
  [931] = 3,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      aux_sym_variable_definition_repeat1,
  [941] = 3,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_variable_definition_repeat1,
  [951] = 3,
    ACTIONS(172), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_parameter_list_repeat1,
  [961] = 3,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 1,
      sym_identifier,
    STATE(77), 1,
      sym_parent_classes,
  [971] = 2,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_argument_list,
  [978] = 2,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      sym_argument_list,
  [985] = 2,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_parameter_list,
  [992] = 1,
    ACTIONS(165), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [997] = 1,
    ACTIONS(200), 1,
      sym_identifier,
  [1001] = 1,
    ACTIONS(202), 1,
      sym_identifier,
  [1005] = 1,
    ACTIONS(204), 1,
      sym_identifier,
  [1009] = 1,
    ACTIONS(206), 1,
      sym_identifier,
  [1013] = 1,
    ACTIONS(208), 1,
      anon_sym_SEMI,
  [1017] = 1,
    ACTIONS(210), 1,
      anon_sym_SEMI,
  [1021] = 1,
    ACTIONS(212), 1,
      sym_identifier,
  [1025] = 1,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
  [1029] = 1,
    ACTIONS(216), 1,
      anon_sym_SEMI,
  [1033] = 1,
    ACTIONS(218), 1,
      sym_identifier,
  [1037] = 1,
    ACTIONS(220), 1,
      anon_sym_SEMI,
  [1041] = 1,
    ACTIONS(222), 1,
      anon_sym_SEMI,
  [1045] = 1,
    ACTIONS(224), 1,
      sym_identifier,
  [1049] = 1,
    ACTIONS(226), 1,
      anon_sym_SEMI,
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
  [SMALL_STATE(18)] = 485,
  [SMALL_STATE(19)] = 498,
  [SMALL_STATE(20)] = 511,
  [SMALL_STATE(21)] = 524,
  [SMALL_STATE(22)] = 537,
  [SMALL_STATE(23)] = 550,
  [SMALL_STATE(24)] = 569,
  [SMALL_STATE(25)] = 582,
  [SMALL_STATE(26)] = 592,
  [SMALL_STATE(27)] = 608,
  [SMALL_STATE(28)] = 624,
  [SMALL_STATE(29)] = 634,
  [SMALL_STATE(30)] = 644,
  [SMALL_STATE(31)] = 654,
  [SMALL_STATE(32)] = 664,
  [SMALL_STATE(33)] = 674,
  [SMALL_STATE(34)] = 684,
  [SMALL_STATE(35)] = 694,
  [SMALL_STATE(36)] = 704,
  [SMALL_STATE(37)] = 714,
  [SMALL_STATE(38)] = 724,
  [SMALL_STATE(39)] = 739,
  [SMALL_STATE(40)] = 754,
  [SMALL_STATE(41)] = 769,
  [SMALL_STATE(42)] = 779,
  [SMALL_STATE(43)] = 788,
  [SMALL_STATE(44)] = 797,
  [SMALL_STATE(45)] = 806,
  [SMALL_STATE(46)] = 817,
  [SMALL_STATE(47)] = 826,
  [SMALL_STATE(48)] = 833,
  [SMALL_STATE(49)] = 839,
  [SMALL_STATE(50)] = 847,
  [SMALL_STATE(51)] = 857,
  [SMALL_STATE(52)] = 867,
  [SMALL_STATE(53)] = 873,
  [SMALL_STATE(54)] = 883,
  [SMALL_STATE(55)] = 889,
  [SMALL_STATE(56)] = 895,
  [SMALL_STATE(57)] = 905,
  [SMALL_STATE(58)] = 911,
  [SMALL_STATE(59)] = 921,
  [SMALL_STATE(60)] = 931,
  [SMALL_STATE(61)] = 941,
  [SMALL_STATE(62)] = 951,
  [SMALL_STATE(63)] = 961,
  [SMALL_STATE(64)] = 971,
  [SMALL_STATE(65)] = 978,
  [SMALL_STATE(66)] = 985,
  [SMALL_STATE(67)] = 992,
  [SMALL_STATE(68)] = 997,
  [SMALL_STATE(69)] = 1001,
  [SMALL_STATE(70)] = 1005,
  [SMALL_STATE(71)] = 1009,
  [SMALL_STATE(72)] = 1013,
  [SMALL_STATE(73)] = 1017,
  [SMALL_STATE(74)] = 1021,
  [SMALL_STATE(75)] = 1025,
  [SMALL_STATE(76)] = 1029,
  [SMALL_STATE(77)] = 1033,
  [SMALL_STATE(78)] = 1037,
  [SMALL_STATE(79)] = 1041,
  [SMALL_STATE(80)] = 1045,
  [SMALL_STATE(81)] = 1049,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(44),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(65),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(42),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(64),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(41),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2), SHIFT_REPEAT(69),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_type, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(49),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_type, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent_classes, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent_classes, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [214] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
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
