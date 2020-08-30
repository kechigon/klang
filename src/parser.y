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
  long lval;
  double dval;
  char* sval;
}

%token <lval> INT
%token <dval> FLOAT
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
       MULT
       DIV
       AND
       MOD
       OR
       ADD_SUBST
       SUBT_SUBST
       MULT_SUBST
       DIV_SUBST
       MOD_SUBST
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
/*%typeは$$ = としたときに指定する*/
%right SUBST ADD_SUBST SUBT_SUBST MULT_SUBST DIV_SUBST MOD_SUBST
%left AND OR
%left EQUAL NOT_EQUAL MORE_EQUAL LESS_EQUAL MORE LESS
%left PLUS MINUS
%left MULT DIV MOD
%left UMINUS

%%
program:
  blocks {
    cout << "end of program" << endl;
  };

blocks:
  blocks block {
    cout << "end of blocks repeat" << endl;
  }
  |
  block {
    cout << "end of blocks one time" << endl;
  }
  |
  eols block {
    cout << "end of blocks eols" << endl;
  };

block:
  lines {
    cout << "end of block" << endl;
  };

lines:
  lines line {
    cout << "end of lines repeat" << endl;
  }
  |
  line {
    cout << "end of lines one time" << endl;
  };

line:
  line_content eols {
    cout << "end of line eols" << endl;
  }
  |
  line_content END {
    cout << "end of line END" << endl;
  };

line_content:
  declaration {
    cout << "end of line_content declaretion" << endl;
  }
  |
  input_output {
    cout << "end of line_content input_output" << endl;
  }
  |
  substcalc {
    cout << "end of line_content substcalc" << endl;
  };

declaration:
  IDENT_DECL identifiers {
    cout << "end of declaration" << endl;
  };

input_output:
  INPUT identifiers {
    cout << "end of input_output input" << endl;
  }
  |
  OUTPUT identifiers {
    cout << "end of input_output output" << endl;
  };

identifiers:
  identifiers COMMA IDENTIFIER {
    cout << "end of identifiers mult" << endl;
  }
  |
  identifiers COMMA IDENTIFIER DOT INT {
    cout << "end of identifiers mult array" << endl;
  }
  |
  IDENTIFIER {
    cout << "end of identifiers one" << endl;
  }
  |
  IDENTIFIER DOT INT {
    cout << "end of identifiers one array" << endl;
  };

substcalc:
  identifiers SUBST expression {
    cout << "end of sbstcalc SUBST" << endl;
  }
  |
  identifiers ADD_SUBST expression {
    cout << "end of substcalc ADD_SUBST" << endl;
  }
  |
  identifiers SUBT_SUBST expression {
    cout << "end of substcalc SUBT_SUBST" << endl;
  }
  |
  identifiers MULT_SUBST expression {
    cout << "end of substcalc MULT_SUBST" << endl;
  }
  |
  identifiers DIV_SUBST expression {
    cout << "end of substcalc DIV_SUBST" << endl;
  }
  |
  identifiers MOD_SUBST expression {
    cout << "end of substcalc MOD_SUBST" << endl;
  };

expression:
  expression PLUS expression {
    cout << "end of expression PULS" << endl;
  }
  |
  expression MINUS expression {
    cout << "end of expression MINUS" << endl;
  }
  |
  expression MULT expression {
    cout << "end of expression MULT" << endl;
  }
  |
  expression DIV expression {
    cout << "end of expression DIV" << endl;
  }
  |
  expression MOD expression {
    cout << "end of expression MOD" << endl;
  }
  |
  expression EQUAL expression {
    cout << "end of expression EQUAL" << endl;
  }
  |
  expression NOT_EQUAL expression {
    cout << "end of expression NOT_EQUAL" << endl;
  }
  |
  expression MORE_EQUAL expression {
    cout << "end of expression MORE_EQUAL" << endl;
  }
  |
  expression LESS_EQUAL expression {
    cout << "end of expression LESS_EQUAL" << endl;
  }
  |
  expression MORE expression {
    cout << "end of expression MORE" << endl;
  }
  |
  expression LESS expression {
    cout << "end of expression LESS" << endl;
  }
  |
  expression AND expression {
    cout << "end of expression AND" << endl;
  }
  |
  expression OR expression {
    cout << "end of expression OR" << endl;
  }
  |
  monomial {
    cout << "end of expression monomial" << endl;
  }
  |
  MINUS expression %prec UMINUS {
    cout << "end of expression UMINUS" << endl;
  }
  |
  LEFT_PAREN expression RIGHT_PAREN {
    cout << "end of expression PAREN" << endl;
  };

monomial:
  INT {
    cout << "end of monomial " << $1 << endl;
  }
  |
  FLOAT {
    cout << "end of monomial " << $1 << endl;
  }
  |
  IDENTIFIER {
    cout << "end of monomial " << $1 << endl;
  };

eols:
  eols EOL
  |
  EOL;
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
  cout << "parse error on line " << line_num << " ! Message: " << s << endl;

  exit(-1);
}