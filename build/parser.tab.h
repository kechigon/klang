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
    INT = 258,
    FLOAT = 259,
    STRING = 260,
    IDENTIFIER = 261,
    EQUAL = 262,
    NOT_EQUAL = 263,
    MORE_EQUAL = 264,
    LESS_EQUAL = 265,
    MORE = 266,
    LESS = 267,
    SUBST = 268,
    PLUS = 269,
    MINUS = 270,
    MULT = 271,
    DIV = 272,
    AND = 273,
    MOD = 274,
    OR = 275,
    ADD_SUBST = 276,
    SUBT_SUBST = 277,
    MULT_SUBST = 278,
    DIV_SUBST = 279,
    MOD_SUBST = 280,
    RETURN = 281,
    DOT = 282,
    COMMA = 283,
    INPUT = 284,
    OUTPUT = 285,
    IF = 286,
    ELSE = 287,
    FOR = 288,
    WHILE = 289,
    BREAK = 290,
    CONTINUE = 291,
    FUNC = 292,
    LEFT_PAREN = 293,
    RIGHT_PAREN = 294,
    LEFT_BRACE = 295,
    RIGHT_BRACE = 296,
    RIGHT_BRACKET = 297,
    IDENT_DECL = 298,
    EOL = 299,
    UMINUS = 300
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "../src/parser.y" /* yacc.c:1909  */

  long lval;
  double dval;
  char* sval;

#line 107 "parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
