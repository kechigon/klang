/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "../srcs/parser/parser.y" /* yacc.c:339  */

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


#line 81 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
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
#line 16 "../srcs/parser/parser.y" /* yacc.c:355  */

  double dval;
  char* sval;
  Node* nodes;

#line 173 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 190 "parser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  52
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   750

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  255

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    97,    97,   103,   108,   113,   118,   124,   129,   135,
     140,   145,   150,   156,   161,   167,   172,   178,   183,   188,
     193,   198,   203,   208,   213,   218,   223,   228,   235,   240,
     246,   251,   257,   263,   268,   274,   279,   290,   295,   303,
     308,   313,   318,   323,   328,   334,   339,   347,   352,   357,
     362,   368,   373,   378,   383,   388,   393,   398,   403,   408,
     413,   418,   423,   428,   433,   438,   444,   449,   454,   459,
     464,   470,   475,   480,   485,   491,   496,   502,   508,   513,
     518,   523,   528,   533,   539,   544,   550,   555,   561,   566,
     572,   574
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "END", "error", "$undefined", "DOUBLELITERAL", "STRINGLITERAL",
  "IDENTIFIER", "EQUAL", "NOT_EQUAL", "MORE_EQUAL", "LESS_EQUAL", "MORE",
  "LESS", "SUBST", "PLUS", "MINUS", "MULT", "DIV", "AND", "OR",
  "ADD_SUBST", "SUBT_SUBST", "MULT_SUBST", "DIV_SUBST", "RETURN", "DOT",
  "COMMA", "INPUT", "OUTPUT", "IF", "ELSE", "FOR", "WHILE", "BREAK",
  "CONTINUE", "LEFT_PAREN", "RIGHT_PAREN", "LEFT_BRACE", "RIGHT_BRACE",
  "RIGHT_BRACKET", "DOUBLE", "STRING", "VOID", "SEMICOLON", "EOL",
  "UMINUS", "$accept", "program", "blocks", "func_blocks", "func_block",
  "elements", "element", "element_content", "declaration",
  "declaration_subst_calc", "input_output", "outputs", "identifiers",
  "subst_calc", "subst_calc_2", "expression", "monomial", "if_stmt",
  "else_if_stmts", "else_if_stmt", "for_stmt", "func_exe", "args", "types",
  "eols", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299
};
# endif

#define YYPACT_NINF -48

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-48)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     230,     5,     6,    21,    14,     0,     7,    32,   -48,   -48,
     -48,   -48,   102,   -48,   -48,    37,   -48,   309,   -48,   589,
     -48,     1,   -48,   -48,   -48,    88,    43,   -48,   -48,   -48,
     -48,   -48,   123,   259,    77,    25,   -48,   -48,    84,   107,
     107,   721,   -48,   -48,   108,   115,   -48,   721,   107,     3,
     107,   124,   -48,   -48,   589,   -48,    21,   -48,    93,    19,
      42,   107,   107,   107,   107,   155,    85,    24,   -48,   -48,
     309,   589,   -48,   -48,   -48,    95,   111,   -48,   213,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   626,   144,   146,   147,    21,   639,    44,   -48,   721,
     -48,   721,   721,   721,   721,   721,   150,    46,   589,   -48,
     -48,   -48,   -48,   182,   182,   182,   182,   182,   182,    72,
      72,   -48,   -48,   734,   734,   132,   107,   107,   107,    24,
     134,   136,   130,   179,   126,   143,   138,   151,   675,   695,
     708,   152,   157,   -36,   156,   -48,   -48,   -48,   164,   159,
     160,    21,    21,    21,   161,   175,   227,   200,   194,   204,
     589,   207,   208,   209,   210,   211,   212,   589,   589,   -48,
     216,   589,   223,   289,   224,   225,   231,   233,   234,   235,
     329,   349,   589,   369,   589,   236,   -48,   215,   218,   219,
     244,   245,   247,   -48,   241,   389,   241,   409,   266,   253,
     254,   260,   261,   262,   263,    93,   241,    93,   241,   -22,
     119,   -48,   589,   589,   589,   589,   589,   589,    93,    93,
     273,   252,   265,   -48,   429,   449,   469,   489,   509,   529,
     107,   267,   280,   -48,   -48,   -48,   -48,   -48,   -48,   662,
     589,   -16,   -48,   270,   549,   282,   287,   -48,   281,   290,
     589,   589,   569,   589,   -48
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    42,     0,     0,     0,     0,     0,     0,    24,    25,
      88,    89,     0,    29,    91,     0,     2,     0,     8,     3,
      14,     0,    17,    31,    18,    34,     0,    19,    20,    21,
      23,    28,     0,     0,     0,     0,    66,    27,    67,     0,
       0,    26,    63,    70,    42,    33,    38,    37,     0,     0,
       0,     0,     1,     7,     5,    13,     0,    16,    15,     0,
       0,     0,     0,     0,     0,     0,    42,    30,    32,    90,
       0,     4,    43,    44,    85,     0,     0,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,    35,
      46,    45,    47,    48,    49,    50,    39,     0,     6,    84,
      68,    69,    65,    55,    56,    57,    58,    59,    60,    51,
      52,    53,    54,    61,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,     0,     0,     0,
       0,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,     0,    10,     0,     0,
       0,    76,     0,     0,     0,     0,     0,     0,    11,     9,
       0,     0,     0,    73,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,    79,    80,    81,    82,    83,     0,
       0,     0,    75,     0,     0,     0,     0,    72,     0,     0,
       0,     0,     0,    77,    74
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -48,   -48,   -48,   292,   -12,    -1,   -19,   -48,   -48,   203,
     -48,   -48,    22,   -18,   -47,    63,   -48,   -48,   -48,    98,
     -48,    11,   237,   168,   -14
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    41,    42,    29,   210,   211,
      30,    31,   132,    56,    33
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      55,    57,    94,    10,    11,    53,   220,    58,    44,    36,
      37,    38,   220,    43,    68,    43,    54,    36,    46,    38,
      39,   221,    36,    98,    38,    45,    44,   245,    39,    34,
      44,    93,    71,    39,    48,    55,    60,    52,    68,    35,
      40,    49,    10,    11,    14,    36,   100,    38,    40,    65,
      43,    43,    55,    40,    67,    60,    39,    75,    53,    43,
      74,    43,    61,    62,    63,    64,    50,    47,    65,   108,
      43,    43,    43,    43,    43,    43,    40,    68,    67,   131,
      72,   135,    73,    10,    11,    10,    11,    87,    88,    55,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    77,    78,   162,   164,   166,    51,    76,    34,
      36,    91,    38,    96,   110,    59,   111,   129,    35,   107,
      65,    39,    99,   101,   102,   103,   104,   105,    66,   146,
     109,   147,    34,   161,   163,   165,    69,    43,    43,    43,
      65,    40,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    55,   143,   222,   223,    97,   173,
     106,    55,    55,   143,    55,   144,   180,   181,    32,   126,
     183,   127,   128,   149,   134,   137,    55,   141,    55,   142,
     205,   195,   207,   197,   145,    32,   148,   150,   154,   138,
     139,   140,   218,   155,   219,    85,    86,    87,    88,   157,
     158,    32,   159,   160,   167,    55,    55,    55,    55,    55,
      55,   224,   225,   226,   227,   228,   229,    95,   168,    79,
      80,    81,    82,    83,    84,    55,    85,    86,    87,    88,
      89,    90,   169,    55,    55,     1,   170,   171,    32,   244,
     172,    43,   174,   175,   176,   177,   178,   179,   112,   252,
     253,   199,    92,     2,   200,   201,     3,     4,     5,   182,
       6,     7,     8,     9,     1,   133,   184,   187,   188,    10,
      11,    12,    13,    14,   189,   133,   190,   191,   192,   198,
     202,   203,     2,   204,    14,     3,     4,     5,   231,     6,
       7,     8,     9,   239,     1,   209,   212,   213,    10,    11,
      12,    13,    69,   214,   215,   216,   217,   230,   232,   241,
     240,   156,     2,   246,     1,     3,     4,     5,   248,     6,
       7,     8,     9,   249,   250,    70,   185,   186,    10,    11,
     242,    13,     2,   251,     1,     3,     4,     5,     0,     6,
       7,     8,     9,     0,   136,     0,     0,     0,    10,    11,
      12,    13,     2,     0,     1,     3,     4,     5,     0,     6,
       7,     8,     9,     0,     0,     0,   193,     0,    10,    11,
       0,    13,     2,     0,     1,     3,     4,     5,     0,     6,
       7,     8,     9,     0,     0,     0,   194,     0,    10,    11,
       0,    13,     2,     0,     1,     3,     4,     5,     0,     6,
       7,     8,     9,     0,     0,     0,   196,     0,    10,    11,
       0,    13,     2,     0,     1,     3,     4,     5,     0,     6,
       7,     8,     9,     0,     0,     0,   206,     0,    10,    11,
       0,    13,     2,     0,     1,     3,     4,     5,     0,     6,
       7,     8,     9,     0,     0,     0,   208,     0,    10,    11,
       0,    13,     2,     0,     1,     3,     4,     5,     0,     6,
       7,     8,     9,     0,     0,     0,   233,     0,    10,    11,
       0,    13,     2,     0,     1,     3,     4,     5,     0,     6,
       7,     8,     9,     0,     0,     0,   234,     0,    10,    11,
       0,    13,     2,     0,     1,     3,     4,     5,     0,     6,
       7,     8,     9,     0,     0,     0,   235,     0,    10,    11,
       0,    13,     2,     0,     1,     3,     4,     5,     0,     6,
       7,     8,     9,     0,     0,     0,   236,     0,    10,    11,
       0,    13,     2,     0,     1,     3,     4,     5,     0,     6,
       7,     8,     9,     0,     0,     0,   237,     0,    10,    11,
       0,    13,     2,     0,     1,     3,     4,     5,     0,     6,
       7,     8,     9,     0,     0,     0,   238,     0,    10,    11,
       0,    13,     2,     0,     1,     3,     4,     5,     0,     6,
       7,     8,     9,     0,     0,     0,     0,   247,    10,    11,
       0,    13,     2,     0,     1,     3,     4,     5,     0,     6,
       7,     8,     9,     0,     0,     0,     0,   254,    10,    11,
       0,    13,     2,     0,     0,     3,     4,     5,     0,     6,
       7,     8,     9,     0,     0,     0,     0,     0,    10,    11,
       0,    13,    79,    80,    81,    82,    83,    84,     0,    85,
      86,    87,    88,    89,    90,    79,    80,    81,    82,    83,
      84,     0,    85,    86,    87,    88,    89,    90,     0,     0,
       0,   125,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,   130,    85,    86,    87,    88,    89,
      90,    79,    80,    81,    82,    83,    84,     0,    85,    86,
      87,    88,    89,    90,     0,     0,     0,   243,     0,     0,
     151,    79,    80,    81,    82,    83,    84,     0,    85,    86,
      87,    88,    89,    90,    79,    80,    81,    82,    83,    84,
     152,    85,    86,    87,    88,    89,    90,    79,    80,    81,
      82,    83,    84,   153,    85,    86,    87,    88,    89,    90,
      79,    80,    81,    82,    83,    84,     0,    85,    86,    87,
      88
};

static const yytype_int16 yycheck[] =
{
      19,     0,    49,    39,    40,    17,    28,    21,     5,     3,
       4,     5,    28,     2,    32,     4,    17,     3,     4,     5,
      14,    43,     3,     4,     5,     3,     5,    43,    14,    24,
       5,    49,    33,    14,    34,    54,    12,     0,    56,    34,
      34,    34,    39,    40,    43,     3,     4,     5,    34,    25,
      39,    40,    71,    34,    32,    12,    14,    35,    70,    48,
      35,    50,    19,    20,    21,    22,    34,     4,    25,    70,
      59,    60,    61,    62,    63,    64,    34,    95,    56,    35,
       3,    35,     5,    39,    40,    39,    40,    15,    16,   108,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    39,    40,   151,   152,   153,     5,    24,    24,
       3,    48,     5,    50,     3,    27,     5,    95,    34,    34,
      25,    14,    59,    60,    61,    62,    63,    64,     5,     3,
      35,     5,    24,   151,   152,   153,    43,   126,   127,   128,
      25,    34,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,   173,    25,    37,    38,    34,   160,
       5,   180,   181,    25,   183,    35,   167,   168,     0,    25,
     171,    25,    25,    35,    24,    43,   195,    43,   197,    43,
     194,   182,   196,   184,     5,    17,    43,    36,    36,   126,
     127,   128,   206,    36,   208,    13,    14,    15,    16,    43,
      36,    33,    43,    43,    43,   224,   225,   226,   227,   228,
     229,   212,   213,   214,   215,   216,   217,    49,    43,     6,
       7,     8,     9,    10,    11,   244,    13,    14,    15,    16,
      17,    18,     5,   252,   253,     5,    36,    43,    70,   240,
      36,   230,    35,    35,    35,    35,    35,    35,    35,   250,
     251,    36,    49,    23,    36,    36,    26,    27,    28,    43,
      30,    31,    32,    33,     5,    97,    43,    43,    43,    39,
      40,    41,    42,    43,    43,   107,    43,    43,    43,    43,
      36,    36,    23,    36,    43,    26,    27,    28,    36,    30,
      31,    32,    33,   230,     5,    29,    43,    43,    39,    40,
      41,    42,    43,    43,    43,    43,    43,    34,    43,    29,
      43,   143,    23,    43,     5,    26,    27,    28,    36,    30,
      31,    32,    33,    36,    43,    33,    37,    38,    39,    40,
     232,    42,    23,    43,     5,    26,    27,    28,    -1,    30,
      31,    32,    33,    -1,   107,    -1,    -1,    -1,    39,    40,
      41,    42,    23,    -1,     5,    26,    27,    28,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,
      -1,    42,    23,    -1,     5,    26,    27,    28,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,
      -1,    42,    23,    -1,     5,    26,    27,    28,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,
      -1,    42,    23,    -1,     5,    26,    27,    28,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,
      -1,    42,    23,    -1,     5,    26,    27,    28,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,
      -1,    42,    23,    -1,     5,    26,    27,    28,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,
      -1,    42,    23,    -1,     5,    26,    27,    28,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,
      -1,    42,    23,    -1,     5,    26,    27,    28,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,
      -1,    42,    23,    -1,     5,    26,    27,    28,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,
      -1,    42,    23,    -1,     5,    26,    27,    28,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,
      -1,    42,    23,    -1,     5,    26,    27,    28,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,
      -1,    42,    23,    -1,     5,    26,    27,    28,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    38,    39,    40,
      -1,    42,    23,    -1,     5,    26,    27,    28,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    38,    39,    40,
      -1,    42,    23,    -1,    -1,    26,    27,    28,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    42,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,     6,     7,
       8,     9,    10,    11,    35,    13,    14,    15,    16,    17,
      18,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    35,    -1,    -1,
      25,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,     6,     7,     8,     9,    10,    11,
      25,    13,    14,    15,    16,    17,    18,     6,     7,     8,
       9,    10,    11,    25,    13,    14,    15,    16,    17,    18,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      16
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    23,    26,    27,    28,    30,    31,    32,    33,
      39,    40,    41,    42,    43,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    62,
      65,    66,    68,    69,    24,    34,     3,     4,     5,    14,
      34,    60,    61,    66,     5,    57,     4,    60,    34,    34,
      34,     5,     0,    49,    50,    51,    68,     0,    69,    27,
      12,    19,    20,    21,    22,    25,     5,    57,    58,    43,
      48,    50,     3,     5,    35,    57,    24,    60,    60,     6,
       7,     8,     9,    10,    11,    13,    14,    15,    16,    17,
      18,    60,    54,    58,    59,    68,    60,    34,     4,    60,
       4,    60,    60,    60,    60,    60,     5,    34,    50,    35,
       3,     5,    35,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    35,    25,    25,    25,    57,
      35,    35,    67,    68,    24,    35,    67,    43,    60,    60,
      60,    43,    43,    25,    35,     5,     3,     5,    43,    35,
      36,    25,    25,    25,    36,    36,    68,    43,    36,    43,
      43,    58,    59,    58,    59,    58,    59,    43,    43,     5,
      36,    43,    36,    50,    35,    35,    35,    35,    35,    35,
      50,    50,    43,    50,    43,    37,    38,    43,    43,    43,
      43,    43,    43,    37,    37,    50,    37,    50,    43,    36,
      36,    36,    36,    36,    36,    69,    37,    69,    37,    29,
      63,    64,    43,    43,    43,    43,    43,    43,    69,    69,
      28,    43,    37,    38,    50,    50,    50,    50,    50,    50,
      34,    36,    43,    37,    37,    37,    37,    37,    37,    60,
      43,    29,    64,    35,    50,    43,    43,    38,    36,    36,
      43,    43,    50,    50,    38
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    47,    47,    47,    48,    48,    49,
      49,    49,    49,    50,    50,    51,    51,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      53,    53,    54,    55,    55,    56,    56,    56,    56,    57,
      57,    57,    57,    57,    57,    58,    58,    59,    59,    59,
      59,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    61,    61,    61,    61,
      61,    62,    62,    62,    62,    63,    63,    64,    65,    65,
      65,    65,    65,    65,    66,    66,    67,    67,    68,    68,
      69,    69
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     3,     2,     1,    11,
      10,    11,    10,     2,     1,     2,     2,     1,     1,     1,
       1,     1,     9,     1,     1,     1,     2,     2,     1,     1,
       2,     1,     2,     2,     1,     3,     3,     2,     2,     3,
       5,     5,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     2,     3,     1,     1,     3,     3,
       1,     9,    16,    12,    19,     4,     1,     9,    13,    13,
      13,    13,    13,    13,     4,     3,     4,     2,     1,     1,
       2,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 97 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "program" << endl;
    program = (yyvsp[0].nodes);
  }
#line 1533 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 103 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "blocks" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 1542 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 108 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "blocks eols" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 1551 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 113 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "blocks with func_block" << endl;
    (yyval.nodes) = (yyvsp[-1].nodes); (yyval.nodes) -> addBrother((yyvsp[0].nodes));
  }
#line 1560 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 118 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "blocks with func_block eols" << endl;
    (yyval.nodes) = (yyvsp[-1].nodes); (yyval.nodes) -> addBrother((yyvsp[0].nodes));
  }
#line 1569 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 124 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "func_block mult" << endl;
    (yyval.nodes) = (yyvsp[-1].nodes); (yyval.nodes) -> addBrother(Node::getList((yyvsp[0].nodes)));
  }
#line 1578 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 129 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "func_block one time" << endl;
    (yyval.nodes) = Node::getList((yyvsp[0].nodes));
  }
#line 1587 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 135 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "func_block eols" << endl;
    (yyval.nodes) = Node::make_list(5, StringNode::Create("FUNC"), (yyvsp[-10].nodes), StringNode::Create((yyvsp[-9].sval)), (yyvsp[-7].nodes), (yyvsp[-2].nodes));
  }
#line 1596 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 140 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "func_block no args eols" << endl;
    (yyval.nodes) = Node::make_list(4, StringNode::Create("FUNC"), (yyvsp[-9].nodes), StringNode::Create((yyvsp[-8].sval)), (yyvsp[-2].nodes));
  }
#line 1605 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 145 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "void func_block eols" << endl;
    (yyval.nodes) = Node::make_list(5, StringNode::Create("FUNC"), StringNode::Create("VOID"), StringNode::Create((yyvsp[-9].sval)), (yyvsp[-7].nodes), (yyvsp[-2].nodes));
  }
#line 1614 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 150 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "void func_block no args eols" << endl;
    (yyval.nodes) = Node::make_list(4, StringNode::Create("FUNC"), StringNode::Create("VOID"), StringNode::Create((yyvsp[-8].sval)), (yyvsp[-2].nodes));
  }
#line 1623 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 156 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "elements repeat" << endl;
    (yyval.nodes) = (yyvsp[-1].nodes); (yyval.nodes) -> addBrother((yyvsp[0].nodes));
  }
#line 1632 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 161 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "elements" << endl;
    (yyval.nodes) = Node::getList((yyvsp[0].nodes));
  }
#line 1641 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 167 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "element eols" << endl;
    (yyval.nodes) = (yyvsp[-1].nodes);
  }
#line 1650 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 172 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "element END" << endl;
    (yyval.nodes) = (yyvsp[-1].nodes);
  }
#line 1659 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 178 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "element_content declaretion" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 1668 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 183 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "element_content input_output" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 1677 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 188 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "element_content subst_calc" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 1686 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 193 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "element_content subst_calc_2" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 1695 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 198 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "element_content if_stmt" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 1704 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 203 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "element_content while_stmt" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("WHILE"), (yyvsp[-6].nodes), (yyvsp[-1].nodes));
  }
#line 1713 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 208 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "element_content for_stmt" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 1722 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 213 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "element_content BREAK" << endl;
    (yyval.nodes) = StringNode::Create("BREAK");
  }
#line 1731 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 218 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "element_content CONTINUE" << endl;
    (yyval.nodes) = StringNode::Create("CONTINUE");
  }
#line 1740 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 223 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "element_content RETURN expression" << endl;
    (yyval.nodes) = Node::make_list(2, StringNode::Create("RETURN"), (yyvsp[0].nodes));
  }
#line 1749 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 228 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "element_content RETURN STRINGLITERAL" << endl;
    string text = (yyvsp[0].sval);
    (yyval.nodes) = Node::make_list(2, StringNode::Create("RETURN"), StringNode::Create(text.substr(1, text.size()-2)));
    ((StringNode*)((yyval.nodes)->getNext()))->setIsLiteral();
  }
#line 1760 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 235 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "element_content func_exe" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 1769 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 240 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "element_content SEMICOLON" << endl;
    (yyval.nodes) = StringNode::Create("NEWLINE");
  }
#line 1778 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 246 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "declaration identifiers" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("DECL"), (yyvsp[-1].nodes), (yyvsp[0].nodes));
  }
#line 1787 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 251 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "declaration declaration_subst_calc" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 1796 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 257 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "declaration_subst_calc" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("DECL_SUBST"), (yyvsp[-1].nodes), (yyvsp[0].nodes));
  }
#line 1805 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 263 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "input_output input" << endl;
    (yyval.nodes) = Node::make_list(2, StringNode::Create("INPUT"), (yyvsp[0].nodes));
  }
#line 1814 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 268 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "input_output outputs" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 1823 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 274 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "outputs expression mult" << endl;
    (yyval.nodes) = (yyvsp[-2].nodes); (yyval.nodes) -> addBrother(Node::make_list(2, StringNode::Create("OUTPUT"), (yyvsp[0].nodes)));
  }
#line 1832 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 279 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "outputs STRINGLITERAL mult" << endl;
    string text = (yyvsp[0].sval);
    (yyval.nodes) = (yyvsp[-2].nodes); (yyval.nodes) -> addBrother(Node::make_list(2, StringNode::Create("OUTPUT"), StringNode::Create(text.substr(1, text.size()-2))));
    Node *node = (yyval.nodes);
    while(node->getNext() != NULL) {
      node = node->getNext();
    }
    ((StringNode*)node)->setIsLiteral();
  }
#line 1847 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 290 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "outputs expression" << endl;
    (yyval.nodes) = Node::make_list(2, StringNode::Create("OUTPUT"), (yyvsp[0].nodes));
  }
#line 1856 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 295 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "outputs STRINGLITERAL" << endl;
    string text = (yyvsp[0].sval);
    (yyval.nodes) = Node::make_list(2, StringNode::Create("OUTPUT"), StringNode::Create(text.substr(1, text.size()-2)));
    ((StringNode*)((yyval.nodes)->getNext()))->setIsLiteral();
  }
#line 1867 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 303 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "identifiers mult " << (yyvsp[0].sval) << endl;
    (yyval.nodes) = (yyvsp[-2].nodes); (yyval.nodes) -> addBrother(StringNode::Create((yyvsp[0].sval)));
  }
#line 1876 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 308 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "identifiers mult array INT" << (yyvsp[-2].sval) << " " << (yyvsp[0].dval) << endl;
    (yyval.nodes) = (yyvsp[-4].nodes); (yyval.nodes) -> addBrother(ArrayElementNode::Create((yyvsp[-2].sval), (yyvsp[0].dval)));
  }
#line 1885 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 313 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "identifiers mult array IDENTIFIER" << (yyvsp[-2].sval) << " " << (yyvsp[0].sval) << endl;
    (yyval.nodes) = (yyvsp[-4].nodes); (yyval.nodes) -> addBrother(ArrayElementNode::Create((yyvsp[-2].sval), (yyvsp[0].sval)));
  }
#line 1894 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 318 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "identifiers one " << (yyvsp[0].sval) << endl;
    (yyval.nodes) = StringNode::Create((yyvsp[0].sval));
  }
#line 1903 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 323 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "identifiers one array INT " << (yyvsp[-2].sval) << " " << (yyvsp[0].dval) << endl;
    (yyval.nodes) = ArrayElementNode::Create((yyvsp[-2].sval), (yyvsp[0].dval));
  }
#line 1912 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 328 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "identifiers one array IDENTIFIER" << (yyvsp[-2].sval) << " " << (yyvsp[0].sval) << endl;
    (yyval.nodes) = ArrayElementNode::Create((yyvsp[-2].sval), (yyvsp[0].sval));
  }
#line 1921 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 334 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "sbstcalc SUBST" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("SUBST"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 1930 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 339 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "subst_calc SUBST STRINGLITERAL" << endl;
    string text = (yyvsp[0].sval);
    (yyval.nodes) = Node::make_list(3, StringNode::Create("SUBST"), (yyvsp[-2].nodes), StringNode::Create(text.substr(1, text.size()-2)));
    ((StringNode*)((yyval.nodes)->getNext()->getNext()))->setIsLiteral();
  }
#line 1941 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 347 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "subst_calc_2 ADD_SUBST" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("ADD_SUBST"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 1950 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 352 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "subst_calc_2 SUBT_SUBST" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("SUBT_SUBST"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 1959 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 357 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "subst_calc_2 MULT_SUBST" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("MULT_SUBST"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 1968 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 362 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "subst_calc_2 DIV_SUBST" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("DIV_SUBST"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 1977 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 368 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "expression PULS" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("PULS"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 1986 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 373 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "expression MINUS" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("MINUS"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 1995 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 378 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "expression MULT" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("MULT"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 2004 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 383 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "expression DIV" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("DIV"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 2013 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 388 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "expression EQUAL" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("EQUAL"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 2022 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 393 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "expression NOT_EQUAL" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("NOT_EQUAL"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 2031 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 398 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "expression MORE_EQUAL" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("MORE_EQUAL"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 2040 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 403 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "expression LESS_EQUAL" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("LESS_EQUAL"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 2049 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 408 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "expression MORE" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("MORE"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 2058 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 413 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "expression LESS" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("LESS"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 2067 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 418 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "expression AND" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("AND"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 2076 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 423 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "expression OR" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("OR"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 2085 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 428 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "expression monomial" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 2094 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 433 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "expression UMINUS" << endl;
    (yyval.nodes) = Node::make_list(2, StringNode::Create("UMINUS"), (yyvsp[0].nodes));
  }
#line 2103 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 438 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "expression PAREN" << endl;
    (yyval.nodes) = (yyvsp[-1].nodes);
  }
#line 2112 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 444 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "monomial " << (yyvsp[0].dval) << endl;
    (yyval.nodes) = DoubleNode::Create((yyvsp[0].dval));
  }
#line 2121 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 449 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "monomial " << (yyvsp[0].sval) << endl;
    (yyval.nodes) = StringNode::Create((yyvsp[0].sval));
  }
#line 2130 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 454 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "monomial " << (yyvsp[-2].sval) << " " << (yyvsp[0].dval) << endl;
    (yyval.nodes) = ArrayElementNode::Create((yyvsp[-2].sval), (yyvsp[0].dval));
  }
#line 2139 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 459 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "monomial " << (yyvsp[-2].sval) << " " << (yyvsp[0].sval) << endl;
    (yyval.nodes) = ArrayElementNode::Create((yyvsp[-2].sval), (yyvsp[0].sval));
  }
#line 2148 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 464 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "monomial func_exe" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 2157 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 470 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "if_stmt" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("IF"), (yyvsp[-6].nodes), (yyvsp[-1].nodes));
  }
#line 2166 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 475 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "if_stmt else" << endl;
    (yyval.nodes) = Node::make_list(5, StringNode::Create("IF"), (yyvsp[-13].nodes), (yyvsp[-8].nodes), StringNode::Create("ELSE"), (yyvsp[-1].nodes));
  }
#line 2175 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 480 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "if_stmt elseif_stmts_end" << endl;
    (yyval.nodes) = Node::make_list(4, StringNode::Create("IF"), (yyvsp[-9].nodes), (yyvsp[-4].nodes), (yyvsp[-1].nodes));
  }
#line 2184 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 485 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "if_stmt else_if_stmts_mid else" << endl;
    (yyval.nodes) = Node::make_list(6, StringNode::Create("IF"), (yyvsp[-16].nodes), (yyvsp[-11].nodes), (yyvsp[-8].nodes), StringNode::Create("ELSE"), (yyvsp[-1].nodes));
  }
#line 2193 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 491 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "else_if_stmts mult" << endl;
    (yyval.nodes) = (yyvsp[-3].nodes); (yyval.nodes) -> addBrother(Node::getList((yyvsp[0].nodes)));
  }
#line 2202 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 496 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "else_if_stmts" << endl;
    (yyval.nodes) = Node::getList((yyvsp[0].nodes));
  }
#line 2211 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 502 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "else_if_stmt" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("ELSE_IF"), (yyvsp[-5].nodes), (yyvsp[0].nodes));
  }
#line 2220 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 508 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "for_stmt declaration_subst_calc subst_calc" << endl;
    (yyval.nodes) = Node::make_list(5, StringNode::Create("FOR"), (yyvsp[-10].nodes), (yyvsp[-8].nodes), (yyvsp[-1].nodes), (yyvsp[-6].nodes));
  }
#line 2229 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 513 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "for_stmt declaration_subst_calc subst_calc_2" << endl;
    (yyval.nodes) = Node::make_list(5, StringNode::Create("FOR"), (yyvsp[-10].nodes), (yyvsp[-8].nodes), (yyvsp[-1].nodes), (yyvsp[-6].nodes));
  }
#line 2238 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 518 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "for_stmt subst_calc subst_calc" << endl;
    (yyval.nodes) = Node::make_list(5, StringNode::Create("FOR"), (yyvsp[-10].nodes), (yyvsp[-8].nodes), (yyvsp[-1].nodes), (yyvsp[-6].nodes));
  }
#line 2247 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 523 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "for_stmt subst_calc subst_calc_2" << endl;
    (yyval.nodes) = Node::make_list(5, StringNode::Create("FOR"), (yyvsp[-10].nodes), (yyvsp[-8].nodes), (yyvsp[-1].nodes), (yyvsp[-6].nodes));
  }
#line 2256 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 528 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "for_stmt subst_calc_2 subst_calc" << endl;
    (yyval.nodes) = Node::make_list(5, StringNode::Create("FOR"), (yyvsp[-10].nodes), (yyvsp[-8].nodes), (yyvsp[-1].nodes), (yyvsp[-6].nodes));
  }
#line 2265 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 533 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "for_stmt subst_calc_2 subst_calc_2" << endl;
    (yyval.nodes) = Node::make_list(5, StringNode::Create("FOR"), (yyvsp[-10].nodes), (yyvsp[-8].nodes), (yyvsp[-1].nodes), (yyvsp[-6].nodes));
  }
#line 2274 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 539 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "func_exe identifiers" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("FUNC_EXE"), StringNode::Create((yyvsp[-3].sval)), (yyvsp[-1].nodes));
  }
#line 2283 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 544 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "func_exe no identifiers" << endl;
    (yyval.nodes) = Node::make_list(2, StringNode::Create("FUNC_EXE"), StringNode::Create((yyvsp[-2].sval)));
  }
#line 2292 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 550 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "args mult" << endl;
    (yyval.nodes) = (yyvsp[-3].nodes); (yyval.nodes) -> addBrother(Node::make_list(2, (yyvsp[-1].nodes), StringNode::Create((yyvsp[0].sval))));
  }
#line 2301 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 555 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "args" << endl;
    (yyval.nodes) = Node::make_list(2, (yyvsp[-1].nodes), StringNode::Create((yyvsp[0].sval)));
  }
#line 2310 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 561 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "types DOUBLE" << endl;
    (yyval.nodes) = StringNode::Create("DOUBLE");
  }
#line 2319 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 566 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    if(show_syntax) cout << "types STRING" << endl;
    (yyval.nodes) = StringNode::Create("STRING");
  }
#line 2328 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2332 "parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 575 "../srcs/parser/parser.y" /* yacc.c:1906  */


void yyerror(const char *s) {
  cout << "parse error ! Message: " << s << endl;

  exit(-1);
}
