%{
  #include <cstdlib>
  #include "nodes.h"
  #include "parser.tab.h"
  using namespace std;
%}
%option noyywrap
%option nounput
%option noinput
WHITESPACE      [ \t]
DOUBLELITERAL   ([0-9]+)|([0-9]+\.[0-9]+)
STRINGLITERAL   \"[^"]*\"|\'[^']*\'
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
AND             &
OR              \|
ADD_SUBST       \+=
SUBT_SUBST      -=
MULT_SUBST      \*=
DIV_SUBST       \/=
RETURN          return
DOT             \.
COMMA           ,
INPUT           #
OUTPUT          \$
IF              if
ELSE            else
FOR             for
WHILE           while
BREAK           break
CONTINUE        continue
LEFT_PAREN      \(
RIGHT_PAREN     \)
LEFT_BRACE      \{
RIGHT_BRACE     \}
RIGHT_BRACKET   \]
DOUBLE          double
VOID            void
SEMICOLON       ;
EOL             \n|\r\n

%%
{EOL} {
  return EOL;
}

{WHITESPACE} ;

{DOUBLELITERAL} {
  yylval.dval = atof(yytext); 
  return DOUBLELITERAL; 
}

{STRINGLITERAL} {
  yylval.sval = strdup(yytext); 
  return STRINGLITERAL;
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

{RIGHT_BRACKET} {
  return RIGHT_BRACKET;
}

{DOUBLE} {
  return DOUBLE;
}

{VOID} {
  return VOID;
}

{SEMICOLON} {
  return SEMICOLON;
}

{IDENTIFIER} {
  yylval.sval = strdup(yytext); 
  return IDENTIFIER;
}

<<EOF>> {
  return 0;
}
%%