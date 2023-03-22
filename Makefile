.PHONY: test

all: src/grammar.json test

test:
	tree-sitter test

src/grammar.json: grammar.js
	tree-sitter generate
