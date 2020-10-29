#include <cstdio>
#include <iostream>
#include "nodes.h"
#include "CodeGen.h"
using namespace std;

extern Node *program;
int yyparse();
void showAST(Node *node);
extern FILE *yyin;
void yyerror(const char *s);
bool show_syntax = false;
bool show_mean = false;
bool show_module = false;
void printError(std::string st);

int main(int argc, char *argv[])
{
  if (argc < 2)
    printError("Please specify the file");
  if (argc > 3)
    printError("Too many arguments");
  if (argc == 3)
  {
    string option = argv[2];
    if (option.length() > 4 || option.length() == 1 || option[0] != '-')
      printError("Invalid Options");
    for (int i = 1; i < ((int)option.length()); i++)
    {
      if (option[i] == 's')
        show_syntax = true;
      else if (option[i] == 'm')
        show_mean = true;
      else if (option[i] == 'l')
        show_module = true;
      else
        printError("Invalid Options");
    }
  }

  FILE *myfile = fopen(argv[1], "r");

  if (!myfile)
  {
    cout << "Can't open the file" << endl;
    return -1;
  }

  yyin = myfile;

  if (show_syntax)
  {
    printf("\n");
    cout << "-----syntax check-----" << endl;
    printf("\n");
  }

  yyparse();

  if (show_mean)
  {
    printf("\n");
    cout << "-----Show meaning-----" << endl;
    printf("\n");

    showAST(program);
  }

  if (show_module)
    printf("\n");
  CodeGen *codegen = new CodeGen(program);
  codegen->Make();
  delete codegen;
  fclose(myfile);
}