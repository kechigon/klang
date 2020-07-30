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
  blocks block {
    cout << "end of blocks" << endl;
  }
  |
  block {
    cout << "end of blocks" << endl;
  };

block:
  lines {
    cout << "end of block" << endl;
  };

lines:
  lines line {
    cout << "end of lines" << endl;
  }
  |
  line {
    cout << "end of lines" << endl;
  };

line:
  line_content EOL {
    cout << "end of line" << endl;      /*expressionなども*/
  }
  |
  line_content END {
    cout << "end of line" << endl;
  };

line_content:
  declaration {
    cout << "end of line_content" << endl;
  }
  |
  input_output {
    cout << "end of line_content" << endl;
  };

declaration:
  IDENT_DECL IDENTIFIER {
    cout << "end of declaration" << endl;
  };

input_output:
  INPUT IDENTIFIER {
    cout << "end of input_output" << endl;
  }
  |
  OUTPUT IDENTIFIER {
    cout << "end of input_output" << endl;
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