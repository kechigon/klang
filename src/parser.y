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
       LEFT_BRACE
       RIGHT_BRACE
       RIGHT_BRACKET
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
    cout << "program" << endl;
  };

blocks:
  blocks block {
    cout << "blocks repeat" << endl;
  }
  |
  block {
    cout << "blocks" << endl;
  }
  |
  eols block {
    cout << "blocks eols" << endl;
  };

block:
  elements {
    cout << "block elements" << endl;
  };

elements:
  elements element {
    cout << "elements repeat" << endl;
  }
  |
  element {
    cout << "elements" << endl;
  };

element:
  element_content eols {
    cout << "element eols" << endl;
  }
  |
  element_content END {
    cout << "element END" << endl;
  };

element_content:
  declaration {
    cout << "element_content declaretion" << endl;
  }
  |
  input_output {
    cout << "element_content input_output" << endl;
  }
  |
  subst_calc {
    cout << "element_content subst_calc" << endl;
  }
  |
  subst_calc_2 {
    cout << "element_content subst_calc_2" << endl;
  }
  |
  if_stmt {
    cout << "element_content if_stmt" << endl;
  }
  |
  WHILE LEFT_PAREN expression RIGHT_PAREN EOL LEFT_BRACE EOL elements RIGHT_BRACE {
    cout << "element_content while_stmt" << endl;
  }
  |
  for_stmt {
    cout << "element_content for_stmt" << endl;
  }
  |
  BREAK {
    cout << "element_content BREAK" << endl;
  }
  |
  CONTINUE {
    cout << "element_content CONTINUE" << endl;
  };

declaration:
  IDENT_DECL identifiers {
    cout << "declaration IDENTIFIER" << endl;
  }
  |
  declaration_subst_calc {
    cout << "declaration declaration_subst_calc" << endl;
  };

declaration_subst_calc:
  IDENT_DECL subst_calc {
    cout << "declaration_subst_calc" << endl;
  };

input_output:
  INPUT identifiers {
    cout << "input_output input" << endl;
  }
  |
  outputs {
    cout << "input_output outputs" << endl;
  };

outputs:
  outputs OUTPUT expression {
    cout << "outputs expression mult" << endl;
  }
  |
  outputs OUTPUT STRING {
    cout << "outputs STRING mult" << endl;
  }
  |
  OUTPUT expression {
    cout << "outputs expression" << endl;
  }
  |
  OUTPUT STRING {
    cout << "outputs STRING" << endl;
  };

identifiers:
  identifiers COMMA IDENTIFIER {
    cout << "identifiers mult " << $3 << endl;
  }
  |
  identifiers COMMA IDENTIFIER DOT INT {
    cout << "identifiers mult array " << $3 << " " << $5 << endl;
  }
  |
  IDENTIFIER {
    cout << "identifiers one " << $1 << endl;
  }
  |
  IDENTIFIER DOT INT {
    cout << "identifiers one array " << $1 << " " << $3 << endl;
  };

subst_calc:
  identifiers SUBST expression {
    cout << "sbstcalc SUBST" << endl;
  }
  |
  identifiers SUBST STRING {
    cout << "subst_calc SUBST STRING" << endl;
  };

subst_calc_2:
  identifiers ADD_SUBST expression {
    cout << "subst_calc_2 ADD_SUBST" << endl;
  }
  |
  identifiers SUBT_SUBST expression {
    cout << "subst_calc_2 SUBT_SUBST" << endl;
  }
  |
  identifiers MULT_SUBST expression {
    cout << "subst_calc_2 MULT_SUBST" << endl;
  }
  |
  identifiers DIV_SUBST expression {
    cout << "subst_calc_2 DIV_SUBST" << endl;
  }
  |
  identifiers MOD_SUBST expression {
    cout << "subst_calc_2 MOD_SUBST" << endl;
  };

expression:
  expression PLUS expression {
    cout << "expression PULS" << endl;
  }
  |
  expression MINUS expression {
    cout << "expression MINUS" << endl;
  }
  |
  expression MULT expression {
    cout << "expression MULT" << endl;
  }
  |
  expression DIV expression {
    cout << "expression DIV" << endl;
  }
  |
  expression MOD expression {
    cout << "expression MOD" << endl;
  }
  |
  expression EQUAL expression {
    cout << "expression EQUAL" << endl;
  }
  |
  expression NOT_EQUAL expression {
    cout << "expression NOT_EQUAL" << endl;
  }
  |
  expression MORE_EQUAL expression {
    cout << "expression MORE_EQUAL" << endl;
  }
  |
  expression LESS_EQUAL expression {
    cout << "expression LESS_EQUAL" << endl;
  }
  |
  expression MORE expression {
    cout << "expression MORE" << endl;
  }
  |
  expression LESS expression {
    cout << "expression LESS" << endl;
  }
  |
  expression AND expression {
    cout << "expression AND" << endl;
  }
  |
  expression OR expression {
    cout << "expression OR" << endl;
  }
  |
  monomial {
    cout << "expression monomial" << endl;
  }
  |
  MINUS expression %prec UMINUS {
    cout << "expression UMINUS" << endl;
  }
  |
  LEFT_PAREN expression RIGHT_PAREN {
    cout << "expression PAREN" << endl;
  };

monomial:
  INT {
    cout << "monomial " << $1 << endl;
  }
  |
  FLOAT {
    cout << "monomial " << $1 << endl;
  }
  |
  IDENTIFIER {
    cout << "monomial " << $1 << endl;
  }
  |
  IDENTIFIER DOT INT {
    cout << "monomial " << $1 << " " << $3 << endl;
  };

if_stmt:
  IF LEFT_PAREN expression RIGHT_PAREN EOL LEFT_BRACE EOL elements RIGHT_BRACKET {
    cout << "if_stmt" << endl;
  }
  |
  IF LEFT_PAREN expression RIGHT_PAREN EOL LEFT_BRACE EOL elements RIGHT_BRACE EOL ELSE EOL LEFT_BRACE EOL elements RIGHT_BRACKET {
    cout << "if_stmt else" << endl;
  }
  |
  IF LEFT_PAREN expression RIGHT_PAREN EOL LEFT_BRACE EOL elements RIGHT_BRACE EOL else_if_stmts RIGHT_BRACKET{
    cout << "if_stmt elseif_stmts_end" << endl;
  }
  |
  IF LEFT_PAREN expression RIGHT_PAREN EOL LEFT_BRACE EOL elements RIGHT_BRACE EOL else_if_stmts RIGHT_BRACE EOL ELSE EOL LEFT_BRACE EOL elements RIGHT_BRACKET {
    cout << "if_stmt  else_if_stmts_mid else" << endl;
  };

else_if_stmts:
  else_if_stmts RIGHT_BRACE EOL else_if_stmt {
    cout << "else_if_stmts mult" << endl;
  }
  |
  else_if_stmt {
    cout << "else_if_stmts" << endl;
  };

  else_if_stmt:
  ELSE IF LEFT_PAREN expression RIGHT_PAREN EOL LEFT_BRACE EOL elements {
    cout << "else_if_stmt" << endl;
  };

for_stmt:
  FOR LEFT_PAREN declaration_subst_calc COMMA expression COMMA subst_calc RIGHT_PAREN EOL LEFT_BRACE EOL elements RIGHT_BRACE {
    cout << "for_stmt declaration_subst_calc subst_calc" << endl;
  }
  |$
  FOR LEFT_PAREN declaration_subst_calc COMMA expression COMMA subst_calc_2 RIGHT_PAREN EOL LEFT_BRACE EOL elements RIGHT_BRACE {
    cout << "for_stmt declaration_subst_calc subst_calc_2" << endl;
  }
  |
  FOR LEFT_PAREN subst_calc COMMA expression COMMA subst_calc RIGHT_PAREN EOL LEFT_BRACE EOL elements RIGHT_BRACE {
    cout << "for_stmt subst_calc subst_calc" << endl;
  }
  |
  FOR LEFT_PAREN subst_calc COMMA expression COMMA subst_calc_2 RIGHT_PAREN EOL LEFT_BRACE EOL elements RIGHT_BRACE {
    cout << "for_stmt subst_calc subst_calc_2" << endl;
  }
  |
  FOR LEFT_PAREN subst_calc_2 COMMA expression COMMA subst_calc RIGHT_PAREN EOL LEFT_BRACE EOL elements RIGHT_BRACE {
    cout << "for_stmt subst_calc_2 subst_calc" << endl;
  }
  |
  FOR LEFT_PAREN subst_calc_2 COMMA expression COMMA subst_calc_2 RIGHT_PAREN EOL LEFT_BRACE EOL elements RIGHT_BRACE {
    cout << "for_stmt subst_calc_2 subst_calc_2" << endl;
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
  cout << "parse error on line ! Message: " << s << endl;

  exit(-1);
}