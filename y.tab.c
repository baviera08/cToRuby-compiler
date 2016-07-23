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
#line 1 "sintactico.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>

/*Estructura de datos para links en lookahead cadena de símbolos*/
struct symrec
{
    char *name;             /* nombre del símbolo */
    int type;               /* tipo del símbolo */
    double value;           /* valor de lookahead variable */
    int function;
    struct symrec *next;    /* puntero al próximo registro */
};

typedef struct symrec symrec;

/*Tabla de símbolos*/
extern symrec *sym_table;

symrec *putsym ();
symrec *getsym ();

extern int yylex(void);
// Archivo fuente a ser traducido
extern FILE *yyin;
// Reconoce tokens del input y es retornado al parser
extern char *yytext;
// Numero de linea del codigo fuente
extern int yylineno;

// Archivo objeto con la
FILE *yysalida;
symrec *sym_table = (symrec *)0;
symrec *s;
symrec *symtable_set_type;

int esFuncion=0;
// Bandera de error
int error=0;
int global = 0;
int ind = 0;
int noParams = 0;
int funcDef = 0;
int guardarExpresion = 0;
int bandFunc = 0;

void indentar(){
    int tmpInd = ind;
    while (tmpInd > 0){
        fprintf(yysalida, "\t");
        tmpInd -= 1;
    }
}


#line 122 "y.tab.c" /* yacc.c:339  */

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
    PTR_OP = 258,
    INC_OP = 259,
    DEC_OP = 260,
    LEFT_OP = 261,
    RIGHT_OP = 262,
    LE_OP = 263,
    GE_OP = 264,
    EQ_OP = 265,
    NE_OP = 266,
    AND_OP = 267,
    OR_OP = 268,
    MUL_ASSIGN = 269,
    DIV_ASSIGN = 270,
    MOD_ASSIGN = 271,
    ADD_ASSIGN = 272,
    SUB_ASSIGN = 273,
    LEFT_ASSIGN = 274,
    RIGHT_ASSIGN = 275,
    AND_ASSIGN = 276,
    XOR_ASSIGN = 277,
    OR_ASSIGN = 278,
    TYPE_NAME = 279,
    CASE = 280,
    DEFAULT = 281,
    IF = 282,
    ELSE = 283,
    SWITCH = 284,
    WHILE = 285,
    DO = 286,
    FOR = 287,
    CONTINUE = 288,
    BREAK = 289,
    RETURN = 290,
    IDENTIFIER = 291,
    CONSTANT = 292,
    SIZEOF = 293,
    CHAR = 294,
    SHORT = 295,
    INT = 296,
    LONG = 297,
    SIGNED = 298,
    UNSIGNED = 299,
    FLOAT = 300,
    DOUBLE = 301,
    CONST = 302,
    VOID = 303,
    IF_AUX = 304
  };
#endif
/* Tokens.  */
#define PTR_OP 258
#define INC_OP 259
#define DEC_OP 260
#define LEFT_OP 261
#define RIGHT_OP 262
#define LE_OP 263
#define GE_OP 264
#define EQ_OP 265
#define NE_OP 266
#define AND_OP 267
#define OR_OP 268
#define MUL_ASSIGN 269
#define DIV_ASSIGN 270
#define MOD_ASSIGN 271
#define ADD_ASSIGN 272
#define SUB_ASSIGN 273
#define LEFT_ASSIGN 274
#define RIGHT_ASSIGN 275
#define AND_ASSIGN 276
#define XOR_ASSIGN 277
#define OR_ASSIGN 278
#define TYPE_NAME 279
#define CASE 280
#define DEFAULT 281
#define IF 282
#define ELSE 283
#define SWITCH 284
#define WHILE 285
#define DO 286
#define FOR 287
#define CONTINUE 288
#define BREAK 289
#define RETURN 290
#define IDENTIFIER 291
#define CONSTANT 292
#define SIZEOF 293
#define CHAR 294
#define SHORT 295
#define INT 296
#define LONG 297
#define SIGNED 298
#define UNSIGNED 299
#define FLOAT 300
#define DOUBLE 301
#define CONST 302
#define VOID 303
#define IF_AUX 304

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 58 "sintactico.y" /* yacc.c:355  */

	int tipo;
	double val;
	char *nombre;
	struct symrec *tptr;

#line 267 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 284 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   743

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  100
/* YYNRULES -- Number of rules.  */
#define YYNRULES  217
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  322

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,     2,     2,    58,    51,     2,
      69,    70,    52,    53,    50,    54,     2,    57,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    64,    66,
      59,    65,    60,    63,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    67,     2,    68,    61,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    71,    62,    72,    55,     2,     2,     2,
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
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    90,    90,   103,   104,   109,   110,   111,   112,   113,
     114,   118,   119,   119,   123,   125,   125,   126,   126,   127,
     128,   133,   134,   135,   136,   137,   138,   142,   148,   149,
     150,   151,   152,   153,   154,   159,   160,   161,   162,   163,
     167,   168,   168,   169,   169,   174,   175,   176,   177,   178,
     179,   180,   185,   186,   187,   188,   189,   193,   194,   194,
     198,   199,   199,   203,   204,   204,   209,   210,   210,   211,
     211,   216,   217,   217,   218,   218,   223,   224,   224,   224,
     228,   229,   230,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   248,   249,   249,   253,   257,   269,
     274,   275,   276,   277,   281,   294,   294,   303,   307,   308,
     313,   314,   315,   316,   317,   318,   319,   320,   324,   328,
     329,   330,   331,   333,   334,   338,   339,   340,   344,   345,
     349,   350,   354,   358,   359,   363,   363,   368,   369,   373,
     374,   375,   379,   383,   384,   385,   386,   387,   388,   392,
     392,   392,   393,   393,   393,   396,   410,   419,   422,   424,
     427,   430,   435,   439,   443,   447,   451,   455,   459,   463,
     467,   471,   475,   479,   480,   481,   482,   483,   487,   488,
     492,   493,   497,   498,   499,   503,   503,   504,   506,   510,
     511,   512,   512,   514,   517,   517,   518,   519,   520,   521,
     525,   525,   526,   526,   527,   527,   528,   528,   529,   530,
     534,   535,   539,   539,   553,   554,   558,   559
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO",
  "FOR", "CONTINUE", "BREAK", "RETURN", "IDENTIFIER", "CONSTANT", "SIZEOF",
  "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE",
  "CONST", "VOID", "IF_AUX", "','", "'&'", "'*'", "'+'", "'-'", "'~'",
  "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='",
  "';'", "'['", "']'", "'('", "')'", "'{'", "'}'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "$@1", "unary_expression", "$@2", "$@3", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "$@4", "$@5", "relational_expression",
  "equality_expression", "and_expression", "$@6",
  "exclusive_or_expression", "$@7", "inclusive_or_expression", "$@8",
  "logical_and_expression", "$@9", "$@10", "logical_or_expression", "$@11",
  "$@12", "conditional_expression", "$@13", "$@14",
  "assignment_expression", "assignment_operator", "expression", "$@15",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "$@16", "init_declarator", "type_specifier",
  "declarator", "direct_declarator", "init_direct_declarator",
  "array_list", "array_declaration", "parameter_type_list",
  "parameter_list", "parameter_declaration", "$@17", "initializer_list",
  "initializer", "type_qualifier", "statement", "labeled_statement",
  "$@18", "$@19", "$@20", "$@21", "open_curly", "close_curly",
  "semi_colon", "open_parenthesis", "close_parenthesis", "open_bracket",
  "close_bracket", "mod", "mult", "div", "add", "sub", "l_op", "g_op",
  "le_op", "ge_op", "eq_op", "ne_op", "compound_statement",
  "declaration_list", "statement_list", "expression_statement",
  "else_statement", "$@22", "if", "selection_statement", "$@23", "while",
  "iteration_statement", "$@24", "jump_statement", "$@25", "$@26", "$@27",
  "$@28", "external_declaration", "function_definition", "$@29",
  "translation_unit", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
      44,    38,    42,    43,    45,   126,    33,    47,    37,    60,
      62,    94,   124,    63,    58,    61,    59,    91,    93,    40,
      41,   123,   125
};
# endif

#define YYPACT_NINF -176

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-176)))

#define YYTABLE_NINF -205

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     685,    66,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,    -1,   205,   672,  -176,   205,  -176,  -176,   662,
      -9,   -32,   -14,  -176,   107,     7,  -176,   -24,     0,  -176,
     232,  -176,    -1,   288,  -176,   672,  -176,  -176,  -176,    12,
     117,  -176,    27,    50,  -176,   205,    23,  -176,   133,    41,
    -176,    20,  -176,  -176,     4,  -176,  -176,   671,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,   400,    45,    30,    32,   102,
    -176,  -176,   165,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,    21,   671,   165,  -176,    79,    75,   137,
      42,   180,    81,   110,   113,   171,    14,  -176,  -176,    16,
    -176,  -176,  -176,  -176,    57,  -176,   288,   344,  -176,    15,
    -176,    17,  -176,  -176,  -176,  -176,   139,  -176,  -176,   163,
     147,  -176,  -176,  -176,  -176,  -176,  -176,     4,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
      57,   165,   165,   165,   145,    45,   175,   407,  -176,   158,
    -176,   158,   158,    57,  -176,  -176,  -176,  -176,   141,    57,
      57,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,   227,
     228,  -176,  -176,  -176,  -176,    -6,  -176,   344,  -176,  -176,
      57,    57,    57,    57,  -176,  -176,  -176,  -176,    -5,  -176,
    -176,  -176,  -176,  -176,   167,  -176,    57,    45,   407,  -176,
    -176,  -176,   -20,  -176,    13,  -176,  -176,   -31,  -176,   445,
     473,   483,   511,   539,   165,   165,   165,   165,   549,   577,
     605,   615,   165,   165,   165,   165,   237,   165,   238,    57,
      57,  -176,  -176,    -6,    -6,    29,    55,     4,  -176,  -176,
     400,    -6,    57,   141,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,    79,  -176,    79,    75,
      75,   137,   137,  -176,   137,  -176,   137,  -176,    42,  -176,
      42,   180,    81,   110,   113,  -176,   171,  -176,    39,  -176,
     400,   400,   400,  -176,  -176,   400,  -176,   400,    -6,    -6,
     400,    57,  -176,  -176,   212,  -176,   400,  -176,  -176,   158,
     400,  -176,  -176,   165,  -176,  -176,  -176,  -176,  -176,  -176,
     400,  -176
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   119,   110,   111,   112,   115,   116,   113,   114,   142,
     117,   211,     0,   100,     0,   118,   102,   216,   210,     0,
       0,   135,   121,   128,   119,     0,   104,   108,     0,   101,
       0,   178,     0,     0,   215,     0,   103,     1,   217,     0,
     120,   123,     0,   132,   133,     0,     0,   129,   121,   128,
      99,     0,    98,   212,     0,   177,   108,     0,    15,    17,
     149,   152,   188,   191,   193,     0,     0,     0,     0,   206,
       2,     3,     0,    21,    22,    23,    24,    25,    26,   157,
     158,   156,     5,    14,    27,     0,    28,    35,    40,    45,
      52,    57,    60,    63,    66,    71,    76,    80,    94,     0,
     180,   143,   173,   182,     0,   144,     0,     0,   145,     0,
     146,     0,   147,   148,   179,   214,   122,   124,   135,     0,
       0,   130,   107,   105,   213,   139,   140,     0,   109,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    83,
       0,     0,     0,     0,     0,     0,     0,     0,   208,     0,
     209,     0,     0,     0,    20,     9,    10,   160,     0,     0,
       0,    27,    19,   163,   164,   162,   165,   166,    41,    43,
     169,   170,   167,   168,   171,   172,    58,    61,    64,    67,
      72,    77,   184,    95,   183,     0,   175,     0,   181,   174,
       0,     0,     0,     0,   134,   136,   131,   106,     0,   137,
      82,    16,    18,    97,     0,   153,     0,     0,     0,   201,
     203,   205,     0,   159,     0,    11,     7,     0,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,   176,     0,     0,     0,     0,     0,   141,   150,
       0,     0,     0,     0,   207,    12,     8,   161,     6,    30,
      29,    32,    31,    34,    33,    38,    36,    39,    37,    42,
      44,    50,    51,    48,    46,    49,    47,    55,    53,    56,
      54,    59,    62,    65,    68,    70,    73,    75,     0,    96,
       0,     0,     0,   194,   138,     0,   154,     0,     0,     0,
       0,     0,    78,   190,   187,   196,     0,   151,   192,     0,
       0,   198,    13,     0,   185,   189,   195,   197,   199,    79,
       0,   186
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,  -176,  -176,  -176,  -176,   -71,  -176,  -176,  -176,   -80,
     -15,   -11,   -40,  -176,  -176,    -8,    11,    48,  -176,    22,
    -176,    25,  -176,    35,  -176,  -176,  -176,  -176,  -176,  -140,
    -176,  -176,  -136,   170,   -72,  -176,  -176,     1,   372,  -176,
    -176,   231,  -176,    -3,  -176,  -176,   266,    19,  -176,  -176,
     173,  -176,  -176,  -120,  -176,   -65,  -176,  -176,  -176,  -176,
    -176,  -176,   -95,   -97,   -60,  -175,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,   103,
     261,   189,  -134,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,   277,  -176,  -176,  -176
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    82,    83,   214,   301,    84,   141,   142,    85,    86,
      87,    88,    89,   224,   225,    90,    91,    92,   232,    93,
     233,    94,   234,    95,   235,   236,    96,   237,   238,    97,
     239,   313,    98,   140,    99,   240,   204,    11,    32,    25,
     197,    26,    13,    14,    15,    28,    22,    47,    42,    43,
      44,    45,   198,   128,    16,   100,   101,   143,   295,   144,
     250,    33,   102,   103,   104,   216,   159,   258,   221,   219,
     220,   222,   223,   228,   229,   226,   227,   230,   231,   105,
      35,   107,   108,   315,   320,   109,   110,   145,   111,   112,
     306,   113,   149,   151,   152,   153,    17,    18,   124,    19
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     146,   154,   184,   203,   200,   162,   147,   199,    50,    27,
     241,   186,   189,   208,   161,    31,   190,   182,   192,   183,
      23,   122,   215,   158,   218,   155,   156,   180,    39,    56,
     183,   148,   185,   150,    31,    24,   114,   257,    41,   256,
     125,   126,   188,    49,   183,   247,    79,    30,    56,   191,
     170,   171,   209,    46,   210,   211,    24,    51,    57,    40,
     120,    58,    59,   255,   213,    54,   183,   248,   290,   291,
     201,   202,   161,    52,   253,   127,   297,   181,   300,   183,
     116,   212,    79,   213,    80,   206,   193,   217,   157,   183,
      80,   121,   242,    70,    71,    72,  -200,   117,  -202,   292,
     118,   172,   173,   302,   289,   183,  -126,   114,    73,    74,
      75,    76,    77,    78,    80,   254,   195,    34,   243,   244,
     245,   246,   188,   309,   310,   293,    80,   294,   166,   167,
      53,   163,   176,    20,   251,    21,   164,   165,   115,   260,
     262,   264,    57,   168,   169,    58,    59,   252,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   312,   161,   288,  -204,    58,
      59,   177,  -125,   319,    20,   178,    21,    70,    71,    72,
     298,   299,  -130,   179,  -130,   296,   271,   272,   274,   276,
     174,   175,    73,    74,    75,    76,    77,    78,  -127,     1,
      46,    70,    71,    72,  -131,   207,  -131,   266,   268,   205,
      80,   213,   317,   269,   270,   196,    73,    74,    75,    76,
      77,    78,   278,   280,    79,   303,   304,   305,   -69,   -74,
     307,   249,   308,    55,    80,   311,  -155,  -155,   285,   287,
     314,   316,   161,   281,     2,   318,     3,     4,     5,     6,
       7,     8,     9,    10,   160,   321,   283,  -155,  -155,  -155,
     284,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,   286,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,   282,   123,  -155,  -155,  -155,  -155,  -155,  -155,    57,
      48,   194,    58,    59,   106,   187,    38,     0,  -155,     0,
       0,  -155,     0,  -155,  -155,     0,     0,     0,     0,     0,
       0,     0,     0,    60,    61,    62,     0,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     2,     0,     3,
       4,     5,     6,     7,     8,     9,    10,     0,     0,    73,
      74,    75,    76,    77,    78,    57,     0,     0,    58,    59,
       0,     0,     0,     0,    79,     0,     0,    80,     0,    30,
      81,     0,     0,     0,     0,     0,     0,     0,     0,    60,
      61,    62,    12,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    29,     0,     0,    36,     0,
       0,    12,     0,     0,     0,    73,    74,    75,    76,    77,
      78,    57,     0,     0,    58,    59,     0,     0,    57,     0,
      79,    58,    59,    80,     0,    30,    81,   119,     0,     0,
       0,     0,     0,     0,     0,    60,    61,    62,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,    70,    71,    72,   259,     0,     0,    58,
      59,    73,    74,    75,    76,    77,    78,     0,    73,    74,
      75,    76,    77,    78,     0,     0,    79,     0,     0,    80,
       0,    30,     0,    79,   261,     0,    80,    58,    59,     0,
       0,    70,    71,    72,   263,     0,     0,    58,    59,     0,
       0,     0,     0,     0,     0,     0,    73,    74,    75,    76,
      77,    78,     0,     0,     0,     0,     0,     0,     0,    70,
      71,    72,   265,     0,    80,    58,    59,     0,     0,    70,
      71,    72,     0,     0,    73,    74,    75,    76,    77,    78,
       0,     0,     0,     0,    73,    74,    75,    76,    77,    78,
     267,     0,    80,    58,    59,     0,     0,    70,    71,    72,
     273,     0,    80,    58,    59,     0,     0,     0,     0,     0,
       0,     0,    73,    74,    75,    76,    77,    78,     0,     0,
       0,     0,     0,     0,     0,    70,    71,    72,   275,     0,
      80,    58,    59,     0,     0,    70,    71,    72,     0,     0,
      73,    74,    75,    76,    77,    78,     0,     0,     0,     0,
      73,    74,    75,    76,    77,    78,   277,     0,    80,    58,
      59,     0,     0,    70,    71,    72,   279,     0,    80,    58,
      59,     0,     0,     0,     0,     0,     0,     0,    73,    74,
      75,    76,    77,    78,     0,     0,     0,     0,     0,     0,
       0,    70,    71,    72,     0,     0,    80,     0,     0,     0,
       0,    70,    71,    72,     0,     0,    73,    74,    75,    76,
      77,    78,    37,     0,     0,     0,    73,    74,    75,    76,
      77,    78,     0,     0,    80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,     0,     0,     0,     1,     0,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,     1,     0,     0,     2,     0,     3,     4,     5,     6,
       7,     8,     9,    10,     0,     0,   139,     0,     0,     0,
       0,     0,     0,    30
};

static const yytype_int16 yycheck[] =
{
      65,    72,    99,   143,   140,    85,    66,   127,     1,    12,
     185,   106,   107,   147,    85,    14,     1,     1,     1,    50,
       1,     1,   158,    83,   160,     4,     5,    13,    37,    32,
      50,     1,   104,     1,    33,    36,    35,    68,    70,   214,
      36,    37,   107,    24,    50,    50,    66,    71,    51,   109,
       8,     9,   149,    67,   151,   152,    36,    50,     1,    68,
      37,     4,     5,    50,    70,    65,    50,    72,   243,   244,
     141,   142,   143,    66,   208,    71,   251,    63,   253,    50,
      68,   153,    66,    70,    69,   145,    69,   159,    67,    50,
      69,    68,   187,    36,    37,    38,    66,    70,    66,    70,
      50,    59,    60,    64,   240,    50,    65,   106,    51,    52,
      53,    54,    55,    56,    69,   212,   119,    14,   190,   191,
     192,   193,   187,   298,   299,    70,    69,   247,    53,    54,
      27,    52,    51,    67,   206,    69,    57,    58,    35,   219,
     220,   221,     1,     6,     7,     4,     5,   207,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   301,   237,   239,    66,     4,
       5,    61,    65,   313,    67,    62,    69,    36,    37,    38,
     252,   253,    65,    12,    67,   250,   226,   227,   228,   229,
      10,    11,    51,    52,    53,    54,    55,    56,    65,    36,
      67,    36,    37,    38,    65,    30,    67,   222,   223,    64,
      69,    70,   309,   224,   225,    68,    51,    52,    53,    54,
      55,    56,   230,   231,    66,   290,   291,   292,     1,     1,
     295,    64,   297,     1,    69,   300,     4,     5,     1,     1,
      28,   306,   313,   232,    39,   310,    41,    42,    43,    44,
      45,    46,    47,    48,    84,   320,   234,    25,    26,    27,
     235,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,   237,    41,    42,    43,    44,    45,    46,    47,
      48,   233,    51,    51,    52,    53,    54,    55,    56,     1,
      24,   118,     4,     5,    33,   106,    19,    -1,    66,    -1,
      -1,    69,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,    51,
      52,    53,    54,    55,    56,     1,    -1,    -1,     4,     5,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    69,    -1,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,     0,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    13,    -1,    -1,    16,    -1,
      -1,    19,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      56,     1,    -1,    -1,     4,     5,    -1,    -1,     1,    -1,
      66,     4,     5,    69,    -1,    71,    72,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    36,    37,    38,     1,    -1,    -1,     4,
       5,    51,    52,    53,    54,    55,    56,    -1,    51,    52,
      53,    54,    55,    56,    -1,    -1,    66,    -1,    -1,    69,
      -1,    71,    -1,    66,     1,    -1,    69,     4,     5,    -1,
      -1,    36,    37,    38,     1,    -1,    -1,     4,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      37,    38,     1,    -1,    69,     4,     5,    -1,    -1,    36,
      37,    38,    -1,    -1,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    56,
       1,    -1,    69,     4,     5,    -1,    -1,    36,    37,    38,
       1,    -1,    69,     4,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    37,    38,     1,    -1,
      69,     4,     5,    -1,    -1,    36,    37,    38,    -1,    -1,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      51,    52,    53,    54,    55,    56,     1,    -1,    69,     4,
       5,    -1,    -1,    36,    37,    38,     1,    -1,    69,     4,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    37,    38,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    36,    37,    38,    -1,    -1,    51,    52,    53,    54,
      55,    56,     0,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    56,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    36,    -1,
      -1,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    36,    -1,    -1,    39,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    36,    39,    41,    42,    43,    44,    45,    46,    47,
      48,   110,   111,   115,   116,   117,   127,   169,   170,   172,
      67,    69,   119,   120,    36,   112,   114,   116,   118,   111,
      71,   110,   111,   134,   152,   153,   111,     0,   169,    37,
      68,    70,   121,   122,   123,   124,    67,   120,   119,   120,
       1,    50,    66,   152,    65,     1,   116,     1,     4,     5,
      25,    26,    27,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    51,    52,    53,    54,    55,    56,    66,
      69,    72,    74,    75,    78,    81,    82,    83,    84,    85,
      88,    89,    90,    92,    94,    96,    99,   102,   105,   107,
     128,   129,   135,   136,   137,   152,   153,   154,   155,   158,
     159,   161,   162,   164,   110,   152,    68,    70,    50,   111,
      37,    68,     1,   114,   171,    36,    37,    71,   126,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    65,
     106,    79,    80,   130,   132,   160,   128,   137,     1,   165,
       1,   166,   167,   168,    78,     4,     5,    67,   137,   139,
     106,    78,    82,    52,    57,    58,    53,    54,     6,     7,
       8,     9,    59,    60,    10,    11,    51,    61,    62,    12,
      13,    63,     1,    50,   136,   107,   135,   154,   128,   135,
       1,   137,     1,    69,   123,   116,    68,   113,   125,   126,
     105,    78,    78,   102,   109,    64,   137,    30,   155,   136,
     136,   136,   107,    70,    76,   105,   138,   107,   105,   142,
     143,   141,   144,   145,    86,    87,   148,   149,   146,   147,
     150,   151,    91,    93,    95,    97,    98,   100,   101,   103,
     108,   138,   135,   107,   107,   107,   107,    50,    72,    64,
     133,   107,   137,   155,   136,    50,   138,    68,   140,     1,
      82,     1,    82,     1,    82,     1,    83,     1,    83,    84,
      84,    85,    85,     1,    85,     1,    85,     1,    88,     1,
      88,    89,    90,    92,    94,     1,    96,     1,   107,   105,
     138,   138,    70,    70,   126,   131,   128,   138,   107,   107,
     138,    77,    64,   128,   128,   128,   163,   128,   128,   138,
     138,   128,   105,   104,    28,   156,   128,   136,   128,   102,
     157,   128
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    74,    74,    75,    75,    75,    75,    75,
      75,    76,    77,    76,    78,    79,    78,    80,    78,    78,
      78,    81,    81,    81,    81,    81,    81,    82,    83,    83,
      83,    83,    83,    83,    83,    84,    84,    84,    84,    84,
      85,    86,    85,    87,    85,    88,    88,    88,    88,    88,
      88,    88,    89,    89,    89,    89,    89,    90,    91,    90,
      92,    93,    92,    94,    95,    94,    96,    97,    96,    98,
      96,    99,   100,    99,   101,    99,   102,   103,   104,   102,
     105,   105,   105,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   107,   108,   107,   109,   110,   110,
     111,   111,   111,   111,   112,   113,   112,   112,   114,   114,
     115,   115,   115,   115,   115,   115,   115,   115,   116,   117,
     117,   117,   117,   117,   117,   118,   118,   118,   119,   119,
     120,   120,   121,   122,   122,   124,   123,   125,   125,   126,
     126,   126,   127,   128,   128,   128,   128,   128,   128,   130,
     131,   129,   132,   133,   129,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   152,   152,   152,   152,   153,   153,
     154,   154,   155,   155,   155,   157,   156,   156,   158,   159,
     159,   160,   159,   161,   163,   162,   162,   162,   162,   162,
     165,   164,   166,   164,   167,   164,   168,   164,   164,   164,
     169,   169,   171,   170,   170,   170,   172,   172
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     4,     3,     4,     2,
       2,     1,     0,     4,     1,     0,     3,     0,     3,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     1,     4,     4,     4,     4,
       1,     0,     4,     0,     4,     1,     4,     4,     4,     4,
       4,     4,     1,     4,     4,     4,     4,     1,     0,     4,
       1,     0,     4,     1,     0,     4,     1,     0,     4,     0,
       4,     1,     0,     4,     0,     4,     1,     0,     0,     7,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     4,     1,     3,     3,
       1,     2,     1,     2,     1,     0,     4,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     4,     3,     4,     1,     2,     2,     1,     2,
       2,     3,     1,     1,     3,     0,     3,     1,     3,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     0,
       0,     6,     0,     0,     5,     1,     1,     1,     1,     1,
       1,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     3,     3,     4,     2,     1,     2,
       1,     2,     1,     2,     2,     0,     3,     0,     1,     6,
       5,     0,     6,     1,     0,     6,     5,     7,     6,     7,
       0,     3,     0,     3,     0,     3,     0,     4,     2,     2,
       1,     1,     0,     4,     3,     2,     1,     2
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
#line 90 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, "%s", yytext); }
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 103 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, "%s", yytext); }
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 113 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, "+=1"); }
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 114 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, "-=1"); }
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 119 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, ", "); }
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 125 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, "+=1"); }
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 126 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, "-=1"); }
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 133 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " & "); }
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 134 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " * "); }
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 135 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " + "); }
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 136 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " - "); }
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 137 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " ~ "); }
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 138 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " ! "); }
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 150 "sintactico.y" /* yacc.c:1646  */
    { yyerrok;}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 152 "sintactico.y" /* yacc.c:1646  */
    { yyerrok;}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 154 "sintactico.y" /* yacc.c:1646  */
    { yyerrok;}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 162 "sintactico.y" /* yacc.c:1646  */
    { yyerrok;}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 163 "sintactico.y" /* yacc.c:1646  */
    { yyerrok;}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 168 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " << "); }
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 169 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " >> "); }
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 177 "sintactico.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 178 "sintactico.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 188 "sintactico.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 189 "sintactico.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 194 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " & "); }
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 199 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " ^ "); }
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 204 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " | "); }
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 210 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " && "); }
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 211 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " && "); }
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 211 "sintactico.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 217 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " || "); }
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 218 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " || "); }
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 218 "sintactico.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 224 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " ? "); }
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 224 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " : "); }
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 230 "sintactico.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 234 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " = "); }
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 235 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " *= "); }
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 236 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " /= "); }
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 237 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " %%= "); }
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 238 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " += "); }
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 239 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " -= "); }
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 240 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " <<= "); }
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 241 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " >>= "); }
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 242 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " &= "); }
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 243 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " ^= "); }
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 244 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, " |= "); }
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 249 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, ", "); }
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 258 "sintactico.y" /* yacc.c:1646  */
    {
		for(symtable_set_type=sym_table; symtable_set_type!=(symrec *)0; symtable_set_type=(symrec *)symtable_set_type->next)
		{
			if(symtable_set_type->type==-1)
			{
				symtable_set_type->type=(yyvsp[-2].tipo);
			}
		}
		//fprintf(yysalida, "\n");

	}
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 269 "sintactico.y" /* yacc.c:1646  */
    { yyerror("Falta un \";\". "); yyerrok; }
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 281 "sintactico.y" /* yacc.c:1646  */
    {

      s = getsym((yyvsp[0].nombre));
    	if(s==(symrec *)0){
    		s = putsym((yyvsp[0].nombre));
    	}
    	else{
    		yyerror("Variable declarada anteriormente.");
    		yyerrok;
    	}


  }
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 294 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, "\n"); indentar(); }
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 295 "sintactico.y" /* yacc.c:1646  */
    {s = getsym((yyvsp[-1].nombre));
      if(s==(symrec *)0){
        s = putsym((yyvsp[-1].nombre));
      }else{
        yyerror("Variable declarada anteriormente.");
        yyerrok;
      }
    }
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 303 "sintactico.y" /* yacc.c:1646  */
    {yyerror("Error. se recibe una ',' de mas.");}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 308 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, "%s", (yyvsp[0].nombre)); }
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 328 "sintactico.y" /* yacc.c:1646  */
    { if (!esFuncion) fprintf(yysalida, "", (yyvsp[0].nombre)); else esFuncion = 0; }
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 329 "sintactico.y" /* yacc.c:1646  */
    { if (!esFuncion) fprintf(yysalida, " %s = [] \n", (yyvsp[-2].nombre)); else esFuncion = 0; }
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 330 "sintactico.y" /* yacc.c:1646  */
    { if (!esFuncion) fprintf(yysalida, "%s = [%s] \n", (yyvsp[-1].nombre), (yyvsp[0].nombre)); else esFuncion = 0; indentar();}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 331 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida, "%s = Array.new(%s) \n",(yyvsp[-3].nombre),(yyvsp[-1].nombre));	indentar();}
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 333 "sintactico.y" /* yacc.c:1646  */
    { if (!esFuncion) fprintf(yysalida, "def %s()", (yyvsp[-2].nombre)); else esFuncion = 0; }
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 334 "sintactico.y" /* yacc.c:1646  */
    { if (!esFuncion) fprintf(yysalida, "def %s(%s)", (yyvsp[-3].nombre), (yyvsp[-1].nombre)); else esFuncion = 0; }
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 338 "sintactico.y" /* yacc.c:1646  */
    { if (!esFuncion) fprintf(yysalida, "%s = ", (yyvsp[0].nombre)); else esFuncion = 0; }
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 339 "sintactico.y" /* yacc.c:1646  */
    { if (!esFuncion) fprintf(yysalida, "%s = ", (yyvsp[-1].nombre)); else esFuncion = 0;	indentar(); }
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 340 "sintactico.y" /* yacc.c:1646  */
    { if (!esFuncion) fprintf(yysalida, "%s = ", (yyvsp[-1].nombre)); else esFuncion = 0; }
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 345 "sintactico.y" /* yacc.c:1646  */
    { asprintf(&(yyval.nombre), "%s,%s", (yyvsp[-1].nombre), (yyvsp[0].nombre)); }
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 349 "sintactico.y" /* yacc.c:1646  */
    { asprintf(&(yyval.nombre), "[] "); indentar(); }
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 350 "sintactico.y" /* yacc.c:1646  */
    { asprintf(&(yyval.nombre), "[%s] ",(yyvsp[-1].nombre)); indentar();}
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 359 "sintactico.y" /* yacc.c:1646  */
    { asprintf(&(yyval.nombre), "%s, %s", (yyvsp[-2].nombre), (yyvsp[0].nombre)); }
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 363 "sintactico.y" /* yacc.c:1646  */
    { esFuncion = 1; }
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 363 "sintactico.y" /* yacc.c:1646  */
    { (yyval.nombre) = (yyvsp[0].nombre); }
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 369 "sintactico.y" /* yacc.c:1646  */
    { asprintf(&(yyval.nombre), "%s, %s", (yyvsp[-2].nombre), (yyvsp[0].nombre)); }
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 375 "sintactico.y" /* yacc.c:1646  */
    { asprintf(&(yyval.nombre), "[%s] \n", (yyvsp[-1].nombre)); }
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 379 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, "const "); }
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 392 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, "case "); }
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 392 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, ": "); }
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 393 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, "default "); }
#line 2197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 393 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, ": "); }
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 396 "sintactico.y" /* yacc.c:1646  */
    {
  		// if(global && scopes->prev == NULL)
  		// 	printVars();
  		//vars = NULL;

  		fprintf(yysalida,"\n");
  		ind += 1; indentar();
  //		pushScope(crearScope());
  //		agregarVarsAScope();
  		funcDef = 0;
  //		parametros = NULL;
  	}
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 410 "sintactico.y" /* yacc.c:1646  */
    {
  		// printVars();
  		fprintf(yysalida,"\n");
  		ind -= 1; indentar();
//      fprintf(yysalida,"end \n");
//      indentar();
  	}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 419 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida,"\n"); indentar();}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 422 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida,"(");}
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 424 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida,")");}
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 428 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida, "[");}
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 431 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida, "]");}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 435 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida," %% ");}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 439 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida," * ");}
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 443 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida," / ");}
#line 2280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 447 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida," + ");}
#line 2286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 451 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida," - ");}
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 455 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida," < ");}
#line 2298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 459 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida," > ");}
#line 2304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 463 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida," <= ");}
#line 2310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 467 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida," >= ");}
#line 2316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 471 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida," == ");}
#line 2322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 475 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida," != ");}
#line 2328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 483 "sintactico.y" /* yacc.c:1646  */
    { yyerror("Falta un \"}\"."); yyerrok; }
#line 2334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 499 "sintactico.y" /* yacc.c:1646  */
    {yyerror("Falta un \";\"  en la sentencia.");yyerrok;}
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 503 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, "else"); }
#line 2346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 506 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida,"if");}
#line 2352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 510 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida,"end\n"); indentar(); }
#line 2358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 511 "sintactico.y" /* yacc.c:1646  */
    {yyerror("Falta un \"(\" despues de la sentencia if.");yyerrok;}
#line 2364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 512 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, "switch"); }
#line 2370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 512 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida,"end\n"); indentar();}
#line 2376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 514 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida,"while ");}
#line 2382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 517 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida," do");}
#line 2388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 517 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida,"end\n"); indentar();}
#line 2394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 518 "sintactico.y" /* yacc.c:1646  */
    {yyerror("Falta un \"(\" el while no se definio.");yyerrok;}
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 525 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, "continue"); }
#line 2406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 526 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, "break"); }
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 527 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, "return"); }
#line 2418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 528 "sintactico.y" /* yacc.c:1646  */
    { fprintf(yysalida, "return "); }
#line 2424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 529 "sintactico.y" /* yacc.c:1646  */
    { yyerror("Falta un \";\" despues de continue en la sentencia."); yyerrok; }
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 530 "sintactico.y" /* yacc.c:1646  */
    { yyerror("Falta un \";\" despues de break en la sentencia."); yyerrok;}
#line 2436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 539 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida,"end\n"); indentar();}
#line 2442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 540 "sintactico.y" /* yacc.c:1646  */
    {

		s = getsym((yyvsp[-2].nombre));
		if(s==(symrec *)0)
		{
			s = putsym((yyvsp[-2].nombre),(yyvsp[-3].tipo),1);
		}
		else
		{
			printf("Funcion declarada anteriormente.");
			yyerrok;
		}
	}
#line 2460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 553 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida,"end\n"); indentar();}
#line 2466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 554 "sintactico.y" /* yacc.c:1646  */
    {fprintf(yysalida,"end\n"); indentar();}
#line 2472 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2476 "y.tab.c" /* yacc.c:1646  */
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
#line 562 "sintactico.y" /* yacc.c:1906  */



#include <stdio.h>

yyerror(s)
char *s;
{
	error=1;
	printf("Error en la línea %d cerca de \"%s\": %s\n", yylineno, yylval.nombre, s);
}

symrec * putsym(sym_name, sym_type, b_function)
	char *sym_name;
	int sym_type;
	int b_function;
{
	//Solo para debug
	/*printf("\t%s, %d, %d\n", sym_name,
			sym_type,
			b_function);*/

	symrec *ptr;
	ptr = (symrec *) malloc(sizeof(symrec));
	ptr->name = (char *) malloc(strlen(sym_name) + 1);
	strcpy(ptr->name, sym_name);
	ptr->type = sym_type;
	ptr->value = 0; //set value to 0
	ptr->function = b_function;
	ptr->next =(struct symrec *) sym_table;
	sym_table = ptr;
	return ptr;
}
symrec * getsym(sym_name)
	char *sym_name;
{
	symrec *ptr;
	for(ptr = sym_table; ptr != (symrec*)0; ptr = (symrec *)ptr->next)
		if(strcmp(ptr->name, sym_name) == 0)
		{
			return ptr;
		}
	return 0;
}

const char *tipo_id(int tipo)
{
	switch(tipo)
	{
		case(282):
			return "CHAR";
		case(283):
			return "SHORT";
		case(284):
			return "INT";
		case(285):
			return "LONG";
		case(286):
			return "SIGNED";
		case(287):
			return "UNSIGNED";
		case(288):
			return "FLOAT";
		case(289):
			return "DOUBLE";
		case(290):
			return "CONST";
		case(291):
			return "VOID";
		default:
			return "NO";
	}
}

const char *tipo_var(int tipo)
{
	switch(tipo)
	{
		case(1):
			return "Funcion";
		case(0):
			return "Variable";
		default:
			return "NO";
	}
}

int main(int argc,char **argv)
{
	// 3 parametros, ejecutable.exe /path/to/fuente.c /path/to/objeto.rb
	if (argc<3)
	{
		printf("Faltan uno o mas parametros para su uso correcto \n EJ: %s archivo.c archivo.rb\n", argv[0]);
		return 0;
	}
	if ((yyin = fopen(argv[1],"rt")) == NULL)
	{
		printf("No se pudo abrir el archivo.\n");
                return 0;
	}
	if ((yysalida=fopen(argv[2], "w")) == NULL)
	{
		printf("No se pudo abrir el archivo.\n");
                return 0;
	}

	// Iniciar la traducción
	yyparse();

	// Cerrar los archivos de lectura y escritura
  fprintf(yysalida, "\nmain()\n");
	fclose(yyin);
	fclose(yysalida);

	if(error)
	{
		printf("\n ERRORES al realizar la traducción : %s\n", argv[1]);
	}
	else
	{
		printf("\nT SUCCESS : %s\nArchivo traducido: %s\n", argv[1], argv[2]);
	}

	return 0;
}
