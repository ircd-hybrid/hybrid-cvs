/* A Bison parser, made from ircd_parser.y, by GNU bison 1.75.  */
/* $Id: y.tab.c,v 7.21.2.5 2005/08/02 05:33:53 adx Exp $ */

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
     BURST_TOPICWHO = 269,
     BYTES = 270,
     KBYTES = 271,
     MBYTES = 272,
     GBYTES = 273,
     TBYTES = 274,
     CALLER_ID_WAIT = 275,
     CAN_FLOOD = 276,
     CAN_IDLE = 277,
     CHANNEL = 278,
     CIPHER_PREFERENCE = 279,
     CLASS = 280,
     COMPRESSED = 281,
     COMPRESSION_LEVEL = 282,
     CONNECT = 283,
     CONNECTFREQ = 284,
     CRYPTLINK = 285,
     DEFAULT_CIPHER_PREFERENCE = 286,
     DEFAULT_FLOODCOUNT = 287,
     DEFAULT_SPLIT_SERVER_COUNT = 288,
     DEFAULT_SPLIT_USER_COUNT = 289,
     DENY = 290,
     DESCRIPTION = 291,
     DIE = 292,
     DISABLE_AUTH = 293,
     DISABLE_HIDDEN = 294,
     DISABLE_LOCAL_CHANNELS = 295,
     DISABLE_REMOTE_COMMANDS = 296,
     DOT_IN_IP6_ADDR = 297,
     DOTS_IN_IDENT = 298,
     DURATION = 299,
     EGDPOOL_PATH = 300,
     EMAIL = 301,
     ENABLE = 302,
     ENCRYPTED = 303,
     EXCEED_LIMIT = 304,
     EXEMPT = 305,
     FAILED_OPER_NOTICE = 306,
     FAKENAME = 307,
     IRCD_FLAGS = 308,
     FLATTEN_LINKS = 309,
     FFAILED_OPERLOG = 310,
     FOPERLOG = 311,
     FUSERLOG = 312,
     GECOS = 313,
     GENERAL = 314,
     GLINE = 315,
     GLINES = 316,
     GLINE_EXEMPT = 317,
     GLINE_LOG = 318,
     GLINE_TIME = 319,
     GLINE_MIN_CIDR = 320,
     GLINE_MIN_CIDR6 = 321,
     GLOBAL_KILL = 322,
     NEED_IDENT = 323,
     HAVENT_READ_CONF = 324,
     HIDDEN = 325,
     HIDDEN_ADMIN = 326,
     HIDDEN_OPER = 327,
     HIDE_SERVER_IPS = 328,
     HIDE_SERVERS = 329,
     HIDE_SPOOF_IPS = 330,
     HOST = 331,
     HUB = 332,
     HUB_MASK = 333,
     IDLETIME = 334,
     IGNORE_BOGUS_TS = 335,
     IP = 336,
     KILL = 337,
     KILL_CHASE_TIME_LIMIT = 338,
     KLINE = 339,
     KLINE_EXEMPT = 340,
     KLINE_REASON = 341,
     KLINE_WITH_REASON = 342,
     KNOCK_DELAY = 343,
     KNOCK_DELAY_CHANNEL = 344,
     LAZYLINK = 345,
     LEAF_MASK = 346,
     LINKS_DELAY = 347,
     LISTEN = 348,
     LOGGING = 349,
     LOG_LEVEL = 350,
     MAXIMUM_LINKS = 351,
     MAX_ACCEPT = 352,
     MAX_BANS = 353,
     MAX_CHANS_PER_USER = 354,
     MAX_GLOBAL = 355,
     MAX_IDENT = 356,
     MAX_LOCAL = 357,
     MAX_NICK_CHANGES = 358,
     MAX_NICK_TIME = 359,
     MAX_NUMBER = 360,
     MAX_TARGETS = 361,
     MESSAGE_LOCALE = 362,
     MIN_NONWILDCARD = 363,
     MIN_NONWILDCARD_SIMPLE = 364,
     MODULE = 365,
     MODULES = 366,
     NAME = 367,
     NEED_PASSWORD = 368,
     NETWORK_DESC = 369,
     NETWORK_NAME = 370,
     NICK = 371,
     NICK_CHANGES = 372,
     NO_CREATE_ON_SPLIT = 373,
     NO_JOIN_ON_SPLIT = 374,
     NO_OPER_FLOOD = 375,
     NO_TILDE = 376,
     NOT = 377,
     NUMBER = 378,
     NUMBER_PER_IDENT = 379,
     NUMBER_PER_IP = 380,
     NUMBER_PER_IP_GLOBAL = 381,
     OPERATOR = 382,
     OPER_LOG = 383,
     OPER_ONLY_UMODES = 384,
     OPER_PASS_RESV = 385,
     OPER_SPY_T = 386,
     OPER_UMODES = 387,
     INVITE_OPS_ONLY = 388,
     PACE_WAIT = 389,
     PACE_WAIT_SIMPLE = 390,
     PASSWORD = 391,
     PATH = 392,
     PING_COOKIE = 393,
     PING_TIME = 394,
     PORT = 395,
     QSTRING = 396,
     QUIET_ON_BAN = 397,
     REASON = 398,
     REDIRPORT = 399,
     REDIRSERV = 400,
     REHASH = 401,
     REMOTE = 402,
     REMOTEBAN = 403,
     RESTRICTED = 404,
     RSA_PRIVATE_KEY_FILE = 405,
     RSA_PUBLIC_KEY_FILE = 406,
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
     T_DEAF = 444,
     T_DEBUG = 445,
     T_DRONE = 446,
     T_EXTERNAL = 447,
     T_FULL = 448,
     T_INVISIBLE = 449,
     T_IPV4 = 450,
     T_IPV6 = 451,
     T_LOCOPS = 452,
     T_LOGPATH = 453,
     T_L_CRIT = 454,
     T_L_DEBUG = 455,
     T_L_ERROR = 456,
     T_L_INFO = 457,
     T_L_NOTICE = 458,
     T_L_TRACE = 459,
     T_L_WARN = 460,
     T_MAX_CLIENTS = 461,
     T_NCHANGE = 462,
     T_OPERWALL = 463,
     T_REJ = 464,
     T_SERVNOTICE = 465,
     T_SKILL = 466,
     T_SPY = 467,
     T_UNAUTH = 468,
     T_UNRESV = 469,
     T_UNXLINE = 470,
     T_WALLOP = 471,
     THROTTLE_TIME = 472,
     TOPICBURST = 473,
     TRUE_NO_OPER_FLOOD = 474,
     UNKLINE = 475,
     USER = 476,
     USE_EGD = 477,
     USE_EXCEPT = 478,
     USE_INVEX = 479,
     USE_KNOCK = 480,
     USE_LOGGING = 481,
     USE_WHOIS_ACTUALLY = 482,
     VHOST = 483,
     VHOST6 = 484,
     XLINE = 485,
     WARN = 486,
     WARN_NO_NLINE = 487
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
#define BURST_TOPICWHO 269
#define BYTES 270
#define KBYTES 271
#define MBYTES 272
#define GBYTES 273
#define TBYTES 274
#define CALLER_ID_WAIT 275
#define CAN_FLOOD 276
#define CAN_IDLE 277
#define CHANNEL 278
#define CIPHER_PREFERENCE 279
#define CLASS 280
#define COMPRESSED 281
#define COMPRESSION_LEVEL 282
#define CONNECT 283
#define CONNECTFREQ 284
#define CRYPTLINK 285
#define DEFAULT_CIPHER_PREFERENCE 286
#define DEFAULT_FLOODCOUNT 287
#define DEFAULT_SPLIT_SERVER_COUNT 288
#define DEFAULT_SPLIT_USER_COUNT 289
#define DENY 290
#define DESCRIPTION 291
#define DIE 292
#define DISABLE_AUTH 293
#define DISABLE_HIDDEN 294
#define DISABLE_LOCAL_CHANNELS 295
#define DISABLE_REMOTE_COMMANDS 296
#define DOT_IN_IP6_ADDR 297
#define DOTS_IN_IDENT 298
#define DURATION 299
#define EGDPOOL_PATH 300
#define EMAIL 301
#define ENABLE 302
#define ENCRYPTED 303
#define EXCEED_LIMIT 304
#define EXEMPT 305
#define FAILED_OPER_NOTICE 306
#define FAKENAME 307
#define IRCD_FLAGS 308
#define FLATTEN_LINKS 309
#define FFAILED_OPERLOG 310
#define FOPERLOG 311
#define FUSERLOG 312
#define GECOS 313
#define GENERAL 314
#define GLINE 315
#define GLINES 316
#define GLINE_EXEMPT 317
#define GLINE_LOG 318
#define GLINE_TIME 319
#define GLINE_MIN_CIDR 320
#define GLINE_MIN_CIDR6 321
#define GLOBAL_KILL 322
#define NEED_IDENT 323
#define HAVENT_READ_CONF 324
#define HIDDEN 325
#define HIDDEN_ADMIN 326
#define HIDDEN_OPER 327
#define HIDE_SERVER_IPS 328
#define HIDE_SERVERS 329
#define HIDE_SPOOF_IPS 330
#define HOST 331
#define HUB 332
#define HUB_MASK 333
#define IDLETIME 334
#define IGNORE_BOGUS_TS 335
#define IP 336
#define KILL 337
#define KILL_CHASE_TIME_LIMIT 338
#define KLINE 339
#define KLINE_EXEMPT 340
#define KLINE_REASON 341
#define KLINE_WITH_REASON 342
#define KNOCK_DELAY 343
#define KNOCK_DELAY_CHANNEL 344
#define LAZYLINK 345
#define LEAF_MASK 346
#define LINKS_DELAY 347
#define LISTEN 348
#define LOGGING 349
#define LOG_LEVEL 350
#define MAXIMUM_LINKS 351
#define MAX_ACCEPT 352
#define MAX_BANS 353
#define MAX_CHANS_PER_USER 354
#define MAX_GLOBAL 355
#define MAX_IDENT 356
#define MAX_LOCAL 357
#define MAX_NICK_CHANGES 358
#define MAX_NICK_TIME 359
#define MAX_NUMBER 360
#define MAX_TARGETS 361
#define MESSAGE_LOCALE 362
#define MIN_NONWILDCARD 363
#define MIN_NONWILDCARD_SIMPLE 364
#define MODULE 365
#define MODULES 366
#define NAME 367
#define NEED_PASSWORD 368
#define NETWORK_DESC 369
#define NETWORK_NAME 370
#define NICK 371
#define NICK_CHANGES 372
#define NO_CREATE_ON_SPLIT 373
#define NO_JOIN_ON_SPLIT 374
#define NO_OPER_FLOOD 375
#define NO_TILDE 376
#define NOT 377
#define NUMBER 378
#define NUMBER_PER_IDENT 379
#define NUMBER_PER_IP 380
#define NUMBER_PER_IP_GLOBAL 381
#define OPERATOR 382
#define OPER_LOG 383
#define OPER_ONLY_UMODES 384
#define OPER_PASS_RESV 385
#define OPER_SPY_T 386
#define OPER_UMODES 387
#define INVITE_OPS_ONLY 388
#define PACE_WAIT 389
#define PACE_WAIT_SIMPLE 390
#define PASSWORD 391
#define PATH 392
#define PING_COOKIE 393
#define PING_TIME 394
#define PORT 395
#define QSTRING 396
#define QUIET_ON_BAN 397
#define REASON 398
#define REDIRPORT 399
#define REDIRSERV 400
#define REHASH 401
#define REMOTE 402
#define REMOTEBAN 403
#define RESTRICTED 404
#define RSA_PRIVATE_KEY_FILE 405
#define RSA_PUBLIC_KEY_FILE 406
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
#define T_DEAF 444
#define T_DEBUG 445
#define T_DRONE 446
#define T_EXTERNAL 447
#define T_FULL 448
#define T_INVISIBLE 449
#define T_IPV4 450
#define T_IPV6 451
#define T_LOCOPS 452
#define T_LOGPATH 453
#define T_L_CRIT 454
#define T_L_DEBUG 455
#define T_L_ERROR 456
#define T_L_INFO 457
#define T_L_NOTICE 458
#define T_L_TRACE 459
#define T_L_WARN 460
#define T_MAX_CLIENTS 461
#define T_NCHANGE 462
#define T_OPERWALL 463
#define T_REJ 464
#define T_SERVNOTICE 465
#define T_SKILL 466
#define T_SPY 467
#define T_UNAUTH 468
#define T_UNRESV 469
#define T_UNXLINE 470
#define T_WALLOP 471
#define THROTTLE_TIME 472
#define TOPICBURST 473
#define TRUE_NO_OPER_FLOOD 474
#define UNKLINE 475
#define USER 476
#define USE_EGD 477
#define USE_EXCEPT 478
#define USE_INVEX 479
#define USE_KNOCK 480
#define USE_LOGGING 481
#define USE_WHOIS_ACTUALLY 482
#define VHOST 483
#define VHOST6 484
#define XLINE 485
#define WARN 486
#define WARN_NO_NLINE 487




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
#line 645 "y.tab.c"
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
#line 666 "y.tab.c"

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
#define YYLAST   1256

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  238
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  297
/* YYNRULES -- Number of rules. */
#define YYNRULES  632
/* YYNRULES -- Number of states. */
#define YYNSTATES  1282

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   487

#define YYTRANSLATE(X) \
  ((unsigned)(X) <= YYMAXUTOK ? yytranslate[X] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   237,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   233,
       2,   236,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   235,     2,   234,     2,     2,     2,     2,
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
     225,   226,   227,   228,   229,   230,   231,   232
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
     526,   528,   530,   532,   533,   541,   542,   544,   547,   549,
     551,   553,   555,   557,   559,   561,   563,   565,   567,   569,
     574,   576,   581,   586,   591,   596,   601,   606,   611,   616,
     617,   624,   627,   629,   631,   633,   635,   637,   642,   646,
     648,   650,   654,   659,   664,   665,   672,   675,   677,   679,
     681,   683,   685,   687,   689,   691,   693,   695,   697,   699,
     701,   703,   705,   707,   709,   714,   719,   724,   729,   730,
     736,   740,   742,   745,   747,   749,   751,   753,   755,   757,
     759,   761,   763,   765,   767,   772,   777,   782,   787,   792,
     797,   802,   807,   812,   817,   818,   825,   828,   830,   832,
     834,   836,   838,   843,   848,   853,   854,   861,   864,   866,
     868,   870,   872,   874,   879,   884,   885,   891,   895,   897,
     899,   901,   903,   905,   907,   909,   911,   912,   919,   922,
     924,   926,   928,   930,   935,   936,   942,   946,   948,   950,
     952,   954,   956,   958,   960,   962,   964,   965,   973,   974,
     976,   979,   981,   983,   985,   987,   989,   991,   993,   995,
     997,   999,  1001,  1003,  1005,  1007,  1009,  1011,  1013,  1015,
    1017,  1022,  1024,  1029,  1034,  1039,  1044,  1049,  1054,  1059,
    1060,  1066,  1070,  1072,  1075,  1077,  1079,  1081,  1083,  1085,
    1087,  1089,  1094,  1099,  1104,  1109,  1114,  1119,  1124,  1129,
    1134,  1135,  1142,  1145,  1147,  1149,  1151,  1153,  1158,  1163,
    1164,  1171,  1174,  1176,  1178,  1180,  1182,  1187,  1192,  1193,
    1200,  1203,  1205,  1207,  1209,  1214,  1215,  1222,  1225,  1227,
    1229,  1231,  1233,  1238,  1243,  1249,  1252,  1254,  1256,  1258,
    1260,  1262,  1264,  1266,  1268,  1270,  1272,  1274,  1276,  1278,
    1280,  1282,  1284,  1286,  1288,  1290,  1292,  1294,  1296,  1298,
    1300,  1302,  1304,  1306,  1308,  1310,  1312,  1314,  1316,  1318,
    1320,  1322,  1324,  1326,  1328,  1330,  1332,  1334,  1336,  1338,
    1340,  1342,  1344,  1346,  1348,  1350,  1352,  1354,  1356,  1358,
    1360,  1365,  1370,  1375,  1380,  1385,  1390,  1395,  1400,  1405,
    1410,  1415,  1420,  1425,  1430,  1435,  1440,  1445,  1450,  1455,
    1460,  1465,  1470,  1475,  1480,  1485,  1490,  1495,  1500,  1505,
    1510,  1515,  1520,  1525,  1530,  1535,  1540,  1545,  1550,  1555,
    1560,  1565,  1570,  1575,  1580,  1585,  1590,  1595,  1596,  1602,
    1606,  1608,  1610,  1612,  1614,  1616,  1618,  1620,  1622,  1624,
    1626,  1628,  1630,  1632,  1634,  1636,  1638,  1640,  1642,  1644,
    1645,  1651,  1655,  1657,  1659,  1661,  1663,  1665,  1667,  1669,
    1671,  1673,  1675,  1677,  1679,  1681,  1683,  1685,  1687,  1689,
    1691,  1693,  1698,  1703,  1708,  1713,  1718,  1719,  1726,  1729,
    1731,  1733,  1735,  1737,  1739,  1741,  1743,  1745,  1750,  1755,
    1756,  1762,  1766,  1768,  1770,  1772,  1777,  1782,  1783,  1789,
    1793,  1795,  1797,  1799,  1805,  1808,  1810,  1812,  1814,  1816,
    1818,  1820,  1822,  1824,  1826,  1828,  1830,  1832,  1834,  1836,
    1838,  1840,  1842,  1847,  1852,  1857,  1862,  1867,  1872,  1877,
    1882,  1887,  1892,  1897,  1902,  1907,  1912,  1917,  1923,  1926,
    1928,  1930,  1932,  1934,  1936,  1938,  1940,  1942,  1947,  1952,
    1957,  1962,  1967
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     239,     0,    -1,    -1,   239,   240,    -1,   263,    -1,   269,
      -1,   280,    -1,   508,    -1,   308,    -1,   323,    -1,   332,
      -1,   250,    -1,   526,    -1,   355,    -1,   362,    -1,   372,
      -1,   381,    -1,   408,    -1,   414,    -1,   420,    -1,   431,
      -1,   492,    -1,   425,    -1,   245,    -1,     1,   233,    -1,
       1,   234,    -1,    -1,   242,    -1,   123,   241,    -1,   123,
     154,   241,    -1,   123,   155,   241,    -1,   123,   156,   241,
      -1,   123,   157,   241,    -1,   123,   158,   241,    -1,    -1,
     244,    -1,   123,   243,    -1,   123,    15,   243,    -1,   123,
      16,   243,    -1,   123,    17,   243,    -1,   111,   235,   246,
     234,   233,    -1,   246,   247,    -1,   247,    -1,   248,    -1,
     249,    -1,     1,    -1,   110,   236,   141,   233,    -1,   137,
     236,   141,   233,    -1,   162,   235,   251,   234,   233,    -1,
     251,   252,    -1,   252,    -1,   254,    -1,   259,    -1,   262,
      -1,   256,    -1,   257,    -1,   258,    -1,   261,    -1,   253,
      -1,   260,    -1,   255,    -1,     1,    -1,   150,   236,   141,
     233,    -1,   112,   236,   141,   233,    -1,   164,   236,   141,
     233,    -1,    36,   236,   141,   233,    -1,   115,   236,   141,
     233,    -1,   114,   236,   141,   233,    -1,   228,   236,   141,
     233,    -1,   229,   236,   141,   233,    -1,   206,   236,   123,
     233,    -1,    77,   236,   177,   233,    -1,     5,   235,   264,
     234,   233,    -1,   264,   265,    -1,   265,    -1,   266,    -1,
     268,    -1,   267,    -1,     1,    -1,   112,   236,   141,   233,
      -1,    46,   236,   141,   233,    -1,    36,   236,   141,   233,
      -1,    94,   235,   270,   234,   233,    -1,   270,   271,    -1,
     271,    -1,   272,    -1,   273,    -1,   274,    -1,   278,    -1,
     279,    -1,   275,    -1,   277,    -1,   276,    -1,     1,    -1,
     198,   236,   141,   233,    -1,   128,   236,   141,   233,    -1,
      63,   236,   141,   233,    -1,    57,   236,   141,   233,    -1,
      55,   236,   141,   233,    -1,    56,   236,   141,   233,    -1,
      95,   236,   199,   233,    -1,    95,   236,   201,   233,    -1,
      95,   236,   205,   233,    -1,    95,   236,   203,   233,    -1,
      95,   236,   204,   233,    -1,    95,   236,   202,   233,    -1,
      95,   236,   200,   233,    -1,   226,   236,   177,   233,    -1,
      -1,   127,   281,   282,   235,   283,   234,   233,    -1,    -1,
     286,    -1,   283,   284,    -1,   284,    -1,   285,    -1,   287,
      -1,   288,    -1,   290,    -1,   292,    -1,   293,    -1,   294,
      -1,   295,    -1,   296,    -1,   297,    -1,   298,    -1,   299,
      -1,   300,    -1,   301,    -1,   302,    -1,   289,    -1,   291,
      -1,   303,    -1,     1,    -1,   112,   236,   141,   233,    -1,
     141,    -1,   221,   236,   141,   233,    -1,   136,   236,   141,
     233,    -1,    48,   236,   177,   233,    -1,    71,   236,   177,
     233,    -1,   151,   236,   141,   233,    -1,    25,   236,   141,
     233,    -1,    67,   236,   177,   233,    -1,   147,   236,   177,
     233,    -1,    84,   236,   177,   233,    -1,   230,   236,   177,
     233,    -1,   220,   236,   177,   233,    -1,    60,   236,   177,
     233,    -1,   117,   236,   177,   233,    -1,    37,   236,   177,
     233,    -1,   146,   236,   177,   233,    -1,     5,   236,   177,
     233,    -1,    -1,    53,   304,   236,   305,   233,    -1,   305,
     237,   306,    -1,   306,    -1,   122,   307,    -1,   307,    -1,
      67,    -1,   147,    -1,    84,    -1,   220,    -1,   230,    -1,
      60,    -1,    37,    -1,   146,    -1,     5,    -1,    71,    -1,
     117,    -1,   208,    -1,   131,    -1,    72,    -1,   148,    -1,
      48,    -1,    -1,    25,   309,   310,   235,   311,   234,   233,
      -1,    -1,   314,    -1,   311,   312,    -1,   312,    -1,   313,
      -1,   315,    -1,   316,    -1,   317,    -1,   318,    -1,   319,
      -1,   320,    -1,   321,    -1,   322,    -1,     1,    -1,   112,
     236,   141,   233,    -1,   141,    -1,   139,   236,   242,   233,
      -1,   125,   236,   123,   233,    -1,    29,   236,   242,   233,
      -1,   105,   236,   123,   233,    -1,   100,   236,   123,   233,
      -1,   102,   236,   123,   233,    -1,   101,   236,   123,   233,
      -1,   159,   236,   244,   233,    -1,    -1,    93,   324,   235,
     325,   234,   233,    -1,   325,   326,    -1,   326,    -1,   327,
      -1,   330,    -1,   331,    -1,     1,    -1,   140,   236,   328,
     233,    -1,   328,   237,   329,    -1,   329,    -1,   123,    -1,
     123,   182,   123,    -1,    81,   236,   141,   233,    -1,    76,
     236,   141,   233,    -1,    -1,    10,   333,   235,   334,   234,
     233,    -1,   334,   335,    -1,   335,    -1,   336,    -1,   337,
      -1,   339,    -1,   340,    -1,   345,    -1,   346,    -1,   347,
      -1,   349,    -1,   350,    -1,   351,    -1,   338,    -1,   352,
      -1,   353,    -1,   348,    -1,   354,    -1,     1,    -1,   221,
     236,   141,   233,    -1,   136,   236,   141,   233,    -1,   172,
     236,   177,   233,    -1,    25,   236,   141,   233,    -1,    -1,
      53,   341,   236,   342,   233,    -1,   342,   237,   343,    -1,
     343,    -1,   122,   344,    -1,   344,    -1,   172,    -1,    49,
      -1,    85,    -1,    68,    -1,    21,    -1,    22,    -1,   121,
      -1,    62,    -1,   153,    -1,   113,    -1,    85,   236,   177,
     233,    -1,    68,   236,   177,   233,    -1,    49,   236,   177,
     233,    -1,    21,   236,   177,   233,    -1,   121,   236,   177,
     233,    -1,    62,   236,   177,   233,    -1,   171,   236,   141,
     233,    -1,   145,   236,   141,   233,    -1,   144,   236,   123,
     233,    -1,   113,   236,   177,   233,    -1,    -1,   152,   356,
     235,   357,   234,   233,    -1,   357,   358,    -1,   358,    -1,
     359,    -1,   360,    -1,   361,    -1,     1,    -1,   143,   236,
     141,   233,    -1,    23,   236,   141,   233,    -1,   116,   236,
     141,   233,    -1,    -1,   166,   363,   235,   364,   234,   233,
      -1,   364,   365,    -1,   365,    -1,   366,    -1,   367,    -1,
     368,    -1,     1,    -1,   112,   236,   141,   233,    -1,   221,
     236,   141,   233,    -1,    -1,   168,   369,   236,   370,   233,
      -1,   370,   237,   371,    -1,   371,    -1,    84,    -1,   220,
      -1,   230,    -1,   215,    -1,   152,    -1,   214,    -1,   183,
      -1,    -1,   167,   373,   235,   374,   234,   233,    -1,   374,
     375,    -1,   375,    -1,   376,    -1,   377,    -1,     1,    -1,
     112,   236,   141,   233,    -1,    -1,   168,   378,   236,   379,
     233,    -1,   379,   237,   380,    -1,   380,    -1,    84,    -1,
     220,    -1,   230,    -1,   215,    -1,   152,    -1,   214,    -1,
     197,    -1,   183,    -1,    -1,    28,   382,   383,   235,   384,
     234,   233,    -1,    -1,   387,    -1,   384,   385,    -1,   385,
      -1,   386,    -1,   388,    -1,   389,    -1,   390,    -1,   391,
      -1,   392,    -1,   393,    -1,   394,    -1,   404,    -1,   405,
      -1,   406,    -1,   403,    -1,   400,    -1,   402,    -1,   401,
      -1,   399,    -1,   407,    -1,     1,    -1,   112,   236,   141,
     233,    -1,   141,    -1,    76,   236,   141,   233,    -1,   160,
     236,   141,   233,    -1,     3,   236,   141,   233,    -1,   140,
     236,   123,   233,    -1,     6,   236,   195,   233,    -1,     6,
     236,   196,   233,    -1,    52,   236,   141,   233,    -1,    -1,
      53,   395,   236,   396,   233,    -1,   396,   237,   397,    -1,
     397,    -1,   122,   398,    -1,   398,    -1,    90,    -1,    26,
      -1,    30,    -1,    11,    -1,    13,    -1,   218,    -1,   151,
     236,   141,   233,    -1,    48,   236,   177,   233,    -1,    30,
     236,   177,   233,    -1,    26,   236,   177,   233,    -1,    11,
     236,   177,   233,    -1,    78,   236,   141,   233,    -1,    91,
     236,   141,   233,    -1,    25,   236,   141,   233,    -1,    24,
     236,   141,   233,    -1,    -1,    82,   409,   235,   410,   234,
     233,    -1,   410,   411,    -1,   411,    -1,   412,    -1,   413,
      -1,     1,    -1,   221,   236,   141,   233,    -1,   143,   236,
     141,   233,    -1,    -1,    35,   415,   235,   416,   234,   233,
      -1,   416,   417,    -1,   417,    -1,   418,    -1,   419,    -1,
       1,    -1,    81,   236,   141,   233,    -1,   143,   236,   141,
     233,    -1,    -1,    50,   421,   235,   422,   234,   233,    -1,
     422,   423,    -1,   423,    -1,   424,    -1,     1,    -1,    81,
     236,   141,   233,    -1,    -1,    58,   426,   235,   427,   234,
     233,    -1,   427,   428,    -1,   428,    -1,   429,    -1,   430,
      -1,     1,    -1,   112,   236,   141,   233,    -1,   143,   236,
     141,   233,    -1,    59,   235,   432,   234,   233,    -1,   432,
     433,    -1,   433,    -1,   440,    -1,   441,    -1,   443,    -1,
     444,    -1,   445,    -1,   446,    -1,   447,    -1,   448,    -1,
     449,    -1,   450,    -1,   439,    -1,   452,    -1,   453,    -1,
     454,    -1,   468,    -1,   455,    -1,   457,    -1,   459,    -1,
     458,    -1,   461,    -1,   456,    -1,   462,    -1,   463,    -1,
     464,    -1,   465,    -1,   467,    -1,   469,    -1,   466,    -1,
     483,    -1,   470,    -1,   474,    -1,   475,    -1,   479,    -1,
     460,    -1,   489,    -1,   487,    -1,   488,    -1,   471,    -1,
     442,    -1,   472,    -1,   473,    -1,   490,    -1,   478,    -1,
     451,    -1,   491,    -1,   476,    -1,   477,    -1,   436,    -1,
     438,    -1,   434,    -1,   435,    -1,   437,    -1,     1,    -1,
      65,   236,   123,   233,    -1,    66,   236,   123,   233,    -1,
      13,   236,   177,   233,    -1,   227,   236,   177,   233,    -1,
     165,   236,   177,   233,    -1,    83,   236,   123,   233,    -1,
      75,   236,   177,   233,    -1,    80,   236,   177,   233,    -1,
      41,   236,   177,   233,    -1,    51,   236,   177,   233,    -1,
       8,   236,   177,   233,    -1,   104,   236,   242,   233,    -1,
     103,   236,   123,   233,    -1,    97,   236,   123,   233,    -1,
       9,   236,   242,   233,    -1,   181,   236,   242,   233,    -1,
     180,   236,   242,   233,    -1,    69,   236,   123,   233,    -1,
      87,   236,   177,   233,    -1,    86,   236,   141,   233,    -1,
     232,   236,   177,   233,    -1,   175,   236,   177,   233,    -1,
     176,   236,   177,   233,    -1,   174,   236,   177,   233,    -1,
     174,   236,   178,   233,    -1,   173,   236,   177,   233,    -1,
     173,   236,   178,   233,    -1,   134,   236,   242,   233,    -1,
      20,   236,   242,   233,    -1,   135,   236,   242,   233,    -1,
     169,   236,   177,   233,    -1,   120,   236,   177,   233,    -1,
     219,   236,   177,   233,    -1,   130,   236,   177,   233,    -1,
     107,   236,   141,   233,    -1,    79,   236,   242,   233,    -1,
      43,   236,   123,   233,    -1,    96,   236,   123,   233,    -1,
     106,   236,   123,   233,    -1,   163,   236,   141,   233,    -1,
      31,   236,   141,   233,    -1,    27,   236,   123,   233,    -1,
     222,   236,   177,   233,    -1,    45,   236,   141,   233,    -1,
     138,   236,   177,   233,    -1,    38,   236,   177,   233,    -1,
     217,   236,   242,   233,    -1,    -1,   132,   480,   236,   481,
     233,    -1,   481,   237,   482,    -1,   482,    -1,   184,    -1,
     187,    -1,   189,    -1,   190,    -1,   193,    -1,   211,    -1,
     207,    -1,   209,    -1,   213,    -1,   212,    -1,   192,    -1,
     208,    -1,   210,    -1,   194,    -1,   216,    -1,   185,    -1,
     186,    -1,   197,    -1,    -1,   129,   484,   236,   485,   233,
      -1,   485,   237,   486,    -1,   486,    -1,   184,    -1,   187,
      -1,   189,    -1,   190,    -1,   193,    -1,   211,    -1,   207,
      -1,   209,    -1,   213,    -1,   212,    -1,   192,    -1,   208,
      -1,   210,    -1,   194,    -1,   216,    -1,   185,    -1,   186,
      -1,   197,    -1,   108,   236,   123,   233,    -1,   109,   236,
     123,   233,    -1,    32,   236,   123,   233,    -1,   188,   236,
     244,   233,    -1,    42,   236,   177,   233,    -1,    -1,    61,
     493,   235,   494,   234,   233,    -1,   494,   495,    -1,   495,
      -1,   496,    -1,   497,    -1,   498,    -1,   502,    -1,   503,
      -1,   504,    -1,     1,    -1,    47,   236,   177,   233,    -1,
      44,   236,   242,   233,    -1,    -1,    94,   499,   236,   500,
     233,    -1,   500,   237,   501,    -1,   501,    -1,   179,    -1,
      12,    -1,   221,   236,   141,   233,    -1,   112,   236,   141,
     233,    -1,    -1,     4,   505,   236,   506,   233,    -1,   506,
     237,   507,    -1,   507,    -1,   179,    -1,    12,    -1,    23,
     235,   509,   234,   233,    -1,   509,   510,    -1,   510,    -1,
     511,    -1,   512,    -1,   513,    -1,   514,    -1,   520,    -1,
     515,    -1,   516,    -1,   517,    -1,   518,    -1,   519,    -1,
     521,    -1,   522,    -1,   523,    -1,   524,    -1,   525,    -1,
       1,    -1,    40,   236,   177,   233,    -1,   223,   236,   177,
     233,    -1,   224,   236,   177,   233,    -1,   225,   236,   177,
     233,    -1,    88,   236,   242,   233,    -1,    89,   236,   242,
     233,    -1,   133,   236,   177,   233,    -1,    99,   236,   123,
     233,    -1,   142,   236,   177,   233,    -1,    98,   236,   123,
     233,    -1,    34,   236,   123,   233,    -1,    33,   236,   123,
     233,    -1,   118,   236,   177,   233,    -1,   119,   236,   177,
     233,    -1,    14,   236,   177,   233,    -1,   161,   235,   527,
     234,   233,    -1,   527,   528,    -1,   528,    -1,   529,    -1,
     530,    -1,   531,    -1,   533,    -1,   532,    -1,   534,    -1,
       1,    -1,    54,   236,   177,   233,    -1,    74,   236,   177,
     233,    -1,    92,   236,   242,   233,    -1,    70,   236,   177,
     233,    -1,    39,   236,   177,   233,    -1,    73,   236,   177,
     233,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   364,   364,   365,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   393,   393,   394,   398,
     402,   406,   410,   414,   420,   420,   421,   422,   423,   424,
     431,   434,   434,   435,   435,   435,   437,   454,   465,   468,
     468,   470,   470,   470,   471,   471,   472,   472,   473,   474,
     474,   475,   478,   533,   547,   565,   574,   588,   597,   625,
     655,   671,   721,   723,   723,   724,   724,   724,   725,   727,
     736,   745,   757,   759,   759,   762,   762,   762,   763,   763,
     764,   764,   765,   765,   768,   772,   776,   780,   787,   794,
     801,   805,   809,   813,   817,   821,   825,   831,   841,   840,
     933,   933,   934,   934,   935,   935,   935,   935,   935,   936,
     936,   936,   937,   937,   937,   938,   938,   939,   939,   939,
     940,   940,   941,   943,   955,   967,   990,  1002,  1013,  1024,
    1066,  1075,  1086,  1097,  1108,  1119,  1130,  1141,  1152,  1163,
    1174,  1186,  1185,  1189,  1189,  1190,  1191,  1193,  1200,  1207,
    1214,  1221,  1228,  1235,  1242,  1249,  1256,  1263,  1270,  1277,
    1284,  1291,  1298,  1312,  1311,  1331,  1331,  1333,  1333,  1334,
    1334,  1335,  1336,  1337,  1338,  1339,  1340,  1341,  1342,  1345,
    1391,  1437,  1443,  1449,  1455,  1461,  1467,  1473,  1479,  1489,
    1488,  1501,  1501,  1502,  1502,  1502,  1502,  1504,  1506,  1506,
    1508,  1512,  1525,  1534,  1547,  1546,  1620,  1620,  1621,  1621,
    1621,  1621,  1621,  1622,  1622,  1623,  1623,  1623,  1624,  1624,
    1625,  1625,  1625,  1626,  1628,  1657,  1670,  1681,  1691,  1690,
    1694,  1694,  1695,  1696,  1698,  1706,  1713,  1720,  1727,  1734,
    1741,  1748,  1755,  1762,  1771,  1782,  1793,  1804,  1815,  1826,
    1838,  1857,  1867,  1876,  1892,  1891,  1904,  1904,  1905,  1905,
    1905,  1905,  1907,  1916,  1931,  1950,  1949,  1965,  1965,  1966,
    1966,  1966,  1966,  1968,  1977,  1993,  1992,  1998,  1998,  1999,
    2003,  2007,  2011,  2015,  2019,  2023,  2033,  2032,  2054,  2054,
    2055,  2055,  2055,  2057,  2064,  2063,  2069,  2069,  2070,  2074,
    2078,  2082,  2086,  2090,  2094,  2098,  2108,  2107,  2257,  2257,
    2258,  2258,  2259,  2259,  2259,  2259,  2260,  2260,  2260,  2261,
    2261,  2261,  2262,  2262,  2262,  2263,  2263,  2263,  2264,  2264,
    2267,  2279,  2291,  2300,  2312,  2324,  2330,  2334,  2342,  2352,
    2351,  2355,  2355,  2356,  2357,  2359,  2366,  2377,  2384,  2391,
    2398,  2407,  2448,  2459,  2470,  2485,  2496,  2509,  2522,  2531,
    2567,  2566,  2589,  2589,  2590,  2590,  2590,  2592,  2601,  2614,
    2613,  2635,  2635,  2636,  2636,  2636,  2638,  2647,  2660,  2659,
    2680,  2680,  2681,  2681,  2683,  2696,  2695,  2709,  2709,  2710,
    2710,  2710,  2712,  2721,  2733,  2736,  2736,  2737,  2737,  2737,
    2738,  2738,  2739,  2739,  2740,  2740,  2741,  2741,  2742,  2742,
    2743,  2744,  2744,  2745,  2745,  2746,  2746,  2747,  2747,  2748,
    2748,  2749,  2749,  2750,  2750,  2751,  2752,  2752,  2753,  2753,
    2754,  2755,  2755,  2756,  2756,  2757,  2757,  2758,  2759,  2759,
    2760,  2760,  2761,  2761,  2762,  2762,  2763,  2763,  2764,  2764,
    2769,  2775,  2781,  2787,  2792,  2797,  2803,  2809,  2815,  2821,
    2827,  2833,  2839,  2845,  2851,  2857,  2863,  2869,  2880,  2886,
    2895,  2901,  2907,  2913,  2917,  2923,  2927,  2933,  2939,  2945,
    2951,  2957,  2963,  2969,  2975,  2986,  2992,  2998,  3004,  3010,
    3019,  3051,  3069,  3075,  3084,  3090,  3095,  3102,  3101,  3107,
    3107,  3108,  3112,  3116,  3120,  3124,  3128,  3132,  3136,  3140,
    3144,  3148,  3152,  3156,  3160,  3164,  3168,  3172,  3176,  3183,
    3182,  3188,  3188,  3189,  3193,  3197,  3201,  3205,  3209,  3213,
    3217,  3221,  3225,  3229,  3233,  3237,  3241,  3245,  3249,  3253,
    3257,  3263,  3269,  3275,  3281,  3287,  3297,  3296,  3322,  3322,
    3323,  3323,  3324,  3325,  3326,  3327,  3328,  3331,  3337,  3344,
    3343,  3348,  3348,  3349,  3353,  3359,  3382,  3392,  3391,  3434,
    3434,  3435,  3439,  3448,  3451,  3451,  3452,  3452,  3453,  3454,
    3455,  3456,  3457,  3458,  3459,  3460,  3461,  3462,  3463,  3464,
    3465,  3466,  3469,  3475,  3481,  3487,  3493,  3499,  3505,  3511,
    3517,  3523,  3529,  3535,  3541,  3547,  3553,  3562,  3565,  3565,
    3566,  3566,  3566,  3567,  3568,  3569,  3570,  3573,  3579,  3585,
    3599,  3605,  3611
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ACCEPT_PASSWORD", "ACTION", "ADMIN", 
  "AFTYPE", "T_ALLOW", "ANTI_NICK_FLOOD", "ANTI_SPAM_EXIT_MESSAGE_TIME", 
  "IRCD_AUTH", "AUTOCONN", "T_BLOCK", "BURST_AWAY", "BURST_TOPICWHO", 
  "BYTES", "KBYTES", "MBYTES", "GBYTES", "TBYTES", "CALLER_ID_WAIT", 
  "CAN_FLOOD", "CAN_IDLE", "CHANNEL", "CIPHER_PREFERENCE", "CLASS", 
  "COMPRESSED", "COMPRESSION_LEVEL", "CONNECT", "CONNECTFREQ", 
  "CRYPTLINK", "DEFAULT_CIPHER_PREFERENCE", "DEFAULT_FLOODCOUNT", 
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
  "T_CLIENT_FLOOD", "T_DEAF", "T_DEBUG", "T_DRONE", "T_EXTERNAL", 
  "T_FULL", "T_INVISIBLE", "T_IPV4", "T_IPV6", "T_LOCOPS", "T_LOGPATH", 
  "T_L_CRIT", "T_L_DEBUG", "T_L_ERROR", "T_L_INFO", "T_L_NOTICE", 
  "T_L_TRACE", "T_L_WARN", "T_MAX_CLIENTS", "T_NCHANGE", "T_OPERWALL", 
  "T_REJ", "T_SERVNOTICE", "T_SKILL", "T_SPY", "T_UNAUTH", "T_UNRESV", 
  "T_UNXLINE", "T_WALLOP", "THROTTLE_TIME", "TOPICBURST", 
  "TRUE_NO_OPER_FLOOD", "UNKLINE", "USER", "USE_EGD", "USE_EXCEPT", 
  "USE_INVEX", "USE_KNOCK", "USE_LOGGING", "USE_WHOIS_ACTUALLY", "VHOST", 
  "VHOST6", "XLINE", "WARN", "WARN_NO_NLINE", "';'", "'}'", "'{'", "'='", 
  "','", "$accept", "conf", "conf_item", "timespec_", "timespec", 
  "sizespec_", "sizespec", "modules_entry", "modules_items", 
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
  "connect_flags_items", "connect_flags_item", "connect_flags_item_atom", 
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
  "general_use_whois_actually", "general_tkline_expire_notices", 
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
  "general_oper_umodes", "@18", "umode_oitems", "umode_oitem", 
  "general_oper_only_umodes", "@19", "umode_items", "umode_item", 
  "general_min_nonwildcard", "general_min_nonwildcard_simple", 
  "general_default_floodcount", "general_client_flood", 
  "general_dot_in_ip6_addr", "gline_entry", "@20", "gline_items", 
  "gline_item", "gline_enable", "gline_duration", "gline_logging", "@21", 
  "gline_logging_types", "gline_logging_type_item", "gline_user", 
  "gline_server", "gline_action", "@22", "gdeny_types", "gdeny_type_item", 
  "channel_entry", "channel_items", "channel_item", 
  "channel_disable_local_channels", "channel_use_except", 
  "channel_use_invex", "channel_use_knock", "channel_knock_delay", 
  "channel_knock_delay_channel", "channel_invite_ops_only", 
  "channel_max_chans_per_user", "channel_quiet_on_ban", 
  "channel_max_bans", "channel_default_split_user_count", 
  "channel_default_split_server_count", "channel_no_create_on_split", 
  "channel_no_join_on_split", "channel_burst_topicwho", 
  "serverhide_entry", "serverhide_items", "serverhide_item", 
  "serverhide_flatten_links", "serverhide_hide_servers", 
  "serverhide_links_delay", "serverhide_hidden", 
  "serverhide_disable_hidden", "serverhide_hide_server_ips", 0
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
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,    59,   125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   238,   239,   239,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   241,   241,   242,   242,
     242,   242,   242,   242,   243,   243,   244,   244,   244,   244,
     245,   246,   246,   247,   247,   247,   248,   249,   250,   251,
     251,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   264,   265,   265,   265,   265,   266,
     267,   268,   269,   270,   270,   271,   271,   271,   271,   271,
     271,   271,   271,   271,   272,   273,   274,   275,   276,   277,
     278,   278,   278,   278,   278,   278,   278,   279,   281,   280,
     282,   282,   283,   283,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   284,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   304,   303,   305,   305,   306,   306,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   309,   308,   310,   310,   311,   311,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   324,
     323,   325,   325,   326,   326,   326,   326,   327,   328,   328,
     329,   329,   330,   331,   333,   332,   334,   334,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   336,   337,   338,   339,   341,   340,
     342,   342,   343,   343,   344,   344,   344,   344,   344,   344,
     344,   344,   344,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   356,   355,   357,   357,   358,   358,
     358,   358,   359,   360,   361,   363,   362,   364,   364,   365,
     365,   365,   365,   366,   367,   369,   368,   370,   370,   371,
     371,   371,   371,   371,   371,   371,   373,   372,   374,   374,
     375,   375,   375,   376,   378,   377,   379,   379,   380,   380,
     380,   380,   380,   380,   380,   380,   382,   381,   383,   383,
     384,   384,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
     386,   387,   388,   389,   390,   391,   392,   392,   393,   395,
     394,   396,   396,   397,   397,   398,   398,   398,   398,   398,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     409,   408,   410,   410,   411,   411,   411,   412,   413,   415,
     414,   416,   416,   417,   417,   417,   418,   419,   421,   420,
     422,   422,   423,   423,   424,   426,   425,   427,   427,   428,
     428,   428,   429,   430,   431,   432,   432,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   457,   458,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   480,   479,   481,
     481,   482,   482,   482,   482,   482,   482,   482,   482,   482,
     482,   482,   482,   482,   482,   482,   482,   482,   482,   484,
     483,   485,   485,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   487,   488,   489,   490,   491,   493,   492,   494,   494,
     495,   495,   495,   495,   495,   495,   495,   496,   497,   499,
     498,   500,   500,   501,   501,   502,   503,   505,   504,   506,
     506,   507,   507,   508,   509,   509,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   511,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   527,
     528,   528,   528,   528,   528,   528,   528,   529,   530,   531,
     532,   533,   534
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
       1,     1,     1,     0,     7,     0,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     0,
       6,     2,     1,     1,     1,     1,     1,     4,     3,     1,
       1,     3,     4,     4,     0,     6,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     0,     5,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     0,     6,     2,     1,     1,     1,
       1,     1,     4,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     1,     4,     4,     0,     5,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     6,     2,     1,
       1,     1,     1,     4,     0,     5,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     7,     0,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     4,     4,     4,     4,     4,     4,     4,     0,
       5,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       0,     6,     2,     1,     1,     1,     1,     4,     4,     0,
       6,     2,     1,     1,     1,     1,     4,     4,     0,     6,
       2,     1,     1,     1,     4,     0,     6,     2,     1,     1,
       1,     1,     4,     4,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     0,     5,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       5,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     0,     6,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     0,
       5,     3,     1,     1,     1,     4,     4,     0,     5,     3,
       1,     1,     1,     5,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     5,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       2,     0,     1,     0,     0,   214,     0,   173,   316,   379,
     388,   395,     0,   556,   370,   199,     0,     0,   108,   264,
       0,     0,   275,   296,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,     0,
     175,   318,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,    74,    75,    77,    76,     0,   601,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   585,   586,   587,   588,   589,   591,
     592,   593,   594,   595,   590,   596,   597,   598,   599,   600,
     190,     0,   176,   341,     0,   319,     0,     0,     0,   459,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   529,     0,   507,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   406,   456,   457,   454,   458,   455,   417,
     407,   408,   445,   409,   410,   411,   412,   413,   414,   415,
     416,   450,   418,   419,   420,   422,   427,   423,   425,   424,
     440,   426,   428,   429,   430,   431,   434,   432,   421,   433,
     436,   444,   446,   447,   437,   438,   452,   453,   449,   439,
     435,   442,   443,   441,   448,   451,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
      85,    86,    87,    90,    92,    91,    88,    89,    45,     0,
       0,     0,    42,    43,    44,   134,     0,   111,     0,   626,
       0,     0,     0,     0,     0,     0,     0,   619,   620,   621,
     622,   624,   623,   625,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    58,    51,    60,
      54,    55,    56,    52,    59,    57,    53,     0,     0,     0,
       0,     0,     0,    73,   233,     0,     0,     0,   238,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   217,   218,   219,   228,   220,   221,   222,   223,   224,
     231,   225,   226,   227,   229,   230,   232,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   584,     0,     0,   385,     0,     0,     0,
     382,   383,   384,   393,     0,     0,   391,   392,   401,     0,
       0,     0,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   405,   566,
     577,     0,     0,   569,     0,     0,     0,   559,   560,   561,
     562,   563,   564,   565,   376,     0,     0,     0,   373,   374,
     375,   206,     0,     0,     0,     0,   202,   203,   204,   205,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,     0,     0,    41,     0,   271,     0,     0,     0,     0,
     267,   268,   269,   270,     0,     0,     0,     0,     0,     0,
       0,   618,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,   282,     0,   285,     0,     0,   278,
     279,   280,   281,   302,     0,   304,     0,   299,   300,   301,
       0,     0,     0,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     216,     0,     0,     0,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   583,   188,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   339,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   349,
       0,     0,     0,     0,     0,     0,     0,     0,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   337,   334,   336,
     335,   333,   330,   331,   332,   338,     0,     0,     0,   381,
       0,     0,   390,     0,     0,     0,   397,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,     0,     0,     0,     0,
       0,     0,   404,     0,     0,     0,     0,     0,     0,     0,
     558,     0,     0,     0,   372,     0,     0,     0,     0,   201,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,     0,     0,    40,   132,     0,
       0,     0,     0,   151,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   114,
     115,   116,   129,   117,   130,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   131,     0,     0,     0,
       0,   266,     0,     0,     0,     0,     0,     0,   617,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,     0,   277,     0,     0,     0,   298,    81,
      80,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   215,   616,   613,
     612,   602,    26,    26,    26,    26,    26,    28,    27,   606,
     607,   611,   609,   614,   615,   608,   610,   603,   604,   605,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     177,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   320,
       0,     0,   380,     0,   389,     0,     0,   396,   470,   474,
     462,   488,   501,   500,   553,   505,   468,   555,   496,   503,
     469,   460,   461,   477,   466,   495,   467,   465,   479,   478,
     497,   473,   472,   471,   498,   494,   551,   552,   491,   533,
     548,   549,   534,   535,   536,   543,   537,   546,   550,   539,
     544,   540,   545,   538,   542,   541,   547,     0,   532,   493,
     511,   526,   527,   512,   513,   514,   521,   515,   524,   528,
     517,   522,   518,   523,   516,   520,   519,   525,     0,   510,
     487,   489,   504,   499,   464,   490,   485,   486,   483,   484,
     481,   482,   476,   475,    34,    34,    34,    36,    35,   554,
     506,   492,   502,   463,   480,     0,     0,     0,     0,     0,
       0,   557,     0,     0,   371,     0,     0,   210,     0,   209,
     200,    98,    99,    97,    96,   100,   106,   101,   105,   103,
     104,   102,    95,    94,   107,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   112,     0,     0,     0,
     265,   631,   627,   630,   632,   628,   629,    65,    71,    63,
      67,    66,    62,    64,    70,    68,    69,     0,     0,     0,
     276,     0,     0,   297,   257,   237,   256,   248,   249,   245,
     251,   247,   246,   253,   250,     0,   252,   244,     0,   241,
     243,   259,   255,   254,   263,   258,   235,   262,   261,   260,
     236,   234,    29,    30,    31,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   174,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   317,   386,   387,   394,   402,
     403,   530,     0,   508,     0,    37,    38,    39,   582,   581,
       0,   580,   568,   567,   574,   573,     0,   572,   576,   575,
     378,   377,   213,   212,     0,   207,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109,   273,   274,   272,   283,
     289,   293,   295,   294,   292,   290,   291,     0,   288,   284,
     303,   308,   312,   315,   314,   313,   311,   309,   310,     0,
     307,   242,   239,     0,   193,   195,   197,   196,   194,   189,
     192,   191,   198,   344,   346,   347,   365,   369,   368,   364,
     363,   362,   348,   358,   359,   356,   357,   355,     0,   360,
       0,   352,   354,   342,   366,   367,   340,   345,   361,   343,
     531,   509,   578,     0,   570,     0,   211,   208,   150,   140,
     148,   137,   165,   163,   172,   162,   157,   166,   170,   159,
     167,     0,   169,   164,   158,   171,   168,   160,   161,     0,
     154,   156,   146,   141,   138,   143,   133,   147,   136,   149,
     142,   139,   145,   135,   144,   286,     0,   305,     0,   240,
     353,   350,     0,   579,   571,   155,   152,     0,   287,   306,
     351,   153
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,    24,   817,   818,   957,   958,    25,   251,   252,
     253,   254,    26,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,    27,    71,    72,    73,    74,
      75,    28,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,    29,    61,   256,   737,   738,   739,   257,   740,
     741,   742,   743,   744,   745,   746,   747,   748,   749,   750,
     751,   752,   753,   754,   755,   756,  1001,  1249,  1250,  1251,
      30,    50,   111,   568,   569,   570,   112,   571,   572,   573,
     574,   575,   576,   577,   578,    31,    58,   455,   456,   457,
     978,   979,   458,   459,    32,    48,   320,   321,   322,   323,
     324,   325,   326,   527,  1058,  1059,  1060,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,    33,    62,   479,
     480,   481,   482,   483,    34,    65,   508,   509,   510,   511,
     512,   781,  1167,  1168,    35,    66,   516,   517,   518,   519,
     786,  1179,  1180,    36,    51,   114,   597,   598,   599,   115,
     600,   601,   602,   603,   604,   605,   606,   850,  1210,  1211,
    1212,   607,   608,   609,   610,   611,   612,   613,   614,   615,
      37,    57,   447,   448,   449,   450,    38,    52,   359,   360,
     361,   362,    39,    53,   365,   366,   367,    40,    54,   371,
     372,   373,   374,    41,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   408,   938,   939,   220,   406,   917,   918,   221,
     222,   223,   224,   225,    42,    56,   436,   437,   438,   439,
     440,   686,  1126,  1127,   441,   442,   443,   683,  1120,  1121,
      43,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    44,   266,
     267,   268,   269,   270,   271,   272,   273
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -837
static const short yypact[] =
{
    -837,   732,  -837,  -203,  -231,  -837,  -229,  -837,  -837,  -837,
    -837,  -837,  -221,  -837,  -837,  -837,  -212,  -202,  -837,  -837,
    -192,  -189,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,   158,  -180,   612,
     -84,   -79,  -155,  -129,  -127,   395,  -112,  -100,   -68,   482,
     145,    49,   -36,   551,   357,   -20,   -16,  -837,   -15,   -14,
      13,    20,  -837,  -837,  -837,  -837,   656,  -837,    31,    33,
      36,    37,    47,    50,    51,    54,    57,    61,    63,    66,
      67,    69,    71,   177,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,    21,  -837,  -837,    25,  -837,     4,     2,    46,  -837,
      75,    76,    81,    84,    87,    90,    92,    93,    94,   110,
     115,   117,   118,   120,   123,   124,   126,   127,   128,   129,
     132,   133,   134,   135,   137,   138,   142,   143,   151,   156,
     159,  -837,   161,  -837,   162,   170,   171,   174,   176,   178,
     181,   182,   185,   187,   188,   189,   192,   199,   203,   205,
     206,   207,     7,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,   297,    11,    52,  -837,
     208,   214,   217,   219,   220,   222,   223,   226,   150,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,   227,
     229,    28,  -837,  -837,  -837,  -837,    53,  -837,   245,  -837,
     230,   232,   240,   241,   244,   249,    70,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,   251,   254,   258,   259,   261,
     264,   269,   270,   276,   277,   121,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,   116,   106,   112,
     183,   201,    73,  -837,  -837,   278,   281,   283,  -837,   286,
     287,   292,   298,   299,   304,   306,   308,   310,   311,   312,
     195,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,   180,   224,   262,
     204,   282,   282,   290,   350,   355,   374,   376,   378,   379,
     380,   382,   198,  -837,   705,   828,  -837,   325,   326,    18,
    -837,  -837,  -837,  -837,   329,    24,  -837,  -837,  -837,   330,
     336,    88,  -837,  -837,  -837,   397,   282,   401,   282,   456,
     439,   464,   411,   412,   414,   470,   453,   420,   475,   476,
     478,   425,   282,   429,   486,   477,   446,   509,   510,   512,
     282,   513,   497,   516,   517,   465,   405,   467,   415,   282,
     282,   473,   506,   479,   501,  -103,   -52,   502,   511,   282,
     282,   531,   282,   519,   520,   521,   522,   422,  -837,  -837,
    -837,   423,   424,  -837,   449,   450,   165,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,   451,   457,    60,  -837,  -837,
    -837,  -837,   458,   466,   471,    16,  -837,  -837,  -837,  -837,
     573,   574,   575,   576,   469,   578,   579,   545,   488,  -837,
     582,   584,   493,  -837,   483,  -837,   491,   492,   499,   148,
    -837,  -837,  -837,  -837,   552,   559,   561,   562,   566,   282,
     514,  -837,   605,   581,   609,   610,   618,   620,   621,   630,
     622,   624,   535,  -837,  -837,   534,  -837,   537,     9,  -837,
    -837,  -837,  -837,  -837,   539,  -837,   111,  -837,  -837,  -837,
     538,   543,   546,  -837,   595,   637,   604,   547,   607,   608,
     611,   617,   619,   645,   664,   648,   654,   625,   657,   564,
    -837,   570,   571,   580,   583,   508,   585,   586,   587,   590,
     591,   599,   600,   613,   614,   615,   623,  -837,  -837,   572,
     602,   606,   629,   631,   633,   634,   635,   636,   213,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
     638,   639,   642,   643,   646,   647,   650,   651,   652,  -837,
     653,   655,   659,   660,   661,   665,   666,   149,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,   668,   670,   628,  -837,
     671,   640,  -837,   674,   699,   667,  -837,   672,   675,   676,
     677,   678,   679,   681,   682,   683,   684,   685,   687,   693,
     696,   700,   701,   703,   704,   706,   708,   709,   710,   711,
     719,   722,   723,   728,   731,   736,   740,   741,   738,   742,
     773,   743,   744,   745,   754,   757,   758,   759,   760,   761,
     762,   763,   764,   765,   766,   169,   767,   768,   769,   770,
     771,   772,  -837,   702,   282,   673,   735,   714,   716,   774,
    -837,   725,   749,   775,  -837,   751,   865,   718,   776,  -837,
     777,   778,   779,   780,   781,   782,   783,   784,   785,   786,
     787,   788,   789,   790,  -837,   791,   792,  -837,  -837,   793,
     794,   795,   796,  -837,   797,   798,   799,   801,   802,   803,
     804,   805,   806,   807,   808,   809,   810,    17,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,   885,   886,   887,
     814,  -837,   815,   816,   817,   818,   819,   820,  -837,   821,
     822,   823,   824,   825,   826,   827,   829,   830,   831,  -837,
     895,   832,   920,   833,  -837,   924,   834,   836,  -837,  -837,
    -837,  -837,   838,   839,   840,   627,   841,   842,   843,   844,
     845,   846,   847,   848,   849,   850,   851,  -837,  -837,  -837,
    -837,  -837,   282,   282,   282,   282,   282,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
     282,   737,   944,   962,   963,   946,   965,   282,   531,   856,
    -837,   949,   -65,   686,   950,   951,   726,   730,   916,   953,
     859,   955,   956,   957,   958,   977,   960,   961,   870,  -837,
     871,   872,  -837,   873,  -837,   874,   875,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -226,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -224,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,   531,   531,   531,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,    14,   876,   877,    29,   878,
     879,  -837,   880,   881,  -837,   882,   883,   663,  -209,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,   940,   978,   941,
     943,   888,   945,   948,   952,   954,   980,   959,   982,   964,
     966,   985,   967,   986,   968,   897,  -837,   899,   900,   901,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,   902,   237,   904,
    -837,   905,   296,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,   800,  -837,  -837,  -201,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,   906,   907,   909,
     913,   914,   915,   917,   918,   919,  -837,   921,   922,   923,
     925,   926,   927,   928,   929,   930,   931,   364,   932,   933,
     934,   935,   936,   937,   938,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,   738,  -837,   773,  -837,  -837,  -837,  -837,  -837,
    -193,  -837,  -837,  -837,  -837,  -837,  -173,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  1005,  -837,   718,   939,   942,   947,
     969,   536,   970,   971,   972,   973,   974,   975,   976,   979,
     981,   983,   984,   987,   988,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -170,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -142,
    -837,  -837,  -837,   627,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,   419,  -837,
    -137,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,    14,  -837,    29,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,   544,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -135,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,   237,  -837,   296,  -837,
    -837,  -837,   364,  -837,  -837,  -837,  -837,   536,  -837,  -837,
    -837,  -837
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -837,  -837,  -837,  -480,  -341,  -836,  -419,  -837,  -837,   898,
    -837,  -837,  -837,  -837,   868,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  1086,  -837,  -837,
    -837,  -837,  -837,   989,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,   114,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -104,   -67,
    -837,  -837,  -837,  -837,   616,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,   721,  -837,
    -837,    41,  -837,  -837,  -837,  -837,  -837,   858,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,    -4,   130,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
     707,  -837,  -837,  -837,  -837,  -837,  -837,   680,  -837,  -837,
    -837,  -837,  -837,   -85,  -837,  -837,  -837,   694,  -837,  -837,
    -837,  -837,   -86,  -837,  -837,  -837,  -837,   592,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,   -89,
     -21,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,   746,  -837,  -837,  -837,  -837,  -837,   835,
    -837,  -837,  -837,  -837,  -837,   853,  -837,  -837,  -837,  -837,
     852,  -837,  -837,  -837,  -837,  1018,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,    77,  -837,  -837,  -837,    80,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,   811,  -837,  -837,
    -837,  -837,  -837,   -30,  -837,  -837,  -837,  -837,  -837,   -27,
    -837,  -837,  1104,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
     990,  -837,  -837,  -837,  -837,  -837,  -837
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, parse error.  */
#define YYTABLE_NINF -1
static const unsigned short yytable[] =
{
     546,   547,   676,   363,    47,   356,    49,  1111,   119,  1113,
     504,  1112,   444,  1114,    55,   120,   121,   451,   718,   356,
     122,    67,   719,    59,  1135,   363,  1118,   123,  1136,   248,
      45,    46,  1182,    60,   124,   628,  1183,   630,   125,   126,
    1222,  1124,   720,    63,  1223,   127,    64,   368,   128,   129,
     130,   644,   131,   451,   721,    76,    68,   110,   132,   652,
    1224,   444,   113,  1265,  1225,   722,    69,  1266,   661,   662,
     723,   259,   133,   134,   667,   668,   135,   724,   673,   674,
     116,   677,   136,   364,   725,   357,   137,   138,   726,   368,
     139,  1267,   452,   140,   141,  1268,  1271,   453,  1276,   357,
    1272,   727,  1277,   142,   143,   364,   117,   513,   118,   260,
     144,   145,   513,   146,   147,   148,   149,   504,  1115,  1116,
    1117,   505,   274,   226,   261,   669,   670,   150,   452,   728,
    1088,  1089,    70,   453,   729,   227,   151,   152,   249,   153,
     262,   154,   155,   263,   264,   156,   248,   358,   767,   475,
     579,   229,   580,   730,   445,   581,   454,   275,   369,    67,
     582,   358,   265,   731,   732,   250,   429,   228,   733,   430,
     157,   476,   158,   583,   584,   585,   159,   506,    77,   586,
     160,   161,   162,   163,   954,   955,   956,   164,   165,   370,
     255,    78,   454,  1119,    68,   166,   304,   587,   276,   258,
     369,   588,   589,   445,    69,   230,   231,   232,  1125,   431,
      79,    80,   432,   233,   558,   297,   305,    81,   514,   298,
     306,   299,   300,   514,   167,   590,   168,   591,   505,   169,
     507,   370,   446,   277,   170,   278,   279,   734,   735,   171,
     592,   427,   559,   783,   307,   234,   475,   736,   308,   301,
     698,  1015,   618,   520,   302,   249,   354,   309,   621,   433,
     355,   593,   472,   310,   477,    82,    83,   337,   476,   338,
      70,   280,   339,   340,   515,    84,    85,   434,   235,   515,
     311,   446,   250,   341,   506,   281,   342,   343,   474,   594,
     344,   478,   675,   345,   693,    86,    87,   346,   429,   347,
     595,   430,   348,   349,   490,   350,   523,   351,   312,   596,
      88,   375,   376,   560,   561,   562,   313,   377,   563,    89,
     378,  1160,   625,   379,   521,   564,   380,   282,   381,   382,
     383,   314,  1072,  1073,  1074,  1075,  1076,   507,   565,   315,
     316,   431,   522,   966,   432,   787,   384,   542,   236,   283,
     284,   385,   566,   386,   387,   502,   388,   541,   274,   389,
     390,   477,   391,   392,   393,   394,   317,   318,   395,   396,
     397,   398,   567,   399,   400,  1203,   237,  1204,   401,   402,
    1171,   544,   760,   858,   468,   543,   435,   403,   478,  1161,
    1205,   433,   404,   275,  1206,   405,   119,   407,   409,   689,
      90,    91,    92,   120,   121,   545,   410,   411,   122,   434,
     412,   352,   413,   548,   414,   123,   319,   415,   416,  1085,
    1162,   417,   124,   418,   419,   420,   125,   126,   421,   539,
    1203,   557,  1204,   127,   276,   422,   128,   129,   130,   423,
     131,   424,   425,   426,   460,  1205,   132,   839,  1172,  1206,
     461,  1163,  1164,   462,  1207,   463,   464,  1165,   465,   466,
     133,   134,   467,   470,   135,   471,   484,  1166,   485,   277,
     136,   278,   279,   549,   137,   138,   486,   487,   139,  1173,
     488,   140,   141,   229,   718,   489,  1208,   492,   719,  1077,
     493,   142,   143,  1174,   494,   495,  1084,   496,   144,   145,
     497,   146,   147,   148,   149,   498,   499,   280,   720,  1207,
    1175,  1176,   500,   501,   524,   150,  1177,   525,   435,   526,
     721,   281,   528,   529,   151,   152,  1178,   153,   530,   154,
     155,   722,   550,   156,   531,   532,   723,   230,   231,   232,
     533,  1232,   534,   724,   535,   233,   536,   537,   538,  1232,
     725,   551,   259,   552,   726,   553,   554,   555,   157,   556,
     158,   616,   617,   282,   159,   620,   623,   727,   160,   161,
     162,   163,   624,  1233,   627,   164,   165,   234,   629,   631,
     632,  1233,  1209,   166,  1234,   283,   284,   633,   634,   635,
     260,   636,  1234,   637,   638,   728,  1235,   639,   640,   641,
     729,   642,   643,  1236,  1235,   261,   645,  1237,  1238,   646,
     235,  1236,   167,    77,   168,  1237,  1238,   169,   647,   730,
    1239,   262,   170,   648,   263,   264,    78,   171,  1239,   731,
     732,   545,   649,   650,   733,   651,   653,  1209,   654,   655,
     656,   658,   657,   265,   659,    79,    80,   664,  1047,  1048,
     663,   660,    81,  1240,   675,   682,   665,   304,  1241,   684,
     685,  1240,   812,   813,   814,   815,   816,  1242,   704,   705,
     706,   707,   708,   709,   710,  1242,  1049,   305,   666,   671,
     236,   306,  1243,  1244,  1245,   687,   688,   691,   672,  1050,
    1243,  1244,  1245,   692,   695,  1051,   678,   679,   680,   681,
      82,    83,   696,   734,   735,   307,   558,   697,   237,   308,
      84,    85,  1052,   736,   700,   701,   702,   703,   309,   711,
     712,   714,   713,   715,   310,   716,   717,   757,   758,   762,
      86,    87,     2,     3,   559,   759,   763,     4,   764,   765,
    1053,   311,     5,   766,  1246,    88,   769,   768,  1054,  1055,
     771,   772,  1246,   776,    89,     6,  1247,     7,   770,   773,
       8,   774,   775,   777,  1247,   778,  1248,     9,   779,   312,
     780,   789,   792,   782,  1248,   785,   790,   313,   793,   791,
    1056,   794,    10,   795,   796,   797,   801,   802,   798,   803,
      11,    12,   314,    13,   799,   804,   800,   807,   806,  1057,
     315,   316,   805,   808,   809,   560,   561,   562,   830,   860,
     563,   861,   863,   810,    14,   865,   811,   564,   819,   820,
     821,  1047,  1048,   822,   823,    15,    16,   317,   318,   579,
     565,   580,   824,   825,   581,    90,    91,    92,   831,   582,
     866,   977,   832,    17,   566,  1134,   826,   827,   828,  1049,
     967,  1016,   583,   584,   585,   969,   829,   970,   586,    18,
    1078,   862,  1050,  1090,   567,   833,   972,   834,  1051,   835,
     836,   837,   838,   864,   841,   842,   587,   319,   843,   844,
     588,   589,   845,   846,    19,  1052,   847,   848,   849,   851,
     973,   852,   975,    20,    21,   853,   854,   855,    22,    23,
     867,   856,   857,  1093,   590,   868,   591,  1094,   869,   870,
     871,   872,   873,  1053,   874,   875,   876,   877,   878,   592,
     879,  1054,   899,   900,   901,   902,   880,   903,   904,   881,
     905,   906,   907,   882,   883,   908,   884,   885,   965,   886,
     593,   887,   888,   889,   890,   909,   910,   911,   912,   913,
     914,   915,   891,  1056,   916,   892,   893,   920,   921,   922,
     923,   894,   924,   925,   895,   926,   927,   928,   594,   896,
     929,   968,  1057,   897,   898,   919,   940,   941,   942,   595,
     930,   931,   932,   933,   934,   935,   936,   943,   596,   937,
     944,   945,   946,   947,   948,   949,   950,   951,   952,   953,
     959,   960,   961,   962,   963,   964,   976,   971,   974,   980,
     981,   982,   983,   984,   985,   986,   987,   988,   989,   990,
     991,   992,   993,   994,   995,   996,  1017,  1018,  1019,   997,
     998,   999,  1000,  1002,  1003,  1004,  1037,  1005,  1006,  1007,
    1008,  1009,  1010,  1011,  1012,  1013,  1014,  1020,  1021,  1022,
    1023,  1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,
    1033,  1039,  1034,  1035,  1036,  1041,  1040,  1079,  1038,  1043,
    1042,  1044,  1045,  1046,  1061,  1062,  1063,  1064,  1065,  1066,
    1067,  1068,  1069,  1070,  1071,  1080,  1081,  1082,  1083,  1086,
    1087,  1091,  1092,  1095,  1096,  1097,  1098,  1099,  1100,  1101,
    1102,  1103,  1104,  1105,  1106,  1107,  1108,  1109,  1110,  1122,
    1123,  1128,  1129,  1130,  1131,  1132,  1133,  1137,  1139,  1138,
    1140,  1146,  1142,  1148,  1141,  1143,  1151,  1153,  1226,  1144,
    1155,  1145,  1156,  1157,  1158,  1159,  1147,  1169,  1170,  1184,
    1185,  1149,  1186,  1150,  1152,  1154,  1187,  1188,  1189,   473,
    1190,  1191,  1192,   503,  1193,  1194,  1195,   303,  1196,  1197,
    1198,  1199,  1200,  1201,  1202,  1213,  1214,  1215,  1216,  1217,
    1218,  1219,  1228,  1281,  1275,  1229,   699,  1227,   540,  1269,
    1230,  1278,  1279,  1280,   840,  1181,   761,  1270,   784,   859,
     428,  1221,  1220,   694,   619,  1274,  1273,   353,     0,     0,
       0,     0,  1231,  1252,  1253,  1254,  1255,  1256,  1257,  1258,
     788,     0,  1259,     0,  1260,     0,  1261,  1262,   622,     0,
    1263,  1264,     0,   626,     0,     0,     0,   469,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   690,     0,     0,
       0,     0,     0,     0,     0,     0,   491
};

static const short yycheck[] =
{
     341,   342,   421,     1,   235,     1,   235,   233,     1,   233,
       1,   237,     1,   237,   235,     8,     9,     1,     1,     1,
      13,     1,     5,   235,   233,     1,    12,    20,   237,     1,
     233,   234,   233,   235,    27,   376,   237,   378,    31,    32,
     233,    12,    25,   235,   237,    38,   235,     1,    41,    42,
      43,   392,    45,     1,    37,   235,    36,   141,    51,   400,
     233,     1,   141,   233,   237,    48,    46,   237,   409,   410,
      53,     1,    65,    66,   177,   178,    69,    60,   419,   420,
     235,   422,    75,    81,    67,    81,    79,    80,    71,     1,
      83,   233,    76,    86,    87,   237,   233,    81,   233,    81,
     237,    84,   237,    96,    97,    81,   235,     1,   235,    39,
     103,   104,     1,   106,   107,   108,   109,     1,   954,   955,
     956,   112,     1,   235,    54,   177,   178,   120,    76,   112,
     195,   196,   112,    81,   117,   235,   129,   130,   110,   132,
      70,   134,   135,    73,    74,   138,     1,   143,   489,     1,
       1,     1,     3,   136,   143,     6,   140,    36,   112,     1,
      11,   143,    92,   146,   147,   137,     1,   235,   151,     4,
     163,    23,   165,    24,    25,    26,   169,   168,     1,    30,
     173,   174,   175,   176,    15,    16,    17,   180,   181,   143,
     141,    14,   140,   179,    36,   188,     1,    48,    77,   235,
     112,    52,    53,   143,    46,    55,    56,    57,   179,    44,
      33,    34,    47,    63,     1,   235,    21,    40,   112,   235,
      25,   236,   236,   112,   217,    76,   219,    78,   112,   222,
     221,   143,   221,   112,   227,   114,   115,   220,   221,   232,
      91,   234,    29,   234,    49,    95,     1,   230,    53,   236,
     234,   234,   234,   141,   234,   110,   235,    62,   234,    94,
     235,   112,   234,    68,   116,    88,    89,   236,    23,   236,
     112,   150,   236,   236,   168,    98,    99,   112,   128,   168,
      85,   221,   137,   236,   168,   164,   236,   236,   235,   140,
     236,   143,   123,   236,   234,   118,   119,   236,     1,   236,
     151,     4,   236,   236,   234,   236,   233,   236,   113,   160,
     133,   236,   236,   100,   101,   102,   121,   236,   105,   142,
     236,    84,   234,   236,   141,   112,   236,   206,   236,   236,
     236,   136,   812,   813,   814,   815,   816,   221,   125,   144,
     145,    44,   141,   684,    47,   234,   236,   123,   198,   228,
     229,   236,   139,   236,   236,   234,   236,   177,     1,   236,
     236,   116,   236,   236,   236,   236,   171,   172,   236,   236,
     236,   236,   159,   236,   236,    11,   226,    13,   236,   236,
      84,   177,   234,   234,   234,   123,   221,   236,   143,   152,
      26,    94,   236,    36,    30,   236,     1,   236,   236,   234,
     223,   224,   225,     8,     9,   123,   236,   236,    13,   112,
     236,   234,   236,   123,   236,    20,   221,   236,   236,   838,
     183,   236,    27,   236,   236,   236,    31,    32,   236,   234,
      11,   233,    13,    38,    77,   236,    41,    42,    43,   236,
      45,   236,   236,   236,   236,    26,    51,   234,   152,    30,
     236,   214,   215,   236,    90,   236,   236,   220,   236,   236,
      65,    66,   236,   236,    69,   236,   236,   230,   236,   112,
      75,   114,   115,   123,    79,    80,   236,   236,    83,   183,
     236,    86,    87,     1,     1,   236,   122,   236,     5,   830,
     236,    96,    97,   197,   236,   236,   837,   236,   103,   104,
     236,   106,   107,   108,   109,   236,   236,   150,    25,    90,
     214,   215,   236,   236,   236,   120,   220,   236,   221,   236,
      37,   164,   236,   236,   129,   130,   230,   132,   236,   134,
     135,    48,   177,   138,   236,   236,    53,    55,    56,    57,
     236,     5,   236,    60,   236,    63,   236,   236,   236,     5,
      67,   177,     1,   177,    71,   177,   177,   177,   163,   177,
     165,   236,   236,   206,   169,   236,   236,    84,   173,   174,
     175,   176,   236,    37,   177,   180,   181,    95,   177,   123,
     141,    37,   218,   188,    48,   228,   229,   123,   177,   177,
      39,   177,    48,   123,   141,   112,    60,   177,   123,   123,
     117,   123,   177,    67,    60,    54,   177,    71,    72,   123,
     128,    67,   217,     1,   219,    71,    72,   222,   141,   136,
      84,    70,   227,   177,    73,    74,    14,   232,    84,   146,
     147,   123,   123,   123,   151,   123,   123,   218,   141,   123,
     123,   236,   177,    92,   177,    33,    34,   141,    21,    22,
     177,   236,    40,   117,   123,   233,   177,     1,   122,   236,
     236,   117,   154,   155,   156,   157,   158,   131,   199,   200,
     201,   202,   203,   204,   205,   131,    49,    21,   177,   177,
     198,    25,   146,   147,   148,   236,   236,   236,   177,    62,
     146,   147,   148,   236,   236,    68,   177,   177,   177,   177,
      88,    89,   236,   220,   221,    49,     1,   236,   226,    53,
      98,    99,    85,   230,   141,   141,   141,   141,    62,   141,
     141,   233,   177,   141,    68,   141,   233,   236,   236,   177,
     118,   119,     0,     1,    29,   236,   177,     5,   177,   177,
     113,    85,    10,   177,   208,   133,   141,   233,   121,   122,
     141,   141,   208,   123,   142,    23,   220,    25,   177,   141,
      28,   141,   141,   141,   220,   141,   230,    35,   233,   113,
     236,   233,   177,   236,   230,   236,   233,   121,   141,   233,
     153,   177,    50,   236,   177,   177,   141,   123,   177,   141,
      58,    59,   136,    61,   177,   141,   177,   233,   141,   172,
     144,   145,   177,   233,   233,   100,   101,   102,   236,   141,
     105,   141,   141,   233,    82,   141,   233,   112,   233,   233,
     233,    21,    22,   233,   233,    93,    94,   171,   172,     1,
     125,     3,   233,   233,     6,   223,   224,   225,   236,    11,
     141,   123,   236,   111,   139,   182,   233,   233,   233,    49,
     177,   737,    24,    25,    26,   141,   233,   141,    30,   127,
     123,   233,    62,   177,   159,   236,   141,   236,    68,   236,
     236,   236,   236,   233,   236,   236,    48,   221,   236,   236,
      52,    53,   236,   236,   152,    85,   236,   236,   236,   236,
     141,   236,   141,   161,   162,   236,   236,   236,   166,   167,
     233,   236,   236,   177,    76,   233,    78,   177,   233,   233,
     233,   233,   233,   113,   233,   233,   233,   233,   233,    91,
     233,   121,   184,   185,   186,   187,   233,   189,   190,   233,
     192,   193,   194,   233,   233,   197,   233,   233,   236,   233,
     112,   233,   233,   233,   233,   207,   208,   209,   210,   211,
     212,   213,   233,   153,   216,   233,   233,   184,   185,   186,
     187,   233,   189,   190,   233,   192,   193,   194,   140,   233,
     197,   236,   172,   233,   233,   233,   233,   233,   233,   151,
     207,   208,   209,   210,   211,   212,   213,   233,   160,   216,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   141,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   141,   141,   141,   236,
     236,   236,   236,   236,   236,   236,   141,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   141,   233,   233,   233,   141,   233,   123,   236,   233,
     236,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   123,   123,   141,   123,   233,
     141,   141,   141,   177,   141,   236,   141,   141,   141,   141,
     123,   141,   141,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   177,   177,   141,
     177,   141,   177,   141,   236,   177,   141,   141,   123,   177,
     233,   177,   233,   233,   233,   233,   177,   233,   233,   233,
     233,   177,   233,   177,   177,   177,   233,   233,   233,   251,
     233,   233,   233,   285,   233,   233,   233,    71,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,  1277,  1241,   233,   455,  1136,   320,  1183,
     233,  1266,  1268,  1272,   568,  1055,   479,  1208,   508,   597,
     172,  1114,  1112,   447,   359,  1225,  1223,    93,    -1,    -1,
      -1,    -1,   233,   233,   233,   233,   233,   233,   233,   233,
     516,    -1,   233,    -1,   233,    -1,   233,   233,   365,    -1,
     233,   233,    -1,   371,    -1,    -1,    -1,   238,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   436,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   266
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,   239,     0,     1,     5,    10,    23,    25,    28,    35,
      50,    58,    59,    61,    82,    93,    94,   111,   127,   152,
     161,   162,   166,   167,   240,   245,   250,   263,   269,   280,
     308,   323,   332,   355,   362,   372,   381,   408,   414,   420,
     425,   431,   492,   508,   526,   233,   234,   235,   333,   235,
     309,   382,   415,   421,   426,   235,   493,   409,   324,   235,
     235,   281,   356,   235,   235,   363,   373,     1,    36,    46,
     112,   264,   265,   266,   267,   268,   235,     1,    14,    33,
      34,    40,    88,    89,    98,    99,   118,   119,   133,   142,
     223,   224,   225,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     141,   310,   314,   141,   383,   387,   235,   235,   235,     1,
       8,     9,    13,    20,    27,    31,    32,    38,    41,    42,
      43,    45,    51,    65,    66,    69,    75,    79,    80,    83,
      86,    87,    96,    97,   103,   104,   106,   107,   108,   109,
     120,   129,   130,   132,   134,   135,   138,   163,   165,   169,
     173,   174,   175,   176,   180,   181,   188,   217,   219,   222,
     227,   232,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     483,   487,   488,   489,   490,   491,   235,   235,   235,     1,
      55,    56,    57,    63,    95,   128,   198,   226,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,     1,   110,
     137,   246,   247,   248,   249,   141,   282,   286,   235,     1,
      39,    54,    70,    73,    74,    92,   527,   528,   529,   530,
     531,   532,   533,   534,     1,    36,    77,   112,   114,   115,
     150,   164,   206,   228,   229,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   235,   235,   236,
     236,   236,   234,   265,     1,    21,    25,    49,    53,    62,
      68,    85,   113,   121,   136,   144,   145,   171,   172,   221,
     334,   335,   336,   337,   338,   339,   340,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   234,   510,   235,   235,     1,    81,   143,   416,
     417,   418,   419,     1,    81,   422,   423,   424,     1,   112,
     143,   427,   428,   429,   430,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   484,   236,   480,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   234,   433,     1,
       4,    44,    47,    94,   112,   221,   494,   495,   496,   497,
     498,   502,   503,   504,     1,   143,   221,   410,   411,   412,
     413,     1,    76,    81,   140,   325,   326,   327,   330,   331,
     236,   236,   236,   236,   236,   236,   236,   236,   234,   271,
     236,   236,   234,   247,   235,     1,    23,   116,   143,   357,
     358,   359,   360,   361,   236,   236,   236,   236,   236,   236,
     234,   528,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   234,   252,     1,   112,   168,   221,   364,   365,
     366,   367,   368,     1,   112,   168,   374,   375,   376,   377,
     141,   141,   141,   233,   236,   236,   236,   341,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   234,
     335,   177,   123,   123,   177,   123,   242,   242,   123,   123,
     177,   177,   177,   177,   177,   177,   177,   233,     1,    29,
     100,   101,   102,   105,   112,   125,   139,   159,   311,   312,
     313,   315,   316,   317,   318,   319,   320,   321,   322,     1,
       3,     6,    11,    24,    25,    26,    30,    48,    52,    53,
      76,    78,    91,   112,   140,   151,   160,   384,   385,   386,
     388,   389,   390,   391,   392,   393,   394,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   236,   236,   234,   417,
     236,   234,   423,   236,   236,   234,   428,   177,   242,   177,
     242,   123,   141,   123,   177,   177,   177,   123,   141,   177,
     123,   123,   123,   177,   242,   177,   123,   141,   177,   123,
     123,   123,   242,   123,   141,   123,   123,   177,   236,   177,
     236,   242,   242,   177,   141,   177,   177,   177,   178,   177,
     178,   177,   177,   242,   242,   123,   244,   242,   177,   177,
     177,   177,   233,   505,   236,   236,   499,   236,   236,   234,
     495,   236,   236,   234,   411,   236,   236,   236,   234,   326,
     141,   141,   141,   141,   199,   200,   201,   202,   203,   204,
     205,   141,   141,   177,   233,   141,   141,   233,     1,     5,
      25,    37,    48,    53,    60,    67,    71,    84,   112,   117,
     136,   146,   147,   151,   220,   221,   230,   283,   284,   285,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   236,   236,   236,
     234,   358,   177,   177,   177,   177,   177,   242,   233,   141,
     177,   141,   141,   141,   141,   141,   123,   141,   141,   233,
     236,   369,   236,   234,   365,   236,   378,   234,   375,   233,
     233,   233,   177,   141,   177,   236,   177,   177,   177,   177,
     177,   141,   123,   141,   141,   177,   141,   233,   233,   233,
     233,   233,   154,   155,   156,   157,   158,   241,   242,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   234,
     312,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     395,   236,   236,   236,   236,   236,   236,   236,   234,   385,
     141,   141,   233,   141,   233,   141,   141,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   184,
     185,   186,   187,   189,   190,   192,   193,   194,   197,   207,
     208,   209,   210,   211,   212,   213,   216,   485,   486,   233,
     184,   185,   186,   187,   189,   190,   192,   193,   194,   197,
     207,   208,   209,   210,   211,   212,   213,   216,   481,   482,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,    15,    16,    17,   243,   244,   233,
     233,   233,   233,   233,   233,   236,   242,   177,   236,   141,
     141,   233,   141,   141,   233,   141,   141,   123,   328,   329,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   236,   236,   236,
     236,   304,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   234,   284,   141,   141,   141,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   141,   236,   141,
     233,   141,   236,   233,   233,   233,   233,    21,    22,    49,
      62,    68,    85,   113,   121,   122,   153,   172,   342,   343,
     344,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   241,   241,   241,   241,   241,   242,   123,   123,
     123,   123,   141,   123,   242,   244,   233,   141,   195,   196,
     177,   141,   141,   177,   177,   177,   141,   236,   141,   141,
     141,   141,   123,   141,   141,   233,   233,   233,   233,   233,
     233,   233,   237,   233,   237,   243,   243,   243,    12,   179,
     506,   507,   233,   233,    12,   179,   500,   501,   233,   233,
     233,   233,   233,   233,   182,   233,   237,   177,   141,   177,
     177,   236,   177,   177,   177,   177,   141,   177,   141,   177,
     177,   141,   177,   141,   177,   233,   233,   233,   233,   233,
      84,   152,   183,   214,   215,   220,   230,   370,   371,   233,
     233,    84,   152,   183,   197,   214,   215,   220,   230,   379,
     380,   344,   233,   237,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,    11,    13,    26,    30,    90,   122,   218,
     396,   397,   398,   233,   233,   233,   233,   233,   233,   233,
     486,   482,   233,   237,   233,   237,   123,   329,   233,   233,
     233,   233,     5,    37,    48,    60,    67,    71,    72,    84,
     117,   122,   131,   146,   147,   148,   208,   220,   230,   305,
     306,   307,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   237,   233,   237,   343,
     398,   233,   237,   507,   501,   307,   233,   237,   371,   380,
     397,   306
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
#line 393 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 28:
#line 395 "ircd_parser.y"
    {
			yyval.number = yyvsp[-1].number + yyvsp[0].number;
		}
    break;

  case 29:
#line 399 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number + yyvsp[0].number;
		}
    break;

  case 30:
#line 403 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 + yyvsp[0].number;
		}
    break;

  case 31:
#line 407 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 + yyvsp[0].number;
		}
    break;

  case 32:
#line 411 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 + yyvsp[0].number;
		}
    break;

  case 33:
#line 415 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 * 7 + yyvsp[0].number;
		}
    break;

  case 34:
#line 420 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 36:
#line 421 "ircd_parser.y"
    { yyval.number = yyvsp[-1].number + yyvsp[0].number; }
    break;

  case 37:
#line 422 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number + yyvsp[0].number; }
    break;

  case 38:
#line 423 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 + yyvsp[0].number; }
    break;

  case 39:
#line 424 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 * 1024 + yyvsp[0].number; }
    break;

  case 46:
#line 438 "ircd_parser.y"
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
#line 455 "ircd_parser.y"
    {
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
}
    break;

  case 62:
#line 479 "ircd_parser.y"
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
#line 534 "ircd_parser.y"
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
#line 548 "ircd_parser.y"
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
#line 566 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.description);
    DupString(ServerInfo.description,yylval.string);
  }
}
    break;

  case 66:
#line 575 "ircd_parser.y"
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
#line 589 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.network_desc);
    DupString(ServerInfo.network_desc, yylval.string);
  }
}
    break;

  case 68:
#line 598 "ircd_parser.y"
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
#line 626 "ircd_parser.y"
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
#line 656 "ircd_parser.y"
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
#line 672 "ircd_parser.y"
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
#line 728 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.name);
    DupString(AdminInfo.name, yylval.string);
  }
}
    break;

  case 80:
#line 737 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.email);
    DupString(AdminInfo.email, yylval.string);
  }
}
    break;

  case 81:
#line 746 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.description);
    DupString(AdminInfo.description, yylval.string);
  }
}
    break;

  case 94:
#line 769 "ircd_parser.y"
    {
                        }
    break;

  case 95:
#line 773 "ircd_parser.y"
    {
                        }
    break;

  case 96:
#line 777 "ircd_parser.y"
    {
                        }
    break;

  case 97:
#line 781 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
}
    break;

  case 98:
#line 788 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
}
    break;

  case 99:
#line 795 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
}
    break;

  case 100:
#line 802 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
}
    break;

  case 101:
#line 806 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
}
    break;

  case 102:
#line 810 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
}
    break;

  case 103:
#line 814 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
}
    break;

  case 104:
#line 818 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
}
    break;

  case 105:
#line 822 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
}
    break;

  case 106:
#line 826 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
}
    break;

  case 107:
#line 832 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 108:
#line 841 "ircd_parser.y"
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
#line 853 "ircd_parser.y"
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
#line 944 "ircd_parser.y"
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
#line 956 "ircd_parser.y"
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
#line 968 "ircd_parser.y"
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
#line 991 "ircd_parser.y"
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
#line 1003 "ircd_parser.y"
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
#line 1014 "ircd_parser.y"
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
#line 1025 "ircd_parser.y"
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
#line 1067 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 141:
#line 1076 "ircd_parser.y"
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
#line 1087 "ircd_parser.y"
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
#line 1098 "ircd_parser.y"
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
#line 1109 "ircd_parser.y"
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
#line 1120 "ircd_parser.y"
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
#line 1131 "ircd_parser.y"
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
#line 1142 "ircd_parser.y"
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
#line 1153 "ircd_parser.y"
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
#line 1164 "ircd_parser.y"
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
#line 1175 "ircd_parser.y"
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
#line 1186 "ircd_parser.y"
    {
}
    break;

  case 155:
#line 1190 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 156:
#line 1191 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 157:
#line 1194 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 158:
#line 1201 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 159:
#line 1208 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 160:
#line 1215 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 161:
#line 1222 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 162:
#line 1229 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 163:
#line 1236 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 164:
#line 1243 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 165:
#line 1250 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 166:
#line 1257 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 167:
#line 1264 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 168:
#line 1271 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 169:
#line 1278 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 170:
#line 1285 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 171:
#line 1292 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 172:
#line 1299 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) ClearConfEncrypted(yy_aconf);
    else SetConfEncrypted(yy_aconf);
  }
}
    break;

  case 173:
#line 1312 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = (struct ClassItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 174:
#line 1319 "ircd_parser.y"
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

  case 189:
#line 1346 "ircd_parser.y"
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
#line 1392 "ircd_parser.y"
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
#line 1438 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 192:
#line 1444 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = yyvsp[-1].number;
}
    break;

  case 193:
#line 1450 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 194:
#line 1456 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = yyvsp[-1].number;
}
    break;

  case 195:
#line 1462 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = yyvsp[-1].number;
}
    break;

  case 196:
#line 1468 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = yyvsp[-1].number;
}
    break;

  case 197:
#line 1474 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = yyvsp[-1].number;
}
    break;

  case 198:
#line 1480 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = yyvsp[-1].number;
}
    break;

  case 199:
#line 1489 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_address = NULL;
}
    break;

  case 200:
#line 1493 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 210:
#line 1509 "ircd_parser.y"
    {
  if (ypass == 2)
    add_listener(yyvsp[0].number, listener_address);
}
    break;

  case 211:
#line 1513 "ircd_parser.y"
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
#line 1535 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 214:
#line 1547 "ircd_parser.y"
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

  case 215:
#line 1559 "ircd_parser.y"
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

  case 234:
#line 1629 "ircd_parser.y"
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

  case 235:
#line 1658 "ircd_parser.y"
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

  case 236:
#line 1671 "ircd_parser.y"
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

  case 237:
#line 1682 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 238:
#line 1691 "ircd_parser.y"
    {
}
    break;

  case 242:
#line 1695 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 243:
#line 1696 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 244:
#line 1699 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 245:
#line 1707 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 246:
#line 1714 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 247:
#line 1721 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 248:
#line 1728 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 249:
#line 1735 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 250:
#line 1742 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 251:
#line 1749 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 252:
#line 1756 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 253:
#line 1763 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 254:
#line 1772 "ircd_parser.y"
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

  case 255:
#line 1783 "ircd_parser.y"
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

  case 256:
#line 1794 "ircd_parser.y"
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

  case 257:
#line 1805 "ircd_parser.y"
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

  case 258:
#line 1816 "ircd_parser.y"
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

  case 259:
#line 1827 "ircd_parser.y"
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

  case 260:
#line 1839 "ircd_parser.y"
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

  case 261:
#line 1858 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 262:
#line 1868 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = yyvsp[-1].number;
  }
}
    break;

  case 263:
#line 1877 "ircd_parser.y"
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

  case 264:
#line 1892 "ircd_parser.y"
    {
  if (ypass == 2)
    resv_reason = NULL;
}
    break;

  case 265:
#line 1896 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 272:
#line 1908 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 273:
#line 1917 "ircd_parser.y"
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

  case 274:
#line 1932 "ircd_parser.y"
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

  case 275:
#line 1950 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(ULINE_TYPE);
    yy_match_item = map_to_conf(yy_conf);
    yy_match_item->action = SHARED_ALL;
  }
}
    break;

  case 276:
#line 1958 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 283:
#line 1969 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 284:
#line 1978 "ircd_parser.y"
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

  case 285:
#line 1993 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 289:
#line 2000 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 290:
#line 2004 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 291:
#line 2008 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 292:
#line 2012 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 293:
#line 2016 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 294:
#line 2020 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 295:
#line 2024 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 296:
#line 2033 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_match_item = (struct MatchItem *)map_to_conf(yy_conf);
    yy_match_item->action = CLUSTER_ALL;
  }
}
    break;

  case 297:
#line 2041 "ircd_parser.y"
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

  case 303:
#line 2058 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 304:
#line 2064 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 308:
#line 2071 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_KLINE;
}
    break;

  case 309:
#line 2075 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNKLINE;
}
    break;

  case 310:
#line 2079 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_XLINE;
}
    break;

  case 311:
#line 2083 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNXLINE;
}
    break;

  case 312:
#line 2087 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_RESV;
}
    break;

  case 313:
#line 2091 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNRESV;
}
    break;

  case 314:
#line 2095 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_LOCOPS;
}
    break;

  case 315:
#line 2099 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = CLUSTER_ALL;
}
    break;

  case 316:
#line 2108 "ircd_parser.y"
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

  case 317:
#line 2126 "ircd_parser.y"
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

  case 340:
#line 2268 "ircd_parser.y"
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
#line 2280 "ircd_parser.y"
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

  case 342:
#line 2292 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 343:
#line 2301 "ircd_parser.y"
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

  case 344:
#line 2313 "ircd_parser.y"
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

  case 345:
#line 2325 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = yyvsp[-1].number;
}
    break;

  case 346:
#line 2331 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 347:
#line 2335 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 348:
#line 2343 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 349:
#line 2352 "ircd_parser.y"
    {
}
    break;

  case 353:
#line 2356 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 354:
#line 2357 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 355:
#line 2360 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfLazyLink(yy_aconf);
    else SetConfLazyLink(yy_aconf);
  }
}
    break;

  case 356:
#line 2367 "ircd_parser.y"
    {
  if (ypass == 2)
#ifndef HAVE_LIBZ
    yyerror("Ignoring flags = compressed; -- no zlib support");
#else
 {
   if (not_atom)ClearConfCompressed(yy_aconf);
   else SetConfCompressed(yy_aconf);
 }
#endif
}
    break;

  case 357:
#line 2378 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfCryptLink(yy_aconf);
    else SetConfCryptLink(yy_aconf);
  }
}
    break;

  case 358:
#line 2385 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAllowAutoConn(yy_aconf);
    else SetConfAllowAutoConn(yy_aconf);
  }
}
    break;

  case 359:
#line 2392 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAwayBurst(yy_aconf);
    else SetConfAwayBurst(yy_aconf);
  }
}
    break;

  case 360:
#line 2399 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfTopicBurst(yy_aconf);
    else SetConfTopicBurst(yy_aconf);
  }
}
    break;

  case 361:
#line 2408 "ircd_parser.y"
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

  case 362:
#line 2449 "ircd_parser.y"
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

  case 363:
#line 2460 "ircd_parser.y"
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

  case 364:
#line 2471 "ircd_parser.y"
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

  case 365:
#line 2486 "ircd_parser.y"
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

  case 366:
#line 2497 "ircd_parser.y"
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

  case 367:
#line 2510 "ircd_parser.y"
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

  case 368:
#line 2523 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 369:
#line 2532 "ircd_parser.y"
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

  case 370:
#line 2567 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(KLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 371:
#line 2574 "ircd_parser.y"
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

  case 377:
#line 2593 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    DupString(yy_aconf->host, yylval.string);
    split_user_host(yy_aconf->host, &yy_aconf->user, &yy_aconf->host);
  }
}
    break;

  case 378:
#line 2602 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 379:
#line 2614 "ircd_parser.y"
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

  case 380:
#line 2623 "ircd_parser.y"
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

  case 386:
#line 2639 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 387:
#line 2648 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 388:
#line 2660 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(EXEMPTDLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    DupString(yy_aconf->passwd, "*");
  }
}
    break;

  case 389:
#line 2668 "ircd_parser.y"
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

  case 394:
#line 2684 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 395:
#line 2696 "ircd_parser.y"
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

  case 396:
#line 2705 "ircd_parser.y"
    {
  /* XXX */
}
    break;

  case 402:
#line 2713 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    DupString(yy_conf->name, yylval.string);
    collapse(yy_conf->name);
  }
}
    break;

  case 403:
#line 2722 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_match_item->reason);
    DupString(yy_match_item->reason, yylval.string);
  }
}
    break;

  case 460:
#line 2770 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr = yyvsp[-1].number;
}
    break;

  case 461:
#line 2776 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr6 = yyvsp[-1].number;
}
    break;

  case 462:
#line 2782 "ircd_parser.y"
    {
  if (ypass == 1) /* must be set in the 1st pass */
    ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 463:
#line 2788 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
}
    break;

  case 464:
#line 2793 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 465:
#line 2798 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kill_chase_time_limit = yyvsp[-1].number;
}
    break;

  case 466:
#line 2804 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 467:
#line 2810 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 468:
#line 2816 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 469:
#line 2822 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 470:
#line 2828 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 471:
#line 2834 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_time = yyvsp[-1].number; 
}
    break;

  case 472:
#line 2840 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_changes = yyvsp[-1].number;
}
    break;

  case 473:
#line 2846 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_accept = yyvsp[-1].number;
}
    break;

  case 474:
#line 2852 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_spam_exit_message_time = yyvsp[-1].number;
}
    break;

  case 475:
#line 2858 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_warn_delta = yyvsp[-1].number;
}
    break;

  case 476:
#line 2864 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = yyvsp[-1].number;
}
    break;

  case 477:
#line 2870 "ircd_parser.y"
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

  case 478:
#line 2881 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 479:
#line 2887 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 480:
#line 2896 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 481:
#line 2902 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 482:
#line 2908 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 483:
#line 2914 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 484:
#line 2918 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 485:
#line 2924 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 486:
#line 2928 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 487:
#line 2934 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait = yyvsp[-1].number;
}
    break;

  case 488:
#line 2940 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.caller_id_wait = yyvsp[-1].number;
}
    break;

  case 489:
#line 2946 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait_simple = yyvsp[-1].number;
}
    break;

  case 490:
#line 2952 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 491:
#line 2958 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 492:
#line 2964 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 493:
#line 2970 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 494:
#line 2976 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
}
    break;

  case 495:
#line 2987 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.idletime = yyvsp[-1].number;
}
    break;

  case 496:
#line 2993 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dots_in_ident = yyvsp[-1].number;
}
    break;

  case 497:
#line 2999 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.maximum_links = yyvsp[-1].number;
}
    break;

  case 498:
#line 3005 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_targets = yyvsp[-1].number;
}
    break;

  case 499:
#line 3011 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 500:
#line 3020 "ircd_parser.y"
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

  case 501:
#line 3052 "ircd_parser.y"
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

  case 502:
#line 3070 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 503:
#line 3076 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 504:
#line 3085 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 505:
#line 3091 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 506:
#line 3096 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 507:
#line 3102 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 511:
#line 3109 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 512:
#line 3113 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 513:
#line 3117 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEAF;
}
    break;

  case 514:
#line 3121 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 515:
#line 3125 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 516:
#line 3129 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 517:
#line 3133 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 518:
#line 3137 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 519:
#line 3141 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 520:
#line 3145 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 521:
#line 3149 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 522:
#line 3153 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 523:
#line 3157 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 524:
#line 3161 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 525:
#line 3165 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 526:
#line 3169 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 527:
#line 3173 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 528:
#line 3177 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 529:
#line 3183 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 533:
#line 3190 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 534:
#line 3194 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 535:
#line 3198 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEAF;
}
    break;

  case 536:
#line 3202 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 537:
#line 3206 "ircd_parser.y"
    { 
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 538:
#line 3210 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 539:
#line 3214 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 540:
#line 3218 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 541:
#line 3222 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 542:
#line 3226 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 543:
#line 3230 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 544:
#line 3234 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 545:
#line 3238 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 546:
#line 3242 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 547:
#line 3246 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 548:
#line 3250 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 549:
#line 3254 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 550:
#line 3258 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 551:
#line 3264 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard = yyvsp[-1].number;
}
    break;

  case 552:
#line 3270 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard_simple = yyvsp[-1].number;
}
    break;

  case 553:
#line 3276 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.default_floodcount = yyvsp[-1].number;
}
    break;

  case 554:
#line 3282 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.client_flood = yyvsp[-1].number;
}
    break;

  case 555:
#line 3288 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 556:
#line 3297 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->flags = 0;
  }
}
    break;

  case 557:
#line 3305 "ircd_parser.y"
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

  case 567:
#line 3332 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 568:
#line 3338 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = yyvsp[-1].number;
}
    break;

  case 569:
#line 3344 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 573:
#line 3350 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 574:
#line 3354 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 575:
#line 3360 "ircd_parser.y"
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

  case 576:
#line 3383 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 577:
#line 3392 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 578:
#line 3396 "ircd_parser.y"
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

  case 581:
#line 3436 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 582:
#line 3440 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 602:
#line 3470 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 603:
#line 3476 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_except = yylval.number;
}
    break;

  case 604:
#line 3482 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_invex = yylval.number;
}
    break;

  case 605:
#line 3488 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_knock = yylval.number;
}
    break;

  case 606:
#line 3494 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay = yyvsp[-1].number;
}
    break;

  case 607:
#line 3500 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay_channel = yyvsp[-1].number;
}
    break;

  case 608:
#line 3506 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 609:
#line 3512 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_chans_per_user = yyvsp[-1].number;
}
    break;

  case 610:
#line 3518 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 611:
#line 3524 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_bans = yyvsp[-1].number;
}
    break;

  case 612:
#line 3530 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_user_count = yyvsp[-1].number;
}
    break;

  case 613:
#line 3536 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_server_count = yyvsp[-1].number;
}
    break;

  case 614:
#line 3542 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 615:
#line 3548 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 616:
#line 3554 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.burst_topicwho = yylval.number;
}
    break;

  case 627:
#line 3574 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 628:
#line 3580 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 629:
#line 3586 "ircd_parser.y"
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

  case 630:
#line 3600 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 631:
#line 3606 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 632:
#line 3612 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 1016 of /usr/local/share/bison/yacc.c.  */
#line 6634 "y.tab.c"

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


#line 364 "ircd_parser.y"

