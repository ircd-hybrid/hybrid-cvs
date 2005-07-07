/* A Bison parser, made from ircd_parser.y, by GNU bison 1.75.  */
/* $Id: y.tab.c,v 7.20 2005/07/07 18:39:00 adx Exp $ */

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
#define YYBISON	1

/* Pure parsers.  */
#define YYPURE	0

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
     T_CALLERID = 439,
     T_CCONN = 440,
     T_CLIENT_FLOOD = 441,
     T_DEBUG = 442,
     T_DRONE = 443,
     T_EXTERNAL = 444,
     T_FULL = 445,
     T_INVISIBLE = 446,
     T_IPV4 = 447,
     T_IPV6 = 448,
     T_LOCOPS = 449,
     T_LOGPATH = 450,
     T_L_CRIT = 451,
     T_L_DEBUG = 452,
     T_L_ERROR = 453,
     T_L_INFO = 454,
     T_L_NOTICE = 455,
     T_L_TRACE = 456,
     T_L_WARN = 457,
     T_MAX_CLIENTS = 458,
     T_NCHANGE = 459,
     T_OPERWALL = 460,
     T_REJ = 461,
     T_SERVNOTICE = 462,
     T_SKILL = 463,
     T_SPY = 464,
     T_UNAUTH = 465,
     T_UNRESV = 466,
     T_UNXLINE = 467,
     T_WALLOP = 468,
     THROTTLE_TIME = 469,
     TRUE_NO_OPER_FLOOD = 470,
     UNKLINE = 471,
     USER = 472,
     USE_EGD = 473,
     USE_EXCEPT = 474,
     USE_INVEX = 475,
     USE_KNOCK = 476,
     USE_LOGGING = 477,
     VHOST = 478,
     VHOST6 = 479,
     XLINE = 480,
     WARN = 481,
     WARN_NO_NLINE = 482
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
#define T_CALLERID 439
#define T_CCONN 440
#define T_CLIENT_FLOOD 441
#define T_DEBUG 442
#define T_DRONE 443
#define T_EXTERNAL 444
#define T_FULL 445
#define T_INVISIBLE 446
#define T_IPV4 447
#define T_IPV6 448
#define T_LOCOPS 449
#define T_LOGPATH 450
#define T_L_CRIT 451
#define T_L_DEBUG 452
#define T_L_ERROR 453
#define T_L_INFO 454
#define T_L_NOTICE 455
#define T_L_TRACE 456
#define T_L_WARN 457
#define T_MAX_CLIENTS 458
#define T_NCHANGE 459
#define T_OPERWALL 460
#define T_REJ 461
#define T_SERVNOTICE 462
#define T_SKILL 463
#define T_SPY 464
#define T_UNAUTH 465
#define T_UNRESV 466
#define T_UNXLINE 467
#define T_WALLOP 468
#define THROTTLE_TIME 469
#define TRUE_NO_OPER_FLOOD 470
#define UNKLINE 471
#define USER 472
#define USE_EGD 473
#define USE_EXCEPT 474
#define USE_INVEX 475
#define USE_KNOCK 476
#define USE_LOGGING 477
#define VHOST 478
#define VHOST6 479
#define XLINE 480
#define WARN 481
#define WARN_NO_NLINE 482




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

#ifndef YYSTYPE
#line 128 "ircd_parser.y"
typedef union {
  int number;
  char *string;
} yystype;
/* Line 193 of /usr/local/share/bison/yacc.c.  */
#line 635 "y.tab.c"
# define YYSTYPE yystype
# define YYSTYPE_IS_TRIVIAL 1
#endif

#ifndef YYLTYPE
typedef struct yyltype
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} yyltype;
# define YYLTYPE yyltype
# define YYLTYPE_IS_TRIVIAL 1
#endif

/* Copy the second part of user declarations.  */


/* Line 213 of /usr/local/share/bison/yacc.c.  */
#line 656 "y.tab.c"

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
	 || (YYLTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAX (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAX)

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
	    (To)[yyi] = (From)[yyi];	\
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
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAX;	\
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
#define YYLAST   1236

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  233
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  294
/* YYNRULES -- Number of rules. */
#define YYNRULES  620
/* YYNRULES -- Number of states. */
#define YYNSTATES  1263

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   482

#define YYTRANSLATE(X) \
  ((unsigned)(X) <= YYMAXUTOK ? yytranslate[X] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   232,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   228,
       2,   231,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   230,     2,   229,     2,     2,     2,     2,
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
     225,   226,   227
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
    1622,  1624,  1625,  1631,  1635,  1637,  1639,  1641,  1643,  1645,
    1647,  1649,  1651,  1653,  1655,  1657,  1659,  1661,  1663,  1665,
    1667,  1669,  1674,  1679,  1684,  1689,  1694,  1695,  1702,  1705,
    1707,  1709,  1711,  1713,  1715,  1717,  1719,  1721,  1726,  1731,
    1732,  1738,  1742,  1744,  1746,  1748,  1753,  1758,  1759,  1765,
    1769,  1771,  1773,  1775,  1781,  1784,  1786,  1788,  1790,  1792,
    1794,  1796,  1798,  1800,  1802,  1804,  1806,  1808,  1810,  1812,
    1814,  1816,  1821,  1826,  1831,  1836,  1841,  1846,  1851,  1856,
    1861,  1866,  1871,  1876,  1881,  1886,  1892,  1895,  1897,  1899,
    1901,  1903,  1905,  1907,  1909,  1911,  1916,  1921,  1926,  1931,
    1936
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     234,     0,    -1,    -1,   234,   235,    -1,   258,    -1,   264,
      -1,   275,    -1,   501,    -1,   303,    -1,   318,    -1,   327,
      -1,   245,    -1,   518,    -1,   350,    -1,   357,    -1,   367,
      -1,   376,    -1,   402,    -1,   408,    -1,   414,    -1,   425,
      -1,   485,    -1,   419,    -1,   240,    -1,     1,   228,    -1,
       1,   229,    -1,    -1,   237,    -1,   122,   236,    -1,   122,
     153,   236,    -1,   122,   154,   236,    -1,   122,   155,   236,
      -1,   122,   156,   236,    -1,   122,   157,   236,    -1,    -1,
     239,    -1,   122,   238,    -1,   122,    14,   238,    -1,   122,
      15,   238,    -1,   122,    16,   238,    -1,   110,   230,   241,
     229,   228,    -1,   241,   242,    -1,   242,    -1,   243,    -1,
     244,    -1,     1,    -1,   109,   231,   140,   228,    -1,   136,
     231,   140,   228,    -1,   161,   230,   246,   229,   228,    -1,
     246,   247,    -1,   247,    -1,   249,    -1,   254,    -1,   257,
      -1,   251,    -1,   252,    -1,   253,    -1,   256,    -1,   248,
      -1,   255,    -1,   250,    -1,     1,    -1,   149,   231,   140,
     228,    -1,   111,   231,   140,   228,    -1,   163,   231,   140,
     228,    -1,    35,   231,   140,   228,    -1,   114,   231,   140,
     228,    -1,   113,   231,   140,   228,    -1,   223,   231,   140,
     228,    -1,   224,   231,   140,   228,    -1,   203,   231,   122,
     228,    -1,    76,   231,   176,   228,    -1,     5,   230,   259,
     229,   228,    -1,   259,   260,    -1,   260,    -1,   261,    -1,
     263,    -1,   262,    -1,     1,    -1,   111,   231,   140,   228,
      -1,    45,   231,   140,   228,    -1,    35,   231,   140,   228,
      -1,    93,   230,   265,   229,   228,    -1,   265,   266,    -1,
     266,    -1,   267,    -1,   268,    -1,   269,    -1,   273,    -1,
     274,    -1,   270,    -1,   272,    -1,   271,    -1,     1,    -1,
     195,   231,   140,   228,    -1,   127,   231,   140,   228,    -1,
      62,   231,   140,   228,    -1,    56,   231,   140,   228,    -1,
      54,   231,   140,   228,    -1,    55,   231,   140,   228,    -1,
      94,   231,   196,   228,    -1,    94,   231,   198,   228,    -1,
      94,   231,   202,   228,    -1,    94,   231,   200,   228,    -1,
      94,   231,   201,   228,    -1,    94,   231,   199,   228,    -1,
      94,   231,   197,   228,    -1,   222,   231,   176,   228,    -1,
      -1,   126,   276,   277,   230,   278,   229,   228,    -1,    -1,
     281,    -1,   278,   279,    -1,   279,    -1,   280,    -1,   282,
      -1,   283,    -1,   285,    -1,   287,    -1,   288,    -1,   289,
      -1,   290,    -1,   291,    -1,   292,    -1,   293,    -1,   294,
      -1,   295,    -1,   296,    -1,   297,    -1,   284,    -1,   286,
      -1,   298,    -1,     1,    -1,   111,   231,   140,   228,    -1,
     140,    -1,   217,   231,   140,   228,    -1,   135,   231,   140,
     228,    -1,    47,   231,   176,   228,    -1,    70,   231,   176,
     228,    -1,   150,   231,   140,   228,    -1,    24,   231,   140,
     228,    -1,    66,   231,   176,   228,    -1,   146,   231,   176,
     228,    -1,    83,   231,   176,   228,    -1,   225,   231,   176,
     228,    -1,   216,   231,   176,   228,    -1,    59,   231,   176,
     228,    -1,   116,   231,   176,   228,    -1,    36,   231,   176,
     228,    -1,   145,   231,   176,   228,    -1,     5,   231,   176,
     228,    -1,    -1,    52,   299,   231,   300,   228,    -1,   300,
     232,   301,    -1,   301,    -1,   121,   302,    -1,   302,    -1,
      66,    -1,   146,    -1,    83,    -1,   216,    -1,   225,    -1,
      59,    -1,    36,    -1,   145,    -1,     5,    -1,    70,    -1,
     116,    -1,   205,    -1,   130,    -1,    71,    -1,   147,    -1,
      -1,    24,   304,   305,   230,   306,   229,   228,    -1,    -1,
     309,    -1,   306,   307,    -1,   307,    -1,   308,    -1,   310,
      -1,   311,    -1,   312,    -1,   313,    -1,   314,    -1,   315,
      -1,   316,    -1,   317,    -1,     1,    -1,   111,   231,   140,
     228,    -1,   140,    -1,   138,   231,   237,   228,    -1,   124,
     231,   122,   228,    -1,    28,   231,   237,   228,    -1,   104,
     231,   122,   228,    -1,    99,   231,   122,   228,    -1,   101,
     231,   122,   228,    -1,   100,   231,   122,   228,    -1,   158,
     231,   239,   228,    -1,    -1,    92,   319,   230,   320,   229,
     228,    -1,   320,   321,    -1,   321,    -1,   322,    -1,   325,
      -1,   326,    -1,     1,    -1,   139,   231,   323,   228,    -1,
     323,   232,   324,    -1,   324,    -1,   122,    -1,   122,   181,
     122,    -1,    80,   231,   140,   228,    -1,    75,   231,   140,
     228,    -1,    -1,    10,   328,   230,   329,   229,   228,    -1,
     329,   330,    -1,   330,    -1,   331,    -1,   332,    -1,   334,
      -1,   335,    -1,   340,    -1,   341,    -1,   342,    -1,   344,
      -1,   345,    -1,   346,    -1,   333,    -1,   347,    -1,   348,
      -1,   343,    -1,   349,    -1,     1,    -1,   217,   231,   140,
     228,    -1,   135,   231,   140,   228,    -1,   171,   231,   176,
     228,    -1,    24,   231,   140,   228,    -1,    -1,    52,   336,
     231,   337,   228,    -1,   337,   232,   338,    -1,   338,    -1,
     121,   339,    -1,   339,    -1,   171,    -1,    48,    -1,    84,
      -1,    67,    -1,    20,    -1,    21,    -1,   120,    -1,    61,
      -1,   152,    -1,   112,    -1,    84,   231,   176,   228,    -1,
      67,   231,   176,   228,    -1,    48,   231,   176,   228,    -1,
      20,   231,   176,   228,    -1,   120,   231,   176,   228,    -1,
      61,   231,   176,   228,    -1,   170,   231,   140,   228,    -1,
     144,   231,   140,   228,    -1,   143,   231,   122,   228,    -1,
     112,   231,   176,   228,    -1,    -1,   151,   351,   230,   352,
     229,   228,    -1,   352,   353,    -1,   353,    -1,   354,    -1,
     355,    -1,   356,    -1,     1,    -1,   142,   231,   140,   228,
      -1,    22,   231,   140,   228,    -1,   115,   231,   140,   228,
      -1,    -1,   165,   358,   230,   359,   229,   228,    -1,   359,
     360,    -1,   360,    -1,   361,    -1,   362,    -1,   363,    -1,
       1,    -1,   111,   231,   140,   228,    -1,   217,   231,   140,
     228,    -1,    -1,   167,   364,   231,   365,   228,    -1,   365,
     232,   366,    -1,   366,    -1,    83,    -1,   216,    -1,   225,
      -1,   212,    -1,   151,    -1,   211,    -1,   182,    -1,    -1,
     166,   368,   230,   369,   229,   228,    -1,   369,   370,    -1,
     370,    -1,   371,    -1,   372,    -1,     1,    -1,   111,   231,
     140,   228,    -1,    -1,   167,   373,   231,   374,   228,    -1,
     374,   232,   375,    -1,   375,    -1,    83,    -1,   216,    -1,
     225,    -1,   212,    -1,   151,    -1,   211,    -1,   194,    -1,
     182,    -1,    -1,    27,   377,   378,   230,   379,   229,   228,
      -1,    -1,   382,    -1,   379,   380,    -1,   380,    -1,   381,
      -1,   383,    -1,   384,    -1,   385,    -1,   386,    -1,   387,
      -1,   388,    -1,   389,    -1,   398,    -1,   399,    -1,   400,
      -1,   397,    -1,   394,    -1,   396,    -1,   395,    -1,   393,
      -1,   401,    -1,     1,    -1,   111,   231,   140,   228,    -1,
     140,    -1,    75,   231,   140,   228,    -1,   159,   231,   140,
     228,    -1,     3,   231,   140,   228,    -1,   139,   231,   122,
     228,    -1,     6,   231,   192,   228,    -1,     6,   231,   193,
     228,    -1,    51,   231,   140,   228,    -1,    -1,    52,   390,
     231,   391,   228,    -1,   391,   232,   392,    -1,   392,    -1,
      89,    -1,    25,    -1,    29,    -1,    11,    -1,    13,    -1,
     150,   231,   140,   228,    -1,    47,   231,   176,   228,    -1,
      29,   231,   176,   228,    -1,    25,   231,   176,   228,    -1,
      11,   231,   176,   228,    -1,    77,   231,   140,   228,    -1,
      90,   231,   140,   228,    -1,    24,   231,   140,   228,    -1,
      23,   231,   140,   228,    -1,    -1,    81,   403,   230,   404,
     229,   228,    -1,   404,   405,    -1,   405,    -1,   406,    -1,
     407,    -1,     1,    -1,   217,   231,   140,   228,    -1,   142,
     231,   140,   228,    -1,    -1,    34,   409,   230,   410,   229,
     228,    -1,   410,   411,    -1,   411,    -1,   412,    -1,   413,
      -1,     1,    -1,    80,   231,   140,   228,    -1,   142,   231,
     140,   228,    -1,    -1,    49,   415,   230,   416,   229,   228,
      -1,   416,   417,    -1,   417,    -1,   418,    -1,     1,    -1,
      80,   231,   140,   228,    -1,    -1,    57,   420,   230,   421,
     229,   228,    -1,   421,   422,    -1,   422,    -1,   423,    -1,
     424,    -1,     1,    -1,   111,   231,   140,   228,    -1,   142,
     231,   140,   228,    -1,    58,   230,   426,   229,   228,    -1,
     426,   427,    -1,   427,    -1,   433,    -1,   434,    -1,   436,
      -1,   437,    -1,   438,    -1,   439,    -1,   440,    -1,   441,
      -1,   442,    -1,   443,    -1,   432,    -1,   445,    -1,   446,
      -1,   447,    -1,   461,    -1,   448,    -1,   450,    -1,   452,
      -1,   451,    -1,   454,    -1,   449,    -1,   455,    -1,   456,
      -1,   457,    -1,   458,    -1,   460,    -1,   462,    -1,   459,
      -1,   476,    -1,   463,    -1,   467,    -1,   468,    -1,   472,
      -1,   453,    -1,   482,    -1,   480,    -1,   481,    -1,   464,
      -1,   435,    -1,   465,    -1,   466,    -1,   483,    -1,   471,
      -1,   444,    -1,   484,    -1,   469,    -1,   470,    -1,   430,
      -1,   431,    -1,   428,    -1,   429,    -1,     1,    -1,    64,
     231,   122,   228,    -1,    65,   231,   122,   228,    -1,    13,
     231,   176,   228,    -1,   164,   231,   176,   228,    -1,    82,
     231,   122,   228,    -1,    74,   231,   176,   228,    -1,    79,
     231,   176,   228,    -1,    40,   231,   176,   228,    -1,    50,
     231,   176,   228,    -1,     8,   231,   176,   228,    -1,   103,
     231,   237,   228,    -1,   102,   231,   122,   228,    -1,    96,
     231,   122,   228,    -1,     9,   231,   237,   228,    -1,   180,
     231,   237,   228,    -1,   179,   231,   237,   228,    -1,    68,
     231,   122,   228,    -1,    86,   231,   176,   228,    -1,    85,
     231,   140,   228,    -1,   227,   231,   176,   228,    -1,   174,
     231,   176,   228,    -1,   175,   231,   176,   228,    -1,   173,
     231,   176,   228,    -1,   173,   231,   177,   228,    -1,   172,
     231,   176,   228,    -1,   172,   231,   177,   228,    -1,   133,
     231,   237,   228,    -1,    19,   231,   237,   228,    -1,   134,
     231,   237,   228,    -1,   168,   231,   176,   228,    -1,   119,
     231,   176,   228,    -1,   215,   231,   176,   228,    -1,   129,
     231,   176,   228,    -1,   106,   231,   140,   228,    -1,    78,
     231,   237,   228,    -1,    42,   231,   122,   228,    -1,    95,
     231,   122,   228,    -1,   105,   231,   122,   228,    -1,   162,
     231,   140,   228,    -1,    30,   231,   140,   228,    -1,    26,
     231,   122,   228,    -1,   218,   231,   176,   228,    -1,    44,
     231,   140,   228,    -1,   137,   231,   176,   228,    -1,    37,
     231,   176,   228,    -1,   214,   231,   237,   228,    -1,    -1,
     131,   473,   231,   474,   228,    -1,   474,   232,   475,    -1,
     475,    -1,   183,    -1,   185,    -1,   187,    -1,   190,    -1,
     208,    -1,   204,    -1,   206,    -1,   210,    -1,   209,    -1,
     189,    -1,   205,    -1,   207,    -1,   191,    -1,   213,    -1,
     184,    -1,   194,    -1,    -1,   128,   477,   231,   478,   228,
      -1,   478,   232,   479,    -1,   479,    -1,   183,    -1,   185,
      -1,   187,    -1,   190,    -1,   208,    -1,   204,    -1,   206,
      -1,   210,    -1,   209,    -1,   189,    -1,   205,    -1,   207,
      -1,   191,    -1,   213,    -1,   184,    -1,   194,    -1,   107,
     231,   122,   228,    -1,   108,   231,   122,   228,    -1,    31,
     231,   122,   228,    -1,   186,   231,   239,   228,    -1,    41,
     231,   176,   228,    -1,    -1,    60,   486,   230,   487,   229,
     228,    -1,   487,   488,    -1,   488,    -1,   489,    -1,   490,
      -1,   491,    -1,   495,    -1,   496,    -1,   497,    -1,     1,
      -1,    46,   231,   176,   228,    -1,    43,   231,   237,   228,
      -1,    -1,    93,   492,   231,   493,   228,    -1,   493,   232,
     494,    -1,   494,    -1,   178,    -1,    12,    -1,   217,   231,
     140,   228,    -1,   111,   231,   140,   228,    -1,    -1,     4,
     498,   231,   499,   228,    -1,   499,   232,   500,    -1,   500,
      -1,   178,    -1,    12,    -1,    22,   230,   502,   229,   228,
      -1,   502,   503,    -1,   503,    -1,   504,    -1,   505,    -1,
     506,    -1,   507,    -1,   513,    -1,   508,    -1,   509,    -1,
     510,    -1,   511,    -1,   512,    -1,   514,    -1,   515,    -1,
     516,    -1,   517,    -1,     1,    -1,    39,   231,   176,   228,
      -1,   219,   231,   176,   228,    -1,   220,   231,   176,   228,
      -1,   221,   231,   176,   228,    -1,    87,   231,   237,   228,
      -1,    88,   231,   237,   228,    -1,   132,   231,   176,   228,
      -1,    98,   231,   122,   228,    -1,   141,   231,   176,   228,
      -1,    97,   231,   122,   228,    -1,    33,   231,   122,   228,
      -1,    32,   231,   122,   228,    -1,   117,   231,   176,   228,
      -1,   118,   231,   176,   228,    -1,   160,   230,   519,   229,
     228,    -1,   519,   520,    -1,   520,    -1,   521,    -1,   522,
      -1,   523,    -1,   525,    -1,   524,    -1,   526,    -1,     1,
      -1,    53,   231,   176,   228,    -1,    73,   231,   176,   228,
      -1,    91,   231,   237,   228,    -1,    69,   231,   176,   228,
      -1,    38,   231,   176,   228,    -1,    72,   231,   176,   228,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   359,   359,   360,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   388,   388,   389,   393,
     397,   401,   405,   409,   415,   415,   416,   417,   418,   419,
     426,   429,   429,   430,   430,   430,   432,   451,   462,   465,
     465,   467,   467,   467,   468,   468,   469,   469,   470,   471,
     471,   472,   475,   530,   544,   562,   571,   585,   594,   622,
     652,   668,   718,   720,   720,   721,   721,   721,   722,   724,
     733,   742,   754,   756,   756,   759,   759,   759,   760,   760,
     761,   761,   762,   762,   765,   769,   773,   777,   784,   791,
     798,   802,   806,   810,   814,   818,   822,   828,   838,   837,
     930,   930,   931,   931,   932,   932,   932,   932,   932,   933,
     933,   933,   934,   934,   934,   935,   935,   936,   936,   936,
     937,   937,   938,   940,   952,   964,   987,   999,  1010,  1021,
    1063,  1072,  1083,  1094,  1105,  1116,  1127,  1138,  1149,  1160,
    1171,  1183,  1182,  1186,  1186,  1187,  1188,  1190,  1197,  1204,
    1211,  1218,  1225,  1232,  1239,  1246,  1253,  1260,  1267,  1274,
    1281,  1288,  1302,  1301,  1321,  1321,  1323,  1323,  1324,  1324,
    1325,  1326,  1327,  1328,  1329,  1330,  1331,  1332,  1335,  1381,
    1427,  1433,  1439,  1445,  1451,  1457,  1463,  1469,  1479,  1478,
    1491,  1491,  1492,  1492,  1492,  1492,  1494,  1496,  1496,  1498,
    1502,  1515,  1524,  1537,  1536,  1610,  1610,  1611,  1611,  1611,
    1611,  1611,  1612,  1612,  1613,  1613,  1613,  1614,  1614,  1615,
    1615,  1615,  1616,  1618,  1647,  1660,  1671,  1681,  1680,  1684,
    1684,  1685,  1686,  1688,  1696,  1703,  1710,  1717,  1724,  1731,
    1738,  1745,  1752,  1761,  1772,  1783,  1794,  1805,  1816,  1828,
    1847,  1857,  1866,  1882,  1881,  1894,  1894,  1895,  1895,  1895,
    1895,  1897,  1906,  1921,  1940,  1939,  1955,  1955,  1956,  1956,
    1956,  1956,  1958,  1967,  1983,  1982,  1988,  1988,  1989,  1993,
    1997,  2001,  2005,  2009,  2013,  2023,  2022,  2044,  2044,  2045,
    2045,  2045,  2047,  2054,  2053,  2059,  2059,  2060,  2064,  2068,
    2072,  2076,  2080,  2084,  2088,  2098,  2097,  2247,  2247,  2248,
    2248,  2249,  2249,  2249,  2249,  2250,  2250,  2250,  2251,  2251,
    2251,  2252,  2252,  2252,  2253,  2253,  2253,  2254,  2254,  2257,
    2269,  2281,  2290,  2302,  2314,  2320,  2324,  2332,  2342,  2341,
    2345,  2345,  2346,  2350,  2358,  2362,  2366,  2372,  2413,  2424,
    2435,  2450,  2461,  2474,  2487,  2496,  2532,  2531,  2554,  2554,
    2555,  2555,  2555,  2557,  2566,  2579,  2578,  2600,  2600,  2601,
    2601,  2601,  2603,  2612,  2625,  2624,  2645,  2645,  2646,  2646,
    2648,  2661,  2660,  2674,  2674,  2675,  2675,  2675,  2677,  2686,
    2698,  2701,  2701,  2702,  2702,  2702,  2703,  2703,  2704,  2704,
    2705,  2705,  2706,  2706,  2707,  2707,  2708,  2709,  2709,  2710,
    2710,  2711,  2711,  2712,  2712,  2713,  2713,  2714,  2714,  2715,
    2715,  2716,  2717,  2717,  2718,  2718,  2719,  2720,  2720,  2721,
    2721,  2722,  2722,  2723,  2724,  2724,  2725,  2725,  2726,  2726,
    2727,  2727,  2728,  2728,  2729,  2734,  2740,  2746,  2752,  2757,
    2763,  2769,  2775,  2781,  2787,  2793,  2799,  2805,  2811,  2817,
    2823,  2829,  2840,  2846,  2855,  2861,  2867,  2873,  2877,  2883,
    2887,  2893,  2899,  2905,  2911,  2917,  2923,  2929,  2935,  2946,
    2952,  2958,  2964,  2970,  2979,  3011,  3029,  3035,  3044,  3050,
    3055,  3062,  3061,  3067,  3067,  3068,  3072,  3076,  3080,  3084,
    3088,  3092,  3096,  3100,  3104,  3108,  3112,  3116,  3120,  3124,
    3128,  3135,  3134,  3140,  3140,  3141,  3145,  3149,  3153,  3157,
    3161,  3165,  3169,  3173,  3177,  3181,  3185,  3189,  3193,  3197,
    3201,  3207,  3213,  3219,  3225,  3231,  3241,  3240,  3266,  3266,
    3267,  3267,  3268,  3269,  3270,  3271,  3272,  3275,  3281,  3288,
    3287,  3292,  3292,  3293,  3297,  3303,  3326,  3336,  3335,  3378,
    3378,  3379,  3383,  3392,  3395,  3395,  3396,  3396,  3397,  3398,
    3399,  3400,  3401,  3402,  3403,  3404,  3405,  3406,  3407,  3408,
    3409,  3412,  3418,  3424,  3430,  3436,  3442,  3448,  3454,  3460,
    3466,  3472,  3478,  3484,  3490,  3499,  3502,  3502,  3503,  3503,
    3503,  3504,  3505,  3506,  3507,  3510,  3516,  3522,  3536,  3542,
    3548
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
  "T_ALL", "T_BOTS", "T_CALLERID", "T_CCONN", "T_CLIENT_FLOOD", "T_DEBUG", 
  "T_DRONE", "T_EXTERNAL", "T_FULL", "T_INVISIBLE", "T_IPV4", "T_IPV6", 
  "T_LOCOPS", "T_LOGPATH", "T_L_CRIT", "T_L_DEBUG", "T_L_ERROR", 
  "T_L_INFO", "T_L_NOTICE", "T_L_TRACE", "T_L_WARN", "T_MAX_CLIENTS", 
  "T_NCHANGE", "T_OPERWALL", "T_REJ", "T_SERVNOTICE", "T_SKILL", "T_SPY", 
  "T_UNAUTH", "T_UNRESV", "T_UNXLINE", "T_WALLOP", "THROTTLE_TIME", 
  "TRUE_NO_OPER_FLOOD", "UNKLINE", "USER", "USE_EGD", "USE_EXCEPT", 
  "USE_INVEX", "USE_KNOCK", "USE_LOGGING", "VHOST", "VHOST6", "XLINE", 
  "WARN", "WARN_NO_NLINE", "';'", "'}'", "'{'", "'='", "','", "$accept", 
  "conf", "conf_item", "timespec_", "timespec", "sizespec_", "sizespec", 
  "modules_entry", "modules_items", "modules_item", "modules_module", 
  "modules_path", "serverinfo_entry", "serverinfo_items", 
  "serverinfo_item", "serverinfo_rsa_private_key_file", "serverinfo_name", 
  "serverinfo_sid", "serverinfo_description", "serverinfo_network_name", 
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
     475,   476,   477,   478,   479,   480,   481,   482,    59,   125,
     123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   233,   234,   234,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   236,   236,   237,   237,
     237,   237,   237,   237,   238,   238,   239,   239,   239,   239,
     240,   241,   241,   242,   242,   242,   243,   244,   245,   246,
     246,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   259,   260,   260,   260,   260,   261,
     262,   263,   264,   265,   265,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   267,   268,   269,   270,   271,   272,
     273,   273,   273,   273,   273,   273,   273,   274,   276,   275,
     277,   277,   278,   278,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   299,   298,   300,   300,   301,   301,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   304,   303,   305,   305,   306,   306,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   319,   318,
     320,   320,   321,   321,   321,   321,   322,   323,   323,   324,
     324,   325,   326,   328,   327,   329,   329,   330,   330,   330,
     330,   330,   330,   330,   330,   330,   330,   330,   330,   330,
     330,   330,   330,   331,   332,   333,   334,   336,   335,   337,
     337,   338,   338,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   351,   350,   352,   352,   353,   353,   353,
     353,   354,   355,   356,   358,   357,   359,   359,   360,   360,
     360,   360,   361,   362,   364,   363,   365,   365,   366,   366,
     366,   366,   366,   366,   366,   368,   367,   369,   369,   370,
     370,   370,   371,   373,   372,   374,   374,   375,   375,   375,
     375,   375,   375,   375,   375,   377,   376,   378,   378,   379,
     379,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   381,
     382,   383,   384,   385,   386,   387,   387,   388,   390,   389,
     391,   391,   392,   392,   392,   392,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   403,   402,   404,   404,
     405,   405,   405,   406,   407,   409,   408,   410,   410,   411,
     411,   411,   412,   413,   415,   414,   416,   416,   417,   417,
     418,   420,   419,   421,   421,   422,   422,   422,   423,   424,
     425,   426,   426,   427,   427,   427,   427,   427,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   427,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   427,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   427,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   427,   427,   427,
     427,   427,   427,   427,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   450,   451,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   473,   472,   474,   474,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   477,   476,   478,   478,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   480,   481,   482,   483,   484,   486,   485,   487,   487,
     488,   488,   488,   488,   488,   488,   488,   489,   490,   492,
     491,   493,   493,   494,   494,   495,   496,   498,   497,   499,
     499,   500,   500,   501,   502,   502,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   519,   520,   520,
     520,   520,   520,   520,   520,   521,   522,   523,   524,   525,
     526
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
       1,     0,     5,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     0,     6,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     0,
       5,     3,     1,     1,     1,     4,     4,     0,     5,     3,
       1,     1,     1,     5,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     5,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       2,     0,     1,     0,     0,   213,     0,   172,   315,   375,
     384,   391,     0,   546,   366,   198,     0,     0,   108,   263,
       0,     0,   274,   295,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,     0,
     174,   317,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,    74,    75,    77,    76,     0,   590,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   575,   576,   577,   578,   579,   581,   582,
     583,   584,   585,   580,   586,   587,   588,   589,   189,     0,
     175,   340,     0,   318,     0,     0,     0,   454,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   521,
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
      44,   134,     0,   111,     0,   614,     0,     0,     0,     0,
       0,     0,     0,   607,   608,   609,   610,   612,   611,   613,
      61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,    58,    51,    60,    54,    55,    56,    52,
      59,    57,    53,     0,     0,     0,     0,     0,     0,    73,
     232,     0,     0,     0,   237,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   216,   217,   218,
     227,   219,   220,   221,   222,   223,   230,   224,   225,   226,
     228,   229,   231,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   574,     0,
       0,   381,     0,     0,     0,   378,   379,   380,   389,     0,
       0,   387,   388,   397,     0,     0,     0,   394,   395,   396,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   401,   556,   567,     0,     0,   559,     0,     0,
       0,   549,   550,   551,   552,   553,   554,   555,   372,     0,
       0,     0,   369,   370,   371,   205,     0,     0,     0,     0,
     201,   202,   203,   204,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,    41,     0,   270,
       0,     0,     0,     0,   266,   267,   268,   269,     0,     0,
       0,     0,     0,     0,     0,   606,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,   281,     0,
     284,     0,     0,   277,   278,   279,   280,   301,     0,   303,
       0,   298,   299,   300,     0,     0,     0,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   215,     0,     0,     0,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     573,   187,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,   548,     0,     0,     0,   368,     0,     0,     0,
       0,   200,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,     0,     0,    40,
     132,     0,     0,     0,     0,   151,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,   114,   115,   116,   129,   117,   130,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   131,     0,
       0,     0,     0,   265,     0,     0,     0,     0,     0,     0,
     605,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,     0,     0,     0,     0,   276,     0,     0,     0,
     297,    81,    80,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   214,
     602,   601,   591,    26,    26,    26,    26,    26,    28,    27,
     595,   596,   600,   598,   603,   604,   597,   599,   592,   593,
     594,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   176,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     319,     0,     0,   376,     0,   385,     0,     0,   392,   464,
     468,   457,   482,   495,   494,   543,   499,   462,   545,   490,
     497,   463,   455,   456,   471,   460,   489,   461,   459,   473,
     472,   491,   467,   466,   465,   492,   488,   541,   542,   485,
     525,   539,   526,   527,   534,   528,   537,   540,   530,   535,
     531,   536,   529,   533,   532,   538,     0,   524,   487,   505,
     519,   506,   507,   514,   508,   517,   520,   510,   515,   511,
     516,   509,   513,   512,   518,     0,   504,   481,   483,   498,
     493,   458,   484,   479,   480,   477,   478,   475,   476,   470,
     469,    34,    34,    34,    36,    35,   544,   500,   486,   496,
     474,     0,     0,     0,     0,     0,     0,   547,     0,     0,
     367,     0,     0,   209,     0,   208,   199,    98,    99,    97,
      96,   100,   106,   101,   105,   103,   104,   102,    95,    94,
     107,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,     0,     0,     0,   264,   619,   615,   618,
     620,   616,   617,    65,    71,    63,    67,    66,    62,    64,
      70,    68,    69,     0,     0,     0,   275,     0,     0,   296,
     256,   236,   255,   247,   248,   244,   250,   246,   245,   252,
     249,     0,   251,   243,     0,   240,   242,   258,   254,   253,
     262,   257,   234,   261,   260,   259,   235,   233,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   173,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   316,   382,   383,   390,   398,   399,   522,     0,   502,
       0,    37,    38,    39,   572,   571,     0,   570,   558,   557,
     564,   563,     0,   562,   566,   565,   374,   373,   212,   211,
       0,   206,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   109,   272,   273,   271,   282,   288,   292,   294,   293,
     291,   289,   290,     0,   287,   283,   302,   307,   311,   314,
     313,   312,   310,   308,   309,     0,   306,   241,   238,     0,
     192,   194,   196,   195,   193,   188,   191,   190,   197,   343,
     345,   346,   361,   365,   364,   360,   359,   358,   347,   355,
     356,   353,   354,   352,     0,   351,   341,   362,   363,   339,
     344,   357,   342,   523,   503,   568,     0,   560,     0,   210,
     207,   150,   140,   148,   137,   165,   163,   162,   157,   166,
     170,   159,   167,     0,   169,   164,   158,   171,   168,   160,
     161,     0,   154,   156,   146,   141,   138,   143,   133,   147,
     136,   149,   142,   139,   145,   135,   144,   285,     0,   304,
       0,   239,   349,     0,   569,   561,   155,   152,     0,   286,
     305,   350,   153
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,    24,   808,   809,   944,   945,    25,   247,   248,
     249,   250,    26,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,    27,    71,    72,    73,    74,
      75,    28,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,    29,    61,   252,   729,   730,   731,   253,   732,
     733,   734,   735,   736,   737,   738,   739,   740,   741,   742,
     743,   744,   745,   746,   747,   748,   987,  1231,  1232,  1233,
      30,    50,   109,   561,   562,   563,   110,   564,   565,   566,
     567,   568,   569,   570,   571,    31,    58,   449,   450,   451,
     964,   965,   452,   453,    32,    48,   316,   317,   318,   319,
     320,   321,   322,   521,  1044,  1045,  1046,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,    33,    62,   473,
     474,   475,   476,   477,    34,    65,   502,   503,   504,   505,
     506,   773,  1153,  1154,    35,    66,   510,   511,   512,   513,
     778,  1165,  1166,    36,    51,   112,   590,   591,   592,   113,
     593,   594,   595,   596,   597,   598,   599,   841,  1194,  1195,
     600,   601,   602,   603,   604,   605,   606,   607,   608,    37,
      57,   441,   442,   443,   444,    38,    52,   354,   355,   356,
     357,    39,    53,   360,   361,   362,    40,    54,   366,   367,
     368,   369,    41,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     403,   925,   926,   216,   401,   906,   907,   217,   218,   219,
     220,   221,    42,    56,   430,   431,   432,   433,   434,   678,
    1112,  1113,   435,   436,   437,   675,  1106,  1107,    43,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,    44,   262,   263,   264,   265,
     266,   267,   268,   269
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -938
static const short yypact[] =
{
    -938,   705,  -938,  -188,  -216,  -938,  -198,  -938,  -938,  -938,
    -938,  -938,  -184,  -938,  -938,  -938,  -176,  -170,  -938,  -938,
    -155,  -153,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,   293,  -124,   552,
     -15,   -12,  -100,   -92,   -67,   372,   -55,   -41,   -39,   303,
      22,    61,   -21,   754,   359,   -17,   -10,  -938,    -6,    -1,
      14,    18,  -938,  -938,  -938,  -938,   574,  -938,    31,    37,
      45,    49,    50,    56,    57,    58,    62,    65,    66,    67,
      69,    74,   167,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,     2,
    -938,  -938,    19,  -938,    55,    12,   164,  -938,    76,    80,
      87,    89,    93,    95,    99,   101,   102,   103,   108,   110,
     117,   119,   123,   125,   131,   132,   137,   138,   139,   141,
     148,   151,   153,   158,   159,   161,   162,   168,   169,  -938,
     170,  -938,   174,   176,   177,   179,   186,   187,   188,   193,
     194,   197,   202,   207,   208,   216,   217,   218,   222,     8,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,   318,    17,    46,  -938,   224,   225,   228,   231,
     232,   233,   235,   238,    29,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,   240,   245,    24,  -938,  -938,
    -938,  -938,    33,  -938,     9,  -938,   250,   251,   252,   255,
     256,   257,    27,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,   258,   259,   262,   263,   264,   266,   268,   273,   279,
     280,   203,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,    35,     6,   126,   133,   134,    20,  -938,
    -938,   282,   283,   284,  -938,   285,   286,   287,   289,   290,
     292,   296,   298,   300,   301,   306,   166,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,   155,   205,    83,   312,   312,   402,   416,
     247,   363,   365,   366,   373,   378,   379,   320,  -938,   636,
     777,  -938,   326,   329,    54,  -938,  -938,  -938,  -938,   333,
      28,  -938,  -938,  -938,   334,   335,    94,  -938,  -938,  -938,
     385,   312,   393,   312,   448,   432,   451,   398,   401,   403,
     456,   452,   420,   475,   478,   479,   427,   312,   431,   486,
     469,   436,   492,   495,   498,   312,   499,   483,   507,   508,
     443,   400,   457,   405,   312,   312,   458,   505,   462,   470,
     -27,     1,   471,   472,   312,   312,   510,   312,   477,   480,
     481,   423,  -938,  -938,  -938,   424,   428,  -938,   429,   435,
     118,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,   441,
     442,    11,  -938,  -938,  -938,  -938,   447,   449,   450,    32,
    -938,  -938,  -938,  -938,   514,   522,   523,   534,   661,   539,
     542,   511,   455,  -938,   549,   556,   473,  -938,   460,  -938,
     466,   467,   468,    42,  -938,  -938,  -938,  -938,   524,   527,
     528,   531,   536,   312,   491,  -938,   580,   547,   581,   586,
     588,   590,   593,   612,   598,   601,   515,  -938,  -938,   517,
    -938,   518,    43,  -938,  -938,  -938,  -938,  -938,   520,  -938,
      41,  -938,  -938,  -938,   525,   529,   530,  -938,   566,   606,
     576,   533,   592,   600,   605,   608,   609,   626,   655,   629,
     642,   611,   649,   562,  -938,   565,   567,   568,   221,   575,
     577,   583,   584,   585,   589,   591,   597,   602,   607,   610,
    -938,  -938,   573,   578,   603,   615,   616,   617,   618,   619,
     620,   191,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,   624,   633,   637,   638,   644,   646,   650,
     651,   653,  -938,   654,   656,   658,   659,   660,   669,   670,
     192,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,   668,
     674,   613,  -938,   676,   614,  -938,   680,   681,   664,  -938,
     675,   677,   678,   682,   684,   691,   692,   693,   694,   695,
     696,   697,   698,   707,   710,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,   725,   726,
     727,   689,   728,   724,   729,   730,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   741,   742,   330,   743,
     744,   745,   746,   747,  -938,   673,   312,   657,   686,   703,
     812,   748,  -938,   837,   838,   751,  -938,   840,   841,   764,
     755,  -938,   756,   757,   758,   759,   760,   761,   762,   763,
     765,   766,   767,   768,   769,   770,  -938,   771,   772,  -938,
    -938,   773,   774,   775,   776,  -938,   778,   779,   780,   781,
     782,   783,   784,   785,   786,   787,   788,   789,   790,    96,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,   842,
     852,   861,   794,  -938,   795,   796,   797,   798,   799,   800,
    -938,   801,   802,   803,   804,   805,   806,   807,   808,   809,
     810,  -938,   862,   811,   863,   813,  -938,   868,   814,   815,
    -938,  -938,  -938,  -938,   816,   818,   819,   604,   820,   821,
     822,   823,   824,   825,   826,   827,   828,   829,   830,  -938,
    -938,  -938,  -938,   312,   312,   312,   312,   312,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,   312,   917,   918,   937,   938,   921,   940,   312,   510,
     835,  -938,   924,  -104,   889,   926,   927,   892,   893,   894,
     931,   843,   932,   933,   935,   936,   955,   939,   941,   850,
    -938,   854,   855,  -938,   856,  -938,   857,   858,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -217,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -208,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,   510,   510,   510,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,    -9,   859,   860,    -4,   864,   865,  -938,   866,   867,
    -938,   869,   870,   899,  -206,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,   913,   950,   915,   920,   871,   923,   925,
     928,   929,   960,   930,   963,   934,   942,   967,   943,   968,
     944,   881,  -938,   883,   884,   885,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,   886,   377,   887,  -938,   888,   628,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,   647,  -938,  -938,  -171,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,   895,   896,   897,   898,   900,   901,   902,
     903,   904,  -938,   905,   906,   907,   908,   909,   910,   911,
     912,   914,   916,   342,   919,   922,   945,   946,   947,   948,
     949,  -938,  -938,  -938,  -938,  -938,  -938,  -938,   689,  -938,
     724,  -938,  -938,  -938,  -938,  -938,  -166,  -938,  -938,  -938,
    -938,  -938,  -161,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
     995,  -938,   764,   951,   952,   953,   954,   497,   956,   957,
     958,   959,   961,   962,   964,   965,   966,   969,   970,   971,
     972,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -158,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -130,  -938,  -938,  -938,   604,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -123,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,    -9,  -938,    -4,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,   545,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,   -88,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,   377,  -938,
     628,  -938,  -938,   342,  -938,  -938,  -938,  -938,   497,  -938,
    -938,  -938,  -938
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -938,  -938,  -938,  -362,  -336,  -937,  -414,  -938,  -938,   874,
    -938,  -938,  -938,  -938,   551,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  1051,  -938,  -938,
    -938,  -938,  -938,   973,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,   107,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -421,   -96,
    -938,  -938,  -938,  -938,   582,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,   699,  -938,
    -938,    23,  -938,  -938,  -938,  -938,  -938,   833,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,   -28,   105,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
     679,  -938,  -938,  -938,  -938,  -938,  -938,   652,  -938,  -938,
    -938,  -938,  -938,   -97,  -938,  -938,  -938,   643,  -938,  -938,
    -938,  -938,   -95,  -938,  -938,  -938,  -938,   569,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,   -93,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,   750,  -938,  -938,  -938,  -938,  -938,   817,  -938,
    -938,  -938,  -938,  -938,   836,  -938,  -938,  -938,  -938,   791,
    -938,  -938,  -938,  -938,   987,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,    63,  -938,  -938,  -938,    60,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,   753,  -938,  -938,  -938,  -938,
    -938,   -47,  -938,  -938,  -938,  -938,  -938,   -44,  -938,  -938,
    1072,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,   974,  -938,  -938,
    -938,  -938,  -938,  -938
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, parse error.  */
#define YYTABLE_NINF -1
static const unsigned short yytable[] =
{
     539,   540,   669,  1104,  1101,  1102,  1103,   507,  1110,   117,
     469,  1097,   438,   358,    47,  1098,   118,   119,   438,    67,
    1099,   120,  1121,   244,  1100,   244,  1122,   121,   255,   358,
     225,   470,    49,   445,   122,   621,   498,   623,   123,   124,
      45,    46,   507,   469,   498,   125,    55,   445,   126,   127,
     128,   637,   129,    68,    59,   351,   351,  1168,   130,   645,
      60,  1169,  1205,    69,   470,   256,  1206,  1207,   654,   655,
    1247,  1208,   131,   132,  1248,    63,   133,    64,   666,   667,
     257,   670,   134,   226,   227,   228,   135,   136,  1074,  1075,
     137,   229,   359,   138,   139,   363,   258,   710,  1249,   259,
     260,   711,  1250,   140,   141,  1252,    76,   446,   359,  1253,
     142,   143,   447,   144,   145,   146,   147,   508,   261,   423,
     712,   446,   424,   230,   471,   108,   447,   148,   111,    70,
     114,   245,   713,   245,   352,   352,   149,   150,   115,   151,
    1257,   152,   153,   714,  1258,   154,   499,   759,   715,   660,
     661,   472,   508,   439,   499,   716,   231,   471,   246,   439,
     246,   425,   717,   116,   426,   363,   718,   300,    77,  1105,
     155,   448,   156,   509,  1111,   222,   157,   662,   663,   719,
     158,   159,   160,   161,   472,   448,   301,   162,   163,   223,
     302,   224,   551,   572,   164,   573,   353,   353,   574,    78,
      79,   251,   500,   575,   270,   364,    80,   720,   509,   254,
     500,   427,   721,   293,   303,   576,   577,   578,   304,   552,
     294,   579,   165,   166,   232,   295,   167,   305,   440,   428,
     296,   722,   349,   306,   440,   168,   365,   421,   271,   580,
     685,   723,   724,   581,   582,   297,   725,   298,   517,   350,
     307,   233,   501,   466,    81,    82,   484,   614,   462,   537,
     501,   690,   333,   468,    83,    84,   514,   583,   334,   584,
     779,   752,   775,   515,   516,   364,   335,   535,   308,   272,
     336,   337,   585,   611,    85,    86,   309,   338,   339,   340,
     553,   554,   555,   341,    67,   556,   342,   343,   344,    87,
     345,   310,   557,   586,   225,   346,   365,   370,    88,   311,
     312,   371,   726,   727,   273,   558,   274,   275,   372,   423,
     373,   728,   424,   618,   374,  1001,   375,   536,    68,   559,
     376,   587,   377,   378,   379,   429,   313,   314,    69,   380,
     952,   381,   588,   538,   941,   942,   943,   681,   382,   560,
     383,   589,   276,  1189,   384,  1190,   385,   226,   227,   228,
     270,   425,   386,   387,   426,   229,   277,  1191,   388,   389,
     390,  1192,   391,   117,   803,   804,   805,   806,   807,   392,
     118,   119,   393,   315,   394,   120,    89,    90,    91,   395,
     396,   121,   397,   398,   271,   533,   347,   230,   122,   399,
     400,   402,   123,   124,    70,   404,   278,   405,   406,   125,
     407,   427,   126,   127,   128,  1071,   129,   408,   409,   410,
     830,   849,   130,   543,   411,   412,   279,   280,   413,   428,
     231,  1193,   496,   414,   538,   272,   131,   132,   415,   416,
     133,  1058,  1059,  1060,  1061,  1062,   134,   417,   418,   419,
     135,   136,   668,   420,   137,   454,   455,   138,   139,   456,
    1146,   710,   457,   458,   459,   711,   460,   140,   141,   461,
     273,   464,   274,   275,   142,   143,   465,   144,   145,   146,
     147,   478,   479,   480,   712,  1063,   481,   482,   483,   486,
     487,   148,  1070,   488,   489,   490,   713,   491,   232,   492,
     149,   150,  1215,   151,   493,   152,   153,   714,   276,   154,
     494,   495,   715,   518,   519,   520,   522,   523,   524,   716,
     525,   526,   277,   527,   541,   233,   717,   528,  1147,   529,
     718,   530,   531,  1216,   155,   429,   156,   532,   542,   544,
     157,   545,   546,   719,   158,   159,   160,   161,   550,   547,
    1215,   162,   163,    77,   548,   549,  1217,   609,   164,  1148,
     610,   620,   278,  1218,   613,   616,   617,  1219,  1220,   622,
     624,   720,   625,   626,   627,   300,   721,   628,   630,   629,
    1221,  1216,   279,   280,    78,    79,   165,   166,  1149,  1150,
     167,    80,   631,  1151,   301,   722,   632,   633,   302,   168,
     634,   635,  1152,   636,  1217,   723,   724,   638,   639,   640,
     725,  1218,   641,  1222,   642,  1219,  1220,   643,  1223,   650,
     644,   646,   303,   647,  1033,  1034,   304,  1224,  1221,   648,
     649,   651,   668,   652,   656,   305,   653,   551,   658,    81,
      82,   306,  1225,  1226,  1227,   657,   659,   664,   665,    83,
      84,   674,  1035,   671,   692,   676,   672,   673,   307,   677,
     679,  1222,   693,   694,   552,  1036,   680,  1033,  1034,    85,
      86,  1037,   683,   684,   695,  1224,   726,   727,   687,   703,
     688,   689,   704,   706,    87,   728,   308,   705,  1038,   707,
    1225,  1226,  1227,    88,   309,  1035,   708,   749,   750,   751,
     754,   709,  1228,   755,   756,     2,     3,   757,  1036,   310,
       4,  1157,   758,  1229,  1037,     5,  1039,   311,   312,   760,
     761,   763,  1230,   762,  1040,  1041,   764,     6,   765,     7,
     766,  1038,     8,   767,   768,   553,   554,   555,   769,     9,
     556,   770,   784,   771,   313,   314,   785,   557,   772,   774,
    1228,   777,   786,   781,    10,   255,  1042,   782,   783,  1039,
     558,  1229,    11,    12,   787,    13,   793,  1040,   788,   795,
    1230,    89,    90,    91,   559,  1043,   789,   794,   572,  1158,
     573,   790,   796,   574,   791,   792,    14,   797,   575,   798,
     799,   315,   256,   800,   560,   801,   802,    15,    16,  1042,
     576,   577,   578,   810,   821,   811,   579,   257,   851,   822,
    1159,   812,   813,   814,   852,    17,   854,   815,  1043,   816,
     856,   857,  1160,   258,   580,   817,   259,   260,   581,   582,
     818,    18,   497,   953,   823,   819,  1002,  1262,   820,  1161,
    1162,   853,   855,   955,  1163,   261,   824,   825,   826,   827,
     828,   829,   583,  1164,   584,   832,    19,   696,   697,   698,
     699,   700,   701,   702,   833,    20,    21,   585,   834,   835,
      22,    23,   890,   891,   892,   836,   893,   837,   894,   895,
     896,   838,   839,   897,   840,   842,   963,   843,   586,   844,
     845,   846,   858,   898,   899,   900,   901,   902,   903,   904,
     847,   848,   905,   859,   951,   860,   861,   909,   910,   911,
     862,   912,   863,   913,   914,   915,   587,   954,   916,   864,
     865,   866,   867,   868,   869,   870,   871,   588,   917,   918,
     919,   920,   921,   922,   923,   872,   589,   924,   873,   874,
     875,   876,   877,   878,   879,   880,   881,   882,   883,   884,
     885,   886,   956,   887,   888,   889,   908,   927,   928,   929,
     930,   931,   932,   933,   934,   935,   936,   937,   938,   939,
     940,   946,   947,   948,   949,   950,   957,   958,   959,   960,
     961,   962,  1003,   966,   967,   968,   969,   970,   971,   972,
     973,   974,  1004,   975,   976,   977,   978,   979,   980,   981,
     982,  1005,  1023,  1025,   983,   984,   985,   986,  1027,   988,
     989,   990,   991,   992,   993,   994,   995,   996,   997,   998,
     999,  1000,  1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,
    1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1064,
    1065,  1026,  1024,  1029,  1030,  1028,  1031,  1032,  1047,  1048,
    1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,  1057,  1066,
    1067,  1068,  1069,  1072,  1073,  1076,  1077,  1078,  1079,  1080,
    1081,  1082,  1084,  1085,  1083,  1086,  1087,  1088,  1091,  1089,
    1120,  1090,  1092,  1093,  1094,  1095,  1096,  1108,  1109,  1123,
    1124,  1125,  1114,  1115,  1116,  1117,  1126,  1118,  1119,  1128,
    1132,  1129,  1127,  1134,  1130,  1131,  1133,  1137,  1139,  1141,
    1135,  1142,  1143,  1144,  1145,  1155,  1156,  1209,  1136,  1138,
    1140,   467,   299,  1170,  1171,  1172,  1173,  1256,  1174,  1175,
    1176,  1177,  1178,  1179,  1180,  1181,  1182,  1183,  1184,  1185,
    1186,  1251,  1187,   831,  1188,  1210,  1167,  1196,   691,   534,
    1197,  1259,   753,   780,   776,  1260,   422,   619,  1203,   850,
    1261,  1255,  1254,  1204,   348,     0,     0,     0,     0,     0,
       0,   612,     0,  1198,  1199,  1200,  1201,  1202,     0,  1211,
    1212,  1213,  1214,   682,  1234,  1235,  1236,  1237,     0,  1238,
    1239,   686,  1240,  1241,  1242,     0,   615,  1243,  1244,  1245,
    1246,     0,     0,     0,     0,     0,     0,   463,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   485
};

static const short yycheck[] =
{
     336,   337,   416,    12,   941,   942,   943,     1,    12,     1,
       1,   228,     1,     1,   230,   232,     8,     9,     1,     1,
     228,    13,   228,     1,   232,     1,   232,    19,     1,     1,
       1,    22,   230,     1,    26,   371,     1,   373,    30,    31,
     228,   229,     1,     1,     1,    37,   230,     1,    40,    41,
      42,   387,    44,    35,   230,     1,     1,   228,    50,   395,
     230,   232,   228,    45,    22,    38,   232,   228,   404,   405,
     228,   232,    64,    65,   232,   230,    68,   230,   414,   415,
      53,   417,    74,    54,    55,    56,    78,    79,   192,   193,
      82,    62,    80,    85,    86,     1,    69,     1,   228,    72,
      73,     5,   232,    95,    96,   228,   230,    75,    80,   232,
     102,   103,    80,   105,   106,   107,   108,   111,    91,     1,
      24,    75,     4,    94,   115,   140,    80,   119,   140,   111,
     230,   109,    36,   109,    80,    80,   128,   129,   230,   131,
     228,   133,   134,    47,   232,   137,   111,   483,    52,   176,
     177,   142,   111,   142,   111,    59,   127,   115,   136,   142,
     136,    43,    66,   230,    46,     1,    70,     1,     1,   178,
     162,   139,   164,   167,   178,   230,   168,   176,   177,    83,
     172,   173,   174,   175,   142,   139,    20,   179,   180,   230,
      24,   230,     1,     1,   186,     3,   142,   142,     6,    32,
      33,   140,   167,    11,     1,   111,    39,   111,   167,   230,
     167,    93,   116,   230,    48,    23,    24,    25,    52,    28,
     230,    29,   214,   215,   195,   231,   218,    61,   217,   111,
     231,   135,   230,    67,   217,   227,   142,   229,    35,    47,
     229,   145,   146,    51,    52,   231,   150,   229,   228,   230,
      84,   222,   217,   229,    87,    88,   229,   229,   229,   176,
     217,   229,   231,   230,    97,    98,   140,    75,   231,    77,
     229,   229,   229,   140,   140,   111,   231,   122,   112,    76,
     231,   231,    90,   229,   117,   118,   120,   231,   231,   231,
      99,   100,   101,   231,     1,   104,   231,   231,   231,   132,
     231,   135,   111,   111,     1,   231,   142,   231,   141,   143,
     144,   231,   216,   217,   111,   124,   113,   114,   231,     1,
     231,   225,     4,   229,   231,   229,   231,   122,    35,   138,
     231,   139,   231,   231,   231,   217,   170,   171,    45,   231,
     676,   231,   150,   122,    14,    15,    16,   229,   231,   158,
     231,   159,   149,    11,   231,    13,   231,    54,    55,    56,
       1,    43,   231,   231,    46,    62,   163,    25,   231,   231,
     231,    29,   231,     1,   153,   154,   155,   156,   157,   231,
       8,     9,   231,   217,   231,    13,   219,   220,   221,   231,
     231,    19,   231,   231,    35,   229,   229,    94,    26,   231,
     231,   231,    30,    31,   111,   231,   203,   231,   231,    37,
     231,    93,    40,    41,    42,   829,    44,   231,   231,   231,
     229,   229,    50,   176,   231,   231,   223,   224,   231,   111,
     127,    89,   229,   231,   122,    76,    64,    65,   231,   231,
      68,   803,   804,   805,   806,   807,    74,   231,   231,   231,
      78,    79,   122,   231,    82,   231,   231,    85,    86,   231,
      83,     1,   231,   231,   231,     5,   231,    95,    96,   231,
     111,   231,   113,   114,   102,   103,   231,   105,   106,   107,
     108,   231,   231,   231,    24,   821,   231,   231,   231,   231,
     231,   119,   828,   231,   231,   231,    36,   231,   195,   231,
     128,   129,     5,   131,   231,   133,   134,    47,   149,   137,
     231,   231,    52,   231,   231,   231,   231,   231,   231,    59,
     231,   231,   163,   231,   122,   222,    66,   231,   151,   231,
      70,   231,   231,    36,   162,   217,   164,   231,   122,   176,
     168,   176,   176,    83,   172,   173,   174,   175,   228,   176,
       5,   179,   180,     1,   176,   176,    59,   231,   186,   182,
     231,   176,   203,    66,   231,   231,   231,    70,    71,   176,
     122,   111,   140,   122,   176,     1,   116,   176,   122,   176,
      83,    36,   223,   224,    32,    33,   214,   215,   211,   212,
     218,    39,   140,   216,    20,   135,   176,   122,    24,   227,
     122,   122,   225,   176,    59,   145,   146,   176,   122,   140,
     150,    66,   176,   116,   122,    70,    71,   122,   121,   176,
     122,   122,    48,   140,    20,    21,    52,   130,    83,   122,
     122,   231,   122,   176,   176,    61,   231,     1,   176,    87,
      88,    67,   145,   146,   147,   140,   176,   176,   176,    97,
      98,   228,    48,   176,   140,   231,   176,   176,    84,   231,
     231,   116,   140,   140,    28,    61,   231,    20,    21,   117,
     118,    67,   231,   231,   140,   130,   216,   217,   231,   140,
     231,   231,   140,   228,   132,   225,   112,   176,    84,   140,
     145,   146,   147,   141,   120,    48,   140,   231,   231,   231,
     176,   228,   205,   176,   176,     0,     1,   176,    61,   135,
       5,    83,   176,   216,    67,    10,   112,   143,   144,   228,
     140,   140,   225,   176,   120,   121,   140,    22,   140,    24,
     140,    84,    27,   140,   122,    99,   100,   101,   140,    34,
     104,   140,   176,   228,   170,   171,   140,   111,   231,   231,
     205,   231,   176,   228,    49,     1,   152,   228,   228,   112,
     124,   216,    57,    58,   231,    60,   140,   120,   176,   140,
     225,   219,   220,   221,   138,   171,   176,   122,     1,   151,
       3,   176,   140,     6,   176,   176,    81,   176,    11,   140,
     228,   217,    38,   228,   158,   228,   228,    92,    93,   152,
      23,    24,    25,   228,   231,   228,    29,    53,   140,   231,
     182,   228,   228,   228,   140,   110,   140,   228,   171,   228,
     140,   140,   194,    69,    47,   228,    72,    73,    51,    52,
     228,   126,   281,   176,   231,   228,   729,  1258,   228,   211,
     212,   228,   228,   140,   216,    91,   231,   231,   231,   231,
     231,   231,    75,   225,    77,   231,   151,   196,   197,   198,
     199,   200,   201,   202,   231,   160,   161,    90,   231,   231,
     165,   166,   183,   184,   185,   231,   187,   231,   189,   190,
     191,   231,   231,   194,   231,   231,   122,   231,   111,   231,
     231,   231,   228,   204,   205,   206,   207,   208,   209,   210,
     231,   231,   213,   228,   231,   228,   228,   183,   184,   185,
     228,   187,   228,   189,   190,   191,   139,   231,   194,   228,
     228,   228,   228,   228,   228,   228,   228,   150,   204,   205,
     206,   207,   208,   209,   210,   228,   159,   213,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   140,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   140,   140,   228,
     140,   140,   140,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   140,   228,   228,   228,   228,   228,   228,   228,
     228,   140,   140,   140,   231,   231,   231,   231,   140,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   122,
     122,   228,   231,   228,   228,   231,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   122,
     122,   140,   122,   228,   140,   176,   140,   140,   176,   176,
     176,   140,   140,   140,   231,   140,   140,   122,   228,   140,
     181,   140,   228,   228,   228,   228,   228,   228,   228,   176,
     140,   176,   228,   228,   228,   228,   176,   228,   228,   176,
     140,   176,   231,   140,   176,   176,   176,   140,   140,   228,
     176,   228,   228,   228,   228,   228,   228,   122,   176,   176,
     176,   247,    71,   228,   228,   228,   228,  1223,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,  1169,   228,   561,   228,  1122,  1041,   228,   449,   316,
     228,  1248,   473,   510,   502,  1250,   169,   366,  1098,   590,
    1253,  1208,  1206,  1100,    92,    -1,    -1,    -1,    -1,    -1,
      -1,   354,    -1,   228,   228,   228,   228,   228,    -1,   228,
     228,   228,   228,   430,   228,   228,   228,   228,    -1,   228,
     228,   441,   228,   228,   228,    -1,   360,   228,   228,   228,
     228,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   262
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,   234,     0,     1,     5,    10,    22,    24,    27,    34,
      49,    57,    58,    60,    81,    92,    93,   110,   126,   151,
     160,   161,   165,   166,   235,   240,   245,   258,   264,   275,
     303,   318,   327,   350,   357,   367,   376,   402,   408,   414,
     419,   425,   485,   501,   518,   228,   229,   230,   328,   230,
     304,   377,   409,   415,   420,   230,   486,   403,   319,   230,
     230,   276,   351,   230,   230,   358,   368,     1,    35,    45,
     111,   259,   260,   261,   262,   263,   230,     1,    32,    33,
      39,    87,    88,    97,    98,   117,   118,   132,   141,   219,
     220,   221,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   140,   305,
     309,   140,   378,   382,   230,   230,   230,     1,     8,     9,
      13,    19,    26,    30,    31,    37,    40,    41,    42,    44,
      50,    64,    65,    68,    74,    78,    79,    82,    85,    86,
      95,    96,   102,   103,   105,   106,   107,   108,   119,   128,
     129,   131,   133,   134,   137,   162,   164,   168,   172,   173,
     174,   175,   179,   180,   186,   214,   215,   218,   227,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,   476,   480,   481,   482,
     483,   484,   230,   230,   230,     1,    54,    55,    56,    62,
      94,   127,   195,   222,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,     1,   109,   136,   241,   242,   243,
     244,   140,   277,   281,   230,     1,    38,    53,    69,    72,
      73,    91,   519,   520,   521,   522,   523,   524,   525,   526,
       1,    35,    76,   111,   113,   114,   149,   163,   203,   223,
     224,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   230,   230,   231,   231,   231,   229,   260,
       1,    20,    24,    48,    52,    61,    67,    84,   112,   120,
     135,   143,   144,   170,   171,   217,   329,   330,   331,   332,
     333,   334,   335,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   229,   503,   230,
     230,     1,    80,   142,   410,   411,   412,   413,     1,    80,
     416,   417,   418,     1,   111,   142,   421,   422,   423,   424,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   477,   231,   473,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   229,   427,     1,     4,    43,    46,    93,   111,   217,
     487,   488,   489,   490,   491,   495,   496,   497,     1,   142,
     217,   404,   405,   406,   407,     1,    75,    80,   139,   320,
     321,   322,   325,   326,   231,   231,   231,   231,   231,   231,
     231,   231,   229,   266,   231,   231,   229,   242,   230,     1,
      22,   115,   142,   352,   353,   354,   355,   356,   231,   231,
     231,   231,   231,   231,   229,   520,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   229,   247,     1,   111,
     167,   217,   359,   360,   361,   362,   363,     1,   111,   167,
     369,   370,   371,   372,   140,   140,   140,   228,   231,   231,
     231,   336,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   229,   330,   122,   122,   176,   122,   237,
     237,   122,   122,   176,   176,   176,   176,   176,   176,   176,
     228,     1,    28,    99,   100,   101,   104,   111,   124,   138,
     158,   306,   307,   308,   310,   311,   312,   313,   314,   315,
     316,   317,     1,     3,     6,    11,    23,    24,    25,    29,
      47,    51,    52,    75,    77,    90,   111,   139,   150,   159,
     379,   380,   381,   383,   384,   385,   386,   387,   388,   389,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   231,
     231,   229,   411,   231,   229,   417,   231,   231,   229,   422,
     176,   237,   176,   237,   122,   140,   122,   176,   176,   176,
     122,   140,   176,   122,   122,   122,   176,   237,   176,   122,
     140,   176,   122,   122,   122,   237,   122,   140,   122,   122,
     176,   231,   176,   231,   237,   237,   176,   140,   176,   176,
     176,   177,   176,   177,   176,   176,   237,   237,   122,   239,
     237,   176,   176,   176,   228,   498,   231,   231,   492,   231,
     231,   229,   488,   231,   231,   229,   405,   231,   231,   231,
     229,   321,   140,   140,   140,   140,   196,   197,   198,   199,
     200,   201,   202,   140,   140,   176,   228,   140,   140,   228,
       1,     5,    24,    36,    47,    52,    59,    66,    70,    83,
     111,   116,   135,   145,   146,   150,   216,   217,   225,   278,
     279,   280,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   231,
     231,   231,   229,   353,   176,   176,   176,   176,   176,   237,
     228,   140,   176,   140,   140,   140,   140,   140,   122,   140,
     140,   228,   231,   364,   231,   229,   360,   231,   373,   229,
     370,   228,   228,   228,   176,   140,   176,   231,   176,   176,
     176,   176,   176,   140,   122,   140,   140,   176,   140,   228,
     228,   228,   228,   153,   154,   155,   156,   157,   236,   237,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     229,   307,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   390,   231,   231,   231,   231,   231,   231,   231,   229,
     380,   140,   140,   228,   140,   228,   140,   140,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     183,   184,   185,   187,   189,   190,   191,   194,   204,   205,
     206,   207,   208,   209,   210,   213,   478,   479,   228,   183,
     184,   185,   187,   189,   190,   191,   194,   204,   205,   206,
     207,   208,   209,   210,   213,   474,   475,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,    14,    15,    16,   238,   239,   228,   228,   228,   228,
     228,   231,   237,   176,   231,   140,   140,   228,   140,   140,
     228,   140,   140,   122,   323,   324,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   231,   231,   231,   231,   299,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   229,   279,   140,   140,   140,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   140,   231,   140,   228,   140,   231,   228,
     228,   228,   228,    20,    21,    48,    61,    67,    84,   112,
     120,   121,   152,   171,   337,   338,   339,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   236,   236,
     236,   236,   236,   237,   122,   122,   122,   122,   140,   122,
     237,   239,   228,   140,   192,   193,   176,   140,   140,   176,
     176,   176,   140,   231,   140,   140,   140,   140,   122,   140,
     140,   228,   228,   228,   228,   228,   228,   228,   232,   228,
     232,   238,   238,   238,    12,   178,   499,   500,   228,   228,
      12,   178,   493,   494,   228,   228,   228,   228,   228,   228,
     181,   228,   232,   176,   140,   176,   176,   231,   176,   176,
     176,   176,   140,   176,   140,   176,   176,   140,   176,   140,
     176,   228,   228,   228,   228,   228,    83,   151,   182,   211,
     212,   216,   225,   365,   366,   228,   228,    83,   151,   182,
     194,   211,   212,   216,   225,   374,   375,   339,   228,   232,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,    11,
      13,    25,    29,    89,   391,   392,   228,   228,   228,   228,
     228,   228,   228,   479,   475,   228,   232,   228,   232,   122,
     324,   228,   228,   228,   228,     5,    36,    59,    66,    70,
      71,    83,   116,   121,   130,   145,   146,   147,   205,   216,
     225,   300,   301,   302,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   232,   228,
     232,   338,   228,   232,   500,   494,   302,   228,   232,   366,
     375,   392,   301
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
#define YYEMPTY		-2
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1

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
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");			\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)           \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#define YYLEX	yylex ()

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
/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
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
/*-----------------------------.
| Print this symbol on YYOUT.  |
`-----------------------------*/

static void
#if defined (__STDC__) || defined (__cplusplus)
yysymprint (FILE* yyout, int yytype, YYSTYPE yyvalue)
#else
yysymprint (yyout, yytype, yyvalue)
    FILE* yyout;
    int yytype;
    YYSTYPE yyvalue;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvalue;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyout, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyout, yytoknum[yytype], yyvalue);
# endif
    }
  else
    YYFPRINTF (yyout, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyout, ")");
}
#endif /* YYDEBUG. */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
#if defined (__STDC__) || defined (__cplusplus)
yydestruct (int yytype, YYSTYPE yyvalue)
#else
yydestruct (yytype, yyvalue)
    int yytype;
    YYSTYPE yyvalue;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvalue;

  switch (yytype)
    {
      default:
        break;
    }
}



/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
#  define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL
# else
#  define YYPARSE_PARAM_ARG YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
# endif
#else /* !YYPARSE_PARAM */
# define YYPARSE_PARAM_ARG
# define YYPARSE_PARAM_DECL
#endif /* !YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
# ifdef YYPARSE_PARAM
int yyparse (void *);
# else
int yyparse (void);
# endif
#endif


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of parse errors so far.  */
int yynerrs;


int
yyparse (YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yychar1 = 0;

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

  if (yyssp >= yyss + yystacksize - 1)
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
      if (yystacksize >= YYMAXDEPTH)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
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

      if (yyssp >= yyss + yystacksize - 1)
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

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with.  */

  if (yychar <= 0)		/* This means end of input.  */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more.  */

      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yychar1 = YYTRANSLATE (yychar);

      /* We have to keep this `#if YYDEBUG', since we use variables
	 which are defined only if `YYDEBUG' is set.  */
      YYDPRINTF ((stderr, "Next token is "));
      YYDSYMPRINT ((stderr, yychar1, yylval));
      YYDPRINTF ((stderr, "\n"));
    }

  /* If the proper action on seeing token YYCHAR1 is to reduce or to
     detect an error, take that action.  */
  yyn += yychar1;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yychar1)
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
  YYDPRINTF ((stderr, "Shifting token %d (%s), ",
	      yychar, yytname[yychar1]));

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



#if YYDEBUG
  /* We have to keep this `#if YYDEBUG', since we use variables which
     are defined only if `YYDEBUG' is set.  */
  if (yydebug)
    {
      int yyi;

      YYFPRINTF (stderr, "Reducing via rule %d (line %d), ",
		 yyn - 1, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (yyi = yyprhs[yyn]; yyrhs[yyi] >= 0; yyi++)
	YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
      YYFPRINTF (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif
  switch (yyn)
    {
        case 26:
#line 388 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 28:
#line 390 "ircd_parser.y"
    {
			yyval.number = yyvsp[-1].number + yyvsp[0].number;
		}
    break;

  case 29:
#line 394 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number + yyvsp[0].number;
		}
    break;

  case 30:
#line 398 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 + yyvsp[0].number;
		}
    break;

  case 31:
#line 402 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 + yyvsp[0].number;
		}
    break;

  case 32:
#line 406 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 + yyvsp[0].number;
		}
    break;

  case 33:
#line 410 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 * 7 + yyvsp[0].number;
		}
    break;

  case 34:
#line 415 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 36:
#line 416 "ircd_parser.y"
    { yyval.number = yyvsp[-1].number + yyvsp[0].number; }
    break;

  case 37:
#line 417 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number + yyvsp[0].number; }
    break;

  case 38:
#line 418 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 + yyvsp[0].number; }
    break;

  case 39:
#line 419 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 * 1024 + yyvsp[0].number; }
    break;

  case 46:
#line 433 "ircd_parser.y"
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
#line 452 "ircd_parser.y"
    {
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
}
    break;

  case 62:
#line 476 "ircd_parser.y"
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
#line 531 "ircd_parser.y"
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
#line 545 "ircd_parser.y"
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
#line 563 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.description);
    DupString(ServerInfo.description,yylval.string);
  }
}
    break;

  case 66:
#line 572 "ircd_parser.y"
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
#line 586 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.network_desc);
    DupString(ServerInfo.network_desc, yylval.string);
  }
}
    break;

  case 68:
#line 595 "ircd_parser.y"
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
#line 623 "ircd_parser.y"
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
#line 653 "ircd_parser.y"
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
#line 669 "ircd_parser.y"
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
#line 725 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.name);
    DupString(AdminInfo.name, yylval.string);
  }
}
    break;

  case 80:
#line 734 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.email);
    DupString(AdminInfo.email, yylval.string);
  }
}
    break;

  case 81:
#line 743 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.description);
    DupString(AdminInfo.description, yylval.string);
  }
}
    break;

  case 94:
#line 766 "ircd_parser.y"
    {
                        }
    break;

  case 95:
#line 770 "ircd_parser.y"
    {
                        }
    break;

  case 96:
#line 774 "ircd_parser.y"
    {
                        }
    break;

  case 97:
#line 778 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
}
    break;

  case 98:
#line 785 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
}
    break;

  case 99:
#line 792 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
}
    break;

  case 100:
#line 799 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
}
    break;

  case 101:
#line 803 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
}
    break;

  case 102:
#line 807 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
}
    break;

  case 103:
#line 811 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
}
    break;

  case 104:
#line 815 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
}
    break;

  case 105:
#line 819 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
}
    break;

  case 106:
#line 823 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
}
    break;

  case 107:
#line 829 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 108:
#line 838 "ircd_parser.y"
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
#line 850 "ircd_parser.y"
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
#line 941 "ircd_parser.y"
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
#line 953 "ircd_parser.y"
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
#line 965 "ircd_parser.y"
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
#line 988 "ircd_parser.y"
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
#line 1000 "ircd_parser.y"
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
#line 1011 "ircd_parser.y"
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
#line 1022 "ircd_parser.y"
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
#line 1064 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 141:
#line 1073 "ircd_parser.y"
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
#line 1084 "ircd_parser.y"
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
#line 1095 "ircd_parser.y"
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
#line 1106 "ircd_parser.y"
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
#line 1117 "ircd_parser.y"
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
#line 1128 "ircd_parser.y"
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
#line 1139 "ircd_parser.y"
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
#line 1150 "ircd_parser.y"
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
#line 1161 "ircd_parser.y"
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
#line 1172 "ircd_parser.y"
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
#line 1183 "ircd_parser.y"
    {
}
    break;

  case 155:
#line 1187 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 156:
#line 1188 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 157:
#line 1191 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 158:
#line 1198 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 159:
#line 1205 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 160:
#line 1212 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 161:
#line 1219 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 162:
#line 1226 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 163:
#line 1233 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 164:
#line 1240 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 165:
#line 1247 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 166:
#line 1254 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 167:
#line 1261 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 168:
#line 1268 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 169:
#line 1275 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 170:
#line 1282 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 171:
#line 1289 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 172:
#line 1302 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = (struct ClassItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 173:
#line 1309 "ircd_parser.y"
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
#line 1336 "ircd_parser.y"
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
#line 1382 "ircd_parser.y"
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
#line 1428 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 191:
#line 1434 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = yyvsp[-1].number;
}
    break;

  case 192:
#line 1440 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 193:
#line 1446 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = yyvsp[-1].number;
}
    break;

  case 194:
#line 1452 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = yyvsp[-1].number;
}
    break;

  case 195:
#line 1458 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = yyvsp[-1].number;
}
    break;

  case 196:
#line 1464 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = yyvsp[-1].number;
}
    break;

  case 197:
#line 1470 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = yyvsp[-1].number;
}
    break;

  case 198:
#line 1479 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_address = NULL;
}
    break;

  case 199:
#line 1483 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 209:
#line 1499 "ircd_parser.y"
    {
  if (ypass == 2)
    add_listener(yyvsp[0].number, listener_address);
}
    break;

  case 210:
#line 1503 "ircd_parser.y"
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
#line 1516 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 212:
#line 1525 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 213:
#line 1537 "ircd_parser.y"
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
#line 1549 "ircd_parser.y"
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
#line 1619 "ircd_parser.y"
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
#line 1648 "ircd_parser.y"
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
#line 1661 "ircd_parser.y"
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
#line 1672 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 237:
#line 1681 "ircd_parser.y"
    {
}
    break;

  case 241:
#line 1685 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 242:
#line 1686 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 243:
#line 1689 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 244:
#line 1697 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 245:
#line 1704 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 246:
#line 1711 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 247:
#line 1718 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 248:
#line 1725 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 249:
#line 1732 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 250:
#line 1739 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 251:
#line 1746 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 252:
#line 1753 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 253:
#line 1762 "ircd_parser.y"
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
#line 1773 "ircd_parser.y"
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
#line 1784 "ircd_parser.y"
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
#line 1795 "ircd_parser.y"
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
#line 1806 "ircd_parser.y"
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
#line 1817 "ircd_parser.y"
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
#line 1829 "ircd_parser.y"
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
#line 1848 "ircd_parser.y"
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
#line 1858 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = yyvsp[-1].number;
  }
}
    break;

  case 262:
#line 1867 "ircd_parser.y"
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
#line 1882 "ircd_parser.y"
    {
  if (ypass == 2)
    resv_reason = NULL;
}
    break;

  case 264:
#line 1886 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 271:
#line 1898 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 272:
#line 1907 "ircd_parser.y"
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
#line 1922 "ircd_parser.y"
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
#line 1940 "ircd_parser.y"
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
#line 1948 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 282:
#line 1959 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 283:
#line 1968 "ircd_parser.y"
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
#line 1983 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 288:
#line 1990 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 289:
#line 1994 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 290:
#line 1998 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 291:
#line 2002 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 292:
#line 2006 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 293:
#line 2010 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 294:
#line 2014 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 295:
#line 2023 "ircd_parser.y"
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
#line 2031 "ircd_parser.y"
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
#line 2048 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 303:
#line 2054 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 307:
#line 2061 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_KLINE;
}
    break;

  case 308:
#line 2065 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNKLINE;
}
    break;

  case 309:
#line 2069 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_XLINE;
}
    break;

  case 310:
#line 2073 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNXLINE;
}
    break;

  case 311:
#line 2077 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_RESV;
}
    break;

  case 312:
#line 2081 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNRESV;
}
    break;

  case 313:
#line 2085 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_LOCOPS;
}
    break;

  case 314:
#line 2089 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = CLUSTER_ALL;
}
    break;

  case 315:
#line 2098 "ircd_parser.y"
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
#line 2116 "ircd_parser.y"
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
#line 2258 "ircd_parser.y"
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
#line 2270 "ircd_parser.y"
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
#line 2282 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 342:
#line 2291 "ircd_parser.y"
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
#line 2303 "ircd_parser.y"
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
#line 2315 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = yyvsp[-1].number;
}
    break;

  case 345:
#line 2321 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 346:
#line 2325 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 347:
#line 2333 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 348:
#line 2342 "ircd_parser.y"
    {
}
    break;

  case 352:
#line 2347 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_LAZY_LINK;
}
    break;

  case 353:
#line 2351 "ircd_parser.y"
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
#line 2359 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_CRYPTLINK;
}
    break;

  case 355:
#line 2363 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_ALLOW_AUTO_CONN;
}
    break;

  case 356:
#line 2367 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_BURST_AWAY;
}
    break;

  case 357:
#line 2373 "ircd_parser.y"
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
#line 2414 "ircd_parser.y"
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
#line 2425 "ircd_parser.y"
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
#line 2436 "ircd_parser.y"
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
#line 2451 "ircd_parser.y"
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
#line 2462 "ircd_parser.y"
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
#line 2475 "ircd_parser.y"
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
#line 2488 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 365:
#line 2497 "ircd_parser.y"
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
#line 2532 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(KLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 367:
#line 2539 "ircd_parser.y"
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
#line 2558 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    DupString(yy_aconf->host, yylval.string);
    split_user_host(yy_aconf->host, &yy_aconf->user, &yy_aconf->host);
  }
}
    break;

  case 374:
#line 2567 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 375:
#line 2579 "ircd_parser.y"
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
#line 2588 "ircd_parser.y"
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
#line 2604 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 383:
#line 2613 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 384:
#line 2625 "ircd_parser.y"
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
#line 2633 "ircd_parser.y"
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
#line 2649 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 391:
#line 2661 "ircd_parser.y"
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
#line 2670 "ircd_parser.y"
    {
  /* XXX */
}
    break;

  case 398:
#line 2678 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    DupString(yy_conf->name, yylval.string);
    collapse(yy_conf->name);
  }
}
    break;

  case 399:
#line 2687 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_match_item->reason);
    DupString(yy_match_item->reason, yylval.string);
  }
}
    break;

  case 455:
#line 2735 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr = yyvsp[-1].number;
}
    break;

  case 456:
#line 2741 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr6 = yyvsp[-1].number;
}
    break;

  case 457:
#line 2747 "ircd_parser.y"
    {
  if (ypass == 1) /* must be set in the 1st pass */
    ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 458:
#line 2753 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 459:
#line 2758 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kill_chase_time_limit = yyvsp[-1].number;
}
    break;

  case 460:
#line 2764 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 461:
#line 2770 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 462:
#line 2776 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 463:
#line 2782 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 464:
#line 2788 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 465:
#line 2794 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_time = yyvsp[-1].number; 
}
    break;

  case 466:
#line 2800 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_changes = yyvsp[-1].number;
}
    break;

  case 467:
#line 2806 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_accept = yyvsp[-1].number;
}
    break;

  case 468:
#line 2812 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_spam_exit_message_time = yyvsp[-1].number;
}
    break;

  case 469:
#line 2818 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_warn_delta = yyvsp[-1].number;
}
    break;

  case 470:
#line 2824 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = yyvsp[-1].number;
}
    break;

  case 471:
#line 2830 "ircd_parser.y"
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
#line 2841 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 473:
#line 2847 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 474:
#line 2856 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 475:
#line 2862 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 476:
#line 2868 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 477:
#line 2874 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 478:
#line 2878 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 479:
#line 2884 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 480:
#line 2888 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 481:
#line 2894 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait = yyvsp[-1].number;
}
    break;

  case 482:
#line 2900 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.caller_id_wait = yyvsp[-1].number;
}
    break;

  case 483:
#line 2906 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait_simple = yyvsp[-1].number;
}
    break;

  case 484:
#line 2912 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 485:
#line 2918 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 486:
#line 2924 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 487:
#line 2930 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 488:
#line 2936 "ircd_parser.y"
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
#line 2947 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.idletime = yyvsp[-1].number;
}
    break;

  case 490:
#line 2953 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dots_in_ident = yyvsp[-1].number;
}
    break;

  case 491:
#line 2959 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.maximum_links = yyvsp[-1].number;
}
    break;

  case 492:
#line 2965 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_targets = yyvsp[-1].number;
}
    break;

  case 493:
#line 2971 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 494:
#line 2980 "ircd_parser.y"
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
#line 3012 "ircd_parser.y"
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
#line 3030 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 497:
#line 3036 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 498:
#line 3045 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 499:
#line 3051 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 500:
#line 3056 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 501:
#line 3062 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 505:
#line 3069 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 506:
#line 3073 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 507:
#line 3077 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 508:
#line 3081 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 509:
#line 3085 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 510:
#line 3089 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 511:
#line 3093 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 512:
#line 3097 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 513:
#line 3101 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 514:
#line 3105 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 515:
#line 3109 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 516:
#line 3113 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 517:
#line 3117 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 518:
#line 3121 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 519:
#line 3125 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 520:
#line 3129 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 521:
#line 3135 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 525:
#line 3142 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 526:
#line 3146 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 527:
#line 3150 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 528:
#line 3154 "ircd_parser.y"
    { 
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 529:
#line 3158 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 530:
#line 3162 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 531:
#line 3166 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 532:
#line 3170 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 533:
#line 3174 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 534:
#line 3178 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 535:
#line 3182 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 536:
#line 3186 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 537:
#line 3190 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 538:
#line 3194 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 539:
#line 3198 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 540:
#line 3202 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 541:
#line 3208 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard = yyvsp[-1].number;
}
    break;

  case 542:
#line 3214 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard_simple = yyvsp[-1].number;
}
    break;

  case 543:
#line 3220 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.default_floodcount = yyvsp[-1].number;
}
    break;

  case 544:
#line 3226 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.client_flood = yyvsp[-1].number;
}
    break;

  case 545:
#line 3232 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 546:
#line 3241 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->flags = 0;
  }
}
    break;

  case 547:
#line 3249 "ircd_parser.y"
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

  case 557:
#line 3276 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 558:
#line 3282 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = yyvsp[-1].number;
}
    break;

  case 559:
#line 3288 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 563:
#line 3294 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 564:
#line 3298 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 565:
#line 3304 "ircd_parser.y"
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

  case 566:
#line 3327 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 567:
#line 3336 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 568:
#line 3340 "ircd_parser.y"
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

  case 571:
#line 3380 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 572:
#line 3384 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 591:
#line 3413 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 592:
#line 3419 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_except = yylval.number;
}
    break;

  case 593:
#line 3425 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_invex = yylval.number;
}
    break;

  case 594:
#line 3431 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_knock = yylval.number;
}
    break;

  case 595:
#line 3437 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay = yyvsp[-1].number;
}
    break;

  case 596:
#line 3443 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay_channel = yyvsp[-1].number;
}
    break;

  case 597:
#line 3449 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 598:
#line 3455 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_chans_per_user = yyvsp[-1].number;
}
    break;

  case 599:
#line 3461 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 600:
#line 3467 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_bans = yyvsp[-1].number;
}
    break;

  case 601:
#line 3473 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_user_count = yyvsp[-1].number;
}
    break;

  case 602:
#line 3479 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_server_count = yyvsp[-1].number;
}
    break;

  case 603:
#line 3485 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 604:
#line 3491 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 615:
#line 3511 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 616:
#line 3517 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 617:
#line 3523 "ircd_parser.y"
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

  case 618:
#line 3537 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 619:
#line 3543 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 620:
#line 3549 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 1016 of /usr/local/share/bison/yacc.c.  */
#line 6513 "y.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

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
	  yysize += yystrlen ("parse error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "parse error, unexpected ");
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
	    yyerror ("parse error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("parse error");
    }
  goto yyerrlab1;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:
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
	  while (yyssp > yyss)
	    {
	      YYDPRINTF ((stderr, "Error: popping "));
	      YYDSYMPRINT ((stderr,
			    yystos[*yyssp],
			    *yyvsp));
	      YYDPRINTF ((stderr, "\n"));
	      yydestruct (yystos[*yyssp], *yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDPRINTF ((stderr, "Discarding token %d (%s).\n",
		  yychar, yytname[yychar1]));
      yydestruct (yychar1, yylval);
      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */

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

      YYDPRINTF ((stderr, "Error: popping "));
      YYDSYMPRINT ((stderr,
		    yystos[*yyssp], *yyvsp));
      YYDPRINTF ((stderr, "\n"));

      yydestruct (yystos[yystate], *yyvsp);
      yyvsp--;
      yystate = *--yyssp;


#if YYDEBUG
      if (yydebug)
	{
	  short *yyssp1 = yyss - 1;
	  YYFPRINTF (stderr, "Error: state stack now");
	  while (yyssp1 != yyssp)
	    YYFPRINTF (stderr, " %d", *++yyssp1);
	  YYFPRINTF (stderr, "\n");
	}
#endif
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


#line 359 "ircd_parser.y"

