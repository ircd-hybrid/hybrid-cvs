/* A Bison parser, made by GNU Bison 1.875.  */
/* $Id: y.tab.c,v 7.22 2005/07/10 19:46:18 adx Exp $ */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ACCEPT_PASSWORD = 258,
     ACTION = 259,
     ADMIN = 260,
     AFTYPE = 261,
     T_ALLOW = 262,
     ANTI_NICK_FLOOD = 263,
     ANTI_SPAM_EXIT_MESSAGE_TIME = 264,
     IRCD_AUTH = 265,
     AUTOCONN = 266,
     T_BLOCK = 267,
     BURST_AWAY = 268,
     BYTES = 269,
     KBYTES = 270,
     MBYTES = 271,
     GBYTES = 272,
     TBYTES = 273,
     CALLER_ID_WAIT = 274,
     CAN_FLOOD = 275,
     CAN_IDLE = 276,
     CHANNEL = 277,
     CIPHER_PREFERENCE = 278,
     CLASS = 279,
     COMPRESSED = 280,
     COMPRESSION_LEVEL = 281,
     CONNECT = 282,
     CONNECTFREQ = 283,
     CRYPTLINK = 284,
     DEFAULT_CIPHER_PREFERENCE = 285,
     DEFAULT_FLOODCOUNT = 286,
     DEFAULT_SPLIT_SERVER_COUNT = 287,
     DEFAULT_SPLIT_USER_COUNT = 288,
     DENY = 289,
     DESCRIPTION = 290,
     DIE = 291,
     DISABLE_AUTH = 292,
     DISABLE_HIDDEN = 293,
     DISABLE_LOCAL_CHANNELS = 294,
     DISABLE_REMOTE_COMMANDS = 295,
     DOT_IN_IP6_ADDR = 296,
     DOTS_IN_IDENT = 297,
     DURATION = 298,
     EGDPOOL_PATH = 299,
     EMAIL = 300,
     ENABLE = 301,
     ENCRYPTED = 302,
     EXCEED_LIMIT = 303,
     EXEMPT = 304,
     FAILED_OPER_NOTICE = 305,
     FAKENAME = 306,
     IRCD_FLAGS = 307,
     FLATTEN_LINKS = 308,
     FFAILED_OPERLOG = 309,
     FOPERLOG = 310,
     FUSERLOG = 311,
     GECOS = 312,
     GENERAL = 313,
     GLINE = 314,
     GLINES = 315,
     GLINE_EXEMPT = 316,
     GLINE_LOG = 317,
     GLINE_TIME = 318,
     GLINE_MIN_CIDR = 319,
     GLINE_MIN_CIDR6 = 320,
     GLOBAL_KILL = 321,
     NEED_IDENT = 322,
     HAVENT_READ_CONF = 323,
     HIDDEN = 324,
     HIDDEN_ADMIN = 325,
     HIDDEN_OPER = 326,
     HIDE_SERVER_IPS = 327,
     HIDE_SERVERS = 328,
     HIDE_SPOOF_IPS = 329,
     HOST = 330,
     HUB = 331,
     HUB_MASK = 332,
     IDLETIME = 333,
     IGNORE_BOGUS_TS = 334,
     IP = 335,
     KILL = 336,
     KILL_CHASE_TIME_LIMIT = 337,
     KLINE = 338,
     KLINE_EXEMPT = 339,
     KLINE_REASON = 340,
     KLINE_WITH_REASON = 341,
     KNOCK_DELAY = 342,
     KNOCK_DELAY_CHANNEL = 343,
     LAZYLINK = 344,
     LEAF_MASK = 345,
     LINKS_DELAY = 346,
     LISTEN = 347,
     LOGGING = 348,
     LOG_LEVEL = 349,
     MAXIMUM_LINKS = 350,
     MAX_ACCEPT = 351,
     MAX_BANS = 352,
     MAX_CHANS_PER_USER = 353,
     MAX_GLOBAL = 354,
     MAX_IDENT = 355,
     MAX_LOCAL = 356,
     MAX_NICK_CHANGES = 357,
     MAX_NICK_TIME = 358,
     MAX_NUMBER = 359,
     MAX_TARGETS = 360,
     MESSAGE_LOCALE = 361,
     MIN_NONWILDCARD = 362,
     MIN_NONWILDCARD_SIMPLE = 363,
     MODULE = 364,
     MODULES = 365,
     NAME = 366,
     NEED_PASSWORD = 367,
     NETWORK_DESC = 368,
     NETWORK_NAME = 369,
     NICK = 370,
     NICK_CHANGES = 371,
     NO_CREATE_ON_SPLIT = 372,
     NO_JOIN_ON_SPLIT = 373,
     NO_OPER_FLOOD = 374,
     NO_TILDE = 375,
     NOT = 376,
     NUMBER = 377,
     NUMBER_PER_IDENT = 378,
     NUMBER_PER_IP = 379,
     NUMBER_PER_IP_GLOBAL = 380,
     OPERATOR = 381,
     OPER_LOG = 382,
     OPER_ONLY_UMODES = 383,
     OPER_PASS_RESV = 384,
     OPER_SPY_T = 385,
     OPER_UMODES = 386,
     INVITE_OPS_ONLY = 387,
     PACE_WAIT = 388,
     PACE_WAIT_SIMPLE = 389,
     PASSWORD = 390,
     PATH = 391,
     PING_COOKIE = 392,
     PING_TIME = 393,
     PORT = 394,
     QSTRING = 395,
     QUIET_ON_BAN = 396,
     REASON = 397,
     REDIRPORT = 398,
     REDIRSERV = 399,
     REHASH = 400,
     REMOTE = 401,
     REMOTEBAN = 402,
     RESTRICTED = 403,
     RSA_PRIVATE_KEY_FILE = 404,
     RSA_PUBLIC_KEY_FILE = 405,
     RESV = 406,
     RESV_EXEMPT = 407,
     SECONDS = 408,
     MINUTES = 409,
     HOURS = 410,
     DAYS = 411,
     WEEKS = 412,
     SENDQ = 413,
     SEND_PASSWORD = 414,
     SERVERHIDE = 415,
     SERVERINFO = 416,
     SERVLINK_PATH = 417,
     SID = 418,
     TKLINE_EXPIRE_NOTICES = 419,
     T_SHARED = 420,
     T_CLUSTER = 421,
     TYPE = 422,
     SHORT_MOTD = 423,
     SILENT = 424,
     SPOOF = 425,
     SPOOF_NOTICE = 426,
     STATS_I_OPER_ONLY = 427,
     STATS_K_OPER_ONLY = 428,
     STATS_O_OPER_ONLY = 429,
     STATS_P_OPER_ONLY = 430,
     TBOOL = 431,
     TMASKED = 432,
     T_REJECT = 433,
     TS_MAX_DELTA = 434,
     TS_WARN_DELTA = 435,
     TWODOTS = 436,
     T_ALL = 437,
     T_BOTS = 438,
     T_SOFTCALLERID = 439,
     T_CALLERID = 440,
     T_CCONN = 441,
     T_CLIENT_FLOOD = 442,
     T_DEBUG = 443,
     T_DRONE = 444,
     T_EXTERNAL = 445,
     T_FULL = 446,
     T_INVISIBLE = 447,
     T_IPV4 = 448,
     T_IPV6 = 449,
     T_LOCOPS = 450,
     T_LOGPATH = 451,
     T_L_CRIT = 452,
     T_L_DEBUG = 453,
     T_L_ERROR = 454,
     T_L_INFO = 455,
     T_L_NOTICE = 456,
     T_L_TRACE = 457,
     T_L_WARN = 458,
     T_MAX_CLIENTS = 459,
     T_NCHANGE = 460,
     T_OPERWALL = 461,
     T_REJ = 462,
     T_SERVNOTICE = 463,
     T_SKILL = 464,
     T_SPY = 465,
     T_UNAUTH = 466,
     T_UNRESV = 467,
     T_UNXLINE = 468,
     T_WALLOP = 469,
     THROTTLE_TIME = 470,
     TRUE_NO_OPER_FLOOD = 471,
     UNKLINE = 472,
     USER = 473,
     USE_EGD = 474,
     USE_EXCEPT = 475,
     USE_INVEX = 476,
     USE_KNOCK = 477,
     USE_LOGGING = 478,
     VHOST = 479,
     VHOST6 = 480,
     XLINE = 481,
     WARN = 482,
     WARN_NO_NLINE = 483
   };
#endif
#define ACCEPT_PASSWORD 258
#define ACTION 259
#define ADMIN 260
#define AFTYPE 261
#define T_ALLOW 262
#define ANTI_NICK_FLOOD 263
#define ANTI_SPAM_EXIT_MESSAGE_TIME 264
#define IRCD_AUTH 265
#define AUTOCONN 266
#define T_BLOCK 267
#define BURST_AWAY 268
#define BYTES 269
#define KBYTES 270
#define MBYTES 271
#define GBYTES 272
#define TBYTES 273
#define CALLER_ID_WAIT 274
#define CAN_FLOOD 275
#define CAN_IDLE 276
#define CHANNEL 277
#define CIPHER_PREFERENCE 278
#define CLASS 279
#define COMPRESSED 280
#define COMPRESSION_LEVEL 281
#define CONNECT 282
#define CONNECTFREQ 283
#define CRYPTLINK 284
#define DEFAULT_CIPHER_PREFERENCE 285
#define DEFAULT_FLOODCOUNT 286
#define DEFAULT_SPLIT_SERVER_COUNT 287
#define DEFAULT_SPLIT_USER_COUNT 288
#define DENY 289
#define DESCRIPTION 290
#define DIE 291
#define DISABLE_AUTH 292
#define DISABLE_HIDDEN 293
#define DISABLE_LOCAL_CHANNELS 294
#define DISABLE_REMOTE_COMMANDS 295
#define DOT_IN_IP6_ADDR 296
#define DOTS_IN_IDENT 297
#define DURATION 298
#define EGDPOOL_PATH 299
#define EMAIL 300
#define ENABLE 301
#define ENCRYPTED 302
#define EXCEED_LIMIT 303
#define EXEMPT 304
#define FAILED_OPER_NOTICE 305
#define FAKENAME 306
#define IRCD_FLAGS 307
#define FLATTEN_LINKS 308
#define FFAILED_OPERLOG 309
#define FOPERLOG 310
#define FUSERLOG 311
#define GECOS 312
#define GENERAL 313
#define GLINE 314
#define GLINES 315
#define GLINE_EXEMPT 316
#define GLINE_LOG 317
#define GLINE_TIME 318
#define GLINE_MIN_CIDR 319
#define GLINE_MIN_CIDR6 320
#define GLOBAL_KILL 321
#define NEED_IDENT 322
#define HAVENT_READ_CONF 323
#define HIDDEN 324
#define HIDDEN_ADMIN 325
#define HIDDEN_OPER 326
#define HIDE_SERVER_IPS 327
#define HIDE_SERVERS 328
#define HIDE_SPOOF_IPS 329
#define HOST 330
#define HUB 331
#define HUB_MASK 332
#define IDLETIME 333
#define IGNORE_BOGUS_TS 334
#define IP 335
#define KILL 336
#define KILL_CHASE_TIME_LIMIT 337
#define KLINE 338
#define KLINE_EXEMPT 339
#define KLINE_REASON 340
#define KLINE_WITH_REASON 341
#define KNOCK_DELAY 342
#define KNOCK_DELAY_CHANNEL 343
#define LAZYLINK 344
#define LEAF_MASK 345
#define LINKS_DELAY 346
#define LISTEN 347
#define LOGGING 348
#define LOG_LEVEL 349
#define MAXIMUM_LINKS 350
#define MAX_ACCEPT 351
#define MAX_BANS 352
#define MAX_CHANS_PER_USER 353
#define MAX_GLOBAL 354
#define MAX_IDENT 355
#define MAX_LOCAL 356
#define MAX_NICK_CHANGES 357
#define MAX_NICK_TIME 358
#define MAX_NUMBER 359
#define MAX_TARGETS 360
#define MESSAGE_LOCALE 361
#define MIN_NONWILDCARD 362
#define MIN_NONWILDCARD_SIMPLE 363
#define MODULE 364
#define MODULES 365
#define NAME 366
#define NEED_PASSWORD 367
#define NETWORK_DESC 368
#define NETWORK_NAME 369
#define NICK 370
#define NICK_CHANGES 371
#define NO_CREATE_ON_SPLIT 372
#define NO_JOIN_ON_SPLIT 373
#define NO_OPER_FLOOD 374
#define NO_TILDE 375
#define NOT 376
#define NUMBER 377
#define NUMBER_PER_IDENT 378
#define NUMBER_PER_IP 379
#define NUMBER_PER_IP_GLOBAL 380
#define OPERATOR 381
#define OPER_LOG 382
#define OPER_ONLY_UMODES 383
#define OPER_PASS_RESV 384
#define OPER_SPY_T 385
#define OPER_UMODES 386
#define INVITE_OPS_ONLY 387
#define PACE_WAIT 388
#define PACE_WAIT_SIMPLE 389
#define PASSWORD 390
#define PATH 391
#define PING_COOKIE 392
#define PING_TIME 393
#define PORT 394
#define QSTRING 395
#define QUIET_ON_BAN 396
#define REASON 397
#define REDIRPORT 398
#define REDIRSERV 399
#define REHASH 400
#define REMOTE 401
#define REMOTEBAN 402
#define RESTRICTED 403
#define RSA_PRIVATE_KEY_FILE 404
#define RSA_PUBLIC_KEY_FILE 405
#define RESV 406
#define RESV_EXEMPT 407
#define SECONDS 408
#define MINUTES 409
#define HOURS 410
#define DAYS 411
#define WEEKS 412
#define SENDQ 413
#define SEND_PASSWORD 414
#define SERVERHIDE 415
#define SERVERINFO 416
#define SERVLINK_PATH 417
#define SID 418
#define TKLINE_EXPIRE_NOTICES 419
#define T_SHARED 420
#define T_CLUSTER 421
#define TYPE 422
#define SHORT_MOTD 423
#define SILENT 424
#define SPOOF 425
#define SPOOF_NOTICE 426
#define STATS_I_OPER_ONLY 427
#define STATS_K_OPER_ONLY 428
#define STATS_O_OPER_ONLY 429
#define STATS_P_OPER_ONLY 430
#define TBOOL 431
#define TMASKED 432
#define T_REJECT 433
#define TS_MAX_DELTA 434
#define TS_WARN_DELTA 435
#define TWODOTS 436
#define T_ALL 437
#define T_BOTS 438
#define T_SOFTCALLERID 439
#define T_CALLERID 440
#define T_CCONN 441
#define T_CLIENT_FLOOD 442
#define T_DEBUG 443
#define T_DRONE 444
#define T_EXTERNAL 445
#define T_FULL 446
#define T_INVISIBLE 447
#define T_IPV4 448
#define T_IPV6 449
#define T_LOCOPS 450
#define T_LOGPATH 451
#define T_L_CRIT 452
#define T_L_DEBUG 453
#define T_L_ERROR 454
#define T_L_INFO 455
#define T_L_NOTICE 456
#define T_L_TRACE 457
#define T_L_WARN 458
#define T_MAX_CLIENTS 459
#define T_NCHANGE 460
#define T_OPERWALL 461
#define T_REJ 462
#define T_SERVNOTICE 463
#define T_SKILL 464
#define T_SPY 465
#define T_UNAUTH 466
#define T_UNRESV 467
#define T_UNXLINE 468
#define T_WALLOP 469
#define THROTTLE_TIME 470
#define TRUE_NO_OPER_FLOOD 471
#define UNKLINE 472
#define USER 473
#define USE_EGD 474
#define USE_EXCEPT 475
#define USE_INVEX 476
#define USE_KNOCK 477
#define USE_LOGGING 478
#define VHOST 479
#define VHOST6 480
#define XLINE 481
#define WARN 482
#define WARN_NO_NLINE 483




/* Copy the first part of user declarations.  */
#line 25 "ircd_parser.y"


/* XXX */
#define WE_ARE_MEMORY_C

#define YY_NO_UNPUT
#include "stdinc.h"
#include "dalloca.h"
#include "ircd.h"
#include "tools.h"
#include "list.h"
#include "s_conf.h"
#include "event.h"
#include "s_log.h"
#include "client.h"	/* for UMODE_ALL only */
#include "irc_string.h"
#include "irc_getaddrinfo.h"
#include "ircdauth.h"
#include "memory.h"
#include "modules.h"
#include "s_serv.h" /* for CAP_LL / IsCapable */
#include "hostmask.h"
#include "send.h"
#include "listener.h"
#include "resv.h"
#include "numeric.h"
#include "cluster.h"
#include "s_user.h"

#ifdef HAVE_LIBCRYPTO
#include <openssl/rsa.h>
#include <openssl/bio.h>
#include <openssl/pem.h>
#endif

static char *class_name = NULL;
static struct ConfItem *yy_conf = NULL;
static struct AccessItem *yy_aconf = NULL;
static struct MatchItem *yy_match_item = NULL;
static struct ClassItem *yy_class = NULL;

static dlink_list col_conf_list  = { NULL, NULL, 0 };
static dlink_list hub_conf_list  = { NULL, NULL, 0 };
static dlink_list leaf_conf_list = { NULL, NULL, 0 };

extern dlink_list gdeny_items;

static char *resv_reason;
static char *listener_address;
static int not_atom = 0;

struct CollectItem {
  dlink_node node;
  char *name;
  char *user;
  char *host;
  char *passwd;
  int  port;
  int  flags;
#ifdef HAVE_LIBCRYPTO
  char *rsa_public_key_file;
  RSA *rsa_public_key;
#endif
};

static void
free_collect_item(struct CollectItem *item)
{
  MyFree(item->name);
  MyFree(item->user);
  MyFree(item->host);
  MyFree(item->passwd);
#ifdef HAVE_LIBCRYPTO
  MyFree(item->rsa_public_key_file);
#endif
  MyFree(item);
}

static void
unhook_hub_leaf_confs(void)
{
  dlink_node *ptr;
  dlink_node *next_ptr;
  struct CollectItem *yy_hconf;
  struct CollectItem *yy_lconf;

  DLINK_FOREACH_SAFE(ptr, next_ptr, hub_conf_list.head)
  {
    yy_hconf = ptr->data;
    dlinkDelete(&yy_hconf->node, &hub_conf_list);
    free_collect_item(yy_hconf);
  }

  DLINK_FOREACH_SAFE(ptr, next_ptr, leaf_conf_list.head)
  {
    yy_lconf = ptr->data;
    dlinkDelete(&yy_lconf->node, &leaf_conf_list);
    free_collect_item(yy_lconf);
  }
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 128 "ircd_parser.y"
typedef union YYSTYPE {
  int number;
  char *string;
} YYSTYPE;
/* Line 191 of yacc.c.  */
#line 639 "y.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 651 "y.tab.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1237

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  234
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  294
/* YYNRULES -- Number of rules. */
#define YYNRULES  622
/* YYNRULES -- Number of states. */
#define YYNSTATES  1265

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   483

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   233,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   229,
       2,   232,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   231,     2,   230,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    50,    53,    54,    56,    59,
      63,    67,    71,    75,    79,    80,    82,    85,    89,    93,
      97,   103,   106,   108,   110,   112,   114,   119,   124,   130,
     133,   135,   137,   139,   141,   143,   145,   147,   149,   151,
     153,   155,   157,   162,   167,   172,   177,   182,   187,   192,
     197,   202,   207,   213,   216,   218,   220,   222,   224,   226,
     231,   236,   241,   247,   250,   252,   254,   256,   258,   260,
     262,   264,   266,   268,   270,   275,   280,   285,   290,   295,
     300,   305,   310,   315,   320,   325,   330,   335,   340,   341,
     349,   350,   352,   355,   357,   359,   361,   363,   365,   367,
     369,   371,   373,   375,   377,   379,   381,   383,   385,   387,
     389,   391,   393,   395,   400,   402,   407,   412,   417,   422,
     427,   432,   437,   442,   447,   452,   457,   462,   467,   472,
     477,   482,   483,   489,   493,   495,   498,   500,   502,   504,
     506,   508,   510,   512,   514,   516,   518,   520,   522,   524,
     526,   528,   530,   531,   539,   540,   542,   545,   547,   549,
     551,   553,   555,   557,   559,   561,   563,   565,   567,   572,
     574,   579,   584,   589,   594,   599,   604,   609,   614,   615,
     622,   625,   627,   629,   631,   633,   635,   640,   644,   646,
     648,   652,   657,   662,   663,   670,   673,   675,   677,   679,
     681,   683,   685,   687,   689,   691,   693,   695,   697,   699,
     701,   703,   705,   707,   712,   717,   722,   727,   728,   734,
     738,   740,   743,   745,   747,   749,   751,   753,   755,   757,
     759,   761,   763,   765,   770,   775,   780,   785,   790,   795,
     800,   805,   810,   815,   816,   823,   826,   828,   830,   832,
     834,   836,   841,   846,   851,   852,   859,   862,   864,   866,
     868,   870,   872,   877,   882,   883,   889,   893,   895,   897,
     899,   901,   903,   905,   907,   909,   910,   917,   920,   922,
     924,   926,   928,   933,   934,   940,   944,   946,   948,   950,
     952,   954,   956,   958,   960,   962,   963,   971,   972,   974,
     977,   979,   981,   983,   985,   987,   989,   991,   993,   995,
     997,   999,  1001,  1003,  1005,  1007,  1009,  1011,  1013,  1015,
    1020,  1022,  1027,  1032,  1037,  1042,  1047,  1052,  1057,  1058,
    1064,  1068,  1070,  1072,  1074,  1076,  1078,  1080,  1085,  1090,
    1095,  1100,  1105,  1110,  1115,  1120,  1125,  1126,  1133,  1136,
    1138,  1140,  1142,  1144,  1149,  1154,  1155,  1162,  1165,  1167,
    1169,  1171,  1173,  1178,  1183,  1184,  1191,  1194,  1196,  1198,
    1200,  1205,  1206,  1213,  1216,  1218,  1220,  1222,  1224,  1229,
    1234,  1240,  1243,  1245,  1247,  1249,  1251,  1253,  1255,  1257,
    1259,  1261,  1263,  1265,  1267,  1269,  1271,  1273,  1275,  1277,
    1279,  1281,  1283,  1285,  1287,  1289,  1291,  1293,  1295,  1297,
    1299,  1301,  1303,  1305,  1307,  1309,  1311,  1313,  1315,  1317,
    1319,  1321,  1323,  1325,  1327,  1329,  1331,  1333,  1335,  1337,
    1339,  1341,  1343,  1345,  1347,  1349,  1354,  1359,  1364,  1369,
    1374,  1379,  1384,  1389,  1394,  1399,  1404,  1409,  1414,  1419,
    1424,  1429,  1434,  1439,  1444,  1449,  1454,  1459,  1464,  1469,
    1474,  1479,  1484,  1489,  1494,  1499,  1504,  1509,  1514,  1519,
    1524,  1529,  1534,  1539,  1544,  1549,  1554,  1559,  1564,  1569,
    1574,  1579,  1580,  1586,  1590,  1592,  1594,  1596,  1598,  1600,
    1602,  1604,  1606,  1608,  1610,  1612,  1614,  1616,  1618,  1620,
    1622,  1624,  1626,  1627,  1633,  1637,  1639,  1641,  1643,  1645,
    1647,  1649,  1651,  1653,  1655,  1657,  1659,  1661,  1663,  1665,
    1667,  1669,  1671,  1673,  1678,  1683,  1688,  1693,  1698,  1699,
    1706,  1709,  1711,  1713,  1715,  1717,  1719,  1721,  1723,  1725,
    1730,  1735,  1736,  1742,  1746,  1748,  1750,  1752,  1757,  1762,
    1763,  1769,  1773,  1775,  1777,  1779,  1785,  1788,  1790,  1792,
    1794,  1796,  1798,  1800,  1802,  1804,  1806,  1808,  1810,  1812,
    1814,  1816,  1818,  1820,  1825,  1830,  1835,  1840,  1845,  1850,
    1855,  1860,  1865,  1870,  1875,  1880,  1885,  1890,  1896,  1899,
    1901,  1903,  1905,  1907,  1909,  1911,  1913,  1915,  1920,  1925,
    1930,  1935,  1940
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     235,     0,    -1,    -1,   235,   236,    -1,   259,    -1,   265,
      -1,   276,    -1,   502,    -1,   304,    -1,   319,    -1,   328,
      -1,   246,    -1,   519,    -1,   351,    -1,   358,    -1,   368,
      -1,   377,    -1,   403,    -1,   409,    -1,   415,    -1,   426,
      -1,   486,    -1,   420,    -1,   241,    -1,     1,   229,    -1,
       1,   230,    -1,    -1,   238,    -1,   122,   237,    -1,   122,
     153,   237,    -1,   122,   154,   237,    -1,   122,   155,   237,
      -1,   122,   156,   237,    -1,   122,   157,   237,    -1,    -1,
     240,    -1,   122,   239,    -1,   122,    14,   239,    -1,   122,
      15,   239,    -1,   122,    16,   239,    -1,   110,   231,   242,
     230,   229,    -1,   242,   243,    -1,   243,    -1,   244,    -1,
     245,    -1,     1,    -1,   109,   232,   140,   229,    -1,   136,
     232,   140,   229,    -1,   161,   231,   247,   230,   229,    -1,
     247,   248,    -1,   248,    -1,   250,    -1,   255,    -1,   258,
      -1,   252,    -1,   253,    -1,   254,    -1,   257,    -1,   249,
      -1,   256,    -1,   251,    -1,     1,    -1,   149,   232,   140,
     229,    -1,   111,   232,   140,   229,    -1,   163,   232,   140,
     229,    -1,    35,   232,   140,   229,    -1,   114,   232,   140,
     229,    -1,   113,   232,   140,   229,    -1,   224,   232,   140,
     229,    -1,   225,   232,   140,   229,    -1,   204,   232,   122,
     229,    -1,    76,   232,   176,   229,    -1,     5,   231,   260,
     230,   229,    -1,   260,   261,    -1,   261,    -1,   262,    -1,
     264,    -1,   263,    -1,     1,    -1,   111,   232,   140,   229,
      -1,    45,   232,   140,   229,    -1,    35,   232,   140,   229,
      -1,    93,   231,   266,   230,   229,    -1,   266,   267,    -1,
     267,    -1,   268,    -1,   269,    -1,   270,    -1,   274,    -1,
     275,    -1,   271,    -1,   273,    -1,   272,    -1,     1,    -1,
     196,   232,   140,   229,    -1,   127,   232,   140,   229,    -1,
      62,   232,   140,   229,    -1,    56,   232,   140,   229,    -1,
      54,   232,   140,   229,    -1,    55,   232,   140,   229,    -1,
      94,   232,   197,   229,    -1,    94,   232,   199,   229,    -1,
      94,   232,   203,   229,    -1,    94,   232,   201,   229,    -1,
      94,   232,   202,   229,    -1,    94,   232,   200,   229,    -1,
      94,   232,   198,   229,    -1,   223,   232,   176,   229,    -1,
      -1,   126,   277,   278,   231,   279,   230,   229,    -1,    -1,
     282,    -1,   279,   280,    -1,   280,    -1,   281,    -1,   283,
      -1,   284,    -1,   286,    -1,   288,    -1,   289,    -1,   290,
      -1,   291,    -1,   292,    -1,   293,    -1,   294,    -1,   295,
      -1,   296,    -1,   297,    -1,   298,    -1,   285,    -1,   287,
      -1,   299,    -1,     1,    -1,   111,   232,   140,   229,    -1,
     140,    -1,   218,   232,   140,   229,    -1,   135,   232,   140,
     229,    -1,    47,   232,   176,   229,    -1,    70,   232,   176,
     229,    -1,   150,   232,   140,   229,    -1,    24,   232,   140,
     229,    -1,    66,   232,   176,   229,    -1,   146,   232,   176,
     229,    -1,    83,   232,   176,   229,    -1,   226,   232,   176,
     229,    -1,   217,   232,   176,   229,    -1,    59,   232,   176,
     229,    -1,   116,   232,   176,   229,    -1,    36,   232,   176,
     229,    -1,   145,   232,   176,   229,    -1,     5,   232,   176,
     229,    -1,    -1,    52,   300,   232,   301,   229,    -1,   301,
     233,   302,    -1,   302,    -1,   121,   303,    -1,   303,    -1,
      66,    -1,   146,    -1,    83,    -1,   217,    -1,   226,    -1,
      59,    -1,    36,    -1,   145,    -1,     5,    -1,    70,    -1,
     116,    -1,   206,    -1,   130,    -1,    71,    -1,   147,    -1,
      -1,    24,   305,   306,   231,   307,   230,   229,    -1,    -1,
     310,    -1,   307,   308,    -1,   308,    -1,   309,    -1,   311,
      -1,   312,    -1,   313,    -1,   314,    -1,   315,    -1,   316,
      -1,   317,    -1,   318,    -1,     1,    -1,   111,   232,   140,
     229,    -1,   140,    -1,   138,   232,   238,   229,    -1,   124,
     232,   122,   229,    -1,    28,   232,   238,   229,    -1,   104,
     232,   122,   229,    -1,    99,   232,   122,   229,    -1,   101,
     232,   122,   229,    -1,   100,   232,   122,   229,    -1,   158,
     232,   240,   229,    -1,    -1,    92,   320,   231,   321,   230,
     229,    -1,   321,   322,    -1,   322,    -1,   323,    -1,   326,
      -1,   327,    -1,     1,    -1,   139,   232,   324,   229,    -1,
     324,   233,   325,    -1,   325,    -1,   122,    -1,   122,   181,
     122,    -1,    80,   232,   140,   229,    -1,    75,   232,   140,
     229,    -1,    -1,    10,   329,   231,   330,   230,   229,    -1,
     330,   331,    -1,   331,    -1,   332,    -1,   333,    -1,   335,
      -1,   336,    -1,   341,    -1,   342,    -1,   343,    -1,   345,
      -1,   346,    -1,   347,    -1,   334,    -1,   348,    -1,   349,
      -1,   344,    -1,   350,    -1,     1,    -1,   218,   232,   140,
     229,    -1,   135,   232,   140,   229,    -1,   171,   232,   176,
     229,    -1,    24,   232,   140,   229,    -1,    -1,    52,   337,
     232,   338,   229,    -1,   338,   233,   339,    -1,   339,    -1,
     121,   340,    -1,   340,    -1,   171,    -1,    48,    -1,    84,
      -1,    67,    -1,    20,    -1,    21,    -1,   120,    -1,    61,
      -1,   152,    -1,   112,    -1,    84,   232,   176,   229,    -1,
      67,   232,   176,   229,    -1,    48,   232,   176,   229,    -1,
      20,   232,   176,   229,    -1,   120,   232,   176,   229,    -1,
      61,   232,   176,   229,    -1,   170,   232,   140,   229,    -1,
     144,   232,   140,   229,    -1,   143,   232,   122,   229,    -1,
     112,   232,   176,   229,    -1,    -1,   151,   352,   231,   353,
     230,   229,    -1,   353,   354,    -1,   354,    -1,   355,    -1,
     356,    -1,   357,    -1,     1,    -1,   142,   232,   140,   229,
      -1,    22,   232,   140,   229,    -1,   115,   232,   140,   229,
      -1,    -1,   165,   359,   231,   360,   230,   229,    -1,   360,
     361,    -1,   361,    -1,   362,    -1,   363,    -1,   364,    -1,
       1,    -1,   111,   232,   140,   229,    -1,   218,   232,   140,
     229,    -1,    -1,   167,   365,   232,   366,   229,    -1,   366,
     233,   367,    -1,   367,    -1,    83,    -1,   217,    -1,   226,
      -1,   213,    -1,   151,    -1,   212,    -1,   182,    -1,    -1,
     166,   369,   231,   370,   230,   229,    -1,   370,   371,    -1,
     371,    -1,   372,    -1,   373,    -1,     1,    -1,   111,   232,
     140,   229,    -1,    -1,   167,   374,   232,   375,   229,    -1,
     375,   233,   376,    -1,   376,    -1,    83,    -1,   217,    -1,
     226,    -1,   213,    -1,   151,    -1,   212,    -1,   195,    -1,
     182,    -1,    -1,    27,   378,   379,   231,   380,   230,   229,
      -1,    -1,   383,    -1,   380,   381,    -1,   381,    -1,   382,
      -1,   384,    -1,   385,    -1,   386,    -1,   387,    -1,   388,
      -1,   389,    -1,   390,    -1,   399,    -1,   400,    -1,   401,
      -1,   398,    -1,   395,    -1,   397,    -1,   396,    -1,   394,
      -1,   402,    -1,     1,    -1,   111,   232,   140,   229,    -1,
     140,    -1,    75,   232,   140,   229,    -1,   159,   232,   140,
     229,    -1,     3,   232,   140,   229,    -1,   139,   232,   122,
     229,    -1,     6,   232,   193,   229,    -1,     6,   232,   194,
     229,    -1,    51,   232,   140,   229,    -1,    -1,    52,   391,
     232,   392,   229,    -1,   392,   233,   393,    -1,   393,    -1,
      89,    -1,    25,    -1,    29,    -1,    11,    -1,    13,    -1,
     150,   232,   140,   229,    -1,    47,   232,   176,   229,    -1,
      29,   232,   176,   229,    -1,    25,   232,   176,   229,    -1,
      11,   232,   176,   229,    -1,    77,   232,   140,   229,    -1,
      90,   232,   140,   229,    -1,    24,   232,   140,   229,    -1,
      23,   232,   140,   229,    -1,    -1,    81,   404,   231,   405,
     230,   229,    -1,   405,   406,    -1,   406,    -1,   407,    -1,
     408,    -1,     1,    -1,   218,   232,   140,   229,    -1,   142,
     232,   140,   229,    -1,    -1,    34,   410,   231,   411,   230,
     229,    -1,   411,   412,    -1,   412,    -1,   413,    -1,   414,
      -1,     1,    -1,    80,   232,   140,   229,    -1,   142,   232,
     140,   229,    -1,    -1,    49,   416,   231,   417,   230,   229,
      -1,   417,   418,    -1,   418,    -1,   419,    -1,     1,    -1,
      80,   232,   140,   229,    -1,    -1,    57,   421,   231,   422,
     230,   229,    -1,   422,   423,    -1,   423,    -1,   424,    -1,
     425,    -1,     1,    -1,   111,   232,   140,   229,    -1,   142,
     232,   140,   229,    -1,    58,   231,   427,   230,   229,    -1,
     427,   428,    -1,   428,    -1,   434,    -1,   435,    -1,   437,
      -1,   438,    -1,   439,    -1,   440,    -1,   441,    -1,   442,
      -1,   443,    -1,   444,    -1,   433,    -1,   446,    -1,   447,
      -1,   448,    -1,   462,    -1,   449,    -1,   451,    -1,   453,
      -1,   452,    -1,   455,    -1,   450,    -1,   456,    -1,   457,
      -1,   458,    -1,   459,    -1,   461,    -1,   463,    -1,   460,
      -1,   477,    -1,   464,    -1,   468,    -1,   469,    -1,   473,
      -1,   454,    -1,   483,    -1,   481,    -1,   482,    -1,   465,
      -1,   436,    -1,   466,    -1,   467,    -1,   484,    -1,   472,
      -1,   445,    -1,   485,    -1,   470,    -1,   471,    -1,   431,
      -1,   432,    -1,   429,    -1,   430,    -1,     1,    -1,    64,
     232,   122,   229,    -1,    65,   232,   122,   229,    -1,    13,
     232,   176,   229,    -1,   164,   232,   176,   229,    -1,    82,
     232,   122,   229,    -1,    74,   232,   176,   229,    -1,    79,
     232,   176,   229,    -1,    40,   232,   176,   229,    -1,    50,
     232,   176,   229,    -1,     8,   232,   176,   229,    -1,   103,
     232,   238,   229,    -1,   102,   232,   122,   229,    -1,    96,
     232,   122,   229,    -1,     9,   232,   238,   229,    -1,   180,
     232,   238,   229,    -1,   179,   232,   238,   229,    -1,    68,
     232,   122,   229,    -1,    86,   232,   176,   229,    -1,    85,
     232,   140,   229,    -1,   228,   232,   176,   229,    -1,   174,
     232,   176,   229,    -1,   175,   232,   176,   229,    -1,   173,
     232,   176,   229,    -1,   173,   232,   177,   229,    -1,   172,
     232,   176,   229,    -1,   172,   232,   177,   229,    -1,   133,
     232,   238,   229,    -1,    19,   232,   238,   229,    -1,   134,
     232,   238,   229,    -1,   168,   232,   176,   229,    -1,   119,
     232,   176,   229,    -1,   216,   232,   176,   229,    -1,   129,
     232,   176,   229,    -1,   106,   232,   140,   229,    -1,    78,
     232,   238,   229,    -1,    42,   232,   122,   229,    -1,    95,
     232,   122,   229,    -1,   105,   232,   122,   229,    -1,   162,
     232,   140,   229,    -1,    30,   232,   140,   229,    -1,    26,
     232,   122,   229,    -1,   219,   232,   176,   229,    -1,    44,
     232,   140,   229,    -1,   137,   232,   176,   229,    -1,    37,
     232,   176,   229,    -1,   215,   232,   238,   229,    -1,    -1,
     131,   474,   232,   475,   229,    -1,   475,   233,   476,    -1,
     476,    -1,   183,    -1,   186,    -1,   188,    -1,   191,    -1,
     209,    -1,   205,    -1,   207,    -1,   211,    -1,   210,    -1,
     190,    -1,   206,    -1,   208,    -1,   192,    -1,   214,    -1,
     184,    -1,   185,    -1,   195,    -1,    -1,   128,   478,   232,
     479,   229,    -1,   479,   233,   480,    -1,   480,    -1,   183,
      -1,   186,    -1,   188,    -1,   191,    -1,   209,    -1,   205,
      -1,   207,    -1,   211,    -1,   210,    -1,   190,    -1,   206,
      -1,   208,    -1,   192,    -1,   214,    -1,   184,    -1,   185,
      -1,   195,    -1,   107,   232,   122,   229,    -1,   108,   232,
     122,   229,    -1,    31,   232,   122,   229,    -1,   187,   232,
     240,   229,    -1,    41,   232,   176,   229,    -1,    -1,    60,
     487,   231,   488,   230,   229,    -1,   488,   489,    -1,   489,
      -1,   490,    -1,   491,    -1,   492,    -1,   496,    -1,   497,
      -1,   498,    -1,     1,    -1,    46,   232,   176,   229,    -1,
      43,   232,   238,   229,    -1,    -1,    93,   493,   232,   494,
     229,    -1,   494,   233,   495,    -1,   495,    -1,   178,    -1,
      12,    -1,   218,   232,   140,   229,    -1,   111,   232,   140,
     229,    -1,    -1,     4,   499,   232,   500,   229,    -1,   500,
     233,   501,    -1,   501,    -1,   178,    -1,    12,    -1,    22,
     231,   503,   230,   229,    -1,   503,   504,    -1,   504,    -1,
     505,    -1,   506,    -1,   507,    -1,   508,    -1,   514,    -1,
     509,    -1,   510,    -1,   511,    -1,   512,    -1,   513,    -1,
     515,    -1,   516,    -1,   517,    -1,   518,    -1,     1,    -1,
      39,   232,   176,   229,    -1,   220,   232,   176,   229,    -1,
     221,   232,   176,   229,    -1,   222,   232,   176,   229,    -1,
      87,   232,   238,   229,    -1,    88,   232,   238,   229,    -1,
     132,   232,   176,   229,    -1,    98,   232,   122,   229,    -1,
     141,   232,   176,   229,    -1,    97,   232,   122,   229,    -1,
      33,   232,   122,   229,    -1,    32,   232,   122,   229,    -1,
     117,   232,   176,   229,    -1,   118,   232,   176,   229,    -1,
     160,   231,   520,   230,   229,    -1,   520,   521,    -1,   521,
      -1,   522,    -1,   523,    -1,   524,    -1,   526,    -1,   525,
      -1,   527,    -1,     1,    -1,    53,   232,   176,   229,    -1,
      73,   232,   176,   229,    -1,    91,   232,   238,   229,    -1,
      69,   232,   176,   229,    -1,    38,   232,   176,   229,    -1,
      72,   232,   176,   229,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   360,   360,   361,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   389,   389,   390,   394,
     398,   402,   406,   410,   416,   416,   417,   418,   419,   420,
     427,   430,   430,   431,   431,   431,   433,   452,   463,   466,
     467,   468,   468,   469,   469,   470,   470,   471,   472,   472,
     473,   474,   476,   531,   545,   563,   572,   586,   595,   623,
     653,   669,   719,   721,   721,   722,   722,   723,   723,   725,
     734,   743,   755,   757,   758,   760,   760,   761,   761,   762,
     762,   763,   763,   764,   766,   770,   774,   778,   785,   792,
     799,   803,   807,   811,   815,   819,   823,   829,   839,   838,
     931,   931,   932,   932,   933,   933,   933,   933,   934,   934,
     934,   935,   935,   935,   936,   936,   937,   937,   937,   938,
     938,   939,   939,   941,   953,   965,   988,  1000,  1011,  1022,
    1064,  1073,  1084,  1095,  1106,  1117,  1128,  1139,  1150,  1161,
    1172,  1184,  1183,  1187,  1187,  1188,  1189,  1191,  1198,  1205,
    1212,  1219,  1226,  1233,  1240,  1247,  1254,  1261,  1268,  1275,
    1282,  1289,  1303,  1302,  1322,  1322,  1324,  1324,  1325,  1326,
    1327,  1328,  1329,  1330,  1331,  1332,  1333,  1334,  1336,  1382,
    1428,  1434,  1440,  1446,  1452,  1458,  1464,  1470,  1480,  1479,
    1492,  1492,  1493,  1493,  1493,  1493,  1495,  1497,  1497,  1499,
    1503,  1516,  1525,  1538,  1537,  1611,  1611,  1612,  1612,  1612,
    1612,  1613,  1613,  1614,  1614,  1614,  1615,  1615,  1616,  1616,
    1616,  1617,  1617,  1619,  1648,  1661,  1672,  1682,  1681,  1685,
    1685,  1686,  1687,  1689,  1697,  1704,  1711,  1718,  1725,  1732,
    1739,  1746,  1753,  1762,  1773,  1784,  1795,  1806,  1817,  1829,
    1848,  1858,  1867,  1883,  1882,  1895,  1895,  1896,  1896,  1896,
    1896,  1898,  1907,  1922,  1941,  1940,  1956,  1956,  1957,  1957,
    1957,  1957,  1959,  1968,  1984,  1983,  1989,  1989,  1990,  1994,
    1998,  2002,  2006,  2010,  2014,  2024,  2023,  2045,  2045,  2046,
    2046,  2046,  2048,  2055,  2054,  2060,  2060,  2061,  2065,  2069,
    2073,  2077,  2081,  2085,  2089,  2099,  2098,  2248,  2248,  2249,
    2249,  2250,  2250,  2250,  2251,  2251,  2251,  2252,  2252,  2252,
    2253,  2253,  2253,  2254,  2254,  2254,  2255,  2255,  2256,  2258,
    2270,  2282,  2291,  2303,  2315,  2321,  2325,  2333,  2343,  2342,
    2346,  2346,  2347,  2351,  2359,  2363,  2367,  2373,  2414,  2425,
    2436,  2451,  2462,  2475,  2488,  2497,  2533,  2532,  2555,  2555,
    2556,  2556,  2556,  2558,  2567,  2580,  2579,  2601,  2601,  2602,
    2602,  2602,  2604,  2613,  2626,  2625,  2646,  2646,  2647,  2647,
    2649,  2662,  2661,  2675,  2675,  2676,  2676,  2676,  2678,  2687,
    2699,  2702,  2702,  2703,  2703,  2704,  2704,  2705,  2705,  2706,
    2706,  2707,  2707,  2708,  2708,  2709,  2710,  2710,  2711,  2711,
    2712,  2712,  2713,  2713,  2714,  2714,  2715,  2715,  2716,  2716,
    2717,  2718,  2718,  2719,  2719,  2720,  2721,  2721,  2722,  2722,
    2723,  2723,  2724,  2725,  2725,  2726,  2726,  2727,  2727,  2728,
    2728,  2729,  2729,  2730,  2731,  2735,  2741,  2747,  2753,  2758,
    2764,  2770,  2776,  2782,  2788,  2794,  2800,  2806,  2812,  2818,
    2824,  2830,  2841,  2847,  2856,  2862,  2868,  2874,  2878,  2884,
    2888,  2894,  2900,  2906,  2912,  2918,  2924,  2930,  2936,  2947,
    2953,  2959,  2965,  2971,  2980,  3012,  3030,  3036,  3045,  3051,
    3056,  3063,  3062,  3068,  3068,  3069,  3073,  3077,  3081,  3085,
    3089,  3093,  3097,  3101,  3105,  3109,  3113,  3117,  3121,  3125,
    3129,  3133,  3140,  3139,  3145,  3145,  3146,  3150,  3154,  3158,
    3162,  3166,  3170,  3174,  3178,  3182,  3186,  3190,  3194,  3198,
    3202,  3206,  3210,  3216,  3222,  3228,  3234,  3240,  3250,  3249,
    3275,  3275,  3276,  3277,  3278,  3279,  3280,  3281,  3282,  3284,
    3290,  3297,  3296,  3301,  3301,  3302,  3306,  3312,  3335,  3345,
    3344,  3387,  3387,  3388,  3392,  3401,  3404,  3404,  3405,  3406,
    3407,  3408,  3409,  3410,  3411,  3412,  3413,  3414,  3415,  3416,
    3417,  3418,  3419,  3421,  3427,  3433,  3439,  3445,  3451,  3457,
    3463,  3469,  3475,  3481,  3487,  3493,  3499,  3508,  3511,  3511,
    3512,  3512,  3513,  3514,  3515,  3516,  3517,  3519,  3525,  3531,
    3545,  3551,  3557
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ACCEPT_PASSWORD", "ACTION", "ADMIN", 
  "AFTYPE", "T_ALLOW", "ANTI_NICK_FLOOD", "ANTI_SPAM_EXIT_MESSAGE_TIME", 
  "IRCD_AUTH", "AUTOCONN", "T_BLOCK", "BURST_AWAY", "BYTES", "KBYTES", 
  "MBYTES", "GBYTES", "TBYTES", "CALLER_ID_WAIT", "CAN_FLOOD", "CAN_IDLE", 
  "CHANNEL", "CIPHER_PREFERENCE", "CLASS", "COMPRESSED", 
  "COMPRESSION_LEVEL", "CONNECT", "CONNECTFREQ", "CRYPTLINK", 
  "DEFAULT_CIPHER_PREFERENCE", "DEFAULT_FLOODCOUNT", 
  "DEFAULT_SPLIT_SERVER_COUNT", "DEFAULT_SPLIT_USER_COUNT", "DENY", 
  "DESCRIPTION", "DIE", "DISABLE_AUTH", "DISABLE_HIDDEN", 
  "DISABLE_LOCAL_CHANNELS", "DISABLE_REMOTE_COMMANDS", "DOT_IN_IP6_ADDR", 
  "DOTS_IN_IDENT", "DURATION", "EGDPOOL_PATH", "EMAIL", "ENABLE", 
  "ENCRYPTED", "EXCEED_LIMIT", "EXEMPT", "FAILED_OPER_NOTICE", "FAKENAME", 
  "IRCD_FLAGS", "FLATTEN_LINKS", "FFAILED_OPERLOG", "FOPERLOG", 
  "FUSERLOG", "GECOS", "GENERAL", "GLINE", "GLINES", "GLINE_EXEMPT", 
  "GLINE_LOG", "GLINE_TIME", "GLINE_MIN_CIDR", "GLINE_MIN_CIDR6", 
  "GLOBAL_KILL", "NEED_IDENT", "HAVENT_READ_CONF", "HIDDEN", 
  "HIDDEN_ADMIN", "HIDDEN_OPER", "HIDE_SERVER_IPS", "HIDE_SERVERS", 
  "HIDE_SPOOF_IPS", "HOST", "HUB", "HUB_MASK", "IDLETIME", 
  "IGNORE_BOGUS_TS", "IP", "KILL", "KILL_CHASE_TIME_LIMIT", "KLINE", 
  "KLINE_EXEMPT", "KLINE_REASON", "KLINE_WITH_REASON", "KNOCK_DELAY", 
  "KNOCK_DELAY_CHANNEL", "LAZYLINK", "LEAF_MASK", "LINKS_DELAY", "LISTEN", 
  "LOGGING", "LOG_LEVEL", "MAXIMUM_LINKS", "MAX_ACCEPT", "MAX_BANS", 
  "MAX_CHANS_PER_USER", "MAX_GLOBAL", "MAX_IDENT", "MAX_LOCAL", 
  "MAX_NICK_CHANGES", "MAX_NICK_TIME", "MAX_NUMBER", "MAX_TARGETS", 
  "MESSAGE_LOCALE", "MIN_NONWILDCARD", "MIN_NONWILDCARD_SIMPLE", "MODULE", 
  "MODULES", "NAME", "NEED_PASSWORD", "NETWORK_DESC", "NETWORK_NAME", 
  "NICK", "NICK_CHANGES", "NO_CREATE_ON_SPLIT", "NO_JOIN_ON_SPLIT", 
  "NO_OPER_FLOOD", "NO_TILDE", "NOT", "NUMBER", "NUMBER_PER_IDENT", 
  "NUMBER_PER_IP", "NUMBER_PER_IP_GLOBAL", "OPERATOR", "OPER_LOG", 
  "OPER_ONLY_UMODES", "OPER_PASS_RESV", "OPER_SPY_T", "OPER_UMODES", 
  "INVITE_OPS_ONLY", "PACE_WAIT", "PACE_WAIT_SIMPLE", "PASSWORD", "PATH", 
  "PING_COOKIE", "PING_TIME", "PORT", "QSTRING", "QUIET_ON_BAN", "REASON", 
  "REDIRPORT", "REDIRSERV", "REHASH", "REMOTE", "REMOTEBAN", "RESTRICTED", 
  "RSA_PRIVATE_KEY_FILE", "RSA_PUBLIC_KEY_FILE", "RESV", "RESV_EXEMPT", 
  "SECONDS", "MINUTES", "HOURS", "DAYS", "WEEKS", "SENDQ", 
  "SEND_PASSWORD", "SERVERHIDE", "SERVERINFO", "SERVLINK_PATH", "SID", 
  "TKLINE_EXPIRE_NOTICES", "T_SHARED", "T_CLUSTER", "TYPE", "SHORT_MOTD", 
  "SILENT", "SPOOF", "SPOOF_NOTICE", "STATS_I_OPER_ONLY", 
  "STATS_K_OPER_ONLY", "STATS_O_OPER_ONLY", "STATS_P_OPER_ONLY", "TBOOL", 
  "TMASKED", "T_REJECT", "TS_MAX_DELTA", "TS_WARN_DELTA", "TWODOTS", 
  "T_ALL", "T_BOTS", "T_SOFTCALLERID", "T_CALLERID", "T_CCONN", 
  "T_CLIENT_FLOOD", "T_DEBUG", "T_DRONE", "T_EXTERNAL", "T_FULL", 
  "T_INVISIBLE", "T_IPV4", "T_IPV6", "T_LOCOPS", "T_LOGPATH", "T_L_CRIT", 
  "T_L_DEBUG", "T_L_ERROR", "T_L_INFO", "T_L_NOTICE", "T_L_TRACE", 
  "T_L_WARN", "T_MAX_CLIENTS", "T_NCHANGE", "T_OPERWALL", "T_REJ", 
  "T_SERVNOTICE", "T_SKILL", "T_SPY", "T_UNAUTH", "T_UNRESV", "T_UNXLINE", 
  "T_WALLOP", "THROTTLE_TIME", "TRUE_NO_OPER_FLOOD", "UNKLINE", "USER", 
  "USE_EGD", "USE_EXCEPT", "USE_INVEX", "USE_KNOCK", "USE_LOGGING", 
  "VHOST", "VHOST6", "XLINE", "WARN", "WARN_NO_NLINE", "';'", "'}'", 
  "'{'", "'='", "','", "$accept", "conf", "conf_item", "timespec_", 
  "timespec", "sizespec_", "sizespec", "modules_entry", "modules_items", 
  "modules_item", "modules_module", "modules_path", "serverinfo_entry", 
  "serverinfo_items", "serverinfo_item", 
  "serverinfo_rsa_private_key_file", "serverinfo_name", "serverinfo_sid", 
  "serverinfo_description", "serverinfo_network_name", 
  "serverinfo_network_desc", "serverinfo_vhost", "serverinfo_vhost6", 
  "serverinfo_max_clients", "serverinfo_hub", "admin_entry", 
  "admin_items", "admin_item", "admin_name", "admin_email", 
  "admin_description", "logging_entry", "logging_items", "logging_item", 
  "logging_path", "logging_oper_log", "logging_gline_log", 
  "logging_fuserlog", "logging_ffailed_operlog", "logging_foperlog", 
  "logging_log_level", "logging_use_logging", "oper_entry", "@1", 
  "oper_name_b", "oper_items", "oper_item", "oper_name", "oper_name_t", 
  "oper_user", "oper_password", "oper_encrypted", "oper_hidden_admin", 
  "oper_rsa_public_key_file", "oper_class", "oper_global_kill", 
  "oper_remote", "oper_kline", "oper_xline", "oper_unkline", "oper_gline", 
  "oper_nick_changes", "oper_die", "oper_rehash", "oper_admin", 
  "oper_flags", "@2", "oper_flags_items", "oper_flags_item", 
  "oper_flags_item_atom", "class_entry", "@3", "class_name_b", 
  "class_items", "class_item", "class_name", "class_name_t", 
  "class_ping_time", "class_number_per_ip", "class_connectfreq", 
  "class_max_number", "class_max_global", "class_max_local", 
  "class_max_ident", "class_sendq", "listen_entry", "@4", "listen_items", 
  "listen_item", "listen_port", "port_items", "port_item", 
  "listen_address", "listen_host", "auth_entry", "@5", "auth_items", 
  "auth_item", "auth_user", "auth_passwd", "auth_spoof_notice", 
  "auth_class", "auth_flags", "@6", "auth_flags_items", "auth_flags_item", 
  "auth_flags_item_atom", "auth_kline_exempt", "auth_need_ident", 
  "auth_exceed_limit", "auth_can_flood", "auth_no_tilde", 
  "auth_gline_exempt", "auth_spoof", "auth_redir_serv", "auth_redir_port", 
  "auth_need_password", "resv_entry", "@7", "resv_items", "resv_item", 
  "resv_creason", "resv_channel", "resv_nick", "shared_entry", "@8", 
  "shared_items", "shared_item", "shared_name", "shared_user", 
  "shared_type", "@9", "shared_types", "shared_type_item", 
  "cluster_entry", "@10", "cluster_items", "cluster_item", "cluster_name", 
  "cluster_type", "@11", "cluster_types", "cluster_type_item", 
  "connect_entry", "@12", "connect_name_b", "connect_items", 
  "connect_item", "connect_name", "connect_name_t", "connect_host", 
  "connect_send_password", "connect_accept_password", "connect_port", 
  "connect_aftype", "connect_fakename", "connect_flags", "@13", 
  "connect_flags_items", "connect_flags_item", 
  "connect_rsa_public_key_file", "connect_encrypted", "connect_cryptlink", 
  "connect_compressed", "connect_auto", "connect_hub_mask", 
  "connect_leaf_mask", "connect_class", "connect_cipher_preference", 
  "kill_entry", "@14", "kill_items", "kill_item", "kill_user", 
  "kill_reason", "deny_entry", "@15", "deny_items", "deny_item", 
  "deny_ip", "deny_reason", "exempt_entry", "@16", "exempt_items", 
  "exempt_item", "exempt_ip", "gecos_entry", "@17", "gecos_items", 
  "gecos_item", "gecos_name", "gecos_reason", "general_entry", 
  "general_items", "general_item", "general_gline_min_cidr", 
  "general_gline_min_cidr6", "general_burst_away", 
  "general_tkline_expire_notices", "general_kill_chase_time_limit", 
  "general_hide_spoof_ips", "general_ignore_bogus_ts", 
  "general_disable_remote_commands", "general_failed_oper_notice", 
  "general_anti_nick_flood", "general_max_nick_time", 
  "general_max_nick_changes", "general_max_accept", 
  "general_anti_spam_exit_message_time", "general_ts_warn_delta", 
  "general_ts_max_delta", "general_havent_read_conf", 
  "general_kline_with_reason", "general_kline_reason", 
  "general_warn_no_nline", "general_stats_o_oper_only", 
  "general_stats_P_oper_only", "general_stats_k_oper_only", 
  "general_stats_i_oper_only", "general_pace_wait", 
  "general_caller_id_wait", "general_pace_wait_simple", 
  "general_short_motd", "general_no_oper_flood", 
  "general_true_no_oper_flood", "general_oper_pass_resv", 
  "general_message_locale", "general_idletime", "general_dots_in_ident", 
  "general_maximum_links", "general_max_targets", "general_servlink_path", 
  "general_default_cipher_preference", "general_compression_level", 
  "general_use_egd", "general_egdpool_path", "general_ping_cookie", 
  "general_disable_auth", "general_throttle_time", "general_oper_umodes", 
  "@18", "umode_oitems", "umode_oitem", "general_oper_only_umodes", "@19", 
  "umode_items", "umode_item", "general_min_nonwildcard", 
  "general_min_nonwildcard_simple", "general_default_floodcount", 
  "general_client_flood", "general_dot_in_ip6_addr", "gline_entry", "@20", 
  "gline_items", "gline_item", "gline_enable", "gline_duration", 
  "gline_logging", "@21", "gline_logging_types", 
  "gline_logging_type_item", "gline_user", "gline_server", "gline_action", 
  "@22", "gdeny_types", "gdeny_type_item", "channel_entry", 
  "channel_items", "channel_item", "channel_disable_local_channels", 
  "channel_use_except", "channel_use_invex", "channel_use_knock", 
  "channel_knock_delay", "channel_knock_delay_channel", 
  "channel_invite_ops_only", "channel_max_chans_per_user", 
  "channel_quiet_on_ban", "channel_max_bans", 
  "channel_default_split_user_count", 
  "channel_default_split_server_count", "channel_no_create_on_split", 
  "channel_no_join_on_split", "serverhide_entry", "serverhide_items", 
  "serverhide_item", "serverhide_flatten_links", 
  "serverhide_hide_servers", "serverhide_links_delay", 
  "serverhide_hidden", "serverhide_disable_hidden", 
  "serverhide_hide_server_ips", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,    59,
     125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   234,   235,   235,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   237,   237,   238,   238,
     238,   238,   238,   238,   239,   239,   240,   240,   240,   240,
     241,   242,   242,   243,   243,   243,   244,   245,   246,   247,
     247,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   260,   261,   261,   261,   261,   262,
     263,   264,   265,   266,   266,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   268,   269,   270,   271,   272,   273,
     274,   274,   274,   274,   274,   274,   274,   275,   277,   276,
     278,   278,   279,   279,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   300,   299,   301,   301,   302,   302,   303,   303,   303,
     303,   303,   303,   303,   303,   303,   303,   303,   303,   303,
     303,   303,   305,   304,   306,   306,   307,   307,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   320,   319,
     321,   321,   322,   322,   322,   322,   323,   324,   324,   325,
     325,   326,   327,   329,   328,   330,   330,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   332,   333,   334,   335,   337,   336,   338,
     338,   339,   339,   340,   340,   340,   340,   340,   340,   340,
     340,   340,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   352,   351,   353,   353,   354,   354,   354,
     354,   355,   356,   357,   359,   358,   360,   360,   361,   361,
     361,   361,   362,   363,   365,   364,   366,   366,   367,   367,
     367,   367,   367,   367,   367,   369,   368,   370,   370,   371,
     371,   371,   372,   374,   373,   375,   375,   376,   376,   376,
     376,   376,   376,   376,   376,   378,   377,   379,   379,   380,
     380,   381,   381,   381,   381,   381,   381,   381,   381,   381,
     381,   381,   381,   381,   381,   381,   381,   381,   381,   382,
     383,   384,   385,   386,   387,   388,   388,   389,   391,   390,
     392,   392,   393,   393,   393,   393,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   404,   403,   405,   405,
     406,   406,   406,   407,   408,   410,   409,   411,   411,   412,
     412,   412,   413,   414,   416,   415,   417,   417,   418,   418,
     419,   421,   420,   422,   422,   423,   423,   423,   424,   425,
     426,   427,   427,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   451,   452,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   474,   473,   475,   475,   476,   476,   476,   476,   476,
     476,   476,   476,   476,   476,   476,   476,   476,   476,   476,
     476,   476,   478,   477,   479,   479,   480,   480,   480,   480,
     480,   480,   480,   480,   480,   480,   480,   480,   480,   480,
     480,   480,   480,   481,   482,   483,   484,   485,   487,   486,
     488,   488,   489,   489,   489,   489,   489,   489,   489,   490,
     491,   493,   492,   494,   494,   495,   495,   496,   497,   499,
     498,   500,   500,   501,   501,   502,   503,   503,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   520,
     521,   521,   521,   521,   521,   521,   521,   522,   523,   524,
     525,   526,   527
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     0,     1,     2,     3,
       3,     3,     3,     3,     0,     1,     2,     3,     3,     3,
       5,     2,     1,     1,     1,     1,     4,     4,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     5,     2,     1,     1,     1,     1,     1,     4,
       4,     4,     5,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     0,     7,
       0,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     0,     5,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     7,     0,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       4,     4,     4,     4,     4,     4,     4,     4,     0,     6,
       2,     1,     1,     1,     1,     1,     4,     3,     1,     1,
       3,     4,     4,     0,     6,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     0,     5,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     0,     6,     2,     1,     1,     1,     1,
       1,     4,     4,     4,     0,     6,     2,     1,     1,     1,
       1,     1,     4,     4,     0,     5,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     6,     2,     1,     1,
       1,     1,     4,     0,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     7,     0,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     4,     4,     4,     4,     4,     4,     4,     0,     5,
       3,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     0,     6,     2,     1,
       1,     1,     1,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     4,     4,     0,     6,     2,     1,     1,     1,
       4,     0,     6,     2,     1,     1,     1,     1,     4,     4,
       5,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     0,     5,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     5,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     0,     6,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     0,     5,     3,     1,     1,     1,     4,     4,     0,
       5,     3,     1,     1,     1,     5,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     5,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       2,     0,     1,     0,     0,   213,     0,   172,   315,   375,
     384,   391,     0,   548,   366,   198,     0,     0,   108,   263,
       0,     0,   274,   295,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,     0,
     174,   317,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,    74,    75,    77,    76,     0,   592,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   577,   578,   579,   580,   581,   583,   584,
     585,   586,   587,   582,   588,   589,   590,   591,   189,     0,
     175,   340,     0,   318,     0,     0,     0,   454,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   522,
       0,   501,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     402,   452,   453,   450,   451,   413,   403,   404,   441,   405,
     406,   407,   408,   409,   410,   411,   412,   446,   414,   415,
     416,   418,   423,   419,   421,   420,   436,   422,   424,   425,
     426,   427,   430,   428,   417,   429,   432,   440,   442,   443,
     433,   434,   448,   449,   445,   435,   431,   438,   439,   437,
     444,   447,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,    85,    86,    87,    90,
      92,    91,    88,    89,    45,     0,     0,     0,    42,    43,
      44,   134,     0,   111,     0,   616,     0,     0,     0,     0,
       0,     0,     0,   609,   610,   611,   612,   614,   613,   615,
      61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,    58,    51,    60,    54,    55,    56,    52,
      59,    57,    53,     0,     0,     0,     0,     0,     0,    73,
     232,     0,     0,     0,   237,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   216,   217,   218,
     227,   219,   220,   221,   222,   223,   230,   224,   225,   226,
     228,   229,   231,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   576,     0,
       0,   381,     0,     0,     0,   378,   379,   380,   389,     0,
       0,   387,   388,   397,     0,     0,     0,   394,   395,   396,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   401,   558,   569,     0,     0,   561,     0,     0,
       0,   551,   552,   553,   554,   555,   556,   557,   372,     0,
       0,     0,   369,   370,   371,   205,     0,     0,     0,     0,
     201,   202,   203,   204,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,    41,     0,   270,
       0,     0,     0,     0,   266,   267,   268,   269,     0,     0,
       0,     0,     0,     0,     0,   608,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,   281,     0,
     284,     0,     0,   277,   278,   279,   280,   301,     0,   303,
       0,   298,   299,   300,     0,     0,     0,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   215,     0,     0,     0,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     575,   187,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   338,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   348,     0,     0,     0,     0,     0,     0,     0,
       0,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     336,   333,   335,   334,   332,   329,   330,   331,   337,     0,
       0,     0,   377,     0,     0,   386,     0,     0,     0,   393,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       0,     0,     0,     0,   400,     0,     0,     0,     0,     0,
       0,     0,   550,     0,     0,     0,   368,     0,     0,     0,
       0,   200,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,     0,     0,    40,
     132,     0,     0,     0,     0,   151,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,   114,   115,   116,   129,   117,   130,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   131,     0,
       0,     0,     0,   265,     0,     0,     0,     0,     0,     0,
     607,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,     0,     0,     0,     0,   276,     0,     0,     0,
     297,    81,    80,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   214,
     604,   603,   593,    26,    26,    26,    26,    26,    28,    27,
     597,   598,   602,   600,   605,   606,   599,   601,   594,   595,
     596,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   176,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     319,     0,     0,   376,     0,   385,     0,     0,   392,   464,
     468,   457,   482,   495,   494,   545,   499,   462,   547,   490,
     497,   463,   455,   456,   471,   460,   489,   461,   459,   473,
     472,   491,   467,   466,   465,   492,   488,   543,   544,   485,
     526,   540,   541,   527,   528,   535,   529,   538,   542,   531,
     536,   532,   537,   530,   534,   533,   539,     0,   525,   487,
     505,   519,   520,   506,   507,   514,   508,   517,   521,   510,
     515,   511,   516,   509,   513,   512,   518,     0,   504,   481,
     483,   498,   493,   458,   484,   479,   480,   477,   478,   475,
     476,   470,   469,    34,    34,    34,    36,    35,   546,   500,
     486,   496,   474,     0,     0,     0,     0,     0,     0,   549,
       0,     0,   367,     0,     0,   209,     0,   208,   199,    98,
      99,    97,    96,   100,   106,   101,   105,   103,   104,   102,
      95,    94,   107,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   112,     0,     0,     0,   264,   621,
     617,   620,   622,   618,   619,    65,    71,    63,    67,    66,
      62,    64,    70,    68,    69,     0,     0,     0,   275,     0,
       0,   296,   256,   236,   255,   247,   248,   244,   250,   246,
     245,   252,   249,     0,   251,   243,     0,   240,   242,   258,
     254,   253,   262,   257,   234,   261,   260,   259,   235,   233,
      29,    30,    31,    32,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   173,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   316,   382,   383,   390,   398,   399,   523,
       0,   502,     0,    37,    38,    39,   574,   573,     0,   572,
     560,   559,   566,   565,     0,   564,   568,   567,   374,   373,
     212,   211,     0,   206,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   109,   272,   273,   271,   282,   288,   292,
     294,   293,   291,   289,   290,     0,   287,   283,   302,   307,
     311,   314,   313,   312,   310,   308,   309,     0,   306,   241,
     238,     0,   192,   194,   196,   195,   193,   188,   191,   190,
     197,   343,   345,   346,   361,   365,   364,   360,   359,   358,
     347,   355,   356,   353,   354,   352,     0,   351,   341,   362,
     363,   339,   344,   357,   342,   524,   503,   570,     0,   562,
       0,   210,   207,   150,   140,   148,   137,   165,   163,   162,
     157,   166,   170,   159,   167,     0,   169,   164,   158,   171,
     168,   160,   161,     0,   154,   156,   146,   141,   138,   143,
     133,   147,   136,   149,   142,   139,   145,   135,   144,   285,
       0,   304,     0,   239,   349,     0,   571,   563,   155,   152,
       0,   286,   305,   350,   153
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,    24,   808,   809,   946,   947,    25,   247,   248,
     249,   250,    26,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,    27,    71,    72,    73,    74,
      75,    28,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,    29,    61,   252,   729,   730,   731,   253,   732,
     733,   734,   735,   736,   737,   738,   739,   740,   741,   742,
     743,   744,   745,   746,   747,   748,   989,  1233,  1234,  1235,
      30,    50,   109,   561,   562,   563,   110,   564,   565,   566,
     567,   568,   569,   570,   571,    31,    58,   449,   450,   451,
     966,   967,   452,   453,    32,    48,   316,   317,   318,   319,
     320,   321,   322,   521,  1046,  1047,  1048,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,    33,    62,   473,
     474,   475,   476,   477,    34,    65,   502,   503,   504,   505,
     506,   773,  1155,  1156,    35,    66,   510,   511,   512,   513,
     778,  1167,  1168,    36,    51,   112,   590,   591,   592,   113,
     593,   594,   595,   596,   597,   598,   599,   841,  1196,  1197,
     600,   601,   602,   603,   604,   605,   606,   607,   608,    37,
      57,   441,   442,   443,   444,    38,    52,   354,   355,   356,
     357,    39,    53,   360,   361,   362,    40,    54,   366,   367,
     368,   369,    41,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     403,   927,   928,   216,   401,   907,   908,   217,   218,   219,
     220,   221,    42,    56,   430,   431,   432,   433,   434,   678,
    1114,  1115,   435,   436,   437,   675,  1108,  1109,    43,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,    44,   262,   263,   264,   265,
     266,   267,   268,   269
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -764
static const short yypact[] =
{
    -764,   729,  -764,  -130,  -224,  -764,  -218,  -764,  -764,  -764,
    -764,  -764,  -216,  -764,  -764,  -764,  -209,  -200,  -764,  -764,
    -185,  -177,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,   266,  -174,   540,
     -75,   -65,  -154,  -123,  -119,   391,  -110,  -100,   -93,   364,
     155,    20,   -73,   629,   332,   -68,   -63,  -764,   -57,   -54,
     -47,    18,  -764,  -764,  -764,  -764,   665,  -764,   -35,   -32,
     -21,   -17,    -6,    -2,     0,    24,    26,    37,    42,    43,
      44,    45,   218,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,    21,
    -764,  -764,    23,  -764,    29,     9,    87,  -764,    47,    48,
      49,    53,    57,    62,    67,    68,    70,    71,    76,    78,
      86,    88,    95,    98,    99,   102,   109,   113,   115,   116,
     119,   122,   123,   124,   125,   126,   129,   134,   138,  -764,
     143,  -764,   148,   154,   156,   157,   159,   161,   162,   163,
     165,   166,   169,   170,   171,   173,   174,   175,   177,     8,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,   368,    10,   207,  -764,   180,   181,   184,   192,
     195,   197,   198,   202,    63,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,   204,   205,    13,  -764,  -764,
    -764,  -764,    64,  -764,    11,  -764,   210,   212,   215,   217,
     219,   221,   291,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,   222,   225,   228,   230,   231,   232,   234,   235,   239,
     240,   149,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,   150,    22,   179,   188,   241,   158,  -764,
    -764,   243,   246,   250,  -764,   256,   257,   258,   268,   269,
     270,   272,   284,   285,   297,   298,   153,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,   303,   328,   356,   411,   411,   412,   413,
     361,   366,   367,   370,   371,   372,   374,   311,  -764,   726,
     795,  -764,   312,   319,     4,  -764,  -764,  -764,  -764,   329,
       3,  -764,  -764,  -764,   335,   342,    17,  -764,  -764,  -764,
     400,   411,   404,   411,   460,   443,   463,   415,   416,   417,
     472,   457,   422,   477,   478,   480,   428,   411,   429,   486,
     473,   441,   496,   498,   499,   411,   500,   483,   504,   509,
     464,   401,   465,   424,   411,   411,   468,   505,   485,   494,
     -53,   -42,   495,   497,   411,   411,   514,   411,   501,   502,
     503,   445,  -764,  -764,  -764,   444,   448,  -764,   451,   454,
     160,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,   455,
     456,    60,  -764,  -764,  -764,  -764,   458,   459,   461,     5,
    -764,  -764,  -764,  -764,   535,   554,   555,   559,   452,   563,
     564,   531,   481,  -764,   568,   569,   482,  -764,   479,  -764,
     484,   493,   506,    25,  -764,  -764,  -764,  -764,   536,   538,
     542,   557,   560,   411,   508,  -764,   591,   565,   600,   602,
     603,   607,   608,   630,   615,   617,   529,  -764,  -764,   532,
    -764,   534,    54,  -764,  -764,  -764,  -764,  -764,   537,  -764,
      19,  -764,  -764,  -764,   539,   541,   543,  -764,   589,   627,
     595,   544,   597,   598,   599,   604,   605,   639,   661,   644,
     648,   614,   651,   566,  -764,   570,   574,   575,   352,   578,
     582,   583,   584,   585,   586,   587,   588,   594,   609,   611,
    -764,  -764,   562,   573,   596,   601,   612,   613,   616,   625,
     633,   238,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,   634,   635,   636,   637,   649,   654,   655,
     656,   659,  -764,   660,   670,   675,   677,   678,   679,   680,
     193,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,   652,
     657,   620,  -764,   689,   632,  -764,   691,   692,   642,  -764,
     664,   671,   684,   685,   686,   687,   688,   696,   697,   699,
     700,   701,   702,   703,   704,   706,   707,   708,   709,   710,
     711,   712,   714,   715,   717,   718,   719,   720,   721,   722,
     723,   668,   724,   713,   727,   728,   730,   731,   732,   733,
     734,   735,   736,   737,   738,   739,   740,   741,    91,   742,
     743,   744,   745,   746,  -764,   747,   411,   658,   748,   802,
     815,   749,  -764,   818,   836,   752,  -764,   837,   842,   861,
     755,  -764,   756,   757,   758,   759,   760,   761,   762,   763,
     764,   765,   766,   767,   768,   769,  -764,   770,   771,  -764,
    -764,   772,   773,   774,   775,  -764,   776,   777,   778,   779,
     780,   781,   782,   783,   784,   785,   786,   787,   788,    96,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,   862,
     863,   881,   793,  -764,   794,   796,   797,   798,   799,   800,
    -764,   801,   803,   804,   805,   806,   807,   808,   809,   810,
     811,  -764,   884,   812,   891,   813,  -764,   901,   814,   816,
    -764,  -764,  -764,  -764,   819,   820,   821,   548,   822,   823,
     824,   825,   826,   827,   828,   829,   830,   831,   832,  -764,
    -764,  -764,  -764,   411,   411,   411,   411,   411,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,   411,   879,   921,   925,   940,   923,   942,   411,   514,
     838,  -764,   926,    16,   667,   928,   929,   889,   894,   895,
     932,   841,   934,   935,   936,   937,   956,   939,   941,   851,
    -764,   853,   854,  -764,   855,  -764,   856,   857,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -205,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -204,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,   514,   514,   514,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,    -9,   858,   859,    -4,   860,   864,  -764,
     865,   866,  -764,   867,   868,   681,  -197,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,   914,   951,   916,   922,   869,
     924,   927,   930,   931,   959,   933,   962,   938,   943,   964,
     944,   965,   945,   882,  -764,   883,   886,   887,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,   888,   301,   893,  -764,   896,
     533,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,   491,  -764,  -764,  -173,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,   897,   898,   899,   900,   902,
     903,   904,   905,   906,  -764,   907,   908,   909,   910,   911,
     912,   913,   915,   917,   918,   296,   919,   920,   946,   947,
     948,   949,   950,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
     668,  -764,   713,  -764,  -764,  -764,  -764,  -764,  -167,  -764,
    -764,  -764,  -764,  -764,  -162,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,   986,  -764,   861,   952,   953,   954,   955,   518,
     957,   958,   960,   961,   963,   966,   967,   968,   969,   970,
     971,   972,   973,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -159,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -138,  -764,  -764,
    -764,   548,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -137,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,    -9,  -764,
      -4,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,   576,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -131,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
     301,  -764,   533,  -764,  -764,   296,  -764,  -764,  -764,  -764,
     518,  -764,  -764,  -764,  -764
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -764,  -764,  -764,  -763,  -336,  -752,  -414,  -764,  -764,   871,
    -764,  -764,  -764,  -764,   843,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  1039,  -764,  -764,
    -764,  -764,  -764,   974,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,   112,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -147,  -102,
    -764,  -764,  -764,  -764,   590,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,   694,  -764,
    -764,     6,  -764,  -764,  -764,  -764,  -764,   834,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,   -26,   110,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
     682,  -764,  -764,  -764,  -764,  -764,  -764,   650,  -764,  -764,
    -764,  -764,  -764,   -96,  -764,  -764,  -764,   646,  -764,  -764,
    -764,  -764,   -95,  -764,  -764,  -764,  -764,   571,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,   -97,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,   725,  -764,  -764,  -764,  -764,  -764,   817,  -764,
    -764,  -764,  -764,  -764,   833,  -764,  -764,  -764,  -764,   839,
    -764,  -764,  -764,  -764,   990,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,    58,  -764,  -764,  -764,    65,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,   750,  -764,  -764,  -764,  -764,
    -764,   -48,  -764,  -764,  -764,  -764,  -764,   -45,  -764,  -764,
    1072,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,   975,  -764,  -764,
    -764,  -764,  -764,  -764
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned short yytable[] =
{
     539,   540,   669,  1106,   358,   351,   445,    47,  1112,   117,
     358,   438,   469,    49,   244,    55,   118,   119,   363,    67,
     507,   120,    59,   507,  1099,  1101,   469,   121,  1100,  1102,
     351,    60,  1123,   470,   122,   621,  1124,   623,   123,   124,
    1060,  1061,  1062,  1063,  1064,   125,    63,   470,   126,   127,
     128,   637,   129,    68,    64,   498,  1170,    76,   130,   645,
    1171,   438,  1207,    69,   225,   108,  1208,  1209,   654,   655,
    1249,  1210,   131,   132,  1250,   111,   133,   114,   666,   667,
     446,   670,   134,   359,   352,   447,   135,   136,   363,   359,
     137,  1251,  1254,   138,   139,  1252,  1255,   710,  1259,    45,
      46,   711,  1260,   140,   141,   943,   944,   945,   115,   352,
     142,   143,   116,   144,   145,   146,   147,   226,   227,   228,
     712,   222,   245,   660,   661,   229,   471,   148,   364,    70,
     508,   223,   713,   508,   662,   663,   149,   150,   224,   151,
     471,   152,   153,   714,   448,   154,   353,   759,   715,   246,
     270,   498,   439,   472,   300,   716,   244,   230,   254,   365,
     251,   423,   717,   293,   424,   499,   718,   472,   294,  1107,
     155,   353,   156,   301,  1113,   295,   157,   302,   296,   719,
     158,   159,   160,   161,   271,   297,   509,   162,   163,   509,
     231,  1103,  1104,  1105,   572,   164,   573,   333,   364,   574,
     334,   303,   439,   425,   575,   304,   426,   720,   445,  1076,
    1077,   335,   721,   668,   305,   336,   576,   577,   578,    77,
     306,   500,   579,   165,   166,   272,   337,   167,   440,   365,
     338,   722,   339,   614,   611,   690,   168,   307,   421,   551,
     580,   723,   724,   466,   581,   582,   725,   618,   298,   779,
      78,    79,   349,   427,   350,   752,   340,    80,   341,   232,
     273,   499,   274,   275,   245,   308,   552,    67,   583,   342,
     584,   428,   501,   309,   343,   344,   345,   346,   440,   370,
     371,   372,   446,   585,   775,   373,   233,   447,   310,   374,
     685,   246,   255,   462,   375,   468,   311,   312,   276,   376,
     377,    68,   378,   379,   586,    81,    82,  1191,   380,  1192,
     381,    69,   277,   726,   727,    83,    84,   500,   382,   514,
     383,  1193,   728,   313,   314,  1194,  1003,   384,   515,   256,
     385,   386,   587,   270,   387,    85,    86,   553,   554,   555,
     954,   388,   556,   588,   257,   389,   448,   390,   391,   557,
      87,   392,   589,   278,   393,   394,   395,   396,   397,    88,
     258,   398,   558,   259,   260,   225,   399,   271,   501,   423,
     400,   315,   424,   279,   280,   402,   559,    70,   429,   496,
     404,   516,   261,   533,  1148,  1195,   405,   517,   406,   407,
     681,   408,   117,   409,   410,   411,   560,   412,   413,   118,
     119,   414,   415,   416,   120,   417,   418,   419,   272,   420,
     121,   425,   454,   455,   426,  1073,   456,   122,   226,   227,
     228,   123,   124,   849,   457,   535,   229,   458,   125,   459,
     460,   126,   127,   128,   461,   129,   464,   465,    89,    90,
      91,   130,   478,   273,   479,   274,   275,   480,   347,   481,
     536,   482,  1149,   483,   486,   131,   132,   487,   230,   133,
     488,   427,   489,   490,   491,   134,   492,   493,   830,   135,
     136,   494,   495,   137,   538,   518,   138,   139,   519,   428,
     710,   276,   520,  1150,   711,  1065,   140,   141,   522,   523,
     524,   231,  1072,   142,   143,   277,   144,   145,   146,   147,
     525,   526,   527,   712,   528,   803,   804,   805,   806,   807,
     148,  1035,  1036,  1151,  1152,   713,   529,   530,  1153,   149,
     150,   484,   151,  1217,   152,   153,   714,  1154,   154,   531,
     532,   715,   537,   538,   541,   542,   278,   543,   716,  1037,
     550,    77,   544,   545,   609,   717,   546,   547,   548,   718,
     549,   610,  1038,   155,  1218,   156,   279,   280,  1039,   157,
     232,   613,   719,   158,   159,   160,   161,   616,  1035,  1036,
     162,   163,    78,    79,   617,  1040,   620,  1219,   164,    80,
     622,  1217,   624,   625,  1220,   626,   429,   233,  1221,  1222,
     720,   627,   628,   629,   630,   721,  1037,   631,   632,   633,
     634,  1223,   635,  1041,   636,   638,   165,   166,   639,  1038,
     167,  1042,  1218,   640,   722,  1039,  1159,   641,   642,   168,
     643,   644,   646,   647,   723,   724,   648,    81,    82,   725,
     255,   649,  1040,   651,  1224,  1219,   668,    83,    84,  1225,
     650,   652,  1220,  1044,   656,   657,  1221,  1222,  1226,   696,
     697,   698,   699,   700,   701,   702,   653,    85,    86,  1223,
    1041,   658,  1045,  1227,  1228,  1229,   300,   256,  1042,  1043,
     659,   664,    87,   665,   674,   692,   676,   671,   672,   673,
     677,    88,   257,   679,  1160,   301,   680,   683,   684,   302,
     687,   688,  1224,   689,   693,   694,   726,   727,   258,   695,
    1044,   259,   260,   703,   704,   728,  1226,   705,   707,   708,
     706,   709,   754,   303,   755,  1161,   749,   304,   756,  1045,
     261,  1227,  1228,  1229,  1230,   750,   305,   551,  1162,     2,
       3,   761,   306,   757,     4,  1231,   758,   760,   751,     5,
     763,   762,   764,   765,  1232,  1163,  1164,   766,   767,   307,
    1165,     6,   768,     7,   552,   769,     8,   770,   771,  1166,
      89,    90,    91,     9,   772,   784,   774,   785,   781,   777,
     782,   786,   783,   788,   789,   790,   787,   308,    10,   793,
     791,   792,  1230,   794,   795,   309,    11,    12,   796,    13,
     797,   798,   851,  1231,   821,   799,   572,   852,   573,   800,
     310,   574,  1232,   801,   802,   822,   575,   810,   311,   312,
      14,   811,   812,   813,   814,   815,   816,   817,   576,   577,
     578,    15,    16,   818,   579,   553,   554,   555,   823,   854,
     556,   856,   857,   824,   955,   313,   314,   557,   819,    17,
     820,  1004,   580,  1078,   825,   826,   581,   582,   827,   853,
     558,   890,   891,   892,   893,    18,   894,   828,   895,   896,
     897,   855,  1122,   898,   559,   829,   832,   833,   834,   835,
     583,   858,   584,   899,   900,   901,   902,   903,   904,   905,
      19,   836,   906,   315,   560,   585,   837,   838,   839,    20,
      21,   840,   842,   859,    22,    23,   910,   911,   912,   913,
     860,   914,   843,   915,   916,   917,   586,   844,   918,   845,
     846,   847,   848,   861,   862,   863,   864,   865,   919,   920,
     921,   922,   923,   924,   925,   866,   867,   926,   868,   869,
     870,   871,   872,   873,   587,   874,   875,   876,   877,   878,
     879,   880,   957,   881,   882,   588,   883,   884,   885,   886,
     887,   888,   889,   909,   589,   958,   929,   930,   960,   931,
     932,   933,   934,   935,   936,   937,   938,   939,   940,   941,
     942,   948,   949,   950,   951,   952,   961,   963,   959,   953,
     956,   962,   964,   965,   968,   969,   970,   971,   972,   973,
     974,   975,   976,   977,   978,   979,   980,   981,   982,   983,
     984,  1066,  1005,  1006,   985,   986,   987,   988,   990,   991,
     992,   993,   994,   995,   996,   997,   998,   999,  1000,  1001,
    1002,  1007,  1008,  1009,  1025,  1010,  1011,  1012,  1013,  1014,
    1015,  1027,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,
    1024,  1029,  1028,  1067,  1026,  1031,  1030,  1068,  1032,  1033,
    1034,  1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,  1057,
    1058,  1059,  1069,  1070,  1071,  1081,  1075,  1074,  1079,  1080,
    1082,  1083,  1084,  1085,  1086,  1087,  1088,  1089,  1090,  1091,
    1093,  1092,  1094,  1095,  1096,  1097,  1098,  1110,  1111,  1116,
    1125,  1126,  1127,  1117,  1118,  1119,  1120,  1121,  1128,  1134,
    1130,  1129,  1136,  1131,  1139,  1141,  1132,  1133,  1211,  1135,
     299,  1143,  1144,  1264,  1137,  1145,  1146,  1147,   467,  1138,
    1140,  1142,  1157,  1258,   497,  1158,  1172,  1173,  1174,  1175,
    1212,  1176,  1177,  1178,  1179,  1180,  1181,  1182,  1183,  1184,
    1185,  1186,  1187,   691,  1188,  1253,  1189,  1190,  1198,  1199,
     534,   831,   776,  1169,  1261,   753,   780,  1262,  1263,   422,
    1206,   850,  1257,  1256,   348,  1205,   686,     0,     0,     0,
       0,   612,     0,     0,     0,  1200,  1201,  1202,  1203,  1204,
     682,  1213,  1214,  1215,  1216,     0,  1236,  1237,     0,  1238,
    1239,     0,  1240,   615,     0,  1241,  1242,  1243,  1244,  1245,
    1246,  1247,  1248,     0,     0,   619,     0,     0,   463,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   485
};

static const short yycheck[] =
{
     336,   337,   416,    12,     1,     1,     1,   231,    12,     1,
       1,     1,     1,   231,     1,   231,     8,     9,     1,     1,
       1,    13,   231,     1,   229,   229,     1,    19,   233,   233,
       1,   231,   229,    22,    26,   371,   233,   373,    30,    31,
     803,   804,   805,   806,   807,    37,   231,    22,    40,    41,
      42,   387,    44,    35,   231,     1,   229,   231,    50,   395,
     233,     1,   229,    45,     1,   140,   233,   229,   404,   405,
     229,   233,    64,    65,   233,   140,    68,   231,   414,   415,
      75,   417,    74,    80,    80,    80,    78,    79,     1,    80,
      82,   229,   229,    85,    86,   233,   233,     1,   229,   229,
     230,     5,   233,    95,    96,    14,    15,    16,   231,    80,
     102,   103,   231,   105,   106,   107,   108,    54,    55,    56,
      24,   231,   109,   176,   177,    62,   115,   119,   111,   111,
     111,   231,    36,   111,   176,   177,   128,   129,   231,   131,
     115,   133,   134,    47,   139,   137,   142,   483,    52,   136,
       1,     1,   142,   142,     1,    59,     1,    94,   231,   142,
     140,     1,    66,   231,     4,   111,    70,   142,   231,   178,
     162,   142,   164,    20,   178,   232,   168,    24,   232,    83,
     172,   173,   174,   175,    35,   232,   167,   179,   180,   167,
     127,   943,   944,   945,     1,   187,     3,   232,   111,     6,
     232,    48,   142,    43,    11,    52,    46,   111,     1,   193,
     194,   232,   116,   122,    61,   232,    23,    24,    25,     1,
      67,   167,    29,   215,   216,    76,   232,   219,   218,   142,
     232,   135,   232,   230,   230,   230,   228,    84,   230,     1,
      47,   145,   146,   230,    51,    52,   150,   230,   230,   230,
      32,    33,   231,    93,   231,   230,   232,    39,   232,   196,
     111,   111,   113,   114,   109,   112,    28,     1,    75,   232,
      77,   111,   218,   120,   232,   232,   232,   232,   218,   232,
     232,   232,    75,    90,   230,   232,   223,    80,   135,   232,
     230,   136,     1,   230,   232,   231,   143,   144,   149,   232,
     232,    35,   232,   232,   111,    87,    88,    11,   232,    13,
     232,    45,   163,   217,   218,    97,    98,   167,   232,   140,
     232,    25,   226,   170,   171,    29,   230,   232,   140,    38,
     232,   232,   139,     1,   232,   117,   118,    99,   100,   101,
     676,   232,   104,   150,    53,   232,   139,   232,   232,   111,
     132,   232,   159,   204,   232,   232,   232,   232,   232,   141,
      69,   232,   124,    72,    73,     1,   232,    35,   218,     1,
     232,   218,     4,   224,   225,   232,   138,   111,   218,   230,
     232,   140,    91,   230,    83,    89,   232,   229,   232,   232,
     230,   232,     1,   232,   232,   232,   158,   232,   232,     8,
       9,   232,   232,   232,    13,   232,   232,   232,    76,   232,
      19,    43,   232,   232,    46,   829,   232,    26,    54,    55,
      56,    30,    31,   230,   232,   122,    62,   232,    37,   232,
     232,    40,    41,    42,   232,    44,   232,   232,   220,   221,
     222,    50,   232,   111,   232,   113,   114,   232,   230,   232,
     122,   232,   151,   232,   232,    64,    65,   232,    94,    68,
     232,    93,   232,   232,   232,    74,   232,   232,   230,    78,
      79,   232,   232,    82,   122,   232,    85,    86,   232,   111,
       1,   149,   232,   182,     5,   821,    95,    96,   232,   232,
     232,   127,   828,   102,   103,   163,   105,   106,   107,   108,
     232,   232,   232,    24,   232,   153,   154,   155,   156,   157,
     119,    20,    21,   212,   213,    36,   232,   232,   217,   128,
     129,   230,   131,     5,   133,   134,    47,   226,   137,   232,
     232,    52,   176,   122,   122,   122,   204,   176,    59,    48,
     229,     1,   176,   176,   232,    66,   176,   176,   176,    70,
     176,   232,    61,   162,    36,   164,   224,   225,    67,   168,
     196,   232,    83,   172,   173,   174,   175,   232,    20,    21,
     179,   180,    32,    33,   232,    84,   176,    59,   187,    39,
     176,     5,   122,   140,    66,   122,   218,   223,    70,    71,
     111,   176,   176,   176,   122,   116,    48,   140,   176,   122,
     122,    83,   122,   112,   176,   176,   215,   216,   122,    61,
     219,   120,    36,   140,   135,    67,    83,   176,   122,   228,
     122,   122,   122,   140,   145,   146,   122,    87,    88,   150,
       1,   122,    84,   232,   116,    59,   122,    97,    98,   121,
     176,   176,    66,   152,   176,   140,    70,    71,   130,   197,
     198,   199,   200,   201,   202,   203,   232,   117,   118,    83,
     112,   176,   171,   145,   146,   147,     1,    38,   120,   121,
     176,   176,   132,   176,   229,   140,   232,   176,   176,   176,
     232,   141,    53,   232,   151,    20,   232,   232,   232,    24,
     232,   232,   116,   232,   140,   140,   217,   218,    69,   140,
     152,    72,    73,   140,   140,   226,   130,   176,   140,   140,
     229,   229,   176,    48,   176,   182,   232,    52,   176,   171,
      91,   145,   146,   147,   206,   232,    61,     1,   195,     0,
       1,   140,    67,   176,     5,   217,   176,   229,   232,    10,
     140,   176,   140,   140,   226,   212,   213,   140,   140,    84,
     217,    22,   122,    24,    28,   140,    27,   140,   229,   226,
     220,   221,   222,    34,   232,   176,   232,   140,   229,   232,
     229,   176,   229,   176,   176,   176,   232,   112,    49,   140,
     176,   176,   206,   122,   140,   120,    57,    58,   140,    60,
     176,   140,   140,   217,   232,   229,     1,   140,     3,   229,
     135,     6,   226,   229,   229,   232,    11,   229,   143,   144,
      81,   229,   229,   229,   229,   229,   229,   229,    23,    24,
      25,    92,    93,   229,    29,    99,   100,   101,   232,   140,
     104,   140,   140,   232,   176,   170,   171,   111,   229,   110,
     229,   729,    47,   176,   232,   232,    51,    52,   232,   229,
     124,   183,   184,   185,   186,   126,   188,   232,   190,   191,
     192,   229,   181,   195,   138,   232,   232,   232,   232,   232,
      75,   229,    77,   205,   206,   207,   208,   209,   210,   211,
     151,   232,   214,   218,   158,    90,   232,   232,   232,   160,
     161,   232,   232,   229,   165,   166,   183,   184,   185,   186,
     229,   188,   232,   190,   191,   192,   111,   232,   195,   232,
     232,   232,   232,   229,   229,   229,   229,   229,   205,   206,
     207,   208,   209,   210,   211,   229,   229,   214,   229,   229,
     229,   229,   229,   229,   139,   229,   229,   229,   229,   229,
     229,   229,   140,   229,   229,   150,   229,   229,   229,   229,
     229,   229,   229,   229,   159,   140,   229,   229,   140,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   140,   140,   229,   232,
     232,   229,   140,   122,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   122,   140,   140,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   140,   229,   229,   140,   229,   229,   229,   229,   229,
     229,   140,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   140,   229,   122,   232,   229,   232,   122,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   122,   140,   122,   176,   140,   229,   140,   140,
     176,   176,   140,   232,   140,   140,   140,   140,   122,   140,
     229,   140,   229,   229,   229,   229,   229,   229,   229,   229,
     176,   140,   176,   229,   229,   229,   229,   229,   176,   140,
     176,   232,   140,   176,   140,   140,   176,   176,   122,   176,
      71,   229,   229,  1260,   176,   229,   229,   229,   247,   176,
     176,   176,   229,  1225,   281,   229,   229,   229,   229,   229,
    1124,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   449,   229,  1171,   229,   229,   229,   229,
     316,   561,   502,  1043,  1250,   473,   510,  1252,  1255,   169,
    1102,   590,  1210,  1208,    92,  1100,   441,    -1,    -1,    -1,
      -1,   354,    -1,    -1,    -1,   229,   229,   229,   229,   229,
     430,   229,   229,   229,   229,    -1,   229,   229,    -1,   229,
     229,    -1,   229,   360,    -1,   229,   229,   229,   229,   229,
     229,   229,   229,    -1,    -1,   366,    -1,    -1,   234,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   262
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,   235,     0,     1,     5,    10,    22,    24,    27,    34,
      49,    57,    58,    60,    81,    92,    93,   110,   126,   151,
     160,   161,   165,   166,   236,   241,   246,   259,   265,   276,
     304,   319,   328,   351,   358,   368,   377,   403,   409,   415,
     420,   426,   486,   502,   519,   229,   230,   231,   329,   231,
     305,   378,   410,   416,   421,   231,   487,   404,   320,   231,
     231,   277,   352,   231,   231,   359,   369,     1,    35,    45,
     111,   260,   261,   262,   263,   264,   231,     1,    32,    33,
      39,    87,    88,    97,    98,   117,   118,   132,   141,   220,
     221,   222,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   518,   140,   306,
     310,   140,   379,   383,   231,   231,   231,     1,     8,     9,
      13,    19,    26,    30,    31,    37,    40,    41,    42,    44,
      50,    64,    65,    68,    74,    78,    79,    82,    85,    86,
      95,    96,   102,   103,   105,   106,   107,   108,   119,   128,
     129,   131,   133,   134,   137,   162,   164,   168,   172,   173,
     174,   175,   179,   180,   187,   215,   216,   219,   228,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   477,   481,   482,   483,
     484,   485,   231,   231,   231,     1,    54,    55,    56,    62,
      94,   127,   196,   223,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,     1,   109,   136,   242,   243,   244,
     245,   140,   278,   282,   231,     1,    38,    53,    69,    72,
      73,    91,   520,   521,   522,   523,   524,   525,   526,   527,
       1,    35,    76,   111,   113,   114,   149,   163,   204,   224,
     225,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   231,   231,   232,   232,   232,   230,   261,
       1,    20,    24,    48,    52,    61,    67,    84,   112,   120,
     135,   143,   144,   170,   171,   218,   330,   331,   332,   333,
     334,   335,   336,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   230,   504,   231,
     231,     1,    80,   142,   411,   412,   413,   414,     1,    80,
     417,   418,   419,     1,   111,   142,   422,   423,   424,   425,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   478,   232,   474,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   230,   428,     1,     4,    43,    46,    93,   111,   218,
     488,   489,   490,   491,   492,   496,   497,   498,     1,   142,
     218,   405,   406,   407,   408,     1,    75,    80,   139,   321,
     322,   323,   326,   327,   232,   232,   232,   232,   232,   232,
     232,   232,   230,   267,   232,   232,   230,   243,   231,     1,
      22,   115,   142,   353,   354,   355,   356,   357,   232,   232,
     232,   232,   232,   232,   230,   521,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   230,   248,     1,   111,
     167,   218,   360,   361,   362,   363,   364,     1,   111,   167,
     370,   371,   372,   373,   140,   140,   140,   229,   232,   232,
     232,   337,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   230,   331,   122,   122,   176,   122,   238,
     238,   122,   122,   176,   176,   176,   176,   176,   176,   176,
     229,     1,    28,    99,   100,   101,   104,   111,   124,   138,
     158,   307,   308,   309,   311,   312,   313,   314,   315,   316,
     317,   318,     1,     3,     6,    11,    23,    24,    25,    29,
      47,    51,    52,    75,    77,    90,   111,   139,   150,   159,
     380,   381,   382,   384,   385,   386,   387,   388,   389,   390,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   232,
     232,   230,   412,   232,   230,   418,   232,   232,   230,   423,
     176,   238,   176,   238,   122,   140,   122,   176,   176,   176,
     122,   140,   176,   122,   122,   122,   176,   238,   176,   122,
     140,   176,   122,   122,   122,   238,   122,   140,   122,   122,
     176,   232,   176,   232,   238,   238,   176,   140,   176,   176,
     176,   177,   176,   177,   176,   176,   238,   238,   122,   240,
     238,   176,   176,   176,   229,   499,   232,   232,   493,   232,
     232,   230,   489,   232,   232,   230,   406,   232,   232,   232,
     230,   322,   140,   140,   140,   140,   197,   198,   199,   200,
     201,   202,   203,   140,   140,   176,   229,   140,   140,   229,
       1,     5,    24,    36,    47,    52,    59,    66,    70,    83,
     111,   116,   135,   145,   146,   150,   217,   218,   226,   279,
     280,   281,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   232,
     232,   232,   230,   354,   176,   176,   176,   176,   176,   238,
     229,   140,   176,   140,   140,   140,   140,   140,   122,   140,
     140,   229,   232,   365,   232,   230,   361,   232,   374,   230,
     371,   229,   229,   229,   176,   140,   176,   232,   176,   176,
     176,   176,   176,   140,   122,   140,   140,   176,   140,   229,
     229,   229,   229,   153,   154,   155,   156,   157,   237,   238,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     230,   308,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   391,   232,   232,   232,   232,   232,   232,   232,   230,
     381,   140,   140,   229,   140,   229,   140,   140,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     183,   184,   185,   186,   188,   190,   191,   192,   195,   205,
     206,   207,   208,   209,   210,   211,   214,   479,   480,   229,
     183,   184,   185,   186,   188,   190,   191,   192,   195,   205,
     206,   207,   208,   209,   210,   211,   214,   475,   476,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,    14,    15,    16,   239,   240,   229,   229,
     229,   229,   229,   232,   238,   176,   232,   140,   140,   229,
     140,   140,   229,   140,   140,   122,   324,   325,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   232,   232,   232,   232,   300,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   230,   280,   140,   140,   140,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   140,   232,   140,   229,   140,
     232,   229,   229,   229,   229,    20,    21,    48,    61,    67,
      84,   112,   120,   121,   152,   171,   338,   339,   340,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     237,   237,   237,   237,   237,   238,   122,   122,   122,   122,
     140,   122,   238,   240,   229,   140,   193,   194,   176,   140,
     140,   176,   176,   176,   140,   232,   140,   140,   140,   140,
     122,   140,   140,   229,   229,   229,   229,   229,   229,   229,
     233,   229,   233,   239,   239,   239,    12,   178,   500,   501,
     229,   229,    12,   178,   494,   495,   229,   229,   229,   229,
     229,   229,   181,   229,   233,   176,   140,   176,   176,   232,
     176,   176,   176,   176,   140,   176,   140,   176,   176,   140,
     176,   140,   176,   229,   229,   229,   229,   229,    83,   151,
     182,   212,   213,   217,   226,   366,   367,   229,   229,    83,
     151,   182,   195,   212,   213,   217,   226,   375,   376,   340,
     229,   233,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,    11,    13,    25,    29,    89,   392,   393,   229,   229,
     229,   229,   229,   229,   229,   480,   476,   229,   233,   229,
     233,   122,   325,   229,   229,   229,   229,     5,    36,    59,
      66,    70,    71,    83,   116,   121,   130,   145,   146,   147,
     206,   217,   226,   301,   302,   303,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     233,   229,   233,   339,   229,   233,   501,   495,   303,   229,
     233,   367,   376,   393,   302
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		\
			goto yyerrlab1

/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylineno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylineno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 26:
#line 389 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 28:
#line 391 "ircd_parser.y"
    {
			yyval.number = yyvsp[-1].number + yyvsp[0].number;
		}
    break;

  case 29:
#line 395 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number + yyvsp[0].number;
		}
    break;

  case 30:
#line 399 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 + yyvsp[0].number;
		}
    break;

  case 31:
#line 403 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 + yyvsp[0].number;
		}
    break;

  case 32:
#line 407 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 + yyvsp[0].number;
		}
    break;

  case 33:
#line 411 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 * 7 + yyvsp[0].number;
		}
    break;

  case 34:
#line 416 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 36:
#line 417 "ircd_parser.y"
    { yyval.number = yyvsp[-1].number + yyvsp[0].number; }
    break;

  case 37:
#line 418 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number + yyvsp[0].number; }
    break;

  case 38:
#line 419 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 + yyvsp[0].number; }
    break;

  case 39:
#line 420 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 * 1024 + yyvsp[0].number; }
    break;

  case 46:
#line 434 "ircd_parser.y"
    {
#ifndef STATIC_MODULES /* NOOP in the static case */
  if (ypass == 2)
  {
    char *m_bn;

    m_bn = basename(yylval.string);

    /* I suppose we should just ignore it if it is already loaded(since
     * otherwise we would flood the opers on rehash) -A1kmm.
     */
    if (findmodule_byname(m_bn) == NULL)
      /* XXX - should we unload this module on /rehash, if it isn't listed? */
      load_one_module(yylval.string, 0);
  }
#endif
}
    break;

  case 47:
#line 453 "ircd_parser.y"
    {
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
}
    break;

  case 62:
#line 477 "ircd_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (ypass == 2)
  {
    BIO *file;

    if (ServerInfo.rsa_private_key)
    {
      RSA_free(ServerInfo.rsa_private_key);
      ServerInfo.rsa_private_key = NULL;
    }

    if (ServerInfo.rsa_private_key_file)
    {
      MyFree(ServerInfo.rsa_private_key_file);
      ServerInfo.rsa_private_key_file = NULL;
    }

    DupString(ServerInfo.rsa_private_key_file, yylval.string);

    if ((file = BIO_new_file(yylval.string, "r")) == NULL)
    {
      yyerror("Ignoring config file entry rsa_private_key -- file open failed");
      break;
    }

    ServerInfo.rsa_private_key = (RSA *)PEM_read_bio_RSAPrivateKey(file, NULL, 0, NULL);

    if (ServerInfo.rsa_private_key == NULL)
    {
      yyerror("Ignoring config file entry rsa_private_key -- "
              "couldn't extract key");
      break;
    }

    if (!RSA_check_key(ServerInfo.rsa_private_key))
    {
      yyerror("Ignoring config file entry rsa_private_key -- invalid key");
      break;
    }

    /* require 2048 bit (256 byte) key */
    if (RSA_size(ServerInfo.rsa_private_key) != 256)
    {
      yyerror("Ignoring config file entry rsa_private_key -- not 2048 bit");
      break;
    }

    BIO_set_close(file, BIO_CLOSE);
    BIO_free(file);
  }
#endif
}
    break;

  case 63:
#line 532 "ircd_parser.y"
    {
  /* this isn't rehashable */
  if (ypass == 2)
  {
    if (ServerInfo.name == NULL)
    {
      /* the ircd will exit() in main() if we dont set one */
      if (strlen(yylval.string) <= HOSTLEN)
        DupString(ServerInfo.name, yylval.string);
    }
  }
}
    break;

  case 64:
#line 546 "ircd_parser.y"
    {
  /* this isn't rehashable */
  if (ypass == 2 && !ServerInfo.sid)
  {
    if ((strlen(yylval.string) == IRC_MAXSID) && IsDigit(yylval.string[0])
	&& IsAlNum(yylval.string[1]) && IsAlNum(yylval.string[2]))
    {
      DupString(ServerInfo.sid, yylval.string);
    }
    else
    {
      ilog(L_ERROR, "Ignoring config file entry SID -- invalid SID. Aborting.");
      exit(0);
    }
  }
}
    break;

  case 65:
#line 564 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.description);
    DupString(ServerInfo.description,yylval.string);
  }
}
    break;

  case 66:
#line 573 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char *p;

    if ((p = strchr(yylval.string, ' ')) != NULL)
      p = '\0';

    MyFree(ServerInfo.network_name);
    DupString(ServerInfo.network_name, yylval.string);
  }
}
    break;

  case 67:
#line 587 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.network_desc);
    DupString(ServerInfo.network_desc, yylval.string);
  }
}
    break;

  case 68:
#line 596 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct addrinfo hints, *res;

    memset(&hints, 0, sizeof(hints));

    hints.ai_family   = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags    = AI_PASSIVE | AI_NUMERICHOST;

    if (irc_getaddrinfo(yylval.string, NULL, &hints, &res))
      ilog(L_ERROR, "Invalid netmask for server vhost(%s)", yylval.string);
    else
    {
      assert(res != NULL);

      memcpy(&ServerInfo.ip, res->ai_addr, res->ai_addrlen);
      ServerInfo.ip.ss.ss_family = res->ai_family;
      ServerInfo.ip.ss_len = res->ai_addrlen;
      irc_freeaddrinfo(res);

      ServerInfo.specific_ipv4_vhost = 1;
    }
  }
}
    break;

  case 69:
#line 624 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
  {
    struct addrinfo hints, *res;

    memset(&hints, 0, sizeof(hints));

    hints.ai_family   = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags    = AI_PASSIVE | AI_NUMERICHOST;

    if (irc_getaddrinfo(yylval.string, NULL, &hints, &res))
      ilog(L_ERROR, "Invalid netmask for server vhost6(%s)", yylval.string);
    else
    {
      assert(res != NULL);

      memcpy(&ServerInfo.ip6, res->ai_addr, res->ai_addrlen);
      ServerInfo.ip6.ss.ss_family = res->ai_family;
      ServerInfo.ip6.ss_len = res->ai_addrlen;
      irc_freeaddrinfo(res);

      ServerInfo.specific_ipv6_vhost = 1;
    }
  }
#endif
}
    break;

  case 70:
#line 654 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (MAXCONN >= yyvsp[-1].number)
    {
      ServerInfo.max_clients = yyvsp[-1].number;
    }
    else
    {
      ilog(L_ERROR, "Setting serverinfo_max_clients to MAXCONN");
      ServerInfo.max_clients = MAXCONN;
    }
  }
}
    break;

  case 71:
#line 670 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
    {
      /* Don't become a hub if we have a lazylink active. */
      if (!ServerInfo.hub && uplink && IsCapable(uplink, CAP_LL))
      {
        sendto_realops_flags(UMODE_ALL, L_ALL,
                             "Ignoring config file line hub=yes; "
                             "due to active LazyLink (%s)", uplink->name);
      }
      else
      {
        ServerInfo.hub = 1;
        uplink = NULL;
        delete_capability("HUB");
        add_capability("HUB", CAP_HUB, 1);
      }
    }
    else if (ServerInfo.hub)
    {
      dlink_node *ptr;

      ServerInfo.hub = 0;
      delete_capability("HUB");

      /* Don't become a leaf if we have a lazylink active. */
      DLINK_FOREACH(ptr, serv_list.head)
      {
        if (MyConnect((struct Client *)ptr->data) &&
            IsCapable((struct Client *)ptr->data, CAP_LL))
        {
          sendto_realops_flags(UMODE_ALL, L_ALL,
                               "Ignoring config file line hub=no; "
                               "due to active LazyLink (%s)",
                               ((struct Client *)ptr->data)->name);
          add_capability("HUB", CAP_HUB, 1);
          ServerInfo.hub = 1;
          break;
        }
      }
    }
  }
}
    break;

  case 79:
#line 726 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.name);
    DupString(AdminInfo.name, yylval.string);
  }
}
    break;

  case 80:
#line 735 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.email);
    DupString(AdminInfo.email, yylval.string);
  }
}
    break;

  case 81:
#line 744 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.description);
    DupString(AdminInfo.description, yylval.string);
  }
}
    break;

  case 94:
#line 767 "ircd_parser.y"
    {
                        }
    break;

  case 95:
#line 771 "ircd_parser.y"
    {
                        }
    break;

  case 96:
#line 775 "ircd_parser.y"
    {
                        }
    break;

  case 97:
#line 779 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
}
    break;

  case 98:
#line 786 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
}
    break;

  case 99:
#line 793 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
}
    break;

  case 100:
#line 800 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
}
    break;

  case 101:
#line 804 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
}
    break;

  case 102:
#line 808 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
}
    break;

  case 103:
#line 812 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
}
    break;

  case 104:
#line 816 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
}
    break;

  case 105:
#line 820 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
}
    break;

  case 106:
#line 824 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
}
    break;

  case 107:
#line 830 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 108:
#line 839 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(OPER_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
  }
  else
  {
    MyFree(class_name);
    class_name = NULL;
  }
}
    break;

  case 109:
#line 851 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;
    dlink_node *ptr;
    dlink_node *next_ptr;

    conf_add_class_to_conf(yy_conf, class_name);

    /* Now, make sure there is a copy of the "base" given oper
     * block in each of the collected copies
     */

    DLINK_FOREACH_SAFE(ptr, next_ptr, col_conf_list.head)
    {
      struct AccessItem *new_aconf;
      struct ConfItem *new_conf;
      yy_tmp = ptr->data;

      new_conf = make_conf_item(OPER_TYPE);
      new_aconf = (struct AccessItem *)map_to_conf(new_conf);

      new_aconf->flags = yy_aconf->flags;

      if (yy_conf->name != NULL)
        DupString(new_conf->name, yy_conf->name);
      if (yy_tmp->user != NULL)
	DupString(new_aconf->user, yy_tmp->user);
      else
	DupString(new_aconf->user, "*");
      if (yy_tmp->host != NULL)
	DupString(new_aconf->host, yy_tmp->host);
      else
	DupString(new_aconf->host, "*");
      conf_add_class_to_conf(new_conf, class_name);
      if (yy_aconf->passwd != NULL)
        DupString(new_aconf->passwd, yy_aconf->passwd);

      new_aconf->port = yy_aconf->port;
#ifdef HAVE_LIBCRYPTO
      if (yy_aconf->rsa_public_key_file != NULL)
      {
        BIO *file;

        DupString(new_aconf->rsa_public_key_file,
		  yy_aconf->rsa_public_key_file);

        file = BIO_new_file(yy_aconf->rsa_public_key_file, "r");
        new_aconf->rsa_public_key = (RSA *)PEM_read_bio_RSA_PUBKEY(file, 
							   NULL, 0, NULL);
        BIO_set_close(file, BIO_CLOSE);
        BIO_free(file);
      }
#endif

#ifdef HAVE_LIBCRYPTO
      if (yy_tmp->name && (yy_tmp->passwd || yy_aconf->rsa_public_key)
	  && yy_tmp->host)
#else
      if (yy_tmp->name && yy_tmp->passwd && yy_tmp->host)
#endif
      {
        conf_add_class_to_conf(new_conf, class_name);
	if (yy_tmp->name != NULL)
	  DupString(new_conf->name, yy_tmp->name);
      }

      dlinkDelete(&yy_tmp->node, &col_conf_list);
      free_collect_item(yy_tmp);
    }

    yy_conf = NULL;
    yy_aconf = NULL;


    MyFree(class_name);
    class_name = NULL;
  }
}
    break;

  case 133:
#line 942 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > OPERNICKLEN)
      yylval.string[OPERNICKLEN] = '\0';

    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 134:
#line 954 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > OPERNICKLEN)
      yylval.string[OPERNICKLEN] = '\0';

    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 135:
#line 966 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;

    if (yy_aconf->user == NULL)
    {
      DupString(yy_aconf->host, yylval.string);
      split_user_host(yy_aconf->host, &yy_aconf->user, &yy_aconf->host);
    }
    else
    {
      yy_tmp = (struct CollectItem *)MyMalloc(sizeof(struct CollectItem));

      DupString(yy_tmp->host, yylval.string);
      split_user_host(yy_tmp->host, &yy_tmp->user, &yy_tmp->host);

      dlinkAdd(yy_tmp, &yy_tmp->node, &col_conf_list);
    }
  }
}
    break;

  case 136:
#line 989 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_aconf->passwd != NULL)
      memset(yy_aconf->passwd, 0, strlen(yy_aconf->passwd));

    MyFree(yy_aconf->passwd);
    DupString(yy_aconf->passwd, yylval.string);
  }
}
    break;

  case 137:
#line 1001 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_ENCRYPTED;
    else
      yy_aconf->flags &= ~CONF_FLAGS_ENCRYPTED;
  }
}
    break;

  case 138:
#line 1012 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
    else
      yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 139:
#line 1023 "ircd_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (ypass == 2)
  {
    BIO *file;

    if (yy_aconf->rsa_public_key != NULL)
    {
      RSA_free(yy_aconf->rsa_public_key);
      yy_aconf->rsa_public_key = NULL;
    }

    if (yy_aconf->rsa_public_key_file != NULL)
    {
      MyFree(yy_aconf->rsa_public_key_file);
      yy_aconf->rsa_public_key_file = NULL;
    }

    DupString(yy_aconf->rsa_public_key_file, yylval.string);
    file = BIO_new_file(yylval.string, "r");

    if (file == NULL)
    {
      yyerror("Ignoring rsa_public_key_file -- file doesn't exist");
      break;
    }

    yy_aconf->rsa_public_key = (RSA *)PEM_read_bio_RSA_PUBKEY(file, NULL, 0, NULL);

    if (yy_aconf->rsa_public_key == NULL)
    {
      yyerror("Ignoring rsa_public_key_file -- Key invalid; check key syntax.");
      break;
    }

    BIO_set_close(file, BIO_CLOSE);
    BIO_free(file);
  }
#endif /* HAVE_LIBCRYPTO */
}
    break;

  case 140:
#line 1065 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 141:
#line 1074 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
    else
      yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 142:
#line 1085 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_REMOTE;
    else
      yy_aconf->port &= ~OPER_FLAG_REMOTE; 
  }
}
    break;

  case 143:
#line 1096 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_K;
    else
      yy_aconf->port &= ~OPER_FLAG_K;
  }
}
    break;

  case 144:
#line 1107 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_X;
    else
      yy_aconf->port &= ~OPER_FLAG_X;
  }
}
    break;

  case 145:
#line 1118 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_UNKLINE;
    else
      yy_aconf->port &= ~OPER_FLAG_UNKLINE; 
  }
}
    break;

  case 146:
#line 1129 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_GLINE;
    else
      yy_aconf->port &= ~OPER_FLAG_GLINE;
  }
}
    break;

  case 147:
#line 1140 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_N;
    else
      yy_aconf->port &= ~OPER_FLAG_N;
  }
}
    break;

  case 148:
#line 1151 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_DIE;
    else
      yy_aconf->port &= ~OPER_FLAG_DIE;
  }
}
    break;

  case 149:
#line 1162 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_REHASH;
    else
      yy_aconf->port &= ~OPER_FLAG_REHASH;
  }
}
    break;

  case 150:
#line 1173 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_ADMIN;
    else
      yy_aconf->port &= ~OPER_FLAG_ADMIN;
  }
}
    break;

  case 151:
#line 1184 "ircd_parser.y"
    {
}
    break;

  case 155:
#line 1188 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 156:
#line 1189 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 157:
#line 1192 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 158:
#line 1199 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 159:
#line 1206 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 160:
#line 1213 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 161:
#line 1220 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 162:
#line 1227 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 163:
#line 1234 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 164:
#line 1241 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 165:
#line 1248 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 166:
#line 1255 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 167:
#line 1262 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 168:
#line 1269 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 169:
#line 1276 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 170:
#line 1283 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 171:
#line 1290 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 172:
#line 1303 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = (struct ClassItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 173:
#line 1310 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    if ((yy_conf != NULL) && (yy_conf->name == NULL))
    {
      delete_conf_item(yy_conf);
      yy_conf = NULL;
      yy_class = NULL;
    }
  }
}
    break;

  case 188:
#line 1337 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    struct ConfItem *cconf = find_exact_name_conf(CLASS_TYPE, yylval.string,
                                                  NULL, NULL);
    struct ClassItem *class = NULL;

    if (cconf != NULL)
    {
      if (cconf == yy_conf)
        cconf = NULL;
      else
        class = (struct ClassItem *) map_to_conf(cconf);
    }

    if (class != NULL && MaxTotal(class) >= 0)
    {
      yyerror("Multiple classes with the same name, using the first entry");
      MyFree(yy_conf->name);
      yy_conf->name = NULL;
    }
    else
    {
      if (class != NULL)
      {
        PingFreq(class) = PingFreq(yy_class);
        MaxPerIp(class) = MaxPerIp(yy_class);
        ConFreq(class) = ConFreq(yy_class);
        MaxTotal(class) = MaxTotal(yy_class);
        MaxGlobal(class) = MaxGlobal(yy_class);
        MaxLocal(class) = MaxLocal(yy_class);
        MaxIdent(class) = MaxIdent(yy_class);
        MaxSendq(class) = MaxSendq(yy_class);
        delete_conf_item(yy_conf);
        yy_conf = cconf;
        yy_class = class;
        /* allow changing case - replace old name */
      }

      MyFree(yy_conf->name);
      DupString(yy_conf->name, yylval.string);
    }
  }
}
    break;

  case 189:
#line 1383 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    struct ConfItem *cconf = find_exact_name_conf(CLASS_TYPE, yylval.string,
                                                  NULL, NULL);
    struct ClassItem *class = NULL;

    if (cconf != NULL)
    {
      if (cconf == yy_conf)
        cconf = NULL;
      else
        class = (struct ClassItem *) map_to_conf(cconf);
    }

    if (class != NULL && MaxTotal(class) >= 0)
    {
      yyerror("Multiple classes with the same name, using the first entry");
      MyFree(yy_conf->name);
      yy_conf->name = NULL;
    }
    else
    {
      if (class != NULL)
      {
        PingFreq(class) = PingFreq(yy_class);
        MaxPerIp(class) = MaxPerIp(yy_class);
        ConFreq(class) = ConFreq(yy_class);
        MaxTotal(class) = MaxTotal(yy_class);
        MaxGlobal(class) = MaxGlobal(yy_class);
        MaxLocal(class) = MaxLocal(yy_class);
        MaxIdent(class) = MaxIdent(yy_class);
        MaxSendq(class) = MaxSendq(yy_class);
        delete_conf_item(yy_conf);
        yy_conf = cconf;
        yy_class = class;
        /* allow changing case - replace old name */
      }

      MyFree(yy_conf->name);
      DupString(yy_conf->name, yylval.string);
    }
  }
}
    break;

  case 190:
#line 1429 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 191:
#line 1435 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = yyvsp[-1].number;
}
    break;

  case 192:
#line 1441 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 193:
#line 1447 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = yyvsp[-1].number;
}
    break;

  case 194:
#line 1453 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = yyvsp[-1].number;
}
    break;

  case 195:
#line 1459 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = yyvsp[-1].number;
}
    break;

  case 196:
#line 1465 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = yyvsp[-1].number;
}
    break;

  case 197:
#line 1471 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = yyvsp[-1].number;
}
    break;

  case 198:
#line 1480 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_address = NULL;
}
    break;

  case 199:
#line 1484 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 209:
#line 1500 "ircd_parser.y"
    {
  if (ypass == 2)
    add_listener(yyvsp[0].number, listener_address);
}
    break;

  case 210:
#line 1504 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    int i;

    for (i = yyvsp[-2].number; i <= yyvsp[0].number; i++)
    {
      add_listener(i, listener_address);
    }
  }
}
    break;

  case 211:
#line 1517 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 212:
#line 1526 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 213:
#line 1538 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLIENT_TYPE);
    yy_aconf = map_to_conf(yy_conf);
  }
  else
  {
    MyFree(class_name);
    class_name = NULL;
  }
}
    break;

  case 214:
#line 1550 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;
    dlink_node *ptr;
    dlink_node *next_ptr;

    conf_add_class_to_conf(yy_conf, class_name);
    add_conf_by_address(CONF_CLIENT, yy_aconf);

    /* copy over settings from first struct */
    DLINK_FOREACH_SAFE(ptr, next_ptr, col_conf_list.head)
    {
      struct AccessItem *new_aconf;
      struct ConfItem *new_conf;

      new_conf = make_conf_item(CLIENT_TYPE);
      new_aconf = (struct AccessItem *)map_to_conf(new_conf);

      yy_tmp = ptr->data;

      if (yy_aconf->passwd != NULL)
        DupString(new_aconf->passwd, yy_aconf->passwd);
      if (yy_conf->name != NULL)
        DupString(new_conf->name, yy_conf->name);

      if (yy_aconf->passwd != NULL)
	DupString(new_aconf->passwd, yy_aconf->passwd);

      new_aconf->flags = yy_aconf->flags;
      new_aconf->port  = yy_aconf->port;

      if (yy_tmp->user != NULL)
      {
	DupString(new_aconf->user, yy_tmp->user);
        collapse(new_aconf->user);
      }
      else
        DupString(new_aconf->user, "*");

      if (yy_tmp->host != NULL)
      {
	DupString(new_aconf->host, yy_tmp->host);
        collapse(new_aconf->host);
      }
      else
	DupString(new_aconf->host, "*");

      conf_add_class_to_conf(new_conf, class_name);
      add_conf_by_address(CONF_CLIENT, new_aconf);
      dlinkDelete(&yy_tmp->node, &col_conf_list);
      free_collect_item(yy_tmp);
    }

    MyFree(class_name);
    class_name = NULL;
    yy_conf = NULL;
    yy_aconf = NULL;
  }
}
    break;

  case 233:
#line 1620 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;

    if (yy_aconf->user == NULL)
    {
      if (yylval.string != NULL)
      {
	DupString(yy_aconf->host, yylval.string);
	split_user_host(yy_aconf->host, &yy_aconf->user, &yy_aconf->host);
      }
    }
    else
    {
      yy_tmp = (struct CollectItem *)MyMalloc(sizeof(struct CollectItem));
      if (yylval.string != NULL)
      {
	DupString(yy_tmp->host, yylval.string);
	split_user_host(yy_tmp->host, &yy_tmp->user, &yy_tmp->host);
      }
      dlinkAdd(yy_tmp, &yy_tmp->node, &col_conf_list);
    }
  }
}
    break;

  case 234:
#line 1649 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    /* be paranoid */
    if (yy_aconf->passwd != NULL)
      memset(yy_aconf->passwd, 0, strlen(yy_aconf->passwd));

    MyFree(yy_aconf->passwd);
    DupString(yy_aconf->passwd, yylval.string);
  }
}
    break;

  case 235:
#line 1662 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
    else
      yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
  }
}
    break;

  case 236:
#line 1673 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 237:
#line 1682 "ircd_parser.y"
    {
}
    break;

  case 241:
#line 1686 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 242:
#line 1687 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 243:
#line 1690 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 244:
#line 1698 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 245:
#line 1705 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 246:
#line 1712 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 247:
#line 1719 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 248:
#line 1726 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 249:
#line 1733 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 250:
#line 1740 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 251:
#line 1747 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 252:
#line 1754 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 253:
#line 1763 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
    else
      yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
  }
}
    break;

  case 254:
#line 1774 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
    else
      yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 255:
#line 1785 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
    else
      yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 256:
#line 1796 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
    else
      yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 257:
#line 1807 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
    else
      yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
  }
}
    break;

  case 258:
#line 1818 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
    else
      yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
  }
}
    break;

  case 259:
#line 1830 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);

    if (strlen(yylval.string) < HOSTLEN)
    {    
      DupString(yy_conf->name, yylval.string);
      yy_aconf->flags |= CONF_FLAGS_SPOOF_IP;
    }
    else
    {
      ilog(L_ERROR, "Spoofs must be less than %d..ignoring it", HOSTLEN);
      yy_conf->name = NULL;
    }
  }
}
    break;

  case 260:
#line 1849 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 261:
#line 1859 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = yyvsp[-1].number;
  }
}
    break;

  case 262:
#line 1868 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
    else
      yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 263:
#line 1883 "ircd_parser.y"
    {
  if (ypass == 2)
    resv_reason = NULL;
}
    break;

  case 264:
#line 1887 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 271:
#line 1899 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 272:
#line 1908 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (IsChanPrefix(*yylval.string))
    {
      char def_reason[] = "No reason specified";

      create_channel_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
    }
  }
  /* ignore it for now.. but we really should make a warning if
   * its an erroneous name --fl_ */
}
    break;

  case 273:
#line 1923 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (clean_resv_nick(yylval.string))
    {
      char def_reason[] = "No reason specified";

      create_nick_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
    }
  }

  /* otherwise its erroneous, but ignore it for now */
}
    break;

  case 274:
#line 1941 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(ULINE_TYPE);
    yy_match_item = map_to_conf(yy_conf);
    yy_match_item->action = SHARED_ALL;
  }
}
    break;

  case 275:
#line 1949 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 282:
#line 1960 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 283:
#line 1969 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    DupString(yy_match_item->user, yylval.string);
    split_user_host(yy_match_item->user, &yy_match_item->user, &yy_match_item->host);

    /* default to *@* */
    if (yy_match_item->user == NULL)
      DupString(yy_match_item->user, "*");
    if (yy_match_item->host == NULL)
      DupString(yy_match_item->host, "*");
  }
}
    break;

  case 284:
#line 1984 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 288:
#line 1991 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 289:
#line 1995 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 290:
#line 1999 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 291:
#line 2003 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 292:
#line 2007 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 293:
#line 2011 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 294:
#line 2015 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 295:
#line 2024 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_match_item = (struct MatchItem *)map_to_conf(yy_conf);
    yy_match_item->action = CLUSTER_ALL;
  }
}
    break;

  case 296:
#line 2032 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_conf->name == NULL)
      DupString(yy_conf->name, "*");
    if (yy_match_item->user == NULL)
      DupString(yy_match_item->user, "*");
    if (yy_match_item->host == NULL)
      DupString(yy_match_item->host, "*");
    yy_conf = NULL;
  }
}
    break;

  case 302:
#line 2049 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 303:
#line 2055 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 307:
#line 2062 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_KLINE;
}
    break;

  case 308:
#line 2066 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNKLINE;
}
    break;

  case 309:
#line 2070 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_XLINE;
}
    break;

  case 310:
#line 2074 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNXLINE;
}
    break;

  case 311:
#line 2078 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_RESV;
}
    break;

  case 312:
#line 2082 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNRESV;
}
    break;

  case 313:
#line 2086 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_LOCOPS;
}
    break;

  case 314:
#line 2090 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = CLUSTER_ALL;
}
    break;

  case 315:
#line 2099 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(SERVER_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->passwd = NULL;
    /* defaults */
    yy_aconf->port = PORTNUM;

    if (ConfigFileEntry.burst_away)
      yy_aconf->flags = CONF_FLAGS_BURST_AWAY;
  }
  else
  {
    MyFree(class_name);
    class_name = NULL;
  }
}
    break;

  case 316:
#line 2117 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_hconf=NULL;
    struct CollectItem *yy_lconf=NULL;
    dlink_node *ptr;
    dlink_node *next_ptr;
#ifdef HAVE_LIBCRYPTO
    if (yy_aconf->host &&
	((yy_aconf->passwd && yy_aconf->spasswd) ||
	 (yy_aconf->rsa_public_key && IsConfCryptLink(yy_aconf))))
#else /* !HAVE_LIBCRYPTO */
      if (yy_aconf->host && !IsConfCryptLink(yy_aconf) && 
	  yy_aconf->passwd && yy_aconf->spasswd)
#endif /* !HAVE_LIBCRYPTO */
	{
	  if (conf_add_server(yy_conf, scount, class_name) >= 0)
	  {
	    ++scount;
	  }
	  else
	  {
	    delete_conf_item(yy_conf);
	    yy_conf = NULL;
	    yy_aconf = NULL;
	  }
	}
	else
	{
	  /* Even if yy_conf ->name is NULL
	   * should still unhook any hub/leaf confs still pending
	   */
	  unhook_hub_leaf_confs();

	  if (yy_conf->name != NULL)
	  {
#ifndef HAVE_LIBCRYPTO
	    if (IsConfCryptLink(yy_aconf))
	      yyerror("Ignoring connect block -- no OpenSSL support");
#else
	    if (IsConfCryptLink(yy_aconf) && !yy_aconf->rsa_public_key)
	      yyerror("Ignoring connect block -- missing key");
#endif
	    if (yy_aconf->host == NULL)
	      yyerror("Ignoring connect block -- missing host");
	    else if (!IsConfCryptLink(yy_aconf) && 
		    (!yy_aconf->passwd || !yy_aconf->spasswd))
              yyerror("Ignoring connect block -- missing password");
	  }


          /* XXX
           * This fixes a try_connections() core (caused by invalid class_ptr
           * pointers) reported by metalrock. That's an ugly fix, but there
           * is currently no better way. The entire config subsystem needs an
           * rewrite ASAP. make_conf_item() shouldn't really add things onto
           * a doubly linked list immediately without any sanity checks!  -Michael
           */
          delete_conf_item(yy_conf);

          yy_aconf = NULL;
	  yy_conf = NULL;
	}

      /*
       * yy_conf is still pointing at the server that is having
       * a connect block built for it. This means, y_aconf->name 
       * points to the actual irc name this server will be known as.
       * Now this new server has a set or even just one hub_mask (or leaf_mask)
       * given in the link list at yy_hconf. Fill in the HUB confs
       * from this link list now.
       */        
      DLINK_FOREACH_SAFE(ptr, next_ptr, hub_conf_list.head)
      {
	struct ConfItem *new_hub_conf;
	struct MatchItem *match_item;

	yy_hconf = ptr->data;

	/* yy_conf == NULL is a fatal error for this connect block! */
	if ((yy_conf != NULL) && (yy_conf->name != NULL))
	{
	  new_hub_conf = make_conf_item(HUB_TYPE);
	  match_item = (struct MatchItem *)map_to_conf(new_hub_conf);
	  DupString(new_hub_conf->name, yy_conf->name);
	  if (yy_hconf->user != NULL)
	    DupString(match_item->user, yy_hconf->user);
	  else
	    DupString(match_item->user, "*");
	  if (yy_hconf->host != NULL)
	    DupString(match_item->host, yy_hconf->host);
	  else
	    DupString(match_item->host, "*");
	}
	dlinkDelete(&yy_hconf->node, &hub_conf_list);
	free_collect_item(yy_hconf);
      }

      /* Ditto for the LEAF confs */

      DLINK_FOREACH_SAFE(ptr, next_ptr, leaf_conf_list.head)
      {
	struct ConfItem *new_leaf_conf;
	struct MatchItem *match_item;

	yy_lconf = ptr->data;

	if ((yy_conf != NULL) && (yy_conf->name != NULL))
	{
	  new_leaf_conf = make_conf_item(LEAF_TYPE);
	  match_item = (struct MatchItem *)map_to_conf(new_leaf_conf);
	  DupString(new_leaf_conf->name, yy_conf->name);
	  if (yy_lconf->user != NULL)
	    DupString(match_item->user, yy_lconf->user);
	  else
	    DupString(match_item->user, "*");
	  if (yy_lconf->host != NULL)
	    DupString(match_item->host, yy_lconf->host);
	  else
	    DupString(match_item->host, "*");
	}
	dlinkDelete(&yy_lconf->node, &leaf_conf_list);
	free_collect_item(yy_lconf);
      }
      MyFree(class_name);
      class_name = NULL;
      yy_conf = NULL;
      yy_aconf = NULL;
  }
}
    break;

  case 339:
#line 2259 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_conf->name != NULL)
      yyerror("Multiple connect name entry");

    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 340:
#line 2271 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_conf->name != NULL)
      yyerror("Multiple connect name entry");

    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 341:
#line 2283 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 342:
#line 2292 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_aconf->spasswd != NULL)
      memset(yy_aconf->spasswd, 0, strlen(yy_aconf->spasswd));

    MyFree(yy_aconf->spasswd);
    DupString(yy_aconf->spasswd, yylval.string);
  }
}
    break;

  case 343:
#line 2304 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_aconf->passwd != NULL)
      memset(yy_aconf->passwd, 0, strlen(yy_aconf->passwd));

    MyFree(yy_aconf->passwd);
    DupString(yy_aconf->passwd, yylval.string);
  }
}
    break;

  case 344:
#line 2316 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = yyvsp[-1].number;
}
    break;

  case 345:
#line 2322 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 346:
#line 2326 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 347:
#line 2334 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 348:
#line 2343 "ircd_parser.y"
    {
}
    break;

  case 352:
#line 2348 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_LAZY_LINK;
}
    break;

  case 353:
#line 2352 "ircd_parser.y"
    {
  if (ypass == 2)
#ifndef HAVE_LIBZ
    yyerror("Ignoring flags = compressed; -- no zlib support");
#else
    yy_aconf->flags |= CONF_FLAGS_COMPRESSED;
#endif
}
    break;

  case 354:
#line 2360 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_CRYPTLINK;
}
    break;

  case 355:
#line 2364 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_ALLOW_AUTO_CONN;
}
    break;

  case 356:
#line 2368 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_BURST_AWAY;
}
    break;

  case 357:
#line 2374 "ircd_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (ypass == 2)
  {
    BIO *file;

    if (yy_aconf->rsa_public_key != NULL)
    {
      RSA_free(yy_aconf->rsa_public_key);
      yy_aconf->rsa_public_key = NULL;
    }

    if (yy_aconf->rsa_public_key_file != NULL)
    {
      MyFree(yy_aconf->rsa_public_key_file);
      yy_aconf->rsa_public_key_file = NULL;
    }

    DupString(yy_aconf->rsa_public_key_file, yylval.string);

    if ((file = BIO_new_file(yylval.string, "r")) == NULL)
    {
      yyerror("Ignoring rsa_public_key_file -- file doesn't exist");
      break;
    }

    yy_aconf->rsa_public_key = (RSA *)PEM_read_bio_RSA_PUBKEY(file, NULL, 0, NULL);

    if (yy_aconf->rsa_public_key == NULL)
    {
      yyerror("Ignoring rsa_public_key_file -- Key invalid; check key syntax.");
      break;
    }
      
    BIO_set_close(file, BIO_CLOSE);
    BIO_free(file);
  }
#endif /* HAVE_LIBCRYPTO */
}
    break;

  case 358:
#line 2415 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_ENCRYPTED;
    else
      yy_aconf->flags &= ~CONF_FLAGS_ENCRYPTED;
  }
}
    break;

  case 359:
#line 2426 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_CRYPTLINK;
    else
      yy_aconf->flags &= ~CONF_FLAGS_CRYPTLINK;
  }
}
    break;

  case 360:
#line 2437 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
#ifndef HAVE_LIBZ
      yyerror("Ignoring compressed=yes; -- no zlib support");
#else
      yy_aconf->flags |= CONF_FLAGS_COMPRESSED;
#endif
    else
      yy_aconf->flags &= ~CONF_FLAGS_COMPRESSED;
  }
}
    break;

  case 361:
#line 2452 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_ALLOW_AUTO_CONN;
    else
      yy_aconf->flags &= ~CONF_FLAGS_ALLOW_AUTO_CONN;
  }
}
    break;

  case 362:
#line 2463 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;

    yy_tmp = (struct CollectItem *)MyMalloc(sizeof(struct CollectItem));
    DupString(yy_tmp->host, yylval.string);
    DupString(yy_tmp->user, "*");
    dlinkAdd(yy_tmp, &yy_tmp->node, &hub_conf_list);
  }
}
    break;

  case 363:
#line 2476 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;

    yy_tmp = (struct CollectItem *)MyMalloc(sizeof(struct CollectItem));
    DupString(yy_tmp->host, yylval.string);
    DupString(yy_tmp->user, "*");
    dlinkAdd(yy_tmp, &yy_tmp->node, &leaf_conf_list);
  }
}
    break;

  case 364:
#line 2489 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 365:
#line 2498 "ircd_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (ypass == 2)
  {
    struct EncCapability *ecap;
    const char *cipher_name;
    int found = 0;

    yy_aconf->cipher_preference = NULL;
    cipher_name = yylval.string;

    for (ecap = CipherTable; ecap->name; ecap++)
    {
      if ((irccmp(ecap->name, cipher_name) == 0) &&
          (ecap->cap & CAP_ENC_MASK))
      {
        yy_aconf->cipher_preference = ecap;
        found = 1;
        break;
      }
    }

    if (!found)
      yyerror("Invalid cipher");
  }
#else
  if (ypass == 2)
    yyerror("Ignoring cipher_preference -- no OpenSSL support");
#endif
}
    break;

  case 366:
#line 2533 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(KLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 367:
#line 2540 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_aconf->user && yy_aconf->reason && yy_aconf->host)
    {
      if (yy_aconf->host != NULL)
        add_conf_by_address(CONF_KILL, yy_aconf);
    }
    else
      delete_conf_item(yy_conf);
    yy_conf = NULL;
    yy_aconf = NULL;
  }
}
    break;

  case 373:
#line 2559 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    DupString(yy_aconf->host, yylval.string);
    split_user_host(yy_aconf->host, &yy_aconf->user, &yy_aconf->host);
  }
}
    break;

  case 374:
#line 2568 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 375:
#line 2580 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(DLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    /* default reason */
    DupString(yy_aconf->reason, "NO REASON");
  }
}
    break;

  case 376:
#line 2589 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_aconf->host && parse_netmask(yy_aconf->host, NULL, NULL) != HM_HOST)
      add_conf_by_address(CONF_DLINE, yy_aconf);
    else
      delete_conf_item(yy_conf);
    yy_conf = NULL;
    yy_aconf = NULL;
  }
}
    break;

  case 382:
#line 2605 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 383:
#line 2614 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 384:
#line 2626 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(EXEMPTDLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    DupString(yy_aconf->passwd, "*");
  }
}
    break;

  case 385:
#line 2634 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_aconf->host && parse_netmask(yy_aconf->host, NULL, NULL) != HM_HOST)
      add_conf_by_address(CONF_EXEMPTDLINE, yy_aconf);
    else
      delete_conf_item(yy_conf);
    yy_conf = NULL;
    yy_aconf = NULL;
  }
}
    break;

  case 390:
#line 2650 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 391:
#line 2662 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(XLINE_TYPE);
    yy_match_item = (struct MatchItem *)map_to_conf(yy_conf);
    /* default reason */
    DupString(yy_match_item->reason,"Something about your name");
  }
}
    break;

  case 392:
#line 2671 "ircd_parser.y"
    {
  /* XXX */
}
    break;

  case 398:
#line 2679 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    DupString(yy_conf->name, yylval.string);
    collapse(yy_conf->name);
  }
}
    break;

  case 399:
#line 2688 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_match_item->reason);
    DupString(yy_match_item->reason, yylval.string);
  }
}
    break;

  case 455:
#line 2736 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr = yyvsp[-1].number;
}
    break;

  case 456:
#line 2742 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr6 = yyvsp[-1].number;
}
    break;

  case 457:
#line 2748 "ircd_parser.y"
    {
  if (ypass == 1) /* must be set in the 1st pass */
    ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 458:
#line 2754 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 459:
#line 2759 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kill_chase_time_limit = yyvsp[-1].number;
}
    break;

  case 460:
#line 2765 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 461:
#line 2771 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 462:
#line 2777 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 463:
#line 2783 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 464:
#line 2789 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 465:
#line 2795 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_time = yyvsp[-1].number; 
}
    break;

  case 466:
#line 2801 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_changes = yyvsp[-1].number;
}
    break;

  case 467:
#line 2807 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_accept = yyvsp[-1].number;
}
    break;

  case 468:
#line 2813 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_spam_exit_message_time = yyvsp[-1].number;
}
    break;

  case 469:
#line 2819 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_warn_delta = yyvsp[-1].number;
}
    break;

  case 470:
#line 2825 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = yyvsp[-1].number;
}
    break;

  case 471:
#line 2831 "ircd_parser.y"
    {
  if ((yyvsp[-1].number > 0) && ypass == 1)
  {
    ilog(L_CRIT, "You haven't read your config file properly.");
    ilog(L_CRIT, "There is a line in the example conf that will kill your server if not removed.");
    ilog(L_CRIT, "Consider actually reading/editing the conf file, and removing this line.");
    exit(0);
  }
}
    break;

  case 472:
#line 2842 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 473:
#line 2848 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 474:
#line 2857 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 475:
#line 2863 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 476:
#line 2869 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 477:
#line 2875 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 478:
#line 2879 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 479:
#line 2885 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 480:
#line 2889 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 481:
#line 2895 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait = yyvsp[-1].number;
}
    break;

  case 482:
#line 2901 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.caller_id_wait = yyvsp[-1].number;
}
    break;

  case 483:
#line 2907 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait_simple = yyvsp[-1].number;
}
    break;

  case 484:
#line 2913 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 485:
#line 2919 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 486:
#line 2925 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 487:
#line 2931 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 488:
#line 2937 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
}
    break;

  case 489:
#line 2948 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.idletime = yyvsp[-1].number;
}
    break;

  case 490:
#line 2954 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dots_in_ident = yyvsp[-1].number;
}
    break;

  case 491:
#line 2960 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.maximum_links = yyvsp[-1].number;
}
    break;

  case 492:
#line 2966 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_targets = yyvsp[-1].number;
}
    break;

  case 493:
#line 2972 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 494:
#line 2981 "ircd_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (ypass == 2)
  {
    struct EncCapability *ecap;
    const char *cipher_name;
    int found = 0;

    ConfigFileEntry.default_cipher_preference = NULL;
    cipher_name = yylval.string;

    for (ecap = CipherTable; ecap->name; ecap++)
    {
      if ((irccmp(ecap->name, cipher_name) == 0) &&
          (ecap->cap & CAP_ENC_MASK))
      {
        ConfigFileEntry.default_cipher_preference = ecap;
        found = 1;
        break;
      }
    }

    if (!found)
      yyerror("Invalid cipher");
  }
#else
  if (ypass == 2)
    yyerror("Ignoring default_cipher_preference -- no OpenSSL support");
#endif
}
    break;

  case 495:
#line 3013 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    ConfigFileEntry.compression_level = yyvsp[-1].number;
#ifndef HAVE_LIBZ
    yyerror("Ignoring compression_level -- no zlib support");
#else
    if ((ConfigFileEntry.compression_level < 1) ||
        (ConfigFileEntry.compression_level > 9))
    {
      yyerror("Ignoring invalid compression_level, using default");
      ConfigFileEntry.compression_level = 0;
    }
#endif
  }
}
    break;

  case 496:
#line 3031 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 497:
#line 3037 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 498:
#line 3046 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 499:
#line 3052 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 500:
#line 3057 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 501:
#line 3063 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 505:
#line 3070 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 506:
#line 3074 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 507:
#line 3078 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 508:
#line 3082 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 509:
#line 3086 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 510:
#line 3090 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 511:
#line 3094 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 512:
#line 3098 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 513:
#line 3102 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 514:
#line 3106 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 515:
#line 3110 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 516:
#line 3114 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 517:
#line 3118 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 518:
#line 3122 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 519:
#line 3126 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 520:
#line 3130 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 521:
#line 3134 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 522:
#line 3140 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 526:
#line 3147 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 527:
#line 3151 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 528:
#line 3155 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 529:
#line 3159 "ircd_parser.y"
    { 
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 530:
#line 3163 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 531:
#line 3167 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 532:
#line 3171 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 533:
#line 3175 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 534:
#line 3179 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 535:
#line 3183 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 536:
#line 3187 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 537:
#line 3191 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 538:
#line 3195 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 539:
#line 3199 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 540:
#line 3203 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 541:
#line 3207 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 542:
#line 3211 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 543:
#line 3217 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard = yyvsp[-1].number;
}
    break;

  case 544:
#line 3223 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard_simple = yyvsp[-1].number;
}
    break;

  case 545:
#line 3229 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.default_floodcount = yyvsp[-1].number;
}
    break;

  case 546:
#line 3235 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.client_flood = yyvsp[-1].number;
}
    break;

  case 547:
#line 3241 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 548:
#line 3250 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->flags = 0;
  }
}
    break;

  case 549:
#line 3258 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    /*
     * since we re-allocate yy_conf/yy_aconf after the end of action=, at the
     * end we will have one extra, so we should free it.
     */
    if (yy_conf->name == NULL && gdeny_items.length)
    {
      dlinkDelete(gdeny_items.tail, &gdeny_items);
      MyFree(yy_conf);
      yy_conf = NULL;
      yy_aconf = NULL;
    }
  }
}
    break;

  case 559:
#line 3285 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 560:
#line 3291 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = yyvsp[-1].number;
}
    break;

  case 561:
#line 3297 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 565:
#line 3303 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 566:
#line 3307 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 567:
#line 3313 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;

    if (yy_aconf->user == NULL)
    {
      DupString(yy_aconf->host, yylval.string);
      split_user_host(yy_aconf->host, &yy_aconf->user, &yy_aconf->host);
    }
    else
    {
      yy_tmp = (struct CollectItem *)MyMalloc(sizeof(struct CollectItem));

      DupString(yy_tmp->host, yylval.string);
      split_user_host(yy_tmp->host, &yy_tmp->user, &yy_tmp->host);

      dlinkAdd(yy_tmp, &yy_tmp->node, &col_conf_list);
    }
  }
}
    break;

  case 568:
#line 3336 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 569:
#line 3345 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 570:
#line 3349 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;
    dlink_node *ptr, *next_ptr;

    DLINK_FOREACH_SAFE(ptr, next_ptr, col_conf_list.head)
    {
      struct AccessItem *new_aconf;
      struct ConfItem *new_conf;

      yy_tmp = ptr->data;
      new_conf = make_conf_item(GDENY_TYPE);
      new_aconf = (struct AccessItem *)map_to_conf(new_conf);

      new_aconf->flags = yy_aconf->flags;

      if (yy_conf->name != NULL)
        DupString(new_conf->name, yy_conf->name);
      else
        DupString(new_conf->name, "*");
      if (yy_aconf->user != NULL)
         DupString(new_aconf->user, yy_tmp->user);
      else   
        DupString(new_aconf->user, "*");
      if (yy_aconf->host != NULL)
        DupString(new_aconf->host, yy_tmp->host);
      else
        DupString(new_aconf->host, "*");

      dlinkDelete(&yy_tmp->node, &col_conf_list);
    }
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->flags = 0;
  }
}
    break;

  case 573:
#line 3389 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 574:
#line 3393 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 593:
#line 3422 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 594:
#line 3428 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_except = yylval.number;
}
    break;

  case 595:
#line 3434 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_invex = yylval.number;
}
    break;

  case 596:
#line 3440 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_knock = yylval.number;
}
    break;

  case 597:
#line 3446 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay = yyvsp[-1].number;
}
    break;

  case 598:
#line 3452 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay_channel = yyvsp[-1].number;
}
    break;

  case 599:
#line 3458 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 600:
#line 3464 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_chans_per_user = yyvsp[-1].number;
}
    break;

  case 601:
#line 3470 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 602:
#line 3476 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_bans = yyvsp[-1].number;
}
    break;

  case 603:
#line 3482 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_user_count = yyvsp[-1].number;
}
    break;

  case 604:
#line 3488 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_server_count = yyvsp[-1].number;
}
    break;

  case 605:
#line 3494 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 606:
#line 3500 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 617:
#line 3520 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 618:
#line 3526 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 619:
#line 3532 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if ((yyvsp[-1].number > 0) && ConfigServerHide.links_disabled == 1)
    {
      eventAddIsh("write_links_file", write_links_file, NULL, yyvsp[-1].number);
      ConfigServerHide.links_disabled = 0;
    }

    ConfigServerHide.links_delay = yyvsp[-1].number;
  }
}
    break;

  case 620:
#line 3546 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 621:
#line 3552 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 622:
#line 3558 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 997 of yacc.c.  */
#line 6586 "y.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("syntax error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}



