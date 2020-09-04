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
#line 1 "../src/parser.y" /* yacc.c:339  */

  #include <cstdio>
  #include <iostream>
  using namespace std;

  extern int yylex();
  extern int yyparse();
  extern FILE *yyin;
 
  void yyerror(const char *s);

#line 78 "parser.tab.c" /* yacc.c:339  */

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
#line 13 "../src/parser.y" /* yacc.c:355  */

  long lval;
  double dval;
  char* sval;

#line 171 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 188 "parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   623

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  230

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

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
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    78,    82,    86,    91,    95,   100,   104,
     108,   112,   117,   121,   126,   130,   135,   139,   143,   147,
     151,   155,   159,   163,   167,   171,   175,   179,   184,   188,
     193,   198,   202,   207,   211,   215,   219,   224,   228,   232,
     236,   241,   245,   250,   254,   258,   262,   266,   271,   275,
     279,   283,   287,   291,   295,   299,   303,   307,   311,   315,
     319,   323,   327,   331,   336,   340,   344,   348,   352,   357,
     361,   365,   369,   374,   378,   383,   388,   392,   396,   400,
     404,   408,   413,   417,   422,   424
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "END", "error", "$undefined", "INT", "FLOAT", "STRING", "IDENTIFIER",
  "EQUAL", "NOT_EQUAL", "MORE_EQUAL", "LESS_EQUAL", "MORE", "LESS",
  "SUBST", "PLUS", "MINUS", "MULT", "DIV", "AND", "MOD", "OR", "ADD_SUBST",
  "SUBT_SUBST", "MULT_SUBST", "DIV_SUBST", "MOD_SUBST", "RETURN", "DOT",
  "COMMA", "INPUT", "OUTPUT", "IF", "ELSE", "FOR", "WHILE", "BREAK",
  "CONTINUE", "FUNC", "LEFT_PAREN", "RIGHT_PAREN", "LEFT_BRACE",
  "RIGHT_BRACE", "RIGHT_BRACKET", "IDENT_DECL", "EOL", "UMINUS", "$accept",
  "program", "blocks", "block", "func_block", "elements", "element",
  "element_content", "declaration", "declaration_subst_calc",
  "input_output", "outputs", "identifiers", "subst_calc", "subst_calc_2",
  "expression", "monomial", "if_stmt", "else_if_stmts", "else_if_stmt",
  "for_stmt", "func_exe", "eols", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300
};
# endif

#define YYPACT_NINF -125

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-125)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     163,    59,    17,    10,   100,   -23,   -14,    -5,  -125,  -125,
      28,    10,  -125,    39,   230,  -125,  -125,   423,  -125,     7,
    -125,  -125,  -125,    16,   138,  -125,  -125,  -125,  -125,  -125,
     189,    38,     4,  -125,  -125,  -125,   115,   457,   457,   590,
    -125,  -125,    15,    41,  -125,   590,   457,     5,   457,    32,
      12,  -125,  -125,  -125,  -125,  -125,    27,   143,   440,   457,
     457,   457,   457,   457,    79,  -125,  -125,  -125,  -125,   126,
      96,  -125,   472,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   489,    10,    72,    86,
      88,   505,    11,  -125,   590,  -125,   590,   590,   590,   590,
     590,   590,    90,  -125,  -125,  -125,   454,   454,   454,   454,
     454,   454,   160,   160,  -125,  -125,   604,  -125,   604,    74,
      12,   457,   457,   457,    75,    93,   136,   142,   110,   538,
     560,   575,   112,   127,   111,  -125,   130,    10,    10,    10,
     134,   144,   140,   423,   131,   151,   152,   162,   164,   166,
     423,   423,   165,   208,   168,   169,   172,   173,   177,   183,
     246,   262,   423,   184,  -125,   190,   191,   195,   200,   205,
     206,  -125,     8,   278,   176,   185,   203,   204,   209,   210,
     213,  -125,    27,     9,   -26,   -12,  -125,   423,   423,   423,
     423,   423,   423,  -125,    27,   220,   222,   225,  -125,   294,
     310,   326,   342,   358,   374,   457,   226,   239,  -125,  -125,
    -125,  -125,  -125,  -125,   522,   423,     0,  -125,   234,   390,
     243,   245,  -125,   242,   250,   423,   423,   405,   423,  -125
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    39,     0,     0,     0,     0,     0,     0,    23,    24,
       0,     0,    85,     0,     2,     4,     7,     6,    13,     0,
      16,    29,    17,    32,     0,    18,    19,    20,    22,    27,
       0,     0,     0,    64,    65,    26,    66,     0,     0,    25,
      61,    68,    39,    31,    36,    35,     0,     0,     0,     0,
      28,    30,     1,     3,    12,    15,    14,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     5,    40,    83,     0,
       0,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    33,    42,    41,    43,    44,    45,
      46,    47,    37,    82,    67,    63,    53,    54,    55,    56,
      57,    58,    48,    49,    50,    51,    59,    52,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    69,     0,     0,     0,     0,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    10,     0,     0,     0,    74,     0,     0,     0,
       0,     0,     0,     9,     8,     0,     0,     0,    71,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,    77,
      78,    79,    80,    81,     0,     0,     0,    73,     0,     0,
       0,     0,    70,     0,     0,     0,     0,     0,    75,    72
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -125,  -125,  -125,    -2,  -125,  -124,   -17,  -125,  -125,   227,
    -125,  -125,     3,     2,   -45,    50,  -125,  -125,  -125,    83,
    -125,    -1,   -15
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    39,    40,    27,   185,   186,
      28,    29,    30
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      54,    41,    90,    41,    56,   195,    43,    55,   181,   193,
      42,    42,    53,    51,    50,    46,    42,    42,   196,   153,
      33,    34,    35,    36,    47,    58,   160,   161,    66,   197,
     198,   195,    37,    48,    49,    69,    41,    41,   173,    52,
      64,    67,    31,    68,   220,    41,    57,    41,    87,    89,
     125,    12,    12,    12,    45,    38,    41,    41,    41,    41,
      41,    41,    41,   199,   200,   201,   202,   203,   204,    64,
      92,    65,    41,    41,    41,    41,    41,    41,    41,    41,
      41,    41,    41,    41,    41,   102,    31,    71,    72,    51,
     120,   219,   145,   147,   149,   126,    86,    32,    91,   104,
     121,   227,   228,    33,    34,    44,    36,    94,    96,    97,
      98,    99,   100,   101,   122,    37,   123,   127,   128,   132,
      41,    41,    41,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,    54,   133,    38,   144,
     146,   148,    70,    54,    54,   135,    33,    34,    93,    36,
     136,    58,   140,    32,    64,   142,    54,   182,    37,    59,
      60,    61,    62,    63,    64,   103,    64,   141,   194,     1,
     154,   129,   130,   131,   143,   134,    81,    82,   150,    84,
     152,    38,    54,    54,    54,    54,    54,    54,   151,     2,
     155,   156,     3,     4,     5,     1,     6,     7,     8,     9,
      10,   157,    54,   158,    41,   159,    11,    12,   184,   162,
      54,    54,   165,   166,     1,     2,   167,   168,     3,     4,
       5,   169,     6,     7,     8,     9,    10,   170,   174,   187,
     175,   176,    11,    65,     2,   177,     1,     3,     4,     5,
     178,     6,     7,     8,     9,   179,   180,   188,   189,   163,
     164,    11,     1,   190,   191,   214,     2,   192,   205,     3,
       4,     5,   206,     6,     7,     8,     9,    10,     1,   207,
     215,   216,     2,    11,    88,     3,     4,     5,   221,     6,
       7,     8,     9,   223,     1,   224,   225,   171,     2,    11,
     217,     3,     4,     5,   226,     6,     7,     8,     9,     0,
       1,     0,     0,   172,     2,    11,     0,     3,     4,     5,
       0,     6,     7,     8,     9,     0,     1,     0,     0,   183,
       2,    11,     0,     3,     4,     5,     0,     6,     7,     8,
       9,     0,     1,     0,     0,   208,     2,    11,     0,     3,
       4,     5,     0,     6,     7,     8,     9,     0,     1,     0,
       0,   209,     2,    11,     0,     3,     4,     5,     0,     6,
       7,     8,     9,     0,     1,     0,     0,   210,     2,    11,
       0,     3,     4,     5,     0,     6,     7,     8,     9,     0,
       1,     0,     0,   211,     2,    11,     0,     3,     4,     5,
       0,     6,     7,     8,     9,     0,     1,     0,     0,   212,
       2,    11,     0,     3,     4,     5,     0,     6,     7,     8,
       9,     1,     0,     0,     0,   213,     2,    11,     0,     3,
       4,     5,     0,     6,     7,     8,     9,     0,     0,     1,
       0,     2,   222,    11,     3,     4,     5,     0,     6,     7,
       8,     9,     0,    33,    34,    95,    36,   229,    11,     2,
       0,     0,     3,     4,     5,    37,     6,     7,     8,     9,
      33,    34,     0,    36,     0,     0,    11,     0,    79,    80,
      81,    82,    37,    84,     0,     0,     0,     0,    38,    73,
      74,    75,    76,    77,    78,     0,    79,    80,    81,    82,
      83,    84,    85,     0,     0,    38,    73,    74,    75,    76,
      77,    78,     0,    79,    80,    81,    82,    83,    84,    85,
       0,   105,    73,    74,    75,    76,    77,    78,     0,    79,
      80,    81,    82,    83,    84,    85,     0,     0,   119,    73,
      74,    75,    76,    77,    78,     0,    79,    80,    81,    82,
      83,    84,    85,     0,   124,    73,    74,    75,    76,    77,
      78,     0,    79,    80,    81,    82,    83,    84,    85,     0,
       0,   218,     0,     0,     0,     0,   137,    73,    74,    75,
      76,    77,    78,     0,    79,    80,    81,    82,    83,    84,
      85,     0,    73,    74,    75,    76,    77,    78,   138,    79,
      80,    81,    82,    83,    84,    85,     0,    73,    74,    75,
      76,    77,    78,   139,    79,    80,    81,    82,    83,    84,
      85,    73,    74,    75,    76,    77,    78,     0,    79,    80,
      81,    82,     0,    84
};

static const yytype_int16 yycheck[] =
{
      17,     2,    47,     4,    19,    31,     3,     0,     0,     0,
       6,     6,    14,    11,    11,    38,     6,     6,    44,   143,
       3,     4,     5,     6,    38,    13,   150,   151,    30,    41,
      42,    31,    15,    38,     6,    32,    37,    38,   162,     0,
      28,     3,    27,    39,    44,    46,    30,    48,    43,    47,
      39,    44,    44,    44,     4,    38,    57,    58,    59,    60,
      61,    62,    63,   187,   188,   189,   190,   191,   192,    28,
      38,    44,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,     6,    27,    37,    38,    87,
      87,   215,   137,   138,   139,    92,    46,    38,    48,     3,
      28,   225,   226,     3,     4,     5,     6,    57,    58,    59,
      60,    61,    62,    63,    28,    15,    28,    27,    44,    44,
     121,   122,   123,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,   153,    44,    38,   137,
     138,   139,    27,   160,   161,     3,     3,     4,     5,     6,
      40,    13,    40,    38,    28,    44,   173,   172,    15,    21,
      22,    23,    24,    25,    28,    39,    28,    40,   183,     6,
      39,   121,   122,   123,    44,    39,    16,    17,    44,    19,
      40,    38,   199,   200,   201,   202,   203,   204,    44,    26,
      39,    39,    29,    30,    31,     6,    33,    34,    35,    36,
      37,    39,   219,    39,   205,    39,    43,    44,    32,    44,
     227,   228,    44,    44,     6,    26,    44,    44,    29,    30,
      31,    44,    33,    34,    35,    36,    37,    44,    44,    44,
      40,    40,    43,    44,    26,    40,     6,    29,    30,    31,
      40,    33,    34,    35,    36,    40,    40,    44,    44,    41,
      42,    43,     6,    44,    44,   205,    26,    44,    38,    29,
      30,    31,    40,    33,    34,    35,    36,    37,     6,    44,
      44,    32,    26,    43,    47,    29,    30,    31,    44,    33,
      34,    35,    36,    40,     6,    40,    44,    41,    26,    43,
     207,    29,    30,    31,    44,    33,    34,    35,    36,    -1,
       6,    -1,    -1,    41,    26,    43,    -1,    29,    30,    31,
      -1,    33,    34,    35,    36,    -1,     6,    -1,    -1,    41,
      26,    43,    -1,    29,    30,    31,    -1,    33,    34,    35,
      36,    -1,     6,    -1,    -1,    41,    26,    43,    -1,    29,
      30,    31,    -1,    33,    34,    35,    36,    -1,     6,    -1,
      -1,    41,    26,    43,    -1,    29,    30,    31,    -1,    33,
      34,    35,    36,    -1,     6,    -1,    -1,    41,    26,    43,
      -1,    29,    30,    31,    -1,    33,    34,    35,    36,    -1,
       6,    -1,    -1,    41,    26,    43,    -1,    29,    30,    31,
      -1,    33,    34,    35,    36,    -1,     6,    -1,    -1,    41,
      26,    43,    -1,    29,    30,    31,    -1,    33,    34,    35,
      36,     6,    -1,    -1,    -1,    41,    26,    43,    -1,    29,
      30,    31,    -1,    33,    34,    35,    36,    -1,    -1,     6,
      -1,    26,    42,    43,    29,    30,    31,    -1,    33,    34,
      35,    36,    -1,     3,     4,     5,     6,    42,    43,    26,
      -1,    -1,    29,    30,    31,    15,    33,    34,    35,    36,
       3,     4,    -1,     6,    -1,    -1,    43,    -1,    14,    15,
      16,    17,    15,    19,    -1,    -1,    -1,    -1,    38,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    38,     7,     8,     9,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      -1,    39,     7,     8,     9,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    39,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    39,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    28,     7,     8,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    -1,     7,     8,     9,    10,    11,    12,    28,    14,
      15,    16,    17,    18,    19,    20,    -1,     7,     8,     9,
      10,    11,    12,    28,    14,    15,    16,    17,    18,    19,
      20,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    -1,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    26,    29,    30,    31,    33,    34,    35,    36,
      37,    43,    44,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    63,    66,    67,
      68,    27,    38,     3,     4,     5,     6,    15,    38,    61,
      62,    67,     6,    58,     5,    61,    38,    38,    38,     6,
      58,    59,     0,    49,    52,     0,    68,    30,    13,    21,
      22,    23,    24,    25,    28,    44,    49,     3,    39,    58,
      27,    61,    61,     7,     8,     9,    10,    11,    12,    14,
      15,    16,    17,    18,    19,    20,    61,    43,    55,    59,
      60,    61,    38,     5,    61,     5,    61,    61,    61,    61,
      61,    61,     6,    39,     3,    39,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    39,
      58,    28,    28,    28,    39,    39,    58,    27,    44,    61,
      61,    61,    44,    44,    39,     3,    40,    28,    28,    28,
      40,    40,    44,    44,    59,    60,    59,    60,    59,    60,
      44,    44,    40,    51,    39,    39,    39,    39,    39,    39,
      51,    51,    44,    41,    42,    44,    44,    44,    44,    44,
      44,    41,    41,    51,    44,    40,    40,    40,    40,    40,
      40,     0,    68,    41,    32,    64,    65,    44,    44,    44,
      44,    44,    44,     0,    68,    31,    44,    41,    42,    51,
      51,    51,    51,    51,    51,    38,    40,    44,    41,    41,
      41,    41,    41,    41,    61,    44,    32,    65,    39,    51,
      44,    44,    42,    40,    40,    44,    44,    51,    51,    42
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    48,    48,    49,    49,    50,    50,
      50,    50,    51,    51,    52,    52,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    54,    54,
      55,    56,    56,    57,    57,    57,    57,    58,    58,    58,
      58,    59,    59,    60,    60,    60,    60,    60,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    62,    62,    62,    62,    62,    63,
      63,    63,    63,    64,    64,    65,    66,    66,    66,    66,
      66,    66,    67,    67,    68,    68
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     1,    11,    11,
      10,    10,     2,     1,     2,     2,     1,     1,     1,     1,
       1,     9,     1,     1,     1,     2,     2,     1,     2,     1,
       2,     2,     1,     3,     3,     2,     2,     3,     5,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     2,     3,     1,     1,     1,     3,     1,     9,
      16,    12,    19,     4,     1,     9,    13,    13,    13,    13,
      13,    13,     4,     3,     2,     1
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
#line 73 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "program" << endl;
  }
#line 1492 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 78 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "blocks mult" << endl;
  }
#line 1500 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 82 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "blocks" << endl;
  }
#line 1508 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 86 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "blocks eols" << endl;
  }
#line 1516 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 91 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "block elements" << endl;
  }
#line 1524 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 95 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "block func_block" << endl;
  }
#line 1532 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 100 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "func_block eols" << endl;
  }
#line 1540 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 104 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "func_block END" << endl;
  }
#line 1548 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 108 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "func_block no identifiers eols" << endl;
  }
#line 1556 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 112 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "func_block no identifiers END" << endl;
  }
#line 1564 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 117 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "elements repeat" << endl;
  }
#line 1572 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 121 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "elements" << endl;
  }
#line 1580 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 126 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "element eols" << endl;
  }
#line 1588 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 130 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "element END" << endl;
  }
#line 1596 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 135 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content declaretion" << endl;
  }
#line 1604 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 139 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content input_output" << endl;
  }
#line 1612 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 143 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content subst_calc" << endl;
  }
#line 1620 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 147 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content subst_calc_2" << endl;
  }
#line 1628 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 151 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content if_stmt" << endl;
  }
#line 1636 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 155 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content while_stmt" << endl;
  }
#line 1644 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 159 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content for_stmt" << endl;
  }
#line 1652 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 163 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content BREAK" << endl;
  }
#line 1660 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 167 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content CONTINUE" << endl;
  }
#line 1668 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 171 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content RETURN expression" << endl;
  }
#line 1676 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 175 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content RETURN STRING" << endl;
  }
#line 1684 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 179 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "element_content func_exe" << endl;
  }
#line 1692 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 184 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "declaration IDENTIFIER" << endl;
  }
#line 1700 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 188 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "declaration declaration_subst_calc" << endl;
  }
#line 1708 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 193 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "declaration_subst_calc" << endl;
  }
#line 1716 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 198 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "input_output input" << endl;
  }
#line 1724 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 202 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "input_output outputs" << endl;
  }
#line 1732 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 207 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "outputs expression mult" << endl;
  }
#line 1740 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 211 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "outputs STRING mult" << endl;
  }
#line 1748 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 215 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "outputs expression" << endl;
  }
#line 1756 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 219 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "outputs STRING" << endl;
  }
#line 1764 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 224 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "identifiers mult " << (yyvsp[0].sval) << endl;
  }
#line 1772 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 228 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "identifiers mult array " << (yyvsp[-2].sval) << " " << (yyvsp[0].lval) << endl;
  }
#line 1780 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 232 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "identifiers one " << (yyvsp[0].sval) << endl;
  }
#line 1788 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 236 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "identifiers one array " << (yyvsp[-2].sval) << " " << (yyvsp[0].lval) << endl;
  }
#line 1796 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 241 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "sbstcalc SUBST" << endl;
  }
#line 1804 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 245 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "subst_calc SUBST STRING" << endl;
  }
#line 1812 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 250 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "subst_calc_2 ADD_SUBST" << endl;
  }
#line 1820 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 254 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "subst_calc_2 SUBT_SUBST" << endl;
  }
#line 1828 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 258 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "subst_calc_2 MULT_SUBST" << endl;
  }
#line 1836 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 262 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "subst_calc_2 DIV_SUBST" << endl;
  }
#line 1844 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 266 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "subst_calc_2 MOD_SUBST" << endl;
  }
#line 1852 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 271 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "expression PULS" << endl;
  }
#line 1860 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 275 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "expression MINUS" << endl;
  }
#line 1868 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 279 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "expression MULT" << endl;
  }
#line 1876 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 283 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "expression DIV" << endl;
  }
#line 1884 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 287 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "expression MOD" << endl;
  }
#line 1892 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 291 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "expression EQUAL" << endl;
  }
#line 1900 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 295 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "expression NOT_EQUAL" << endl;
  }
#line 1908 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 299 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "expression MORE_EQUAL" << endl;
  }
#line 1916 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 303 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "expression LESS_EQUAL" << endl;
  }
#line 1924 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 307 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "expression MORE" << endl;
  }
#line 1932 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 311 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "expression LESS" << endl;
  }
#line 1940 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 315 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "expression AND" << endl;
  }
#line 1948 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 319 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "expression OR" << endl;
  }
#line 1956 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 323 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "expression monomial" << endl;
  }
#line 1964 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 327 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "expression UMINUS" << endl;
  }
#line 1972 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 331 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "expression PAREN" << endl;
  }
#line 1980 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 336 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "monomial " << (yyvsp[0].lval) << endl;
  }
#line 1988 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 340 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "monomial " << (yyvsp[0].dval) << endl;
  }
#line 1996 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 344 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "monomial " << (yyvsp[0].sval) << endl;
  }
#line 2004 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 348 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "monomial " << (yyvsp[-2].sval) << " " << (yyvsp[0].lval) << endl;
  }
#line 2012 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 352 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "monomial func_exe" << endl;
  }
#line 2020 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 357 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "if_stmt" << endl;
  }
#line 2028 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 361 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "if_stmt else" << endl;
  }
#line 2036 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 365 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "if_stmt elseif_stmts_end" << endl;
  }
#line 2044 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 369 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "if_stmt  else_if_stmts_mid else" << endl;
  }
#line 2052 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 374 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "else_if_stmts mult" << endl;
  }
#line 2060 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 378 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "else_if_stmts" << endl;
  }
#line 2068 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 383 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "else_if_stmt" << endl;
  }
#line 2076 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 388 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "for_stmt declaration_subst_calc subst_calc" << endl;
  }
#line 2084 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 392 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "for_stmt declaration_subst_calc subst_calc_2" << endl;
  }
#line 2092 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 396 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "for_stmt subst_calc subst_calc" << endl;
  }
#line 2100 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 400 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "for_stmt subst_calc subst_calc_2" << endl;
  }
#line 2108 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 404 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "for_stmt subst_calc_2 subst_calc" << endl;
  }
#line 2116 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 408 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "for_stmt subst_calc_2 subst_calc_2" << endl;
  }
#line 2124 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 413 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "func_exe identifiers" << endl;
  }
#line 2132 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 417 "../src/parser.y" /* yacc.c:1646  */
    {
    cout << "func_exe no identifiers" << endl;
  }
#line 2140 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2144 "parser.tab.c" /* yacc.c:1646  */
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
#line 425 "../src/parser.y" /* yacc.c:1906  */


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
