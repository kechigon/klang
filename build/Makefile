parser.tab.c parser.tab.h: ../src/parser.y
	bison -d ../src/parser.y

lex.yy.c: ../src/lexer.l parser.tab.h
	flex ../src/lexer.l

parser: lex.yy.c parser.tab.c parser.tab.h
	g++ parser.tab.c lex.yy.c -lfl -o parser

clean:
	rm lex.yy.c parser.tab.c parser.tab.h
.PHONY : clean