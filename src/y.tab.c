/* A Bison parser, made by GNU Bison 2.0.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004 Free Software Foundation, Inc.

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
/*  $Id: y.tab.c,v 7.28 2005/07/18 13:30:18 michael Exp $ */

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
     SSL_CERTIFICATE_FILE = 406,
     RESV = 407,
     RESV_EXEMPT = 408,
     SECONDS = 409,
     MINUTES = 410,
     HOURS = 411,
     DAYS = 412,
     WEEKS = 413,
     SENDQ = 414,
     SEND_PASSWORD = 415,
     SERVERHIDE = 416,
     SERVERINFO = 417,
     SERVLINK_PATH = 418,
     SID = 419,
     TKLINE_EXPIRE_NOTICES = 420,
     T_SHARED = 421,
     T_CLUSTER = 422,
     TYPE = 423,
     SHORT_MOTD = 424,
     SILENT = 425,
     SPOOF = 426,
     SPOOF_NOTICE = 427,
     STATS_I_OPER_ONLY = 428,
     STATS_K_OPER_ONLY = 429,
     STATS_O_OPER_ONLY = 430,
     STATS_P_OPER_ONLY = 431,
     TBOOL = 432,
     TMASKED = 433,
     T_REJECT = 434,
     TS_MAX_DELTA = 435,
     TS_WARN_DELTA = 436,
     TWODOTS = 437,
     T_ALL = 438,
     T_BOTS = 439,
     T_SOFTCALLERID = 440,
     T_CALLERID = 441,
     T_CCONN = 442,
     T_CLIENT_FLOOD = 443,
     T_DEBUG = 444,
     T_DRONE = 445,
     T_EXTERNAL = 446,
     T_FULL = 447,
     T_INVISIBLE = 448,
     T_IPV4 = 449,
     T_IPV6 = 450,
     T_LOCOPS = 451,
     T_LOGPATH = 452,
     T_L_CRIT = 453,
     T_L_DEBUG = 454,
     T_L_ERROR = 455,
     T_L_INFO = 456,
     T_L_NOTICE = 457,
     T_L_TRACE = 458,
     T_L_WARN = 459,
     T_MAX_CLIENTS = 460,
     T_NCHANGE = 461,
     T_OPERWALL = 462,
     T_REJ = 463,
     T_SERVNOTICE = 464,
     T_SKILL = 465,
     T_SPY = 466,
     T_SSL = 467,
     T_UNAUTH = 468,
     T_UNRESV = 469,
     T_UNXLINE = 470,
     T_WALLOP = 471,
     THROTTLE_TIME = 472,
     TRUE_NO_OPER_FLOOD = 473,
     UNKLINE = 474,
     USER = 475,
     USE_EGD = 476,
     USE_EXCEPT = 477,
     USE_INVEX = 478,
     USE_KNOCK = 479,
     USE_LOGGING = 480,
     VHOST = 481,
     VHOST6 = 482,
     XLINE = 483,
     WARN = 484,
     WARN_NO_NLINE = 485
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
#define SSL_CERTIFICATE_FILE 406
#define RESV 407
#define RESV_EXEMPT 408
#define SECONDS 409
#define MINUTES 410
#define HOURS 411
#define DAYS 412
#define WEEKS 413
#define SENDQ 414
#define SEND_PASSWORD 415
#define SERVERHIDE 416
#define SERVERINFO 417
#define SERVLINK_PATH 418
#define SID 419
#define TKLINE_EXPIRE_NOTICES 420
#define T_SHARED 421
#define T_CLUSTER 422
#define TYPE 423
#define SHORT_MOTD 424
#define SILENT 425
#define SPOOF 426
#define SPOOF_NOTICE 427
#define STATS_I_OPER_ONLY 428
#define STATS_K_OPER_ONLY 429
#define STATS_O_OPER_ONLY 430
#define STATS_P_OPER_ONLY 431
#define TBOOL 432
#define TMASKED 433
#define T_REJECT 434
#define TS_MAX_DELTA 435
#define TS_WARN_DELTA 436
#define TWODOTS 437
#define T_ALL 438
#define T_BOTS 439
#define T_SOFTCALLERID 440
#define T_CALLERID 441
#define T_CCONN 442
#define T_CLIENT_FLOOD 443
#define T_DEBUG 444
#define T_DRONE 445
#define T_EXTERNAL 446
#define T_FULL 447
#define T_INVISIBLE 448
#define T_IPV4 449
#define T_IPV6 450
#define T_LOCOPS 451
#define T_LOGPATH 452
#define T_L_CRIT 453
#define T_L_DEBUG 454
#define T_L_ERROR 455
#define T_L_INFO 456
#define T_L_NOTICE 457
#define T_L_TRACE 458
#define T_L_WARN 459
#define T_MAX_CLIENTS 460
#define T_NCHANGE 461
#define T_OPERWALL 462
#define T_REJ 463
#define T_SERVNOTICE 464
#define T_SKILL 465
#define T_SPY 466
#define T_SSL 467
#define T_UNAUTH 468
#define T_UNRESV 469
#define T_UNXLINE 470
#define T_WALLOP 471
#define THROTTLE_TIME 472
#define TRUE_NO_OPER_FLOOD 473
#define UNKLINE 474
#define USER 475
#define USE_EGD 476
#define USE_EXCEPT 477
#define USE_INVEX 478
#define USE_KNOCK 479
#define USE_LOGGING 480
#define VHOST 481
#define VHOST6 482
#define XLINE 483
#define WARN 484
#define WARN_NO_NLINE 485




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
static unsigned int listener_flags = 0;

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
#line 129 "ircd_parser.y"
typedef union YYSTYPE {
  int number;
  char *string;
} YYSTYPE;
/* Line 190 of yacc.c.  */
#line 645 "y.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 213 of yacc.c.  */
#line 657 "y.tab.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

# ifndef YYFREE
#  define YYFREE free
# endif
# ifndef YYMALLOC
#  define YYMALLOC malloc
# endif

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
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
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
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
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1246

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  236
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  299
/* YYNRULES -- Number of rules. */
#define YYNRULES  631
/* YYNRULES -- Number of states. */
#define YYNSTATES  1281

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   485

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   235,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   231,
       2,   234,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   233,     2,   232,     2,     2,     2,     2,
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
     225,   226,   227,   228,   229,   230
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    50,    53,    54,    56,    59,
      63,    67,    71,    75,    79,    80,    82,    85,    89,    93,
      97,   103,   106,   108,   110,   112,   114,   119,   124,   130,
     133,   135,   137,   139,   141,   143,   145,   147,   149,   151,
     153,   155,   157,   159,   164,   169,   174,   179,   184,   189,
     194,   199,   204,   209,   214,   220,   223,   225,   227,   229,
     231,   233,   238,   243,   248,   254,   257,   259,   261,   263,
     265,   267,   269,   271,   273,   275,   277,   282,   287,   292,
     297,   302,   307,   312,   317,   322,   327,   332,   337,   342,
     347,   348,   356,   357,   359,   362,   364,   366,   368,   370,
     372,   374,   376,   378,   380,   382,   384,   386,   388,   390,
     392,   394,   396,   398,   400,   402,   407,   409,   414,   419,
     424,   429,   434,   439,   444,   449,   454,   459,   464,   469,
     474,   479,   484,   489,   490,   496,   500,   502,   505,   507,
     509,   511,   513,   515,   517,   519,   521,   523,   525,   527,
     529,   531,   533,   535,   537,   538,   546,   547,   549,   552,
     554,   556,   558,   560,   562,   564,   566,   568,   570,   572,
     574,   579,   581,   586,   591,   596,   601,   606,   611,   616,
     621,   622,   629,   630,   636,   640,   642,   644,   646,   649,
     651,   653,   655,   657,   659,   661,   666,   670,   672,   674,
     678,   683,   688,   689,   696,   699,   701,   703,   705,   707,
     709,   711,   713,   715,   717,   719,   721,   723,   725,   727,
     729,   731,   733,   738,   743,   748,   753,   754,   760,   764,
     766,   769,   771,   773,   775,   777,   779,   781,   783,   785,
     787,   789,   791,   796,   801,   806,   811,   816,   821,   826,
     831,   836,   841,   842,   849,   852,   854,   856,   858,   860,
     862,   867,   872,   877,   878,   885,   888,   890,   892,   894,
     896,   898,   903,   908,   909,   915,   919,   921,   923,   925,
     927,   929,   931,   933,   935,   936,   943,   946,   948,   950,
     952,   954,   959,   960,   966,   970,   972,   974,   976,   978,
     980,   982,   984,   986,   988,   989,   997,   998,  1000,  1003,
    1005,  1007,  1009,  1011,  1013,  1015,  1017,  1019,  1021,  1023,
    1025,  1027,  1029,  1031,  1033,  1035,  1037,  1039,  1041,  1046,
    1048,  1053,  1058,  1063,  1068,  1073,  1078,  1083,  1084,  1090,
    1094,  1096,  1098,  1100,  1102,  1104,  1106,  1111,  1116,  1121,
    1126,  1131,  1136,  1141,  1146,  1151,  1152,  1159,  1162,  1164,
    1166,  1168,  1170,  1175,  1180,  1181,  1188,  1191,  1193,  1195,
    1197,  1199,  1204,  1209,  1210,  1217,  1220,  1222,  1224,  1226,
    1231,  1232,  1239,  1242,  1244,  1246,  1248,  1250,  1255,  1260,
    1266,  1269,  1271,  1273,  1275,  1277,  1279,  1281,  1283,  1285,
    1287,  1289,  1291,  1293,  1295,  1297,  1299,  1301,  1303,  1305,
    1307,  1309,  1311,  1313,  1315,  1317,  1319,  1321,  1323,  1325,
    1327,  1329,  1331,  1333,  1335,  1337,  1339,  1341,  1343,  1345,
    1347,  1349,  1351,  1353,  1355,  1357,  1359,  1361,  1363,  1365,
    1367,  1369,  1371,  1373,  1375,  1380,  1385,  1390,  1395,  1400,
    1405,  1410,  1415,  1420,  1425,  1430,  1435,  1440,  1445,  1450,
    1455,  1460,  1465,  1470,  1475,  1480,  1485,  1490,  1495,  1500,
    1505,  1510,  1515,  1520,  1525,  1530,  1535,  1540,  1545,  1550,
    1555,  1560,  1565,  1570,  1575,  1580,  1585,  1590,  1595,  1600,
    1605,  1606,  1612,  1616,  1618,  1620,  1622,  1624,  1626,  1628,
    1630,  1632,  1634,  1636,  1638,  1640,  1642,  1644,  1646,  1648,
    1650,  1652,  1653,  1659,  1663,  1665,  1667,  1669,  1671,  1673,
    1675,  1677,  1679,  1681,  1683,  1685,  1687,  1689,  1691,  1693,
    1695,  1697,  1699,  1704,  1709,  1714,  1719,  1724,  1725,  1732,
    1735,  1737,  1739,  1741,  1743,  1745,  1747,  1749,  1751,  1756,
    1761,  1762,  1768,  1772,  1774,  1776,  1778,  1783,  1788,  1789,
    1795,  1799,  1801,  1803,  1805,  1811,  1814,  1816,  1818,  1820,
    1822,  1824,  1826,  1828,  1830,  1832,  1834,  1836,  1838,  1840,
    1842,  1844,  1846,  1851,  1856,  1861,  1866,  1871,  1876,  1881,
    1886,  1891,  1896,  1901,  1906,  1911,  1916,  1922,  1925,  1927,
    1929,  1931,  1933,  1935,  1937,  1939,  1941,  1946,  1951,  1956,
    1961,  1966
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     237,     0,    -1,    -1,   237,   238,    -1,   262,    -1,   268,
      -1,   279,    -1,   509,    -1,   307,    -1,   322,    -1,   335,
      -1,   248,    -1,   526,    -1,   358,    -1,   365,    -1,   375,
      -1,   384,    -1,   410,    -1,   416,    -1,   422,    -1,   433,
      -1,   493,    -1,   427,    -1,   243,    -1,     1,   231,    -1,
       1,   232,    -1,    -1,   240,    -1,   122,   239,    -1,   122,
     154,   239,    -1,   122,   155,   239,    -1,   122,   156,   239,
      -1,   122,   157,   239,    -1,   122,   158,   239,    -1,    -1,
     242,    -1,   122,   241,    -1,   122,    14,   241,    -1,   122,
      15,   241,    -1,   122,    16,   241,    -1,   110,   233,   244,
     232,   231,    -1,   244,   245,    -1,   245,    -1,   246,    -1,
     247,    -1,     1,    -1,   109,   234,   140,   231,    -1,   136,
     234,   140,   231,    -1,   162,   233,   249,   232,   231,    -1,
     249,   250,    -1,   250,    -1,   253,    -1,   258,    -1,   261,
      -1,   255,    -1,   256,    -1,   257,    -1,   260,    -1,   252,
      -1,   259,    -1,   254,    -1,   251,    -1,     1,    -1,   151,
     234,   140,   231,    -1,   149,   234,   140,   231,    -1,   111,
     234,   140,   231,    -1,   164,   234,   140,   231,    -1,    35,
     234,   140,   231,    -1,   114,   234,   140,   231,    -1,   113,
     234,   140,   231,    -1,   226,   234,   140,   231,    -1,   227,
     234,   140,   231,    -1,   205,   234,   122,   231,    -1,    76,
     234,   177,   231,    -1,     5,   233,   263,   232,   231,    -1,
     263,   264,    -1,   264,    -1,   265,    -1,   267,    -1,   266,
      -1,     1,    -1,   111,   234,   140,   231,    -1,    45,   234,
     140,   231,    -1,    35,   234,   140,   231,    -1,    93,   233,
     269,   232,   231,    -1,   269,   270,    -1,   270,    -1,   271,
      -1,   272,    -1,   273,    -1,   277,    -1,   278,    -1,   274,
      -1,   276,    -1,   275,    -1,     1,    -1,   197,   234,   140,
     231,    -1,   127,   234,   140,   231,    -1,    62,   234,   140,
     231,    -1,    56,   234,   140,   231,    -1,    54,   234,   140,
     231,    -1,    55,   234,   140,   231,    -1,    94,   234,   198,
     231,    -1,    94,   234,   200,   231,    -1,    94,   234,   204,
     231,    -1,    94,   234,   202,   231,    -1,    94,   234,   203,
     231,    -1,    94,   234,   201,   231,    -1,    94,   234,   199,
     231,    -1,   225,   234,   177,   231,    -1,    -1,   126,   280,
     281,   233,   282,   232,   231,    -1,    -1,   285,    -1,   282,
     283,    -1,   283,    -1,   284,    -1,   286,    -1,   287,    -1,
     289,    -1,   291,    -1,   292,    -1,   293,    -1,   294,    -1,
     295,    -1,   296,    -1,   297,    -1,   298,    -1,   299,    -1,
     300,    -1,   301,    -1,   288,    -1,   290,    -1,   302,    -1,
       1,    -1,   111,   234,   140,   231,    -1,   140,    -1,   220,
     234,   140,   231,    -1,   135,   234,   140,   231,    -1,    47,
     234,   177,   231,    -1,    70,   234,   177,   231,    -1,   150,
     234,   140,   231,    -1,    24,   234,   140,   231,    -1,    66,
     234,   177,   231,    -1,   146,   234,   177,   231,    -1,    83,
     234,   177,   231,    -1,   228,   234,   177,   231,    -1,   219,
     234,   177,   231,    -1,    59,   234,   177,   231,    -1,   116,
     234,   177,   231,    -1,    36,   234,   177,   231,    -1,   145,
     234,   177,   231,    -1,     5,   234,   177,   231,    -1,    -1,
      52,   303,   234,   304,   231,    -1,   304,   235,   305,    -1,
     305,    -1,   121,   306,    -1,   306,    -1,    66,    -1,   146,
      -1,    83,    -1,   219,    -1,   228,    -1,    59,    -1,    36,
      -1,   145,    -1,     5,    -1,    70,    -1,   116,    -1,   207,
      -1,   130,    -1,    71,    -1,   147,    -1,    -1,    24,   308,
     309,   233,   310,   232,   231,    -1,    -1,   313,    -1,   310,
     311,    -1,   311,    -1,   312,    -1,   314,    -1,   315,    -1,
     316,    -1,   317,    -1,   318,    -1,   319,    -1,   320,    -1,
     321,    -1,     1,    -1,   111,   234,   140,   231,    -1,   140,
      -1,   138,   234,   240,   231,    -1,   124,   234,   122,   231,
      -1,    28,   234,   240,   231,    -1,   104,   234,   122,   231,
      -1,    99,   234,   122,   231,    -1,   101,   234,   122,   231,
      -1,   100,   234,   122,   231,    -1,   159,   234,   242,   231,
      -1,    -1,    92,   323,   233,   328,   232,   231,    -1,    -1,
      52,   325,   234,   326,   231,    -1,   326,   235,   327,    -1,
     327,    -1,   212,    -1,    69,    -1,   328,   329,    -1,   329,
      -1,   330,    -1,   324,    -1,   333,    -1,   334,    -1,     1,
      -1,   139,   234,   331,   231,    -1,   331,   235,   332,    -1,
     332,    -1,   122,    -1,   122,   182,   122,    -1,    80,   234,
     140,   231,    -1,    75,   234,   140,   231,    -1,    -1,    10,
     336,   233,   337,   232,   231,    -1,   337,   338,    -1,   338,
      -1,   339,    -1,   340,    -1,   342,    -1,   343,    -1,   348,
      -1,   349,    -1,   350,    -1,   352,    -1,   353,    -1,   354,
      -1,   341,    -1,   355,    -1,   356,    -1,   351,    -1,   357,
      -1,     1,    -1,   220,   234,   140,   231,    -1,   135,   234,
     140,   231,    -1,   172,   234,   177,   231,    -1,    24,   234,
     140,   231,    -1,    -1,    52,   344,   234,   345,   231,    -1,
     345,   235,   346,    -1,   346,    -1,   121,   347,    -1,   347,
      -1,   172,    -1,    48,    -1,    84,    -1,    67,    -1,    20,
      -1,    21,    -1,   120,    -1,    61,    -1,   153,    -1,   112,
      -1,    84,   234,   177,   231,    -1,    67,   234,   177,   231,
      -1,    48,   234,   177,   231,    -1,    20,   234,   177,   231,
      -1,   120,   234,   177,   231,    -1,    61,   234,   177,   231,
      -1,   171,   234,   140,   231,    -1,   144,   234,   140,   231,
      -1,   143,   234,   122,   231,    -1,   112,   234,   177,   231,
      -1,    -1,   152,   359,   233,   360,   232,   231,    -1,   360,
     361,    -1,   361,    -1,   362,    -1,   363,    -1,   364,    -1,
       1,    -1,   142,   234,   140,   231,    -1,    22,   234,   140,
     231,    -1,   115,   234,   140,   231,    -1,    -1,   166,   366,
     233,   367,   232,   231,    -1,   367,   368,    -1,   368,    -1,
     369,    -1,   370,    -1,   371,    -1,     1,    -1,   111,   234,
     140,   231,    -1,   220,   234,   140,   231,    -1,    -1,   168,
     372,   234,   373,   231,    -1,   373,   235,   374,    -1,   374,
      -1,    83,    -1,   219,    -1,   228,    -1,   215,    -1,   152,
      -1,   214,    -1,   183,    -1,    -1,   167,   376,   233,   377,
     232,   231,    -1,   377,   378,    -1,   378,    -1,   379,    -1,
     380,    -1,     1,    -1,   111,   234,   140,   231,    -1,    -1,
     168,   381,   234,   382,   231,    -1,   382,   235,   383,    -1,
     383,    -1,    83,    -1,   219,    -1,   228,    -1,   215,    -1,
     152,    -1,   214,    -1,   196,    -1,   183,    -1,    -1,    27,
     385,   386,   233,   387,   232,   231,    -1,    -1,   390,    -1,
     387,   388,    -1,   388,    -1,   389,    -1,   391,    -1,   392,
      -1,   393,    -1,   394,    -1,   395,    -1,   396,    -1,   397,
      -1,   406,    -1,   407,    -1,   408,    -1,   405,    -1,   402,
      -1,   404,    -1,   403,    -1,   401,    -1,   409,    -1,     1,
      -1,   111,   234,   140,   231,    -1,   140,    -1,    75,   234,
     140,   231,    -1,   160,   234,   140,   231,    -1,     3,   234,
     140,   231,    -1,   139,   234,   122,   231,    -1,     6,   234,
     194,   231,    -1,     6,   234,   195,   231,    -1,    51,   234,
     140,   231,    -1,    -1,    52,   398,   234,   399,   231,    -1,
     399,   235,   400,    -1,   400,    -1,    89,    -1,    25,    -1,
      29,    -1,    11,    -1,    13,    -1,   150,   234,   140,   231,
      -1,    47,   234,   177,   231,    -1,    29,   234,   177,   231,
      -1,    25,   234,   177,   231,    -1,    11,   234,   177,   231,
      -1,    77,   234,   140,   231,    -1,    90,   234,   140,   231,
      -1,    24,   234,   140,   231,    -1,    23,   234,   140,   231,
      -1,    -1,    81,   411,   233,   412,   232,   231,    -1,   412,
     413,    -1,   413,    -1,   414,    -1,   415,    -1,     1,    -1,
     220,   234,   140,   231,    -1,   142,   234,   140,   231,    -1,
      -1,    34,   417,   233,   418,   232,   231,    -1,   418,   419,
      -1,   419,    -1,   420,    -1,   421,    -1,     1,    -1,    80,
     234,   140,   231,    -1,   142,   234,   140,   231,    -1,    -1,
      49,   423,   233,   424,   232,   231,    -1,   424,   425,    -1,
     425,    -1,   426,    -1,     1,    -1,    80,   234,   140,   231,
      -1,    -1,    57,   428,   233,   429,   232,   231,    -1,   429,
     430,    -1,   430,    -1,   431,    -1,   432,    -1,     1,    -1,
     111,   234,   140,   231,    -1,   142,   234,   140,   231,    -1,
      58,   233,   434,   232,   231,    -1,   434,   435,    -1,   435,
      -1,   441,    -1,   442,    -1,   444,    -1,   445,    -1,   446,
      -1,   447,    -1,   448,    -1,   449,    -1,   450,    -1,   451,
      -1,   440,    -1,   453,    -1,   454,    -1,   455,    -1,   469,
      -1,   456,    -1,   458,    -1,   460,    -1,   459,    -1,   462,
      -1,   457,    -1,   463,    -1,   464,    -1,   465,    -1,   466,
      -1,   468,    -1,   470,    -1,   467,    -1,   484,    -1,   471,
      -1,   475,    -1,   476,    -1,   480,    -1,   461,    -1,   490,
      -1,   488,    -1,   489,    -1,   472,    -1,   443,    -1,   473,
      -1,   474,    -1,   491,    -1,   479,    -1,   452,    -1,   492,
      -1,   477,    -1,   478,    -1,   438,    -1,   439,    -1,   436,
      -1,   437,    -1,     1,    -1,    64,   234,   122,   231,    -1,
      65,   234,   122,   231,    -1,    13,   234,   177,   231,    -1,
     165,   234,   177,   231,    -1,    82,   234,   122,   231,    -1,
      74,   234,   177,   231,    -1,    79,   234,   177,   231,    -1,
      40,   234,   177,   231,    -1,    50,   234,   177,   231,    -1,
       8,   234,   177,   231,    -1,   103,   234,   240,   231,    -1,
     102,   234,   122,   231,    -1,    96,   234,   122,   231,    -1,
       9,   234,   240,   231,    -1,   181,   234,   240,   231,    -1,
     180,   234,   240,   231,    -1,    68,   234,   122,   231,    -1,
      86,   234,   177,   231,    -1,    85,   234,   140,   231,    -1,
     230,   234,   177,   231,    -1,   175,   234,   177,   231,    -1,
     176,   234,   177,   231,    -1,   174,   234,   177,   231,    -1,
     174,   234,   178,   231,    -1,   173,   234,   177,   231,    -1,
     173,   234,   178,   231,    -1,   133,   234,   240,   231,    -1,
      19,   234,   240,   231,    -1,   134,   234,   240,   231,    -1,
     169,   234,   177,   231,    -1,   119,   234,   177,   231,    -1,
     218,   234,   177,   231,    -1,   129,   234,   177,   231,    -1,
     106,   234,   140,   231,    -1,    78,   234,   240,   231,    -1,
      42,   234,   122,   231,    -1,    95,   234,   122,   231,    -1,
     105,   234,   122,   231,    -1,   163,   234,   140,   231,    -1,
      30,   234,   140,   231,    -1,    26,   234,   122,   231,    -1,
     221,   234,   177,   231,    -1,    44,   234,   140,   231,    -1,
     137,   234,   177,   231,    -1,    37,   234,   177,   231,    -1,
     217,   234,   240,   231,    -1,    -1,   131,   481,   234,   482,
     231,    -1,   482,   235,   483,    -1,   483,    -1,   184,    -1,
     187,    -1,   189,    -1,   192,    -1,   210,    -1,   206,    -1,
     208,    -1,   213,    -1,   211,    -1,   191,    -1,   207,    -1,
     209,    -1,   193,    -1,   216,    -1,   185,    -1,   186,    -1,
     196,    -1,    -1,   128,   485,   234,   486,   231,    -1,   486,
     235,   487,    -1,   487,    -1,   184,    -1,   187,    -1,   189,
      -1,   192,    -1,   210,    -1,   206,    -1,   208,    -1,   213,
      -1,   211,    -1,   191,    -1,   207,    -1,   209,    -1,   193,
      -1,   216,    -1,   185,    -1,   186,    -1,   196,    -1,   107,
     234,   122,   231,    -1,   108,   234,   122,   231,    -1,    31,
     234,   122,   231,    -1,   188,   234,   242,   231,    -1,    41,
     234,   177,   231,    -1,    -1,    60,   494,   233,   495,   232,
     231,    -1,   495,   496,    -1,   496,    -1,   497,    -1,   498,
      -1,   499,    -1,   503,    -1,   504,    -1,   505,    -1,     1,
      -1,    46,   234,   177,   231,    -1,    43,   234,   240,   231,
      -1,    -1,    93,   500,   234,   501,   231,    -1,   501,   235,
     502,    -1,   502,    -1,   179,    -1,    12,    -1,   220,   234,
     140,   231,    -1,   111,   234,   140,   231,    -1,    -1,     4,
     506,   234,   507,   231,    -1,   507,   235,   508,    -1,   508,
      -1,   179,    -1,    12,    -1,    22,   233,   510,   232,   231,
      -1,   510,   511,    -1,   511,    -1,   512,    -1,   513,    -1,
     514,    -1,   515,    -1,   521,    -1,   516,    -1,   517,    -1,
     518,    -1,   519,    -1,   520,    -1,   522,    -1,   523,    -1,
     524,    -1,   525,    -1,     1,    -1,    39,   234,   177,   231,
      -1,   222,   234,   177,   231,    -1,   223,   234,   177,   231,
      -1,   224,   234,   177,   231,    -1,    87,   234,   240,   231,
      -1,    88,   234,   240,   231,    -1,   132,   234,   177,   231,
      -1,    98,   234,   122,   231,    -1,   141,   234,   177,   231,
      -1,    97,   234,   122,   231,    -1,    33,   234,   122,   231,
      -1,    32,   234,   122,   231,    -1,   117,   234,   177,   231,
      -1,   118,   234,   177,   231,    -1,   161,   233,   527,   232,
     231,    -1,   527,   528,    -1,   528,    -1,   529,    -1,   530,
      -1,   531,    -1,   533,    -1,   532,    -1,   534,    -1,     1,
      -1,    53,   234,   177,   231,    -1,    73,   234,   177,   231,
      -1,    91,   234,   240,   231,    -1,    69,   234,   177,   231,
      -1,    38,   234,   177,   231,    -1,    72,   234,   177,   231,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   363,   363,   364,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   392,   392,   393,   397,
     401,   405,   409,   413,   419,   419,   420,   421,   422,   423,
     430,   433,   433,   434,   434,   434,   436,   453,   464,   467,
     468,   469,   469,   470,   470,   471,   471,   472,   473,   473,
     474,   474,   475,   477,   511,   571,   585,   603,   612,   626,
     635,   663,   693,   709,   759,   761,   761,   762,   762,   763,
     763,   765,   774,   783,   795,   797,   798,   800,   800,   801,
     801,   802,   802,   803,   803,   804,   806,   810,   814,   818,
     825,   832,   839,   843,   847,   851,   855,   859,   863,   869,
     879,   878,   971,   971,   972,   972,   973,   973,   973,   973,
     974,   974,   974,   975,   975,   975,   976,   976,   977,   977,
     977,   978,   978,   979,   979,   981,   993,  1005,  1028,  1040,
    1051,  1062,  1104,  1113,  1124,  1135,  1146,  1157,  1168,  1179,
    1190,  1201,  1212,  1224,  1223,  1227,  1227,  1228,  1229,  1231,
    1238,  1245,  1252,  1259,  1266,  1273,  1280,  1287,  1294,  1301,
    1308,  1315,  1322,  1329,  1343,  1342,  1362,  1362,  1364,  1364,
    1365,  1366,  1367,  1368,  1369,  1370,  1371,  1372,  1373,  1374,
    1376,  1422,  1468,  1474,  1480,  1486,  1492,  1498,  1504,  1510,
    1520,  1519,  1536,  1535,  1539,  1539,  1540,  1544,  1550,  1550,
    1551,  1551,  1551,  1551,  1551,  1553,  1555,  1555,  1557,  1561,
    1574,  1583,  1596,  1595,  1669,  1669,  1670,  1670,  1670,  1670,
    1671,  1671,  1672,  1672,  1672,  1673,  1673,  1674,  1674,  1674,
    1675,  1675,  1677,  1706,  1719,  1730,  1740,  1739,  1743,  1743,
    1744,  1745,  1747,  1755,  1762,  1769,  1776,  1783,  1790,  1797,
    1804,  1811,  1820,  1831,  1842,  1853,  1864,  1875,  1887,  1906,
    1916,  1925,  1941,  1940,  1953,  1953,  1954,  1954,  1954,  1954,
    1956,  1965,  1980,  1999,  1998,  2014,  2014,  2015,  2015,  2015,
    2015,  2017,  2026,  2042,  2041,  2047,  2047,  2048,  2052,  2056,
    2060,  2064,  2068,  2072,  2082,  2081,  2103,  2103,  2104,  2104,
    2104,  2106,  2113,  2112,  2118,  2118,  2119,  2123,  2127,  2131,
    2135,  2139,  2143,  2147,  2157,  2156,  2306,  2306,  2307,  2307,
    2308,  2308,  2308,  2309,  2309,  2309,  2310,  2310,  2310,  2311,
    2311,  2311,  2312,  2312,  2312,  2313,  2313,  2314,  2316,  2328,
    2340,  2349,  2361,  2373,  2379,  2383,  2391,  2401,  2400,  2404,
    2404,  2405,  2409,  2417,  2421,  2425,  2431,  2472,  2483,  2494,
    2509,  2520,  2533,  2546,  2555,  2591,  2590,  2613,  2613,  2614,
    2614,  2614,  2616,  2625,  2638,  2637,  2659,  2659,  2660,  2660,
    2660,  2662,  2671,  2684,  2683,  2704,  2704,  2705,  2705,  2707,
    2720,  2719,  2733,  2733,  2734,  2734,  2734,  2736,  2745,  2757,
    2760,  2760,  2761,  2761,  2762,  2762,  2763,  2763,  2764,  2764,
    2765,  2765,  2766,  2766,  2767,  2768,  2768,  2769,  2769,  2770,
    2770,  2771,  2771,  2772,  2772,  2773,  2773,  2774,  2774,  2775,
    2776,  2776,  2777,  2777,  2778,  2779,  2779,  2780,  2780,  2781,
    2781,  2782,  2783,  2783,  2784,  2784,  2785,  2785,  2786,  2786,
    2787,  2787,  2788,  2789,  2793,  2799,  2805,  2811,  2816,  2822,
    2828,  2834,  2840,  2846,  2852,  2858,  2864,  2870,  2876,  2882,
    2888,  2899,  2905,  2914,  2920,  2926,  2932,  2936,  2942,  2946,
    2952,  2958,  2964,  2970,  2976,  2982,  2988,  2994,  3005,  3011,
    3017,  3023,  3029,  3038,  3070,  3088,  3094,  3103,  3109,  3114,
    3121,  3120,  3126,  3126,  3127,  3131,  3135,  3139,  3143,  3147,
    3151,  3155,  3159,  3163,  3167,  3171,  3175,  3179,  3183,  3187,
    3191,  3198,  3197,  3203,  3203,  3204,  3208,  3212,  3216,  3220,
    3224,  3228,  3232,  3236,  3240,  3244,  3248,  3252,  3256,  3260,
    3264,  3268,  3274,  3280,  3286,  3292,  3298,  3308,  3307,  3333,
    3333,  3334,  3335,  3336,  3337,  3338,  3339,  3340,  3342,  3348,
    3355,  3354,  3359,  3359,  3360,  3364,  3370,  3393,  3403,  3402,
    3445,  3445,  3446,  3450,  3459,  3462,  3462,  3463,  3464,  3465,
    3466,  3467,  3468,  3469,  3470,  3471,  3472,  3473,  3474,  3475,
    3476,  3477,  3479,  3485,  3491,  3497,  3503,  3509,  3515,  3521,
    3527,  3533,  3539,  3545,  3551,  3557,  3566,  3569,  3569,  3570,
    3570,  3571,  3572,  3573,  3574,  3575,  3577,  3583,  3589,  3603,
    3609,  3615
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
  "IRCD_FLAGS", "FLATTEN_LINKS", "FFAILED_OPERLOG", "FOPERLOG", "FUSERLOG",
  "GECOS", "GENERAL", "GLINE", "GLINES", "GLINE_EXEMPT", "GLINE_LOG",
  "GLINE_TIME", "GLINE_MIN_CIDR", "GLINE_MIN_CIDR6", "GLOBAL_KILL",
  "NEED_IDENT", "HAVENT_READ_CONF", "HIDDEN", "HIDDEN_ADMIN",
  "HIDDEN_OPER", "HIDE_SERVER_IPS", "HIDE_SERVERS", "HIDE_SPOOF_IPS",
  "HOST", "HUB", "HUB_MASK", "IDLETIME", "IGNORE_BOGUS_TS", "IP", "KILL",
  "KILL_CHASE_TIME_LIMIT", "KLINE", "KLINE_EXEMPT", "KLINE_REASON",
  "KLINE_WITH_REASON", "KNOCK_DELAY", "KNOCK_DELAY_CHANNEL", "LAZYLINK",
  "LEAF_MASK", "LINKS_DELAY", "LISTEN", "LOGGING", "LOG_LEVEL",
  "MAXIMUM_LINKS", "MAX_ACCEPT", "MAX_BANS", "MAX_CHANS_PER_USER",
  "MAX_GLOBAL", "MAX_IDENT", "MAX_LOCAL", "MAX_NICK_CHANGES",
  "MAX_NICK_TIME", "MAX_NUMBER", "MAX_TARGETS", "MESSAGE_LOCALE",
  "MIN_NONWILDCARD", "MIN_NONWILDCARD_SIMPLE", "MODULE", "MODULES", "NAME",
  "NEED_PASSWORD", "NETWORK_DESC", "NETWORK_NAME", "NICK", "NICK_CHANGES",
  "NO_CREATE_ON_SPLIT", "NO_JOIN_ON_SPLIT", "NO_OPER_FLOOD", "NO_TILDE",
  "NOT", "NUMBER", "NUMBER_PER_IDENT", "NUMBER_PER_IP",
  "NUMBER_PER_IP_GLOBAL", "OPERATOR", "OPER_LOG", "OPER_ONLY_UMODES",
  "OPER_PASS_RESV", "OPER_SPY_T", "OPER_UMODES", "INVITE_OPS_ONLY",
  "PACE_WAIT", "PACE_WAIT_SIMPLE", "PASSWORD", "PATH", "PING_COOKIE",
  "PING_TIME", "PORT", "QSTRING", "QUIET_ON_BAN", "REASON", "REDIRPORT",
  "REDIRSERV", "REHASH", "REMOTE", "REMOTEBAN", "RESTRICTED",
  "RSA_PRIVATE_KEY_FILE", "RSA_PUBLIC_KEY_FILE", "SSL_CERTIFICATE_FILE",
  "RESV", "RESV_EXEMPT", "SECONDS", "MINUTES", "HOURS", "DAYS", "WEEKS",
  "SENDQ", "SEND_PASSWORD", "SERVERHIDE", "SERVERINFO", "SERVLINK_PATH",
  "SID", "TKLINE_EXPIRE_NOTICES", "T_SHARED", "T_CLUSTER", "TYPE",
  "SHORT_MOTD", "SILENT", "SPOOF", "SPOOF_NOTICE", "STATS_I_OPER_ONLY",
  "STATS_K_OPER_ONLY", "STATS_O_OPER_ONLY", "STATS_P_OPER_ONLY", "TBOOL",
  "TMASKED", "T_REJECT", "TS_MAX_DELTA", "TS_WARN_DELTA", "TWODOTS",
  "T_ALL", "T_BOTS", "T_SOFTCALLERID", "T_CALLERID", "T_CCONN",
  "T_CLIENT_FLOOD", "T_DEBUG", "T_DRONE", "T_EXTERNAL", "T_FULL",
  "T_INVISIBLE", "T_IPV4", "T_IPV6", "T_LOCOPS", "T_LOGPATH", "T_L_CRIT",
  "T_L_DEBUG", "T_L_ERROR", "T_L_INFO", "T_L_NOTICE", "T_L_TRACE",
  "T_L_WARN", "T_MAX_CLIENTS", "T_NCHANGE", "T_OPERWALL", "T_REJ",
  "T_SERVNOTICE", "T_SKILL", "T_SPY", "T_SSL", "T_UNAUTH", "T_UNRESV",
  "T_UNXLINE", "T_WALLOP", "THROTTLE_TIME", "TRUE_NO_OPER_FLOOD",
  "UNKLINE", "USER", "USE_EGD", "USE_EXCEPT", "USE_INVEX", "USE_KNOCK",
  "USE_LOGGING", "VHOST", "VHOST6", "XLINE", "WARN", "WARN_NO_NLINE",
  "';'", "'}'", "'{'", "'='", "','", "$accept", "conf", "conf_item",
  "timespec_", "timespec", "sizespec_", "sizespec", "modules_entry",
  "modules_items", "modules_item", "modules_module", "modules_path",
  "serverinfo_entry", "serverinfo_items", "serverinfo_item",
  "serverinfo_ssl_certificate_file", "serverinfo_rsa_private_key_file",
  "serverinfo_name", "serverinfo_sid", "serverinfo_description",
  "serverinfo_network_name", "serverinfo_network_desc", "serverinfo_vhost",
  "serverinfo_vhost6", "serverinfo_max_clients", "serverinfo_hub",
  "admin_entry", "admin_items", "admin_item", "admin_name", "admin_email",
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
  "class_max_ident", "class_sendq", "listen_entry", "@4", "listen_flags",
  "@5", "listen_flags_items", "listen_flags_item", "listen_items",
  "listen_item", "listen_port", "port_items", "port_item",
  "listen_address", "listen_host", "auth_entry", "@6", "auth_items",
  "auth_item", "auth_user", "auth_passwd", "auth_spoof_notice",
  "auth_class", "auth_flags", "@7", "auth_flags_items", "auth_flags_item",
  "auth_flags_item_atom", "auth_kline_exempt", "auth_need_ident",
  "auth_exceed_limit", "auth_can_flood", "auth_no_tilde",
  "auth_gline_exempt", "auth_spoof", "auth_redir_serv", "auth_redir_port",
  "auth_need_password", "resv_entry", "@8", "resv_items", "resv_item",
  "resv_creason", "resv_channel", "resv_nick", "shared_entry", "@9",
  "shared_items", "shared_item", "shared_name", "shared_user",
  "shared_type", "@10", "shared_types", "shared_type_item",
  "cluster_entry", "@11", "cluster_items", "cluster_item", "cluster_name",
  "cluster_type", "@12", "cluster_types", "cluster_type_item",
  "connect_entry", "@13", "connect_name_b", "connect_items",
  "connect_item", "connect_name", "connect_name_t", "connect_host",
  "connect_send_password", "connect_accept_password", "connect_port",
  "connect_aftype", "connect_fakename", "connect_flags", "@14",
  "connect_flags_items", "connect_flags_item",
  "connect_rsa_public_key_file", "connect_encrypted", "connect_cryptlink",
  "connect_compressed", "connect_auto", "connect_hub_mask",
  "connect_leaf_mask", "connect_class", "connect_cipher_preference",
  "kill_entry", "@15", "kill_items", "kill_item", "kill_user",
  "kill_reason", "deny_entry", "@16", "deny_items", "deny_item", "deny_ip",
  "deny_reason", "exempt_entry", "@17", "exempt_items", "exempt_item",
  "exempt_ip", "gecos_entry", "@18", "gecos_items", "gecos_item",
  "gecos_name", "gecos_reason", "general_entry", "general_items",
  "general_item", "general_gline_min_cidr", "general_gline_min_cidr6",
  "general_burst_away", "general_tkline_expire_notices",
  "general_kill_chase_time_limit", "general_hide_spoof_ips",
  "general_ignore_bogus_ts", "general_disable_remote_commands",
  "general_failed_oper_notice", "general_anti_nick_flood",
  "general_max_nick_time", "general_max_nick_changes",
  "general_max_accept", "general_anti_spam_exit_message_time",
  "general_ts_warn_delta", "general_ts_max_delta",
  "general_havent_read_conf", "general_kline_with_reason",
  "general_kline_reason", "general_warn_no_nline",
  "general_stats_o_oper_only", "general_stats_P_oper_only",
  "general_stats_k_oper_only", "general_stats_i_oper_only",
  "general_pace_wait", "general_caller_id_wait",
  "general_pace_wait_simple", "general_short_motd",
  "general_no_oper_flood", "general_true_no_oper_flood",
  "general_oper_pass_resv", "general_message_locale", "general_idletime",
  "general_dots_in_ident", "general_maximum_links", "general_max_targets",
  "general_servlink_path", "general_default_cipher_preference",
  "general_compression_level", "general_use_egd", "general_egdpool_path",
  "general_ping_cookie", "general_disable_auth", "general_throttle_time",
  "general_oper_umodes", "@19", "umode_oitems", "umode_oitem",
  "general_oper_only_umodes", "@20", "umode_items", "umode_item",
  "general_min_nonwildcard", "general_min_nonwildcard_simple",
  "general_default_floodcount", "general_client_flood",
  "general_dot_in_ip6_addr", "gline_entry", "@21", "gline_items",
  "gline_item", "gline_enable", "gline_duration", "gline_logging", "@22",
  "gline_logging_types", "gline_logging_type_item", "gline_user",
  "gline_server", "gline_action", "@23", "gdeny_types", "gdeny_type_item",
  "channel_entry", "channel_items", "channel_item",
  "channel_disable_local_channels", "channel_use_except",
  "channel_use_invex", "channel_use_knock", "channel_knock_delay",
  "channel_knock_delay_channel", "channel_invite_ops_only",
  "channel_max_chans_per_user", "channel_quiet_on_ban", "channel_max_bans",
  "channel_default_split_user_count", "channel_default_split_server_count",
  "channel_no_create_on_split", "channel_no_join_on_split",
  "serverhide_entry", "serverhide_items", "serverhide_item",
  "serverhide_flatten_links", "serverhide_hide_servers",
  "serverhide_links_delay", "serverhide_hidden",
  "serverhide_disable_hidden", "serverhide_hide_server_ips", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
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
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,    59,   125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   236,   237,   237,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   239,   239,   240,   240,
     240,   240,   240,   240,   241,   241,   242,   242,   242,   242,
     243,   244,   244,   245,   245,   245,   246,   247,   248,   249,
     249,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   263,   264,   264,   264,
     264,   265,   266,   267,   268,   269,   269,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   271,   272,   273,   274,
     275,   276,   277,   277,   277,   277,   277,   277,   277,   278,
     280,   279,   281,   281,   282,   282,   283,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   283,   283,   283,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   303,   302,   304,   304,   305,   305,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   308,   307,   309,   309,   310,   310,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     323,   322,   325,   324,   326,   326,   327,   327,   328,   328,
     329,   329,   329,   329,   329,   330,   331,   331,   332,   332,
     333,   334,   336,   335,   337,   337,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   339,   340,   341,   342,   344,   343,   345,   345,
     346,   346,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   359,   358,   360,   360,   361,   361,   361,   361,
     362,   363,   364,   366,   365,   367,   367,   368,   368,   368,
     368,   369,   370,   372,   371,   373,   373,   374,   374,   374,
     374,   374,   374,   374,   376,   375,   377,   377,   378,   378,
     378,   379,   381,   380,   382,   382,   383,   383,   383,   383,
     383,   383,   383,   383,   385,   384,   386,   386,   387,   387,
     388,   388,   388,   388,   388,   388,   388,   388,   388,   388,
     388,   388,   388,   388,   388,   388,   388,   388,   389,   390,
     391,   392,   393,   394,   395,   395,   396,   398,   397,   399,
     399,   400,   400,   400,   400,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   411,   410,   412,   412,   413,
     413,   413,   414,   415,   417,   416,   418,   418,   419,   419,
     419,   420,   421,   423,   422,   424,   424,   425,   425,   426,
     428,   427,   429,   429,   430,   430,   430,   431,   432,   433,
     434,   434,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   458,   459,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     481,   480,   482,   482,   483,   483,   483,   483,   483,   483,
     483,   483,   483,   483,   483,   483,   483,   483,   483,   483,
     483,   485,   484,   486,   486,   487,   487,   487,   487,   487,
     487,   487,   487,   487,   487,   487,   487,   487,   487,   487,
     487,   487,   488,   489,   490,   491,   492,   494,   493,   495,
     495,   496,   496,   496,   496,   496,   496,   496,   497,   498,
     500,   499,   501,   501,   502,   502,   503,   504,   506,   505,
     507,   507,   508,   508,   509,   510,   510,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   527,   528,
     528,   528,   528,   528,   528,   528,   529,   530,   531,   532,
     533,   534
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
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     5,     2,     1,     1,     1,     1,
       1,     4,     4,     4,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       0,     7,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     0,     5,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     7,     0,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       0,     6,     0,     5,     3,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     4,     3,     1,     1,     3,
       4,     4,     0,     6,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     0,     5,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     0,     6,     2,     1,     1,     1,     1,     1,
       4,     4,     4,     0,     6,     2,     1,     1,     1,     1,
       1,     4,     4,     0,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     6,     2,     1,     1,     1,
       1,     4,     0,     5,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     7,     0,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       4,     4,     4,     4,     4,     4,     4,     0,     5,     3,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     4,     4,     0,     6,     2,     1,     1,     1,
       1,     4,     4,     0,     6,     2,     1,     1,     1,     4,
       0,     6,     2,     1,     1,     1,     1,     4,     4,     5,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       0,     5,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     5,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     0,     6,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       0,     5,     3,     1,     1,     1,     4,     4,     0,     5,
       3,     1,     1,     1,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     5,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       2,     0,     1,     0,     0,   222,     0,   174,   324,   384,
     393,   400,     0,   557,   375,   200,     0,     0,   110,   272,
       0,     0,   283,   304,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,     0,
     176,   326,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,    80,     0,     0,
       0,     0,    76,    77,    79,    78,     0,   601,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   586,   587,   588,   589,   590,   592,   593,
     594,   595,   596,   591,   597,   598,   599,   600,   191,     0,
     177,   349,     0,   327,     0,     0,     0,   463,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   531,
       0,   510,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     411,   461,   462,   459,   460,   422,   412,   413,   450,   414,
     415,   416,   417,   418,   419,   420,   421,   455,   423,   424,
     425,   427,   432,   428,   430,   429,   445,   431,   433,   434,
     435,   436,   439,   437,   426,   438,   441,   449,   451,   452,
     442,   443,   457,   458,   454,   444,   440,   447,   448,   446,
     453,   456,     0,     0,     0,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    86,    87,    88,    89,    92,
      94,    93,    90,    91,    45,     0,     0,     0,    42,    43,
      44,   136,     0,   113,     0,   625,     0,     0,     0,     0,
       0,     0,     0,   618,   619,   620,   621,   623,   622,   624,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,    61,    58,    51,    60,    54,    55,
      56,    52,    59,    57,    53,     0,     0,     0,     0,     0,
       0,    75,   241,     0,     0,     0,   246,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   225,
     226,   227,   236,   228,   229,   230,   231,   232,   239,   233,
     234,   235,   237,   238,   240,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     585,     0,     0,   390,     0,     0,     0,   387,   388,   389,
     398,     0,     0,   396,   397,   406,     0,     0,     0,   403,
     404,   405,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   410,   567,   578,     0,     0,   570,
       0,     0,     0,   560,   561,   562,   563,   564,   565,   566,
     381,     0,     0,     0,   378,   379,   380,   214,   202,     0,
       0,     0,   211,     0,   209,   210,   212,   213,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,     0,
       0,    41,     0,   279,     0,     0,     0,     0,   275,   276,
     277,   278,     0,     0,     0,     0,     0,     0,     0,   617,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,   290,     0,   293,     0,     0,   286,   287,
     288,   289,   310,     0,   312,     0,   307,   308,   309,     0,
       0,     0,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
       0,     0,     0,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   584,   189,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   347,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   357,     0,     0,
       0,     0,     0,     0,     0,     0,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   345,   342,   344,   343,   341,
     338,   339,   340,   346,     0,     0,     0,   386,     0,     0,
     395,     0,     0,     0,   402,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,   409,
       0,     0,     0,     0,     0,     0,     0,   559,     0,     0,
       0,   377,     0,     0,     0,     0,     0,   208,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,     0,     0,    40,   134,     0,     0,     0,
       0,   153,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   115,   116,   117,   118,
     131,   119,   132,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   133,     0,     0,     0,     0,   274,
       0,     0,     0,     0,     0,     0,   616,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
       0,     0,     0,   285,     0,     0,     0,   306,    83,    82,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   223,   613,   612,   602,
      26,    26,    26,    26,    26,    28,    27,   606,   607,   611,
     609,   614,   615,   608,   610,   603,   604,   605,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   178,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   328,     0,     0,
     385,     0,   394,     0,     0,   401,   473,   477,   466,   491,
     504,   503,   554,   508,   471,   556,   499,   506,   472,   464,
     465,   480,   469,   498,   470,   468,   482,   481,   500,   476,
     475,   474,   501,   497,   552,   553,   494,   535,   549,   550,
     536,   537,   544,   538,   547,   551,   540,   545,   541,   546,
     539,   543,   542,   548,     0,   534,   496,   514,   528,   529,
     515,   516,   523,   517,   526,   530,   519,   524,   520,   525,
     518,   522,   521,   527,     0,   513,   490,   492,   507,   502,
     467,   493,   488,   489,   486,   487,   484,   485,   479,   478,
      34,    34,    34,    36,    35,   555,   509,   495,   505,   483,
       0,     0,     0,     0,     0,     0,   558,     0,     0,   376,
       0,     0,     0,   218,     0,   217,   201,   100,   101,    99,
      98,   102,   108,   103,   107,   105,   106,   104,    97,    96,
     109,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,     0,     0,     0,   273,   630,   626,   629,
     631,   627,   628,    67,    73,    65,    69,    68,    64,    63,
      66,    72,    70,    71,     0,     0,     0,   284,     0,     0,
     305,   265,   245,   264,   256,   257,   253,   259,   255,   254,
     261,   258,     0,   260,   252,     0,   249,   251,   267,   263,
     262,   271,   266,   243,   270,   269,   268,   244,   242,    29,
      30,    31,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   175,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   325,   391,   392,   399,   407,   408,   532,     0,
     511,     0,    37,    38,    39,   583,   582,     0,   581,   569,
     568,   575,   574,     0,   573,   577,   576,   383,   382,   207,
     206,     0,   205,   221,   220,     0,   215,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,   281,   282,   280,
     291,   297,   301,   303,   302,   300,   298,   299,     0,   296,
     292,   311,   316,   320,   323,   322,   321,   319,   317,   318,
       0,   315,   250,   247,     0,   194,   196,   198,   197,   195,
     190,   193,   192,   199,   352,   354,   355,   370,   374,   373,
     369,   368,   367,   356,   364,   365,   362,   363,   361,     0,
     360,   350,   371,   372,   348,   353,   366,   351,   533,   512,
     579,     0,   571,     0,   203,     0,   219,   216,   152,   142,
     150,   139,   167,   165,   164,   159,   168,   172,   161,   169,
       0,   171,   166,   160,   173,   170,   162,   163,     0,   156,
     158,   148,   143,   140,   145,   135,   149,   138,   151,   144,
     141,   147,   137,   146,   294,     0,   313,     0,   248,   358,
       0,   580,   572,   204,   157,   154,     0,   295,   314,   359,
     155
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     1,    24,   815,   816,   953,   954,    25,   247,   248,
     249,   250,    26,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,    27,    71,    72,    73,
      74,    75,    28,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,    29,    61,   252,   735,   736,   737,   253,
     738,   739,   740,   741,   742,   743,   744,   745,   746,   747,
     748,   749,   750,   751,   752,   753,   754,   997,  1248,  1249,
    1250,    30,    50,   109,   566,   567,   568,   110,   569,   570,
     571,   572,   573,   574,   575,   576,    31,    58,   452,   692,
    1131,  1132,   453,   454,   455,   974,   975,   456,   457,    32,
      48,   318,   319,   320,   321,   322,   323,   324,   526,  1055,
    1056,  1057,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,    33,    62,   477,   478,   479,   480,   481,    34,
      65,   507,   508,   509,   510,   511,   780,  1168,  1169,    35,
      66,   515,   516,   517,   518,   785,  1180,  1181,    36,    51,
     112,   595,   596,   597,   113,   598,   599,   600,   601,   602,
     603,   604,   848,  1209,  1210,   605,   606,   607,   608,   609,
     610,   611,   612,   613,    37,    57,   443,   444,   445,   446,
      38,    52,   356,   357,   358,   359,    39,    53,   362,   363,
     364,    40,    54,   368,   369,   370,   371,    41,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   405,   934,   935,   216,   403,
     914,   915,   217,   218,   219,   220,   221,    42,    56,   432,
     433,   434,   435,   436,   683,  1123,  1124,   437,   438,   439,
     680,  1117,  1118,    43,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
      44,   262,   263,   264,   265,   266,   267,   268,   269
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -647
static const short int yypact[] =
{
    -647,   758,  -647,  -191,  -226,  -647,  -219,  -647,  -647,  -647,
    -647,  -647,  -213,  -647,  -647,  -647,  -172,  -163,  -647,  -647,
    -158,  -156,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,    53,  -150,   531,
     -85,   -51,  -141,  -138,  -127,   421,  -124,  -114,  -107,   318,
      22,    25,   -83,   636,   212,   -64,   -61,  -647,   -58,   -32,
     -30,    29,  -647,  -647,  -647,  -647,   632,  -647,   -29,   -26,
     -24,   -14,   -11,    -6,    -2,    34,    47,    49,    58,    60,
      64,    68,   167,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,    33,
    -647,  -647,    56,  -647,    11,     5,   111,  -647,    83,    87,
      88,    93,    95,    98,    99,   101,   102,   105,   110,   116,
     120,   122,   126,   128,   131,   132,   133,   136,   148,   149,
     150,   151,   153,   154,   159,   160,   161,   162,   173,  -647,
     175,  -647,   176,   177,   179,   180,   182,   184,   187,   189,
     197,   199,   202,   203,   207,   210,   214,   215,   219,     8,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,   247,    32,   317,  -647,   221,   223,   225,   226,
     230,   232,   234,   235,   218,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,   239,   240,    24,  -647,  -647,
    -647,  -647,    97,  -647,     9,  -647,   241,   242,   248,   249,
     253,   254,    27,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,   258,   259,   260,   262,   264,   267,   268,   271,   278,
     285,   286,   200,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,    10,    12,   381,   385,   391,
      31,  -647,  -647,   308,   310,   313,  -647,   314,   319,   323,
     325,   326,   328,   331,   333,   335,   337,   339,   166,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,   123,   429,   397,   444,   444,
     454,   456,   403,   404,   405,   406,   410,   411,   412,   360,
    -647,   380,   818,  -647,   359,   364,     4,  -647,  -647,  -647,
    -647,   371,    28,  -647,  -647,  -647,   372,   376,    45,  -647,
    -647,  -647,   436,   444,   437,   444,   493,   476,   499,   445,
     446,   449,   505,   491,   455,   512,   513,   514,   463,   444,
     464,   521,   506,   468,   525,   528,   536,   444,   539,   526,
     545,   546,   492,   439,   498,   442,   444,   444,   504,   530,
     508,   515,    14,    80,   517,   518,   444,   444,   560,   444,
     519,   520,   523,   452,  -647,  -647,  -647,   457,   467,  -647,
     469,   470,    59,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,   473,   477,   121,  -647,  -647,  -647,  -647,  -647,   478,
     479,   480,  -647,    55,  -647,  -647,  -647,  -647,   550,   558,
     562,   575,   532,   577,   578,   543,   490,  -647,   582,   583,
     495,  -647,   509,  -647,   511,   516,   522,     2,  -647,  -647,
    -647,  -647,   561,   566,   569,   570,   572,   444,   533,  -647,
     611,   580,   621,   622,   625,   626,   631,   633,   650,   634,
     637,   552,  -647,  -647,   547,  -647,   553,    17,  -647,  -647,
    -647,  -647,  -647,   554,  -647,    43,  -647,  -647,  -647,   555,
     559,   563,  -647,   607,   649,   614,   564,   616,   618,   619,
     620,   623,   659,   680,   665,   666,   635,   668,   579,  -647,
     586,   589,   592,   246,   595,   596,   597,   600,   601,   602,
     603,   604,   605,   606,   609,  -647,  -647,   591,   610,   612,
     615,   624,   630,   638,   639,   640,   196,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,   641,   648,
     651,   653,   654,   669,   671,   672,   673,  -647,   675,   683,
     688,   689,   692,   693,   694,   192,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,   674,   698,   617,  -647,   713,   629,
    -647,   727,   731,   699,  -647,   700,   701,   702,   703,   704,
     706,   707,   708,   709,   710,   711,   712,   714,   715,   716,
     717,   718,   719,   720,   721,   722,   723,   724,   725,   728,
     729,   730,   732,   733,   734,   735,   670,   736,   705,   738,
     739,   740,   741,   742,   743,   744,   745,   746,   748,   749,
     750,   751,   752,   332,   753,   754,   755,   756,   757,  -647,
     759,   444,   767,   760,   762,   764,   761,  -647,   796,   822,
     765,  -647,   763,   849,   850,   687,   768,  -647,   769,   770,
     771,   772,   773,   774,   775,   776,   777,   778,   779,   780,
     781,   782,  -647,   783,   784,  -647,  -647,   785,   786,   787,
     788,  -647,   789,   790,   791,   792,   793,   794,   795,   797,
     798,   799,   800,   801,   802,    96,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,   851,   855,   858,   806,  -647,
     807,   808,   809,   810,   811,   812,  -647,   813,   814,   815,
     816,   817,   819,   820,   821,   823,   824,   825,  -647,   876,
     826,   877,   827,  -647,   878,   828,   830,  -647,  -647,  -647,
    -647,   832,   833,   834,   658,   835,   836,   837,   838,   839,
     840,   841,   842,   843,   844,   845,  -647,  -647,  -647,  -647,
     444,   444,   444,   444,   444,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,   444,   908,
     927,   931,   935,   919,   955,   444,   560,   847,  -647,   939,
      76,   903,   941,   942,   906,   907,   909,   945,   853,   948,
     949,   950,   951,   970,   953,   954,   864,  -647,   865,   866,
    -647,   867,  -647,   868,   869,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -216,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -209,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
     560,   560,   560,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
      -4,   870,   871,    30,   872,   873,  -647,   874,   875,  -647,
     -65,   879,   880,   663,  -199,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,   930,   968,   932,   936,   881,   937,   940,
     943,   944,   972,   946,   976,   947,   952,   978,   956,   979,
     957,   891,  -647,   894,   895,   896,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,   897,   294,   899,  -647,   900,   389,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,   358,  -647,  -647,  -188,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,   901,   904,   905,   910,   911,   912,
     913,   914,   915,  -647,   916,   917,   918,   920,   921,   922,
     923,   924,   925,   926,   346,   928,   929,   933,   934,   938,
     958,   959,  -647,  -647,  -647,  -647,  -647,  -647,  -647,   670,
    -647,   705,  -647,  -647,  -647,  -647,  -647,  -178,  -647,  -647,
    -647,  -647,  -647,  -169,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -164,  -647,  -647,  -647,  1015,  -647,   687,   960,   961,
     962,   963,   541,   964,   965,   966,   967,   969,   971,   973,
     974,   975,   977,   980,   981,   982,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -106,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
     -97,  -647,  -647,  -647,   658,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,   -74,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,    -4,  -647,    30,  -647,   -65,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
     594,  -647,  -647,  -647,  -647,  -647,  -647,  -647,   -72,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,   294,  -647,   389,  -647,  -647,
     346,  -647,  -647,  -647,  -647,  -647,   541,  -647,  -647,  -647,
    -647
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -647,  -647,  -647,  -276,  -338,  -646,  -416,  -647,  -647,   652,
    -647,  -647,  -647,  -647,   676,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,   829,  -647,
    -647,  -647,  -647,  -647,   983,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,   415,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -137,
    -102,  -647,  -647,  -647,  -647,   574,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,   -67,  -647,   726,  -647,  -647,    26,  -647,  -647,  -647,
    -647,  -647,   848,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
     -23,   115,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,   685,  -647,  -647,  -647,  -647,
    -647,  -647,   661,  -647,  -647,  -647,  -647,  -647,   -95,  -647,
    -647,  -647,   656,  -647,  -647,  -647,  -647,   -94,  -647,  -647,
    -647,  -647,   581,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,   -98,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,   737,  -647,  -647,
    -647,  -647,  -647,   831,  -647,  -647,  -647,  -647,  -647,   852,
    -647,  -647,  -647,  -647,   854,  -647,  -647,  -647,  -647,  1005,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,    66,  -647,  -647,
    -647,    69,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
     803,  -647,  -647,  -647,  -647,  -647,   -48,  -647,  -647,  -647,
    -647,  -647,   -40,  -647,  -647,  1090,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,   984,  -647,  -647,  -647,  -647,  -647,  -647
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned short int yytable[] =
{
     544,   545,   674,   473,  1129,   353,   360,    47,  1115,   117,
     473,   503,   353,   512,    49,  1108,   118,   119,   503,  1109,
      55,   120,  1110,   244,   474,   244,  1111,   121,   255,   360,
      67,   474,  1136,   440,   122,   626,  1137,   628,   123,   124,
      45,    46,  1121,  1183,   512,   125,   365,  1184,   126,   127,
     128,   642,   129,  1220,    67,   108,   447,  1221,   130,   650,
     425,    59,  1222,   426,    68,   256,  1223,  1224,   659,   660,
      60,  1225,   131,   132,    69,    63,   133,    64,   671,   672,
     257,   675,   134,    76,   354,   361,   135,   136,    68,   111,
     137,   354,   114,   138,   139,   115,   258,   716,    69,   259,
     260,   717,   427,   140,   141,   428,   116,   448,   361,   222,
     142,   143,   365,   144,   145,   146,   147,   475,   261,   223,
     718,   504,   440,   513,   475,  1264,   224,   148,   504,  1265,
     449,   245,   719,   245,  1266,   450,   149,   150,  1267,   151,
      70,   152,   153,   720,   476,   154,   355,  1130,   721,   765,
     254,   476,   429,   355,   513,   722,   366,  1269,   246,  1275,
     246,  1270,   723,  1276,    70,   251,   724,   302,    77,   295,
     430,   155,   296,   156,   441,  1116,   297,   157,   505,   725,
     514,   158,   159,   160,   161,   505,   303,   367,   162,   163,
     304,   665,   666,   577,   451,   578,   164,   556,   579,    78,
      79,   270,   298,   580,   299,   335,    80,   726,   336,  1122,
     337,   514,   727,   270,   305,   581,   582,   583,   306,   225,
     338,   584,   366,   339,   557,   165,   166,   307,   340,   167,
     506,   728,   341,   308,   758,   271,   616,   506,   168,   585,
     423,   729,   730,   586,   587,   540,   731,   271,   425,   782,
     309,   426,   442,   367,    81,    82,   470,   667,   668,   488,
     619,   300,   522,   441,    83,    84,   351,   588,   342,   589,
    1085,  1086,   226,   227,   228,   786,   272,   623,   310,   431,
     229,   343,   590,   344,    85,    86,   311,   696,   272,   352,
     427,   686,   345,   428,   346,   558,   559,   560,   347,    87,
     561,   312,   348,   591,  1112,  1113,  1114,   562,    88,   313,
     314,   273,   230,   274,   275,   732,   733,   372,   447,   225,
     563,   373,   374,   273,   734,   274,   275,   375,  1011,   376,
     472,   592,   377,   378,   564,   379,   380,   315,   316,   381,
     429,   442,   593,   961,   382,   231,   950,   951,   952,   276,
     383,   277,   594,   690,   384,   565,   385,  1204,   430,  1205,
     386,   276,   387,   277,   278,   388,   389,   390,   543,   448,
     391,  1206,   226,   227,   228,  1207,   278,  1161,  1044,  1045,
     229,   556,   392,   393,   394,   395,   317,   396,   397,    89,
      90,    91,   449,   398,   399,   400,   401,   450,   538,   349,
     810,   811,   812,   813,   814,   279,  1046,   402,   557,   404,
     406,   407,   230,   408,   409,   232,   410,   279,   411,  1047,
    1082,   412,   117,   413,   856,  1048,   280,   281,   837,   118,
     119,   414,   501,   415,   120,  1208,   416,   417,   280,   281,
     121,   418,  1049,   233,   419,   231,  1162,   122,   420,   421,
     466,   123,   124,   422,   673,   458,   451,   459,   125,   460,
     461,   126,   127,   128,   462,   129,   463,   431,   464,   465,
    1050,   130,  1172,   468,   469,   482,   483,  1163,  1051,   558,
     559,   560,   484,   485,   561,   131,   132,   486,   487,   133,
    1074,   562,   490,   491,   492,   134,   493,  1081,   494,   135,
     136,   495,   496,   137,   563,   497,   138,   139,  1164,  1165,
     716,  1053,   498,  1166,   717,   232,   140,   141,   564,   499,
     500,   519,  1167,   142,   143,   520,   144,   145,   146,   147,
    1054,   521,    77,   718,  1069,  1070,  1071,  1072,  1073,   565,
     148,  1173,   523,   233,   524,   719,  1232,   525,   527,   149,
     150,   541,   151,   528,   152,   153,   720,   529,   154,   530,
     531,   721,   532,    78,    79,   533,   543,   534,   722,   535,
      80,   536,  1174,   537,   542,   723,   546,  1233,   547,   724,
     548,   549,   550,   551,   155,  1175,   156,   552,   553,   554,
     157,   555,   725,   614,   158,   159,   160,   161,   615,  1232,
    1234,   162,   163,  1176,  1177,   618,   621,  1235,  1178,   164,
     622,  1236,  1237,   625,   627,   629,   630,  1179,    81,    82,
     726,   631,   632,   633,  1238,   727,   634,   635,    83,    84,
    1233,   636,   637,   302,   638,   639,   640,   255,   165,   166,
     641,   643,   167,   644,   728,   646,   645,   647,    85,    86,
     648,   168,   303,  1234,   729,   730,   304,  1239,   649,   731,
    1235,   651,  1240,    87,  1236,  1237,   652,   653,   654,   655,
     662,  1241,    88,   656,   256,   657,   658,  1238,  1044,  1045,
     305,   661,   673,   679,   306,   663,  1242,  1243,  1244,   257,
     698,   681,   664,   307,   669,   670,   676,   677,   699,   308,
     678,   682,   700,   684,   685,   258,  1046,   688,   259,   260,
    1239,   689,   693,   694,   695,   701,   309,   709,   710,  1047,
     711,   712,   713,   714,  1241,  1048,   715,   261,   732,   733,
     702,   703,   704,   705,   706,   707,   708,   734,   760,  1242,
    1243,  1244,  1049,   761,   310,   755,   762,   763,  1245,   764,
     756,   767,   311,    89,    90,    91,   757,   768,     2,     3,
    1246,   769,   770,     4,   766,   771,   772,   312,     5,  1247,
    1050,   773,   775,   774,   776,   313,   314,   777,  1051,  1052,
       6,   779,     7,   778,   791,     8,   788,   781,   784,   792,
     789,   793,     9,   795,   790,   796,   797,   798,   794,   800,
     799,  1245,   801,   315,   316,   802,   803,    10,   805,   973,
     806,  1053,   804,  1246,   858,    11,    12,   807,    13,   577,
     808,   578,  1247,   809,   579,   828,   817,   818,   819,   580,
    1054,   820,   821,   822,   823,   824,   825,   826,   859,    14,
     827,   581,   582,   583,   829,  1135,   830,   584,   860,   831,
      15,    16,   317,   861,   897,   898,   899,   900,   832,   901,
     862,   902,   903,   904,   833,   585,   905,   863,    17,   586,
     587,   864,   834,   835,   836,   839,   906,   907,   908,   909,
     910,   911,   840,   912,    18,   841,   913,   842,   843,   917,
     918,   919,   920,   588,   921,   589,   922,   923,   924,   471,
     301,   925,   964,   844,   965,   845,   846,   847,   590,   849,
      19,   926,   927,   928,   929,   930,   931,   850,   932,    20,
      21,   933,   851,   852,    22,    23,   853,   854,   855,   591,
     865,   866,   867,   868,   869,   870,   967,   871,   872,   873,
     874,   875,   876,   877,   962,   878,   879,   880,   881,   882,
     883,   884,   885,   886,   887,   888,   889,   592,   502,   890,
     891,   892,   968,   893,   894,   895,   896,   916,   593,   936,
     937,   938,   939,   940,   941,   942,   943,   944,   594,   945,
     946,   947,   948,   949,   955,   956,   957,   958,   959,   971,
     972,  1013,   966,   960,   963,  1014,   969,   970,  1015,   976,
     977,   978,   979,   980,   981,   982,   983,   984,   985,   986,
     987,   988,   989,   990,   991,   992,  1034,  1036,  1038,   993,
     994,   995,   996,   998,   999,  1000,  1001,  1002,  1003,  1004,
    1075,  1005,  1006,  1007,  1008,  1009,  1010,  1016,  1017,  1018,
    1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,  1076,
    1028,  1029,  1030,  1077,  1031,  1032,  1033,  1078,  1037,  1079,
    1035,  1040,  1039,  1041,  1042,  1043,  1058,  1059,  1060,  1061,
    1062,  1063,  1064,  1065,  1066,  1067,  1068,  1080,  1083,  1084,
    1087,  1088,  1089,  1090,  1091,  1093,  1092,  1094,  1095,  1096,
    1097,  1098,  1099,  1100,  1101,  1102,  1103,  1104,  1105,  1106,
    1107,  1119,  1120,  1125,  1126,  1127,  1128,  1138,  1139,  1140,
    1133,  1134,  1147,  1141,  1143,  1142,  1149,  1144,  1152,  1154,
    1145,  1146,  1156,  1148,  1150,  1157,  1158,  1159,  1160,  1151,
    1170,  1171,  1185,  1153,  1155,  1186,  1187,  1226,  1274,  1280,
     838,  1188,  1189,  1190,  1191,  1192,  1193,  1194,  1195,  1196,
    1012,  1197,  1198,  1199,  1200,  1201,  1202,  1203,  1273,  1211,
    1212,  1268,   759,  1227,  1213,  1214,   539,  1182,   783,  1215,
    1277,   787,  1279,  1278,   424,  1272,   857,  1219,  1218,   697,
     691,  1271,   350,     0,     0,     0,     0,   617,     0,  1216,
    1217,  1228,  1229,  1230,  1231,  1251,  1252,  1253,  1254,     0,
    1255,     0,  1256,     0,  1257,  1258,  1259,     0,  1260,     0,
       0,  1261,  1262,  1263,   620,     0,     0,   467,     0,     0,
       0,     0,   624,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   687,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   489
};

static const short int yycheck[] =
{
     338,   339,   418,     1,    69,     1,     1,   233,    12,     1,
       1,     1,     1,     1,   233,   231,     8,     9,     1,   235,
     233,    13,   231,     1,    22,     1,   235,    19,     1,     1,
       1,    22,   231,     1,    26,   373,   235,   375,    30,    31,
     231,   232,    12,   231,     1,    37,     1,   235,    40,    41,
      42,   389,    44,   231,     1,   140,     1,   235,    50,   397,
       1,   233,   231,     4,    35,    38,   235,   231,   406,   407,
     233,   235,    64,    65,    45,   233,    68,   233,   416,   417,
      53,   419,    74,   233,    80,    80,    78,    79,    35,   140,
      82,    80,   233,    85,    86,   233,    69,     1,    45,    72,
      73,     5,    43,    95,    96,    46,   233,    52,    80,   233,
     102,   103,     1,   105,   106,   107,   108,   115,    91,   233,
      24,   111,     1,   111,   115,   231,   233,   119,   111,   235,
      75,   109,    36,   109,   231,    80,   128,   129,   235,   131,
     111,   133,   134,    47,   142,   137,   142,   212,    52,   487,
     233,   142,    93,   142,   111,    59,   111,   231,   136,   231,
     136,   235,    66,   235,   111,   140,    70,     1,     1,   233,
     111,   163,   233,   165,   142,   179,   234,   169,   168,    83,
     168,   173,   174,   175,   176,   168,    20,   142,   180,   181,
      24,   177,   178,     1,   139,     3,   188,     1,     6,    32,
      33,     1,   234,    11,   234,   234,    39,   111,   234,   179,
     234,   168,   116,     1,    48,    23,    24,    25,    52,     1,
     234,    29,   111,   234,    28,   217,   218,    61,   234,   221,
     220,   135,   234,    67,   232,    35,   232,   220,   230,    47,
     232,   145,   146,    51,    52,   122,   150,    35,     1,   232,
      84,     4,   220,   142,    87,    88,   232,   177,   178,   232,
     232,   232,   231,   142,    97,    98,   233,    75,   234,    77,
     194,   195,    54,    55,    56,   232,    76,   232,   112,   220,
      62,   234,    90,   234,   117,   118,   120,   232,    76,   233,
      43,   232,   234,    46,   234,    99,   100,   101,   234,   132,
     104,   135,   234,   111,   950,   951,   952,   111,   141,   143,
     144,   111,    94,   113,   114,   219,   220,   234,     1,     1,
     124,   234,   234,   111,   228,   113,   114,   234,   232,   234,
     233,   139,   234,   234,   138,   234,   234,   171,   172,   234,
      93,   220,   150,   681,   234,   127,    14,    15,    16,   149,
     234,   151,   160,   232,   234,   159,   234,    11,   111,    13,
     234,   149,   234,   151,   164,   234,   234,   234,   122,    52,
     234,    25,    54,    55,    56,    29,   164,    83,    20,    21,
      62,     1,   234,   234,   234,   234,   220,   234,   234,   222,
     223,   224,    75,   234,   234,   234,   234,    80,   232,   232,
     154,   155,   156,   157,   158,   205,    48,   234,    28,   234,
     234,   234,    94,   234,   234,   197,   234,   205,   234,    61,
     836,   234,     1,   234,   232,    67,   226,   227,   232,     8,
       9,   234,   232,   234,    13,    89,   234,   234,   226,   227,
      19,   234,    84,   225,   234,   127,   152,    26,   234,   234,
     232,    30,    31,   234,   122,   234,   139,   234,    37,   234,
     234,    40,    41,    42,   234,    44,   234,   220,   234,   234,
     112,    50,    83,   234,   234,   234,   234,   183,   120,    99,
     100,   101,   234,   234,   104,    64,    65,   234,   234,    68,
     828,   111,   234,   234,   234,    74,   234,   835,   234,    78,
      79,   234,   234,    82,   124,   234,    85,    86,   214,   215,
       1,   153,   234,   219,     5,   197,    95,    96,   138,   234,
     234,   140,   228,   102,   103,   140,   105,   106,   107,   108,
     172,   140,     1,    24,   810,   811,   812,   813,   814,   159,
     119,   152,   234,   225,   234,    36,     5,   234,   234,   128,
     129,   122,   131,   234,   133,   134,    47,   234,   137,   234,
     234,    52,   234,    32,    33,   234,   122,   234,    59,   234,
      39,   234,   183,   234,   177,    66,   122,    36,   122,    70,
     177,   177,   177,   177,   163,   196,   165,   177,   177,   177,
     169,   231,    83,   234,   173,   174,   175,   176,   234,     5,
      59,   180,   181,   214,   215,   234,   234,    66,   219,   188,
     234,    70,    71,   177,   177,   122,   140,   228,    87,    88,
     111,   122,   177,   177,    83,   116,   177,   122,    97,    98,
      36,   140,   177,     1,   122,   122,   122,     1,   217,   218,
     177,   177,   221,   122,   135,   177,   140,   122,   117,   118,
     122,   230,    20,    59,   145,   146,    24,   116,   122,   150,
      66,   122,   121,   132,    70,    71,   140,   122,   122,   177,
     140,   130,   141,   234,    38,   177,   234,    83,    20,    21,
      48,   177,   122,   231,    52,   177,   145,   146,   147,    53,
     140,   234,   177,    61,   177,   177,   177,   177,   140,    67,
     177,   234,   140,   234,   234,    69,    48,   234,    72,    73,
     116,   234,   234,   234,   234,   140,    84,   140,   140,    61,
     177,   231,   140,   140,   130,    67,   231,    91,   219,   220,
     198,   199,   200,   201,   202,   203,   204,   228,   177,   145,
     146,   147,    84,   177,   112,   234,   177,   177,   207,   177,
     234,   140,   120,   222,   223,   224,   234,   177,     0,     1,
     219,   140,   140,     5,   231,   140,   140,   135,    10,   228,
     112,   140,   122,   140,   140,   143,   144,   140,   120,   121,
      22,   234,    24,   231,   177,    27,   231,   234,   234,   140,
     231,   177,    34,   177,   231,   177,   177,   177,   234,   140,
     177,   207,   122,   171,   172,   140,   140,    49,   140,   122,
     231,   153,   177,   219,   140,    57,    58,   231,    60,     1,
     231,     3,   228,   231,     6,   234,   231,   231,   231,    11,
     172,   231,   231,   231,   231,   231,   231,   231,   140,    81,
     231,    23,    24,    25,   234,   182,   234,    29,   231,   234,
      92,    93,   220,   140,   184,   185,   186,   187,   234,   189,
     231,   191,   192,   193,   234,    47,   196,   140,   110,    51,
      52,   140,   234,   234,   234,   234,   206,   207,   208,   209,
     210,   211,   234,   213,   126,   234,   216,   234,   234,   184,
     185,   186,   187,    75,   189,    77,   191,   192,   193,   247,
      71,   196,   140,   234,   140,   234,   234,   234,    90,   234,
     152,   206,   207,   208,   209,   210,   211,   234,   213,   161,
     162,   216,   234,   234,   166,   167,   234,   234,   234,   111,
     231,   231,   231,   231,   231,   231,   140,   231,   231,   231,
     231,   231,   231,   231,   177,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   139,   282,   231,
     231,   231,   140,   231,   231,   231,   231,   231,   150,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   160,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   140,
     140,   140,   231,   234,   234,   140,   231,   234,   140,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   140,   140,   140,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     122,   234,   234,   234,   234,   234,   234,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   122,
     231,   231,   231,   122,   231,   231,   231,   122,   231,   140,
     234,   231,   234,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   122,   231,   140,
     177,   140,   140,   177,   177,   140,   177,   234,   140,   140,
     140,   140,   122,   140,   140,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   177,   140,   177,
     231,   231,   140,   177,   177,   234,   140,   177,   140,   140,
     177,   177,   231,   177,   177,   231,   231,   231,   231,   177,
     231,   231,   231,   177,   177,   231,   231,   122,  1240,  1276,
     566,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     735,   231,   231,   231,   231,   231,   231,   231,  1225,   231,
     231,  1184,   477,  1137,   231,   231,   318,  1052,   507,   231,
    1265,   515,  1270,  1267,   169,  1223,   595,  1111,  1109,   453,
     443,  1221,    92,    -1,    -1,    -1,    -1,   356,    -1,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,    -1,
     231,    -1,   231,    -1,   231,   231,   231,    -1,   231,    -1,
      -1,   231,   231,   231,   362,    -1,    -1,   234,    -1,    -1,
      -1,    -1,   368,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   432,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   262
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   237,     0,     1,     5,    10,    22,    24,    27,    34,
      49,    57,    58,    60,    81,    92,    93,   110,   126,   152,
     161,   162,   166,   167,   238,   243,   248,   262,   268,   279,
     307,   322,   335,   358,   365,   375,   384,   410,   416,   422,
     427,   433,   493,   509,   526,   231,   232,   233,   336,   233,
     308,   385,   417,   423,   428,   233,   494,   411,   323,   233,
     233,   280,   359,   233,   233,   366,   376,     1,    35,    45,
     111,   263,   264,   265,   266,   267,   233,     1,    32,    33,
      39,    87,    88,    97,    98,   117,   118,   132,   141,   222,
     223,   224,   510,   511,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   140,   309,
     313,   140,   386,   390,   233,   233,   233,     1,     8,     9,
      13,    19,    26,    30,    31,    37,    40,    41,    42,    44,
      50,    64,    65,    68,    74,    78,    79,    82,    85,    86,
      95,    96,   102,   103,   105,   106,   107,   108,   119,   128,
     129,   131,   133,   134,   137,   163,   165,   169,   173,   174,
     175,   176,   180,   181,   188,   217,   218,   221,   230,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   484,   488,   489,   490,
     491,   492,   233,   233,   233,     1,    54,    55,    56,    62,
      94,   127,   197,   225,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     1,   109,   136,   244,   245,   246,
     247,   140,   281,   285,   233,     1,    38,    53,    69,    72,
      73,    91,   527,   528,   529,   530,   531,   532,   533,   534,
       1,    35,    76,   111,   113,   114,   149,   151,   164,   205,
     226,   227,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   233,   233,   234,   234,   234,
     232,   264,     1,    20,    24,    48,    52,    61,    67,    84,
     112,   120,   135,   143,   144,   171,   172,   220,   337,   338,
     339,   340,   341,   342,   343,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   232,
     511,   233,   233,     1,    80,   142,   418,   419,   420,   421,
       1,    80,   424,   425,   426,     1,   111,   142,   429,   430,
     431,   432,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   485,   234,   481,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   232,   435,     1,     4,    43,    46,    93,
     111,   220,   495,   496,   497,   498,   499,   503,   504,   505,
       1,   142,   220,   412,   413,   414,   415,     1,    52,    75,
      80,   139,   324,   328,   329,   330,   333,   334,   234,   234,
     234,   234,   234,   234,   234,   234,   232,   270,   234,   234,
     232,   245,   233,     1,    22,   115,   142,   360,   361,   362,
     363,   364,   234,   234,   234,   234,   234,   234,   232,   528,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   232,   250,     1,   111,   168,   220,   367,   368,   369,
     370,   371,     1,   111,   168,   377,   378,   379,   380,   140,
     140,   140,   231,   234,   234,   234,   344,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   232,   338,
     122,   122,   177,   122,   240,   240,   122,   122,   177,   177,
     177,   177,   177,   177,   177,   231,     1,    28,    99,   100,
     101,   104,   111,   124,   138,   159,   310,   311,   312,   314,
     315,   316,   317,   318,   319,   320,   321,     1,     3,     6,
      11,    23,    24,    25,    29,    47,    51,    52,    75,    77,
      90,   111,   139,   150,   160,   387,   388,   389,   391,   392,
     393,   394,   395,   396,   397,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   234,   234,   232,   419,   234,   232,
     425,   234,   234,   232,   430,   177,   240,   177,   240,   122,
     140,   122,   177,   177,   177,   122,   140,   177,   122,   122,
     122,   177,   240,   177,   122,   140,   177,   122,   122,   122,
     240,   122,   140,   122,   122,   177,   234,   177,   234,   240,
     240,   177,   140,   177,   177,   177,   178,   177,   178,   177,
     177,   240,   240,   122,   242,   240,   177,   177,   177,   231,
     506,   234,   234,   500,   234,   234,   232,   496,   234,   234,
     232,   413,   325,   234,   234,   234,   232,   329,   140,   140,
     140,   140,   198,   199,   200,   201,   202,   203,   204,   140,
     140,   177,   231,   140,   140,   231,     1,     5,    24,    36,
      47,    52,    59,    66,    70,    83,   111,   116,   135,   145,
     146,   150,   219,   220,   228,   282,   283,   284,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   234,   234,   234,   232,   361,
     177,   177,   177,   177,   177,   240,   231,   140,   177,   140,
     140,   140,   140,   140,   140,   122,   140,   140,   231,   234,
     372,   234,   232,   368,   234,   381,   232,   378,   231,   231,
     231,   177,   140,   177,   234,   177,   177,   177,   177,   177,
     140,   122,   140,   140,   177,   140,   231,   231,   231,   231,
     154,   155,   156,   157,   158,   239,   240,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   232,   311,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   398,   234,
     234,   234,   234,   234,   234,   234,   232,   388,   140,   140,
     231,   140,   231,   140,   140,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   184,   185,   186,
     187,   189,   191,   192,   193,   196,   206,   207,   208,   209,
     210,   211,   213,   216,   486,   487,   231,   184,   185,   186,
     187,   189,   191,   192,   193,   196,   206,   207,   208,   209,
     210,   211,   213,   216,   482,   483,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
      14,    15,    16,   241,   242,   231,   231,   231,   231,   231,
     234,   240,   177,   234,   140,   140,   231,   140,   140,   231,
     234,   140,   140,   122,   331,   332,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   234,   234,   234,   234,   303,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   232,   283,   140,   140,   140,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   140,   234,   140,   231,   140,   234,
     231,   231,   231,   231,    20,    21,    48,    61,    67,    84,
     112,   120,   121,   153,   172,   345,   346,   347,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   239,
     239,   239,   239,   239,   240,   122,   122,   122,   122,   140,
     122,   240,   242,   231,   140,   194,   195,   177,   140,   140,
     177,   177,   177,   140,   234,   140,   140,   140,   140,   122,
     140,   140,   231,   231,   231,   231,   231,   231,   231,   235,
     231,   235,   241,   241,   241,    12,   179,   507,   508,   231,
     231,    12,   179,   501,   502,   231,   231,   231,   231,    69,
     212,   326,   327,   231,   231,   182,   231,   235,   177,   140,
     177,   177,   234,   177,   177,   177,   177,   140,   177,   140,
     177,   177,   140,   177,   140,   177,   231,   231,   231,   231,
     231,    83,   152,   183,   214,   215,   219,   228,   373,   374,
     231,   231,    83,   152,   183,   196,   214,   215,   219,   228,
     382,   383,   347,   231,   235,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,    11,    13,    25,    29,    89,   399,
     400,   231,   231,   231,   231,   231,   231,   231,   487,   483,
     231,   235,   231,   235,   231,   235,   122,   332,   231,   231,
     231,   231,     5,    36,    59,    66,    70,    71,    83,   116,
     121,   130,   145,   146,   147,   207,   219,   228,   304,   305,
     306,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   235,   231,   235,   346,   231,
     235,   508,   502,   327,   306,   231,   235,   374,   383,   400,
     305
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
#define YYERROR		goto yyerrorlab


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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (0)
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
              (Loc).first_line, (Loc).first_column,	\
              (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
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
  unsigned int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylno);
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
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
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
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  register short int *yyssp;

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


  yyvsp[0] = yylval;

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
	short int *yyss1 = yyss;


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
	short int *yyss1 = yyss;
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
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to look-ahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

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
#line 392 "ircd_parser.y"
    { (yyval.number) = 0; }
    break;

  case 28:
#line 394 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number);
		}
    break;

  case 29:
#line 398 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number);
		}
    break;

  case 30:
#line 402 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number);
		}
    break;

  case 31:
#line 406 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number);
		}
    break;

  case 32:
#line 410 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number);
		}
    break;

  case 33:
#line 414 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number);
		}
    break;

  case 34:
#line 419 "ircd_parser.y"
    { (yyval.number) = 0; }
    break;

  case 36:
#line 420 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
    break;

  case 37:
#line 421 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
    break;

  case 38:
#line 422 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
    break;

  case 39:
#line 423 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
    break;

  case 46:
#line 437 "ircd_parser.y"
    {
#ifndef STATIC_MODULES /* NOOP in the static case */
  if (ypass == 2)
  {
    char *m_bn;

    m_bn = basename(yylval.string);

    /* I suppose we should just ignore it if it is already loaded(since
     * otherwise we would flood the opers on rehash) -A1kmm.
     */
    add_conf_module(yylval.string);
  }
#endif
}
    break;

  case 47:
#line 454 "ircd_parser.y"
    {
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
}
    break;

  case 63:
#line 478 "ircd_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (ypass == 2 && ServerInfo.ctx) 
  {
    if (!ServerInfo.rsa_private_key_file)
    {
      yyerror("No rsa_private_key_file specified, SSL disabled");
      break;
    }

    if (SSL_CTX_use_certificate_file(ServerInfo.ctx,
      yylval.string, SSL_FILETYPE_PEM) <= 0)
    {
      yyerror(ERR_lib_error_string(ERR_get_error()));
      break;
    }

    if (SSL_CTX_use_PrivateKey_file(ServerInfo.ctx,
      ServerInfo.rsa_private_key_file, SSL_FILETYPE_PEM) <= 0)
    {
      yyerror(ERR_lib_error_string(ERR_get_error()));
      break;
    }

    if (!SSL_CTX_check_private_key(ServerInfo.ctx))
    {
      yyerror("RSA private key does not match the SSL certificate public key!");
      break;
    }
  }
#endif
}
    break;

  case 64:
#line 512 "ircd_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (ypass == 1)
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
      yyerror("File open failed, ignoring");
      break;
    }

    ServerInfo.rsa_private_key = (RSA *)PEM_read_bio_RSAPrivateKey(file, NULL,
      0, NULL);

    BIO_set_close(file, BIO_CLOSE);
    BIO_free(file);

    if (ServerInfo.rsa_private_key == NULL)
    {
      yyerror("Couldn't extract key, ignoring");
      break;
    }

    if (!RSA_check_key(ServerInfo.rsa_private_key))
    {
      RSA_free(ServerInfo.rsa_private_key);
      ServerInfo.rsa_private_key = NULL;

      yyerror("Invalid key, ignoring");
      break;
    }

    /* require 2048 bit (256 byte) key */
    if (RSA_size(ServerInfo.rsa_private_key) != 256)
    {
      RSA_free(ServerInfo.rsa_private_key);
      ServerInfo.rsa_private_key = NULL;

      yyerror("Not a 2048 bit key, ignoring");
    }
  }
#endif
}
    break;

  case 65:
#line 572 "ircd_parser.y"
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

  case 66:
#line 586 "ircd_parser.y"
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

  case 67:
#line 604 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.description);
    DupString(ServerInfo.description,yylval.string);
  }
}
    break;

  case 68:
#line 613 "ircd_parser.y"
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

  case 69:
#line 627 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.network_desc);
    DupString(ServerInfo.network_desc, yylval.string);
  }
}
    break;

  case 70:
#line 636 "ircd_parser.y"
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

  case 71:
#line 664 "ircd_parser.y"
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

  case 72:
#line 694 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (MAXCONN >= (yyvsp[-1].number))
    {
      ServerInfo.max_clients = (yyvsp[-1].number);
    }
    else
    {
      ilog(L_ERROR, "Setting serverinfo_max_clients to MAXCONN");
      ServerInfo.max_clients = MAXCONN;
    }
  }
}
    break;

  case 73:
#line 710 "ircd_parser.y"
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

  case 81:
#line 766 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.name);
    DupString(AdminInfo.name, yylval.string);
  }
}
    break;

  case 82:
#line 775 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.email);
    DupString(AdminInfo.email, yylval.string);
  }
}
    break;

  case 83:
#line 784 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.description);
    DupString(AdminInfo.description, yylval.string);
  }
}
    break;

  case 96:
#line 807 "ircd_parser.y"
    {
                        }
    break;

  case 97:
#line 811 "ircd_parser.y"
    {
                        }
    break;

  case 98:
#line 815 "ircd_parser.y"
    {
                        }
    break;

  case 99:
#line 819 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
}
    break;

  case 100:
#line 826 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
}
    break;

  case 101:
#line 833 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
}
    break;

  case 102:
#line 840 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
}
    break;

  case 103:
#line 844 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
}
    break;

  case 104:
#line 848 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
}
    break;

  case 105:
#line 852 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
}
    break;

  case 106:
#line 856 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
}
    break;

  case 107:
#line 860 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
}
    break;

  case 108:
#line 864 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
}
    break;

  case 109:
#line 870 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 110:
#line 879 "ircd_parser.y"
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

  case 111:
#line 891 "ircd_parser.y"
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

  case 135:
#line 982 "ircd_parser.y"
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

  case 136:
#line 994 "ircd_parser.y"
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

  case 137:
#line 1006 "ircd_parser.y"
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

  case 138:
#line 1029 "ircd_parser.y"
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

  case 139:
#line 1041 "ircd_parser.y"
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

  case 140:
#line 1052 "ircd_parser.y"
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

  case 141:
#line 1063 "ircd_parser.y"
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

  case 142:
#line 1105 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 143:
#line 1114 "ircd_parser.y"
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

  case 144:
#line 1125 "ircd_parser.y"
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

  case 145:
#line 1136 "ircd_parser.y"
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

  case 146:
#line 1147 "ircd_parser.y"
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

  case 147:
#line 1158 "ircd_parser.y"
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

  case 148:
#line 1169 "ircd_parser.y"
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

  case 149:
#line 1180 "ircd_parser.y"
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

  case 150:
#line 1191 "ircd_parser.y"
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

  case 151:
#line 1202 "ircd_parser.y"
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

  case 152:
#line 1213 "ircd_parser.y"
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

  case 153:
#line 1224 "ircd_parser.y"
    {
}
    break;

  case 157:
#line 1228 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 158:
#line 1229 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 159:
#line 1232 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 160:
#line 1239 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 161:
#line 1246 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 162:
#line 1253 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 163:
#line 1260 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 164:
#line 1267 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 165:
#line 1274 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 166:
#line 1281 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 167:
#line 1288 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 168:
#line 1295 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 169:
#line 1302 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 170:
#line 1309 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 171:
#line 1316 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 172:
#line 1323 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 173:
#line 1330 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 174:
#line 1343 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = (struct ClassItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 175:
#line 1350 "ircd_parser.y"
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

  case 190:
#line 1377 "ircd_parser.y"
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

  case 191:
#line 1423 "ircd_parser.y"
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

  case 192:
#line 1469 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 193:
#line 1475 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = (yyvsp[-1].number);
}
    break;

  case 194:
#line 1481 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 195:
#line 1487 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 196:
#line 1493 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 197:
#line 1499 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 198:
#line 1505 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = (yyvsp[-1].number);
}
    break;

  case 199:
#line 1511 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 200:
#line 1520 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    listener_address = NULL;
    listener_flags = 0;
  }
}
    break;

  case 201:
#line 1527 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 202:
#line 1536 "ircd_parser.y"
    {
}
    break;

  case 206:
#line 1541 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_SSL;
}
    break;

  case 207:
#line 1545 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_HIDDEN;
}
    break;

  case 218:
#line 1558 "ircd_parser.y"
    {
  if (ypass == 2)
    add_listener((yyvsp[0].number), listener_address, listener_flags);
}
    break;

  case 219:
#line 1562 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    int i;

    for (i = (yyvsp[-2].number); i <= (yyvsp[0].number); ++i)
    {
      add_listener(i, listener_address, listener_flags);
    }
  }
}
    break;

  case 220:
#line 1575 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 221:
#line 1584 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 222:
#line 1596 "ircd_parser.y"
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

  case 223:
#line 1608 "ircd_parser.y"
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

  case 242:
#line 1678 "ircd_parser.y"
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

  case 243:
#line 1707 "ircd_parser.y"
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

  case 244:
#line 1720 "ircd_parser.y"
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

  case 245:
#line 1731 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 246:
#line 1740 "ircd_parser.y"
    {
}
    break;

  case 250:
#line 1744 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 251:
#line 1745 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 252:
#line 1748 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 253:
#line 1756 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 254:
#line 1763 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 255:
#line 1770 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 256:
#line 1777 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 257:
#line 1784 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 258:
#line 1791 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 259:
#line 1798 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 260:
#line 1805 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 261:
#line 1812 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 262:
#line 1821 "ircd_parser.y"
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

  case 263:
#line 1832 "ircd_parser.y"
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

  case 264:
#line 1843 "ircd_parser.y"
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

  case 265:
#line 1854 "ircd_parser.y"
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

  case 266:
#line 1865 "ircd_parser.y"
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

  case 267:
#line 1876 "ircd_parser.y"
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

  case 268:
#line 1888 "ircd_parser.y"
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

  case 269:
#line 1907 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 270:
#line 1917 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = (yyvsp[-1].number);
  }
}
    break;

  case 271:
#line 1926 "ircd_parser.y"
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

  case 272:
#line 1941 "ircd_parser.y"
    {
  if (ypass == 2)
    resv_reason = NULL;
}
    break;

  case 273:
#line 1945 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 280:
#line 1957 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 281:
#line 1966 "ircd_parser.y"
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

  case 282:
#line 1981 "ircd_parser.y"
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

  case 283:
#line 1999 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(ULINE_TYPE);
    yy_match_item = map_to_conf(yy_conf);
    yy_match_item->action = SHARED_ALL;
  }
}
    break;

  case 284:
#line 2007 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 291:
#line 2018 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 292:
#line 2027 "ircd_parser.y"
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

  case 293:
#line 2042 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 297:
#line 2049 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 298:
#line 2053 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 299:
#line 2057 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 300:
#line 2061 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 301:
#line 2065 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 302:
#line 2069 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 303:
#line 2073 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 304:
#line 2082 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_match_item = (struct MatchItem *)map_to_conf(yy_conf);
    yy_match_item->action = CLUSTER_ALL;
  }
}
    break;

  case 305:
#line 2090 "ircd_parser.y"
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

  case 311:
#line 2107 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 312:
#line 2113 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 316:
#line 2120 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_KLINE;
}
    break;

  case 317:
#line 2124 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNKLINE;
}
    break;

  case 318:
#line 2128 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_XLINE;
}
    break;

  case 319:
#line 2132 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNXLINE;
}
    break;

  case 320:
#line 2136 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_RESV;
}
    break;

  case 321:
#line 2140 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNRESV;
}
    break;

  case 322:
#line 2144 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_LOCOPS;
}
    break;

  case 323:
#line 2148 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = CLUSTER_ALL;
}
    break;

  case 324:
#line 2157 "ircd_parser.y"
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

  case 325:
#line 2175 "ircd_parser.y"
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

  case 348:
#line 2317 "ircd_parser.y"
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

  case 349:
#line 2329 "ircd_parser.y"
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

  case 350:
#line 2341 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 351:
#line 2350 "ircd_parser.y"
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

  case 352:
#line 2362 "ircd_parser.y"
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

  case 353:
#line 2374 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = (yyvsp[-1].number);
}
    break;

  case 354:
#line 2380 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 355:
#line 2384 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 356:
#line 2392 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 357:
#line 2401 "ircd_parser.y"
    {
}
    break;

  case 361:
#line 2406 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_LAZY_LINK;
}
    break;

  case 362:
#line 2410 "ircd_parser.y"
    {
  if (ypass == 2)
#ifndef HAVE_LIBZ
    yyerror("Ignoring flags = compressed; -- no zlib support");
#else
    yy_aconf->flags |= CONF_FLAGS_COMPRESSED;
#endif
}
    break;

  case 363:
#line 2418 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_CRYPTLINK;
}
    break;

  case 364:
#line 2422 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_ALLOW_AUTO_CONN;
}
    break;

  case 365:
#line 2426 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_BURST_AWAY;
}
    break;

  case 366:
#line 2432 "ircd_parser.y"
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

  case 367:
#line 2473 "ircd_parser.y"
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

  case 368:
#line 2484 "ircd_parser.y"
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

  case 369:
#line 2495 "ircd_parser.y"
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

  case 370:
#line 2510 "ircd_parser.y"
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

  case 371:
#line 2521 "ircd_parser.y"
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

  case 372:
#line 2534 "ircd_parser.y"
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

  case 373:
#line 2547 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 374:
#line 2556 "ircd_parser.y"
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

  case 375:
#line 2591 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(KLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 376:
#line 2598 "ircd_parser.y"
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

  case 382:
#line 2617 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    DupString(yy_aconf->host, yylval.string);
    split_user_host(yy_aconf->host, &yy_aconf->user, &yy_aconf->host);
  }
}
    break;

  case 383:
#line 2626 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 384:
#line 2638 "ircd_parser.y"
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

  case 385:
#line 2647 "ircd_parser.y"
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

  case 391:
#line 2663 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 392:
#line 2672 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 393:
#line 2684 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(EXEMPTDLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    DupString(yy_aconf->passwd, "*");
  }
}
    break;

  case 394:
#line 2692 "ircd_parser.y"
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

  case 399:
#line 2708 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 400:
#line 2720 "ircd_parser.y"
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

  case 401:
#line 2729 "ircd_parser.y"
    {
  /* XXX */
}
    break;

  case 407:
#line 2737 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    DupString(yy_conf->name, yylval.string);
    collapse(yy_conf->name);
  }
}
    break;

  case 408:
#line 2746 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_match_item->reason);
    DupString(yy_match_item->reason, yylval.string);
  }
}
    break;

  case 464:
#line 2794 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr = (yyvsp[-1].number);
}
    break;

  case 465:
#line 2800 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr6 = (yyvsp[-1].number);
}
    break;

  case 466:
#line 2806 "ircd_parser.y"
    {
  if (ypass == 1) /* must be set in the 1st pass */
    ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 467:
#line 2812 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 468:
#line 2817 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kill_chase_time_limit = (yyvsp[-1].number);
}
    break;

  case 469:
#line 2823 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 470:
#line 2829 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 471:
#line 2835 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 472:
#line 2841 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 473:
#line 2847 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 474:
#line 2853 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_time = (yyvsp[-1].number); 
}
    break;

  case 475:
#line 2859 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_changes = (yyvsp[-1].number);
}
    break;

  case 476:
#line 2865 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_accept = (yyvsp[-1].number);
}
    break;

  case 477:
#line 2871 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_spam_exit_message_time = (yyvsp[-1].number);
}
    break;

  case 478:
#line 2877 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_warn_delta = (yyvsp[-1].number);
}
    break;

  case 479:
#line 2883 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = (yyvsp[-1].number);
}
    break;

  case 480:
#line 2889 "ircd_parser.y"
    {
  if (((yyvsp[-1].number) > 0) && ypass == 1)
  {
    ilog(L_CRIT, "You haven't read your config file properly.");
    ilog(L_CRIT, "There is a line in the example conf that will kill your server if not removed.");
    ilog(L_CRIT, "Consider actually reading/editing the conf file, and removing this line.");
    exit(0);
  }
}
    break;

  case 481:
#line 2900 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 482:
#line 2906 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 483:
#line 2915 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 484:
#line 2921 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 485:
#line 2927 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 486:
#line 2933 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 487:
#line 2937 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 488:
#line 2943 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 489:
#line 2947 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 490:
#line 2953 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait = (yyvsp[-1].number);
}
    break;

  case 491:
#line 2959 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.caller_id_wait = (yyvsp[-1].number);
}
    break;

  case 492:
#line 2965 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait_simple = (yyvsp[-1].number);
}
    break;

  case 493:
#line 2971 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 494:
#line 2977 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 495:
#line 2983 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 496:
#line 2989 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 497:
#line 2995 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
}
    break;

  case 498:
#line 3006 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.idletime = (yyvsp[-1].number);
}
    break;

  case 499:
#line 3012 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dots_in_ident = (yyvsp[-1].number);
}
    break;

  case 500:
#line 3018 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.maximum_links = (yyvsp[-1].number);
}
    break;

  case 501:
#line 3024 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_targets = (yyvsp[-1].number);
}
    break;

  case 502:
#line 3030 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 503:
#line 3039 "ircd_parser.y"
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

  case 504:
#line 3071 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    ConfigFileEntry.compression_level = (yyvsp[-1].number);
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

  case 505:
#line 3089 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 506:
#line 3095 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 507:
#line 3104 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 508:
#line 3110 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 509:
#line 3115 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 510:
#line 3121 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 514:
#line 3128 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 515:
#line 3132 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 516:
#line 3136 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 517:
#line 3140 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 518:
#line 3144 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 519:
#line 3148 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 520:
#line 3152 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 521:
#line 3156 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 522:
#line 3160 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 523:
#line 3164 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 524:
#line 3168 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 525:
#line 3172 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 526:
#line 3176 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 527:
#line 3180 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 528:
#line 3184 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 529:
#line 3188 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 530:
#line 3192 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 531:
#line 3198 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 535:
#line 3205 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 536:
#line 3209 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 537:
#line 3213 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 538:
#line 3217 "ircd_parser.y"
    { 
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 539:
#line 3221 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 540:
#line 3225 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 541:
#line 3229 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 542:
#line 3233 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 543:
#line 3237 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 544:
#line 3241 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 545:
#line 3245 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 546:
#line 3249 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 547:
#line 3253 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 548:
#line 3257 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 549:
#line 3261 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 550:
#line 3265 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 551:
#line 3269 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 552:
#line 3275 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard = (yyvsp[-1].number);
}
    break;

  case 553:
#line 3281 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard_simple = (yyvsp[-1].number);
}
    break;

  case 554:
#line 3287 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.default_floodcount = (yyvsp[-1].number);
}
    break;

  case 555:
#line 3293 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.client_flood = (yyvsp[-1].number);
}
    break;

  case 556:
#line 3299 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 557:
#line 3308 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->flags = 0;
  }
}
    break;

  case 558:
#line 3316 "ircd_parser.y"
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

  case 568:
#line 3343 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 569:
#line 3349 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = (yyvsp[-1].number);
}
    break;

  case 570:
#line 3355 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 574:
#line 3361 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 575:
#line 3365 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 576:
#line 3371 "ircd_parser.y"
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

  case 577:
#line 3394 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 578:
#line 3403 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 579:
#line 3407 "ircd_parser.y"
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

  case 582:
#line 3447 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 583:
#line 3451 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 602:
#line 3480 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 603:
#line 3486 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_except = yylval.number;
}
    break;

  case 604:
#line 3492 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_invex = yylval.number;
}
    break;

  case 605:
#line 3498 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_knock = yylval.number;
}
    break;

  case 606:
#line 3504 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay = (yyvsp[-1].number);
}
    break;

  case 607:
#line 3510 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay_channel = (yyvsp[-1].number);
}
    break;

  case 608:
#line 3516 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 609:
#line 3522 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_chans_per_user = (yyvsp[-1].number);
}
    break;

  case 610:
#line 3528 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 611:
#line 3534 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_bans = (yyvsp[-1].number);
}
    break;

  case 612:
#line 3540 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_user_count = (yyvsp[-1].number);
}
    break;

  case 613:
#line 3546 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_server_count = (yyvsp[-1].number);
}
    break;

  case 614:
#line 3552 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 615:
#line 3558 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 626:
#line 3578 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 627:
#line 3584 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 628:
#line 3590 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (((yyvsp[-1].number) > 0) && ConfigServerHide.links_disabled == 1)
    {
      eventAddIsh("write_links_file", write_links_file, NULL, (yyvsp[-1].number));
      ConfigServerHide.links_disabled = 0;
    }

    ConfigServerHide.links_delay = (yyvsp[-1].number);
  }
}
    break;

  case 629:
#line 3604 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 630:
#line 3610 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 631:
#line 3616 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 1037 of yacc.c.  */
#line 6703 "y.tab.c"

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
	  const char* yyprefix;
	  char *yymsg;
	  int yyx;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 0;

	  yyprefix = ", expecting ";
	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		yysize += yystrlen (yyprefix) + yystrlen (yytname [yyx]);
		yycount += 1;
		if (yycount == 5)
		  {
		    yysize = 0;
		    break;
		  }
	      }
	  yysize += (sizeof ("syntax error, unexpected ")
		     + yystrlen (yytname[yytype]));
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yyprefix = ", expecting ";
		  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			yyp = yystpcpy (yyp, yyprefix);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yyprefix = " or ";
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
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* If at end of input, pop the error token,
	     then the rest of the stack, then return failure.  */
	  if (yychar == YYEOF)
	     for (;;)
	       {

		 YYPOPSTACK;
		 if (yyssp == yyss)
		   YYABORT;
		 yydestruct ("Error: popping",
                             yystos[*yyssp], yyvsp);
	       }
        }
      else
	{
	  yydestruct ("Error: discarding", yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

#ifdef __GNUC__
  /* Pacify GCC when the user code never invokes YYERROR and the label
     yyerrorlab therefore never appears in user code.  */
  if (0)
     goto yyerrorlab;
#endif

yyvsp -= yylen;
  yyssp -= yylen;
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
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


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
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
  yydestruct ("Error: discarding lookahead",
              yytoken, &yylval);
  yychar = YYEMPTY;
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



