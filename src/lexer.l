%{
  #include <cstdio>
  #include <iostream>
  #include <cstdlib>
  #include "parser.tab.h"
  using namespace std;
%}
%option noyywrap
WHITESPACE      [ \t]
INT             [-\+]*[0-9]+
FLOAT           {INT}\.[0-9]+
STRING          \"[^"]*\"|\'[^']*\'
COMMENT         <.*\n|<([^<]|\n)*>
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
ASTERISK        \*
SLASH           \/
AND             &
OR              \|
ADD_SUBST       \+=
SUBT_SUBST      -=
MULT_SUBST      \*=
DIV_SUBST       \/=
RETURN          return
DOT             \.
COMMA           ,
INPUT           %
OUTPUT          #
IF              if
ELSE            else
FOR             for
WHILE           while
BREAK           break
CONTINUE        continue
FUNC            func
LEFT_PAREN      \(
RIGHT_PAREN     \)
IDENT_DECL      \$
EOL             \n|\r\n
%%
{EOL}               { cout << "Found a EOL " << endl; }
{WHITESPACE}        ;
{INT}               { yylval.ival = atoi(yytext); return INT; }
{FLOAT}             { yylval.fval =atof(yytext); return FLOAT; }
{STRING}            { yylval.sval = strdup(yytext); return STRING; }
{EQUAL}             { cout << "Found a EQUAL: " << yytext << endl; }
{NOT_EQUAL}         { cout << "Found a NOT_EQUAL: " << yytext << endl; }
{MORE_EQUAL}        { cout << "Found a MORE_EQUAL: " << yytext << endl; }
{LESS_EQUAL}        { cout << "Found a LESS_EQUAL: " << yytext << endl; }
{MORE}              { cout << "Found a MORE: " << yytext << endl; }
{LESS}              { cout << "Found a LESS: " << yytext << endl; }
{SUBST}             { cout << "Found a EQUAL: " << yytext << endl; }
{PLUS}              { cout << "Found a +: " << yytext << endl; }
{MINUS}             { cout << "Found a -: " << yytext << endl; }
{ASTERISK}          { cout << "Found a *: " << yytext << endl; }
{SLASH}             { cout << "Found a /: " << yytext << endl; }
{AND}               { cout << "Found a &: " << yytext << endl; }
{OR}                { cout << "Found a /: " << yytext << endl; }
{ADD_SUBST}         { cout << "Found a +=: " << yytext << endl; }
{SUBT_SUBST}        { cout << "Found a -=: " << yytext << endl; }
{MULT_SUBST}        { cout << "Found a *=: " << yytext << endl; }
{DIV_SUBST}         { cout << "Found a /=: " << yytext << endl; }
{RETURN}            { cout << "Found a return: " << yytext << endl; }
{DOT}               { cout << "Found a .: " << yytext << endl; }
{COMMA}             { cout << "Found a ,: " << yytext << endl; }
{INPUT}             { cout << "Found a %: " << yytext << endl; }
{OUTPUT}            { cout << "Found a #: " << yytext << endl; }
{IF}                { cout << "Found a if: " << yytext << endl; }
{ELSE}              { cout << "Found a else: " << yytext << endl; }
{FOR}               { cout << "Found a for: " << yytext << endl; }
{WHILE}             { cout << "Found a while: " << yytext << endl; }
{BREAK}             { cout << "Found a break: " << yytext << endl; }
{CONTINUE}          { cout << "Found a continue: " << yytext << endl; }
{FUNC}              { cout << "Found a func: " << yytext << endl; }
{LEFT_PAREN}        { cout << "Found a (: " << yytext << endl; }
{RIGHT_PAREN}       { cout << "Found a ): " << yytext << endl; }
{COMMENT}           ;
{IDENTIFIER}        { cout << "Found a IDENTIFIER: " << yytext << endl; }
{IDENT_DECL}        { cout << "Found a $: " << yytext << endl; }
%%