.PHONY: test

all: src/grammar.json test

clean:
	rm -f src/grammar.json

test:
	tree-sitter test

src/grammar.json: grammar.js
	tree-sitter generate
