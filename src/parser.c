/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/parser.y"

#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "compile.h"
#include "jv_alloc.h"
#define YYMALLOC jv_mem_alloc
#define YYFREE jv_mem_free

#line 81 "src/parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_SRC_PARSER_H_INCLUDED
# define YY_YY_SRC_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 11 "src/parser.y"

#include "locfile.h"
struct lexer_param;

#define YYLTYPE location
#define YYLLOC_DEFAULT(Loc, Rhs, N)             \
  do {                                          \
    if (N) {                                    \
      (Loc).start = YYRHSLOC(Rhs, 1).start;     \
      (Loc).end = YYRHSLOC(Rhs, N).end;         \
    } else {                                    \
      (Loc).start = YYRHSLOC(Rhs, 0).end;       \
      (Loc).end = YYRHSLOC(Rhs, 0).end;         \
    }                                           \
  } while (0)

#line 141 "src/parser.c"

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INVALID_CHARACTER = 258,
    IDENT = 259,
    FIELD = 260,
    LITERAL = 261,
    FORMAT = 262,
    REC = 263,
    SETMOD = 264,
    EQ = 265,
    NEQ = 266,
    DEFINEDOR = 267,
    AS = 268,
    DEF = 269,
    CODEF = 270,
    MODULE = 271,
    IMPORT = 272,
    INCLUDE = 273,
    IF = 274,
    THEN = 275,
    ELSE = 276,
    ELSE_IF = 277,
    REDUCE = 278,
    FOREACH = 279,
    END = 280,
    AND = 281,
    OR = 282,
    TRY = 283,
    CATCH = 284,
    LABEL = 285,
    BREAK = 286,
    LOC = 287,
    HIGHPRECPIPE = 288,
    SETPIPE = 289,
    SETPLUS = 290,
    SETMINUS = 291,
    SETMULT = 292,
    SETDIV = 293,
    SETDEFINEDOR = 294,
    LESSEQ = 295,
    GREATEREQ = 296,
    ALTERNATION = 297,
    COEXPR = 298,
    QQSTRING_START = 299,
    QQSTRING_TEXT = 300,
    QQSTRING_INTERP_START = 301,
    QQSTRING_INTERP_END = 302,
    QQSTRING_END = 303,
    FUNCDEF = 304,
    NONOPT = 305
  };
#endif
/* Tokens.  */
#define INVALID_CHARACTER 258
#define IDENT 259
#define FIELD 260
#define LITERAL 261
#define FORMAT 262
#define REC 263
#define SETMOD 264
#define EQ 265
#define NEQ 266
#define DEFINEDOR 267
#define AS 268
#define DEF 269
#define CODEF 270
#define MODULE 271
#define IMPORT 272
#define INCLUDE 273
#define IF 274
#define THEN 275
#define ELSE 276
#define ELSE_IF 277
#define REDUCE 278
#define FOREACH 279
#define END 280
#define AND 281
#define OR 282
#define TRY 283
#define CATCH 284
#define LABEL 285
#define BREAK 286
#define LOC 287
#define HIGHPRECPIPE 288
#define SETPIPE 289
#define SETPLUS 290
#define SETMINUS 291
#define SETMULT 292
#define SETDIV 293
#define SETDEFINEDOR 294
#define LESSEQ 295
#define GREATEREQ 296
#define ALTERNATION 297
#define COEXPR 298
#define QQSTRING_START 299
#define QQSTRING_TEXT 300
#define QQSTRING_INTERP_START 301
#define QQSTRING_INTERP_END 302
#define QQSTRING_END 303
#define FUNCDEF 304
#define NONOPT 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 31 "src/parser.y"

  jv literal;
  block blk;

#line 257 "src/parser.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr);

#endif /* !YY_YY_SRC_PARSER_H_INCLUDED  */

/* Second part of user prologue.  */
#line 128 "src/parser.y"

#include "lexer.h"
struct lexer_param {
  yyscan_t lexer;
};
#define FAIL(loc, msg)                                             \
  do {                                                             \
    location l = loc;                                              \
    yyerror(&l, answer, errors, locations, lexer_param_ptr, msg);  \
    /*YYERROR*/;                                                   \
  } while (0)

void yyerror(YYLTYPE* loc, block* answer, int* errors,
             struct locfile* locations, struct lexer_param* lexer_param_ptr, const char *s){
  (*errors)++;
  if (strstr(s, "unexpected")) {
#ifdef WIN32
      locfile_locate(locations, *loc, "jq: error: %s (Windows cmd shell quoting issues?)", s);
#else
      locfile_locate(locations, *loc, "jq: error: %s (Unix shell quoting issues?)", s);
#endif
  } else {
      locfile_locate(locations, *loc, "jq: error: %s", s);
  }
}

int yylex(YYSTYPE* yylval, YYLTYPE* yylloc, block* answer, int* errors,
          struct locfile* locations, struct lexer_param* lexer_param_ptr) {
  yyscan_t lexer = lexer_param_ptr->lexer;
  int tok = jq_yylex(yylval, yylloc, lexer);
  if ((tok == LITERAL || tok == QQSTRING_TEXT) && !jv_is_valid(yylval->literal)) {
    jv msg = jv_invalid_get_msg(jv_copy(yylval->literal));
    if (jv_get_kind(msg) == JV_KIND_STRING) {
      FAIL(*yylloc, jv_string_value(msg));
    } else {
      FAIL(*yylloc, "Invalid literal");
    }
    jv_free(msg);
    jv_free(yylval->literal);
    yylval->literal = jv_null();
  }
  return tok;
}

/* Returns string message if the block is a constant that is not valid as an
 * object key. */
static jv check_object_key(block k) {
  if (block_is_const(k) && block_const_kind(k) != JV_KIND_STRING) {
    char errbuf[15];
    return jv_string_fmt("Cannot use %s (%s) as object key",
        jv_kind_name(block_const_kind(k)),
        jv_dump_string_trunc(block_const(k), errbuf, sizeof(errbuf)));
  }
  return jv_invalid();
}

static block gen_index(block obj, block key) {
  return BLOCK(gen_subexp(key), obj, gen_op_simple(INDEX));
}

static block gen_index_opt(block obj, block key) {
  return BLOCK(gen_subexp(key), obj, gen_op_simple(INDEX_OPT));
}

static block gen_slice_index(block obj, block start, block end, opcode idx_op) {
  block key = BLOCK(gen_subexp(gen_const(jv_object())),
                    gen_subexp(gen_const(jv_string("start"))),
                    gen_subexp(start),
                    gen_op_simple(INSERT),
                    gen_subexp(gen_const(jv_string("end"))),
                    gen_subexp(end),
                    gen_op_simple(INSERT));
  return BLOCK(key, obj, gen_op_simple(idx_op));
}

static block constant_fold(block a, block b, int op) {
  if (!block_is_single(a) || !block_is_const(a) ||
      !block_is_single(b) || !block_is_const(b))
    return gen_noop();
  if (op == '+') {
    if (block_const_kind(a) == JV_KIND_NULL) {
      block_free(a);
      return b;
    }
    if (block_const_kind(b) == JV_KIND_NULL) {
      block_free(b);
      return a;
    }
  }
  if (block_const_kind(a) != block_const_kind(b))
    return gen_noop();

  jv res = jv_invalid();

  if (block_const_kind(a) == JV_KIND_NUMBER) {
    jv jv_a = block_const(a);
    jv jv_b = block_const(b);

    double na = jv_number_value(jv_a);
    double nb = jv_number_value(jv_b);

    int cmp = jv_cmp(jv_a, jv_b);

    switch (op) {
    case '+': res = jv_number(na + nb); break;
    case '-': res = jv_number(na - nb); break;
    case '*': res = jv_number(na * nb); break;
    case '/': res = jv_number(na / nb); break;
    case EQ:  res = (cmp == 0 ? jv_true() : jv_false()); break;
    case NEQ: res = (cmp != 0 ? jv_true() : jv_false()); break;
    case '<': res = (cmp < 0 ? jv_true() : jv_false()); break;
    case '>': res = (cmp > 0 ? jv_true() : jv_false()); break;
    case LESSEQ: res = (cmp <= 0 ? jv_true() : jv_false()); break;
    case GREATEREQ: res = (cmp >= 0 ? jv_true() : jv_false()); break;
    default: break;
    }
  } else if (op == '+' && block_const_kind(a) == JV_KIND_STRING) {
    res = jv_string_concat(block_const(a),  block_const(b));
  } else {
    return gen_noop();
  }

  if (jv_get_kind(res) == JV_KIND_INVALID)
    return gen_noop();

  block_free(a);
  block_free(b);
  return gen_const(res);
}

static block gen_binop(block a, block b, int op) {
  block folded = constant_fold(a, b, op);
  if (!block_is_noop(folded))
    return folded;

  const char* funcname = 0;
  switch (op) {
  case '+': funcname = "_plus"; break;
  case '-': funcname = "_minus"; break;
  case '*': funcname = "_multiply"; break;
  case '/': funcname = "_divide"; break;
  case '%': funcname = "_mod"; break;
  case EQ: funcname = "_equal"; break;
  case NEQ: funcname = "_notequal"; break;
  case '<': funcname = "_less"; break;
  case '>': funcname = "_greater"; break;
  case LESSEQ: funcname = "_lesseq"; break;
  case GREATEREQ: funcname = "_greatereq"; break;
  }
  assert(funcname);

  return gen_call(funcname, BLOCK(gen_lambda(a), gen_lambda(b)));
}

static block gen_format(block a, jv fmt) {
  return BLOCK(a, gen_call("format", gen_lambda(gen_const(fmt))));
}

static block gen_definedor_assign(block object, block val) {
  block tmp = gen_op_var_fresh(STOREV, "tmp");
  return BLOCK(gen_op_simple(DUP),
               val, tmp,
               gen_call("_modify", BLOCK(gen_lambda(object),
                                         gen_lambda(gen_definedor(gen_noop(),
                                                                  gen_op_bound(LOADV, tmp))))));
}

static block gen_update(block object, block val, int optype) {
  block tmp = gen_op_var_fresh(STOREV, "tmp");
  return BLOCK(gen_op_simple(DUP),
               val,
               tmp,
               gen_call("_modify", BLOCK(gen_lambda(object),
                                         gen_lambda(gen_binop(gen_noop(),
                                                              gen_op_bound(LOADV, tmp),
                                                              optype)))));
}


#line 466 "src/parser.c"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2262

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  174
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  344

#define YYUNDEFTOK  2
#define YYMAXUTOK   305


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    64,    59,     2,     2,
      63,    65,    57,    55,    51,    56,    67,    58,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    66,    62,
      53,    52,    54,    61,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    68,     2,    69,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,    50,    71,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   310,   310,   329,   334,   337,   348,   351,   356,   359,
     364,   368,   395,   398,   402,   406,   410,   413,   416,   421,
     424,   427,   430,   433,   438,   445,   449,   453,   457,   461,
     465,   469,   473,   477,   481,   485,   489,   493,   497,   501,
     505,   509,   513,   519,   525,   529,   533,   537,   541,   545,
     549,   553,   557,   562,   565,   582,   591,   598,   606,   617,
     622,   628,   631,   636,   640,   644,   648,   655,   655,   659,
     659,   666,   669,   672,   678,   681,   686,   689,   692,   698,
     701,   704,   711,   715,   718,   721,   724,   727,   730,   733,
     736,   739,   742,   746,   752,   755,   758,   761,   764,   767,
     770,   773,   776,   779,   782,   785,   788,   791,   794,   797,
     800,   803,   806,   813,   817,   826,   838,   843,   844,   845,
     846,   849,   852,   857,   862,   865,   870,   874,   877,   882,
     885,   890,   893,   898,   901,   904,   907,   910,   913,   921,
     927,   930,   933,   936,   939,   942,   945,   948,   951,   954,
     957,   960,   963,   966,   969,   972,   975,   978,   981,   984,
     989,   992,   993,   994,   997,  1000,  1003,  1006,  1010,  1014,
    1018,  1022,  1026,  1030,  1038
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INVALID_CHARACTER", "IDENT", "FIELD",
  "LITERAL", "FORMAT", "\"..\"", "\"%=\"", "\"==\"", "\"!=\"", "\"//\"",
  "\"as\"", "\"def\"", "\"codef\"", "\"module\"", "\"import\"",
  "\"include\"", "\"if\"", "\"then\"", "\"else\"", "\"elif\"",
  "\"reduce\"", "\"foreach\"", "\"end\"", "\"and\"", "\"or\"", "\"try\"",
  "\"catch\"", "\"label\"", "\"break\"", "\"__loc__\"", "\">|\"", "\"|=\"",
  "\"+=\"", "\"-=\"", "\"*=\"", "\"/=\"", "\"//=\"", "\"<=\"", "\">=\"",
  "\"?//\"", "\"@@\"", "QQSTRING_START", "QQSTRING_TEXT",
  "QQSTRING_INTERP_START", "QQSTRING_INTERP_END", "QQSTRING_END",
  "FUNCDEF", "'|'", "','", "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'",
  "'%'", "NONOPT", "'?'", "';'", "'('", "'$'", "')'", "':'", "'.'", "'['",
  "']'", "'{'", "'}'", "$accept", "TopLevel", "Module", "Imports",
  "FuncDefs", "Exp", "Import", "ImportWhat", "ImportFrom", "FuncDef",
  "Params", "Param", "String", "@1", "@2", "QQString", "ElseBody", "ExpD",
  "Term", "Args", "Arg", "Patterns", "Pattern", "ArrayPats", "ObjPats",
  "ObjPat", "Keyword", "MkDict", "MkDictPair", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     124,    44,    61,    60,    62,    43,    45,    42,    47,    37,
     305,    63,    59,    40,    36,    41,    58,    46,    91,    93,
     123,   125
};
# endif

#define YYPACT_NINF (-148)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-161)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      41,   774,    77,    62,   -60,    56,  -148,    82,  -148,    58,
      64,   774,   654,   654,   841,    73,    49,  -148,   774,   510,
    2172,   307,   179,   376,  1450,   774,  -148,     1,  -148,    -2,
      -2,   774,    62,   676,   774,  -148,  -148,   -41,    74,  1832,
      18,    48,   510,    43,   135,  -148,  -148,   139,  -148,   -13,
      79,  1234,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,   144,    82,    86,    80,  -148,
     975,   -17,    87,   774,  2201,    94,    95,    75,   100,   774,
     774,   774,   774,   774,   774,   774,   774,   774,   774,   774,
     774,   774,   774,   774,   774,   774,   774,   774,   774,   774,
     774,   774,   774,   774,  -148,  -148,  2010,    91,    54,    -5,
     479,   150,  -148,  -148,  -148,  2010,   774,  -148,  -148,  1487,
    2010,    22,  -148,  -148,     0,   774,    99,   578,    54,    54,
    1123,   609,   116,  -148,    25,  -148,  -148,  -148,  -148,  -148,
    -148,   437,   169,  -148,   169,  1270,   102,  -148,   169,   169,
    -148,   437,  2082,   220,   220,  2046,   821,  2116,   136,  2082,
    2082,  2082,  2082,  2082,  2082,   220,   220,  2010,  2046,  2082,
     220,   220,   -13,   -13,    -9,    -9,    -9,  -148,   166,    54,
     899,     9,  -148,   774,   111,   109,   774,   118,   938,    11,
    -148,  -148,   774,  -148,    85,  -148,   177,  2230,    70,  -148,
    1524,   178,  -148,  1726,   -26,   -16,   774,  -148,   136,   774,
    -148,   774,  -148,    15,  -148,   169,   141,    53,   141,   123,
     169,   141,   141,  -148,  -148,  -148,     5,   131,   133,   774,
     200,   140,   -11,  -148,   142,    54,   774,  1012,  -148,  -148,
    1049,  -148,   743,   151,  -148,   207,  -148,  -148,  -148,  -148,
    -148,     0,   148,  -148,   153,   774,   774,  -148,  -148,   774,
     774,  1160,  2010,  1868,  -148,   169,   169,   141,    54,  -148,
      54,    54,  1306,   156,    54,   899,  -148,    54,  -148,  2010,
     155,   163,   167,  1086,  -148,  -148,  -148,   774,   774,  1921,
    1974,  1561,  1598,   774,  -148,  -148,   141,   141,  -148,  -148,
    -148,   161,    54,  -148,  -148,  -148,  -148,  -148,  -148,   168,
    1635,  1672,  -148,   774,   774,   774,  1342,    54,  -148,  -148,
    -148,   774,  1779,  1378,  1197,  -148,  -148,  2010,  -148,  -148,
     774,  -148,  1414,  -148
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     6,   115,    89,   106,   108,    80,     0,
       0,     0,     0,     0,     0,     0,     0,    67,     0,     0,
       0,     0,     0,     0,     0,     0,   107,    52,     1,     0,
       0,     8,     6,     0,     0,    85,    69,     0,     0,     0,
       0,     0,     0,    22,     0,    82,    83,     0,    71,    37,
       0,     0,   113,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   114,    92,     0,     0,    91,     0,   111,
       0,     0,   171,     0,     0,   167,   172,     0,   161,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     5,    10,    88,     0,     0,
       0,     0,    58,    57,     3,     2,     8,     7,    53,     0,
     123,     0,   121,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,   117,   109,    93,    87,   118,
     110,     0,     0,   120,     0,     0,   169,   170,     0,     0,
     112,     0,    45,    46,    47,    29,    28,    27,    33,    31,
      36,    39,    41,    44,    30,    50,    51,    32,    34,    26,
      48,    49,    35,    38,    40,    42,    43,    84,     0,     0,
       0,     0,   125,     0,    90,     0,     0,    99,     0,     0,
       9,    54,     0,   116,     0,    66,     0,     0,     0,    61,
       0,     0,    18,     0,     0,     0,     0,    23,    21,     0,
      72,     0,    68,     0,   163,     0,   174,    78,   164,     0,
       0,   166,   165,   162,   126,   129,     0,     0,     0,     0,
       0,     0,     0,   131,     0,     0,     0,     0,    86,   119,
       0,    98,     0,    95,    56,     0,   122,    70,    65,    63,
      64,     0,     0,    59,     0,     0,     0,    17,    16,     0,
       0,     0,    24,     0,    77,     0,     0,   168,     0,   127,
       0,     0,     0,   133,     0,     0,   128,     0,   124,    12,
      97,   105,   104,     0,    94,    55,    62,     0,     0,     0,
       0,     0,     0,     0,    19,    73,    76,   173,   130,   139,
     135,     0,     0,   137,   132,   136,    96,   102,   101,   103,
       0,     0,    75,     0,     0,     0,     0,     0,   134,   100,
      60,     0,     0,     0,     0,    20,   138,    11,    74,    13,
       0,    15,     0,    14
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -148,  -148,  -148,   185,   108,    -1,  -148,  -148,   210,   -12,
    -148,   -20,     6,  -148,  -148,   117,   -88,  -147,    -4,  -148,
      50,     3,  -122,  -148,  -148,   -31,   -19,  -123,  -148
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    31,   124,   116,    32,    33,   121,    25,
     208,   209,    26,    48,   133,   144,   268,   226,    27,   131,
     132,   191,   192,   236,   242,   243,    86,    87,    88
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,    73,    76,    34,   205,    76,   117,   228,    40,    41,
      39,   231,   232,    43,   118,   254,   245,    49,    51,   126,
      95,    80,   134,   117,    95,   135,   245,    77,   224,    85,
     125,   138,   129,   130,   151,   122,   122,   269,   233,    17,
     285,   140,    17,   206,   111,   112,   113,   270,   114,   152,
      45,   245,   114,   117,   153,    46,   278,     1,   117,   246,
     286,   139,    37,   193,   207,   157,   151,   235,   119,   120,
     220,   221,   141,   222,   279,   255,    95,    28,   274,    29,
      30,   152,   155,   277,   202,   119,   120,   203,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,    47,   126,   119,   120,    35,   188,   198,
     119,   120,   189,   288,   190,   194,    36,    38,   306,   307,
     220,   221,   261,   257,   210,   262,   213,    44,   136,   142,
     218,   214,   215,   143,   145,   147,   160,   148,   227,   149,
     227,   161,   187,   154,   227,   227,   308,    85,   309,   310,
     158,   159,   313,   199,   211,   315,   219,    85,   230,    95,
     234,   244,   248,     4,     5,     6,     7,     8,   249,   251,
      78,   258,   264,     4,     5,     6,     7,     8,   260,   276,
     328,   275,   247,     9,    10,   250,   241,   280,    11,   281,
      16,   130,    12,    13,   283,   336,   284,    14,   287,    15,
      16,   295,   294,    17,   297,   271,   316,   127,   272,   298,
     273,   227,   312,    17,   317,   225,   227,   327,   318,   329,
    -161,  -161,    19,    20,   200,    18,    21,    22,   282,    23,
     123,   296,    19,    20,   338,   289,    21,    22,    79,    23,
     204,   293,   256,    95,   314,     0,     0,     0,     0,     0,
    -161,  -161,     0,     0,   299,   300,   244,     0,   301,   302,
       0,   227,   227,  -161,  -161,   109,   110,   111,   112,   113,
       0,   114,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   241,     0,     0,     0,     0,   320,   321,     0,     0,
       0,     0,   326,     0,     0,     0,     0,   -79,    74,     0,
       0,    75,   -79,     0,    76,     0,   -79,   -79,   -79,   -79,
     -79,     0,   332,   333,   334,     0,     0,   -79,   -79,   -79,
     337,     0,   -79,   -79,   -79,     0,   -79,     0,     0,   342,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,
       0,    17,     0,     0,   -79,     0,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,
       0,     0,   -79,   -79,   -79,   -79,   -79,    81,   -79,     0,
      82,     0,     0,    76,     0,     0,     0,     0,     0,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   223,    83,
      84,    82,     0,     0,    76,     0,     0,  -160,     0,     0,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     195,    17,     0,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     0,     9,    10,     0,     0,     0,    11,     0,
      83,    84,    12,    13,     0,     0,     0,    14,  -160,    15,
      16,    50,     0,     0,     4,     5,     6,     7,     8,     0,
       0,     0,     0,    17,     9,    10,     0,     0,     0,    11,
       0,     0,     0,    12,    13,    18,     0,     0,    14,     0,
      15,    16,    19,    20,     0,   196,    21,    22,   197,    23,
       0,     0,     0,     0,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,     0,     0,     0,
       0,     0,     0,    19,    20,     0,     0,    21,    22,   212,
      23,     0,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     0,     9,    10,     0,     0,     0,    11,     0,     0,
       0,    12,    13,     0,     0,     0,    14,     0,    15,    16,
     217,     0,     0,     4,     5,     6,     7,     8,     0,     0,
       0,     0,    17,     9,    10,     0,     0,     0,    11,     0,
       0,     0,    12,    13,    18,     0,     0,    14,     0,    15,
      16,    19,    20,     0,     0,    21,    22,     0,    23,     0,
       0,     0,     0,    17,     0,     0,     0,     0,     4,     5,
       6,     7,     8,     0,     0,    18,     0,     0,     0,     0,
       0,     0,    19,    20,     0,     0,    21,    22,     0,    23,
       4,     5,     6,     7,     8,    16,     0,     0,     0,     0,
       9,    10,     0,     0,     0,    11,     0,     0,    17,    12,
      13,     0,     0,     0,    14,     0,    15,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    19,    20,     0,
      17,    21,    22,     0,    23,     0,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,     0,     0,   128,    19,
      20,     0,     0,    21,    22,     0,    23,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     0,     9,    10,     0,
       0,     0,    11,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,     0,     0,     0,     4,     5,
       6,     7,     8,     0,     0,     0,     0,    17,     9,    10,
       0,     0,     0,    11,     0,     0,     0,    12,    13,    18,
       0,     0,    14,     0,    15,    16,    19,    20,     0,     0,
      21,    22,   292,    23,     0,     0,     0,     0,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,    90,    91,     0,     0,     0,     0,    19,    20,     0,
       0,    21,    22,     0,    23,     4,     5,     6,     7,     8,
       0,     0,     0,     0,    95,     9,    10,     0,     0,     0,
      11,   102,   103,     0,    12,    13,     0,     0,     0,    14,
       0,    15,    16,     0,   107,   108,   109,   110,   111,   112,
     113,     0,   114,     0,     0,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,     0,     0,
     237,     0,     0,   238,    42,    20,    76,     0,    21,    22,
       0,    23,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    17,     0,     0,     0,    89,    90,    91,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   239,   240,    93,    94,     0,     0,     0,     0,
       0,    95,    96,    97,    98,    99,   100,   101,   102,   103,
       0,     0,     0,     0,    89,    90,    91,    92,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,     0,   114,
       0,    93,    94,     0,   252,     0,     0,   253,    95,    96,
      97,    98,    99,   100,   101,   102,   103,     0,     0,     0,
       0,    89,    90,    91,    92,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,     0,   114,     0,    93,    94,
       0,     0,     0,     0,   150,    95,    96,    97,    98,    99,
     100,   101,   102,   103,     0,     0,     0,     0,    89,    90,
      91,    92,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,     0,   114,     0,    93,    94,     0,     0,     0,
       0,   290,    95,    96,    97,    98,    99,   100,   101,   102,
     103,     0,     0,     0,     0,    89,    90,    91,    92,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,     0,
     114,     0,    93,    94,     0,     0,     0,     0,   291,    95,
      96,    97,    98,    99,   100,   101,   102,   103,     0,     0,
       0,     0,    89,    90,    91,    92,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,     0,   114,     0,    93,
      94,     0,     0,     0,     0,   319,    95,    96,    97,    98,
      99,   100,   101,   102,   103,     0,     0,     0,     0,    89,
      90,    91,    92,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,     0,   114,   216,    93,    94,   146,     0,
       0,     0,     0,    95,    96,    97,    98,    99,   100,   101,
     102,   103,     0,     0,     0,     0,    89,    90,    91,    92,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
       0,   114,   303,    93,    94,   304,     0,     0,     0,     0,
      95,    96,    97,    98,    99,   100,   101,   102,   103,     0,
       0,     0,     0,    89,    90,    91,    92,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     0,   114,   340,
      93,    94,   341,     0,     0,     0,     0,    95,    96,    97,
      98,    99,   100,   101,   102,   103,     0,     0,     0,    89,
      90,    91,    92,     0,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,     0,   114,    93,    94,     0,   146,
       0,     0,     0,    95,    96,    97,    98,    99,   100,   101,
     102,   103,     0,     0,     0,    89,    90,    91,    92,     0,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
       0,   114,    93,    94,     0,   229,     0,     0,     0,    95,
      96,    97,    98,    99,   100,   101,   102,   103,     0,     0,
       0,    89,    90,    91,    92,     0,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,     0,   114,    93,    94,
       0,   311,     0,     0,     0,    95,    96,    97,    98,    99,
     100,   101,   102,   103,     0,     0,     0,    89,    90,    91,
      92,     0,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,     0,   114,    93,    94,     0,   335,     0,     0,
       0,    95,    96,    97,    98,    99,   100,   101,   102,   103,
       0,     0,     0,    89,    90,    91,    92,     0,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,     0,   114,
      93,    94,     0,   339,     0,     0,     0,    95,    96,    97,
      98,    99,   100,   101,   102,   103,     0,     0,     0,    89,
      90,    91,    92,     0,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,     0,   114,    93,    94,     0,   343,
       0,     0,     0,    95,    96,    97,    98,    99,   100,   101,
     102,   103,     0,     0,     0,     0,    89,    90,    91,    92,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
       0,   114,   115,    93,    94,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,   100,   101,   102,   103,     0,
       0,     0,     0,    89,    90,    91,    92,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     0,   114,   201,
      93,    94,     0,     0,     0,     0,     0,    95,    96,    97,
      98,    99,   100,   101,   102,   103,     0,     0,     0,     0,
      89,    90,    91,    92,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,     0,   114,   263,    93,    94,     0,
       0,     0,     0,     0,    95,    96,    97,    98,    99,   100,
     101,   102,   103,     0,     0,     0,     0,    89,    90,    91,
      92,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,     0,   114,   324,    93,    94,     0,     0,     0,     0,
       0,    95,    96,    97,    98,    99,   100,   101,   102,   103,
       0,     0,     0,     0,    89,    90,    91,    92,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,     0,   114,
     325,    93,    94,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,   100,   101,   102,   103,     0,     0,     0,
       0,    89,    90,    91,    92,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,     0,   114,   330,    93,    94,
       0,     0,     0,     0,     0,    95,    96,    97,    98,    99,
     100,   101,   102,   103,     0,     0,     0,     0,     0,     0,
       0,     0,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,     0,   114,   331,    89,    90,    91,    92,     0,
       0,     0,     0,     0,     0,     0,     0,   265,   266,     0,
       0,   267,    93,    94,     0,     0,     0,     0,     0,    95,
      96,    97,    98,    99,   100,   101,   102,   103,     0,     0,
       0,     0,     0,     0,     0,     0,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,     0,   114,    89,    90,
      91,    92,     0,     0,     0,     0,     0,     0,     0,     0,
     265,   266,     0,     0,     0,    93,    94,     0,     0,     0,
       0,     0,    95,    96,    97,    98,    99,   100,   101,   102,
     103,     0,     0,     0,     0,     0,     0,     0,     0,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,     0,
     114,    89,    90,    91,    92,     0,     0,     0,     0,     0,
       0,     0,   137,     0,     0,     0,     0,     0,    93,    94,
       0,     0,     0,     0,     0,    95,    96,    97,    98,    99,
     100,   101,   102,   103,     0,     0,     0,    89,    90,    91,
      92,     0,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,     0,   114,    93,    94,     0,     0,     0,     0,
       0,    95,    96,    97,    98,    99,   100,   101,   102,   103,
       0,     0,     0,     0,     0,   305,     0,     0,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,     0,   114,
      89,    90,    91,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   322,    93,    94,     0,
       0,     0,     0,     0,    95,    96,    97,    98,    99,   100,
     101,   102,   103,     0,     0,     0,     0,     0,     0,     0,
       0,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,     0,   114,    89,    90,    91,    92,     0,     0,     0,
       0,     0,     0,     0,   323,     0,     0,     0,     0,     0,
      93,    94,     0,     0,     0,     0,     0,    95,    96,    97,
      98,    99,   100,   101,   102,   103,     0,     0,     0,    89,
      90,    91,    92,     0,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,     0,   114,    93,    94,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,   100,   101,
     102,   103,     0,     0,     0,    89,    90,    91,    92,     0,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
       0,   114,    93,    94,     0,     0,     0,     0,     0,    95,
      96,    97,    98,    99,   100,   101,   102,   103,     0,     0,
       0,  -161,    90,    91,     0,     0,     0,     0,   106,   107,
     108,   109,   110,   111,   112,   113,     0,   114,    93,    94,
       0,     0,     0,     0,     0,    95,  -161,  -161,  -161,  -161,
    -161,  -161,   102,   103,     0,     0,    90,    91,     0,     0,
       0,     0,     0,     0,  -161,   107,   108,   109,   110,   111,
     112,   113,    93,   114,     0,     0,     0,     0,     0,    95,
       0,     0,     0,     0,     0,     0,   102,   103,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   107,
     108,   109,   110,   111,   112,   113,    52,   114,     0,     0,
       0,     0,     0,     0,     0,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,   156,     0,     0,     0,     0,
       0,     0,     0,     0,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,   259,     0,     0,     0,     0,     0,
       0,     0,     0,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72
};

static const yytype_int16 yycheck[] =
{
       1,    20,     7,    63,     4,     7,     5,   154,    12,    13,
      11,   158,   159,    14,    13,     4,    42,    18,    19,    31,
      33,    22,    63,     5,    33,    66,    42,    21,   151,    23,
      31,    13,    33,    34,    51,    29,    30,    63,   161,    44,
      51,    42,    44,    43,    57,    58,    59,    63,    61,    66,
       1,    42,    61,     5,    71,     6,    51,    16,     5,    50,
      71,    13,     4,    68,    64,    84,    51,   189,    67,    68,
      45,    46,    29,    48,    69,    64,    33,     0,   225,    17,
      18,    66,    83,   230,    62,    67,    68,    65,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    64,   126,    67,    68,    61,    64,   120,
      67,    68,    68,   245,    70,   119,    44,    63,   275,   276,
      45,    46,    62,    48,   135,    65,   137,    64,    64,     4,
     141,   138,   139,     4,    65,     1,    71,    61,   152,    69,
     154,    51,    61,    66,   158,   159,   278,   151,   280,   281,
      66,    66,   284,    13,    65,   287,    50,   161,    66,    33,
       4,   190,    61,     4,     5,     6,     7,     8,    69,    61,
       1,     4,     4,     4,     5,     6,     7,     8,   207,    66,
     312,    50,   193,    14,    15,   196,   190,    66,    19,    66,
      31,   202,    23,    24,     4,   327,    66,    28,    66,    30,
      31,     4,    61,    44,    66,   216,    61,    32,   219,    66,
     221,   225,    66,    44,    61,    56,   230,    66,    61,    61,
      10,    11,    63,    64,   126,    56,    67,    68,   239,    70,
      30,   261,    63,    64,   332,   246,    67,    68,    69,    70,
     133,   252,   202,    33,   285,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    -1,   265,   266,   285,    -1,   269,   270,
      -1,   275,   276,    53,    54,    55,    56,    57,    58,    59,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   285,    -1,    -1,    -1,    -1,   297,   298,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,    -1,     0,     1,    -1,
      -1,     4,     5,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,   323,   324,   325,    -1,    -1,    20,    21,    22,
     331,    -1,    25,    26,    27,    -1,    29,    -1,    -1,   340,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    44,    -1,    -1,    47,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,     1,    71,    -1,
       4,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    63,
      64,     4,    -1,    -1,     7,    -1,    -1,    71,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    44,    -1,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    14,    15,    -1,    -1,    -1,    19,    -1,
      63,    64,    23,    24,    -1,    -1,    -1,    28,    71,    30,
      31,     1,    -1,    -1,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    44,    14,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    23,    24,    56,    -1,    -1,    28,    -1,
      30,    31,    63,    64,    -1,    66,    67,    68,    69,    70,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    -1,    -1,    67,    68,     1,
      70,    -1,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    14,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    23,    24,    -1,    -1,    -1,    28,    -1,    30,    31,
       1,    -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    44,    14,    15,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    23,    24,    56,    -1,    -1,    28,    -1,    30,
      31,    63,    64,    -1,    -1,    67,    68,    -1,    70,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    -1,    -1,    67,    68,    -1,    70,
       4,     5,     6,     7,     8,    31,    -1,    -1,    -1,    -1,
      14,    15,    -1,    -1,    -1,    19,    -1,    -1,    44,    23,
      24,    -1,    -1,    -1,    28,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,
      44,    67,    68,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    62,    63,
      64,    -1,    -1,    67,    68,    -1,    70,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    14,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    23,    24,    -1,    -1,
      -1,    28,    -1,    30,    31,    -1,    -1,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    44,    14,    15,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    23,    24,    56,
      -1,    -1,    28,    -1,    30,    31,    63,    64,    -1,    -1,
      67,    68,    69,    70,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    10,    11,    -1,    -1,    -1,    -1,    63,    64,    -1,
      -1,    67,    68,    -1,    70,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    33,    14,    15,    -1,    -1,    -1,
      19,    40,    41,    -1,    23,    24,    -1,    -1,    -1,    28,
      -1,    30,    31,    -1,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
       1,    -1,    -1,     4,    63,    64,     7,    -1,    67,    68,
      -1,    70,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    26,    27,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,     9,    10,    11,    12,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    61,
      -1,    26,    27,    -1,    66,    -1,    -1,    69,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,     9,    10,    11,    12,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    -1,    26,    27,
      -1,    -1,    -1,    -1,    69,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,     9,    10,
      11,    12,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    -1,    26,    27,    -1,    -1,    -1,
      -1,    69,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,     9,    10,    11,    12,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
      61,    -1,    26,    27,    -1,    -1,    -1,    -1,    69,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,     9,    10,    11,    12,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,    -1,    26,
      27,    -1,    -1,    -1,    -1,    69,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,     9,
      10,    11,    12,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    61,    62,    26,    27,    65,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,     9,    10,    11,    12,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    61,    62,    26,    27,    65,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,     9,    10,    11,    12,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    61,    62,
      26,    27,    65,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,     9,
      10,    11,    12,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    26,    27,    -1,    65,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,     9,    10,    11,    12,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    61,    26,    27,    -1,    65,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,     9,    10,    11,    12,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,    26,    27,
      -1,    65,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,     9,    10,    11,
      12,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    26,    27,    -1,    65,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,     9,    10,    11,    12,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    61,
      26,    27,    -1,    65,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,     9,
      10,    11,    12,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    26,    27,    -1,    65,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,     9,    10,    11,    12,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    61,    62,    26,    27,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,     9,    10,    11,    12,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    61,    62,
      26,    27,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
       9,    10,    11,    12,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    26,    27,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,     9,    10,    11,
      12,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    26,    27,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,     9,    10,    11,    12,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    61,
      62,    26,    27,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,     9,    10,    11,    12,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    26,    27,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,
      -1,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
      61,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,     9,    10,    11,
      12,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    26,    27,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    61,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,     9,
      10,    11,    12,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    26,    27,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,     9,    10,    11,    12,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    61,    26,    27,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,    26,    27,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    26,    61,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      54,    55,    56,    57,    58,    59,     4,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    16,    73,    74,     4,     5,     6,     7,     8,    14,
      15,    19,    23,    24,    28,    30,    31,    44,    56,    63,
      64,    67,    68,    70,    77,    81,    84,    90,     0,    17,
      18,    75,    78,    79,    63,    61,    44,     4,    63,    77,
      90,    90,    63,    77,    64,     1,     6,    64,    85,    77,
       1,    77,     4,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    98,     1,     4,     7,    84,     1,    69,
      77,     1,     4,    63,    64,    84,    98,    99,   100,     9,
      10,    11,    12,    26,    27,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    61,    62,    77,     5,    13,    67,
      68,    80,    84,    80,    76,    77,    81,    75,    62,    77,
      77,    91,    92,    86,    63,    66,    64,    20,    13,    13,
      77,    29,     4,     4,    87,    65,    65,     1,    61,    69,
      69,    51,    66,    71,    66,    77,     4,    98,    66,    66,
      71,    51,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    61,    64,    68,
      70,    93,    94,    68,    84,     1,    66,    69,    77,    13,
      76,    62,    62,    65,    87,     4,    43,    64,    82,    83,
      77,    65,     1,    77,    93,    93,    62,     1,    77,    50,
      45,    46,    48,     1,    99,    56,    89,    90,    89,    65,
      66,    89,    89,    99,     4,    94,    95,     1,     4,    63,
      64,    84,    96,    97,    98,    42,    50,    77,    61,    69,
      77,    61,    66,    69,     4,    64,    92,    48,     4,     4,
      98,    62,    65,    62,     4,    21,    22,    25,    88,    63,
      63,    77,    77,    77,    89,    50,    66,    89,    51,    69,
      66,    66,    77,     4,    66,    51,    71,    66,    94,    77,
      69,    69,    69,    77,    61,     4,    83,    66,    66,    77,
      77,    77,    77,    62,    65,    47,    89,    89,    94,    94,
      94,    65,    66,    94,    97,    94,    61,    61,    61,    69,
      77,    77,    25,    20,    62,    62,    77,    66,    94,    61,
      62,    62,    77,    77,    77,    65,    94,    77,    88,    65,
      62,    65,    77,    65
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    72,    73,    73,    74,    74,    75,    75,    76,    76,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    78,    78,    79,    79,    79,    80,    81,
      81,    82,    82,    83,    83,    83,    83,    85,    84,    86,
      84,    87,    87,    87,    88,    88,    89,    89,    89,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    91,    91,    92,    93,    93,    94,    94,    94,    95,
      95,    96,    96,    97,    97,    97,    97,    97,    97,    97,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      99,    99,    99,    99,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     0,     3,     0,     2,     0,     2,
       2,     9,     5,     9,    11,     9,     5,     5,     4,     6,
       8,     4,     2,     4,     5,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     2,     3,     5,     4,     2,     1,     5,
       8,     1,     3,     2,     2,     2,     1,     0,     4,     0,
       5,     0,     2,     4,     5,     3,     3,     2,     1,     1,
       1,     3,     2,     2,     3,     2,     4,     3,     2,     1,
       3,     2,     2,     3,     5,     4,     6,     5,     4,     3,
       7,     6,     6,     6,     5,     5,     1,     1,     1,     3,
       3,     2,     3,     2,     2,     1,     4,     3,     3,     4,
       3,     1,     3,     1,     3,     1,     2,     3,     3,     1,
       3,     1,     3,     2,     4,     3,     3,     3,     5,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     3,     3,     3,     3,     3,     1,     4,     2,
       2,     1,     1,     5,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (&yylloc, answer, errors, locations, lexer_param_ptr, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, answer, errors, locations, lexer_param_ptr); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (answer);
  YYUSE (errors);
  YYUSE (locations);
  YYUSE (lexer_param_ptr);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp, answer, errors, locations, lexer_param_ptr);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , answer, errors, locations, lexer_param_ptr);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, answer, errors, locations, lexer_param_ptr); \
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (answer);
  YYUSE (errors);
  YYUSE (locations);
  YYUSE (lexer_param_ptr);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
    case 4: /* IDENT  */
#line 36 "src/parser.y"
            { jv_free(((*yyvaluep).literal)); }
#line 2069 "src/parser.c"
        break;

    case 5: /* FIELD  */
#line 36 "src/parser.y"
            { jv_free(((*yyvaluep).literal)); }
#line 2075 "src/parser.c"
        break;

    case 6: /* LITERAL  */
#line 36 "src/parser.y"
            { jv_free(((*yyvaluep).literal)); }
#line 2081 "src/parser.c"
        break;

    case 7: /* FORMAT  */
#line 36 "src/parser.y"
            { jv_free(((*yyvaluep).literal)); }
#line 2087 "src/parser.c"
        break;

    case 45: /* QQSTRING_TEXT  */
#line 36 "src/parser.y"
            { jv_free(((*yyvaluep).literal)); }
#line 2093 "src/parser.c"
        break;

    case 74: /* Module  */
#line 37 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2099 "src/parser.c"
        break;

    case 75: /* Imports  */
#line 37 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2105 "src/parser.c"
        break;

    case 76: /* FuncDefs  */
#line 37 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2111 "src/parser.c"
        break;

    case 77: /* Exp  */
#line 37 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2117 "src/parser.c"
        break;

    case 78: /* Import  */
#line 37 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2123 "src/parser.c"
        break;

    case 79: /* ImportWhat  */
#line 37 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2129 "src/parser.c"
        break;

    case 80: /* ImportFrom  */
#line 37 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2135 "src/parser.c"
        break;

    case 81: /* FuncDef  */
#line 37 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2141 "src/parser.c"
        break;

    case 82: /* Params  */
#line 37 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2147 "src/parser.c"
        break;

    case 83: /* Param  */
#line 37 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2153 "src/parser.c"
        break;

    case 84: /* String  */
#line 37 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2159 "src/parser.c"
        break;

    case 87: /* QQString  */
#line 37 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2165 "src/parser.c"
        break;

    case 88: /* ElseBody  */
#line 37 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2171 "src/parser.c"
        break;

    case 89: /* ExpD  */
#line 37 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2177 "src/parser.c"
        break;

    case 90: /* Term  */
#line 37 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2183 "src/parser.c"
        break;

    case 91: /* Args  */
#line 37 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2189 "src/parser.c"
        break;

    case 92: /* Arg  */
#line 37 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2195 "src/parser.c"
        break;

    case 93: /* Patterns  */
#line 37 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2201 "src/parser.c"
        break;

    case 94: /* Pattern  */
#line 37 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2207 "src/parser.c"
        break;

    case 95: /* ArrayPats  */
#line 37 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2213 "src/parser.c"
        break;

    case 96: /* ObjPats  */
#line 37 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2219 "src/parser.c"
        break;

    case 97: /* ObjPat  */
#line 37 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2225 "src/parser.c"
        break;

    case 98: /* Keyword  */
#line 36 "src/parser.y"
            { jv_free(((*yyvaluep).literal)); }
#line 2231 "src/parser.c"
        break;

    case 99: /* MkDict  */
#line 37 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2237 "src/parser.c"
        break;

    case 100: /* MkDictPair  */
#line 37 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2243 "src/parser.c"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
      yychar = yylex (&yylval, &yylloc, answer, errors, locations, lexer_param_ptr);
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 310 "src/parser.y"
                   {  

  // it looks pretty when the boilerplate code calls to @main
  // but it's counter-productive: the call introduces an unneded frame

  // block main = gen_function("@main", gen_noop(), $3);
  // block call_main = block_bind_referenced(
  //   main,
  //   gen_location(@$, locations, gen_call("@main", gen_noop())),
  //   OP_IS_CALL_PSEUDO);

  block main_loop = BLOCK (
    gen_op_simple(START),
    (yyvsp[0].blk), // call_main
    gen_op_simple(TAIL_OUT)
  );

  *answer = BLOCK((yyvsp[-2].blk), (yyvsp[-1].blk), gen_marker(TOP), main_loop);
}
#line 2563 "src/parser.c"
    break;

  case 3:
#line 329 "src/parser.y"
                        {
  *answer = BLOCK((yyvsp[-2].blk), (yyvsp[-1].blk), (yyvsp[0].blk));
}
#line 2571 "src/parser.c"
    break;

  case 4:
#line 334 "src/parser.y"
       {
  (yyval.blk) = gen_noop();
}
#line 2579 "src/parser.c"
    break;

  case 5:
#line 337 "src/parser.y"
                 {
  if (!block_is_const((yyvsp[-1].blk))) {
    FAIL((yyloc), "Module metadata must be constant");
    (yyval.blk) = gen_noop();
    block_free((yyvsp[-1].blk));
  } else {
    (yyval.blk) = gen_module((yyvsp[-1].blk));
  }
}
#line 2593 "src/parser.c"
    break;

  case 6:
#line 348 "src/parser.y"
       {
  (yyval.blk) = gen_noop();
}
#line 2601 "src/parser.c"
    break;

  case 7:
#line 351 "src/parser.y"
               {
  (yyval.blk) = BLOCK((yyvsp[-1].blk), (yyvsp[0].blk));
}
#line 2609 "src/parser.c"
    break;

  case 8:
#line 356 "src/parser.y"
       {
  (yyval.blk) = gen_noop();
}
#line 2617 "src/parser.c"
    break;

  case 9:
#line 359 "src/parser.y"
                 {
  (yyval.blk) = block_join((yyvsp[-1].blk), (yyvsp[0].blk));
}
#line 2625 "src/parser.c"
    break;

  case 10:
#line 364 "src/parser.y"
                          {
  (yyval.blk) = block_bind_referenced((yyvsp[-1].blk), (yyvsp[0].blk), OP_IS_CALL_PSEUDO);
}
#line 2633 "src/parser.c"
    break;

  case 11:
#line 368 "src/parser.y"
                                                        {
  /* coexp(body) */
  block coexp = gen_call("coexp", gen_lambda((yyvsp[-2].blk)));
  /* as $IDENT | */
  block covar = gen_op_var_fresh(STOREV, jv_string_value((yyvsp[-4].literal)));
  /* def IDENT: $IDENT | fhread; */
  block codef = gen_function(
    jv_string_value((yyvsp[-4].literal)), 
    gen_noop(), 
    BLOCK(
      gen_op_unbound(LOADV, jv_string_value((yyvsp[-4].literal))), 
      gen_call("fhread", gen_noop())
    )
  );

  /* Now bind $9 so it sees the codef */
  block b = block_bind_referenced(codef, (yyvsp[0].blk), OP_IS_CALL_PSEUDO | OP_HAS_BINDING);
  
  /* Now bind that so it sees the variable $IDENT */
  b = block_bind_referenced(covar, b, OP_HAS_VARIABLE);

  /* Now do the rest of the binding for a $IDENT | Exp */
  covar = block_take_block(&b);
  (yyval.blk) = BLOCK(gen_const(jv_null()), gen_destructure(coexp, covar, b));
  jv_free((yyvsp[-4].literal));
}
#line 2664 "src/parser.c"
    break;

  case 12:
#line 395 "src/parser.y"
                           {
  (yyval.blk) = gen_destructure((yyvsp[-4].blk), (yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2672 "src/parser.c"
    break;

  case 13:
#line 398 "src/parser.y"
                                                {
  (yyval.blk) = gen_reduce((yyvsp[-7].blk), (yyvsp[-5].blk), (yyvsp[-3].blk), (yyvsp[-1].blk));
}
#line 2680 "src/parser.c"
    break;

  case 14:
#line 402 "src/parser.y"
                                                         {
  (yyval.blk) = gen_foreach((yyvsp[-9].blk), (yyvsp[-7].blk), (yyvsp[-5].blk), (yyvsp[-3].blk), (yyvsp[-1].blk));
}
#line 2688 "src/parser.c"
    break;

  case 15:
#line 406 "src/parser.y"
                                                 {
  (yyval.blk) = gen_foreach((yyvsp[-7].blk), (yyvsp[-5].blk), (yyvsp[-3].blk), (yyvsp[-1].blk), gen_noop());
}
#line 2696 "src/parser.c"
    break;

  case 16:
#line 410 "src/parser.y"
                             {
  (yyval.blk) = gen_cond((yyvsp[-3].blk), (yyvsp[-1].blk), (yyvsp[0].blk));
}
#line 2704 "src/parser.c"
    break;

  case 17:
#line 413 "src/parser.y"
                          {
  (yyval.blk) = gen_cond((yyvsp[-3].blk), (yyvsp[-1].blk), gen_noop());
}
#line 2712 "src/parser.c"
    break;

  case 18:
#line 416 "src/parser.y"
                      {
  FAIL((yyloc), "Possibly unterminated 'if' statement");
  (yyval.blk) = (yyvsp[-2].blk);
}
#line 2721 "src/parser.c"
    break;

  case 19:
#line 421 "src/parser.y"
                          {
  (yyval.blk) = gen_try((yyvsp[-3].blk), (yyvsp[-1].blk));
}
#line 2729 "src/parser.c"
    break;

  case 20:
#line 424 "src/parser.y"
                                  {
  (yyval.blk) = BLOCK(gen_call("_try_finally", BLOCK(gen_lambda((yyvsp[-5].blk)), gen_lambda((yyvsp[-3].blk)), gen_lambda((yyvsp[-1].blk)))));
}
#line 2737 "src/parser.c"
    break;

  case 21:
#line 427 "src/parser.y"
                      {
  (yyval.blk) = gen_try((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2745 "src/parser.c"
    break;

  case 22:
#line 430 "src/parser.y"
          {
  (yyval.blk) = gen_try((yyvsp[0].blk), gen_op_simple(BACKTRACK_0));
}
#line 2753 "src/parser.c"
    break;

  case 23:
#line 433 "src/parser.y"
                        {
  FAIL((yyloc), "Possibly unterminated 'try' statement");
  (yyval.blk) = (yyvsp[-2].blk);
}
#line 2762 "src/parser.c"
    break;

  case 24:
#line 438 "src/parser.y"
                          {
  jv v = jv_string_fmt("*label-%s", jv_string_value((yyvsp[-2].literal)));
  (yyval.blk) = gen_location((yyloc), locations, gen_label(jv_string_value(v), (yyvsp[0].blk)));
  jv_free((yyvsp[-2].literal));
  jv_free(v);
}
#line 2773 "src/parser.c"
    break;

  case 25:
#line 445 "src/parser.y"
        {
  (yyval.blk) = gen_try((yyvsp[-1].blk), gen_op_simple(BACKTRACK_0));
}
#line 2781 "src/parser.c"
    break;

  case 26:
#line 449 "src/parser.y"
            {
  (yyval.blk) = gen_call("_assign", BLOCK(gen_lambda((yyvsp[-2].blk)), gen_lambda((yyvsp[0].blk))));
}
#line 2789 "src/parser.c"
    break;

  case 27:
#line 453 "src/parser.y"
             {
  (yyval.blk) = gen_or((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2797 "src/parser.c"
    break;

  case 28:
#line 457 "src/parser.y"
              {
  (yyval.blk) = gen_and((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2805 "src/parser.c"
    break;

  case 29:
#line 461 "src/parser.y"
             {
  (yyval.blk) = gen_definedor((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2813 "src/parser.c"
    break;

  case 30:
#line 465 "src/parser.y"
              {
  (yyval.blk) = gen_definedor_assign((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2821 "src/parser.c"
    break;

  case 31:
#line 469 "src/parser.y"
             {
  (yyval.blk) = gen_call("_modify", BLOCK(gen_lambda((yyvsp[-2].blk)), gen_lambda((yyvsp[0].blk))));
}
#line 2829 "src/parser.c"
    break;

  case 32:
#line 473 "src/parser.y"
            {
  (yyval.blk) = block_join((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2837 "src/parser.c"
    break;

  case 33:
#line 477 "src/parser.y"
             {
  (yyval.blk) = block_join((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2845 "src/parser.c"
    break;

  case 34:
#line 481 "src/parser.y"
            {
  (yyval.blk) = gen_both((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2853 "src/parser.c"
    break;

  case 35:
#line 485 "src/parser.y"
            {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), '+');
}
#line 2861 "src/parser.c"
    break;

  case 36:
#line 489 "src/parser.y"
             {
  (yyval.blk) = gen_update((yyvsp[-2].blk), (yyvsp[0].blk), '+');
}
#line 2869 "src/parser.c"
    break;

  case 37:
#line 493 "src/parser.y"
        {
  (yyval.blk) = BLOCK((yyvsp[0].blk), gen_call("_negate", gen_noop()));
}
#line 2877 "src/parser.c"
    break;

  case 38:
#line 497 "src/parser.y"
            {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), '-');
}
#line 2885 "src/parser.c"
    break;

  case 39:
#line 501 "src/parser.y"
             {
  (yyval.blk) = gen_update((yyvsp[-2].blk), (yyvsp[0].blk), '-');
}
#line 2893 "src/parser.c"
    break;

  case 40:
#line 505 "src/parser.y"
            {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), '*');
}
#line 2901 "src/parser.c"
    break;

  case 41:
#line 509 "src/parser.y"
             {
  (yyval.blk) = gen_update((yyvsp[-2].blk), (yyvsp[0].blk), '*');
}
#line 2909 "src/parser.c"
    break;

  case 42:
#line 513 "src/parser.y"
            {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), '/');
  if (block_is_const_inf((yyval.blk)))
    FAIL((yyloc), "Division by zero?");
}
#line 2919 "src/parser.c"
    break;

  case 43:
#line 519 "src/parser.y"
            {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), '%');
  if (block_is_const_inf((yyval.blk)))
    FAIL((yyloc), "Remainder by zero?");
}
#line 2929 "src/parser.c"
    break;

  case 44:
#line 525 "src/parser.y"
             {
  (yyval.blk) = gen_update((yyvsp[-2].blk), (yyvsp[0].blk), '/');
}
#line 2937 "src/parser.c"
    break;

  case 45:
#line 529 "src/parser.y"
               {
  (yyval.blk) = gen_update((yyvsp[-2].blk), (yyvsp[0].blk), '%');
}
#line 2945 "src/parser.c"
    break;

  case 46:
#line 533 "src/parser.y"
             {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), EQ);
}
#line 2953 "src/parser.c"
    break;

  case 47:
#line 537 "src/parser.y"
             {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), NEQ);
}
#line 2961 "src/parser.c"
    break;

  case 48:
#line 541 "src/parser.y"
            {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), '<');
}
#line 2969 "src/parser.c"
    break;

  case 49:
#line 545 "src/parser.y"
            {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), '>');
}
#line 2977 "src/parser.c"
    break;

  case 50:
#line 549 "src/parser.y"
             {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), LESSEQ);
}
#line 2985 "src/parser.c"
    break;

  case 51:
#line 553 "src/parser.y"
             {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), GREATEREQ);
}
#line 2993 "src/parser.c"
    break;

  case 52:
#line 557 "src/parser.y"
     {
  (yyval.blk) = (yyvsp[0].blk);
}
#line 3001 "src/parser.c"
    break;

  case 53:
#line 562 "src/parser.y"
               {
  (yyval.blk) = (yyvsp[-1].blk);
}
#line 3009 "src/parser.c"
    break;

  case 54:
#line 565 "src/parser.y"
                   {
  if (!block_is_const((yyvsp[-1].blk))) {
    FAIL((yyloc), "Module metadata must be constant");
    (yyval.blk) = gen_noop();
    block_free((yyvsp[-2].blk));
    block_free((yyvsp[-1].blk));
  } else if (block_const_kind((yyvsp[-1].blk)) != JV_KIND_OBJECT) {
    FAIL((yyloc), "Module metadata must be an object");
    (yyval.blk) = gen_noop();
    block_free((yyvsp[-2].blk));
    block_free((yyvsp[-1].blk));
  } else {
    (yyval.blk) = gen_import_meta((yyvsp[-2].blk), (yyvsp[-1].blk));
  }
}
#line 3029 "src/parser.c"
    break;

  case 55:
#line 582 "src/parser.y"
                                   {
  jv v = block_const((yyvsp[-3].blk));
  // XXX Make gen_import take only blocks and the int is_data so we
  // don't have to free so much stuff here
  (yyval.blk) = gen_import(jv_string_value(v), jv_string_value((yyvsp[0].literal)), 1);
  block_free((yyvsp[-3].blk));
  jv_free((yyvsp[0].literal));
  jv_free(v);
}
#line 3043 "src/parser.c"
    break;

  case 56:
#line 591 "src/parser.y"
                               {
  jv v = block_const((yyvsp[-2].blk));
  (yyval.blk) = gen_import(jv_string_value(v), jv_string_value((yyvsp[0].literal)), 0);
  block_free((yyvsp[-2].blk));
  jv_free((yyvsp[0].literal));
  jv_free(v);
}
#line 3055 "src/parser.c"
    break;

  case 57:
#line 598 "src/parser.y"
                     {
  jv v = block_const((yyvsp[0].blk));
  (yyval.blk) = gen_import(jv_string_value(v), NULL, 0);
  block_free((yyvsp[0].blk));
  jv_free(v);
}
#line 3066 "src/parser.c"
    break;

  case 58:
#line 606 "src/parser.y"
       {
  if (!block_is_const((yyvsp[0].blk))) {
    FAIL((yyloc), "Import path must be constant");
    (yyval.blk) = gen_const(jv_string(""));
    block_free((yyvsp[0].blk));
  } else {
    (yyval.blk) = (yyvsp[0].blk);
  }
}
#line 3080 "src/parser.c"
    break;

  case 59:
#line 617 "src/parser.y"
                        {
  (yyval.blk) = gen_function(jv_string_value((yyvsp[-3].literal)), gen_noop(), (yyvsp[-1].blk));
  jv_free((yyvsp[-3].literal));
}
#line 3089 "src/parser.c"
    break;

  case 60:
#line 622 "src/parser.y"
                                       {
  (yyval.blk) = gen_function(jv_string_value((yyvsp[-6].literal)), (yyvsp[-4].blk), (yyvsp[-1].blk));
  jv_free((yyvsp[-6].literal));
}
#line 3098 "src/parser.c"
    break;

  case 61:
#line 628 "src/parser.y"
      {
  (yyval.blk) = (yyvsp[0].blk);
}
#line 3106 "src/parser.c"
    break;

  case 62:
#line 631 "src/parser.y"
                 {
  (yyval.blk) = BLOCK((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 3114 "src/parser.c"
    break;

  case 63:
#line 636 "src/parser.y"
          {
  (yyval.blk) = gen_param_regular(jv_string_value((yyvsp[0].literal)));
  jv_free((yyvsp[0].literal));
}
#line 3123 "src/parser.c"
    break;

  case 64:
#line 640 "src/parser.y"
            {
  (yyval.blk) = gen_param_regular(jv_string_value((yyvsp[0].literal)));
  jv_free((yyvsp[0].literal));
}
#line 3132 "src/parser.c"
    break;

  case 65:
#line 644 "src/parser.y"
           {
  (yyval.blk) = gen_param_coexpr(jv_string_value((yyvsp[0].literal)));
  jv_free((yyvsp[0].literal));
}
#line 3141 "src/parser.c"
    break;

  case 66:
#line 648 "src/parser.y"
      {
  (yyval.blk) = gen_param(jv_string_value((yyvsp[0].literal)));
  jv_free((yyvsp[0].literal));
}
#line 3150 "src/parser.c"
    break;

  case 67:
#line 655 "src/parser.y"
               { (yyval.literal) = jv_string("text"); }
#line 3156 "src/parser.c"
    break;

  case 68:
#line 655 "src/parser.y"
                                                                          {
  (yyval.blk) = (yyvsp[-1].blk);
  jv_free((yyvsp[-2].literal));
}
#line 3165 "src/parser.c"
    break;

  case 69:
#line 659 "src/parser.y"
                      { (yyval.literal) = (yyvsp[-1].literal); }
#line 3171 "src/parser.c"
    break;

  case 70:
#line 659 "src/parser.y"
                                                                  {
  (yyval.blk) = (yyvsp[-1].blk);
  jv_free((yyvsp[-2].literal));
}
#line 3180 "src/parser.c"
    break;

  case 71:
#line 666 "src/parser.y"
       {
  (yyval.blk) = gen_const(jv_string(""));
}
#line 3188 "src/parser.c"
    break;

  case 72:
#line 669 "src/parser.y"
                       {
  (yyval.blk) = gen_binop((yyvsp[-1].blk), gen_const((yyvsp[0].literal)), '+');
}
#line 3196 "src/parser.c"
    break;

  case 73:
#line 672 "src/parser.y"
                                                       {
  (yyval.blk) = gen_binop((yyvsp[-3].blk), gen_format((yyvsp[-1].blk), jv_copy((yyvsp[-4].literal))), '+');
}
#line 3204 "src/parser.c"
    break;

  case 74:
#line 678 "src/parser.y"
                               {
  (yyval.blk) = gen_cond((yyvsp[-3].blk), (yyvsp[-1].blk), (yyvsp[0].blk));
}
#line 3212 "src/parser.c"
    break;

  case 75:
#line 681 "src/parser.y"
                 {
  (yyval.blk) = (yyvsp[-1].blk);
}
#line 3220 "src/parser.c"
    break;

  case 76:
#line 686 "src/parser.y"
              {
  (yyval.blk) = block_join((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 3228 "src/parser.c"
    break;

  case 77:
#line 689 "src/parser.y"
         {
  (yyval.blk) = BLOCK((yyvsp[0].blk), gen_call("_negate", gen_noop()));
}
#line 3236 "src/parser.c"
    break;

  case 78:
#line 692 "src/parser.y"
     {
  (yyval.blk) = (yyvsp[0].blk);
}
#line 3244 "src/parser.c"
    break;

  case 79:
#line 698 "src/parser.y"
    {
  (yyval.blk) = gen_noop();
}
#line 3252 "src/parser.c"
    break;

  case 80:
#line 701 "src/parser.y"
    {
  (yyval.blk) = gen_call("recurse", gen_noop());
}
#line 3260 "src/parser.c"
    break;

  case 81:
#line 704 "src/parser.y"
                {
  jv v = jv_string_fmt("*label-%s", jv_string_value((yyvsp[0].literal)));     // impossible symbol
  (yyval.blk) = gen_location((yyloc), locations,
                    gen_op_unbound(BACKTRACK_PC, jv_string_value(v)));
  jv_free(v);
  jv_free((yyvsp[0].literal));
}
#line 3272 "src/parser.c"
    break;

  case 82:
#line 711 "src/parser.y"
            {
  FAIL((yyloc), "break requires a label to break to");
  (yyval.blk) = gen_noop();
}
#line 3281 "src/parser.c"
    break;

  case 83:
#line 715 "src/parser.y"
              {
  (yyval.blk) = gen_op_const(BACKTRACK_N, (yyvsp[0].literal));
}
#line 3289 "src/parser.c"
    break;

  case 84:
#line 718 "src/parser.y"
               {
  (yyval.blk) = gen_index_opt((yyvsp[-2].blk), gen_const((yyvsp[-1].literal)));
}
#line 3297 "src/parser.c"
    break;

  case 85:
#line 721 "src/parser.y"
          {
  (yyval.blk) = gen_index_opt(gen_noop(), gen_const((yyvsp[-1].literal)));
}
#line 3305 "src/parser.c"
    break;

  case 86:
#line 724 "src/parser.y"
                    {
  (yyval.blk) = gen_index_opt((yyvsp[-3].blk), (yyvsp[-1].blk));
}
#line 3313 "src/parser.c"
    break;

  case 87:
#line 727 "src/parser.y"
               {
  (yyval.blk) = gen_index_opt(gen_noop(), (yyvsp[-1].blk));
}
#line 3321 "src/parser.c"
    break;

  case 88:
#line 730 "src/parser.y"
                        {
  (yyval.blk) = gen_index((yyvsp[-1].blk), gen_const((yyvsp[0].literal)));
}
#line 3329 "src/parser.c"
    break;

  case 89:
#line 733 "src/parser.y"
                   {
  (yyval.blk) = gen_index(gen_noop(), gen_const((yyvsp[0].literal)));
}
#line 3337 "src/parser.c"
    break;

  case 90:
#line 736 "src/parser.y"
                             {
  (yyval.blk) = gen_index((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 3345 "src/parser.c"
    break;

  case 91:
#line 739 "src/parser.y"
                        {
  (yyval.blk) = gen_index(gen_noop(), (yyvsp[0].blk));
}
#line 3353 "src/parser.c"
    break;

  case 92:
#line 742 "src/parser.y"
          {
  FAIL((yyloc), "try .[\"field\"] instead of .field for unusually named fields");
  (yyval.blk) = gen_noop();
}
#line 3362 "src/parser.c"
    break;

  case 93:
#line 746 "src/parser.y"
                {
  jv_free((yyvsp[-1].literal));
  FAIL((yyloc), "try .[\"field\"] instead of .field for unusually named fields");
  (yyval.blk) = gen_noop();
}
#line 3372 "src/parser.c"
    break;

  case 94:
#line 752 "src/parser.y"
                     {
  (yyval.blk) = gen_index_opt((yyvsp[-4].blk), (yyvsp[-2].blk));
}
#line 3380 "src/parser.c"
    break;

  case 95:
#line 755 "src/parser.y"
                              {
  (yyval.blk) = gen_index((yyvsp[-3].blk), (yyvsp[-1].blk));
}
#line 3388 "src/parser.c"
    break;

  case 96:
#line 758 "src/parser.y"
                         {
  (yyval.blk) = gen_index_opt((yyvsp[-5].blk), (yyvsp[-2].blk));
}
#line 3396 "src/parser.c"
    break;

  case 97:
#line 761 "src/parser.y"
                                  {
  (yyval.blk) = gen_index((yyvsp[-4].blk), (yyvsp[-1].blk));
}
#line 3404 "src/parser.c"
    break;

  case 98:
#line 764 "src/parser.y"
                 {
  (yyval.blk) = block_join((yyvsp[-3].blk), gen_op_simple(EACH_OPT));
}
#line 3412 "src/parser.c"
    break;

  case 99:
#line 767 "src/parser.y"
                          {
  (yyval.blk) = block_join((yyvsp[-2].blk), gen_op_simple(EACH));
}
#line 3420 "src/parser.c"
    break;

  case 100:
#line 770 "src/parser.y"
                             {
  (yyval.blk) = gen_slice_index((yyvsp[-6].blk), (yyvsp[-4].blk), (yyvsp[-2].blk), INDEX_OPT);
}
#line 3428 "src/parser.c"
    break;

  case 101:
#line 773 "src/parser.y"
                         {
  (yyval.blk) = gen_slice_index((yyvsp[-5].blk), (yyvsp[-3].blk), gen_const(jv_null()), INDEX_OPT);
}
#line 3436 "src/parser.c"
    break;

  case 102:
#line 776 "src/parser.y"
                         {
  (yyval.blk) = gen_slice_index((yyvsp[-5].blk), gen_const(jv_null()), (yyvsp[-2].blk), INDEX_OPT);
}
#line 3444 "src/parser.c"
    break;

  case 103:
#line 779 "src/parser.y"
                                      {
  (yyval.blk) = gen_slice_index((yyvsp[-5].blk), (yyvsp[-3].blk), (yyvsp[-1].blk), INDEX);
}
#line 3452 "src/parser.c"
    break;

  case 104:
#line 782 "src/parser.y"
                                  {
  (yyval.blk) = gen_slice_index((yyvsp[-4].blk), (yyvsp[-2].blk), gen_const(jv_null()), INDEX);
}
#line 3460 "src/parser.c"
    break;

  case 105:
#line 785 "src/parser.y"
                                  {
  (yyval.blk) = gen_slice_index((yyvsp[-4].blk), gen_const(jv_null()), (yyvsp[-1].blk), INDEX);
}
#line 3468 "src/parser.c"
    break;

  case 106:
#line 788 "src/parser.y"
        {
  (yyval.blk) = gen_const((yyvsp[0].literal));
}
#line 3476 "src/parser.c"
    break;

  case 107:
#line 791 "src/parser.y"
       {
  (yyval.blk) = (yyvsp[0].blk);
}
#line 3484 "src/parser.c"
    break;

  case 108:
#line 794 "src/parser.y"
       {
  (yyval.blk) = gen_format(gen_noop(), (yyvsp[0].literal));
}
#line 3492 "src/parser.c"
    break;

  case 109:
#line 797 "src/parser.y"
            {
  (yyval.blk) = (yyvsp[-1].blk);
}
#line 3500 "src/parser.c"
    break;

  case 110:
#line 800 "src/parser.y"
            {
  (yyval.blk) = gen_collect((yyvsp[-1].blk));
}
#line 3508 "src/parser.c"
    break;

  case 111:
#line 803 "src/parser.y"
        {
  (yyval.blk) = gen_const(jv_array());
}
#line 3516 "src/parser.c"
    break;

  case 112:
#line 806 "src/parser.y"
               {
  block o = gen_const_object((yyvsp[-1].blk));
  if (o.first != NULL)
    (yyval.blk) = o;
  else
    (yyval.blk) = BLOCK(gen_subexp(gen_const(jv_object())), (yyvsp[-1].blk), gen_op_simple(POP));
}
#line 3528 "src/parser.c"
    break;

  case 113:
#line 813 "src/parser.y"
          {
  (yyval.blk) = gen_location((yyloc), locations, gen_op_unbound(LOADV, jv_string_value((yyvsp[0].literal))));
  jv_free((yyvsp[0].literal));
}
#line 3537 "src/parser.c"
    break;

  case 114:
#line 817 "src/parser.y"
            {
  if (strcmp(jv_string_value((yyvsp[0].literal)), "__loc__") == 0) {
    (yyval.blk) = gen_const(JV_OBJECT(jv_string("file"), jv_copy(locations->fname),
                             jv_string("line"), jv_number(locfile_get_line(locations, (yyloc).start) + 1)));
  } else {
    (yyval.blk) = gen_location((yyloc), locations, gen_op_unbound(LOADV, jv_string_value((yyvsp[0].literal))));
  }
  jv_free((yyvsp[0].literal));
}
#line 3551 "src/parser.c"
    break;

  case 115:
#line 826 "src/parser.y"
      {
  const char *s = jv_string_value((yyvsp[0].literal));
  if (strcmp(s, "false") == 0)
    (yyval.blk) = gen_const(jv_false());
  else if (strcmp(s, "true") == 0)
    (yyval.blk) = gen_const(jv_true());
  else if (strcmp(s, "null") == 0)
    (yyval.blk) = gen_const(jv_null());
  else
    (yyval.blk) = gen_location((yyloc), locations, gen_call(s, gen_noop()));
  jv_free((yyvsp[0].literal));
}
#line 3568 "src/parser.c"
    break;

  case 116:
#line 838 "src/parser.y"
                   {
  (yyval.blk) = gen_call(jv_string_value((yyvsp[-3].literal)), (yyvsp[-1].blk));
  (yyval.blk) = gen_location((yylsp[-3]), locations, (yyval.blk));
  jv_free((yyvsp[-3].literal));
}
#line 3578 "src/parser.c"
    break;

  case 117:
#line 843 "src/parser.y"
              { (yyval.blk) = gen_noop(); }
#line 3584 "src/parser.c"
    break;

  case 118:
#line 844 "src/parser.y"
              { (yyval.blk) = gen_noop(); }
#line 3590 "src/parser.c"
    break;

  case 119:
#line 845 "src/parser.y"
                   { (yyval.blk) = (yyvsp[-3].blk); }
#line 3596 "src/parser.c"
    break;

  case 120:
#line 846 "src/parser.y"
              { (yyval.blk) = gen_noop(); }
#line 3602 "src/parser.c"
    break;

  case 121:
#line 849 "src/parser.y"
    {
  (yyval.blk) = (yyvsp[0].blk);
}
#line 3610 "src/parser.c"
    break;

  case 122:
#line 852 "src/parser.y"
             {
  (yyval.blk) = BLOCK((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 3618 "src/parser.c"
    break;

  case 123:
#line 857 "src/parser.y"
    {
  (yyval.blk) = gen_lambda((yyvsp[0].blk));
}
#line 3626 "src/parser.c"
    break;

  case 124:
#line 862 "src/parser.y"
                       {
  (yyval.blk) = BLOCK((yyvsp[-2].blk), gen_destructure_alt((yyvsp[0].blk)));
}
#line 3634 "src/parser.c"
    break;

  case 125:
#line 865 "src/parser.y"
        {
  (yyval.blk) = gen_destructure_alt((yyvsp[0].blk));
}
#line 3642 "src/parser.c"
    break;

  case 126:
#line 870 "src/parser.y"
          {
  (yyval.blk) = gen_op_unbound(STOREV, jv_string_value((yyvsp[0].literal)));
  jv_free((yyvsp[0].literal));
}
#line 3651 "src/parser.c"
    break;

  case 127:
#line 874 "src/parser.y"
                  {
  (yyval.blk) = BLOCK((yyvsp[-1].blk), gen_op_simple(POP));
}
#line 3659 "src/parser.c"
    break;

  case 128:
#line 877 "src/parser.y"
                {
  (yyval.blk) = BLOCK((yyvsp[-1].blk), gen_op_simple(POP));
}
#line 3667 "src/parser.c"
    break;

  case 129:
#line 882 "src/parser.y"
        {
  (yyval.blk) = gen_array_matcher(gen_noop(), (yyvsp[0].blk));
}
#line 3675 "src/parser.c"
    break;

  case 130:
#line 885 "src/parser.y"
                      {
  (yyval.blk) = gen_array_matcher((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 3683 "src/parser.c"
    break;

  case 131:
#line 890 "src/parser.y"
       {
  (yyval.blk) = (yyvsp[0].blk);
}
#line 3691 "src/parser.c"
    break;

  case 132:
#line 893 "src/parser.y"
                   {
  (yyval.blk) = BLOCK((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 3699 "src/parser.c"
    break;

  case 133:
#line 898 "src/parser.y"
          {
  (yyval.blk) = gen_object_matcher(gen_const((yyvsp[0].literal)), gen_op_unbound(STOREV, jv_string_value((yyvsp[0].literal))));
}
#line 3707 "src/parser.c"
    break;

  case 134:
#line 901 "src/parser.y"
                      {
  (yyval.blk) = gen_object_matcher(gen_const((yyvsp[-2].literal)), BLOCK(gen_op_simple(DUP), gen_op_unbound(STOREV, jv_string_value((yyvsp[-2].literal))), (yyvsp[0].blk)));
}
#line 3715 "src/parser.c"
    break;

  case 135:
#line 904 "src/parser.y"
                  {
  (yyval.blk) = gen_object_matcher(gen_const((yyvsp[-2].literal)), (yyvsp[0].blk));
}
#line 3723 "src/parser.c"
    break;

  case 136:
#line 907 "src/parser.y"
                    {
  (yyval.blk) = gen_object_matcher(gen_const((yyvsp[-2].literal)), (yyvsp[0].blk));
}
#line 3731 "src/parser.c"
    break;

  case 137:
#line 910 "src/parser.y"
                   {
  (yyval.blk) = gen_object_matcher((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 3739 "src/parser.c"
    break;

  case 138:
#line 913 "src/parser.y"
                        {
  jv msg = check_object_key((yyvsp[-3].blk));
  if (jv_is_valid(msg)) {
    FAIL((yyloc), jv_string_value(msg));
  }
  jv_free(msg);
  (yyval.blk) = gen_object_matcher((yyvsp[-3].blk), (yyvsp[0].blk));
}
#line 3752 "src/parser.c"
    break;

  case 139:
#line 921 "src/parser.y"
                  {
  FAIL((yyloc), "May need parentheses around object key expression");
  (yyval.blk) = (yyvsp[0].blk);
}
#line 3761 "src/parser.c"
    break;

  case 140:
#line 927 "src/parser.y"
     {
  (yyval.literal) = jv_string("as");
}
#line 3769 "src/parser.c"
    break;

  case 141:
#line 930 "src/parser.y"
      {
  (yyval.literal) = jv_string("def");
}
#line 3777 "src/parser.c"
    break;

  case 142:
#line 933 "src/parser.y"
        {
  (yyval.literal) = jv_string("codef");
}
#line 3785 "src/parser.c"
    break;

  case 143:
#line 936 "src/parser.y"
         {
  (yyval.literal) = jv_string("module");
}
#line 3793 "src/parser.c"
    break;

  case 144:
#line 939 "src/parser.y"
         {
  (yyval.literal) = jv_string("import");
}
#line 3801 "src/parser.c"
    break;

  case 145:
#line 942 "src/parser.y"
          {
  (yyval.literal) = jv_string("include");
}
#line 3809 "src/parser.c"
    break;

  case 146:
#line 945 "src/parser.y"
     {
  (yyval.literal) = jv_string("if");
}
#line 3817 "src/parser.c"
    break;

  case 147:
#line 948 "src/parser.y"
       {
  (yyval.literal) = jv_string("then");
}
#line 3825 "src/parser.c"
    break;

  case 148:
#line 951 "src/parser.y"
       {
  (yyval.literal) = jv_string("else");
}
#line 3833 "src/parser.c"
    break;

  case 149:
#line 954 "src/parser.y"
       {
  (yyval.literal) = jv_string("elif");
}
#line 3841 "src/parser.c"
    break;

  case 150:
#line 957 "src/parser.y"
         {
  (yyval.literal) = jv_string("reduce");
}
#line 3849 "src/parser.c"
    break;

  case 151:
#line 960 "src/parser.y"
          {
  (yyval.literal) = jv_string("foreach");
}
#line 3857 "src/parser.c"
    break;

  case 152:
#line 963 "src/parser.y"
      {
  (yyval.literal) = jv_string("end");
}
#line 3865 "src/parser.c"
    break;

  case 153:
#line 966 "src/parser.y"
      {
  (yyval.literal) = jv_string("and");
}
#line 3873 "src/parser.c"
    break;

  case 154:
#line 969 "src/parser.y"
     {
  (yyval.literal) = jv_string("or");
}
#line 3881 "src/parser.c"
    break;

  case 155:
#line 972 "src/parser.y"
      {
  (yyval.literal) = jv_string("try");
}
#line 3889 "src/parser.c"
    break;

  case 156:
#line 975 "src/parser.y"
        {
  (yyval.literal) = jv_string("catch");
}
#line 3897 "src/parser.c"
    break;

  case 157:
#line 978 "src/parser.y"
        {
  (yyval.literal) = jv_string("label");
}
#line 3905 "src/parser.c"
    break;

  case 158:
#line 981 "src/parser.y"
        {
  (yyval.literal) = jv_string("break");
}
#line 3913 "src/parser.c"
    break;

  case 159:
#line 984 "src/parser.y"
          {
  (yyval.literal) = jv_string("__loc__");
}
#line 3921 "src/parser.c"
    break;

  case 160:
#line 989 "src/parser.y"
       {
  (yyval.blk)=gen_noop();
}
#line 3929 "src/parser.c"
    break;

  case 161:
#line 992 "src/parser.y"
            { (yyval.blk) = (yyvsp[0].blk); }
#line 3935 "src/parser.c"
    break;

  case 162:
#line 993 "src/parser.y"
                        { (yyval.blk)=block_join((yyvsp[-2].blk), (yyvsp[0].blk)); }
#line 3941 "src/parser.c"
    break;

  case 163:
#line 994 "src/parser.y"
                   { (yyval.blk) = (yyvsp[0].blk); }
#line 3947 "src/parser.c"
    break;

  case 164:
#line 997 "src/parser.y"
               {
  (yyval.blk) = gen_dictpair(gen_const((yyvsp[-2].literal)), (yyvsp[0].blk));
 }
#line 3955 "src/parser.c"
    break;

  case 165:
#line 1000 "src/parser.y"
                   {
  (yyval.blk) = gen_dictpair(gen_const((yyvsp[-2].literal)), (yyvsp[0].blk));
  }
#line 3963 "src/parser.c"
    break;

  case 166:
#line 1003 "src/parser.y"
                  {
  (yyval.blk) = gen_dictpair((yyvsp[-2].blk), (yyvsp[0].blk));
  }
#line 3971 "src/parser.c"
    break;

  case 167:
#line 1006 "src/parser.y"
         {
  (yyval.blk) = gen_dictpair((yyvsp[0].blk), BLOCK(gen_op_simple(POP), gen_op_simple(DUP2),
                              gen_op_simple(DUP2), gen_op_simple(INDEX)));
  }
#line 3980 "src/parser.c"
    break;

  case 168:
#line 1010 "src/parser.y"
                     {
  (yyval.blk) = gen_dictpair(gen_location((yyloc), locations, gen_op_unbound(LOADV, jv_string_value((yyvsp[-2].literal)))),
                    (yyvsp[0].blk));
  }
#line 3989 "src/parser.c"
    break;

  case 169:
#line 1014 "src/parser.y"
            {
  (yyval.blk) = gen_dictpair(gen_const((yyvsp[0].literal)),
                    gen_location((yyloc), locations, gen_op_unbound(LOADV, jv_string_value((yyvsp[0].literal)))));
  }
#line 3998 "src/parser.c"
    break;

  case 170:
#line 1018 "src/parser.y"
              {
  (yyval.blk) = gen_dictpair(gen_const((yyvsp[0].literal)),
                    gen_location((yyloc), locations, gen_op_unbound(LOADV, jv_string_value((yyvsp[0].literal)))));
  }
#line 4007 "src/parser.c"
    break;

  case 171:
#line 1022 "src/parser.y"
        {
  (yyval.blk) = gen_dictpair(gen_const(jv_copy((yyvsp[0].literal))),
                    gen_index(gen_noop(), gen_const((yyvsp[0].literal))));
  }
#line 4016 "src/parser.c"
    break;

  case 172:
#line 1026 "src/parser.y"
          {
  (yyval.blk) = gen_dictpair(gen_const(jv_copy((yyvsp[0].literal))),
                    gen_index(gen_noop(), gen_const((yyvsp[0].literal))));
  }
#line 4025 "src/parser.c"
    break;

  case 173:
#line 1030 "src/parser.y"
                       {
  jv msg = check_object_key((yyvsp[-3].blk));
  if (jv_is_valid(msg)) {
    FAIL((yyloc), jv_string_value(msg));
  }
  jv_free(msg);
  (yyval.blk) = gen_dictpair((yyvsp[-3].blk), (yyvsp[0].blk));
  }
#line 4038 "src/parser.c"
    break;

  case 174:
#line 1038 "src/parser.y"
                 {
  FAIL((yyloc), "May need parentheses around object key expression");
  (yyval.blk) = (yyvsp[0].blk);
  }
#line 4047 "src/parser.c"
    break;


#line 4051 "src/parser.c"

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
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
      yyerror (&yylloc, answer, errors, locations, lexer_param_ptr, YY_("syntax error"));
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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
        yyerror (&yylloc, answer, errors, locations, lexer_param_ptr, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, answer, errors, locations, lexer_param_ptr);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, answer, errors, locations, lexer_param_ptr);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, answer, errors, locations, lexer_param_ptr, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, answer, errors, locations, lexer_param_ptr);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp, answer, errors, locations, lexer_param_ptr);
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
#line 1042 "src/parser.y"


int jq_parse(struct locfile* locations, block* answer) {
  struct lexer_param scanner;
  YY_BUFFER_STATE buf;
  jq_yylex_init_extra(0, &scanner.lexer);
  buf = jq_yy_scan_bytes(locations->data, locations->length, scanner.lexer);
  int errors = 0;
  *answer = gen_noop();
  yyparse(answer, &errors, locations, &scanner);
  jq_yy_delete_buffer(buf, scanner.lexer);
  jq_yylex_destroy(scanner.lexer);
  if (errors > 0) {
    block_free(*answer);
    *answer = gen_noop();
  }
  return errors;
}

int jq_parse_library(struct locfile* locations, block* answer) {
  int errs = jq_parse(locations, answer);
  if (errs) return errs;
  if (block_has_main(*answer)) {
    locfile_locate(locations, UNKNOWN_LOCATION, "jq: error: library should only have function definitions, not a main expression");
    return 1;
  }
  assert(block_has_only_binders_and_imports(*answer, OP_IS_CALL_PSEUDO));
  return 0;
}
