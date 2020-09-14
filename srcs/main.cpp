#include <cstdio>
#include <iostream>
#include "nodes.h"
using namespace std;

extern Node* program;
int yyparse();
void showAST(Node* node);
extern FILE *yyin;

void yyerror(const char *s);

int main(int argc, char* argv[]){
  if(argc < 2){
    cout << "Please specify the file" << endl;
    return -1;
  }
  if(argc > 2){
    cerr << "Too many arguments" << endl;
    return -1;
  }

  FILE *myfile = fopen(argv[1], "r");

  if (!myfile) {
    cout << "Can't open the file" << endl;
    return -1;
  }

  yyin = myfile;

  printf("\n");
  cout << "-----syntax check-----" << endl;
  printf("\n");

  yyparse();

  printf("\n");
  cout << "-----Show meaning-----" << endl;
  printf("\n");

  showAST(program);
}