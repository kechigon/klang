/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    END = 0,
    DOUBLELITERAL = 258,
    STRINGLITERAL = 259,
    IDENTIFIER = 260,
    EQUAL = 261,
    NOT_EQUAL = 262,
    MORE_EQUAL = 263,
    LESS_EQUAL = 264,
    MORE = 265,
    LESS = 266,
    SUBST = 267,
    PLUS = 268,
    MINUS = 269,
    MULT = 270,
    DIV = 271,
    AND = 272,
    OR = 273,
    ADD_SUBST = 274,
    SUBT_SUBST = 275,
    MULT_SUBST = 276,
    DIV_SUBST = 277,
    RETURN = 278,
    DOT = 279,
    COMMA = 280,
    INPUT = 281,
    OUTPUT = 282,
    IF = 283,
    ELSE = 284,
    FOR = 285,
    WHILE = 286,
    BREAK = 287,
    CONTINUE = 288,
    LEFT_PAREN = 289,
    RIGHT_PAREN = 290,
    LEFT_BRACE = 291,
    RIGHT_BRACE = 292,
    RIGHT_BRACKET = 293,
    DOUBLE = 294,
    STRING = 295,
    VOID = 296,
    SEMICOLON = 297,
    EOL = 298,
    UMINUS = 299
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "../srcs/parser/parser.y" /* yacc.c:1909  */

  double dval;
  char* sval;
  Node* nodes;

#line 106 "parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
