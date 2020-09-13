%{
  #include <cstdio>
  #include <cstdlib>
  #include <string.h>
  #include "nodes.h"
  #include "parser.tab.h"
  using namespace std;
%}
%option noyywrap
WHITESPACE      [ \t]
INT             [-\+]*[0-9]+
DOUBLE           {INT}\.[0-9]+
STRING          \"[^"]*\"|\'[^']*\'
COMMENT         "/*"([^\*]|(\*)*[^\*/])*(\*)*"*/"
IDENTIFIER      [a-zA-Z_][0-9a-zA-Z_]*

EQUAL           ==
NOT_EQUAL       !=
MORE_EQUAL      >=
LESS_EQUAL      <=
MORE            >
LESS            <
SUBST           =
PLUS            \+
MINUS           -
MULT            \*
DIV             \/
MOD             %
AND             &
OR              \|
ADD_SUBST       \+=
SUBT_SUBST      -=
MULT_SUBST      \*=
DIV_SUBST       \/=
MOD_SUBST       %=
RETURN          return
DOT             \.
COMMA           ,
INPUT           #
OUTPUT          @
IF              if
ELSE            else
FOR             for
WHILE           while
BREAK           break
CONTINUE        continue
FUNC            func
LEFT_PAREN      \(
RIGHT_PAREN     \)
LEFT_BRACE      \{
RIGHT_BRACE     \}
RIGHT_BRACKET   \]
IDENT_DECL      \$
EOL             \n|\r\n

%%
{EOL} {
  return EOL;
}

{WHITESPACE} ;

{INT} {
  yylval.lval = atol(yytext); 
  return INT; 
}

{DOUBLE} {
  yylval.dval = atof(yytext); 
  return DOUBLE; 
}

{STRING} {
  yylval.sval = strdup(yytext); 
  return STRING;
}

{EQUAL} {
  return EQUAL;
}

{NOT_EQUAL} {
  return NOT_EQUAL;
}

{MORE_EQUAL} {
  return MORE_EQUAL;
}

{LESS_EQUAL} {
  return LESS_EQUAL;
}

{MORE} {
  return MORE;
}

{LESS} {
  return LESS;
}

{SUBST} {
  return SUBST;
}

{PLUS} {
  return PLUS;
}

{MINUS} {
  return MINUS;
}

{MULT} {
  return MULT;
}

{DIV} {
  return DIV;
}

{MOD} {
  return MOD;
}

{AND} {
  return AND;
}

{OR} {
  return OR;
}

{ADD_SUBST} {
  return ADD_SUBST;
}

{SUBT_SUBST} {
  return SUBT_SUBST;
}

{MULT_SUBST} {
  return MULT_SUBST;
}

{DIV_SUBST} {
  return DIV_SUBST;
}

{MOD_SUBST} {
  return MOD_SUBST;
}

{RETURN} {
  return RETURN;
}

{DOT} {
  return DOT;
}

{COMMA} {
  return COMMA;
}

{INPUT} {
  return INPUT;
}

{OUTPUT} {
  return OUTPUT;
}

{IF} {
  return IF;
}

{ELSE} {
  return ELSE;
}

{FOR} {
  return FOR;
}

{WHILE} {
  return WHILE;
}

{BREAK} {
  return BREAK;
}

{CONTINUE} {
  return CONTINUE;
}

{FUNC} {
  return FUNC;
}

{LEFT_PAREN} {
  return LEFT_PAREN;
}

{RIGHT_PAREN} {
  return RIGHT_PAREN;
}

{LEFT_BRACE} {
  return LEFT_BRACE;
}

{RIGHT_BRACE} {
  return RIGHT_BRACE;
}

{COMMENT} ;

{IDENTIFIER} {
  yylval.sval = strdup(yytext); 
  return IDENTIFIER;
}

{RIGHT_BRACKET} {
  return RIGHT_BRACKET;
}

{IDENT_DECL} {
  return IDENT_DECL;
}

<<EOF>> {
  return 0;
}
%%