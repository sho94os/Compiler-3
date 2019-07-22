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
#line 1 "1605103.y" /* yacc.c:339  */

#include<iostream>
#include "headers/1605103_SymbolTable.h"

//#define Util::appendLogError Util::appendLogError
//#define LOG Util::parserLog

using namespace std;
int yyparse(void);
int yylex(void);

int lines=1,errors=0;
FILE *fp;
extern FILE *yyin;

bool DEBUG = false;
bool isParsingSuccessful = true;

SymbolTable *symbolTable = new SymbolTable(100);
vector<pair<string,int>> possiblyUndefinedFunctions;
vector<SymbolInfo*>paramList,declarationList,argList;

void yyerror(const char *s){
	cerr<<s<<" at Line:"<<lines<<endl;
	isParsingSuccessful = false;
}


#line 95 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    IF = 258,
    ELSE = 259,
    FOR = 260,
    WHILE = 261,
    DO = 262,
    BREAK = 263,
    INT = 264,
    FLOAT = 265,
    CHAR = 266,
    DOUBLE = 267,
    VOID = 268,
    RETURN = 269,
    SWITCH = 270,
    CASE = 271,
    DEFAULT = 272,
    CONTINUE = 273,
    CONST_INT = 274,
    CONST_FLOAT = 275,
    CONST_CHAR = 276,
    ADDOP = 277,
    MULOP = 278,
    INCOP = 279,
    RELOP = 280,
    ASSIGNOP = 281,
    LOGICOP = 282,
    BITOP = 283,
    NOT = 284,
    DECOP = 285,
    LPAREN = 286,
    RPAREN = 287,
    LCURL = 288,
    RCURL = 289,
    LTHIRD = 290,
    RTHIRD = 291,
    COMMA = 292,
    SEMICOLON = 293,
    STRING = 294,
    ID = 295,
    PRINTLN = 296,
    LOWER_THAN_ELSE = 297
  };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define FOR 260
#define WHILE 261
#define DO 262
#define BREAK 263
#define INT 264
#define FLOAT 265
#define CHAR 266
#define DOUBLE 267
#define VOID 268
#define RETURN 269
#define SWITCH 270
#define CASE 271
#define DEFAULT 272
#define CONTINUE 273
#define CONST_INT 274
#define CONST_FLOAT 275
#define CONST_CHAR 276
#define ADDOP 277
#define MULOP 278
#define INCOP 279
#define RELOP 280
#define ASSIGNOP 281
#define LOGICOP 282
#define BITOP 283
#define NOT 284
#define DECOP 285
#define LPAREN 286
#define RPAREN 287
#define LCURL 288
#define RCURL 289
#define LTHIRD 290
#define RTHIRD 291
#define COMMA 292
#define SEMICOLON 293
#define STRING 294
#define ID 295
#define PRINTLN 296
#define LOWER_THAN_ELSE 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 47 "1605103.y" /* yacc.c:355  */

	SymbolInfo* Symbol;

#line 223 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 240 "y.tab.c" /* yacc.c:358  */

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


#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

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
# define YYCOPY_NEEDED 1
#endif


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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   169

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  128

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    55,    55,    59,    68,    81,    90,    99,   111,   159,
     164,   195,   204,   204,   258,   258,   299,   308,   318,   325,
     336,   336,   355,   371,   396,   403,   409,   415,   425,   432,
     440,   447,   458,   464,   472,   478,   484,   490,   502,   514,
     525,   536,   542,   546,   557,   563,   569,   575,   579,   585,
     604,   636,   643,   665,   672,   688,   695,   709,   717,   734,
     742,   784,   795,   806,   817,   824,   874,   881,   890,   898,
     906,   916,   922,   928,   935
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "FOR", "WHILE", "DO",
  "BREAK", "INT", "FLOAT", "CHAR", "DOUBLE", "VOID", "RETURN", "SWITCH",
  "CASE", "DEFAULT", "CONTINUE", "CONST_INT", "CONST_FLOAT", "CONST_CHAR",
  "ADDOP", "MULOP", "INCOP", "RELOP", "ASSIGNOP", "LOGICOP", "BITOP",
  "NOT", "DECOP", "LPAREN", "RPAREN", "LCURL", "RCURL", "LTHIRD", "RTHIRD",
  "COMMA", "SEMICOLON", "STRING", "ID", "PRINTLN", "LOWER_THAN_ELSE",
  "$accept", "start", "program", "unit", "func_declaration",
  "func_definition", "@1", "@2", "parameter_list", "compound_statement",
  "$@3", "var_declaration", "type_specifier", "declarationList",
  "statements", "statement", "expression_statement", "variable",
  "expression", "logic_expression", "rel_expression", "simple_expression",
  "term", "unary_expression", "factor", "argument_list", "arguments", YY_NULLPTR
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
     295,   296,   297
};
# endif

#define YYPACT_NINF -70

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-70)))

#define YYTABLE_NINF -15

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      73,   -70,   -70,   -70,    21,    73,   -70,   -70,   -70,   -70,
     -33,   -70,   -70,    25,    11,    48,    12,   -70,    -5,   -70,
       0,   -13,    36,    45,    53,   -70,   -70,    56,     7,    73,
     -70,   -70,    71,    57,   -70,   -70,   -70,    56,    52,    59,
     -70,   106,   -70,   -70,   -70,   -70,    62,    66,    69,   129,
     -70,   -70,   129,   129,   129,   -70,    38,    70,   -70,   -70,
      64,    65,   -70,   -70,    -4,    13,   -70,    75,    37,    85,
     -70,   -70,   129,   112,   129,    15,     4,   -70,   -70,    78,
     129,   129,    74,    82,   -70,   -70,   -70,   129,   -70,   -70,
     -70,   129,   129,   129,   129,    86,   112,    89,   -70,   -70,
     -70,   -70,    90,    87,    91,    97,   -70,   -70,    85,   101,
     -70,   106,   129,   106,   -70,   129,   -70,    16,   126,   104,
     -70,   -70,   -70,   -70,   106,   106,   -70,   -70
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    25,    26,    27,     0,     2,     4,     6,     7,     5,
       0,     1,     3,    30,     0,     0,     0,    24,     0,    23,
       0,     0,    19,     0,    28,    11,    10,     0,     0,     0,
      18,    31,     0,    20,    15,     9,     8,     0,    17,     0,
      22,     0,    13,    16,    29,    47,     0,     0,     0,     0,
      67,    68,     0,     0,     0,    45,    49,     0,    36,    34,
       0,     0,    32,    35,    64,     0,    51,    53,    55,    57,
      59,    63,     0,     0,     0,     0,    64,    61,    62,     0,
      72,     0,     0,    30,    21,    33,    69,     0,    70,    48,
      46,     0,     0,     0,     0,     0,     0,     0,    44,    43,
      66,    74,     0,    71,     0,     0,    52,    54,    58,    56,
      60,     0,     0,     0,    65,     0,    50,     0,    38,     0,
      40,    73,    42,    41,     0,     0,    39,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -70,   -70,   -70,   128,   -70,   -70,   -70,   -70,   -70,   -14,
     -70,    72,    10,   -70,   -70,   -61,   -41,   -50,   -45,   -69,
      47,    49,    61,   -47,   -70,   -70,   -70
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,    37,    27,    21,    58,
      41,    59,    60,    14,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,   102,   103
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      85,    25,    76,    76,    75,    77,    78,    13,    35,    79,
      10,   101,    17,    34,    89,    10,    98,   122,   106,    28,
      86,    11,    87,    42,    29,    22,    88,    95,    86,    97,
      76,    23,    96,   -14,    88,    24,   104,    76,    26,    38,
     -12,    76,    76,    76,    76,    36,   121,   110,    18,    19,
     118,    90,   120,    99,   123,   112,    15,     1,     2,    92,
      16,     3,    93,   126,   127,    76,    45,   119,    46,    80,
      47,    48,     9,    81,     1,     2,    30,     9,     3,    49,
      20,    31,     1,     2,    50,    51,     3,    52,    32,    33,
      39,    40,    43,    72,    53,    44,    54,    73,    33,    84,
      74,    82,    91,    55,    83,    56,    57,    45,    94,    46,
     100,    47,    48,    45,   105,     1,     2,    16,   111,     3,
      49,   113,   114,    92,   115,    50,    51,   116,    52,   117,
     124,    50,    51,    12,    52,    53,   125,    54,   107,    33,
       0,    53,   109,    54,    55,     0,    56,    57,    50,    51,
      55,    52,    56,   108,     0,     0,     0,     0,    53,     0,
      54,     0,     0,     0,     0,     0,     0,     0,     0,    56
};

static const yytype_int8 yycheck[] =
{
      61,     1,    52,    53,    49,    52,    53,    40,     1,    54,
       0,    80,     1,    27,     1,     5,     1,     1,    87,    32,
      24,     0,    26,    37,    37,    15,    30,    72,    24,    74,
      80,    19,    73,    33,    30,    40,    81,    87,    38,    29,
      33,    91,    92,    93,    94,    38,   115,    94,    37,    38,
     111,    38,   113,    38,    38,    96,    31,     9,    10,    22,
      35,    13,    25,   124,   125,   115,     1,   112,     3,    31,
       5,     6,     0,    35,     9,    10,    40,     5,    13,    14,
      32,    36,     9,    10,    19,    20,    13,    22,    35,    33,
      19,    34,    40,    31,    29,    36,    31,    31,    33,    34,
      31,    31,    27,    38,    40,    40,    41,     1,    23,     3,
      32,     5,     6,     1,    40,     9,    10,    35,    32,    13,
      14,    32,    32,    22,    37,    19,    20,    36,    22,    32,
       4,    19,    20,     5,    22,    29,    32,    31,    91,    33,
      -1,    29,    93,    31,    38,    -1,    40,    41,    19,    20,
      38,    22,    40,    92,    -1,    -1,    -1,    -1,    29,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    10,    13,    44,    45,    46,    47,    48,    54,
      55,     0,    46,    40,    56,    31,    35,     1,    37,    38,
      32,    51,    55,    19,    40,     1,    38,    50,    32,    37,
      40,    36,    35,    33,    52,     1,    38,    49,    55,    19,
      34,    53,    52,    40,    36,     1,     3,     5,     6,    14,
      19,    20,    22,    29,    31,    38,    40,    41,    52,    54,
      55,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    31,    31,    31,    61,    60,    66,    66,    61,
      31,    35,    31,    40,    34,    58,    24,    26,    30,     1,
      38,    27,    22,    25,    23,    61,    59,    61,     1,    38,
      32,    62,    68,    69,    61,    40,    62,    63,    65,    64,
      66,    32,    59,    32,    32,    37,    36,    32,    58,    61,
      58,    62,     1,    38,     4,    32,    58,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    46,    47,    47,
      47,    47,    49,    48,    50,    48,    51,    51,    51,    51,
      53,    52,    52,    54,    54,    55,    55,    55,    56,    56,
      56,    56,    57,    57,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    59,    59,    59,    59,    60,
      60,    61,    61,    62,    62,    63,    63,    64,    64,    65,
      65,    66,    66,    66,    67,    67,    67,    67,    67,    67,
      67,    68,    68,    69,    69
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     6,     6,
       5,     5,     0,     7,     0,     6,     4,     3,     2,     1,
       0,     4,     2,     3,     3,     1,     1,     1,     3,     6,
       1,     4,     1,     2,     1,     1,     1,     7,     5,     7,
       5,     5,     5,     3,     3,     1,     2,     1,     2,     1,
       4,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     2,     2,     1,     1,     4,     3,     1,     1,     2,
       2,     1,     0,     3,     1
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
      YY_LAC_DISCARD ("YYBACKUP");                              \
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

/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return 1 if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYSIZE_T *yycapacity, YYSIZE_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yytype_int16 **yybottom,
                      yytype_int16 *yybottom_no_free,
                      yytype_int16 **yytop, yytype_int16 *yytop_empty)
{
  YYSIZE_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYSIZE_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYSIZE_T yyalloc = 2 * yysize_new;
      yytype_int16 *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        (yytype_int16*) YYSTACK_ALLOC (yyalloc * sizeof *yybottom_new);
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                         \
do {                                                             \
  if (!yy_lac_established)                                       \
    {                                                            \
      YYDPRINTF ((stderr,                                        \
                  "LAC: initial context established for %s\n",   \
                  yytname[yytoken]));                            \
      yy_lac_established = 1;                                    \
      {                                                          \
        int yy_lac_status =                                      \
          yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken); \
        if (yy_lac_status == 2)                                  \
          goto yyexhaustedlab;                                   \
        if (yy_lac_status == 1)                                  \
          goto yyerrlab;                                         \
      }                                                          \
    }                                                            \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      if (yydebug)                                                       \
        YYFPRINTF (stderr, "LAC: initial context discarded due to "      \
                   Event "\n");                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return 2 if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yytype_int16 *yyesa, yytype_int16 **yyes,
        YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
{
  yytype_int16 *yyes_prev = yyssp;
  yytype_int16 *yyesp = yyes_prev;
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yytname[yytoken]));
  if (yytoken == YYUNDEFTOK)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          yyrule = yydefact[*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      {
        YYSIZE_T yylen = yyr2[yyrule];
        YYDPRINTF ((stderr, " R%d", yyrule - 1));
        if (yyesp != yyes_prev)
          {
            YYSIZE_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yylen -= yysize;
                yyesp = yyes_prev;
              }
          }
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      {
        int yystate;
        {
          int yylhs = yyr1[yyrule] - YYNTOKENS;
          yystate = yypgoto[yylhs] + *yyesp;
          if (yystate < 0 || YYLAST < yystate
              || yycheck[yystate] != *yyesp)
            yystate = yydefgoto[yylhs];
          else
            yystate = yytable[yystate];
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            *yyesp = yystate;
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return 2;
              }
            *++yyesp = yystate;
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}


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
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store or if
   yy_lac returned 2.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyesa, yytype_int16 **yyes,
                YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
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
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          int yyx;

          for (yyx = 0; yyx < YYNTOKENS; ++yyx)
            if (yyx != YYTERROR && yyx != YYUNDEFTOK)
              {
                {
                  int yy_lac_status = yy_lac (yyesa, yyes, yyes_capacity,
                                              yyssp, yyx);
                  if (yy_lac_status == 2)
                    return 2;
                  if (yy_lac_status == 1)
                    continue;
                }
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
# if YYDEBUG
      else if (yydebug)
        YYFPRINTF (stderr, "No expected tokens.\n");
# endif
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

    yytype_int16 yyesa[20];
    yytype_int16 *yyes;
    YYSIZE_T yyes_capacity;

  int yy_lac_established = 0;
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

  yyes = yyesa;
  yyes_capacity = sizeof yyesa / sizeof *yyes;
  if (YYMAXDEPTH < yyes_capacity)
    yyes_capacity = YYMAXDEPTH;

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
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      YY_LAC_ESTABLISH;
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
  YY_LAC_DISCARD ("shift");

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
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
          case 2:
#line 55 "1605103.y" /* yacc.c:1646  */
    {	}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 59 "1605103.y" /* yacc.c:1646  */
    {
		
		(yyval.Symbol) = new SymbolInfo();
		Util::parserLog(lines,"program -> program unit");
		Util::parserLog((yyvsp[-1].Symbol)->getName()+" "+(yyvsp[0].Symbol)->getName()); 
		
		(yyval.Symbol)->setName((yyvsp[-1].Symbol)->getName()+(yyvsp[0].Symbol)->getName());
	}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 68 "1605103.y" /* yacc.c:1646  */
    {

		(yyval.Symbol) = new SymbolInfo();
		Util::parserLog(lines,"program -> unit");
		Util::parserLog((yyvsp[0].Symbol)->getName()+'\n');

		(yyval.Symbol)->setName((yyvsp[0].Symbol)->getName());
	}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 81 "1605103.y" /* yacc.c:1646  */
    {

		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"unit -> var_declaration");
		Util::parserLog((yyvsp[0].Symbol)->getName()); 

		(yyval.Symbol)->setName((yyvsp[0].Symbol)->getName()+"\n");
	}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 90 "1605103.y" /* yacc.c:1646  */
    {

		(yyval.Symbol) = new SymbolInfo();
		Util::parserLog(lines,"unit -> func_declaration");
		Util::parserLog((yyvsp[0].Symbol)->getName()); 

		(yyval.Symbol)->setName((yyvsp[0].Symbol)->getName()+"\n");
	}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 99 "1605103.y" /* yacc.c:1646  */
    { 

		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"unit -> func_definition");
		Util::parserLog((yyvsp[0].Symbol)->getName());

		(yyval.Symbol)->setName((yyvsp[0].Symbol)->getName()+"\n");
	}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 111 "1605103.y" /* yacc.c:1646  */
    {

		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"func_declaration -> type_specifier ID LPAREN parameter_list RPAREN SEMICOLON");
		Util::parserLog((yyvsp[-5].Symbol)->getName()+" "+(yyvsp[-4].Symbol)->getName()+"("+(yyvsp[-2].Symbol)->getName()+")");
		
		SymbolInfo *func = symbolTable->lookUp((yyvsp[-4].Symbol)->getName());
		
		if(func != nullptr){
			int num=func->getFunction()->getParamCount();
			if(num == paramList.size()){
				vector<string>paramType = func->getFunction()->getAllParamTypes();
				for( int i=0;i < paramList.size(); i++){
					if(paramList[i]->getDeclarationType() != paramType[i]){
						errors++;
						Util::appendLogError(lines,"Expected "+paramList[i]->getDeclarationType()+" Found "+ paramType[i] +"for "+to_string(i)+"th parameter",PARSER);
						break;
					}
				}
				if(func->getFunction()->getReturnType()!=(yyvsp[-5].Symbol)->getName()){
					errors++;
					Util::appendLogError(lines,"Invalid Return Type.Expected "+func->getFunction()->getReturnType()+ " Found " + (yyvsp[-5].Symbol)->getName(),PARSER);
				}
				paramList.clear();
			
			}else{
				errors++;
				Util::appendLogError(lines,"Invalid number of parameters.Found:"+to_string(num)
				+" params, Expected:"+to_string(paramList.size())+" params",PARSER);
			}	
		} 
		else{
			//TODO : Function
			symbolTable->insert((yyvsp[-4].Symbol)->getName(),"ID","Function");
			func = symbolTable->lookUp((yyvsp[-4].Symbol)->getName());
			func->setFunction();

			for(int i=0 ;i < paramList.size() ; i++){
				func->getFunction()->addParam(paramList[i]->getName(),paramList[i]->getDeclarationType());
				if(DEBUG)cout<<paramList[i]->getDeclarationType()<<endl;
			}
			paramList.clear();
			func->getFunction()->setReturnType((yyvsp[-5].Symbol)->getName());			
		}

		(yyval.Symbol)->setName((yyvsp[-5].Symbol)->getName()+" "+(yyvsp[-4].Symbol)->getName()+"("+(yyvsp[-2].Symbol)->getName()+");");

	}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 159 "1605103.y" /* yacc.c:1646  */
    {
		
		Util::appendLogError(lines,"func_declaration -> type_specifier ID LPAREN RPAREN MISSING_SEMICOLON",PARSER);
		errors++;
	}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 164 "1605103.y" /* yacc.c:1646  */
    {

			(yyval.Symbol) = new SymbolInfo();
			
			Util::parserLog(lines,"func_declaration -> type_specifier ID LPAREN RPAREN SEMICOLON");
			Util::parserLog((yyvsp[-4].Symbol)->getName()+" "+(yyvsp[-3].Symbol)->getName()+"();");
			
			SymbolInfo *s=symbolTable->lookUp((yyvsp[-3].Symbol)->getName());
			
			if(s != nullptr){
				//TODO : Function
				if(s->getFunction()->getParamCount()!=0){
					errors++;
					Util::appendLogError(lines,"Invalid number of parameters! Expected 0 Found "+to_string(s->getFunction()->getParamCount()),PARSER);
		
				}
				if(s->getFunction()->getReturnType()!=(yyvsp[-4].Symbol)->getName()){
					errors++;
					Util::appendLogError(lines," Return Type Does not Match! Expected "+s->getFunction()->getReturnType()+ " Found " +(yyvsp[-4].Symbol)->getName(),PARSER);
				}

			}
			else{
				symbolTable->insert((yyvsp[-3].Symbol)->getName(),"ID","Function");
				s=symbolTable->lookUp((yyvsp[-3].Symbol)->getName());
				s->setFunction();
				s->getFunction()->setReturnType((yyvsp[-4].Symbol)->getName());
			}
			(yyval.Symbol)->setName((yyvsp[-4].Symbol)->getName()+" "+(yyvsp[-3].Symbol)->getName()+"();");
	}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 195 "1605103.y" /* yacc.c:1646  */
    {

		Util::appendLogError(lines,"Missing SEMICOLON",PARSER);
		errors++;
			
	}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 204 "1605103.y" /* yacc.c:1646  */
    {
		
		(yyval.Symbol) = new SymbolInfo(); 
		SymbolInfo *s = symbolTable->lookUp((yyvsp[-3].Symbol)->getName()); 

		if(s != nullptr){ 
			if(s->getFunction()->isDefined()==0){
				int num = s->getFunction()->getParamCount();
				if(num != paramList.size()){
					errors++;
					Util::appendLogError(lines,"Invalid number of parameters ",PARSER);
				} else{
					vector<string>paramType = s->getFunction()->getAllParamTypes();
					for(int i=0;i<paramList.size();i++){
						if(paramList[i]->getDeclarationType() != paramType[i]){
							errors++;
							Util::appendLogError(lines,"Expected "+Util::trim(paramList[i]->getDeclarationType())
							+" Found "+Util::trim(paramType[i])+" for "+ to_string(i)+"th "+"Parameter",PARSER);
							break;
						}
					}
					if(s->getFunction()->getReturnType() != (yyvsp[-4].Symbol)->getName()){
						errors++;
						Util::appendLogError(lines,"Return Type Mismatch ! Expected "+s->getFunction()->getReturnType()+ " Found " + (yyvsp[-4].Symbol)->getName(),PARSER);
					}	
				}
				s->getFunction()->setDefined();
			}
			else{
				errors++;
				Util::appendLogError(lines,"Multiple definition of function "+(yyvsp[-3].Symbol)->getName(),PARSER);
			}
		}
		else{ 
			if(DEBUG)cout<<paramList.size()<<" "<<lines<<endl;
			symbolTable->insert((yyvsp[-3].Symbol)->getName(),"ID","Function");
			s = symbolTable->lookUp((yyvsp[-3].Symbol)->getName());
			s->setFunction();
			if(DEBUG)cout<<s->getFunction()->getParamCount()<<endl;
			s->getFunction()->setDefined();
			
			for(int i=0;i<paramList.size();i++){
				s->getFunction()->addParam(paramList[i]->getName(),paramList[i]->getDeclarationType());
			}
			s->getFunction()->setReturnType((yyvsp[-4].Symbol)->getName());
		}

	}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 252 "1605103.y" /* yacc.c:1646  */
    {
		Util::parserLog(lines,"func_definition -> type_specifier ID LPAREN parameter_list RPAREN compound_statement ");
		Util::parserLog((yyvsp[-6].Symbol)->getName()+" "+(yyvsp[-5].Symbol)->getName()+"("
		+(yyvsp[-3].Symbol)->getName()+") "+ (yyvsp[0].Symbol)->getName());
		(yyval.Symbol)->setName((yyvsp[-6].Symbol)->getName()+" "+(yyvsp[-5].Symbol)->getName()+"("+(yyvsp[-3].Symbol)->getName()+")"+(yyvsp[0].Symbol)->getName());
	}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 258 "1605103.y" /* yacc.c:1646  */
    { 
		(yyval.Symbol) = new SymbolInfo();
		SymbolInfo *s = symbolTable->lookUp((yyvsp[-2].Symbol)->getName());
		if(s == nullptr){
			symbolTable->insert((yyvsp[-2].Symbol)->getName(),"ID","Function");
			s = symbolTable->lookUp((yyvsp[-2].Symbol)->getName());
			s -> setFunction();
			s -> getFunction()->setDefined();
			s -> getFunction()->setReturnType((yyvsp[-3].Symbol)->getName());
			//	cout<<lines<<" "<<s->getFunction()->getReturnType()<<endl;
		}
		else if(s->getFunction()->isDefined()==0){
			if(s->getFunction()->getParamCount()!=0){
				errors++;
				Util::appendLogError(lines," Invalid number of parameters ",PARSER);
			}
			if(s->getFunction()->getReturnType()!=(yyvsp[-3].Symbol)->getName()){
				errors++;
				Util::appendLogError(lines,"Return Type Mismatch ",PARSER);
			}

			s->getFunction()->setDefined();
		}
		else{
			errors++;
			Util::appendLogError(lines,"Multiple definition of function "+(yyvsp[-2].Symbol)->getName(),PARSER);
		}
											
		(yyvsp[-3].Symbol)->setName((yyvsp[-3].Symbol)->getName()+" "+(yyvsp[-2].Symbol)->getName()+"()");
	}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 287 "1605103.y" /* yacc.c:1646  */
    {
		Util::parserLog(lines,"func_definition->type_specifier ID LPAREN RPAREN compound_statement");
		Util::parserLog((yyvsp[-5].Symbol)->getName()+" "+(yyvsp[0].Symbol)->getName());
		(yyval.Symbol)->setName((yyvsp[-5].Symbol)->getName()+(yyvsp[0].Symbol)->getName());
			
	}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 299 "1605103.y" /* yacc.c:1646  */
    {
		
		(yyval.Symbol) = new SymbolInfo();
		Util::parserLog(lines,"parameter_list -> parameter_list COMMA type_specifier ID");
		Util::parserLog((yyvsp[-3].Symbol)->getName()+","+(yyvsp[-1].Symbol)->getName()+" "+(yyvsp[0].Symbol)->getName());
		
		paramList.push_back(new SymbolInfo((yyvsp[0].Symbol)->getName(),"ID",(yyvsp[-1].Symbol)->getName()));
		(yyval.Symbol)->setName((yyvsp[-3].Symbol)->getName()+","+(yyvsp[-1].Symbol)->getName()+" "+(yyvsp[0].Symbol)->getName());
	}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 308 "1605103.y" /* yacc.c:1646  */
    {
		
		(yyval.Symbol) = new SymbolInfo();
		Util::parserLog(lines,"parameter_list -> parameter_list COMMA type_specifier");
		Util::parserLog((yyvsp[-2].Symbol)->getName()+","+(yyvsp[0].Symbol)->getName());
		
		paramList.push_back(new SymbolInfo("","ID",(yyvsp[0].Symbol)->getName()));
		(yyval.Symbol)->setName((yyvsp[-2].Symbol)->getName()+","+(yyvsp[0].Symbol)->getName());

	}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 318 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"parameter_list -> type_specifier ID");
		Util::parserLog((yyvsp[-1].Symbol)->getName()+" "+(yyvsp[0].Symbol)->getName());
		paramList.push_back(new SymbolInfo((yyvsp[0].Symbol)->getName(),"ID",(yyvsp[-1].Symbol)->getName()));
		(yyval.Symbol)->setName((yyvsp[-1].Symbol)->getName()+" "+(yyvsp[0].Symbol)->getName());
	}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 325 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"parameter_list -> type_specifier");
		Util::parserLog((yyvsp[0].Symbol)->getName());
		paramList.push_back(new SymbolInfo("","ID",(yyvsp[0].Symbol)->getName()));
		(yyval.Symbol)->setName((yyvsp[0].Symbol)->getName()+" ");
	}
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 336 "1605103.y" /* yacc.c:1646  */
    {
	
	symbolTable->enterScope();
	for(int i=0;i<paramList.size();i++){
		symbolTable->insert(paramList[i]->getName(),"ID",paramList[i]->getDeclarationType());
	}
	
	paramList.clear();
	
	}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 345 "1605103.y" /* yacc.c:1646  */
    {
	
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"compound_statement -> LCURL statements RCURL");
		Util::parserLog("{"+(yyvsp[-1].Symbol)->getName()+"}");
		(yyval.Symbol)->setName("{\n"+(yyvsp[-1].Symbol)->getName()+"\n}");
		symbolTable->printAllScopeTables();
		symbolTable->exitScope();
	
	}
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 355 "1605103.y" /* yacc.c:1646  */
    {
		symbolTable->enterScope();
		for(int i=0;i<paramList.size();i++)
			symbolTable->insert(paramList[i]->getName(),"ID",paramList[i]->getDeclarationType());
		//symbolTable->printcurrent();
		paramList.clear();
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"compound_statement->LCURL RCURL");
		Util::parserLog("{}");
		(yyval.Symbol)->setName("{}");
		symbolTable->printAllScopeTables();
		symbolTable->exitScope();
	}
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 371 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"var_declaration -> type_specifier declarationList SEMICOLON");
		Util::parserLog((yyvsp[-2].Symbol)->getName()+" "+(yyvsp[-1].Symbol)->getName()+";");
		if((yyvsp[-2].Symbol)->getName()=="void "){ 
			errors++;
			Util::appendLogError(lines,"Cannot Declare void Type",PARSER);																
		}
		else{
			for(int i=0;i < declarationList.size() ; i++){
				if(symbolTable->lookUpLocal(declarationList[i]->getName()) != nullptr){
					errors++;
					Util::appendLogError(lines,"Multiple Declaration of " + declarationList[i]->getName(),PARSER);
					continue;
				}
				if(declarationList[i]->getType().size()==3){ //"IDa"
					declarationList[i]->setType(declarationList[i]->getType().substr(0,declarationList[i]->getType().size () - 1));
					symbolTable->insert(declarationList[i]->getName(),declarationList[i]->getType(),(yyvsp[-2].Symbol)->getName()+"array");
				} else symbolTable->insert(declarationList[i]->getName(),declarationList[i]->getType(),(yyvsp[-2].Symbol)->getName());
			}
		}
		declarationList.clear();
		(yyval.Symbol)->setName((yyvsp[-2].Symbol)->getName()+" "+(yyvsp[-1].Symbol)->getName()+";");
	}
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 396 "1605103.y" /* yacc.c:1646  */
    {
		Util::appendLogError(lines,"Missing SEMICOLON",PARSER);
		errors++;
	}
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 403 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"type_specifier -> INT");
		Util::parserLog("int ");
		(yyval.Symbol)->setName("int ");
	}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 409 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"type_specifier -> FLOAT");
		Util::parserLog("float ");
		(yyval.Symbol)->setName("float ");
	}
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 415 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"type_specifier -> VOID");
		Util::parserLog("void ");
		(yyval.Symbol)->setName("void ");
	}
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 425 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"declarationList -> declarationList COMMA ID");
		Util::parserLog((yyvsp[-2].Symbol)->getName()+","+(yyvsp[0].Symbol)->getName());
		declarationList.push_back(new SymbolInfo((yyvsp[0].Symbol)->getName(),"ID"));
		(yyval.Symbol)->setName((yyvsp[-2].Symbol)->getName()+","+(yyvsp[0].Symbol)->getName());
	}
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 432 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog((yyvsp[-5].Symbol)->getName()+","+(yyvsp[-3].Symbol)->getName()+"["+(yyvsp[-1].Symbol)->getName()+"]");
		Util::parserLog(lines,"declarationList -> declarationList COMMA ID LTHIRD CONST_INT RTHIRD");
		
		declarationList.push_back(new SymbolInfo((yyvsp[-3].Symbol)->getName(),"IDa")); //TODO : why IDa ?
		(yyval.Symbol)->setName((yyvsp[-5].Symbol)->getName()+","+(yyvsp[-3].Symbol)->getName()+"["+(yyvsp[-1].Symbol)->getName()+"]");
	}
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 440 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"declarationList -> ID");
		Util::parserLog((yyvsp[0].Symbol)->getName());
		declarationList.push_back(new SymbolInfo((yyvsp[0].Symbol)->getName(),"ID"));
		(yyval.Symbol)->setName((yyvsp[0].Symbol)->getName());
	}
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 447 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"declarationList -> ID LTHIRD CONST_INT RTHIRD");
		Util::parserLog((yyvsp[-3].Symbol)->getName()+"["+(yyvsp[-1].Symbol)->getName()+"]");
		declarationList.push_back(new SymbolInfo((yyvsp[-3].Symbol)->getName(),"IDa"));
		(yyval.Symbol)->setName((yyvsp[-3].Symbol)->getName()+"["+(yyvsp[-1].Symbol)->getName()+"]");
	}
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 458 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol) = new SymbolInfo();
		Util::parserLog(lines,"statements -> statement");
		Util::parserLog((yyvsp[0].Symbol)->getName()); 
		(yyval.Symbol)->setName((yyvsp[0].Symbol)->getName());
	}
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 464 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol) = new SymbolInfo();
		Util::parserLog(lines,"statements -> statements statement");
		Util::parserLog((yyvsp[-1].Symbol)->getName()+" "+(yyvsp[0].Symbol)->getName()); 
		(yyval.Symbol)->setName((yyvsp[-1].Symbol)->getName()+"\n"+(yyvsp[0].Symbol)->getName()); 
	}
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 472 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol) = new SymbolInfo();
		Util::parserLog(lines,"statement -> var_declaration");
		Util::parserLog((yyvsp[0].Symbol)->getName());
		(yyval.Symbol)->setName((yyvsp[0].Symbol)->getName()); 
	}
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 478 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"statement -> expression_statement");
		Util::parserLog((yyvsp[0].Symbol)->getName()); 
		(yyval.Symbol)->setName((yyvsp[0].Symbol)->getName()); 
	}
#line 2198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 484 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"statement -> compound_statement");
		Util::parserLog((yyvsp[0].Symbol)->getName()); 
		(yyval.Symbol)->setName((yyvsp[0].Symbol)->getName()); 
	}
#line 2209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 490 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"statement -> FOR LPAREN expression_statement expression_statement expression RPAREN statement");
		Util::parserLog("for("+(yyvsp[-4].Symbol)->getName()+" "+(yyvsp[-3].Symbol)->getName()+" "+
		(yyvsp[-2].Symbol)->getName()+")\n"+(yyvsp[0].Symbol)->getName());
		
		if((yyvsp[-4].Symbol)->getDeclarationType()=="void "){
			errors++;
			Util::appendLogError(lines,"Type Mismatch! Variable Cannot Be Declared void ",PARSER);
		}
		(yyval.Symbol)->setName("for("+(yyvsp[-4].Symbol)->getName()+(yyvsp[-3].Symbol)->getName()+(yyvsp[-2].Symbol)->getName()+")\n"+(yyvsp[-2].Symbol)->getName()); 
	}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 502 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"statement -> IF LPAREN expression RPAREN statement");
		Util::parserLog("if("+(yyvsp[-2].Symbol)->getName()+")\n"+(yyvsp[0].Symbol)->getName());
		
		if((yyvsp[-2].Symbol)->getDeclarationType()=="void "){
			errors++;
			Util::appendLogError(lines,"Type Mismatch! Variable Cannot Be Declared void ",PARSER);
		}
		(yyval.Symbol)->setName("if("+(yyvsp[-2].Symbol)->getName()+")\n"+(yyvsp[0].Symbol)->getName()); 

	}
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 514 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"statement->IF LPAREN expression RPAREN statement ELSE statement");
		Util::parserLog("if("+(yyvsp[-4].Symbol)->getName()+")\n"+(yyvsp[-2].Symbol)->getName()+"else\n"+(yyvsp[0].Symbol)->getName());
		if((yyvsp[-4].Symbol)->getDeclarationType()=="void "){
			errors++;
			Util::appendLogError(lines," Type Mismatch 1",PARSER);
		}
		(yyval.Symbol)->setName("if("+(yyvsp[-4].Symbol)->getName()+")\n"+(yyvsp[-2].Symbol)->getName()+" else \n"+(yyvsp[0].Symbol)->getName()); 
	}
#line 2258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 525 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"statement->WHILE LPAREN expression RPAREN statement");
		Util::parserLog("while("+(yyvsp[-2].Symbol)->getName()+")\n"+(yyvsp[0].Symbol)->getName());

		if((yyvsp[-2].Symbol)->getDeclarationType()=="void "){
			errors++;
			Util::appendLogError(lines," Type Mismatch 2",PARSER);
		}
		(yyval.Symbol)->setName("while("+(yyvsp[-2].Symbol)->getName()+")\n"+(yyvsp[0].Symbol)->getName()); 
	}
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 536 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"statement->PRINTLN LPAREN ID RPAREN SEMICOLON");
		Util::parserLog("\n ("+(yyvsp[-2].Symbol)->getName()+")");
		(yyval.Symbol)->setName("\n("+(yyvsp[-2].Symbol)->getName()+")"); 
	}
#line 2285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 542 "1605103.y" /* yacc.c:1646  */
    {
		errors++;
		Util::appendLogError(lines,"Missig SEMICOLON",PARSER);
	}
#line 2294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 546 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"statement->RETURN expression SEMICOLON");
		Util::parserLog("return "+(yyvsp[-1].Symbol)->getName());
		if((yyvsp[-1].Symbol)->getDeclarationType()=="void "){
			errors++;
			Util::appendLogError(lines," Type Mismatch 3",PARSER);
			(yyval.Symbol)->setDeclarationType("int "); 
		}
		(yyval.Symbol)->setName("return "+(yyvsp[-1].Symbol)->getName()+";"); 
	}
#line 2310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 557 "1605103.y" /* yacc.c:1646  */
    {
		errors++;
		Util::appendLogError(lines,"Missing SEMICOLON",PARSER);
	}
#line 2319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 563 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"expression_statement->SEMICOLON");
		Util::parserLog(";"); 
		(yyval.Symbol)->setName(";"); 
	}
#line 2330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 569 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"expression_statement->expression SEMICOLON");
		Util::parserLog((yyvsp[-1].Symbol)->getName()+";");
		(yyval.Symbol)->setName((yyvsp[-1].Symbol)->getName()+";"); 
	}
#line 2341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 575 "1605103.y" /* yacc.c:1646  */
    {
		errors++;
		Util::appendLogError(lines,"Missing SEMICOLON",PARSER);
	}
#line 2350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 579 "1605103.y" /* yacc.c:1646  */
    {
		errors++;
		Util::appendLogError(lines,"Missing SEMICOLON",PARSER);
	}
#line 2359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 585 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"variable->ID");
		Util::parserLog((yyvsp[0].Symbol)->getName());
		if(symbolTable->lookUp((yyvsp[0].Symbol)->getName())==nullptr){
			errors++;
			Util::appendLogError(lines," Undeclared Variable: "+(yyvsp[0].Symbol)->getName(),PARSER);
		}
		else if(symbolTable->lookUp((yyvsp[0].Symbol)->getName())->getDeclarationType()=="int array" || symbolTable->lookUp((yyvsp[0].Symbol)->getName())->getDeclarationType()=="float array"){
			errors++;
			Util::appendLogError(lines," Found array: "+(yyvsp[0].Symbol)->getName()+" Expected Variable",PARSER);
		}
		if(symbolTable->lookUp((yyvsp[0].Symbol)->getName())!=nullptr){
			if(DEBUG)cout<<lines<<" "<<(yyvsp[0].Symbol)->toString()<<" "<<symbolTable->lookUp((yyvsp[0].Symbol)->getName())->getDeclarationType()<<endl;
			(yyval.Symbol)->setDeclarationType(symbolTable->lookUp((yyvsp[0].Symbol)->getName())->getDeclarationType()); 
		}
		(yyval.Symbol)->setName((yyvsp[0].Symbol)->getName()); 
												
	}
#line 2383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 604 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"variable->ID LTHIRD expression RTHIRD");
		Util::parserLog((yyvsp[-3].Symbol)->getName()+"["+(yyvsp[-1].Symbol)->getName()+"]");
		if(symbolTable->lookUp((yyvsp[-3].Symbol)->getName())==nullptr){
			errors++;
			Util::appendLogError(lines,"Undeclared Variable :"+ (yyvsp[-3].Symbol)->getName(),PARSER);
		}
		if(DEBUG)cout<<lines<<" "<<(yyvsp[-1].Symbol)->getDeclarationType()<<endl;
		if((yyvsp[-1].Symbol)->getDeclarationType()=="float "||(yyvsp[-1].Symbol)->getDeclarationType()=="void "){
			errors++;
			Util::appendLogError(lines," Non-integer Array Index  ",PARSER);
		}
		if(symbolTable->lookUp((yyvsp[-3].Symbol)->getName())!=nullptr){
			if(DEBUG)cout<<lines<<" "<<symbolTable->lookUp((yyvsp[-3].Symbol)->getName())->toString()<<endl;
			if(symbolTable->lookUp((yyvsp[-3].Symbol)->getName())->getDeclarationType()!="int array" && symbolTable->lookUp((yyvsp[-3].Symbol)->getName())->getDeclarationType()!="float array"){
				errors++;
				Util::appendLogError(lines," Type Mismatch 4",PARSER);	
			}
			if(symbolTable->lookUp((yyvsp[-3].Symbol)->getName())->getDeclarationType()=="int array"){
				(yyvsp[-3].Symbol)->setDeclarationType("int ");
			}
			if(symbolTable->lookUp((yyvsp[-3].Symbol)->getName())->getDeclarationType()=="float array"){
				(yyvsp[-3].Symbol)->setDeclarationType("float ");
			}
			(yyval.Symbol)->setDeclarationType((yyvsp[-3].Symbol)->getDeclarationType()); 
			
		}
		(yyval.Symbol)->setName((yyvsp[-3].Symbol)->getName()+"["+(yyvsp[-1].Symbol)->getName()+"]");  
		
	}
#line 2419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 636 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"expression->logic_expression");
		Util::parserLog((yyvsp[0].Symbol)->getName());
		(yyval.Symbol)->setName((yyvsp[0].Symbol)->getName()); 
		(yyval.Symbol)->setDeclarationType((yyvsp[0].Symbol)->getDeclarationType()); 
	}
#line 2431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 643 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"expression->variable ASSIGNOP logic_expression");
	   	Util::parserLog((yyvsp[-2].Symbol)->getName()+"="+(yyvsp[0].Symbol)->getName());
		
		if((yyvsp[0].Symbol)->getDeclarationType()=="void "){
			errors++;
			Util::appendLogError(lines,"Expression Cannnot Be of Type void",PARSER);
			(yyval.Symbol)->setDeclarationType("int "); 
		}else if(symbolTable->lookUp((yyvsp[-2].Symbol)->getName()) != nullptr) {
			if(DEBUG)cout<<lines<<" "<<symbolTable->lookUp((yyvsp[-2].Symbol)->getName())->toString()<<""<<(yyvsp[0].Symbol)->toString()<<endl;
			string decType = symbolTable->lookUp((yyvsp[-2].Symbol)->getName())->getDeclarationType();
			if(decType != (yyvsp[0].Symbol)->getDeclarationType()){
				errors++;
				Util::appendLogError(lines,"Invalid Assingment! Assigning "+(yyvsp[0].Symbol)->getDeclarationType()+"to "+decType,PARSER);
			}
		}
		(yyval.Symbol)->setDeclarationType((yyvsp[-2].Symbol)->getDeclarationType()); 
		(yyval.Symbol)->setName((yyvsp[-2].Symbol)->getName()+"="+(yyvsp[0].Symbol)->getName());  

	}
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 665 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"logic_expression->rel_expression");
		Util::parserLog((yyvsp[0].Symbol)->getName());
		(yyval.Symbol)->setName((yyvsp[0].Symbol)->getName()); 
		(yyval.Symbol)->setDeclarationType((yyvsp[0].Symbol)->getDeclarationType()); 
	}
#line 2469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 672 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"logic_expression->rel_expression LOGICOP rel_expression");
		Util::parserLog((yyvsp[-2].Symbol)->getName()+(yyvsp[-1].Symbol)->getName()+(yyvsp[0].Symbol)->getName());
		
		if((yyvsp[-2].Symbol)->getDeclarationType()=="void "||(yyvsp[0].Symbol)->getDeclarationType()=="void "){
			errors++;
			Util::appendLogError(lines," Type Mismatch 7",PARSER);
			(yyval.Symbol)->setDeclarationType("int "); 
		}
		(yyval.Symbol)->setDeclarationType("int "); 
		(yyval.Symbol)->setName((yyvsp[-2].Symbol)->getName()+(yyvsp[-1].Symbol)->getName()+(yyvsp[0].Symbol)->getName());  

	}
#line 2488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 688 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"rel_expression->simple_expression");
		Util::parserLog((yyvsp[0].Symbol)->getName());
		(yyval.Symbol)->setName((yyvsp[0].Symbol)->getName()); 
		(yyval.Symbol)->setDeclarationType((yyvsp[0].Symbol)->getDeclarationType()); 
	}
#line 2500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 695 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"rel_expression->simple_expression RELOP simple_expression");
		Util::parserLog((yyvsp[-2].Symbol)->getName()+(yyvsp[-1].Symbol)->getName()+(yyvsp[0].Symbol)->getName());
		if((yyvsp[-2].Symbol)->getDeclarationType()=="void "||(yyvsp[0].Symbol)->getDeclarationType()=="void "){
			errors++;
			Util::appendLogError(lines," Type Mismatch! 8",PARSER);
			(yyval.Symbol)->setDeclarationType("int "); 
		}
		(yyval.Symbol)->setDeclarationType("int "); 	
		(yyval.Symbol)->setName((yyvsp[-2].Symbol)->getName()+(yyvsp[-1].Symbol)->getName()+(yyvsp[0].Symbol)->getName());  
		}
#line 2517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 709 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"simple_expression -> term");
		Util::parserLog((yyvsp[0].Symbol)->getName());
		if(DEBUG)cout<<(yyvsp[0].Symbol)->toString()<<endl;
		(yyval.Symbol)->setDeclarationType((yyvsp[0].Symbol)->getDeclarationType());
		(yyval.Symbol)->setName((yyvsp[0].Symbol)->getName());  
	}
#line 2530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 717 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo(); 
		Util::parserLog(lines,"simple_expression -> simple_expression ADDOP term");
		Util::parserLog((yyvsp[-2].Symbol)->getName()+(yyvsp[-1].Symbol)->getName()+(yyvsp[0].Symbol)->getName());
		if(DEBUG)cout<<(yyvsp[0].Symbol)->getDeclarationType()<<endl;
		if((yyvsp[-2].Symbol)->getDeclarationType()=="void "||(yyvsp[0].Symbol)->getDeclarationType()=="void "){
			errors++;
			Util::appendLogError(lines,"Type Mismatch 9",PARSER);
			(yyval.Symbol)->setDeclarationType("int "); 
		}else if((yyvsp[-2].Symbol)->getDeclarationType()=="float " || (yyvsp[0].Symbol)->getDeclarationType()=="float ")
			(yyval.Symbol)->setDeclarationType("float ");
		else (yyval.Symbol)->setDeclarationType("int ");
		
		(yyval.Symbol)->setName((yyvsp[-2].Symbol)->getName()+(yyvsp[-1].Symbol)->getName()+(yyvsp[0].Symbol)->getName());  
	}
#line 2550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 734 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"term->unary_expression");
		Util::parserLog((yyvsp[0].Symbol)->getName()); 
		if(DEBUG)cout<<(yyvsp[0].Symbol)->toString()<<endl;
		(yyval.Symbol)->setDeclarationType((yyvsp[0].Symbol)->getDeclarationType()); 
		(yyval.Symbol)->setName((yyvsp[0].Symbol)->getName()); 
	}
#line 2563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 742 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"term->term MULOP unary_expression");
		Util::parserLog((yyvsp[-2].Symbol)->getName()+(yyvsp[-1].Symbol)->getName()+(yyvsp[0].Symbol)->getName());
		if((yyvsp[-2].Symbol)->getDeclarationType()=="void "||(yyvsp[0].Symbol)->getDeclarationType()=="void "){
			errors++;
			Util::appendLogError(lines," Type Mismatch 10",PARSER);
			(yyval.Symbol)->setDeclarationType("int "); 
		}else if((yyvsp[-1].Symbol)->getName()=="%"){
			if((yyvsp[-2].Symbol)->getDeclarationType()!="int " ||(yyvsp[0].Symbol)->getDeclarationType()!="int "){
			errors++;
			Util::appendLogError(lines,"Non Integer operand on modulus(%) operator  ",PARSER);

			} 
			(yyval.Symbol)->setDeclarationType("int "); 
		}
		else if((yyvsp[-1].Symbol)->getName()=="/"){
			if((yyvsp[-2].Symbol)->getDeclarationType()=="void "||(yyvsp[0].Symbol)->getDeclarationType()=="void "){
				errors++;
				Util::appendLogError(lines," Type Mismatch 11",PARSER);
				(yyval.Symbol)->setDeclarationType("int "); 
			}
			else  if((yyvsp[-2].Symbol)->getDeclarationType()=="int " && (yyvsp[0].Symbol)->getDeclarationType()=="int ")
				(yyval.Symbol)->setDeclarationType("int "); 
			else (yyval.Symbol)->setDeclarationType("float "); 
			
		}
		else{
			if((yyvsp[-2].Symbol)->getDeclarationType()=="void "||(yyvsp[0].Symbol)->getDeclarationType()=="void "){
				errors++;
				Util::appendLogError(lines," Type Mismatch!",PARSER);
				(yyval.Symbol)->setDeclarationType("int "); 
			}
			else  if((yyvsp[-2].Symbol)->getDeclarationType()=="float " || (yyvsp[0].Symbol)->getDeclarationType()=="float ") (yyval.Symbol)->setDeclarationType("float "); 
			else (yyval.Symbol)->setDeclarationType("int "); 
		}
	
		(yyval.Symbol)->setName((yyvsp[-2].Symbol)->getName()+(yyvsp[-1].Symbol)->getName()+(yyvsp[0].Symbol)->getName()); 
								
	}
#line 2608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 784 "1605103.y" /* yacc.c:1646  */
    {
	(yyval.Symbol) = new SymbolInfo();
	Util::parserLog(lines,"unary_expression->ADDOP unary_expression");
	Util::parserLog((yyvsp[-1].Symbol)->getName()+(yyvsp[0].Symbol)->getName());
	if((yyvsp[0].Symbol)->getDeclarationType()=="void "){
		errors++;
		Util::appendLogError(lines," Type Mismatch 12",PARSER);
		(yyval.Symbol)->setDeclarationType("int "); 
	}else (yyval.Symbol)->setDeclarationType((yyvsp[0].Symbol)->getDeclarationType()); 	
	(yyval.Symbol)->setName((yyvsp[-1].Symbol)->getName()+(yyvsp[0].Symbol)->getName()); 
	}
#line 2624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 795 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"unary_expression->NOT unary_expression");
		Util::parserLog("!"+(yyvsp[0].Symbol)->getName()); 
		if((yyvsp[0].Symbol)->getDeclarationType()=="void "){
			errors++;
			Util::appendLogError(lines," Type Mismatch 13",PARSER);
			(yyval.Symbol)->setDeclarationType("int "); 
		}else (yyval.Symbol)->setDeclarationType((yyvsp[0].Symbol)->getDeclarationType());  
		(yyval.Symbol)->setName("!"+(yyvsp[0].Symbol)->getName()); 
	}
#line 2640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 806 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"unary_expression->factor");
		Util::parserLog((yyvsp[0].Symbol)->getName()); 
		if(DEBUG)cout<<(yyvsp[0].Symbol)->toString()<<endl;
		(yyval.Symbol)->setDeclarationType((yyvsp[0].Symbol)->getDeclarationType()); 
		(yyval.Symbol)->setName((yyvsp[0].Symbol)->getName()); 
				
	}
#line 2654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 817 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"factor->variable");
		Util::parserLog((yyvsp[0].Symbol)->getName());
		(yyval.Symbol)->setDeclarationType((yyvsp[0].Symbol)->getDeclarationType()); 
		(yyval.Symbol)->setName((yyvsp[0].Symbol)->getName()); 
	}
#line 2666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 824 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"factor->ID LPAREN argument_list RPAREN");
		Util::parserLog((yyvsp[-3].Symbol)->getName()+"("+(yyvsp[-1].Symbol)->getName()+")");
		SymbolInfo* s=symbolTable->lookUp((yyvsp[-3].Symbol)->getName());
		if(s==nullptr){
			errors++;
			Util::appendLogError(lines,"Undeclared Function",PARSER);
			(yyval.Symbol)->setDeclarationType("int "); 
		}
		else if(s->getFunction()==nullptr){
			errors++;
			Util::appendLogError(lines," Not A Function ",PARSER);
			(yyval.Symbol)->setDeclarationType("int "); 
		}
		else {
			if(s->getFunction()->isDefined()==0){
				pair<string,int> p;
				p.first = s->getName();
				p.second = lines;
				possiblyUndefinedFunctions.push_back(p);
			}
			int num=s->getFunction()->getParamCount();
			
			if(DEBUG)cout<<lines<<" "<<argList.size()<<endl;
			
			(yyval.Symbol)->setDeclarationType(s->getFunction()->getReturnType());
			if(num!=argList.size()){
				errors++;
				Util::appendLogError(lines,"Invalid number of arguments.Found:"+to_string(num)+" args Expected:"+to_string(argList.size())+" args",PARSER);
			}
			else{
				if(DEBUG)cout<<s->getFunction()->getReturnType()<<endl;
				vector<string>paramList=s->getFunction()->getAllParams();
				vector<string>paramType=s->getFunction()->getAllParamTypes();
				
				for(int i=0;i<argList.size();i++){
					if(argList[i]->getDeclarationType()!=paramType[i]){
						errors++;
						Util::appendLogError(lines,"Expected "+Util::trim(paramType[i])+" but passed " + Util::trim(argList[i]->getDeclarationType())+" as "+to_string(i)+"th parameter",PARSER);
						break;
					}
				}

			}
		}
		argList.clear();
		if(DEBUG)cout<<lines<<" "<<(yyval.Symbol)->getDeclarationType()<<endl;
		(yyval.Symbol)->setName((yyvsp[-3].Symbol)->getName()+"("+(yyvsp[-1].Symbol)->getName()+")"); 
	}
#line 2721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 874 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"factor->LPAREN expression RPAREN");
		Util::parserLog("("+(yyvsp[-1].Symbol)->getName()+")"); 
		(yyval.Symbol)->setDeclarationType((yyvsp[-1].Symbol)->getDeclarationType()); 
		(yyval.Symbol)->setName("("+(yyvsp[-1].Symbol)->getName()+")"); 
	}
#line 2733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 881 "1605103.y" /* yacc.c:1646  */
    { 
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"factor -> CONST_INT");
		Util::parserLog((yyvsp[0].Symbol)->getName());
		if(DEBUG)cout<<(yyvsp[0].Symbol)->toString()<<endl;
		(yyval.Symbol)->setDeclarationType("int "); 	
		(yyval.Symbol)->setName((yyvsp[0].Symbol)->getName()); 
			
	}
#line 2747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 890 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"factor->CONST_FLOAT");
		Util::parserLog((yyvsp[0].Symbol)->getName()); 
		(yyval.Symbol)->setDeclarationType("float "); 	
		(yyval.Symbol)->setName((yyvsp[0].Symbol)->getName()); 
				
	}
#line 2760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 898 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"factor->variable INCOP");
		Util::parserLog((yyvsp[-1].Symbol)->getName()+"++"); 
		(yyval.Symbol)->setDeclarationType((yyvsp[-1].Symbol)->getDeclarationType());
		(yyval.Symbol)->setName((yyvsp[-1].Symbol)->getName()+"++"); 
					 
	}
#line 2773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 906 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"factor->variable DECOP");
		Util::parserLog((yyvsp[-1].Symbol)->getName()+"--");
		(yyval.Symbol)->setDeclarationType((yyvsp[-1].Symbol)->getDeclarationType()); 
		(yyval.Symbol)->setName((yyvsp[-1].Symbol)->getName()+"--"); 
					 
	}
#line 2786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 916 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"argument_list->arguments");
		Util::parserLog((yyvsp[0].Symbol)->getName());
		(yyval.Symbol)->setName((yyvsp[0].Symbol)->getName());
	}
#line 2797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 922 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"argument_list-> ");
		(yyval.Symbol)->setName("");}
#line 2806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 928 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"arguments->arguments COMMA logic_expression ");
		Util::parserLog((yyvsp[-2].Symbol)->getName()+","+(yyvsp[0].Symbol)->getName());
		argList.push_back((yyvsp[0].Symbol));
		(yyval.Symbol)->setName((yyvsp[-2].Symbol)->getName()+","+(yyvsp[0].Symbol)->getName());
	}
#line 2818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 935 "1605103.y" /* yacc.c:1646  */
    {
		(yyval.Symbol)=new SymbolInfo();
		Util::parserLog(lines,"arguments->logic_expression");
		Util::parserLog((yyvsp[0].Symbol)->getName()); 
		argList.push_back(new SymbolInfo((yyvsp[0].Symbol)->getName(),(yyvsp[0].Symbol)->getType(),(yyvsp[0].Symbol)->getDeclarationType()));
		// cout<<$<Symbol>1->getDeclarationType()<<endl;
		(yyval.Symbol)->setName((yyvsp[0].Symbol)->getName());					
	}
#line 2831 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2835 "y.tab.c" /* yacc.c:1646  */
        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
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
                                        yyesa, &yyes, &yyes_capacity, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
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

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

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

#if 1
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
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 944 "1605103.y" /* yacc.c:1906  */


void endingRoutine(){
	for(int i=0;i < possiblyUndefinedFunctions.size();i++){
		if(!symbolTable->lookUp(possiblyUndefinedFunctions[i].first)->getFunction()->isDefined()){
			Util::appendLogError(possiblyUndefinedFunctions[i].second,"Calling Undefined Function "+possiblyUndefinedFunctions[i].first,PARSER);
			errors++;
		}	
	}
	possiblyUndefinedFunctions.clear();
}
void test(string fileName){
	lines = 1;
	errors = 0;
	symbolTable = new SymbolTable(100);
	if((fp=fopen(fileName.c_str(),"r"))==NULL)
	{
		printf("Cannot Open Input File.\n");
	}
	yyin=fp;
	cout<<fileName<<endl;
	Util::parserLog("\n\n^^^^^^^^^^^Parsing "+fileName+"^^^^^^^^^^^\n\n");
	Util::appendLogError("\n\n^^^^^^^^^^^Parsing "+fileName+"^^^^^^^^^^^\n\n",PARSER);
	yyparse();
	endingRoutine();
	Util::parserLog("Final SymbolTable : ");
	symbolTable->printAllScopeTables();
	if(isParsingSuccessful){
		Util::parserLog("Total Lines :"+to_string(lines));
		Util::parserLog("Total Errors :"+to_string(errors));
		cout<<"Total Lines :"<<lines<<endl;
		cout<<"Total Errors :"<<errors<<endl;
		Util::appendLogError("\nTotal Errors :"+to_string(errors)+'\n',PARSER);
	}
	else isParsingSuccessful = true;
	fclose(fp);
	Util::parserLog("\n\n^^^^^^^^^^^Finished Parsing "+fileName+"^^^^^^^^^^^\n\n");
	
	
}

int main(int argc,char *argv[])
{
	Util::clearFiles();
	
	int i = 1;
	while(*(argv + i)!=nullptr){
		test(argv[i]);
		i++;
	}

	
	return 0;
}


