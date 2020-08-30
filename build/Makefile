klang: lex.yy.c parser.tab.c parser.tab.h
	g++ parser.tab.c lex.yy.c -lfl -o parser

parser.tab.c parser.tab.h: ../src/parser.y
	bison -d -v ../src/parser.y

lex.yy.c: ../src/lexer.l parser.tab.h
	flex ../src/lexer.l

clean:
	rm lex.yy.c parser.tab.c parser.tab.h parser.output

re: clean klang

.PHONY : clean re