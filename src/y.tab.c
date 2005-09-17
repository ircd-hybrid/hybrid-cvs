/* $Id: y.tab.c,v 7.74 2005/09/17 15:00:14 michael Exp $ */
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
     AUTOCONN = 265,
     T_BLOCK = 266,
     BURST_AWAY = 267,
     BURST_TOPICWHO = 268,
     BYTES = 269,
     KBYTES = 270,
     MBYTES = 271,
     GBYTES = 272,
     TBYTES = 273,
     CALLER_ID_WAIT = 274,
     CAN_FLOOD = 275,
     CAN_IDLE = 276,
     CHANNEL = 277,
     CIDR_BITLEN = 278,
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
     FKILLLOG = 311,
     FKLINELOG = 312,
     FGLINELOG = 313,
     FIOERRLOG = 314,
     FOPERLOG = 315,
     FOPERSPYLOG = 316,
     FUSERLOG = 317,
     GECOS = 318,
     GENERAL = 319,
     GLINE = 320,
     GLINES = 321,
     GLINE_EXEMPT = 322,
     GLINE_LOG = 323,
     GLINE_TIME = 324,
     GLINE_MIN_CIDR = 325,
     GLINE_MIN_CIDR6 = 326,
     GLOBAL_KILL = 327,
     IRCD_AUTH = 328,
     NEED_IDENT = 329,
     HAVENT_READ_CONF = 330,
     HIDDEN = 331,
     HIDDEN_ADMIN = 332,
     HIDDEN_NAME = 333,
     HIDDEN_OPER = 334,
     HIDE_SERVER_IPS = 335,
     HIDE_SERVERS = 336,
     HIDE_SPOOF_IPS = 337,
     HOST = 338,
     HUB = 339,
     HUB_MASK = 340,
     IDLETIME = 341,
     IGNORE_BOGUS_TS = 342,
     INVISIBLE_ON_CONNECT = 343,
     IP = 344,
     KILL = 345,
     KILL_CHASE_TIME_LIMIT = 346,
     KLINE = 347,
     KLINE_EXEMPT = 348,
     KLINE_REASON = 349,
     KLINE_WITH_REASON = 350,
     KNOCK_DELAY = 351,
     KNOCK_DELAY_CHANNEL = 352,
     LAZYLINK = 353,
     LEAF_MASK = 354,
     LINKS_DELAY = 355,
     LISTEN = 356,
     T_LOG = 357,
     LOGGING = 358,
     LOG_LEVEL = 359,
     MAX_ACCEPT = 360,
     MAX_BANS = 361,
     MAX_CHANS_PER_USER = 362,
     MAX_GLOBAL = 363,
     MAX_IDENT = 364,
     MAX_LOCAL = 365,
     MAX_NICK_CHANGES = 366,
     MAX_NICK_TIME = 367,
     MAX_NUMBER = 368,
     MAX_TARGETS = 369,
     MESSAGE_LOCALE = 370,
     MIN_NONWILDCARD = 371,
     MIN_NONWILDCARD_SIMPLE = 372,
     MODULE = 373,
     MODULES = 374,
     NAME = 375,
     NEED_PASSWORD = 376,
     NETWORK_DESC = 377,
     NETWORK_NAME = 378,
     NICK = 379,
     NICK_CHANGES = 380,
     NO_CREATE_ON_SPLIT = 381,
     NO_JOIN_ON_SPLIT = 382,
     NO_OPER_FLOOD = 383,
     NO_TILDE = 384,
     NOT = 385,
     NUMBER = 386,
     NUMBER_PER_IDENT = 387,
     NUMBER_PER_CIDR = 388,
     NUMBER_PER_IP = 389,
     NUMBER_PER_IP_GLOBAL = 390,
     OPERATOR = 391,
     OPERS_BYPASS_CALLERID = 392,
     OPER_LOG = 393,
     OPER_ONLY_UMODES = 394,
     OPER_PASS_RESV = 395,
     OPER_SPY_T = 396,
     OPER_UMODES = 397,
     INVITE_OPS_ONLY = 398,
     JOIN_FLOOD_COUNT = 399,
     JOIN_FLOOD_TIME = 400,
     PACE_WAIT = 401,
     PACE_WAIT_SIMPLE = 402,
     PASSWORD = 403,
     PATH = 404,
     PING_COOKIE = 405,
     PING_TIME = 406,
     PING_WARNING = 407,
     PORT = 408,
     QSTRING = 409,
     QUIET_ON_BAN = 410,
     REASON = 411,
     REDIRPORT = 412,
     REDIRSERV = 413,
     REGEX_T = 414,
     REHASH = 415,
     TREJECT_HOLD_TIME = 416,
     REMOTE = 417,
     REMOTEBAN = 418,
     RESTRICT_CHANNELS = 419,
     RESTRICTED = 420,
     RSA_PRIVATE_KEY_FILE = 421,
     RSA_PUBLIC_KEY_FILE = 422,
     SSL_CERTIFICATE_FILE = 423,
     RESV = 424,
     RESV_EXEMPT = 425,
     SECONDS = 426,
     MINUTES = 427,
     HOURS = 428,
     DAYS = 429,
     WEEKS = 430,
     SENDQ = 431,
     SEND_PASSWORD = 432,
     SERVERHIDE = 433,
     SERVERINFO = 434,
     SERVLINK_PATH = 435,
     IRCD_SID = 436,
     TKLINE_EXPIRE_NOTICES = 437,
     T_SHARED = 438,
     T_CLUSTER = 439,
     TYPE = 440,
     SHORT_MOTD = 441,
     SILENT = 442,
     SPOOF = 443,
     SPOOF_NOTICE = 444,
     STATS_I_OPER_ONLY = 445,
     STATS_K_OPER_ONLY = 446,
     STATS_O_OPER_ONLY = 447,
     STATS_P_OPER_ONLY = 448,
     TBOOL = 449,
     TMASKED = 450,
     T_REJECT = 451,
     TS_MAX_DELTA = 452,
     TS_WARN_DELTA = 453,
     TWODOTS = 454,
     T_ALL = 455,
     T_BOTS = 456,
     T_SOFTCALLERID = 457,
     T_CALLERID = 458,
     T_CCONN = 459,
     T_CLIENT_FLOOD = 460,
     T_DEAF = 461,
     T_DEBUG = 462,
     T_DRONE = 463,
     T_EXTERNAL = 464,
     T_FULL = 465,
     T_INVISIBLE = 466,
     T_IPV4 = 467,
     T_IPV6 = 468,
     T_LOCOPS = 469,
     T_LOGPATH = 470,
     T_L_CRIT = 471,
     T_L_DEBUG = 472,
     T_L_ERROR = 473,
     T_L_INFO = 474,
     T_L_NOTICE = 475,
     T_L_TRACE = 476,
     T_L_WARN = 477,
     T_MAX_CLIENTS = 478,
     T_NCHANGE = 479,
     T_OPERWALL = 480,
     T_REJ = 481,
     T_SERVNOTICE = 482,
     T_SKILL = 483,
     T_SPY = 484,
     T_SSL = 485,
     T_UNAUTH = 486,
     T_UNRESV = 487,
     T_UNXLINE = 488,
     T_WALLOP = 489,
     THROTTLE_TIME = 490,
     TOPICBURST = 491,
     TRUE_NO_OPER_FLOOD = 492,
     TKLINE = 493,
     TXLINE = 494,
     TRESV = 495,
     UNKLINE = 496,
     USER = 497,
     USE_EGD = 498,
     USE_EXCEPT = 499,
     USE_INVEX = 500,
     USE_KNOCK = 501,
     USE_LOGGING = 502,
     USE_WHOIS_ACTUALLY = 503,
     VHOST = 504,
     VHOST6 = 505,
     XLINE = 506,
     WARN = 507,
     WARN_NO_NLINE = 508
   };
#endif
#define ACCEPT_PASSWORD 258
#define ACTION 259
#define ADMIN 260
#define AFTYPE 261
#define T_ALLOW 262
#define ANTI_NICK_FLOOD 263
#define ANTI_SPAM_EXIT_MESSAGE_TIME 264
#define AUTOCONN 265
#define T_BLOCK 266
#define BURST_AWAY 267
#define BURST_TOPICWHO 268
#define BYTES 269
#define KBYTES 270
#define MBYTES 271
#define GBYTES 272
#define TBYTES 273
#define CALLER_ID_WAIT 274
#define CAN_FLOOD 275
#define CAN_IDLE 276
#define CHANNEL 277
#define CIDR_BITLEN 278
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
#define FKILLLOG 311
#define FKLINELOG 312
#define FGLINELOG 313
#define FIOERRLOG 314
#define FOPERLOG 315
#define FOPERSPYLOG 316
#define FUSERLOG 317
#define GECOS 318
#define GENERAL 319
#define GLINE 320
#define GLINES 321
#define GLINE_EXEMPT 322
#define GLINE_LOG 323
#define GLINE_TIME 324
#define GLINE_MIN_CIDR 325
#define GLINE_MIN_CIDR6 326
#define GLOBAL_KILL 327
#define IRCD_AUTH 328
#define NEED_IDENT 329
#define HAVENT_READ_CONF 330
#define HIDDEN 331
#define HIDDEN_ADMIN 332
#define HIDDEN_NAME 333
#define HIDDEN_OPER 334
#define HIDE_SERVER_IPS 335
#define HIDE_SERVERS 336
#define HIDE_SPOOF_IPS 337
#define HOST 338
#define HUB 339
#define HUB_MASK 340
#define IDLETIME 341
#define IGNORE_BOGUS_TS 342
#define INVISIBLE_ON_CONNECT 343
#define IP 344
#define KILL 345
#define KILL_CHASE_TIME_LIMIT 346
#define KLINE 347
#define KLINE_EXEMPT 348
#define KLINE_REASON 349
#define KLINE_WITH_REASON 350
#define KNOCK_DELAY 351
#define KNOCK_DELAY_CHANNEL 352
#define LAZYLINK 353
#define LEAF_MASK 354
#define LINKS_DELAY 355
#define LISTEN 356
#define T_LOG 357
#define LOGGING 358
#define LOG_LEVEL 359
#define MAX_ACCEPT 360
#define MAX_BANS 361
#define MAX_CHANS_PER_USER 362
#define MAX_GLOBAL 363
#define MAX_IDENT 364
#define MAX_LOCAL 365
#define MAX_NICK_CHANGES 366
#define MAX_NICK_TIME 367
#define MAX_NUMBER 368
#define MAX_TARGETS 369
#define MESSAGE_LOCALE 370
#define MIN_NONWILDCARD 371
#define MIN_NONWILDCARD_SIMPLE 372
#define MODULE 373
#define MODULES 374
#define NAME 375
#define NEED_PASSWORD 376
#define NETWORK_DESC 377
#define NETWORK_NAME 378
#define NICK 379
#define NICK_CHANGES 380
#define NO_CREATE_ON_SPLIT 381
#define NO_JOIN_ON_SPLIT 382
#define NO_OPER_FLOOD 383
#define NO_TILDE 384
#define NOT 385
#define NUMBER 386
#define NUMBER_PER_IDENT 387
#define NUMBER_PER_CIDR 388
#define NUMBER_PER_IP 389
#define NUMBER_PER_IP_GLOBAL 390
#define OPERATOR 391
#define OPERS_BYPASS_CALLERID 392
#define OPER_LOG 393
#define OPER_ONLY_UMODES 394
#define OPER_PASS_RESV 395
#define OPER_SPY_T 396
#define OPER_UMODES 397
#define INVITE_OPS_ONLY 398
#define JOIN_FLOOD_COUNT 399
#define JOIN_FLOOD_TIME 400
#define PACE_WAIT 401
#define PACE_WAIT_SIMPLE 402
#define PASSWORD 403
#define PATH 404
#define PING_COOKIE 405
#define PING_TIME 406
#define PING_WARNING 407
#define PORT 408
#define QSTRING 409
#define QUIET_ON_BAN 410
#define REASON 411
#define REDIRPORT 412
#define REDIRSERV 413
#define REGEX_T 414
#define REHASH 415
#define TREJECT_HOLD_TIME 416
#define REMOTE 417
#define REMOTEBAN 418
#define RESTRICT_CHANNELS 419
#define RESTRICTED 420
#define RSA_PRIVATE_KEY_FILE 421
#define RSA_PUBLIC_KEY_FILE 422
#define SSL_CERTIFICATE_FILE 423
#define RESV 424
#define RESV_EXEMPT 425
#define SECONDS 426
#define MINUTES 427
#define HOURS 428
#define DAYS 429
#define WEEKS 430
#define SENDQ 431
#define SEND_PASSWORD 432
#define SERVERHIDE 433
#define SERVERINFO 434
#define SERVLINK_PATH 435
#define IRCD_SID 436
#define TKLINE_EXPIRE_NOTICES 437
#define T_SHARED 438
#define T_CLUSTER 439
#define TYPE 440
#define SHORT_MOTD 441
#define SILENT 442
#define SPOOF 443
#define SPOOF_NOTICE 444
#define STATS_I_OPER_ONLY 445
#define STATS_K_OPER_ONLY 446
#define STATS_O_OPER_ONLY 447
#define STATS_P_OPER_ONLY 448
#define TBOOL 449
#define TMASKED 450
#define T_REJECT 451
#define TS_MAX_DELTA 452
#define TS_WARN_DELTA 453
#define TWODOTS 454
#define T_ALL 455
#define T_BOTS 456
#define T_SOFTCALLERID 457
#define T_CALLERID 458
#define T_CCONN 459
#define T_CLIENT_FLOOD 460
#define T_DEAF 461
#define T_DEBUG 462
#define T_DRONE 463
#define T_EXTERNAL 464
#define T_FULL 465
#define T_INVISIBLE 466
#define T_IPV4 467
#define T_IPV6 468
#define T_LOCOPS 469
#define T_LOGPATH 470
#define T_L_CRIT 471
#define T_L_DEBUG 472
#define T_L_ERROR 473
#define T_L_INFO 474
#define T_L_NOTICE 475
#define T_L_TRACE 476
#define T_L_WARN 477
#define T_MAX_CLIENTS 478
#define T_NCHANGE 479
#define T_OPERWALL 480
#define T_REJ 481
#define T_SERVNOTICE 482
#define T_SKILL 483
#define T_SPY 484
#define T_SSL 485
#define T_UNAUTH 486
#define T_UNRESV 487
#define T_UNXLINE 488
#define T_WALLOP 489
#define THROTTLE_TIME 490
#define TOPICBURST 491
#define TRUE_NO_OPER_FLOOD 492
#define TKLINE 493
#define TXLINE 494
#define TRESV 495
#define UNKLINE 496
#define USER 497
#define USE_EGD 498
#define USE_EXCEPT 499
#define USE_INVEX 500
#define USE_KNOCK 501
#define USE_LOGGING 502
#define USE_WHOIS_ACTUALLY 503
#define VHOST 504
#define VHOST6 505
#define XLINE 506
#define WARN 507
#define WARN_NO_NLINE 508




/* Copy the first part of user declarations.  */
#line 25 "ircd_parser.y"


#define YY_NO_UNPUT
#include <sys/types.h>

#include "stdinc.h"
#include "dalloca.h"
#include "ircd.h"
#include "tools.h"
#include "list.h"
#include "s_conf.h"
#include "event.h"
#include "s_log.h"
#include "client.h"	/* for UMODE_ALL only */
#include "pcre.h"
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
static unsigned int regex_ban = 0;
static char userbuf[IRCD_BUFSIZE];
static char hostbuf[IRCD_BUFSIZE];
static char reasonbuf[REASONLEN + 1];
static char gecos_name[REALLEN * 4];

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
#line 133 "ircd_parser.y"
typedef union YYSTYPE {
  int number;
  char *string;
} YYSTYPE;
/* Line 190 of yacc.c.  */
#line 695 "y.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 213 of yacc.c.  */
#line 707 "y.tab.c"

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
#define YYLAST   1381

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  259
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  325
/* YYNRULES -- Number of rules. */
#define YYNRULES  691
/* YYNRULES -- Number of states. */
#define YYNSTATES  1416

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   508

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned short int yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   258,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   254,
       2,   257,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   256,     2,   255,     2,     2,     2,     2,
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
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253
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
      97,   103,   106,   108,   110,   112,   115,   120,   125,   131,
     134,   136,   138,   140,   142,   144,   146,   148,   150,   152,
     154,   156,   158,   161,   166,   171,   176,   181,   186,   191,
     196,   201,   206,   211,   216,   222,   225,   227,   229,   231,
     233,   236,   241,   246,   251,   257,   260,   262,   264,   266,
     268,   270,   272,   274,   276,   278,   280,   282,   284,   286,
     289,   294,   299,   304,   309,   314,   319,   324,   329,   334,
     339,   344,   349,   354,   359,   364,   369,   374,   379,   380,
     388,   389,   391,   394,   396,   398,   400,   402,   404,   406,
     408,   410,   412,   414,   416,   418,   420,   422,   424,   426,
     428,   430,   432,   434,   437,   442,   444,   449,   454,   459,
     464,   469,   474,   479,   484,   489,   494,   499,   504,   509,
     514,   519,   524,   529,   530,   536,   540,   542,   545,   547,
     549,   551,   553,   555,   557,   559,   561,   563,   565,   567,
     569,   571,   573,   575,   577,   579,   580,   588,   589,   591,
     594,   596,   598,   600,   602,   604,   606,   608,   610,   612,
     614,   616,   618,   620,   623,   628,   630,   635,   640,   645,
     650,   655,   660,   665,   670,   675,   680,   685,   686,   693,
     694,   700,   704,   706,   708,   710,   713,   715,   717,   719,
     721,   723,   726,   731,   735,   737,   739,   743,   748,   753,
     754,   761,   764,   766,   768,   770,   772,   774,   776,   778,
     780,   782,   784,   786,   788,   790,   792,   794,   796,   798,
     801,   806,   811,   816,   821,   826,   827,   833,   837,   839,
     842,   844,   846,   848,   850,   852,   854,   856,   858,   860,
     862,   864,   869,   874,   879,   884,   889,   894,   899,   904,
     909,   914,   915,   922,   925,   927,   929,   931,   933,   936,
     941,   946,   951,   952,   959,   962,   964,   966,   968,   970,
     973,   978,   983,   984,   990,   994,   996,   998,  1000,  1002,
    1004,  1006,  1008,  1010,  1012,  1014,  1016,  1018,  1019,  1026,
    1029,  1031,  1033,  1035,  1038,  1043,  1044,  1050,  1054,  1056,
    1058,  1060,  1062,  1064,  1066,  1068,  1070,  1072,  1074,  1076,
    1078,  1079,  1087,  1088,  1090,  1093,  1095,  1097,  1099,  1101,
    1103,  1105,  1107,  1109,  1111,  1113,  1115,  1117,  1119,  1121,
    1123,  1125,  1127,  1129,  1131,  1134,  1139,  1141,  1146,  1151,
    1156,  1161,  1166,  1171,  1176,  1181,  1182,  1188,  1192,  1194,
    1197,  1199,  1201,  1203,  1205,  1207,  1209,  1211,  1216,  1221,
    1226,  1231,  1236,  1241,  1246,  1251,  1256,  1257,  1264,  1265,
    1271,  1275,  1277,  1279,  1282,  1284,  1286,  1288,  1290,  1292,
    1297,  1302,  1303,  1310,  1313,  1315,  1317,  1319,  1321,  1326,
    1331,  1337,  1340,  1342,  1344,  1346,  1351,  1352,  1359,  1360,
    1366,  1370,  1372,  1374,  1377,  1379,  1381,  1383,  1385,  1387,
    1392,  1397,  1403,  1406,  1408,  1410,  1412,  1414,  1416,  1418,
    1420,  1422,  1424,  1426,  1428,  1430,  1432,  1434,  1436,  1438,
    1440,  1442,  1444,  1446,  1448,  1450,  1452,  1454,  1456,  1458,
    1460,  1462,  1464,  1466,  1468,  1470,  1472,  1474,  1476,  1478,
    1480,  1482,  1484,  1486,  1488,  1490,  1492,  1494,  1496,  1498,
    1500,  1502,  1504,  1506,  1508,  1510,  1512,  1514,  1516,  1518,
    1520,  1522,  1527,  1532,  1537,  1542,  1547,  1552,  1557,  1562,
    1567,  1572,  1577,  1582,  1587,  1592,  1597,  1602,  1607,  1612,
    1617,  1622,  1627,  1632,  1637,  1642,  1647,  1652,  1657,  1662,
    1667,  1672,  1677,  1682,  1687,  1692,  1697,  1702,  1707,  1712,
    1717,  1722,  1727,  1732,  1737,  1742,  1747,  1752,  1757,  1762,
    1767,  1772,  1777,  1778,  1784,  1788,  1790,  1792,  1794,  1796,
    1798,  1800,  1802,  1804,  1806,  1808,  1810,  1812,  1814,  1816,
    1818,  1820,  1822,  1824,  1826,  1827,  1833,  1837,  1839,  1841,
    1843,  1845,  1847,  1849,  1851,  1853,  1855,  1857,  1859,  1861,
    1863,  1865,  1867,  1869,  1871,  1873,  1875,  1880,  1885,  1890,
    1895,  1900,  1901,  1908,  1911,  1913,  1915,  1917,  1919,  1921,
    1923,  1925,  1927,  1932,  1937,  1938,  1944,  1948,  1950,  1952,
    1954,  1959,  1964,  1965,  1971,  1975,  1977,  1979,  1981,  1987,
    1990,  1992,  1994,  1996,  1998,  2000,  2002,  2004,  2006,  2008,
    2010,  2012,  2014,  2016,  2018,  2020,  2022,  2024,  2026,  2031,
    2036,  2041,  2046,  2051,  2056,  2061,  2066,  2071,  2076,  2081,
    2086,  2091,  2096,  2101,  2106,  2112,  2115,  2117,  2119,  2121,
    2123,  2125,  2127,  2129,  2131,  2133,  2138,  2143,  2148,  2153,
    2158,  2163
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     260,     0,    -1,    -1,   260,   261,    -1,   285,    -1,   291,
      -1,   306,    -1,   555,    -1,   335,    -1,   353,    -1,   366,
      -1,   271,    -1,   574,    -1,   390,    -1,   397,    -1,   407,
      -1,   416,    -1,   444,    -1,   454,    -1,   460,    -1,   474,
      -1,   539,    -1,   464,    -1,   266,    -1,     1,   254,    -1,
       1,   255,    -1,    -1,   263,    -1,   131,   262,    -1,   131,
     171,   262,    -1,   131,   172,   262,    -1,   131,   173,   262,
      -1,   131,   174,   262,    -1,   131,   175,   262,    -1,    -1,
     265,    -1,   131,   264,    -1,   131,    14,   264,    -1,   131,
      15,   264,    -1,   131,    16,   264,    -1,   119,   256,   267,
     255,   254,    -1,   267,   268,    -1,   268,    -1,   269,    -1,
     270,    -1,     1,   254,    -1,   118,   257,   154,   254,    -1,
     149,   257,   154,   254,    -1,   179,   256,   272,   255,   254,
      -1,   272,   273,    -1,   273,    -1,   276,    -1,   281,    -1,
     284,    -1,   278,    -1,   279,    -1,   280,    -1,   283,    -1,
     275,    -1,   282,    -1,   277,    -1,   274,    -1,     1,   254,
      -1,   168,   257,   154,   254,    -1,   166,   257,   154,   254,
      -1,   120,   257,   154,   254,    -1,   181,   257,   154,   254,
      -1,    36,   257,   154,   254,    -1,   123,   257,   154,   254,
      -1,   122,   257,   154,   254,    -1,   249,   257,   154,   254,
      -1,   250,   257,   154,   254,    -1,   223,   257,   131,   254,
      -1,    84,   257,   194,   254,    -1,     5,   256,   286,   255,
     254,    -1,   286,   287,    -1,   287,    -1,   288,    -1,   290,
      -1,   289,    -1,     1,   254,    -1,   120,   257,   154,   254,
      -1,    46,   257,   154,   254,    -1,    36,   257,   154,   254,
      -1,   103,   256,   292,   255,   254,    -1,   292,   293,    -1,
     293,    -1,   294,    -1,   295,    -1,   304,    -1,   305,    -1,
     296,    -1,   298,    -1,   300,    -1,   301,    -1,   303,    -1,
     299,    -1,   302,    -1,   297,    -1,     1,   254,    -1,   215,
     257,   154,   254,    -1,   138,   257,   154,   254,    -1,    62,
     257,   154,   254,    -1,    55,   257,   154,   254,    -1,    60,
     257,   154,   254,    -1,    61,   257,   154,   254,    -1,    58,
     257,   154,   254,    -1,    57,   257,   154,   254,    -1,    59,
     257,   154,   254,    -1,    56,   257,   154,   254,    -1,   104,
     257,   216,   254,    -1,   104,   257,   218,   254,    -1,   104,
     257,   222,   254,    -1,   104,   257,   220,   254,    -1,   104,
     257,   221,   254,    -1,   104,   257,   219,   254,    -1,   104,
     257,   217,   254,    -1,   247,   257,   194,   254,    -1,    -1,
     136,   307,   308,   256,   309,   255,   254,    -1,    -1,   312,
      -1,   309,   310,    -1,   310,    -1,   311,    -1,   313,    -1,
     314,    -1,   316,    -1,   318,    -1,   319,    -1,   320,    -1,
     322,    -1,   323,    -1,   324,    -1,   325,    -1,   326,    -1,
     321,    -1,   327,    -1,   328,    -1,   329,    -1,   315,    -1,
     317,    -1,   330,    -1,     1,   254,    -1,   120,   257,   154,
     254,    -1,   154,    -1,   242,   257,   154,   254,    -1,   148,
     257,   154,   254,    -1,    48,   257,   194,   254,    -1,    77,
     257,   194,   254,    -1,   167,   257,   154,   254,    -1,    25,
     257,   154,   254,    -1,    72,   257,   194,   254,    -1,   162,
     257,   194,   254,    -1,   163,   257,   194,   254,    -1,    92,
     257,   194,   254,    -1,   251,   257,   194,   254,    -1,   241,
     257,   194,   254,    -1,    65,   257,   194,   254,    -1,   125,
     257,   194,   254,    -1,    37,   257,   194,   254,    -1,   160,
     257,   194,   254,    -1,     5,   257,   194,   254,    -1,    -1,
      53,   331,   257,   332,   254,    -1,   332,   258,   333,    -1,
     333,    -1,   130,   334,    -1,   334,    -1,    72,    -1,   162,
      -1,    92,    -1,   241,    -1,   251,    -1,    65,    -1,    37,
      -1,   160,    -1,     5,    -1,    77,    -1,   125,    -1,   225,
      -1,   141,    -1,    79,    -1,   163,    -1,    48,    -1,    -1,
      25,   336,   337,   256,   338,   255,   254,    -1,    -1,   341,
      -1,   338,   339,    -1,   339,    -1,   340,    -1,   351,    -1,
     342,    -1,   343,    -1,   352,    -1,   344,    -1,   345,    -1,
     346,    -1,   347,    -1,   348,    -1,   349,    -1,   350,    -1,
       1,   254,    -1,   120,   257,   154,   254,    -1,   154,    -1,
     151,   257,   263,   254,    -1,   152,   257,   263,   254,    -1,
     134,   257,   131,   254,    -1,    29,   257,   263,   254,    -1,
     113,   257,   131,   254,    -1,   108,   257,   131,   254,    -1,
     110,   257,   131,   254,    -1,   109,   257,   131,   254,    -1,
     176,   257,   265,   254,    -1,    23,   257,   131,   254,    -1,
     133,   257,   131,   254,    -1,    -1,   101,   354,   256,   359,
     255,   254,    -1,    -1,    53,   356,   257,   357,   254,    -1,
     357,   258,   358,    -1,   358,    -1,   230,    -1,    76,    -1,
     359,   360,    -1,   360,    -1,   361,    -1,   355,    -1,   364,
      -1,   365,    -1,     1,   254,    -1,   153,   257,   362,   254,
      -1,   362,   258,   363,    -1,   363,    -1,   131,    -1,   131,
     199,   131,    -1,    89,   257,   154,   254,    -1,    83,   257,
     154,   254,    -1,    -1,    73,   367,   256,   368,   255,   254,
      -1,   368,   369,    -1,   369,    -1,   370,    -1,   371,    -1,
     373,    -1,   375,    -1,   380,    -1,   381,    -1,   382,    -1,
     384,    -1,   385,    -1,   386,    -1,   372,    -1,   387,    -1,
     388,    -1,   383,    -1,   389,    -1,   374,    -1,     1,   254,
      -1,   242,   257,   154,   254,    -1,   148,   257,   154,   254,
      -1,   189,   257,   194,   254,    -1,    25,   257,   154,   254,
      -1,    48,   257,   194,   254,    -1,    -1,    53,   376,   257,
     377,   254,    -1,   377,   258,   378,    -1,   378,    -1,   130,
     379,    -1,   379,    -1,   189,    -1,    49,    -1,    93,    -1,
      74,    -1,    20,    -1,    21,    -1,   129,    -1,    67,    -1,
     170,    -1,   121,    -1,    93,   257,   194,   254,    -1,    74,
     257,   194,   254,    -1,    49,   257,   194,   254,    -1,    20,
     257,   194,   254,    -1,   129,   257,   194,   254,    -1,    67,
     257,   194,   254,    -1,   188,   257,   154,   254,    -1,   158,
     257,   154,   254,    -1,   157,   257,   131,   254,    -1,   121,
     257,   194,   254,    -1,    -1,   169,   391,   256,   392,   255,
     254,    -1,   392,   393,    -1,   393,    -1,   394,    -1,   395,
      -1,   396,    -1,     1,   254,    -1,   156,   257,   154,   254,
      -1,    22,   257,   154,   254,    -1,   124,   257,   154,   254,
      -1,    -1,   183,   398,   256,   399,   255,   254,    -1,   399,
     400,    -1,   400,    -1,   401,    -1,   402,    -1,   403,    -1,
       1,   254,    -1,   120,   257,   154,   254,    -1,   242,   257,
     154,   254,    -1,    -1,   185,   404,   257,   405,   254,    -1,
     405,   258,   406,    -1,   406,    -1,    92,    -1,   238,    -1,
     241,    -1,   251,    -1,   239,    -1,   233,    -1,   169,    -1,
     240,    -1,   232,    -1,   214,    -1,   200,    -1,    -1,   184,
     408,   256,   409,   255,   254,    -1,   409,   410,    -1,   410,
      -1,   411,    -1,   412,    -1,     1,   254,    -1,   120,   257,
     154,   254,    -1,    -1,   185,   413,   257,   414,   254,    -1,
     414,   258,   415,    -1,   415,    -1,    92,    -1,   238,    -1,
     241,    -1,   251,    -1,   239,    -1,   233,    -1,   169,    -1,
     240,    -1,   232,    -1,   214,    -1,   200,    -1,    -1,    28,
     417,   418,   256,   419,   255,   254,    -1,    -1,   422,    -1,
     419,   420,    -1,   420,    -1,   421,    -1,   423,    -1,   424,
      -1,   425,    -1,   426,    -1,   428,    -1,   427,    -1,   429,
      -1,   430,    -1,   440,    -1,   441,    -1,   442,    -1,   439,
      -1,   436,    -1,   438,    -1,   437,    -1,   435,    -1,   443,
      -1,     1,   254,    -1,   120,   257,   154,   254,    -1,   154,
      -1,    83,   257,   154,   254,    -1,   249,   257,   154,   254,
      -1,   177,   257,   154,   254,    -1,     3,   257,   154,   254,
      -1,   153,   257,   131,   254,    -1,     6,   257,   212,   254,
      -1,     6,   257,   213,   254,    -1,    52,   257,   154,   254,
      -1,    -1,    53,   431,   257,   432,   254,    -1,   432,   258,
     433,    -1,   433,    -1,   130,   434,    -1,   434,    -1,    98,
      -1,    26,    -1,    30,    -1,    10,    -1,    12,    -1,   236,
      -1,   167,   257,   154,   254,    -1,    48,   257,   194,   254,
      -1,    30,   257,   194,   254,    -1,    26,   257,   194,   254,
      -1,    10,   257,   194,   254,    -1,    85,   257,   154,   254,
      -1,    99,   257,   154,   254,    -1,    25,   257,   154,   254,
      -1,    24,   257,   154,   254,    -1,    -1,    90,   445,   256,
     450,   255,   254,    -1,    -1,   185,   447,   257,   448,   254,
      -1,   448,   258,   449,    -1,   449,    -1,   159,    -1,   450,
     451,    -1,   451,    -1,   452,    -1,   453,    -1,   446,    -1,
       1,    -1,   242,   257,   154,   254,    -1,   156,   257,   154,
     254,    -1,    -1,    35,   455,   256,   456,   255,   254,    -1,
     456,   457,    -1,   457,    -1,   458,    -1,   459,    -1,     1,
      -1,    89,   257,   154,   254,    -1,   156,   257,   154,   254,
      -1,    50,   256,   461,   255,   254,    -1,   461,   462,    -1,
     462,    -1,   463,    -1,     1,    -1,    89,   257,   154,   254,
      -1,    -1,    63,   465,   256,   470,   255,   254,    -1,    -1,
     185,   467,   257,   468,   254,    -1,   468,   258,   469,    -1,
     469,    -1,   159,    -1,   470,   471,    -1,   471,    -1,   472,
      -1,   473,    -1,   466,    -1,     1,    -1,   120,   257,   154,
     254,    -1,   156,   257,   154,   254,    -1,    64,   256,   475,
     255,   254,    -1,   475,   476,    -1,   476,    -1,   486,    -1,
     487,    -1,   489,    -1,   490,    -1,   491,    -1,   492,    -1,
     493,    -1,   494,    -1,   495,    -1,   496,    -1,   485,    -1,
     498,    -1,   499,    -1,   500,    -1,   501,    -1,   516,    -1,
     502,    -1,   504,    -1,   506,    -1,   505,    -1,   509,    -1,
     503,    -1,   510,    -1,   511,    -1,   512,    -1,   513,    -1,
     515,    -1,   514,    -1,   530,    -1,   517,    -1,   521,    -1,
     522,    -1,   526,    -1,   507,    -1,   508,    -1,   536,    -1,
     534,    -1,   535,    -1,   518,    -1,   488,    -1,   519,    -1,
     520,    -1,   537,    -1,   525,    -1,   497,    -1,   538,    -1,
     523,    -1,   524,    -1,   479,    -1,   484,    -1,   477,    -1,
     478,    -1,   480,    -1,   481,    -1,   482,    -1,   483,    -1,
       1,    -1,    70,   257,   131,   254,    -1,    71,   257,   131,
     254,    -1,    12,   257,   194,   254,    -1,   248,   257,   194,
     254,    -1,   161,   257,   131,   254,    -1,   144,   257,   131,
     254,    -1,   145,   257,   131,   254,    -1,   182,   257,   194,
     254,    -1,    91,   257,   131,   254,    -1,    82,   257,   194,
     254,    -1,    87,   257,   194,   254,    -1,    41,   257,   194,
     254,    -1,    51,   257,   194,   254,    -1,     8,   257,   194,
     254,    -1,   112,   257,   263,   254,    -1,   111,   257,   131,
     254,    -1,   105,   257,   131,   254,    -1,     9,   257,   263,
     254,    -1,   198,   257,   263,   254,    -1,   197,   257,   263,
     254,    -1,    75,   257,   131,   254,    -1,    95,   257,   194,
     254,    -1,    94,   257,   154,   254,    -1,    88,   257,   194,
     254,    -1,   253,   257,   194,   254,    -1,   192,   257,   194,
     254,    -1,   193,   257,   194,   254,    -1,   191,   257,   194,
     254,    -1,   191,   257,   195,   254,    -1,   190,   257,   194,
     254,    -1,   190,   257,   195,   254,    -1,   146,   257,   263,
     254,    -1,    19,   257,   263,   254,    -1,   137,   257,   194,
     254,    -1,   147,   257,   263,   254,    -1,   186,   257,   194,
     254,    -1,   128,   257,   194,   254,    -1,   237,   257,   194,
     254,    -1,   140,   257,   194,   254,    -1,   115,   257,   154,
     254,    -1,    86,   257,   263,   254,    -1,    43,   257,   131,
     254,    -1,   114,   257,   131,   254,    -1,   180,   257,   154,
     254,    -1,    31,   257,   154,   254,    -1,    27,   257,   131,
     254,    -1,   243,   257,   194,   254,    -1,    45,   257,   154,
     254,    -1,   150,   257,   194,   254,    -1,    38,   257,   194,
     254,    -1,   235,   257,   263,   254,    -1,    -1,   142,   527,
     257,   528,   254,    -1,   528,   258,   529,    -1,   529,    -1,
     201,    -1,   204,    -1,   206,    -1,   207,    -1,   210,    -1,
     228,    -1,   224,    -1,   226,    -1,   231,    -1,   229,    -1,
     209,    -1,   225,    -1,   227,    -1,   211,    -1,   234,    -1,
     202,    -1,   203,    -1,   214,    -1,    -1,   139,   531,   257,
     532,   254,    -1,   532,   258,   533,    -1,   533,    -1,   201,
      -1,   204,    -1,   206,    -1,   207,    -1,   210,    -1,   228,
      -1,   224,    -1,   226,    -1,   231,    -1,   229,    -1,   209,
      -1,   225,    -1,   227,    -1,   211,    -1,   234,    -1,   202,
      -1,   203,    -1,   214,    -1,   116,   257,   131,   254,    -1,
     117,   257,   131,   254,    -1,    32,   257,   131,   254,    -1,
     205,   257,   265,   254,    -1,    42,   257,   194,   254,    -1,
      -1,    66,   540,   256,   541,   255,   254,    -1,   541,   542,
      -1,   542,    -1,   543,    -1,   544,    -1,   545,    -1,   549,
      -1,   550,    -1,   551,    -1,     1,    -1,    47,   257,   194,
     254,    -1,    44,   257,   263,   254,    -1,    -1,   103,   546,
     257,   547,   254,    -1,   547,   258,   548,    -1,   548,    -1,
     196,    -1,    11,    -1,   242,   257,   154,   254,    -1,   120,
     257,   154,   254,    -1,    -1,     4,   552,   257,   553,   254,
      -1,   553,   258,   554,    -1,   554,    -1,   196,    -1,    11,
      -1,    22,   256,   556,   255,   254,    -1,   556,   557,    -1,
     557,    -1,   558,    -1,   559,    -1,   560,    -1,   561,    -1,
     562,    -1,   568,    -1,   563,    -1,   564,    -1,   565,    -1,
     566,    -1,   567,    -1,   569,    -1,   570,    -1,   571,    -1,
     572,    -1,   573,    -1,     1,    -1,   164,   257,   194,   254,
      -1,    40,   257,   194,   254,    -1,   244,   257,   194,   254,
      -1,   245,   257,   194,   254,    -1,   246,   257,   194,   254,
      -1,    96,   257,   263,   254,    -1,    97,   257,   263,   254,
      -1,   143,   257,   194,   254,    -1,   107,   257,   131,   254,
      -1,   155,   257,   194,   254,    -1,   106,   257,   131,   254,
      -1,    34,   257,   131,   254,    -1,    33,   257,   131,   254,
      -1,   126,   257,   194,   254,    -1,   127,   257,   194,   254,
      -1,    13,   257,   194,   254,    -1,   178,   256,   575,   255,
     254,    -1,   575,   576,    -1,   576,    -1,   577,    -1,   578,
      -1,   580,    -1,   582,    -1,   581,    -1,   579,    -1,   583,
      -1,     1,    -1,    54,   257,   194,   254,    -1,    81,   257,
     194,   254,    -1,    78,   257,   154,   254,    -1,   100,   257,
     263,   254,    -1,    76,   257,   194,   254,    -1,    39,   257,
     194,   254,    -1,    80,   257,   194,   254,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   390,   390,   391,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   419,   419,   420,   424,
     428,   432,   436,   440,   446,   446,   447,   448,   449,   450,
     457,   460,   460,   461,   461,   461,   463,   480,   491,   494,
     495,   496,   496,   497,   497,   498,   498,   499,   500,   500,
     501,   501,   502,   504,   538,   598,   612,   630,   639,   653,
     662,   690,   720,   736,   786,   788,   788,   789,   789,   790,
     790,   792,   801,   810,   823,   825,   826,   828,   828,   829,
     830,   830,   831,   831,   832,   832,   833,   833,   834,   835,
     837,   841,   845,   852,   859,   866,   873,   880,   887,   894,
     901,   905,   909,   913,   917,   921,   925,   931,   941,   940,
    1034,  1034,  1035,  1035,  1036,  1036,  1036,  1036,  1037,  1037,
    1037,  1038,  1038,  1038,  1039,  1039,  1039,  1040,  1040,  1040,
    1041,  1041,  1042,  1042,  1044,  1056,  1068,  1087,  1099,  1110,
    1121,  1163,  1172,  1183,  1194,  1205,  1216,  1227,  1238,  1249,
    1260,  1271,  1282,  1294,  1293,  1297,  1297,  1298,  1299,  1301,
    1308,  1315,  1322,  1329,  1336,  1343,  1350,  1357,  1364,  1371,
    1378,  1385,  1392,  1399,  1406,  1420,  1419,  1439,  1439,  1441,
    1441,  1442,  1443,  1444,  1445,  1446,  1447,  1448,  1449,  1450,
    1451,  1452,  1453,  1454,  1456,  1503,  1550,  1556,  1562,  1568,
    1574,  1580,  1586,  1592,  1598,  1604,  1610,  1620,  1619,  1636,
    1635,  1639,  1639,  1640,  1644,  1650,  1650,  1651,  1651,  1651,
    1651,  1651,  1653,  1655,  1655,  1657,  1672,  1694,  1703,  1716,
    1715,  1784,  1784,  1785,  1785,  1785,  1785,  1786,  1786,  1787,
    1787,  1787,  1788,  1788,  1789,  1789,  1789,  1790,  1790,  1790,
    1792,  1811,  1824,  1835,  1844,  1856,  1855,  1859,  1859,  1860,
    1861,  1863,  1871,  1878,  1885,  1892,  1899,  1906,  1913,  1920,
    1927,  1936,  1947,  1958,  1969,  1980,  1991,  2003,  2022,  2032,
    2041,  2057,  2056,  2072,  2072,  2073,  2073,  2073,  2073,  2075,
    2084,  2099,  2113,  2112,  2128,  2128,  2129,  2129,  2129,  2129,
    2131,  2140,  2149,  2148,  2154,  2154,  2155,  2159,  2163,  2167,
    2171,  2175,  2179,  2183,  2187,  2191,  2195,  2205,  2204,  2221,
    2221,  2222,  2222,  2222,  2224,  2231,  2230,  2236,  2236,  2237,
    2241,  2245,  2249,  2253,  2257,  2261,  2265,  2269,  2273,  2277,
    2287,  2286,  2436,  2436,  2437,  2437,  2438,  2438,  2438,  2439,
    2439,  2440,  2440,  2441,  2441,  2441,  2442,  2442,  2442,  2443,
    2443,  2443,  2444,  2444,  2445,  2447,  2459,  2471,  2480,  2506,
    2518,  2530,  2536,  2540,  2548,  2558,  2557,  2561,  2561,  2562,
    2563,  2565,  2572,  2583,  2590,  2597,  2604,  2614,  2655,  2666,
    2677,  2692,  2703,  2716,  2729,  2738,  2774,  2773,  2835,  2834,
    2838,  2838,  2839,  2845,  2845,  2846,  2846,  2846,  2846,  2848,
    2864,  2874,  2873,  2895,  2895,  2896,  2896,  2896,  2898,  2907,
    2919,  2921,  2921,  2922,  2922,  2924,  2946,  2945,  2987,  2986,
    2990,  2990,  2991,  2997,  2997,  2998,  2998,  2998,  2998,  3000,
    3006,  3015,  3018,  3018,  3019,  3019,  3020,  3020,  3021,  3021,
    3022,  3022,  3023,  3023,  3024,  3024,  3025,  3025,  3026,  3026,
    3027,  3027,  3028,  3028,  3029,  3029,  3030,  3030,  3031,  3031,
    3032,  3032,  3033,  3033,  3034,  3034,  3035,  3035,  3036,  3036,
    3037,  3037,  3038,  3038,  3039,  3040,  3040,  3041,  3041,  3042,
    3042,  3043,  3043,  3044,  3044,  3045,  3045,  3046,  3046,  3047,
    3048,  3052,  3057,  3062,  3067,  3072,  3077,  3082,  3087,  3092,
    3097,  3102,  3107,  3112,  3117,  3122,  3127,  3132,  3137,  3142,
    3147,  3153,  3164,  3169,  3178,  3183,  3188,  3193,  3198,  3201,
    3206,  3209,  3214,  3219,  3224,  3229,  3234,  3239,  3244,  3249,
    3254,  3265,  3270,  3275,  3280,  3289,  3321,  3339,  3344,  3353,
    3358,  3363,  3369,  3368,  3373,  3373,  3374,  3377,  3380,  3383,
    3386,  3389,  3392,  3395,  3398,  3401,  3404,  3407,  3410,  3413,
    3416,  3419,  3422,  3425,  3431,  3430,  3435,  3435,  3436,  3439,
    3442,  3445,  3448,  3451,  3454,  3457,  3460,  3463,  3466,  3469,
    3472,  3475,  3478,  3481,  3484,  3487,  3492,  3497,  3502,  3507,
    3512,  3521,  3520,  3546,  3546,  3547,  3548,  3549,  3550,  3551,
    3552,  3553,  3555,  3561,  3568,  3567,  3572,  3572,  3573,  3577,
    3583,  3602,  3612,  3611,  3654,  3654,  3655,  3659,  3668,  3671,
    3671,  3672,  3673,  3673,  3674,  3674,  3675,  3675,  3676,  3677,
    3678,  3679,  3680,  3681,  3682,  3683,  3684,  3685,  3687,  3692,
    3697,  3702,  3707,  3712,  3717,  3722,  3727,  3732,  3737,  3742,
    3747,  3752,  3757,  3762,  3770,  3773,  3773,  3774,  3774,  3775,
    3776,  3777,  3777,  3778,  3779,  3781,  3787,  3793,  3802,  3816,
    3822,  3828
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ACCEPT_PASSWORD", "ACTION", "ADMIN",
  "AFTYPE", "T_ALLOW", "ANTI_NICK_FLOOD", "ANTI_SPAM_EXIT_MESSAGE_TIME",
  "AUTOCONN", "T_BLOCK", "BURST_AWAY", "BURST_TOPICWHO", "BYTES", "KBYTES",
  "MBYTES", "GBYTES", "TBYTES", "CALLER_ID_WAIT", "CAN_FLOOD", "CAN_IDLE",
  "CHANNEL", "CIDR_BITLEN", "CIPHER_PREFERENCE", "CLASS", "COMPRESSED",
  "COMPRESSION_LEVEL", "CONNECT", "CONNECTFREQ", "CRYPTLINK",
  "DEFAULT_CIPHER_PREFERENCE", "DEFAULT_FLOODCOUNT",
  "DEFAULT_SPLIT_SERVER_COUNT", "DEFAULT_SPLIT_USER_COUNT", "DENY",
  "DESCRIPTION", "DIE", "DISABLE_AUTH", "DISABLE_HIDDEN",
  "DISABLE_LOCAL_CHANNELS", "DISABLE_REMOTE_COMMANDS", "DOT_IN_IP6_ADDR",
  "DOTS_IN_IDENT", "DURATION", "EGDPOOL_PATH", "EMAIL", "ENABLE",
  "ENCRYPTED", "EXCEED_LIMIT", "EXEMPT", "FAILED_OPER_NOTICE", "FAKENAME",
  "IRCD_FLAGS", "FLATTEN_LINKS", "FFAILED_OPERLOG", "FKILLLOG",
  "FKLINELOG", "FGLINELOG", "FIOERRLOG", "FOPERLOG", "FOPERSPYLOG",
  "FUSERLOG", "GECOS", "GENERAL", "GLINE", "GLINES", "GLINE_EXEMPT",
  "GLINE_LOG", "GLINE_TIME", "GLINE_MIN_CIDR", "GLINE_MIN_CIDR6",
  "GLOBAL_KILL", "IRCD_AUTH", "NEED_IDENT", "HAVENT_READ_CONF", "HIDDEN",
  "HIDDEN_ADMIN", "HIDDEN_NAME", "HIDDEN_OPER", "HIDE_SERVER_IPS",
  "HIDE_SERVERS", "HIDE_SPOOF_IPS", "HOST", "HUB", "HUB_MASK", "IDLETIME",
  "IGNORE_BOGUS_TS", "INVISIBLE_ON_CONNECT", "IP", "KILL",
  "KILL_CHASE_TIME_LIMIT", "KLINE", "KLINE_EXEMPT", "KLINE_REASON",
  "KLINE_WITH_REASON", "KNOCK_DELAY", "KNOCK_DELAY_CHANNEL", "LAZYLINK",
  "LEAF_MASK", "LINKS_DELAY", "LISTEN", "T_LOG", "LOGGING", "LOG_LEVEL",
  "MAX_ACCEPT", "MAX_BANS", "MAX_CHANS_PER_USER", "MAX_GLOBAL",
  "MAX_IDENT", "MAX_LOCAL", "MAX_NICK_CHANGES", "MAX_NICK_TIME",
  "MAX_NUMBER", "MAX_TARGETS", "MESSAGE_LOCALE", "MIN_NONWILDCARD",
  "MIN_NONWILDCARD_SIMPLE", "MODULE", "MODULES", "NAME", "NEED_PASSWORD",
  "NETWORK_DESC", "NETWORK_NAME", "NICK", "NICK_CHANGES",
  "NO_CREATE_ON_SPLIT", "NO_JOIN_ON_SPLIT", "NO_OPER_FLOOD", "NO_TILDE",
  "NOT", "NUMBER", "NUMBER_PER_IDENT", "NUMBER_PER_CIDR", "NUMBER_PER_IP",
  "NUMBER_PER_IP_GLOBAL", "OPERATOR", "OPERS_BYPASS_CALLERID", "OPER_LOG",
  "OPER_ONLY_UMODES", "OPER_PASS_RESV", "OPER_SPY_T", "OPER_UMODES",
  "INVITE_OPS_ONLY", "JOIN_FLOOD_COUNT", "JOIN_FLOOD_TIME", "PACE_WAIT",
  "PACE_WAIT_SIMPLE", "PASSWORD", "PATH", "PING_COOKIE", "PING_TIME",
  "PING_WARNING", "PORT", "QSTRING", "QUIET_ON_BAN", "REASON", "REDIRPORT",
  "REDIRSERV", "REGEX_T", "REHASH", "TREJECT_HOLD_TIME", "REMOTE",
  "REMOTEBAN", "RESTRICT_CHANNELS", "RESTRICTED", "RSA_PRIVATE_KEY_FILE",
  "RSA_PUBLIC_KEY_FILE", "SSL_CERTIFICATE_FILE", "RESV", "RESV_EXEMPT",
  "SECONDS", "MINUTES", "HOURS", "DAYS", "WEEKS", "SENDQ", "SEND_PASSWORD",
  "SERVERHIDE", "SERVERINFO", "SERVLINK_PATH", "IRCD_SID",
  "TKLINE_EXPIRE_NOTICES", "T_SHARED", "T_CLUSTER", "TYPE", "SHORT_MOTD",
  "SILENT", "SPOOF", "SPOOF_NOTICE", "STATS_I_OPER_ONLY",
  "STATS_K_OPER_ONLY", "STATS_O_OPER_ONLY", "STATS_P_OPER_ONLY", "TBOOL",
  "TMASKED", "T_REJECT", "TS_MAX_DELTA", "TS_WARN_DELTA", "TWODOTS",
  "T_ALL", "T_BOTS", "T_SOFTCALLERID", "T_CALLERID", "T_CCONN",
  "T_CLIENT_FLOOD", "T_DEAF", "T_DEBUG", "T_DRONE", "T_EXTERNAL", "T_FULL",
  "T_INVISIBLE", "T_IPV4", "T_IPV6", "T_LOCOPS", "T_LOGPATH", "T_L_CRIT",
  "T_L_DEBUG", "T_L_ERROR", "T_L_INFO", "T_L_NOTICE", "T_L_TRACE",
  "T_L_WARN", "T_MAX_CLIENTS", "T_NCHANGE", "T_OPERWALL", "T_REJ",
  "T_SERVNOTICE", "T_SKILL", "T_SPY", "T_SSL", "T_UNAUTH", "T_UNRESV",
  "T_UNXLINE", "T_WALLOP", "THROTTLE_TIME", "TOPICBURST",
  "TRUE_NO_OPER_FLOOD", "TKLINE", "TXLINE", "TRESV", "UNKLINE", "USER",
  "USE_EGD", "USE_EXCEPT", "USE_INVEX", "USE_KNOCK", "USE_LOGGING",
  "USE_WHOIS_ACTUALLY", "VHOST", "VHOST6", "XLINE", "WARN",
  "WARN_NO_NLINE", "';'", "'}'", "'{'", "'='", "','", "$accept", "conf",
  "conf_item", "timespec_", "timespec", "sizespec_", "sizespec",
  "modules_entry", "modules_items", "modules_item", "modules_module",
  "modules_path", "serverinfo_entry", "serverinfo_items",
  "serverinfo_item", "serverinfo_ssl_certificate_file",
  "serverinfo_rsa_private_key_file", "serverinfo_name", "serverinfo_sid",
  "serverinfo_description", "serverinfo_network_name",
  "serverinfo_network_desc", "serverinfo_vhost", "serverinfo_vhost6",
  "serverinfo_max_clients", "serverinfo_hub", "admin_entry", "admin_items",
  "admin_item", "admin_name", "admin_email", "admin_description",
  "logging_entry", "logging_items", "logging_item", "logging_path",
  "logging_oper_log", "logging_fuserlog", "logging_ffailed_operlog",
  "logging_foperlog", "logging_foperspylog", "logging_fglinelog",
  "logging_fklinelog", "logging_ioerrlog", "logging_killlog",
  "logging_log_level", "logging_use_logging", "oper_entry", "@1",
  "oper_name_b", "oper_items", "oper_item", "oper_name", "oper_name_t",
  "oper_user", "oper_password", "oper_encrypted", "oper_hidden_admin",
  "oper_rsa_public_key_file", "oper_class", "oper_global_kill",
  "oper_remote", "oper_remoteban", "oper_kline", "oper_xline",
  "oper_unkline", "oper_gline", "oper_nick_changes", "oper_die",
  "oper_rehash", "oper_admin", "oper_flags", "@2", "oper_flags_items",
  "oper_flags_item", "oper_flags_item_atom", "class_entry", "@3",
  "class_name_b", "class_items", "class_item", "class_name",
  "class_name_t", "class_ping_time", "class_ping_warning",
  "class_number_per_ip", "class_connectfreq", "class_max_number",
  "class_max_global", "class_max_local", "class_max_ident", "class_sendq",
  "class_cidr_bitlen", "class_number_per_cidr", "listen_entry", "@4",
  "listen_flags", "@5", "listen_flags_items", "listen_flags_item",
  "listen_items", "listen_item", "listen_port", "port_items", "port_item",
  "listen_address", "listen_host", "auth_entry", "@6", "auth_items",
  "auth_item", "auth_user", "auth_passwd", "auth_spoof_notice",
  "auth_class", "auth_encrypted", "auth_flags", "@7", "auth_flags_items",
  "auth_flags_item", "auth_flags_item_atom", "auth_kline_exempt",
  "auth_need_ident", "auth_exceed_limit", "auth_can_flood",
  "auth_no_tilde", "auth_gline_exempt", "auth_spoof", "auth_redir_serv",
  "auth_redir_port", "auth_need_password", "resv_entry", "@8",
  "resv_items", "resv_item", "resv_creason", "resv_channel", "resv_nick",
  "shared_entry", "@9", "shared_items", "shared_item", "shared_name",
  "shared_user", "shared_type", "@10", "shared_types", "shared_type_item",
  "cluster_entry", "@11", "cluster_items", "cluster_item", "cluster_name",
  "cluster_type", "@12", "cluster_types", "cluster_type_item",
  "connect_entry", "@13", "connect_name_b", "connect_items",
  "connect_item", "connect_name", "connect_name_t", "connect_host",
  "connect_vhost", "connect_send_password", "connect_accept_password",
  "connect_port", "connect_aftype", "connect_fakename", "connect_flags",
  "@14", "connect_flags_items", "connect_flags_item",
  "connect_flags_item_atom", "connect_rsa_public_key_file",
  "connect_encrypted", "connect_cryptlink", "connect_compressed",
  "connect_auto", "connect_hub_mask", "connect_leaf_mask", "connect_class",
  "connect_cipher_preference", "kill_entry", "@15", "kill_type", "@16",
  "kill_type_items", "kill_type_item", "kill_items", "kill_item",
  "kill_user", "kill_reason", "deny_entry", "@17", "deny_items",
  "deny_item", "deny_ip", "deny_reason", "exempt_entry", "exempt_items",
  "exempt_item", "exempt_ip", "gecos_entry", "@18", "gecos_flags", "@19",
  "gecos_flags_items", "gecos_flags_item", "gecos_items", "gecos_item",
  "gecos_name", "gecos_reason", "general_entry", "general_items",
  "general_item", "general_gline_min_cidr", "general_gline_min_cidr6",
  "general_burst_away", "general_use_whois_actually",
  "general_reject_hold_time", "general_jflood_count",
  "general_jflood_time", "general_tkline_expire_notices",
  "general_kill_chase_time_limit", "general_hide_spoof_ips",
  "general_ignore_bogus_ts", "general_disable_remote_commands",
  "general_failed_oper_notice", "general_anti_nick_flood",
  "general_max_nick_time", "general_max_nick_changes",
  "general_max_accept", "general_anti_spam_exit_message_time",
  "general_ts_warn_delta", "general_ts_max_delta",
  "general_havent_read_conf", "general_kline_with_reason",
  "general_kline_reason", "general_invisible_on_connect",
  "general_warn_no_nline", "general_stats_o_oper_only",
  "general_stats_P_oper_only", "general_stats_k_oper_only",
  "general_stats_i_oper_only", "general_pace_wait",
  "general_caller_id_wait", "general_opers_bypass_callerid",
  "general_pace_wait_simple", "general_short_motd",
  "general_no_oper_flood", "general_true_no_oper_flood",
  "general_oper_pass_resv", "general_message_locale", "general_idletime",
  "general_dots_in_ident", "general_max_targets", "general_servlink_path",
  "general_default_cipher_preference", "general_compression_level",
  "general_use_egd", "general_egdpool_path", "general_ping_cookie",
  "general_disable_auth", "general_throttle_time", "general_oper_umodes",
  "@20", "umode_oitems", "umode_oitem", "general_oper_only_umodes", "@21",
  "umode_items", "umode_item", "general_min_nonwildcard",
  "general_min_nonwildcard_simple", "general_default_floodcount",
  "general_client_flood", "general_dot_in_ip6_addr", "gline_entry", "@22",
  "gline_items", "gline_item", "gline_enable", "gline_duration",
  "gline_logging", "@23", "gline_logging_types", "gline_logging_type_item",
  "gline_user", "gline_server", "gline_action", "@24", "gdeny_types",
  "gdeny_type_item", "channel_entry", "channel_items", "channel_item",
  "channel_restrict_channels", "channel_disable_local_channels",
  "channel_use_except", "channel_use_invex", "channel_use_knock",
  "channel_knock_delay", "channel_knock_delay_channel",
  "channel_invite_ops_only", "channel_max_chans_per_user",
  "channel_quiet_on_ban", "channel_max_bans",
  "channel_default_split_user_count", "channel_default_split_server_count",
  "channel_no_create_on_split", "channel_no_join_on_split",
  "channel_burst_topicwho", "serverhide_entry", "serverhide_items",
  "serverhide_item", "serverhide_flatten_links", "serverhide_hide_servers",
  "serverhide_hidden_name", "serverhide_links_delay", "serverhide_hidden",
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
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,    59,   125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   259,   260,   260,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   262,   262,   263,   263,
     263,   263,   263,   263,   264,   264,   265,   265,   265,   265,
     266,   267,   267,   268,   268,   268,   269,   270,   271,   272,
     272,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   286,   287,   287,   287,
     287,   288,   289,   290,   291,   292,   292,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   304,   304,   304,   304,   304,   304,   305,   307,   306,
     308,   308,   309,   309,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   331,   330,   332,   332,   333,   333,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   336,   335,   337,   337,   338,
     338,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   354,   353,   356,
     355,   357,   357,   358,   358,   359,   359,   360,   360,   360,
     360,   360,   361,   362,   362,   363,   363,   364,   365,   367,
     366,   368,   368,   369,   369,   369,   369,   369,   369,   369,
     369,   369,   369,   369,   369,   369,   369,   369,   369,   369,
     370,   371,   372,   373,   374,   376,   375,   377,   377,   378,
     378,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   391,   390,   392,   392,   393,   393,   393,   393,   394,
     395,   396,   398,   397,   399,   399,   400,   400,   400,   400,
     401,   402,   404,   403,   405,   405,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   408,   407,   409,
     409,   410,   410,   410,   411,   413,   412,   414,   414,   415,
     415,   415,   415,   415,   415,   415,   415,   415,   415,   415,
     417,   416,   418,   418,   419,   419,   420,   420,   420,   420,
     420,   420,   420,   420,   420,   420,   420,   420,   420,   420,
     420,   420,   420,   420,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   428,   429,   431,   430,   432,   432,   433,
     433,   434,   434,   434,   434,   434,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   445,   444,   447,   446,
     448,   448,   449,   450,   450,   451,   451,   451,   451,   452,
     453,   455,   454,   456,   456,   457,   457,   457,   458,   459,
     460,   461,   461,   462,   462,   463,   465,   464,   467,   466,
     468,   468,   469,   470,   470,   471,   471,   471,   471,   472,
     473,   474,   475,   475,   476,   476,   476,   476,   476,   476,
     476,   476,   476,   476,   476,   476,   476,   476,   476,   476,
     476,   476,   476,   476,   476,   476,   476,   476,   476,   476,
     476,   476,   476,   476,   476,   476,   476,   476,   476,   476,
     476,   476,   476,   476,   476,   476,   476,   476,   476,   476,
     476,   476,   476,   476,   476,   476,   476,   476,   476,   476,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   504,
     505,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   527,   526,   528,   528,   529,   529,   529,   529,
     529,   529,   529,   529,   529,   529,   529,   529,   529,   529,
     529,   529,   529,   529,   531,   530,   532,   532,   533,   533,
     533,   533,   533,   533,   533,   533,   533,   533,   533,   533,
     533,   533,   533,   533,   533,   533,   534,   535,   536,   537,
     538,   540,   539,   541,   541,   542,   542,   542,   542,   542,
     542,   542,   543,   544,   546,   545,   547,   547,   548,   548,
     549,   550,   552,   551,   553,   553,   554,   554,   555,   556,
     556,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   558,   559,
     560,   561,   562,   563,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,   574,   575,   575,   576,   576,   576,
     576,   576,   576,   576,   576,   577,   578,   579,   580,   581,
     582,   583
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     0,     1,     2,     3,
       3,     3,     3,     3,     0,     1,     2,     3,     3,     3,
       5,     2,     1,     1,     1,     2,     4,     4,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     5,     2,     1,     1,     1,     1,
       2,     4,     4,     4,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     0,     7,
       0,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     4,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     0,     5,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     7,     0,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     4,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     0,     6,     0,
       5,     3,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     2,     4,     3,     1,     1,     3,     4,     4,     0,
       6,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     4,     4,     4,     4,     0,     5,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     0,     6,     2,     1,     1,     1,     1,     2,     4,
       4,     4,     0,     6,     2,     1,     1,     1,     1,     2,
       4,     4,     0,     5,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     6,     2,
       1,     1,     1,     2,     4,     0,     5,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     7,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     5,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     0,     6,     0,     5,
       3,     1,     1,     2,     1,     1,     1,     1,     1,     4,
       4,     0,     6,     2,     1,     1,     1,     1,     4,     4,
       5,     2,     1,     1,     1,     4,     0,     6,     0,     5,
       3,     1,     1,     2,     1,     1,     1,     1,     1,     4,
       4,     5,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     0,     5,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     5,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     0,     6,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     0,     5,     3,     1,     1,     1,
       4,     4,     0,     5,     3,     1,     1,     1,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       2,     0,     1,     0,     0,     0,   185,   350,   421,     0,
     436,     0,   611,   239,   406,   217,     0,     0,   118,   291,
       0,     0,   302,   327,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,   187,
     352,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   120,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    79,    78,   657,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   640,   641,   642,   643,   644,   645,
     647,   648,   649,   650,   651,   646,   652,   653,   654,   655,
     656,   205,     0,   188,   376,     0,   353,     0,   434,     0,
       0,   432,   433,     0,   510,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   584,     0,   562,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   453,   504,   505,   502,   506,   507,   508,   509,
     503,   464,   454,   455,   493,   456,   457,   458,   459,   460,
     461,   462,   463,   498,   465,   466,   467,   468,   470,   475,
     471,   473,   472,   487,   488,   474,   476,   477,   478,   479,
     481,   480,   469,   483,   492,   494,   495,   484,   485,   500,
     501,   497,   486,   482,   490,   491,   489,   496,   499,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,    88,
      91,    98,    92,    96,    93,    94,    97,    95,    89,    90,
       0,     0,     0,     0,    42,    43,    44,   145,     0,   121,
       0,   684,     0,     0,     0,     0,     0,     0,     0,     0,
     676,   677,   678,   682,   679,   681,   680,   683,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,    61,    58,    51,    60,    54,    55,    56,    52,
      59,    57,    53,     0,     0,    80,     0,     0,     0,     0,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   639,     0,
       0,   427,     0,     0,     0,   424,   425,   426,     0,     0,
     431,   448,     0,     0,   438,   447,     0,   444,   445,   446,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   452,   621,   632,
       0,     0,   624,     0,     0,     0,   614,   615,   616,   617,
     618,   619,   620,     0,     0,     0,     0,     0,   265,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   242,   243,   244,   253,   245,   258,   246,   247,   248,
     249,   256,   250,   251,   252,   254,   255,   257,   418,     0,
     408,     0,   417,     0,   414,   415,   416,     0,   219,     0,
       0,     0,   228,     0,   226,   227,   229,   230,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,    45,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,   294,   295,   296,   297,     0,     0,
       0,     0,     0,     0,     0,     0,   675,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,   312,     0,     0,   305,   306,   307,   308,
       0,     0,   335,     0,   330,   331,   332,     0,     0,     0,
      74,     0,     0,     0,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   638,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   190,   191,   193,   194,   196,   197,   198,
     199,   200,   201,   202,   192,   195,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   385,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   355,   356,   357,   358,
     359,   360,   362,   361,   363,   364,   372,   369,   371,   370,
     368,   365,   366,   367,   373,     0,     0,     0,   423,     0,
     430,     0,     0,     0,     0,   443,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,   451,     0,     0,     0,     0,
       0,     0,     0,   613,   259,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   241,     0,     0,     0,     0,   413,   231,     0,
       0,     0,     0,     0,   225,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,     0,     0,    40,     0,     0,     0,
       0,     0,   163,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   123,   124,
     125,   126,   140,   127,   141,   128,   129,   130,   136,   131,
     132,   133,   134,   135,   137,   138,   139,   142,   298,     0,
       0,     0,     0,   293,     0,     0,     0,     0,     0,     0,
       0,   674,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,   309,     0,     0,     0,     0,   304,
     333,     0,     0,     0,   329,    83,    82,    81,   673,   670,
     669,   659,    26,    26,    26,    26,    26,    28,    27,   663,
     664,   668,   666,   671,   672,   665,   667,   658,   660,   661,
     662,   203,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   189,   374,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   354,     0,     0,   422,
     435,     0,     0,     0,   437,   524,   528,   513,   543,   556,
     555,   608,   560,   522,   610,   552,   558,   523,   511,   512,
     531,   520,   551,   521,   534,   519,   533,   532,   527,   526,
     525,   553,   550,   606,   607,   547,   544,   588,   603,   604,
     589,   590,   591,   598,   592,   601,   605,   594,   599,   595,
     600,   593,   597,   596,   602,     0,   587,   549,   566,   581,
     582,   567,   568,   569,   576,   570,   579,   583,   572,   577,
     573,   578,   571,   575,   574,   580,     0,   565,   516,   517,
     542,   545,   559,   515,   554,   518,   546,   540,   541,   538,
     539,   536,   537,   530,   529,    34,    34,    34,    36,    35,
     609,   561,   548,   557,   514,   535,     0,     0,     0,     0,
       0,     0,   612,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   240,
       0,     0,     0,   407,     0,     0,     0,   235,     0,   234,
     218,   103,   109,   107,   106,   108,   104,   105,   102,   110,
     116,   111,   115,   113,   114,   112,   101,   100,   117,    46,
      47,   143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,     0,     0,     0,   292,   690,   685,   689,
     687,   691,   686,   688,    67,    73,    65,    69,    68,    64,
      63,    66,    72,    70,    71,     0,     0,     0,   303,     0,
       0,   328,    29,    30,    31,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   186,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   351,
     428,   429,   449,   450,   442,     0,   441,   585,     0,   563,
       0,    37,    38,    39,   637,   636,     0,   635,   623,   622,
     629,   628,     0,   627,   631,   630,   284,   263,   264,   283,
     275,   276,   272,   278,   274,   273,   280,   277,     0,   279,
     271,     0,   268,   270,   286,   282,   281,   290,   285,   261,
     289,   288,   287,   262,   260,   420,   412,     0,   411,   419,
     224,   223,     0,   222,   238,   237,     0,   232,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   300,
     301,   299,   310,   316,   322,   326,   325,   324,   321,   317,
     320,   323,   318,   319,     0,   315,   311,   334,   339,   345,
     349,   348,   347,   344,   340,   343,   346,   341,   342,     0,
     338,   215,   209,   211,   213,   212,   210,   204,   216,   208,
     206,   207,   214,   380,   382,   383,   401,   405,   404,   400,
     399,   398,   384,   394,   395,   392,   393,   391,     0,   396,
       0,   388,   390,   377,   402,   403,   375,   381,   397,   379,
     378,   439,     0,   586,   564,   633,     0,   625,     0,   269,
     266,     0,   409,     0,   220,     0,   236,   233,   162,   151,
     160,   148,   177,   175,   184,   174,   169,   178,   182,   171,
     179,     0,   181,   176,   170,   183,   180,   172,   173,     0,
     166,   168,   158,   152,   149,   155,   144,   159,   147,   161,
     153,   154,   150,   157,   146,   156,   313,     0,   336,     0,
     389,   386,     0,   440,   634,   626,   267,   410,   221,   167,
     164,     0,   314,   337,   387,   165
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     1,    24,   877,   878,  1028,  1029,    25,   273,   274,
     275,   276,    26,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,    27,    71,    72,    73,
      74,    75,    28,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,    29,    61,   278,
     807,   808,   809,   279,   810,   811,   812,   813,   814,   815,
     816,   817,   818,   819,   820,   821,   822,   823,   824,   825,
     826,   827,  1096,  1379,  1380,  1381,    30,    49,   112,   602,
     603,   604,   113,   605,   606,   607,   608,   609,   610,   611,
     612,   613,   614,   615,    31,    58,   492,   759,  1242,  1243,
     493,   494,   495,  1068,  1069,   496,   497,    32,    56,   460,
     461,   462,   463,   464,   465,   466,   467,   739,  1221,  1222,
    1223,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,    33,    62,   523,   524,   525,   526,   527,    34,    65,
     555,   556,   557,   558,   559,   856,  1284,  1285,    35,    66,
     563,   564,   565,   566,   862,  1299,  1300,    36,    50,   115,
     635,   636,   637,   116,   638,   639,   640,   641,   642,   643,
     644,   645,   916,  1330,  1331,  1332,   646,   647,   648,   649,
     650,   651,   652,   653,   654,    37,    57,   482,   754,  1237,
    1238,   483,   484,   485,   486,    38,    51,   354,   355,   356,
     357,    39,   120,   121,   122,    40,    53,   365,   663,  1185,
    1186,   366,   367,   368,   369,    41,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   404,  1006,
    1007,   233,   402,   985,   986,   234,   235,   236,   237,   238,
      42,    55,   435,   436,   437,   438,   439,   729,  1202,  1203,
     440,   441,   442,   726,  1196,  1197,    43,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    44,   289,   290,   291,   292,
     293,   294,   295,   296,   297
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -792
static const short int yypact[] =
{
    -792,   875,  -792,  -225,  -250,  -238,  -792,  -792,  -792,  -216,
    -792,  -210,  -792,  -792,  -792,  -792,  -205,  -199,  -792,  -792,
    -181,  -156,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,    84,   729,  -131,
     -57,  -143,    15,  -135,   498,   -79,   -76,   -70,   -58,   605,
       7,    54,   -45,   701,   511,   -34,   -33,   -29,   -30,   -20,
     -15,    13,  -792,  -792,  -792,  -792,  -792,    -9,    -8,    -3,
      -2,    -1,    20,    29,    35,    37,    40,    41,    46,    50,
      53,    55,    56,   199,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,    44,  -792,  -792,    62,  -792,    19,  -792,    73,
      14,  -792,  -792,    16,  -792,    77,    78,    81,    83,    87,
      91,    95,    98,    99,   101,   102,   104,   108,   109,   114,
     117,   119,   120,   121,   123,   124,   126,   128,   130,   137,
     140,   141,   142,   145,   146,   150,   153,  -792,   156,  -792,
     158,   162,   163,   172,   173,   174,   176,   178,   181,   183,
     190,   192,   195,   196,   198,   200,   201,   206,   209,   212,
     218,    23,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,   240,
     700,     8,    43,    39,   221,   222,   223,   230,   233,   234,
     236,   238,   241,   243,   244,   245,    86,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
      57,   246,   247,    36,  -792,  -792,  -792,  -792,   155,  -792,
      25,  -792,   248,   254,   256,   257,   258,   259,   261,   269,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,   235,   262,
     263,   265,   266,   270,   271,   274,   275,   276,   278,   280,
     328,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,     3,    32,  -792,   118,   129,   343,   272,
    -792,    59,   377,   407,   348,   413,   413,   414,   415,   354,
     356,   359,   360,   365,   366,   367,   368,   298,  -792,   810,
     646,  -792,   300,   307,    27,  -792,  -792,  -792,   416,   317,
    -792,  -792,   315,   318,  -792,  -792,     2,  -792,  -792,  -792,
     380,   413,   382,   413,   448,   427,   451,   393,   394,   396,
     460,   442,   403,   467,   469,   470,   408,   413,   410,   411,
     476,   454,   417,   492,   493,   413,   494,   473,   497,   499,
     435,   438,   379,   445,   384,   515,   520,   413,   413,   459,
     523,   501,   463,   464,  -125,  -113,   474,   475,   413,   413,
     542,   413,   480,   481,   487,   489,   431,  -792,  -792,  -792,
     429,   430,  -792,   440,   443,     9,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,   452,   450,   455,   456,   457,  -792,   458,
     461,   462,   466,   471,   482,   495,   500,   502,   508,   516,
     279,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,   526,
    -792,   527,  -792,    10,  -792,  -792,  -792,   472,  -792,   528,
     530,   531,  -792,    18,  -792,  -792,  -792,  -792,  -792,   551,
     554,   557,   562,   567,   573,   578,   584,   400,   590,   596,
     560,   504,  -792,  -792,   602,   614,   518,  -792,   314,   535,
     533,   537,   538,    26,  -792,  -792,  -792,  -792,   586,   598,
     603,   642,   604,   606,   413,   548,  -792,  -792,   649,   610,
     652,   655,   656,   658,   660,   661,   685,   663,   664,   565,
    -792,   568,   570,  -792,   571,    33,  -792,  -792,  -792,  -792,
     576,   574,  -792,     4,  -792,  -792,  -792,   580,   583,   587,
    -792,   588,   589,   591,   592,   251,   593,   595,   597,   599,
     600,   609,   611,   612,   613,   615,   617,   619,  -792,   623,
     575,   581,   607,   621,   622,   624,   628,   630,   633,   634,
     635,   637,   308,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,   647,   648,   650,   651,
     657,   659,   665,   669,   671,   674,  -792,   675,   676,   677,
     678,   680,   689,   690,   692,   237,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,   696,   706,   667,  -792,   702,
    -792,   714,   748,   697,   703,  -792,   704,   705,   709,   710,
     712,   713,   715,   716,   718,   723,   725,   726,   727,   730,
     731,   733,   734,   735,   736,   739,   741,   743,   744,   746,
     747,   749,   750,   751,   752,   754,   755,   756,   859,   758,
     893,   759,   762,   763,   764,   765,   770,   771,   772,   773,
     774,   775,   776,   777,   780,   781,   783,   784,    63,   785,
     786,   787,   788,   789,   791,  -792,   711,   413,   719,   745,
     761,   799,   792,  -792,  -792,   766,   882,   853,   855,   793,
     858,   861,   863,   870,   877,   902,   778,   918,   920,   881,
     922,   823,  -792,   924,   822,   926,   827,  -792,  -792,   825,
     935,   937,   961,   844,  -792,   847,   851,   852,   854,   856,
     857,   860,   869,   871,   872,   874,   876,   879,   880,   883,
     884,   885,   886,  -792,   887,   888,  -792,   889,   890,   891,
     892,   894,  -792,   895,   896,   897,   898,   899,   900,   901,
     903,   904,   905,   906,   907,   908,   909,   154,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,   955,
     958,   959,   913,  -792,   914,   915,   916,   917,   919,   921,
     923,  -792,   925,   927,   928,   929,   930,   931,   932,   933,
     934,   936,   938,  -792,  -792,   962,   939,   975,   940,  -792,
    -792,   977,   941,   943,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,   413,   413,   413,   413,   413,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,   984,   413,  1001,  1004,  1005,  1013,   991,  1015,
    1019,   413,   413,   542,   945,  -792,  -792,  1018,    17,   965,
    1020,  1022,   986,   995,   997,  1024,   944,  1039,  1041,  1046,
    1048,  1072,  1050,  1051,  1052,   953,  -792,   954,   956,  -792,
    -792,   957,   960,   753,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -233,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -215,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,   542,   542,   542,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,    -4,   963,   964,     1,
     966,   967,  -792,   968,   969,   970,   971,   862,   972,   973,
     974,   976,   978,   979,   980,   981,   982,   983,   985,  -792,
     987,  1053,   988,  -792,   -54,   989,   990,   707,  -213,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  1021,  1055,  1025,  1035,   992,  1037,  1044,  1054,
    1056,  1059,  1057,  1062,  1058,  1060,  1061,  1086,  1063,  1091,
    1064,   993,  -792,   999,  1002,  1006,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  1007,   232,  1008,  -792,  1009,
     782,  -792,  -792,  -792,  -792,  -792,  -792,  1010,  1011,  1012,
    1014,  1016,  1017,  1023,  1026,  1027,  1028,  1029,  1030,  -792,
    1031,  1032,  1033,  1034,  1036,  1038,  1040,  1042,  1043,  1045,
     358,  1047,  1049,  1065,  1066,  1067,  1068,  1069,  1070,  -792,
    -792,  -792,  -792,  -792,  -792,  -196,  -792,  -792,   859,  -792,
     893,  -792,  -792,  -792,  -792,  -792,  -191,  -792,  -792,  -792,
    -792,  -792,  -178,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,   878,  -792,
    -792,  -159,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -152,  -792,  -792,
    -792,  -792,  -139,  -792,  -792,  -792,  1115,  -792,   961,  1071,
    1073,  1074,  1075,   645,  1076,  1077,  1078,  1079,  1080,  1081,
    1082,  1083,  1084,  1085,  1087,  1088,  1089,  1090,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -127,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,   -97,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,   363,  -792,
     -80,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,   753,  -792,  -792,  -792,    -4,  -792,     1,  -792,
    -792,   862,  -792,  1053,  -792,   -54,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,   699,  -792,  -792,  -792,  -792,  -792,  -792,  -792,   -48,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,   232,  -792,   782,
    -792,  -792,   358,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,   645,  -792,  -792,  -792,  -792
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -792,  -792,  -792,  -784,  -335,  -791,  -418,  -792,  -792,   631,
    -792,  -792,  -792,  -792,   534,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,   846,  -792,
    -792,  -792,  -792,  -792,  1003,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,   465,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -144,  -102,  -792,  -792,  -792,  -792,
     672,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,   -82,
    -792,   796,  -792,  -792,    28,  -792,  -792,  -792,  -792,  -792,
     815,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,   -73,
      61,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,   768,  -792,  -792,  -792,  -792,  -792,
    -792,   738,  -792,  -792,  -792,  -792,  -792,   -99,  -792,  -792,
    -792,   732,  -792,  -792,  -792,  -792,   -95,  -792,  -792,  -792,
    -792,   670,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -100,   -28,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
     -47,  -792,   824,  -792,  -792,  -792,  -792,  -792,   994,  -792,
    -792,  -792,  -792,  1188,  -792,  -792,  -792,  -792,  -792,  -792,
     -32,  -792,   946,  -792,  -792,  -792,  -792,  1128,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
     125,  -792,  -792,  -792,   138,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,   910,  -792,  -792,  -792,  -792,  -792,   -37,
    -792,  -792,  -792,  -792,  -792,    -6,  -792,  -792,  1220,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,  -792,
    -792,  -792,  -792,  -792,  -792,  -792,  -792,  1092,  -792,  -792,
    -792,  -792,  -792,  -792,  -792
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned short int yytable[] =
{
     576,   577,   719,   361,   551,   560,    47,  1194,   270,   478,
     428,   478,  1200,   429,    67,   118,   118,   361,    48,   487,
     351,  1187,  1240,   111,   124,  1188,   519,   519,   351,    45,
      46,   125,   126,   560,   551,   127,   667,   270,   669,  1189,
      52,  1247,   128,  1190,   487,  1248,    54,   520,   520,    68,
     129,    59,   683,   430,   130,   131,   431,    60,  1341,    69,
     691,   132,  1342,  1345,   133,   134,   135,  1346,   136,   710,
     711,   488,   703,   704,   137,    63,  1347,  1025,  1026,  1027,
    1348,   712,   713,   716,   717,    67,   720,   243,  1142,  1143,
    1144,  1145,  1146,   138,   139,  1350,   488,   114,   140,  1351,
      64,   489,  1352,   119,   119,   141,  1353,   490,   352,   142,
     143,   144,   432,   117,   145,  1354,   352,   146,   147,  1355,
      68,   123,   362,   552,   561,   271,   489,  1396,   148,   433,
      69,  1397,   490,    70,   149,   150,   362,   151,   152,   153,
     154,   244,   245,   246,   247,   248,   249,   250,   251,   521,
     521,   155,   561,   552,   271,   787,   272,  1398,   363,   788,
     156,  1399,   157,   158,   479,   159,   479,   160,   161,   162,
     163,   491,   363,   164,  1401,   353,  1241,   239,  1402,   789,
     240,   522,   522,   353,   165,   272,   241,   364,   553,   562,
     252,   790,  1195,   480,   718,   480,   491,  1201,   242,   840,
      76,   364,   791,   166,    70,   167,  1410,   792,   277,   168,
    1411,   280,    77,   169,   170,   171,   172,   562,   553,   793,
     173,   174,   323,   324,   253,   325,   794,   326,   175,  1161,
    1162,   795,    78,    79,  1191,  1192,  1193,   327,   616,    80,
     617,   428,   328,   618,   429,   554,   796,   619,   331,   332,
     481,   434,   481,   571,   333,   334,   335,   664,   176,   863,
     177,   620,   621,   622,   732,   756,   178,   623,   329,   359,
     281,   179,   567,   763,   797,   554,   180,   336,   426,   798,
     443,   832,   657,   568,   430,   624,   337,   431,   858,   625,
     626,   516,   338,   498,   339,    81,    82,   340,   341,   444,
     349,   254,   799,   342,   445,    83,    84,   343,   282,   589,
     344,   513,   345,   346,   800,   787,   801,   802,   350,   788,
     627,   803,   628,   283,  1273,    85,    86,   446,   447,   298,
     358,   590,   448,   255,   370,   371,   629,   591,   372,   789,
     373,   511,    87,   432,   374,   284,   449,   285,   375,   286,
     287,   790,   376,   450,    88,   377,   378,   630,   379,   380,
     433,   381,   791,    89,   299,   382,   383,   792,  1323,   288,
    1324,   384,   451,  1323,   385,  1324,   386,   387,   388,   793,
     389,   390,   575,   391,  1325,   392,   794,   393,  1326,  1325,
     631,   795,  1037,  1326,   394,   804,   805,   395,   396,   397,
     452,  1274,   398,   399,   632,   806,   796,   400,   453,  1111,
     401,   518,   300,   403,   633,   405,   592,   593,   594,   406,
     407,   595,   872,   873,   874,   875,   876,   454,   596,   408,
     409,   410,  1275,   411,   797,   412,   455,   456,   413,   798,
     414,   597,   598,    90,    91,    92,  1276,   415,   301,   416,
     302,   303,   417,   418,   347,   419,  1327,   420,   421,   599,
     600,  1327,   799,   422,  1277,  1278,   423,   457,   458,   424,
    1279,  1280,  1281,  1282,   800,   425,   801,   802,   499,   500,
     501,   803,   434,  1283,   601,  1158,   634,   502,  1328,   537,
     503,   504,   925,   505,   304,   506,   305,   569,   507,   124,
     508,   509,   510,   514,   515,   528,   125,   126,   572,   306,
     127,   529,   298,   530,   531,   532,   533,   128,   534,   538,
     539,   459,   540,   541,   535,   129,   570,   542,   543,   130,
     131,   544,   545,   546,   751,   547,   132,   548,   573,   133,
     134,   135,   574,   136,   575,   578,   579,   299,   580,   137,
     581,   307,   588,   582,   583,   804,   805,   655,  1148,   584,
     585,   586,   587,   904,   656,   806,  1156,  1157,   138,   139,
     659,   660,   661,   140,   666,   662,   668,   308,   309,   670,
     141,   671,   672,   549,   142,   143,   144,   673,   674,   145,
     675,   676,   146,   147,  1329,   300,   677,   678,   679,  1329,
     680,   681,   682,   148,   684,   685,   243,   686,   687,   149,
     150,   688,   151,   152,   153,   154,   773,   774,   775,   776,
     777,   778,   779,   689,   690,   692,   155,   693,   694,   696,
     695,   301,   697,   302,   303,   156,   698,   157,   158,   699,
     159,   700,   160,   161,   162,   163,   701,   616,   164,   617,
    1362,   702,   618,   705,   706,   707,   619,   708,   709,   165,
     244,   245,   246,   247,   248,   249,   250,   251,   714,   715,
     620,   621,   622,   718,   721,   722,   623,   304,   166,   305,
     167,   723,  1363,   724,   168,   725,   727,   728,   169,   170,
     171,   172,   306,  1364,   624,   173,   174,   730,   625,   626,
     731,   443,   281,   175,  1362,   765,   734,   735,   766,   252,
    1365,   767,   736,   737,   738,   740,   768,  1366,   741,   742,
     444,   769,  1367,   743,  1368,   445,   758,   770,   744,   627,
      76,   628,   771,   176,   307,   177,  1363,  1369,   772,   745,
     282,   178,    77,   253,   780,   629,   179,  1364,   446,   447,
     781,   180,   746,   448,   782,   283,   784,   747,   783,   748,
     308,   309,    78,    79,  1365,   749,   630,   449,   785,    80,
    1370,  1366,   786,   750,   450,  1371,  1367,   284,  1368,   285,
     834,   286,   287,   753,   755,   760,  1372,   761,   762,   828,
     829,  1369,   835,   451,   830,   831,   837,   836,   838,   631,
     839,   288,   841,   842,   843,  1373,   844,  1374,  1375,   845,
     846,   589,   847,   632,   848,   849,   850,   851,   852,   853,
     254,   452,   854,   633,  1370,    81,    82,   855,   857,   453,
     860,   861,   892,   590,   865,    83,    84,   866,   893,   591,
    1372,   867,   868,   869,   550,   870,   871,   879,   454,   880,
     927,   881,   255,   882,   883,    85,    86,   455,   456,  1373,
     928,  1374,  1375,   884,   894,   885,   886,   887,   931,   888,
    1376,   889,    87,   890,  1288,     2,     3,   891,   895,   896,
       4,   897,  1210,  1211,    88,   898,  1377,   899,   457,   458,
     900,   901,   902,    89,   903,   634,  1378,     5,  1210,  1211,
       6,   906,   932,     7,   517,   907,  1246,   908,   909,  1054,
       8,  1212,  1184,  1038,   910,  1040,   911,   330,   592,   593,
     594,   929,   912,   595,  1376,     9,   913,  1212,   914,  1213,
     596,   915,   917,   918,   919,   920,  1214,   921,    10,    11,
    1377,    12,   459,   597,   598,  1213,   922,   923,    13,   924,
    1378,  1289,  1214,  1041,   933,  1215,   930,   934,   935,   936,
    1043,   599,   600,   937,   938,    14,   939,   940,  1036,   941,
     942,  1215,   943,    90,    91,    92,    15,   944,    16,   945,
     946,   947,  1290,  1216,   948,   949,   601,   950,   951,   952,
     953,  1217,  1218,   954,    17,   955,  1291,   956,   957,  1216,
     958,   959,  1039,   960,   961,   962,   963,  1217,   964,   965,
     966,    18,   987,  1008,  1292,  1293,  1009,  1010,  1011,  1012,
    1294,  1295,  1296,  1297,  1013,  1014,  1015,  1016,  1017,  1018,
    1019,  1020,  1219,  1298,  1021,  1022,  1044,  1023,  1024,  1030,
    1031,  1032,  1033,  1034,    19,  1035,  1042,  1045,  1219,  1046,
    1047,  1220,  1048,    20,    21,  1049,  1053,  1050,    22,    23,
     967,   968,   969,   970,  1051,   971,   972,  1220,   973,   974,
     975,  1052,  1055,   976,  1056,  1057,  1058,  1059,  1060,  1061,
    1062,  1063,  1064,   977,   978,   979,   980,   981,   982,  1065,
     983,  1066,  1067,   984,   988,   989,   990,   991,  1070,   992,
     993,  1071,   994,   995,   996,  1072,  1073,   997,  1074,  1113,
    1075,  1076,  1114,  1115,  1077,  1147,  1135,   998,   999,  1000,
    1001,  1002,  1003,  1078,  1004,  1079,  1080,  1005,  1081,  1137,
    1082,  1139,  1149,  1083,  1084,  1150,  1151,  1085,  1086,  1087,
    1088,  1089,  1090,  1091,  1152,  1153,  1154,  1092,  1093,  1094,
    1155,  1095,  1097,  1098,  1099,  1100,  1101,  1102,  1103,  1163,
    1104,  1105,  1106,  1107,  1108,  1109,  1110,  1116,  1117,  1118,
    1119,  1120,  1160,  1121,  1164,  1122,  1165,  1123,  1169,  1124,
    1166,  1125,  1126,  1127,  1128,  1129,  1130,  1131,  1132,  1167,
    1133,  1168,  1134,  1171,  1138,  1172,  1136,  1141,  1140,  1159,
    1173,  1170,  1174,  1175,  1176,  1177,  1178,  1179,  1180,  1250,
    1181,  1182,  1236,  1258,  1183,  1249,  1260,  1198,  1199,  1251,
    1204,  1205,  1206,  1207,  1208,  1209,  1224,  1225,  1226,  1252,
    1227,  1254,  1228,  1229,  1230,  1231,  1232,  1233,  1255,  1234,
    1264,  1235,  1239,  1244,  1245,  1266,  1356,  1268,  1256,  1253,
    1257,  1259,  1261,  1269,  1262,  1263,  1270,  1265,  1267,   512,
    1271,  1272,  1286,  1287,  1301,  1302,  1303,  1415,  1304,  1409,
    1305,  1306,  1112,  1408,   905,   752,  1357,  1307,  1406,  1349,
    1308,  1309,  1310,  1311,  1312,  1313,  1314,  1315,  1316,   764,
    1317,   833,  1318,   859,  1319,   864,  1320,  1321,  1412,  1322,
    1400,  1333,  1414,  1334,  1413,   926,  1407,   757,   360,   427,
    1403,  1405,   665,   348,     0,  1344,     0,     0,     0,  1335,
    1336,  1337,  1338,  1339,  1340,  1358,  1343,  1359,  1360,  1361,
    1382,  1383,  1384,  1385,  1386,  1387,  1388,  1389,  1390,  1391,
    1404,  1392,  1393,  1394,  1395,   733,     0,     0,   658,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   536
};

static const short int yycheck[] =
{
     335,   336,   420,     1,     1,     1,   256,    11,     1,     1,
       1,     1,    11,     4,     1,     1,     1,     1,   256,     1,
       1,   254,    76,   154,     1,   258,     1,     1,     1,   254,
     255,     8,     9,     1,     1,    12,   371,     1,   373,   254,
     256,   254,    19,   258,     1,   258,   256,    22,    22,    36,
      27,   256,   387,    44,    31,    32,    47,   256,   254,    46,
     395,    38,   258,   254,    41,    42,    43,   258,    45,   194,
     195,    53,   407,   408,    51,   256,   254,    14,    15,    16,
     258,   194,   195,   418,   419,     1,   421,     1,   872,   873,
     874,   875,   876,    70,    71,   254,    53,   154,    75,   258,
     256,    83,   254,    89,    89,    82,   258,    89,    89,    86,
      87,    88,   103,   256,    91,   254,    89,    94,    95,   258,
      36,   256,   120,   120,   120,   118,    83,   254,   105,   120,
      46,   258,    89,   120,   111,   112,   120,   114,   115,   116,
     117,    55,    56,    57,    58,    59,    60,    61,    62,   124,
     124,   128,   120,   120,   118,     1,   149,   254,   156,     5,
     137,   258,   139,   140,   156,   142,   156,   144,   145,   146,
     147,   153,   156,   150,   254,   156,   230,   256,   258,    25,
     256,   156,   156,   156,   161,   149,   256,   185,   185,   185,
     104,    37,   196,   185,   131,   185,   153,   196,   256,   534,
       1,   185,    48,   180,   120,   182,   254,    53,   154,   186,
     258,   256,    13,   190,   191,   192,   193,   185,   185,    65,
     197,   198,   256,   256,   138,   254,    72,   257,   205,   212,
     213,    77,    33,    34,  1025,  1026,  1027,   257,     1,    40,
       3,     1,   257,     6,     4,   242,    92,    10,   257,   257,
     242,   242,   242,   194,   257,   257,   257,   255,   235,   255,
     237,    24,    25,    26,   255,   255,   243,    30,   255,   255,
       1,   248,   154,   255,   120,   242,   253,   257,   255,   125,
       1,   255,   255,   154,    44,    48,   257,    47,   255,    52,
      53,   255,   257,   254,   257,    96,    97,   257,   257,    20,
     256,   215,   148,   257,    25,   106,   107,   257,    39,     1,
     257,   254,   257,   257,   160,     1,   162,   163,   256,     5,
      83,   167,    85,    54,    92,   126,   127,    48,    49,     1,
     257,    23,    53,   247,   257,   257,    99,    29,   257,    25,
     257,   255,   143,   103,   257,    76,    67,    78,   257,    80,
      81,    37,   257,    74,   155,   257,   257,   120,   257,   257,
     120,   257,    48,   164,    36,   257,   257,    53,    10,   100,
      12,   257,    93,    10,   257,    12,   257,   257,   257,    65,
     257,   257,   131,   257,    26,   257,    72,   257,    30,    26,
     153,    77,   727,    30,   257,   241,   242,   257,   257,   257,
     121,   169,   257,   257,   167,   251,    92,   257,   129,   255,
     257,   256,    84,   257,   177,   257,   108,   109,   110,   257,
     257,   113,   171,   172,   173,   174,   175,   148,   120,   257,
     257,   257,   200,   257,   120,   257,   157,   158,   257,   125,
     257,   133,   134,   244,   245,   246,   214,   257,   120,   257,
     122,   123,   257,   257,   255,   257,    98,   257,   257,   151,
     152,    98,   148,   257,   232,   233,   257,   188,   189,   257,
     238,   239,   240,   241,   160,   257,   162,   163,   257,   257,
     257,   167,   242,   251,   176,   903,   249,   257,   130,   254,
     257,   257,   255,   257,   166,   257,   168,   154,   257,     1,
     257,   257,   257,   257,   257,   257,     8,     9,   131,   181,
      12,   257,     1,   257,   257,   257,   257,    19,   257,   257,
     257,   242,   257,   257,   255,    27,   254,   257,   257,    31,
      32,   257,   257,   257,   255,   257,    38,   257,   131,    41,
      42,    43,   194,    45,   131,   131,   131,    36,   194,    51,
     194,   223,   254,   194,   194,   241,   242,   257,   893,   194,
     194,   194,   194,   255,   257,   251,   901,   902,    70,    71,
     154,   254,   257,    75,   194,   257,   194,   249,   250,   131,
      82,   154,   131,   255,    86,    87,    88,   194,   194,    91,
     194,   131,    94,    95,   236,    84,   154,   194,   131,   236,
     131,   131,   194,   105,   194,   194,     1,   131,   154,   111,
     112,   194,   114,   115,   116,   117,   216,   217,   218,   219,
     220,   221,   222,   131,   131,   131,   128,   154,   131,   194,
     131,   120,   194,   122,   123,   137,   257,   139,   140,   194,
     142,   257,   144,   145,   146,   147,   131,     1,   150,     3,
       5,   131,     6,   194,   131,   154,    10,   194,   194,   161,
      55,    56,    57,    58,    59,    60,    61,    62,   194,   194,
      24,    25,    26,   131,   194,   194,    30,   166,   180,   168,
     182,   194,    37,   194,   186,   254,   257,   257,   190,   191,
     192,   193,   181,    48,    48,   197,   198,   257,    52,    53,
     257,     1,     1,   205,     5,   154,   254,   257,   154,   104,
      65,   154,   257,   257,   257,   257,   154,    72,   257,   257,
      20,   154,    77,   257,    79,    25,   254,   154,   257,    83,
       1,    85,   154,   235,   223,   237,    37,    92,   154,   257,
      39,   243,    13,   138,   154,    99,   248,    48,    48,    49,
     154,   253,   257,    53,   194,    54,   154,   257,   254,   257,
     249,   250,    33,    34,    65,   257,   120,    67,   154,    40,
     125,    72,   254,   257,    74,   130,    77,    76,    79,    78,
     194,    80,    81,   257,   257,   257,   141,   257,   257,   254,
     257,    92,   194,    93,   257,   257,   154,   194,   194,   153,
     194,   100,   254,   154,   194,   160,   154,   162,   163,   154,
     154,     1,   154,   167,   154,   154,   131,   154,   154,   254,
     215,   121,   254,   177,   125,    96,    97,   257,   257,   129,
     254,   257,   257,    23,   254,   106,   107,   254,   257,    29,
     141,   254,   254,   254,   310,   254,   254,   254,   148,   254,
     154,   254,   247,   254,   254,   126,   127,   157,   158,   160,
     154,   162,   163,   254,   257,   254,   254,   254,   154,   254,
     225,   254,   143,   254,    92,     0,     1,   254,   257,   257,
       5,   257,    20,    21,   155,   257,   241,   257,   188,   189,
     257,   257,   257,   164,   257,   249,   251,    22,    20,    21,
      25,   254,   154,    28,   273,   257,   199,   257,   257,   131,
      35,    49,   159,   194,   257,   154,   257,    71,   108,   109,
     110,   254,   257,   113,   225,    50,   257,    49,   257,    67,
     120,   257,   257,   257,   257,   257,    74,   257,    63,    64,
     241,    66,   242,   133,   134,    67,   257,   257,    73,   257,
     251,   169,    74,   154,   257,    93,   254,   254,   254,   254,
     194,   151,   152,   254,   254,    90,   254,   254,   257,   254,
     254,    93,   254,   244,   245,   246,   101,   254,   103,   254,
     254,   254,   200,   121,   254,   254,   176,   254,   254,   254,
     254,   129,   130,   254,   119,   254,   214,   254,   254,   121,
     254,   254,   257,   254,   254,   254,   254,   129,   254,   254,
     254,   136,   254,   254,   232,   233,   254,   254,   254,   254,
     238,   239,   240,   241,   254,   254,   254,   254,   254,   254,
     254,   254,   170,   251,   254,   254,   154,   254,   254,   254,
     254,   254,   254,   254,   169,   254,   254,   194,   170,   194,
     257,   189,   194,   178,   179,   194,   154,   194,   183,   184,
     201,   202,   203,   204,   194,   206,   207,   189,   209,   210,
     211,   194,   154,   214,   154,   194,   154,   254,   154,   257,
     154,   254,   257,   224,   225,   226,   227,   228,   229,   154,
     231,   154,   131,   234,   201,   202,   203,   204,   254,   206,
     207,   254,   209,   210,   211,   254,   254,   214,   254,   154,
     254,   254,   154,   154,   254,   131,   154,   224,   225,   226,
     227,   228,   229,   254,   231,   254,   254,   234,   254,   154,
     254,   154,   131,   254,   254,   131,   131,   254,   254,   254,
     254,   254,   254,   254,   131,   154,   131,   257,   257,   257,
     131,   257,   257,   257,   257,   257,   257,   257,   257,   194,
     257,   257,   257,   257,   257,   257,   257,   254,   254,   254,
     254,   254,   154,   254,   154,   254,   154,   254,   154,   254,
     194,   254,   254,   254,   254,   254,   254,   254,   254,   194,
     254,   194,   254,   154,   254,   154,   257,   254,   257,   254,
     154,   257,   154,   131,   154,   154,   154,   254,   254,   154,
     254,   254,   159,   154,   254,   194,   154,   254,   254,   194,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   194,
     254,   194,   254,   254,   254,   254,   254,   254,   194,   254,
     154,   254,   254,   254,   254,   154,   131,   254,   194,   257,
     194,   194,   194,   254,   194,   194,   254,   194,   194,   256,
     254,   254,   254,   254,   254,   254,   254,  1411,   254,  1371,
     254,   254,   807,  1355,   602,   460,  1248,   254,  1351,  1218,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   493,
     254,   523,   254,   555,   254,   563,   254,   254,  1397,   254,
    1328,   254,  1402,   254,  1399,   635,  1353,   483,   120,   181,
    1342,  1348,   366,    93,    -1,  1190,    -1,    -1,    -1,   254,
     254,   254,   254,   254,   254,   254,  1188,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
    1346,   254,   254,   254,   254,   435,    -1,    -1,   354,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   289
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   260,     0,     1,     5,    22,    25,    28,    35,    50,
      63,    64,    66,    73,    90,   101,   103,   119,   136,   169,
     178,   179,   183,   184,   261,   266,   271,   285,   291,   306,
     335,   353,   366,   390,   397,   407,   416,   444,   454,   460,
     464,   474,   539,   555,   574,   254,   255,   256,   256,   336,
     417,   455,   256,   465,   256,   540,   367,   445,   354,   256,
     256,   307,   391,   256,   256,   398,   408,     1,    36,    46,
     120,   286,   287,   288,   289,   290,     1,    13,    33,    34,
      40,    96,    97,   106,   107,   126,   127,   143,   155,   164,
     244,   245,   246,   556,   557,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     573,   154,   337,   341,   154,   418,   422,   256,     1,    89,
     461,   462,   463,   256,     1,     8,     9,    12,    19,    27,
      31,    32,    38,    41,    42,    43,    45,    51,    70,    71,
      75,    82,    86,    87,    88,    91,    94,    95,   105,   111,
     112,   114,   115,   116,   117,   128,   137,   139,   140,   142,
     144,   145,   146,   147,   150,   161,   180,   182,   186,   190,
     191,   192,   193,   197,   198,   205,   235,   237,   243,   248,
     253,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   530,   534,   535,   536,   537,   538,   256,
     256,   256,   256,     1,    55,    56,    57,    58,    59,    60,
      61,    62,   104,   138,   215,   247,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
       1,   118,   149,   267,   268,   269,   270,   154,   308,   312,
     256,     1,    39,    54,    76,    78,    80,    81,   100,   575,
     576,   577,   578,   579,   580,   581,   582,   583,     1,    36,
      84,   120,   122,   123,   166,   168,   181,   223,   249,   250,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   256,   256,   254,   257,   257,   257,   255,
     287,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   255,   557,   256,
     256,     1,    89,   156,   456,   457,   458,   459,   257,   255,
     462,     1,   120,   156,   185,   466,   470,   471,   472,   473,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   531,   257,   527,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   255,   476,     1,     4,
      44,    47,   103,   120,   242,   541,   542,   543,   544,   545,
     549,   550,   551,     1,    20,    25,    48,    49,    53,    67,
      74,    93,   121,   129,   148,   157,   158,   188,   189,   242,
     368,   369,   370,   371,   372,   373,   374,   375,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,     1,   156,
     185,   242,   446,   450,   451,   452,   453,     1,    53,    83,
      89,   153,   355,   359,   360,   361,   364,   365,   254,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   255,   293,   254,   257,   257,   255,   268,   256,     1,
      22,   124,   156,   392,   393,   394,   395,   396,   257,   257,
     257,   257,   257,   257,   257,   255,   576,   254,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   255,
     273,     1,   120,   185,   242,   399,   400,   401,   402,   403,
       1,   120,   185,   409,   410,   411,   412,   154,   154,   154,
     254,   194,   131,   131,   194,   131,   263,   263,   131,   131,
     194,   194,   194,   194,   194,   194,   194,   194,   254,     1,
      23,    29,   108,   109,   110,   113,   120,   133,   134,   151,
     152,   176,   338,   339,   340,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,     1,     3,     6,    10,
      24,    25,    26,    30,    48,    52,    53,    83,    85,    99,
     120,   153,   167,   177,   249,   419,   420,   421,   423,   424,
     425,   426,   427,   428,   429,   430,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   257,   257,   255,   457,   154,
     254,   257,   257,   467,   255,   471,   194,   263,   194,   263,
     131,   154,   131,   194,   194,   194,   131,   154,   194,   131,
     131,   131,   194,   263,   194,   194,   131,   154,   194,   131,
     131,   263,   131,   154,   131,   131,   194,   194,   257,   194,
     257,   131,   131,   263,   263,   194,   131,   154,   194,   194,
     194,   195,   194,   195,   194,   194,   263,   263,   131,   265,
     263,   194,   194,   194,   194,   254,   552,   257,   257,   546,
     257,   257,   255,   542,   254,   257,   257,   257,   257,   376,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   255,   369,   257,   447,   257,   255,   451,   254,   356,
     257,   257,   257,   255,   360,   154,   154,   154,   154,   154,
     154,   154,   154,   216,   217,   218,   219,   220,   221,   222,
     154,   154,   194,   254,   154,   154,   254,     1,     5,    25,
      37,    48,    53,    65,    72,    77,    92,   120,   125,   148,
     160,   162,   163,   167,   241,   242,   251,   309,   310,   311,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   254,   257,
     257,   257,   255,   393,   194,   194,   194,   154,   194,   194,
     263,   254,   154,   194,   154,   154,   154,   154,   154,   154,
     131,   154,   154,   254,   254,   257,   404,   257,   255,   400,
     254,   257,   413,   255,   410,   254,   254,   254,   254,   254,
     254,   254,   171,   172,   173,   174,   175,   262,   263,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   255,   339,   254,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   431,   257,   257,   257,
     257,   257,   257,   257,   257,   255,   420,   154,   154,   254,
     254,   154,   154,   257,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   201,   202,   203,
     204,   206,   207,   209,   210,   211,   214,   224,   225,   226,
     227,   228,   229,   231,   234,   532,   533,   254,   201,   202,
     203,   204,   206,   207,   209,   210,   211,   214,   224,   225,
     226,   227,   228,   229,   231,   234,   528,   529,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,    14,    15,    16,   264,   265,
     254,   254,   254,   254,   254,   254,   257,   263,   194,   257,
     154,   154,   254,   194,   154,   194,   194,   257,   194,   194,
     194,   194,   194,   154,   131,   154,   154,   194,   154,   254,
     154,   257,   154,   254,   257,   154,   154,   131,   362,   363,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   257,   257,   257,   257,   331,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   255,   310,   154,   154,   154,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   154,   257,   154,   254,   154,
     257,   254,   262,   262,   262,   262,   262,   131,   263,   131,
     131,   131,   131,   154,   131,   131,   263,   263,   265,   254,
     154,   212,   213,   194,   154,   154,   194,   194,   194,   154,
     257,   154,   154,   154,   154,   131,   154,   154,   154,   254,
     254,   254,   254,   254,   159,   468,   469,   254,   258,   254,
     258,   264,   264,   264,    11,   196,   553,   554,   254,   254,
      11,   196,   547,   548,   254,   254,   254,   254,   254,   254,
      20,    21,    49,    67,    74,    93,   121,   129,   130,   170,
     189,   377,   378,   379,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   159,   448,   449,   254,
      76,   230,   357,   358,   254,   254,   199,   254,   258,   194,
     154,   194,   194,   257,   194,   194,   194,   194,   154,   194,
     154,   194,   194,   194,   154,   194,   154,   194,   254,   254,
     254,   254,   254,    92,   169,   200,   214,   232,   233,   238,
     239,   240,   241,   251,   405,   406,   254,   254,    92,   169,
     200,   214,   232,   233,   238,   239,   240,   241,   251,   414,
     415,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,    10,    12,    26,    30,    98,   130,   236,
     432,   433,   434,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   258,   533,   529,   254,   258,   254,   258,   379,
     254,   258,   254,   258,   254,   258,   131,   363,   254,   254,
     254,   254,     5,    37,    48,    65,    72,    77,    79,    92,
     125,   130,   141,   160,   162,   163,   225,   241,   251,   332,
     333,   334,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   258,   254,   258,
     434,   254,   258,   469,   554,   548,   378,   449,   358,   334,
     254,   258,   406,   415,   433,   333
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
#line 419 "ircd_parser.y"
    { (yyval.number) = 0; }
    break;

  case 28:
#line 421 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number);
		}
    break;

  case 29:
#line 425 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number);
		}
    break;

  case 30:
#line 429 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number);
		}
    break;

  case 31:
#line 433 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number);
		}
    break;

  case 32:
#line 437 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number);
		}
    break;

  case 33:
#line 441 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number);
		}
    break;

  case 34:
#line 446 "ircd_parser.y"
    { (yyval.number) = 0; }
    break;

  case 36:
#line 447 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
    break;

  case 37:
#line 448 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
    break;

  case 38:
#line 449 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
    break;

  case 39:
#line 450 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
    break;

  case 46:
#line 464 "ircd_parser.y"
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
#line 481 "ircd_parser.y"
    {
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
}
    break;

  case 63:
#line 505 "ircd_parser.y"
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
#line 539 "ircd_parser.y"
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
#line 599 "ircd_parser.y"
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
#line 613 "ircd_parser.y"
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
#line 631 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.description);
    DupString(ServerInfo.description,yylval.string);
  }
}
    break;

  case 68:
#line 640 "ircd_parser.y"
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
#line 654 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.network_desc);
    DupString(ServerInfo.network_desc, yylval.string);
  }
}
    break;

  case 70:
#line 663 "ircd_parser.y"
    {
  if (ypass == 2 && *yylval.string != '*')
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
#line 691 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2 && *yylval.string != '*')
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
#line 721 "ircd_parser.y"
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
#line 737 "ircd_parser.y"
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
      dlink_node *ptr = NULL;

      ServerInfo.hub = 0;
      delete_capability("HUB");

      /* Don't become a leaf if we have a lazylink active. */
      DLINK_FOREACH(ptr, serv_list.head)
      {
        const struct Client *acptr = ptr->data;
        if (MyConnect(acptr) && IsCapable(acptr, CAP_LL))
        {
          sendto_realops_flags(UMODE_ALL, L_ALL,
                               "Ignoring config file line hub=no; "
                               "due to active LazyLink (%s)",
                               acptr->name);
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
#line 793 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.name);
    DupString(AdminInfo.name, yylval.string);
  }
}
    break;

  case 82:
#line 802 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.email);
    DupString(AdminInfo.email, yylval.string);
  }
}
    break;

  case 83:
#line 811 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.description);
    DupString(AdminInfo.description, yylval.string);
  }
}
    break;

  case 100:
#line 838 "ircd_parser.y"
    {
                        }
    break;

  case 101:
#line 842 "ircd_parser.y"
    {
                        }
    break;

  case 102:
#line 846 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
}
    break;

  case 103:
#line 853 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
}
    break;

  case 104:
#line 860 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
}
    break;

  case 105:
#line 867 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operspylog, yylval.string,
            sizeof(ConfigLoggingEntry.operspylog));
}
    break;

  case 106:
#line 874 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.glinelog, yylval.string,
            sizeof(ConfigLoggingEntry.glinelog));
}
    break;

  case 107:
#line 881 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.klinelog, yylval.string,
            sizeof(ConfigLoggingEntry.klinelog));
}
    break;

  case 108:
#line 888 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.ioerrlog, yylval.string,
            sizeof(ConfigLoggingEntry.ioerrlog));
}
    break;

  case 109:
#line 895 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.killlog, yylval.string,
            sizeof(ConfigLoggingEntry.killlog));
}
    break;

  case 110:
#line 902 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
}
    break;

  case 111:
#line 906 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
}
    break;

  case 112:
#line 910 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
}
    break;

  case 113:
#line 914 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
}
    break;

  case 114:
#line 918 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
}
    break;

  case 115:
#line 922 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
}
    break;

  case 116:
#line 926 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
}
    break;

  case 117:
#line 932 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 118:
#line 941 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(OPER_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    SetConfEncrypted(yy_aconf);
  }
  else
  {
    MyFree(class_name);
    class_name = NULL;
  }
}
    break;

  case 119:
#line 954 "ircd_parser.y"
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

  case 144:
#line 1045 "ircd_parser.y"
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

  case 145:
#line 1057 "ircd_parser.y"
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

  case 146:
#line 1069 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;

    if (yy_aconf->user == NULL)
    {
      split_nuh(yylval.string, NULL, &yy_aconf->user, &yy_aconf->host);
    }
    else
    {
      yy_tmp = (struct CollectItem *)MyMalloc(sizeof(struct CollectItem));
      split_nuh(yylval.string, NULL, &yy_tmp->user, &yy_tmp->host);
      dlinkAdd(yy_tmp, &yy_tmp->node, &col_conf_list);
    }
  }
}
    break;

  case 147:
#line 1088 "ircd_parser.y"
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

  case 148:
#line 1100 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)			/* Yes, the default is encrypted */
      SetConfEncrypted(yy_aconf);
    else
      ClearConfEncrypted(yy_aconf);
  }
}
    break;

  case 149:
#line 1111 "ircd_parser.y"
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

  case 150:
#line 1122 "ircd_parser.y"
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

  case 151:
#line 1164 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 152:
#line 1173 "ircd_parser.y"
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

  case 153:
#line 1184 "ircd_parser.y"
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

  case 154:
#line 1195 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_REMOTEBAN;
    else
      yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 155:
#line 1206 "ircd_parser.y"
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

  case 156:
#line 1217 "ircd_parser.y"
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

  case 157:
#line 1228 "ircd_parser.y"
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

  case 158:
#line 1239 "ircd_parser.y"
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

  case 159:
#line 1250 "ircd_parser.y"
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

  case 160:
#line 1261 "ircd_parser.y"
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

  case 161:
#line 1272 "ircd_parser.y"
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

  case 162:
#line 1283 "ircd_parser.y"
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

  case 163:
#line 1294 "ircd_parser.y"
    {
}
    break;

  case 167:
#line 1298 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 168:
#line 1299 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 169:
#line 1302 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 170:
#line 1309 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 171:
#line 1316 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 172:
#line 1323 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 173:
#line 1330 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 174:
#line 1337 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 175:
#line 1344 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 176:
#line 1351 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 177:
#line 1358 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 178:
#line 1365 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 179:
#line 1372 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 180:
#line 1379 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 181:
#line 1386 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 182:
#line 1393 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 183:
#line 1400 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 184:
#line 1407 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) ClearConfEncrypted(yy_aconf);
    else SetConfEncrypted(yy_aconf);
  }
}
    break;

  case 185:
#line 1420 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = (struct ClassItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 186:
#line 1427 "ircd_parser.y"
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

  case 204:
#line 1457 "ircd_parser.y"
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
	PingWarning(class) = PingWarning(yy_class);
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

  case 205:
#line 1504 "ircd_parser.y"
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
	PingWarning(class) = PingWarning(yy_class);
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

  case 206:
#line 1551 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 207:
#line 1557 "ircd_parser.y"
    {
  if (ypass == 1)
    PingWarning(yy_class) = (yyvsp[-1].number);
}
    break;

  case 208:
#line 1563 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = (yyvsp[-1].number);
}
    break;

  case 209:
#line 1569 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 210:
#line 1575 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 211:
#line 1581 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 212:
#line 1587 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 213:
#line 1593 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = (yyvsp[-1].number);
}
    break;

  case 214:
#line 1599 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 215:
#line 1605 "ircd_parser.y"
    {
  if (ypass == 2)
    CidrBitlen(yy_class) = (yyvsp[-1].number);
}
    break;

  case 216:
#line 1611 "ircd_parser.y"
    {
  if (ypass == 2)
    NumberPerCidr(yy_class) = (yyvsp[-1].number);
}
    break;

  case 217:
#line 1620 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    listener_address = NULL;
    listener_flags = 0;
  }
}
    break;

  case 218:
#line 1627 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 219:
#line 1636 "ircd_parser.y"
    {
}
    break;

  case 223:
#line 1641 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_SSL;
}
    break;

  case 224:
#line 1645 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_HIDDEN;
}
    break;

  case 235:
#line 1658 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if ((listener_flags & LISTENER_SSL))
#ifdef HAVE_LIBCRYPTO
      if (!ServerInfo.ctx)
#endif
      {
        yyerror("SSL not available - port closed");
	break;
      }
    add_listener((yyvsp[0].number), listener_address, listener_flags);
    listener_flags = 0;
  }
}
    break;

  case 236:
#line 1673 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    int i;

    if ((listener_flags & LISTENER_SSL))
#ifdef HAVE_LIBCRYPTO
      if (!ServerInfo.ctx)
#endif
      {
        yyerror("SSL not available - port closed");
	break;
      }

    for (i = (yyvsp[-2].number); i <= (yyvsp[0].number); ++i)
      add_listener(i, listener_address, listener_flags);

    listener_flags = 0;
  }
}
    break;

  case 237:
#line 1695 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 238:
#line 1704 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 239:
#line 1716 "ircd_parser.y"
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

  case 240:
#line 1728 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp = NULL;
    dlink_node *ptr = NULL, *next_ptr = NULL;

    if (yy_aconf->user && yy_aconf->host)
    {
      conf_add_class_to_conf(yy_conf, class_name);
      add_conf_by_address(CONF_CLIENT, yy_aconf);
    }
    else
      delete_conf_item(yy_conf);

    /* copy over settings from first struct */
    DLINK_FOREACH_SAFE(ptr, next_ptr, col_conf_list.head)
    {
      struct AccessItem *new_aconf;
      struct ConfItem *new_conf;

      new_conf = make_conf_item(CLIENT_TYPE);
      new_aconf = map_to_conf(new_conf);

      yy_tmp = ptr->data;

      assert(yy_tmp->user && yy_tmp->host);

      if (yy_aconf->passwd != NULL)
        DupString(new_aconf->passwd, yy_aconf->passwd);
      if (yy_conf->name != NULL)
        DupString(new_conf->name, yy_conf->name);
      if (yy_aconf->passwd != NULL)
        DupString(new_aconf->passwd, yy_aconf->passwd);

      new_aconf->flags = yy_aconf->flags;
      new_aconf->port  = yy_aconf->port;

      DupString(new_aconf->user, yy_tmp->user);
      collapse(new_aconf->user);

      DupString(new_aconf->host, yy_tmp->host);
      collapse(new_aconf->host);

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

  case 260:
#line 1793 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;

    if (yy_aconf->user == NULL)
      split_nuh(yylval.string, NULL, &yy_aconf->user, &yy_aconf->host);
    else
    {
      yy_tmp = MyMalloc(sizeof(struct CollectItem));
      split_nuh(yylval.string, NULL, &yy_tmp->user, &yy_tmp->host);
      dlinkAdd(yy_tmp, &yy_tmp->node, &col_conf_list);
    }
  }
}
    break;

  case 261:
#line 1812 "ircd_parser.y"
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

  case 262:
#line 1825 "ircd_parser.y"
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

  case 263:
#line 1836 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 264:
#line 1845 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      SetConfEncrypted(yy_aconf);
    else
      ClearConfEncrypted(yy_aconf);
  }
}
    break;

  case 265:
#line 1856 "ircd_parser.y"
    {
}
    break;

  case 269:
#line 1860 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 270:
#line 1861 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 271:
#line 1864 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 272:
#line 1872 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 273:
#line 1879 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 274:
#line 1886 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 275:
#line 1893 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 276:
#line 1900 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 277:
#line 1907 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 278:
#line 1914 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 279:
#line 1921 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 280:
#line 1928 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 281:
#line 1937 "ircd_parser.y"
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

  case 282:
#line 1948 "ircd_parser.y"
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

  case 283:
#line 1959 "ircd_parser.y"
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

  case 284:
#line 1970 "ircd_parser.y"
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

  case 285:
#line 1981 "ircd_parser.y"
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

  case 286:
#line 1992 "ircd_parser.y"
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

  case 287:
#line 2004 "ircd_parser.y"
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

  case 288:
#line 2023 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 289:
#line 2033 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = (yyvsp[-1].number);
  }
}
    break;

  case 290:
#line 2042 "ircd_parser.y"
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

  case 291:
#line 2057 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 292:
#line 2064 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 299:
#line 2076 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 300:
#line 2085 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (IsChanPrefix(*yylval.string))
    {
      char def_reason[] = "No reason";

      create_channel_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
    }
  }
  /* ignore it for now.. but we really should make a warning if
   * its an erroneous name --fl_ */
}
    break;

  case 301:
#line 2100 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char def_reason[] = "No reason";

    create_nick_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
  }
}
    break;

  case 302:
#line 2113 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(ULINE_TYPE);
    yy_match_item = map_to_conf(yy_conf);
    yy_match_item->action = SHARED_ALL;
  }
}
    break;

  case 303:
#line 2121 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 310:
#line 2132 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 311:
#line 2141 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    split_nuh(yylval.string, NULL, &yy_match_item->user, &yy_match_item->host);
  }
}
    break;

  case 312:
#line 2149 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 316:
#line 2156 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 317:
#line 2160 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TKLINE;
}
    break;

  case 318:
#line 2164 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 319:
#line 2168 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 320:
#line 2172 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TXLINE;
}
    break;

  case 321:
#line 2176 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 322:
#line 2180 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 323:
#line 2184 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TRESV;
}
    break;

  case 324:
#line 2188 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 325:
#line 2192 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_LOCOPS;
}
    break;

  case 326:
#line 2196 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 327:
#line 2205 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_conf->flags = SHARED_ALL;
  }
}
    break;

  case 328:
#line 2212 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_conf->name == NULL)
      DupString(yy_conf->name, "*");
    yy_conf = NULL;
  }
}
    break;

  case 334:
#line 2225 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 335:
#line 2231 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = 0;
}
    break;

  case 339:
#line 2238 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_KLINE;
}
    break;

  case 340:
#line 2242 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TKLINE;
}
    break;

  case 341:
#line 2246 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNKLINE;
}
    break;

  case 342:
#line 2250 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_XLINE;
}
    break;

  case 343:
#line 2254 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TXLINE;
}
    break;

  case 344:
#line 2258 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNXLINE;
}
    break;

  case 345:
#line 2262 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_RESV;
}
    break;

  case 346:
#line 2266 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TRESV;
}
    break;

  case 347:
#line 2270 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNRESV;
}
    break;

  case 348:
#line 2274 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_LOCOPS;
}
    break;

  case 349:
#line 2278 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = SHARED_ALL;
}
    break;

  case 350:
#line 2287 "ircd_parser.y"
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

  case 351:
#line 2305 "ircd_parser.y"
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

  case 375:
#line 2448 "ircd_parser.y"
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

  case 376:
#line 2460 "ircd_parser.y"
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

  case 377:
#line 2472 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 378:
#line 2481 "ircd_parser.y"
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

      memcpy(&yy_aconf->my_ipnum, res->ai_addr, res->ai_addrlen);
      yy_aconf->my_ipnum.ss.ss_family = res->ai_family;
      yy_aconf->my_ipnum.ss_len = res->ai_addrlen;
      irc_freeaddrinfo(res);
    }
  }
}
    break;

  case 379:
#line 2507 "ircd_parser.y"
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

  case 380:
#line 2519 "ircd_parser.y"
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

  case 381:
#line 2531 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = (yyvsp[-1].number);
}
    break;

  case 382:
#line 2537 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 383:
#line 2541 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 384:
#line 2549 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 385:
#line 2558 "ircd_parser.y"
    {
}
    break;

  case 389:
#line 2562 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 390:
#line 2563 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 391:
#line 2566 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfLazyLink(yy_aconf);
    else SetConfLazyLink(yy_aconf);
  }
}
    break;

  case 392:
#line 2573 "ircd_parser.y"
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

  case 393:
#line 2584 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfCryptLink(yy_aconf);
    else SetConfCryptLink(yy_aconf);
  }
}
    break;

  case 394:
#line 2591 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAllowAutoConn(yy_aconf);
    else SetConfAllowAutoConn(yy_aconf);
  }
}
    break;

  case 395:
#line 2598 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAwayBurst(yy_aconf);
    else SetConfAwayBurst(yy_aconf);
  }
}
    break;

  case 396:
#line 2605 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfTopicBurst(yy_aconf);
    else SetConfTopicBurst(yy_aconf);
  }
}
    break;

  case 397:
#line 2615 "ircd_parser.y"
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

  case 398:
#line 2656 "ircd_parser.y"
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

  case 399:
#line 2667 "ircd_parser.y"
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

  case 400:
#line 2678 "ircd_parser.y"
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

  case 401:
#line 2693 "ircd_parser.y"
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

  case 402:
#line 2704 "ircd_parser.y"
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

  case 403:
#line 2717 "ircd_parser.y"
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

  case 404:
#line 2730 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 405:
#line 2739 "ircd_parser.y"
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

  case 406:
#line 2774 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    userbuf[0] = hostbuf[0] = reasonbuf[0] = '\0';
    regex_ban = 0;
  }
}
    break;

  case 407:
#line 2781 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (userbuf[0] && hostbuf[0])
    {
      if (regex_ban)
      {
        pcre *exp_user = NULL;
        pcre *exp_host = NULL;
        const char *errptr = NULL;

        if (!(exp_user = ircd_pcre_compile(userbuf, &errptr)) ||
            !(exp_host = ircd_pcre_compile(hostbuf, &errptr)))
        {
          ilog(L_ERROR, "Failed to add regular expression based K-Line: %s", errptr);
          break;
        }

        yy_conf = make_conf_item(RKLINE_TYPE);
        yy_aconf->regexuser = exp_user;
        yy_aconf->regexhost = exp_host;

        DupString(yy_aconf->user, userbuf);
        DupString(yy_aconf->host, hostbuf);

        if (reasonbuf[0])
          DupString(yy_aconf->reason, reasonbuf);
        else
          DupString(yy_aconf->reason, "No reason");
      }
      else
      {
        yy_conf = make_conf_item(KLINE_TYPE);
        yy_aconf = map_to_conf(yy_conf);

        DupString(yy_aconf->user, userbuf);
        DupString(yy_aconf->host, hostbuf);

        if (reasonbuf[0])
          DupString(yy_aconf->reason, reasonbuf);
        else
          DupString(yy_aconf->reason, "No reason");
        add_conf_by_address(CONF_KILL, yy_aconf);
      }
    }
    else
      delete_conf_item(yy_conf);

    yy_conf = NULL;
    yy_aconf = NULL;
  }
}
    break;

  case 408:
#line 2835 "ircd_parser.y"
    {
}
    break;

  case 412:
#line 2840 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 419:
#line 2849 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char *user = NULL, *host = NULL;

    split_nuh(yylval.string, NULL, &user, &host);

    strlcpy(userbuf, user, sizeof(userbuf));
    strlcpy(hostbuf, host, sizeof(hostbuf));

    MyFree(user);
    MyFree(host);
  }
}
    break;

  case 420:
#line 2865 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 421:
#line 2874 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(DLINE_TYPE);
    yy_aconf = map_to_conf(yy_conf);
    /* default reason */
    DupString(yy_aconf->reason, "No reason");
  }
}
    break;

  case 422:
#line 2883 "ircd_parser.y"
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

  case 428:
#line 2899 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 429:
#line 2908 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 435:
#line 2925 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.string[0] && parse_netmask(yylval.string, NULL, NULL) != HM_HOST)
    {
      yy_conf = make_conf_item(EXEMPTDLINE_TYPE);
      yy_aconf = map_to_conf(yy_conf);
      DupString(yy_aconf->host, yylval.string);

      add_conf_by_address(CONF_EXEMPTDLINE, yy_aconf);

      yy_conf = NULL;
      yy_aconf = NULL;
    }
  }
}
    break;

  case 436:
#line 2946 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    regex_ban = 0;
    reasonbuf[0] = gecos_name[0] = '\0';
  }
}
    break;

  case 437:
#line 2953 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (gecos_name[0])
    {
      if (regex_ban)
      {
        pcre *exp_p = NULL;
        const char *errptr = NULL;

        if (!(exp_p = ircd_pcre_compile(gecos_name, &errptr)))
        {
          ilog(L_ERROR, "Failed to add regular expression based X-Line: %s", errptr);
          break;
        }

        yy_conf = make_conf_item(RXLINE_TYPE);
        yy_conf->regexpname = exp_p;
      }
      else
        yy_conf = make_conf_item(XLINE_TYPE);

      yy_match_item = map_to_conf(yy_conf);
      DupString(yy_conf->name, gecos_name);

      if (reasonbuf[0])
        DupString(yy_match_item->reason, reasonbuf);
      else
        DupString(yy_match_item->reason, "No reason");
    }
  }
}
    break;

  case 438:
#line 2987 "ircd_parser.y"
    {
}
    break;

  case 442:
#line 2992 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 449:
#line 3001 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(gecos_name, yylval.string, sizeof(gecos_name));
}
    break;

  case 450:
#line 3007 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 511:
#line 3053 "ircd_parser.y"
    {
  ConfigFileEntry.gline_min_cidr = (yyvsp[-1].number);
}
    break;

  case 512:
#line 3058 "ircd_parser.y"
    {
  ConfigFileEntry.gline_min_cidr6 = (yyvsp[-1].number);
}
    break;

  case 513:
#line 3063 "ircd_parser.y"
    {
  ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 514:
#line 3068 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
}
    break;

  case 515:
#line 3073 "ircd_parser.y"
    {
  GlobalSetOptions.rejecttime = yylval.number;
}
    break;

  case 516:
#line 3078 "ircd_parser.y"
    {
  GlobalSetOptions.joinfloodcount = yylval.number;
}
    break;

  case 517:
#line 3083 "ircd_parser.y"
    {
  GlobalSetOptions.joinfloodtime = yylval.number;
}
    break;

  case 518:
#line 3088 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 519:
#line 3093 "ircd_parser.y"
    {
  ConfigFileEntry.kill_chase_time_limit = (yyvsp[-1].number);
}
    break;

  case 520:
#line 3098 "ircd_parser.y"
    {
  ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 521:
#line 3103 "ircd_parser.y"
    {
  ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 522:
#line 3108 "ircd_parser.y"
    {
  ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 523:
#line 3113 "ircd_parser.y"
    {
  ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 524:
#line 3118 "ircd_parser.y"
    {
  ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 525:
#line 3123 "ircd_parser.y"
    {
  ConfigFileEntry.max_nick_time = (yyvsp[-1].number); 
}
    break;

  case 526:
#line 3128 "ircd_parser.y"
    {
  ConfigFileEntry.max_nick_changes = (yyvsp[-1].number);
}
    break;

  case 527:
#line 3133 "ircd_parser.y"
    {
  ConfigFileEntry.max_accept = (yyvsp[-1].number);
}
    break;

  case 528:
#line 3138 "ircd_parser.y"
    {
  ConfigFileEntry.anti_spam_exit_message_time = (yyvsp[-1].number);
}
    break;

  case 529:
#line 3143 "ircd_parser.y"
    {
  ConfigFileEntry.ts_warn_delta = (yyvsp[-1].number);
}
    break;

  case 530:
#line 3148 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = (yyvsp[-1].number);
}
    break;

  case 531:
#line 3154 "ircd_parser.y"
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

  case 532:
#line 3165 "ircd_parser.y"
    {
  ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 533:
#line 3170 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 534:
#line 3179 "ircd_parser.y"
    {
  ConfigFileEntry.invisible_on_connect = yylval.number;
}
    break;

  case 535:
#line 3184 "ircd_parser.y"
    {
  ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 536:
#line 3189 "ircd_parser.y"
    {
  ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 537:
#line 3194 "ircd_parser.y"
    {
  ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 538:
#line 3199 "ircd_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 539:
#line 3202 "ircd_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 540:
#line 3207 "ircd_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 541:
#line 3210 "ircd_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 542:
#line 3215 "ircd_parser.y"
    {
  ConfigFileEntry.pace_wait = (yyvsp[-1].number);
}
    break;

  case 543:
#line 3220 "ircd_parser.y"
    {
  ConfigFileEntry.caller_id_wait = (yyvsp[-1].number);
}
    break;

  case 544:
#line 3225 "ircd_parser.y"
    {
  ConfigFileEntry.opers_bypass_callerid = yylval.number;
}
    break;

  case 545:
#line 3230 "ircd_parser.y"
    {
  ConfigFileEntry.pace_wait_simple = (yyvsp[-1].number);
}
    break;

  case 546:
#line 3235 "ircd_parser.y"
    {
  ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 547:
#line 3240 "ircd_parser.y"
    {
  ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 548:
#line 3245 "ircd_parser.y"
    {
  ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 549:
#line 3250 "ircd_parser.y"
    {
  ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 550:
#line 3255 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
}
    break;

  case 551:
#line 3266 "ircd_parser.y"
    {
  ConfigFileEntry.idletime = (yyvsp[-1].number);
}
    break;

  case 552:
#line 3271 "ircd_parser.y"
    {
  ConfigFileEntry.dots_in_ident = (yyvsp[-1].number);
}
    break;

  case 553:
#line 3276 "ircd_parser.y"
    {
  ConfigFileEntry.max_targets = (yyvsp[-1].number);
}
    break;

  case 554:
#line 3281 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 555:
#line 3290 "ircd_parser.y"
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

  case 556:
#line 3322 "ircd_parser.y"
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

  case 557:
#line 3340 "ircd_parser.y"
    {
  ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 558:
#line 3345 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 559:
#line 3354 "ircd_parser.y"
    {
  ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 560:
#line 3359 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 561:
#line 3364 "ircd_parser.y"
    {
  ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 562:
#line 3369 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 566:
#line 3375 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 567:
#line 3378 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 568:
#line 3381 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEAF;
}
    break;

  case 569:
#line 3384 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 570:
#line 3387 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 571:
#line 3390 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 572:
#line 3393 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 573:
#line 3396 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 574:
#line 3399 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 575:
#line 3402 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 576:
#line 3405 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 577:
#line 3408 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 578:
#line 3411 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 579:
#line 3414 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 580:
#line 3417 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 581:
#line 3420 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 582:
#line 3423 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 583:
#line 3426 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 584:
#line 3431 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 588:
#line 3437 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 589:
#line 3440 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 590:
#line 3443 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEAF;
}
    break;

  case 591:
#line 3446 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 592:
#line 3449 "ircd_parser.y"
    { 
  ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 593:
#line 3452 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 594:
#line 3455 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 595:
#line 3458 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 596:
#line 3461 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 597:
#line 3464 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 598:
#line 3467 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 599:
#line 3470 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 600:
#line 3473 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 601:
#line 3476 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 602:
#line 3479 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 603:
#line 3482 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 604:
#line 3485 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 605:
#line 3488 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 606:
#line 3493 "ircd_parser.y"
    {
  ConfigFileEntry.min_nonwildcard = (yyvsp[-1].number);
}
    break;

  case 607:
#line 3498 "ircd_parser.y"
    {
  ConfigFileEntry.min_nonwildcard_simple = (yyvsp[-1].number);
}
    break;

  case 608:
#line 3503 "ircd_parser.y"
    {
  ConfigFileEntry.default_floodcount = (yyvsp[-1].number);
}
    break;

  case 609:
#line 3508 "ircd_parser.y"
    {
  ConfigFileEntry.client_flood = (yyvsp[-1].number);
}
    break;

  case 610:
#line 3513 "ircd_parser.y"
    {
  ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 611:
#line 3521 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->flags = 0;
  }
}
    break;

  case 612:
#line 3529 "ircd_parser.y"
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

  case 622:
#line 3556 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 623:
#line 3562 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = (yyvsp[-1].number);
}
    break;

  case 624:
#line 3568 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 628:
#line 3574 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 629:
#line 3578 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 630:
#line 3584 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;

    if (yy_aconf->user == NULL)
    {
      split_nuh(yylval.string, NULL, &yy_aconf->user, &yy_aconf->host);
    }
    else
    {
      yy_tmp = (struct CollectItem *)MyMalloc(sizeof(struct CollectItem));
      split_nuh(yylval.string, NULL, &yy_tmp->user, &yy_tmp->host);
      dlinkAdd(yy_tmp, &yy_tmp->node, &col_conf_list);
    }
  }
}
    break;

  case 631:
#line 3603 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 632:
#line 3612 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 633:
#line 3616 "ircd_parser.y"
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

  case 636:
#line 3656 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 637:
#line 3660 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 658:
#line 3688 "ircd_parser.y"
    {
  ConfigChannel.restrict_channels = yylval.number;
}
    break;

  case 659:
#line 3693 "ircd_parser.y"
    {
  ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 660:
#line 3698 "ircd_parser.y"
    {
  ConfigChannel.use_except = yylval.number;
}
    break;

  case 661:
#line 3703 "ircd_parser.y"
    {
  ConfigChannel.use_invex = yylval.number;
}
    break;

  case 662:
#line 3708 "ircd_parser.y"
    {
  ConfigChannel.use_knock = yylval.number;
}
    break;

  case 663:
#line 3713 "ircd_parser.y"
    {
  ConfigChannel.knock_delay = (yyvsp[-1].number);
}
    break;

  case 664:
#line 3718 "ircd_parser.y"
    {
  ConfigChannel.knock_delay_channel = (yyvsp[-1].number);
}
    break;

  case 665:
#line 3723 "ircd_parser.y"
    {
  ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 666:
#line 3728 "ircd_parser.y"
    {
  ConfigChannel.max_chans_per_user = (yyvsp[-1].number);
}
    break;

  case 667:
#line 3733 "ircd_parser.y"
    {
  ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 668:
#line 3738 "ircd_parser.y"
    {
  ConfigChannel.max_bans = (yyvsp[-1].number);
}
    break;

  case 669:
#line 3743 "ircd_parser.y"
    {
  ConfigChannel.default_split_user_count = (yyvsp[-1].number);
}
    break;

  case 670:
#line 3748 "ircd_parser.y"
    {
  ConfigChannel.default_split_server_count = (yyvsp[-1].number);
}
    break;

  case 671:
#line 3753 "ircd_parser.y"
    {
  ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 672:
#line 3758 "ircd_parser.y"
    {
  ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 673:
#line 3763 "ircd_parser.y"
    {
  ConfigChannel.burst_topicwho = yylval.number;
}
    break;

  case 685:
#line 3782 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 686:
#line 3788 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 687:
#line 3794 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigServerHide.hidden_name);
    DupString(ConfigServerHide.hidden_name, yylval.string);
  }
}
    break;

  case 688:
#line 3803 "ircd_parser.y"
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

  case 689:
#line 3817 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 690:
#line 3823 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 691:
#line 3829 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 1037 of yacc.c.  */
#line 7148 "y.tab.c"

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



