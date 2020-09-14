CFLAG = -I /usr/include/llvm-6.0 -I /usr/include/llvm-c-6.0 -I ../srcs/ast -I ../ast
NODES = ../srcs/ast/Node.cpp ../srcs/ast/IntNode.cpp ../srcs/ast/StringNode.cpp ../srcs/ast/DoubleNode.cpp ../srcs/ast/ArrayElementNode.cpp

klang: lex.yy.c parser.tab.c parser.tab.h main.o Node.o IntNode.o StringNode.o DoubleNode.o ArrayElementNode.o showAST.o
	g++ main.o Node.o IntNode.o StringNode.o DoubleNode.o ArrayElementNode.o showAST.o parser.tab.c lex.yy.c ${CFLAG} -lfl -o klang
	cp klang ../bin

main.o: ../srcs/main.cpp
	g++ -c ${CFLAG} ../srcs/main.cpp

parser.tab.c parser.tab.h: ../srcs/parser/parser.y
	bison -d -v ../srcs/parser/parser.y

lex.yy.c: ../srcs/parser/lexer.l parser.tab.h
	flex ../srcs/parser/lexer.l

Node.o IntNode.o StringNode.o DoubleNode.o ArrayElementNode.o: ${NODES}
	g++ -c ${CFLAG} ${NODES}

showAST.o: ../srcs/ast/showAST.cpp
	g++ -c ${CFLAG} ../srcs/ast/showAST.cpp

clean:
	rm lex.yy.c parser.tab.c parser.tab.h parser.output *.o

re: clean klang

.PHONY : clean re