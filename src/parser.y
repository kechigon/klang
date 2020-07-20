%{
  #include <cstdio>
  #include <iostream>
  using namespace std;

  extern int yylex();
  extern int yyparse();
  extern FILE *yyin;
 
  void yyerror(const char *s);
%}

%union {
  int ival;
  float fval;
  char *sval;
}

%token <ival> INT
%token <fval> FLOAT
%token <sval> STRING

%%
snazzle:
  INT snazzle      {
      cout << "bison found an int: " << $1 << endl;
    }
  | FLOAT snazzle  {
      cout << "bison found a float: " << $1 << endl;
    }
  | STRING snazzle {
      cout << "bison found a string: " << $1 << endl; free($1);
    }
  | INT            {
      cout << "bison found an int: " << $1 << endl;
    }
  | FLOAT          {
      cout << "bison found a float: " << $1 << endl;
    }
  | STRING         {
      cout << "bison found a string: " << $1 << endl; free($1);
    }
  ;
%%

int main(int, char**) {
  FILE *myfile = fopen("a.file", "r");
  
  if (!myfile) {
    cout << "I can't open a.file!" << endl;
    return -1;
  }

  yyin = myfile;
  
  yyparse();
  
}

void yyerror(const char *s) {
  cout << "EEK, parse error!  Message: " << s << endl;

  exit(-1);
}