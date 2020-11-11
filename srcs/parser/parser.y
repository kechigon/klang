%{
  #include <cstdio>
  #include <iostream>
  #include <string>
  #include "nodes.h"
  using namespace std;

  Node* program;
  int yylex();
  extern FILE *yyin;
  void yyerror(const char *s);
  extern bool show_syntax;

%}

%union {
  double dval;
  char* sval;
  Node* nodes;
}

%token <dval> DOUBLELITERAL
%token <sval> STRINGLITERAL
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
       LEFT_PAREN
       RIGHT_PAREN
       LEFT_BRACE
       RIGHT_BRACE
       DOUBLE
       VOID
       SEMICOLON
       EOL
%token END 0 
%type <nodes> program
%type <nodes> blocks
%type <nodes> func_blocks
%type <nodes> func_block
%type <nodes> elements
%type <nodes> element
%type <nodes> element_content
%type <nodes> declaration
%type <nodes> declaration_subst_calc
%type <nodes> input_output
%type <nodes> outputs
%type <nodes> identifiers
%type <nodes> subst_calc
%type <nodes> subst_calc_2
%type <nodes> expression
%type <nodes> monomial
%type <nodes> if_stmt
%type <nodes> for_stmt
%type <nodes> func_exe
%right SUBST ADD_SUBST SUBT_SUBST MULT_SUBST DIV_SUBST
%left AND OR
%left EQUAL NOT_EQUAL MORE_EQUAL LESS_EQUAL MORE LESS
%left PLUS MINUS
%left MULT DIV 
%left UMINUS

%%
program:
  blocks {
    if(show_syntax) cout << "program" << endl;
    program = $1;
  };

blocks:
  elements {
    if(show_syntax) cout << "blocks" << endl;
    $$ = $1;
  }
  |
  eols elements {
    if(show_syntax) cout << "blocks eols" << endl;
    $$ = $2;
  }
  |
  func_blocks elements {
    if(show_syntax) cout << "blocks with func_block" << endl;
    $$ = $1; $$ -> addBrother($2);
  }
  |
  eols func_blocks elements {
    if(show_syntax) cout << "blocks with func_block eols" << endl;
    $$ = $2; $$ -> addBrother($3);
  };

func_blocks:
  func_blocks func_block {
    if(show_syntax) cout << "func_block mult" << endl;
    $$ = $1; $$ -> addBrother(Node::getList($2));
  }
  |
  func_block {
    if(show_syntax) cout << "func_block one time" << endl;
    $$ = Node::getList($1);
  };

func_block:
   DOUBLE IDENTIFIER LEFT_PAREN identifiers RIGHT_PAREN EOL LEFT_BRACE EOL elements RIGHT_BRACE eols {
    if(show_syntax) cout << "func_block eols" << endl;
    $$ = Node::make_list(5, StringNode::Create("FUNC"), StringNode::Create("DOUBLE"), StringNode::Create($2), $4, $9);
  }
  |
  DOUBLE IDENTIFIER LEFT_PAREN RIGHT_PAREN EOL LEFT_BRACE EOL elements RIGHT_BRACE eols {
    if(show_syntax) cout << "func_block no args eols" << endl;
    $$ = Node::make_list(4, StringNode::Create("FUNC"), StringNode::Create("DOUBLE"), StringNode::Create($2), $8);
  }
  |
  VOID IDENTIFIER LEFT_PAREN identifiers RIGHT_PAREN EOL LEFT_BRACE EOL elements RIGHT_BRACE eols {
    if(show_syntax) cout << "void func_block eols" << endl;
    $$ = Node::make_list(5, StringNode::Create("FUNC"), StringNode::Create("VOID"), StringNode::Create($2), $4, $9);
  }
  |
  VOID IDENTIFIER LEFT_PAREN RIGHT_PAREN EOL LEFT_BRACE EOL elements RIGHT_BRACE eols {
    if(show_syntax) cout << "void func_block no args eols" << endl;
    $$ = Node::make_list(4, StringNode::Create("FUNC"), StringNode::Create("VOID"), StringNode::Create($2), $8);
  };

elements:
  elements element {
    if(show_syntax) cout << "elements repeat" << endl;
    $$ = $1; $$ -> addBrother(Node::getList($2));
  }
  |
  element {
    if(show_syntax) cout << "elements" << endl;
    $$ = Node::getList($1);
  };

element:
  element_content eols {
    if(show_syntax) cout << "element eols" << endl;
    $$ = $1;
  }
  |
  element_content END {
    if(show_syntax) cout << "element END" << endl;
    $$ = $1;
  };

element_content:
  declaration {
    if(show_syntax) cout << "element_content declaretion" << endl;
    $$ = $1;
  }
  |
  input_output {
    if(show_syntax) cout << "element_content input_output" << endl;
    $$ = $1;
  }
  |
  subst_calc {
    if(show_syntax) cout << "element_content subst_calc" << endl;
    $$ = $1;
  }
  |
  subst_calc_2 {
    if(show_syntax) cout << "element_content subst_calc_2" << endl;
    $$ = $1;
  }
  |
  if_stmt {
    if(show_syntax) cout << "element_content if_stmt" << endl;
    $$ = $1;
  }
  |
  WHILE LEFT_PAREN expression RIGHT_PAREN EOL LEFT_BRACE EOL elements RIGHT_BRACE {
    if(show_syntax) cout << "element_content while_stmt" << endl;
    $$ = Node::make_list(3, StringNode::Create("WHILE"), $3, $8);
  }
  |
  for_stmt {
    if(show_syntax) cout << "element_content for_stmt" << endl;
    $$ = $1;
  }
  |
  RETURN expression {
    if(show_syntax) cout << "element_content RETURN expression" << endl;
    $$ = Node::make_list(2, StringNode::Create("RETURN"), $2);
  }
  |
  func_exe {
    if(show_syntax) cout << "element_content func_exe" << endl;
    $$ = $1;
  }
  |
  SEMICOLON {
    if(show_syntax) cout << "element_content SEMICOLON" << endl;
    $$ = StringNode::Create("NEWLINE");
  };

declaration:
  DOUBLE identifiers {
    if(show_syntax) cout << "declaration identifiers" << endl;
    $$ = Node::make_list(2, StringNode::Create("DECL"), $2);
  }
  |
  declaration_subst_calc {
    if(show_syntax) cout << "declaration declaration_subst_calc" << endl;
    $$ = $1;
  };

declaration_subst_calc:
  DOUBLE subst_calc {
    if(show_syntax) cout << "declaration_subst_calc" << endl;
    $$ = Node::make_list(2, StringNode::Create("DECL_SUBST"), $2);
  };

input_output:
  INPUT identifiers {
    if(show_syntax) cout << "input_output input" << endl;
    $$ = Node::make_list(2, StringNode::Create("INPUT"), $2);
  }
  |
  outputs {
    if(show_syntax) cout << "input_output outputs" << endl;
    $$ = $1;
  };

outputs:
  outputs OUTPUT expression {
    if(show_syntax) cout << "outputs expression mult" << endl;
    $$ = $1; $$ -> addBrother(Node::make_list(2, StringNode::Create("OUTPUT"), $3));
  }
  |
  outputs OUTPUT STRINGLITERAL {
    if(show_syntax) cout << "outputs STRINGLITERAL mult" << endl;
    string text = $3;
    $$ = $1; $$ -> addBrother(Node::make_list(2, StringNode::Create("OUTPUT"), StringNode::Create(text.substr(1, text.size()-2))));
    Node *node = $$;
    while(node->getNext() != NULL) {
      node = node->getNext();
    }
    ((StringNode*)node)->setIsLiteral();
  }
  |
  OUTPUT expression {
    if(show_syntax) cout << "outputs expression" << endl;
    $$ = Node::make_list(2, StringNode::Create("OUTPUT"), $2);
  }
  |
  OUTPUT STRINGLITERAL {
    if(show_syntax) cout << "outputs STRINGLITERAL" << endl;
    string text = $2;
    $$ = Node::make_list(2, StringNode::Create("OUTPUT"), StringNode::Create(text.substr(1, text.size()-2)));
    ((StringNode*)($$->getNext()))->setIsLiteral();
  };

identifiers:
  identifiers COMMA IDENTIFIER {
    if(show_syntax) cout << "identifiers mult " << $3 << endl;
    $$ = $1; $$ -> addBrother(StringNode::Create($3));
  }
  |
  identifiers COMMA IDENTIFIER DOT DOUBLELITERAL {
    if(show_syntax) cout << "identifiers mult array INT" << $3 << " " << $5 << endl;
    $$ = $1; $$ -> addBrother(ArrayElementNode::Create($3, $5));
  }
  |
  identifiers COMMA IDENTIFIER DOT IDENTIFIER {
    if(show_syntax) cout << "identifiers mult array IDENTIFIER" << $3 << " " << $5 << endl;
    $$ = $1; $$ -> addBrother(ArrayElementNode::Create($3, $5));
  }
  |
  IDENTIFIER {
    if(show_syntax) cout << "identifiers one " << $1 << endl;
    $$ = StringNode::Create($1);
  }
  |
  IDENTIFIER DOT DOUBLELITERAL {
    if(show_syntax) cout << "identifiers one array INT " << $1 << " " << $3 << endl;
    $$ = ArrayElementNode::Create($1, $3);
  }
  |
  IDENTIFIER DOT IDENTIFIER {
    if(show_syntax) cout << "identifiers one array IDENTIFIER" << $1 << " " << $3 << endl;
    $$ = ArrayElementNode::Create($1, $3);
  };

subst_calc:
  identifiers SUBST expression {
    if(show_syntax) cout << "sbstcalc SUBST" << endl;
    $$ = Node::make_list(3, StringNode::Create("SUBST"), $1, $3);
  };

subst_calc_2:
  identifiers ADD_SUBST expression {
    if(show_syntax) cout << "subst_calc_2 ADD_SUBST" << endl;
    $$ = Node::make_list(3, StringNode::Create("ADD_SUBST"), $1, $3);
  }
  |
  identifiers SUBT_SUBST expression {
    if(show_syntax) cout << "subst_calc_2 SUBT_SUBST" << endl;
    $$ = Node::make_list(3, StringNode::Create("SUBT_SUBST"), $1, $3);
  }
  |
  identifiers MULT_SUBST expression {
    if(show_syntax) cout << "subst_calc_2 MULT_SUBST" << endl;
    $$ = Node::make_list(3, StringNode::Create("MULT_SUBST"), $1, $3);
  }
  |
  identifiers DIV_SUBST expression {
    if(show_syntax) cout << "subst_calc_2 DIV_SUBST" << endl;
    $$ = Node::make_list(3, StringNode::Create("DIV_SUBST"), $1, $3);
  };

expression:
  expression PLUS expression {
    if(show_syntax) cout << "expression PULS" << endl;
    $$ = Node::make_list(3, StringNode::Create("PULS"), $1, $3);
  }
  |
  expression MINUS expression {
    if(show_syntax) cout << "expression MINUS" << endl;
    $$ = Node::make_list(3, StringNode::Create("MINUS"), $1, $3);
  }
  |
  expression MULT expression {
    if(show_syntax) cout << "expression MULT" << endl;
    $$ = Node::make_list(3, StringNode::Create("MULT"), $1, $3);
  }
  |
  expression DIV expression {
    if(show_syntax) cout << "expression DIV" << endl;
    $$ = Node::make_list(3, StringNode::Create("DIV"), $1, $3);
  }
  |
  expression EQUAL expression {
    if(show_syntax) cout << "expression EQUAL" << endl;
    $$ = Node::make_list(3, StringNode::Create("EQUAL"), $1, $3);
  }
  |
  expression NOT_EQUAL expression {
    if(show_syntax) cout << "expression NOT_EQUAL" << endl;
    $$ = Node::make_list(3, StringNode::Create("NOT_EQUAL"), $1, $3);
  }
  |
  expression MORE_EQUAL expression {
    if(show_syntax) cout << "expression MORE_EQUAL" << endl;
    $$ = Node::make_list(3, StringNode::Create("MORE_EQUAL"), $1, $3);
  }
  |
  expression LESS_EQUAL expression {
    if(show_syntax) cout << "expression LESS_EQUAL" << endl;
    $$ = Node::make_list(3, StringNode::Create("LESS_EQUAL"), $1, $3);
  }
  |
  expression MORE expression {
    if(show_syntax) cout << "expression MORE" << endl;
    $$ = Node::make_list(3, StringNode::Create("MORE"), $1, $3);
  }
  |
  expression LESS expression {
    if(show_syntax) cout << "expression LESS" << endl;
    $$ = Node::make_list(3, StringNode::Create("LESS"), $1, $3);
  }
  |
  expression AND expression {
    if(show_syntax) cout << "expression AND" << endl;
    $$ = Node::make_list(3, StringNode::Create("AND"), $1, $3);
  }
  |
  expression OR expression {
    if(show_syntax) cout << "expression OR" << endl;
    $$ = Node::make_list(3, StringNode::Create("OR"), $1, $3);
  }
  |
  monomial {
    if(show_syntax) cout << "expression monomial" << endl;
    $$ = $1;
  }
  |
  MINUS expression %prec UMINUS {
    if(show_syntax) cout << "expression UMINUS" << endl;
    $$ = Node::make_list(2, StringNode::Create("UMINUS"), $2);
  }
  |
  LEFT_PAREN expression RIGHT_PAREN {
    if(show_syntax) cout << "expression PAREN" << endl;
    $$ = $2;
  };

monomial:
  DOUBLELITERAL {
    if(show_syntax) cout << "monomial " << $1 << endl;
    $$ = DoubleNode::Create($1);
  }
  |
  IDENTIFIER {
    if(show_syntax) cout << "monomial " << $1 << endl;
    $$ = StringNode::Create($1);
  }
  |
  IDENTIFIER DOT DOUBLELITERAL {
    if(show_syntax) cout << "monomial " << $1 << " " << $3 << endl;
    $$ = ArrayElementNode::Create($1, $3);
  }
  |
  IDENTIFIER DOT IDENTIFIER {
    if(show_syntax) cout << "monomial " << $1 << " " << $3 << endl;
    $$ = ArrayElementNode::Create($1, $3);
  }
  |
  func_exe {
    if(show_syntax) cout << "monomial func_exe" << endl;
    $$ = $1;
  };

if_stmt:
  IF LEFT_PAREN expression RIGHT_PAREN EOL LEFT_BRACE EOL elements RIGHT_BRACE {
    if(show_syntax) cout << "if_stmt" << endl;
    $$ = Node::make_list(3, StringNode::Create("IF"), $3, $8);
  }
  |
  IF LEFT_PAREN expression RIGHT_PAREN EOL LEFT_BRACE EOL elements RIGHT_BRACE ELSE EOL LEFT_BRACE EOL elements RIGHT_BRACE {
    if(show_syntax) cout << "if_stmt else" << endl;
    $$ = Node::make_list(4, StringNode::Create("IF_ELSE"), $3, $8, $14);
  };

for_stmt:
  FOR LEFT_PAREN declaration_subst_calc COMMA expression COMMA subst_calc RIGHT_PAREN EOL LEFT_BRACE EOL elements RIGHT_BRACE {
    if(show_syntax) cout << "for_stmt declaration_subst_calc subst_calc" << endl;
    $$ = Node::make_list(5, StringNode::Create("FOR"), $3, $5, $12, $7);
  }
  |
  FOR LEFT_PAREN declaration_subst_calc COMMA expression COMMA subst_calc_2 RIGHT_PAREN EOL LEFT_BRACE EOL elements RIGHT_BRACE {
    if(show_syntax) cout << "for_stmt declaration_subst_calc subst_calc_2" << endl;
    $$ = Node::make_list(5, StringNode::Create("FOR"), $3, $5, $12, $7);
  }
  |
  FOR LEFT_PAREN subst_calc COMMA expression COMMA subst_calc RIGHT_PAREN EOL LEFT_BRACE EOL elements RIGHT_BRACE {
    if(show_syntax) cout << "for_stmt subst_calc subst_calc" << endl;
    $$ = Node::make_list(5, StringNode::Create("FOR"), $3, $5, $12, $7);
  }
  |
  FOR LEFT_PAREN subst_calc COMMA expression COMMA subst_calc_2 RIGHT_PAREN EOL LEFT_BRACE EOL elements RIGHT_BRACE {
    if(show_syntax) cout << "for_stmt subst_calc subst_calc_2" << endl;
    $$ = Node::make_list(5, StringNode::Create("FOR"), $3, $5, $12, $7);
  }
  |
  FOR LEFT_PAREN subst_calc_2 COMMA expression COMMA subst_calc RIGHT_PAREN EOL LEFT_BRACE EOL elements RIGHT_BRACE {
    if(show_syntax) cout << "for_stmt subst_calc_2 subst_calc" << endl;
    $$ = Node::make_list(5, StringNode::Create("FOR"), $3, $5, $12, $7);
  }
  |
  FOR LEFT_PAREN subst_calc_2 COMMA expression COMMA subst_calc_2 RIGHT_PAREN EOL LEFT_BRACE EOL elements RIGHT_BRACE {
    if(show_syntax) cout << "for_stmt subst_calc_2 subst_calc_2" << endl;
    $$ = Node::make_list(5, StringNode::Create("FOR"), $3, $5, $12, $7);
  };

func_exe:
  IDENTIFIER LEFT_PAREN identifiers RIGHT_PAREN {
    if(show_syntax) cout << "func_exe identifiers" << endl;
    $$ = Node::make_list(3, StringNode::Create("FUNC_EXE"), StringNode::Create($1), $3);
  }
  |
  IDENTIFIER LEFT_PAREN RIGHT_PAREN {
    if(show_syntax) cout << "func_exe no identifiers" << endl;
    $$ = Node::make_list(2, StringNode::Create("FUNC_EXE"), StringNode::Create($1));
  };

eols:
  eols EOL
  |
  EOL;
%%

void yyerror(const char *s) {
  cout << "parse error ! Message: " << s << endl;

  exit(-1);
}