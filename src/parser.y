%{
  #include <cstdio>
  #include <iostream>
  using namespace std;

  extern int yylex();
  extern int yyparse();
  extern FILE *yyin;
  extern int line_num;
  int block_num = 0;
 
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
%token <sval> IDENTIFIER

%token EQUAL
       NOT_EQUAL
       MORE_EQUAL
       LESS_EQUAL
       MORE
       LESS
       SUBST
       PLUS
       MINUS
       ASTERISK
       SLASH
       AND
       OR
       ADD_SUBST
       SUBT_SUBST
       MULT_SUBST
       DIV_SUBST
       RETURN
       DOT
       COMMA
       INPUT
       OUTPUT
       IF
       ELSE
       FOR
       WHILE
       BREAK
       CONTINUE
       FUNC
       LEFT_PAREN
       RIGHT_PAREN
       IDENT_DECL
       EOL
%token END 0 

%%
program:
  blocks {
    cout << "end of program" << endl;
  };

blocks:
  block {
    cout << "end of blocks" << endl;
  }
  |
  blocks block {
    cout << "end of blocks" << endl;
  };

block:
  lines {
    cout << "end of block" << endl;
  };

lines:
  line {
    cout << "end of lines" << endl;
  }
  |
  lines line {
    cout << "end of lines" << endl;
  };

line:
  declaration EOL {
    cout << "end of line" << endl;      /*expressionなども*/
  }
  |
  declaration END {
    cout << "end of line" << endl;
  };

declaration:
  IDENT_DECL IDENTIFIER {
    cout << "end of declaration" << endl;
  };
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
  cout << "parse error on line" << line_num << "! Message: " << s << endl;

  exit(-1);
}