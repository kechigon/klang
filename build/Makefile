CFLAG = -I /usr/include/llvm-6.0 -I /usr/include/llvm-c-6.0 -I ../srcs/ast -I ../ast -I ../srcs/codegen `llvm-config --cxxflags --ldflags --libs`
NODES = ../srcs/ast/Node.cpp ../srcs/ast/StringNode.cpp ../srcs/ast/DoubleNode.cpp ../srcs/ast/ArrayElementNode.cpp

klang: lex.yy.c parser.tab.c parser.tab.h main.o Node.o StringNode.o DoubleNode.o ArrayElementNode.o showAST.o CodeGenContext.o IdMap.o IdTable.o CodeGen.o Macro.o error.o
	g++ main.o Node.o StringNode.o DoubleNode.o ArrayElementNode.o showAST.o CodeGenContext.o IdMap.o IdTable.o CodeGen.o Macro.o error.o parser.tab.c lex.yy.c ${CFLAG} -o ../bin/klang

main.o: ../srcs/main.cpp
	g++ -c ${CFLAG} ../srcs/main.cpp

parser.tab.c parser.tab.h: ../srcs/parser/parser.y
	bison -d -v ../srcs/parser/parser.y

lex.yy.c: ../srcs/parser/lexer.l parser.tab.h
	flex ../srcs/parser/lexer.l

Node.o StringNode.o DoubleNode.o ArrayElementNode.o: ${NODES}
	g++ -c ${CFLAG} ${NODES}

showAST.o: ../srcs/ast/showAST.cpp
	g++ -c ${CFLAG} ../srcs/ast/showAST.cpp

CodeGenContext.o: ../srcs/codegen/CodeGenContext.cpp
	g++ -c ${CFLAG} ../srcs/codegen/CodeGenContext.cpp

IdMap.o: ../srcs/codegen/IdMap.cpp
	g++ -c ${CFLAG} ../srcs/codegen/IdMap.cpp

IdTable.o: ../srcs/codegen/IdTable.cpp
	g++ -c ${CFLAG} ../srcs/codegen/IdTable.cpp

CodeGen.o: ../srcs/codegen/CodeGen.cpp
	g++ -c ${CFLAG} ../srcs/codegen/CodeGen.cpp

Macro.o: ../srcs/codegen/Macro.cpp
	g++ -c ${CFLAG} ../srcs/codegen/Macro.cpp

error.o: ../srcs/error.cpp
	g++ -c ${CFLAG} ../srcs/error.cpp

clean:
	rm lex.yy.c parser.tab.c parser.tab.h parser.output *.o *.ll  *.out a.txt

re: clean klang

.PHONY : clean re