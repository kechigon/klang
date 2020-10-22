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


#line 80 "parser.tab.c" /* yacc.c:339  */

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
    INTLITERAL = 258,
    DOUBLELITERAL = 259,
    STRINGLITERAL = 260,
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
    LEFT_PAREN = 292,
    RIGHT_PAREN = 293,
    LEFT_BRACE = 294,
    RIGHT_BRACE = 295,
    RIGHT_BRACKET = 296,
    INT = 297,
    DOUBLE = 298,
    STRING = 299,
    VOID = 300,
    SEMICOLON = 301,
    EOL = 302,
    UMINUS = 303
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "../srcs/parser/parser.y" /* yacc.c:355  */

  long lval;
  double dval;
  char* sval;
  Node* nodes;

#line 177 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 194 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  54
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   799

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  261

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   101,   101,   107,   112,   117,   122,   128,   133,   139,
     144,   149,   154,   160,   165,   171,   176,   182,   187,   192,
     197,   202,   207,   212,   217,   222,   227,   232,   239,   244,
     250,   255,   261,   267,   272,   278,   283,   294,   299,   307,
     312,   317,   322,   327,   332,   338,   343,   351,   356,   361,
     366,   371,   377,   382,   387,   392,   397,   402,   407,   412,
     417,   422,   427,   432,   437,   442,   447,   452,   458,   463,
     468,   473,   478,   483,   489,   494,   499,   504,   510,   515,
     521,   527,   532,   537,   542,   547,   552,   558,   563,   569,
     574,   580,   585,   590,   596,   598
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "END", "error", "$undefined", "INTLITERAL", "DOUBLELITERAL",
  "STRINGLITERAL", "IDENTIFIER", "EQUAL", "NOT_EQUAL", "MORE_EQUAL",
  "LESS_EQUAL", "MORE", "LESS", "SUBST", "PLUS", "MINUS", "MULT", "DIV",
  "AND", "MOD", "OR", "ADD_SUBST", "SUBT_SUBST", "MULT_SUBST", "DIV_SUBST",
  "MOD_SUBST", "RETURN", "DOT", "COMMA", "INPUT", "OUTPUT", "IF", "ELSE",
  "FOR", "WHILE", "BREAK", "CONTINUE", "LEFT_PAREN", "RIGHT_PAREN",
  "LEFT_BRACE", "RIGHT_BRACE", "RIGHT_BRACKET", "INT", "DOUBLE", "STRING",
  "VOID", "SEMICOLON", "EOL", "UMINUS", "$accept", "program", "blocks",
  "func_blocks", "func_block", "elements", "element", "element_content",
  "declaration", "declaration_subst_calc", "input_output", "outputs",
  "identifiers", "subst_calc", "subst_calc_2", "expression", "monomial",
  "if_stmt", "else_if_stmts", "else_if_stmt", "for_stmt", "func_exe",
  "args", "types", "eols", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

#define YYPACT_NINF -45

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-45)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     110,     7,     9,    12,   114,    13,    14,    29,   -45,   -45,
     -45,   -45,   -45,    68,   -45,   -45,    94,   -45,   309,   -45,
     603,   -45,     1,   -45,   -45,   -45,     5,   109,   -45,   -45,
     -45,   -45,   -45,    89,   264,    49,     0,   -45,   -45,   -45,
      10,    27,    27,   766,   -45,   -45,    69,    82,   -45,   766,
      27,    -3,    27,    74,   -45,   -45,   603,   -45,    12,   -45,
      78,   186,   228,    27,    27,    27,    27,    27,   115,    16,
      -5,   -45,   -45,   309,   603,   -45,   -45,   -45,    21,   132,
     -45,   643,    27,    27,    27,    27,    27,    27,    27,    27,
      27,    27,    27,    27,    27,   657,   122,   134,   137,    12,
     682,    48,   -45,   766,   -45,   766,   766,   766,   766,   766,
     766,   136,   135,   603,   -45,   -45,   -45,   -45,   188,   188,
     188,   188,   188,   188,    53,    53,   -45,   -45,   780,   -45,
     780,    95,    27,    27,    27,    -5,   121,   123,    35,   168,
     155,   129,    47,   141,   721,   736,   751,   146,   148,    45,
     150,   -45,   -45,   -45,   154,   151,   153,    12,    12,    12,
     159,   161,   189,   170,   175,   185,   603,   187,   190,   191,
     197,   202,   203,   603,   603,   -45,   179,   603,   180,   290,
     199,   201,   205,   206,   216,   217,   331,   350,   603,   372,
     603,   219,   -45,   210,   211,   229,   230,   232,   233,   -45,
     220,   393,   220,   414,   241,   227,   244,   245,   254,   255,
     256,    78,   220,    78,   220,   -22,   -19,   -45,   603,   603,
     603,   603,   603,   603,    78,    78,   238,   237,   257,   -45,
     435,   456,   477,   498,   519,   540,    27,   258,   280,   -45,
     -45,   -45,   -45,   -45,   -45,   696,   603,   -21,   -45,   266,
     561,   275,   278,   -45,   271,   294,   603,   603,   582,   603,
     -45
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    42,     0,     0,     0,     0,     0,     0,    24,    25,
      91,    92,    93,     0,    29,    95,     0,     2,     0,     8,
       3,    14,     0,    17,    31,    18,    34,     0,    19,    20,
      21,    23,    28,     0,     0,     0,     0,    68,    69,    27,
      70,     0,     0,    26,    65,    73,    42,    33,    38,    37,
       0,     0,     0,     0,     1,     7,     5,    13,     0,    16,
      15,     0,     0,     0,     0,     0,     0,     0,     0,    42,
      30,    32,    94,     0,     4,    43,    44,    88,     0,     0,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,    35,    46,    45,    47,    48,    49,    50,
      51,    39,     0,     6,    87,    71,    72,    67,    57,    58,
      59,    60,    61,    62,    52,    53,    54,    55,    63,    56,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    40,    41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,     0,     0,     0,     0,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,     0,    10,     0,     0,     0,    79,     0,     0,
       0,     0,     0,     0,    11,     9,     0,     0,     0,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
      82,    83,    84,    85,    86,     0,     0,     0,    78,     0,
       0,     0,     0,    75,     0,     0,     0,     0,     0,    80,
      77
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -45,   -45,   -45,   208,   -13,    -2,   -20,   -45,   -45,   295,
     -45,   -45,    25,   -31,   -44,   195,   -45,   -45,   -45,    84,
     -45,    15,   235,    11,   -18
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    43,    44,    30,   216,   217,
      31,    32,   138,    58,    34
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      57,    59,    71,    46,    60,    55,    46,    98,    62,   226,
     226,    33,    37,    38,    39,    40,    56,    45,    46,    45,
      97,   228,   229,    68,    41,   227,   251,    71,    47,    33,
      37,    38,    74,    40,    35,    61,    57,    79,    77,    10,
      11,    12,    41,    35,    36,    33,    42,    36,    15,    68,
      50,    51,    75,   112,    57,    76,    45,    45,    70,   114,
      55,    78,    99,   149,    42,    45,    52,    45,    71,    90,
      91,   113,    93,   150,    53,   149,    45,    45,    45,    45,
      45,    45,    45,    70,    33,   155,   137,    10,    11,    12,
      10,    11,    12,    57,    54,    69,    35,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      68,   101,   139,   168,   170,   172,     1,    37,    38,    48,
      40,   111,    62,   139,   135,    72,   167,   169,   171,    41,
      63,    64,    65,    66,    67,   115,     2,    68,   116,     3,
       4,     5,   143,     6,     7,     8,     9,    45,    45,    45,
     132,    42,    10,    11,    12,    13,    14,    15,   152,    57,
     162,   153,   133,   140,   179,   134,    57,    57,   147,    57,
     148,   186,   187,   141,   151,   189,   154,    10,    11,    12,
     156,    57,   211,    57,   213,   160,   201,   161,   203,    37,
      38,   102,    40,   164,   224,   175,   225,   163,   165,    49,
     166,    41,    88,    89,    90,    91,   173,    93,   174,   176,
      57,    57,    57,    57,    57,    57,   230,   231,   232,   233,
     234,   235,   177,    42,   178,   180,   188,   190,   181,   182,
      57,    37,    38,   104,    40,   183,    80,    81,    57,    57,
     184,   185,    73,    41,   250,    95,   193,   100,   194,   205,
     206,    45,   195,   196,   258,   259,   103,   105,   106,   107,
     108,   109,   110,   197,   198,    42,   204,    15,   207,   208,
       1,   209,   210,   215,   218,   236,   237,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
       2,   219,   220,     3,     4,     5,     1,     6,     7,     8,
       9,   221,   222,   223,   238,   246,    10,    11,    12,    13,
      14,    72,   247,   252,   254,     1,     2,   255,   256,     3,
       4,     5,   248,     6,     7,     8,     9,   144,   145,   146,
     191,   192,    10,    11,    12,     2,    14,     1,     3,     4,
       5,   257,     6,     7,     8,     9,    96,   142,     0,     0,
       0,    10,    11,    12,    13,    14,     1,     2,     0,     0,
       3,     4,     5,     0,     6,     7,     8,     9,     0,     0,
       0,   199,     0,    10,    11,    12,     2,    14,     1,     3,
       4,     5,     0,     6,     7,     8,     9,     0,     0,     0,
     200,     0,    10,    11,    12,     0,    14,     0,     2,     1,
       0,     3,     4,     5,     0,     6,     7,     8,     9,     0,
       0,     0,   202,     0,    10,    11,    12,     0,    14,     2,
       1,     0,     3,     4,     5,     0,     6,     7,     8,     9,
       0,   245,     0,   212,     0,    10,    11,    12,     0,    14,
       2,     1,     0,     3,     4,     5,     0,     6,     7,     8,
       9,     0,     0,     0,   214,     0,    10,    11,    12,     0,
      14,     2,     1,     0,     3,     4,     5,     0,     6,     7,
       8,     9,     0,     0,     0,   239,     0,    10,    11,    12,
       0,    14,     2,     1,     0,     3,     4,     5,     0,     6,
       7,     8,     9,     0,     0,     0,   240,     0,    10,    11,
      12,     0,    14,     2,     1,     0,     3,     4,     5,     0,
       6,     7,     8,     9,     0,     0,     0,   241,     0,    10,
      11,    12,     0,    14,     2,     1,     0,     3,     4,     5,
       0,     6,     7,     8,     9,     0,     0,     0,   242,     0,
      10,    11,    12,     0,    14,     2,     1,     0,     3,     4,
       5,     0,     6,     7,     8,     9,     0,     0,     0,   243,
       0,    10,    11,    12,     0,    14,     2,     1,     0,     3,
       4,     5,     0,     6,     7,     8,     9,     0,     0,     0,
     244,     0,    10,    11,    12,     0,    14,     2,     1,     0,
       3,     4,     5,     0,     6,     7,     8,     9,     0,     0,
       0,     0,   253,    10,    11,    12,     0,    14,     2,     1,
       0,     3,     4,     5,     0,     6,     7,     8,     9,     0,
       0,     0,     0,   260,    10,    11,    12,     0,    14,     2,
       0,     0,     3,     4,     5,     0,     6,     7,     8,     9,
       0,     0,     0,     0,     0,    10,    11,    12,     0,    14,
      82,    83,    84,    85,    86,    87,     0,    88,    89,    90,
      91,    92,    93,    94,    82,    83,    84,    85,    86,    87,
       0,    88,    89,    90,    91,    92,    93,    94,     0,     0,
       0,   117,     0,     0,     0,     0,     0,     0,     0,    82,
      83,    84,    85,    86,    87,   131,    88,    89,    90,    91,
      92,    93,    94,    82,    83,    84,    85,    86,    87,     0,
      88,    89,    90,    91,    92,    93,    94,     0,     0,     0,
     136,     0,     0,     0,     0,     0,     0,     0,    82,    83,
      84,    85,    86,    87,   249,    88,    89,    90,    91,    92,
      93,    94,     0,    82,    83,    84,    85,    86,    87,   157,
      88,    89,    90,    91,    92,    93,    94,     0,    82,    83,
      84,    85,    86,    87,   158,    88,    89,    90,    91,    92,
      93,    94,     0,    82,    83,    84,    85,    86,    87,   159,
      88,    89,    90,    91,    92,    93,    94,    82,    83,    84,
      85,    86,    87,     0,    88,    89,    90,    91,     0,    93
};

static const yytype_int16 yycheck[] =
{
      20,     0,    33,     6,    22,    18,     6,    51,    13,    31,
      31,     0,     3,     4,     5,     6,    18,     2,     6,     4,
      51,    40,    41,    28,    15,    47,    47,    58,     3,    18,
       3,     4,    34,     6,    27,    30,    56,    27,    38,    42,
      43,    44,    15,    27,    37,    34,    37,    37,    47,    28,
      37,    37,     3,    37,    74,     6,    41,    42,    33,    38,
      73,    36,    51,    28,    37,    50,    37,    52,    99,    16,
      17,    73,    19,    38,     6,    28,    61,    62,    63,    64,
      65,    66,    67,    58,    73,    38,    38,    42,    43,    44,
      42,    43,    44,   113,     0,     6,    27,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      28,    37,   101,   157,   158,   159,     6,     3,     4,     5,
       6,     6,    13,   112,    99,    47,   157,   158,   159,    15,
      21,    22,    23,    24,    25,     3,    26,    28,     6,    29,
      30,    31,    47,    33,    34,    35,    36,   132,   133,   134,
      28,    37,    42,    43,    44,    45,    46,    47,     3,   179,
     149,     6,    28,    27,   166,    28,   186,   187,    47,   189,
      47,   173,   174,    38,     6,   177,    47,    42,    43,    44,
      39,   201,   200,   203,   202,    39,   188,    39,   190,     3,
       4,     5,     6,    39,   212,     6,   214,    47,    47,     4,
      47,    15,    14,    15,    16,    17,    47,    19,    47,    39,
     230,   231,   232,   233,   234,   235,   218,   219,   220,   221,
     222,   223,    47,    37,    39,    38,    47,    47,    38,    38,
     250,     3,     4,     5,     6,    38,    41,    42,   258,   259,
      38,    38,    34,    15,   246,    50,    47,    52,    47,    39,
      39,   236,    47,    47,   256,   257,    61,    62,    63,    64,
      65,    66,    67,    47,    47,    37,    47,    47,    39,    39,
       6,    39,    39,    32,    47,    37,    39,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      26,    47,    47,    29,    30,    31,     6,    33,    34,    35,
      36,    47,    47,    47,    47,    47,    42,    43,    44,    45,
      46,    47,    32,    47,    39,     6,    26,    39,    47,    29,
      30,    31,   238,    33,    34,    35,    36,   132,   133,   134,
      40,    41,    42,    43,    44,    26,    46,     6,    29,    30,
      31,    47,    33,    34,    35,    36,    51,   112,    -1,    -1,
      -1,    42,    43,    44,    45,    46,     6,    26,    -1,    -1,
      29,    30,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    40,    -1,    42,    43,    44,    26,    46,     6,    29,
      30,    31,    -1,    33,    34,    35,    36,    -1,    -1,    -1,
      40,    -1,    42,    43,    44,    -1,    46,    -1,    26,     6,
      -1,    29,    30,    31,    -1,    33,    34,    35,    36,    -1,
      -1,    -1,    40,    -1,    42,    43,    44,    -1,    46,    26,
       6,    -1,    29,    30,    31,    -1,    33,    34,    35,    36,
      -1,   236,    -1,    40,    -1,    42,    43,    44,    -1,    46,
      26,     6,    -1,    29,    30,    31,    -1,    33,    34,    35,
      36,    -1,    -1,    -1,    40,    -1,    42,    43,    44,    -1,
      46,    26,     6,    -1,    29,    30,    31,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    40,    -1,    42,    43,    44,
      -1,    46,    26,     6,    -1,    29,    30,    31,    -1,    33,
      34,    35,    36,    -1,    -1,    -1,    40,    -1,    42,    43,
      44,    -1,    46,    26,     6,    -1,    29,    30,    31,    -1,
      33,    34,    35,    36,    -1,    -1,    -1,    40,    -1,    42,
      43,    44,    -1,    46,    26,     6,    -1,    29,    30,    31,
      -1,    33,    34,    35,    36,    -1,    -1,    -1,    40,    -1,
      42,    43,    44,    -1,    46,    26,     6,    -1,    29,    30,
      31,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    40,
      -1,    42,    43,    44,    -1,    46,    26,     6,    -1,    29,
      30,    31,    -1,    33,    34,    35,    36,    -1,    -1,    -1,
      40,    -1,    42,    43,    44,    -1,    46,    26,     6,    -1,
      29,    30,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    -1,    46,    26,     6,
      -1,    29,    30,    31,    -1,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    41,    42,    43,    44,    -1,    46,    26,
      -1,    -1,    29,    30,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    42,    43,    44,    -1,    46,
       7,     8,     9,    10,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,     7,     8,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,
       8,     9,    10,    11,    12,    38,    14,    15,    16,    17,
      18,    19,    20,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,     8,
       9,    10,    11,    12,    38,    14,    15,    16,    17,    18,
      19,    20,    -1,     7,     8,     9,    10,    11,    12,    28,
      14,    15,    16,    17,    18,    19,    20,    -1,     7,     8,
       9,    10,    11,    12,    28,    14,    15,    16,    17,    18,
      19,    20,    -1,     7,     8,     9,    10,    11,    12,    28,
      14,    15,    16,    17,    18,    19,    20,     7,     8,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    -1,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    26,    29,    30,    31,    33,    34,    35,    36,
      42,    43,    44,    45,    46,    47,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      66,    69,    70,    72,    73,    27,    37,     3,     4,     5,
       6,    15,    37,    64,    65,    70,     6,    61,     5,    64,
      37,    37,    37,     6,     0,    53,    54,    55,    72,     0,
      73,    30,    13,    21,    22,    23,    24,    25,    28,     6,
      61,    62,    47,    52,    54,     3,     6,    38,    61,    27,
      64,    64,     7,     8,     9,    10,    11,    12,    14,    15,
      16,    17,    18,    19,    20,    64,    58,    62,    63,    72,
      64,    37,     5,    64,     5,    64,    64,    64,    64,    64,
      64,     6,    37,    54,    38,     3,     6,    38,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    38,    28,    28,    28,    61,    38,    38,    71,    72,
      27,    38,    71,    47,    64,    64,    64,    47,    47,    28,
      38,     6,     3,     6,    47,    38,    39,    28,    28,    28,
      39,    39,    72,    47,    39,    47,    47,    62,    63,    62,
      63,    62,    63,    47,    47,     6,    39,    47,    39,    54,
      38,    38,    38,    38,    38,    38,    54,    54,    47,    54,
      47,    40,    41,    47,    47,    47,    47,    47,    47,    40,
      40,    54,    40,    54,    47,    39,    39,    39,    39,    39,
      39,    73,    40,    73,    40,    32,    67,    68,    47,    47,
      47,    47,    47,    47,    73,    73,    31,    47,    40,    41,
      54,    54,    54,    54,    54,    54,    37,    39,    47,    40,
      40,    40,    40,    40,    40,    64,    47,    32,    68,    38,
      54,    47,    47,    41,    39,    39,    47,    47,    54,    54,
      41
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    51,    51,    52,    52,    53,
      53,    53,    53,    54,    54,    55,    55,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      57,    57,    58,    59,    59,    60,    60,    60,    60,    61,
      61,    61,    61,    61,    61,    62,    62,    63,    63,    63,
      63,    63,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    65,    65,
      65,    65,    65,    65,    66,    66,    66,    66,    67,    67,
      68,    69,    69,    69,    69,    69,    69,    70,    70,    71,
      71,    72,    72,    72,    73,    73
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
       3,     3,     3,     3,     3,     1,     2,     3,     1,     1,
       1,     3,     3,     1,     9,    16,    12,    19,     4,     1,
       9,    13,    13,    13,    13,    13,    13,     4,     3,     4,
       2,     1,     1,     1,     2,     1
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
#line 101 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "program" << endl;
    program = (yyvsp[0].nodes);
  }
#line 1549 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 107 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "blocks" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 1558 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 112 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "blocks eols" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 1567 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 117 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "blocks with func_block" << endl;
    (yyval.nodes) = (yyvsp[-1].nodes); (yyval.nodes) -> addBrother((yyvsp[0].nodes));
  }
#line 1576 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 122 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "blocks with func_block eols" << endl;
    (yyval.nodes) = (yyvsp[-1].nodes); (yyval.nodes) -> addBrother((yyvsp[0].nodes));
  }
#line 1585 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 128 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "func_block mult" << endl;
    (yyval.nodes) = (yyvsp[-1].nodes); (yyval.nodes) -> addBrother(Node::getList((yyvsp[0].nodes)));
  }
#line 1594 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 133 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "func_block one time" << endl;
    (yyval.nodes) = Node::getList((yyvsp[0].nodes));
  }
#line 1603 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 139 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "func_block eols" << endl;
    (yyval.nodes) = Node::make_list(5, StringNode::Create("FUNC"), (yyvsp[-10].nodes), StringNode::Create((yyvsp[-9].sval)), (yyvsp[-7].nodes), (yyvsp[-2].nodes));
  }
#line 1612 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 144 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "func_block no args eols" << endl;
    (yyval.nodes) = Node::make_list(4, StringNode::Create("FUNC"), (yyvsp[-9].nodes), StringNode::Create((yyvsp[-8].sval)), (yyvsp[-2].nodes));
  }
#line 1621 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 149 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "void func_block eols" << endl;
    (yyval.nodes) = Node::make_list(5, StringNode::Create("FUNC"), StringNode::Create("VOID"), StringNode::Create((yyvsp[-9].sval)), (yyvsp[-7].nodes), (yyvsp[-2].nodes));
  }
#line 1630 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 154 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "void func_block no args eols" << endl;
    (yyval.nodes) = Node::make_list(4, StringNode::Create("FUNC"), StringNode::Create("VOID"), StringNode::Create((yyvsp[-8].sval)), (yyvsp[-2].nodes));
  }
#line 1639 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 160 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "elements repeat" << endl;
    (yyval.nodes) = (yyvsp[-1].nodes); (yyval.nodes) -> addBrother((yyvsp[0].nodes));
  }
#line 1648 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 165 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "elements" << endl;
    (yyval.nodes) = Node::getList((yyvsp[0].nodes));
  }
#line 1657 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 171 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "element eols" << endl;
    (yyval.nodes) = (yyvsp[-1].nodes);
  }
#line 1666 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 176 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "element END" << endl;
    (yyval.nodes) = (yyvsp[-1].nodes);
  }
#line 1675 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 182 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content declaretion" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 1684 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 187 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content input_output" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 1693 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 192 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content subst_calc" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 1702 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 197 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content subst_calc_2" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 1711 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 202 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content if_stmt" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 1720 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 207 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content while_stmt" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("WHILE"), (yyvsp[-6].nodes), (yyvsp[-1].nodes));
  }
#line 1729 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 212 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content for_stmt" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 1738 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 217 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content BREAK" << endl;
    (yyval.nodes) = StringNode::Create("BREAK");
  }
#line 1747 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 222 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content CONTINUE" << endl;
    (yyval.nodes) = StringNode::Create("CONTINUE");
  }
#line 1756 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 227 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content RETURN expression" << endl;
    (yyval.nodes) = Node::make_list(2, StringNode::Create("RETURN"), (yyvsp[0].nodes));
  }
#line 1765 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 232 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content RETURN STRINGLITERAL" << endl;
    string text = (yyvsp[0].sval);
    (yyval.nodes) = Node::make_list(2, StringNode::Create("RETURN"), StringNode::Create(text.substr(1, text.size()-2)));
    ((StringNode*)((yyval.nodes)->getNext()))->setIsLiteral();
  }
#line 1776 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 239 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content func_exe" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 1785 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 244 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content SEMICOLON" << endl;
    (yyval.nodes) = StringNode::Create("NEWLINE");
  }
#line 1794 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 250 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "declaration identifiers" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("DECL"), (yyvsp[-1].nodes), (yyvsp[0].nodes));
  }
#line 1803 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 255 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "declaration declaration_subst_calc" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 1812 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 261 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "declaration_subst_calc" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("DECL_SUBST"), (yyvsp[-1].nodes), (yyvsp[0].nodes));
  }
#line 1821 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 267 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "input_output input" << endl;
    (yyval.nodes) = Node::make_list(2, StringNode::Create("INPUT"), (yyvsp[0].nodes));
  }
#line 1830 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 272 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "input_output outputs" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 1839 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 278 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "outputs expression mult" << endl;
    (yyval.nodes) = (yyvsp[-2].nodes); (yyval.nodes) -> addBrother(Node::make_list(2, StringNode::Create("OUTPUT"), (yyvsp[0].nodes)));
  }
#line 1848 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 283 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "outputs STRINGLITERAL mult" << endl;
    string text = (yyvsp[0].sval);
    (yyval.nodes) = (yyvsp[-2].nodes); (yyval.nodes) -> addBrother(Node::make_list(2, StringNode::Create("OUTPUT"), StringNode::Create(text.substr(1, text.size()-2))));
    Node *node = (yyval.nodes);
    while(node->getNext() != NULL) {
      node = node->getNext();
    }
    ((StringNode*)node)->setIsLiteral();
  }
#line 1863 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 294 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "outputs expression" << endl;
    (yyval.nodes) = Node::make_list(2, StringNode::Create("OUTPUT"), (yyvsp[0].nodes));
  }
#line 1872 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 299 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "outputs STRINGLITERAL" << endl;
    string text = (yyvsp[0].sval);
    (yyval.nodes) = Node::make_list(2, StringNode::Create("OUTPUT"), StringNode::Create(text.substr(1, text.size()-2)));
    ((StringNode*)((yyval.nodes)->getNext()))->setIsLiteral();
  }
#line 1883 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 307 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "identifiers mult " << (yyvsp[0].sval) << endl;
    (yyval.nodes) = (yyvsp[-2].nodes); (yyval.nodes) -> addBrother(StringNode::Create((yyvsp[0].sval)));
  }
#line 1892 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 312 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "identifiers mult array INT" << (yyvsp[-2].sval) << " " << (yyvsp[0].lval) << endl;
    (yyval.nodes) = (yyvsp[-4].nodes); (yyval.nodes) -> addBrother(ArrayElementNode::Create((yyvsp[-2].sval), (yyvsp[0].lval)));
  }
#line 1901 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 317 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "identifiers mult array IDENTIFIER" << (yyvsp[-2].sval) << " " << (yyvsp[0].sval) << endl;
    (yyval.nodes) = (yyvsp[-4].nodes); (yyval.nodes) -> addBrother(ArrayElementNode::Create((yyvsp[-2].sval), (yyvsp[0].sval)));
  }
#line 1910 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 322 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "identifiers one " << (yyvsp[0].sval) << endl;
    (yyval.nodes) = StringNode::Create((yyvsp[0].sval));
  }
#line 1919 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 327 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "identifiers one array INT " << (yyvsp[-2].sval) << " " << (yyvsp[0].lval) << endl;
    (yyval.nodes) = ArrayElementNode::Create((yyvsp[-2].sval), (yyvsp[0].lval));
  }
#line 1928 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 332 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "identifiers one array IDENTIFIER" << (yyvsp[-2].sval) << " " << (yyvsp[0].sval) << endl;
    (yyval.nodes) = ArrayElementNode::Create((yyvsp[-2].sval), (yyvsp[0].sval));
  }
#line 1937 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 338 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "sbstcalc SUBST" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("SUBST"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 1946 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 343 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "subst_calc SUBST STRINGLITERAL" << endl;
    string text = (yyvsp[0].sval);
    (yyval.nodes) = Node::make_list(3, StringNode::Create("SUBST"), (yyvsp[-2].nodes), StringNode::Create(text.substr(1, text.size()-2)));
    ((StringNode*)((yyval.nodes)->getNext()->getNext()))->setIsLiteral();
  }
#line 1957 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 351 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "subst_calc_2 ADD_SUBST" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("ADD_SUBST"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 1966 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 356 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "subst_calc_2 SUBT_SUBST" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("SUBT_SUBST"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 1975 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 361 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "subst_calc_2 MULT_SUBST" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("MULT_SUBST"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 1984 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 366 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "subst_calc_2 DIV_SUBST" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("DIV_SUBST"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 1993 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 371 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "subst_calc_2 MOD_SUBST" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("MOD_SUBST"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 2002 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 377 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "expression PULS" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("PULS"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 2011 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 382 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "expression MINUS" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("MINUS"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 2020 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 387 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "expression MULT" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("MULT"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 2029 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 392 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "expression DIV" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("DIV"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 2038 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 397 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "expression MOD" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("MOD"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 2047 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 402 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "expression EQUAL" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("EQUAL"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 2056 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 407 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "expression NOT_EQUAL" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("NOT_EQUAL"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 2065 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 412 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "expression MORE_EQUAL" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("MORE_EQUAL"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 2074 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 417 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "expression LESS_EQUAL" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("LESS_EQUAL"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 2083 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 422 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "expression MORE" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("MORE"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 2092 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 427 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "expression LESS" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("LESS"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 2101 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 432 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "expression AND" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("AND"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 2110 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 437 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "expression OR" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("OR"), (yyvsp[-2].nodes), (yyvsp[0].nodes));
  }
#line 2119 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 442 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "expression monomial" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 2128 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 447 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "expression UMINUS" << endl;
    (yyval.nodes) = Node::make_list(2, StringNode::Create("UMINUS"), (yyvsp[0].nodes));
  }
#line 2137 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 452 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "expression PAREN" << endl;
    (yyval.nodes) = (yyvsp[-1].nodes);
  }
#line 2146 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 458 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "monomial " << (yyvsp[0].lval) << endl;
    (yyval.nodes) = IntNode::Create((yyvsp[0].lval));
  }
#line 2155 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 463 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "monomial " << (yyvsp[0].dval) << endl;
    (yyval.nodes) = DoubleNode::Create((yyvsp[0].dval));
  }
#line 2164 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 468 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "monomial " << (yyvsp[0].sval) << endl;
    (yyval.nodes) = StringNode::Create((yyvsp[0].sval));
  }
#line 2173 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 473 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "monomial " << (yyvsp[-2].sval) << " " << (yyvsp[0].lval) << endl;
    (yyval.nodes) = ArrayElementNode::Create((yyvsp[-2].sval), (yyvsp[0].lval));
  }
#line 2182 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 478 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "monomial " << (yyvsp[-2].sval) << " " << (yyvsp[0].sval) << endl;
    (yyval.nodes) = ArrayElementNode::Create((yyvsp[-2].sval), (yyvsp[0].sval));
  }
#line 2191 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 483 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "monomial func_exe" << endl;
    (yyval.nodes) = (yyvsp[0].nodes);
  }
#line 2200 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 489 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "if_stmt" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("IF"), (yyvsp[-6].nodes), (yyvsp[-1].nodes));
  }
#line 2209 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 494 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "if_stmt else" << endl;
    (yyval.nodes) = Node::make_list(5, StringNode::Create("IF"), (yyvsp[-13].nodes), (yyvsp[-8].nodes), StringNode::Create("ELSE"), (yyvsp[-1].nodes));
  }
#line 2218 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 499 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "if_stmt elseif_stmts_end" << endl;
    (yyval.nodes) = Node::make_list(4, StringNode::Create("IF"), (yyvsp[-9].nodes), (yyvsp[-4].nodes), (yyvsp[-1].nodes));
  }
#line 2227 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 504 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "if_stmt else_if_stmts_mid else" << endl;
    (yyval.nodes) = Node::make_list(6, StringNode::Create("IF"), (yyvsp[-16].nodes), (yyvsp[-11].nodes), (yyvsp[-8].nodes), StringNode::Create("ELSE"), (yyvsp[-1].nodes));
  }
#line 2236 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 510 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "else_if_stmts mult" << endl;
    (yyval.nodes) = (yyvsp[-3].nodes); (yyval.nodes) -> addBrother(Node::getList((yyvsp[0].nodes)));
  }
#line 2245 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 515 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "else_if_stmts" << endl;
    (yyval.nodes) = Node::getList((yyvsp[0].nodes));
  }
#line 2254 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 521 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "else_if_stmt" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("ELSE_IF"), (yyvsp[-5].nodes), (yyvsp[0].nodes));
  }
#line 2263 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 527 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "for_stmt declaration_subst_calc subst_calc" << endl;
    (yyval.nodes) = Node::make_list(5, StringNode::Create("FOR"), (yyvsp[-10].nodes), (yyvsp[-8].nodes), (yyvsp[-1].nodes), (yyvsp[-6].nodes));
  }
#line 2272 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 532 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "for_stmt declaration_subst_calc subst_calc_2" << endl;
    (yyval.nodes) = Node::make_list(5, StringNode::Create("FOR"), (yyvsp[-10].nodes), (yyvsp[-8].nodes), (yyvsp[-1].nodes), (yyvsp[-6].nodes));
  }
#line 2281 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 537 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "for_stmt subst_calc subst_calc" << endl;
    (yyval.nodes) = Node::make_list(5, StringNode::Create("FOR"), (yyvsp[-10].nodes), (yyvsp[-8].nodes), (yyvsp[-1].nodes), (yyvsp[-6].nodes));
  }
#line 2290 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 542 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "for_stmt subst_calc subst_calc_2" << endl;
    (yyval.nodes) = Node::make_list(5, StringNode::Create("FOR"), (yyvsp[-10].nodes), (yyvsp[-8].nodes), (yyvsp[-1].nodes), (yyvsp[-6].nodes));
  }
#line 2299 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 547 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "for_stmt subst_calc_2 subst_calc" << endl;
    (yyval.nodes) = Node::make_list(5, StringNode::Create("FOR"), (yyvsp[-10].nodes), (yyvsp[-8].nodes), (yyvsp[-1].nodes), (yyvsp[-6].nodes));
  }
#line 2308 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 552 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "for_stmt subst_calc_2 subst_calc_2" << endl;
    (yyval.nodes) = Node::make_list(5, StringNode::Create("FOR"), (yyvsp[-10].nodes), (yyvsp[-8].nodes), (yyvsp[-1].nodes), (yyvsp[-6].nodes));
  }
#line 2317 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 558 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "func_exe identifiers" << endl;
    (yyval.nodes) = Node::make_list(3, StringNode::Create("FUNC_EXE"), StringNode::Create((yyvsp[-3].sval)), (yyvsp[-1].nodes));
  }
#line 2326 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 563 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "func_exe no identifiers" << endl;
    (yyval.nodes) = Node::make_list(2, StringNode::Create("FUNC_EXE"), StringNode::Create((yyvsp[-2].sval)));
  }
#line 2335 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 569 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "args mult" << endl;
    (yyval.nodes) = (yyvsp[-3].nodes); (yyval.nodes) -> addBrother(Node::make_list(2, (yyvsp[-1].nodes), StringNode::Create((yyvsp[0].sval))));
  }
#line 2344 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 574 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "args" << endl;
    (yyval.nodes) = Node::make_list(2, (yyvsp[-1].nodes), StringNode::Create((yyvsp[0].sval)));
  }
#line 2353 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 580 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "types INT" << endl;
    (yyval.nodes) = StringNode::Create("INT");
  }
#line 2362 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 585 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "types DOUBLE" << endl;
    (yyval.nodes) = StringNode::Create("DOUBLE");
  }
#line 2371 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 590 "../srcs/parser/parser.y" /* yacc.c:1646  */
    {
    cout << "types STRING" << endl;
    (yyval.nodes) = StringNode::Create("STRING");
  }
#line 2380 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2384 "parser.tab.c" /* yacc.c:1646  */
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
#line 599 "../srcs/parser/parser.y" /* yacc.c:1906  */


void yyerror(const char *s) {
  cout << "parse error ! Message: " << s << endl;

  exit(-1);
}
