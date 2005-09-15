/* A Bison parser, made from ircd_parser.y, by GNU bison 1.75.  */
/* $Id: y.tab.c,v 7.71 2005/09/15 10:43:29 adx Exp $ */

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
     MAXIMUM_LINKS = 360,
     MAX_ACCEPT = 361,
     MAX_BANS = 362,
     MAX_CHANS_PER_USER = 363,
     MAX_GLOBAL = 364,
     MAX_IDENT = 365,
     MAX_LOCAL = 366,
     MAX_NICK_CHANGES = 367,
     MAX_NICK_TIME = 368,
     MAX_NUMBER = 369,
     MAX_TARGETS = 370,
     MESSAGE_LOCALE = 371,
     MIN_NONWILDCARD = 372,
     MIN_NONWILDCARD_SIMPLE = 373,
     MODULE = 374,
     MODULES = 375,
     NAME = 376,
     NEED_PASSWORD = 377,
     NETWORK_DESC = 378,
     NETWORK_NAME = 379,
     NICK = 380,
     NICK_CHANGES = 381,
     NO_CREATE_ON_SPLIT = 382,
     NO_JOIN_ON_SPLIT = 383,
     NO_OPER_FLOOD = 384,
     NO_TILDE = 385,
     NOT = 386,
     NUMBER = 387,
     NUMBER_PER_IDENT = 388,
     NUMBER_PER_CIDR = 389,
     NUMBER_PER_IP = 390,
     NUMBER_PER_IP_GLOBAL = 391,
     OPERATOR = 392,
     OPERS_BYPASS_CALLERID = 393,
     OPER_LOG = 394,
     OPER_ONLY_UMODES = 395,
     OPER_PASS_RESV = 396,
     OPER_SPY_T = 397,
     OPER_UMODES = 398,
     INVITE_OPS_ONLY = 399,
     JOIN_FLOOD_COUNT = 400,
     JOIN_FLOOD_TIME = 401,
     PACE_WAIT = 402,
     PACE_WAIT_SIMPLE = 403,
     PASSWORD = 404,
     PATH = 405,
     PING_COOKIE = 406,
     PING_TIME = 407,
     PING_WARNING = 408,
     PORT = 409,
     QSTRING = 410,
     QUIET_ON_BAN = 411,
     REASON = 412,
     REDIRPORT = 413,
     REDIRSERV = 414,
     REGEX_T = 415,
     REHASH = 416,
     TREJECT_HOLD_TIME = 417,
     REMOTE = 418,
     REMOTEBAN = 419,
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
#define MAXIMUM_LINKS 360
#define MAX_ACCEPT 361
#define MAX_BANS 362
#define MAX_CHANS_PER_USER 363
#define MAX_GLOBAL 364
#define MAX_IDENT 365
#define MAX_LOCAL 366
#define MAX_NICK_CHANGES 367
#define MAX_NICK_TIME 368
#define MAX_NUMBER 369
#define MAX_TARGETS 370
#define MESSAGE_LOCALE 371
#define MIN_NONWILDCARD 372
#define MIN_NONWILDCARD_SIMPLE 373
#define MODULE 374
#define MODULES 375
#define NAME 376
#define NEED_PASSWORD 377
#define NETWORK_DESC 378
#define NETWORK_NAME 379
#define NICK 380
#define NICK_CHANGES 381
#define NO_CREATE_ON_SPLIT 382
#define NO_JOIN_ON_SPLIT 383
#define NO_OPER_FLOOD 384
#define NO_TILDE 385
#define NOT 386
#define NUMBER 387
#define NUMBER_PER_IDENT 388
#define NUMBER_PER_CIDR 389
#define NUMBER_PER_IP 390
#define NUMBER_PER_IP_GLOBAL 391
#define OPERATOR 392
#define OPERS_BYPASS_CALLERID 393
#define OPER_LOG 394
#define OPER_ONLY_UMODES 395
#define OPER_PASS_RESV 396
#define OPER_SPY_T 397
#define OPER_UMODES 398
#define INVITE_OPS_ONLY 399
#define JOIN_FLOOD_COUNT 400
#define JOIN_FLOOD_TIME 401
#define PACE_WAIT 402
#define PACE_WAIT_SIMPLE 403
#define PASSWORD 404
#define PATH 405
#define PING_COOKIE 406
#define PING_TIME 407
#define PING_WARNING 408
#define PORT 409
#define QSTRING 410
#define QUIET_ON_BAN 411
#define REASON 412
#define REDIRPORT 413
#define REDIRSERV 414
#define REGEX_T 415
#define REHASH 416
#define TREJECT_HOLD_TIME 417
#define REMOTE 418
#define REMOTEBAN 419
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

#ifndef YYSTYPE
#line 133 "ircd_parser.y"
typedef union {
  int number;
  char *string;
} yystype;
/* Line 193 of /usr/local/share/bison/yacc.c.  */
#line 692 "y.tab.c"
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
#line 713 "y.tab.c"

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
#define YYLAST   1380

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

#define YYTRANSLATE(X) \
  ((unsigned)(X) <= YYMAXUTOK ? yytranslate[X] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned short yytranslate[] =
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
static const unsigned short yyprhs[] =
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
    1520,  1522,  1524,  1529,  1534,  1539,  1544,  1549,  1554,  1559,
    1564,  1569,  1574,  1579,  1584,  1589,  1594,  1599,  1604,  1609,
    1614,  1619,  1624,  1629,  1634,  1639,  1644,  1649,  1654,  1659,
    1664,  1669,  1674,  1679,  1684,  1689,  1694,  1699,  1704,  1709,
    1714,  1719,  1724,  1729,  1734,  1739,  1744,  1749,  1754,  1759,
    1764,  1769,  1774,  1779,  1784,  1785,  1791,  1795,  1797,  1799,
    1801,  1803,  1805,  1807,  1809,  1811,  1813,  1815,  1817,  1819,
    1821,  1823,  1825,  1827,  1829,  1831,  1833,  1834,  1840,  1844,
    1846,  1848,  1850,  1852,  1854,  1856,  1858,  1860,  1862,  1864,
    1866,  1868,  1870,  1872,  1874,  1876,  1878,  1880,  1882,  1887,
    1892,  1897,  1902,  1907,  1908,  1915,  1918,  1920,  1922,  1924,
    1926,  1928,  1930,  1932,  1934,  1939,  1944,  1945,  1951,  1955,
    1957,  1959,  1961,  1966,  1971,  1972,  1978,  1982,  1984,  1986,
    1988,  1994,  1997,  1999,  2001,  2003,  2005,  2007,  2009,  2011,
    2013,  2015,  2017,  2019,  2021,  2023,  2025,  2027,  2029,  2031,
    2036,  2041,  2046,  2051,  2056,  2061,  2066,  2071,  2076,  2081,
    2086,  2091,  2096,  2101,  2106,  2112,  2115,  2117,  2119,  2121,
    2123,  2125,  2127,  2129,  2131,  2133,  2138,  2143,  2148,  2153,
    2158,  2163
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     260,     0,    -1,    -1,   260,   261,    -1,   285,    -1,   291,
      -1,   306,    -1,   556,    -1,   335,    -1,   353,    -1,   366,
      -1,   271,    -1,   574,    -1,   390,    -1,   397,    -1,   407,
      -1,   416,    -1,   444,    -1,   454,    -1,   460,    -1,   474,
      -1,   540,    -1,   464,    -1,   266,    -1,     1,   254,    -1,
       1,   255,    -1,    -1,   263,    -1,   132,   262,    -1,   132,
     171,   262,    -1,   132,   172,   262,    -1,   132,   173,   262,
      -1,   132,   174,   262,    -1,   132,   175,   262,    -1,    -1,
     265,    -1,   132,   264,    -1,   132,    14,   264,    -1,   132,
      15,   264,    -1,   132,    16,   264,    -1,   120,   256,   267,
     255,   254,    -1,   267,   268,    -1,   268,    -1,   269,    -1,
     270,    -1,     1,   254,    -1,   119,   257,   155,   254,    -1,
     150,   257,   155,   254,    -1,   179,   256,   272,   255,   254,
      -1,   272,   273,    -1,   273,    -1,   276,    -1,   281,    -1,
     284,    -1,   278,    -1,   279,    -1,   280,    -1,   283,    -1,
     275,    -1,   282,    -1,   277,    -1,   274,    -1,     1,   254,
      -1,   168,   257,   155,   254,    -1,   166,   257,   155,   254,
      -1,   121,   257,   155,   254,    -1,   181,   257,   155,   254,
      -1,    36,   257,   155,   254,    -1,   124,   257,   155,   254,
      -1,   123,   257,   155,   254,    -1,   249,   257,   155,   254,
      -1,   250,   257,   155,   254,    -1,   223,   257,   132,   254,
      -1,    84,   257,   194,   254,    -1,     5,   256,   286,   255,
     254,    -1,   286,   287,    -1,   287,    -1,   288,    -1,   290,
      -1,   289,    -1,     1,   254,    -1,   121,   257,   155,   254,
      -1,    46,   257,   155,   254,    -1,    36,   257,   155,   254,
      -1,   103,   256,   292,   255,   254,    -1,   292,   293,    -1,
     293,    -1,   294,    -1,   295,    -1,   304,    -1,   305,    -1,
     296,    -1,   298,    -1,   300,    -1,   301,    -1,   303,    -1,
     299,    -1,   302,    -1,   297,    -1,     1,   254,    -1,   215,
     257,   155,   254,    -1,   139,   257,   155,   254,    -1,    62,
     257,   155,   254,    -1,    55,   257,   155,   254,    -1,    60,
     257,   155,   254,    -1,    61,   257,   155,   254,    -1,    58,
     257,   155,   254,    -1,    57,   257,   155,   254,    -1,    59,
     257,   155,   254,    -1,    56,   257,   155,   254,    -1,   104,
     257,   216,   254,    -1,   104,   257,   218,   254,    -1,   104,
     257,   222,   254,    -1,   104,   257,   220,   254,    -1,   104,
     257,   221,   254,    -1,   104,   257,   219,   254,    -1,   104,
     257,   217,   254,    -1,   247,   257,   194,   254,    -1,    -1,
     137,   307,   308,   256,   309,   255,   254,    -1,    -1,   312,
      -1,   309,   310,    -1,   310,    -1,   311,    -1,   313,    -1,
     314,    -1,   316,    -1,   318,    -1,   319,    -1,   320,    -1,
     322,    -1,   323,    -1,   324,    -1,   325,    -1,   326,    -1,
     321,    -1,   327,    -1,   328,    -1,   329,    -1,   315,    -1,
     317,    -1,   330,    -1,     1,   254,    -1,   121,   257,   155,
     254,    -1,   155,    -1,   242,   257,   155,   254,    -1,   149,
     257,   155,   254,    -1,    48,   257,   194,   254,    -1,    77,
     257,   194,   254,    -1,   167,   257,   155,   254,    -1,    25,
     257,   155,   254,    -1,    72,   257,   194,   254,    -1,   163,
     257,   194,   254,    -1,   164,   257,   194,   254,    -1,    92,
     257,   194,   254,    -1,   251,   257,   194,   254,    -1,   241,
     257,   194,   254,    -1,    65,   257,   194,   254,    -1,   126,
     257,   194,   254,    -1,    37,   257,   194,   254,    -1,   161,
     257,   194,   254,    -1,     5,   257,   194,   254,    -1,    -1,
      53,   331,   257,   332,   254,    -1,   332,   258,   333,    -1,
     333,    -1,   131,   334,    -1,   334,    -1,    72,    -1,   163,
      -1,    92,    -1,   241,    -1,   251,    -1,    65,    -1,    37,
      -1,   161,    -1,     5,    -1,    77,    -1,   126,    -1,   225,
      -1,   142,    -1,    79,    -1,   164,    -1,    48,    -1,    -1,
      25,   336,   337,   256,   338,   255,   254,    -1,    -1,   341,
      -1,   338,   339,    -1,   339,    -1,   340,    -1,   351,    -1,
     342,    -1,   343,    -1,   352,    -1,   344,    -1,   345,    -1,
     346,    -1,   347,    -1,   348,    -1,   349,    -1,   350,    -1,
       1,   254,    -1,   121,   257,   155,   254,    -1,   155,    -1,
     152,   257,   263,   254,    -1,   153,   257,   263,   254,    -1,
     135,   257,   132,   254,    -1,    29,   257,   263,   254,    -1,
     114,   257,   132,   254,    -1,   109,   257,   132,   254,    -1,
     111,   257,   132,   254,    -1,   110,   257,   132,   254,    -1,
     176,   257,   265,   254,    -1,    23,   257,   132,   254,    -1,
     134,   257,   132,   254,    -1,    -1,   101,   354,   256,   359,
     255,   254,    -1,    -1,    53,   356,   257,   357,   254,    -1,
     357,   258,   358,    -1,   358,    -1,   230,    -1,    76,    -1,
     359,   360,    -1,   360,    -1,   361,    -1,   355,    -1,   364,
      -1,   365,    -1,     1,   254,    -1,   154,   257,   362,   254,
      -1,   362,   258,   363,    -1,   363,    -1,   132,    -1,   132,
     199,   132,    -1,    89,   257,   155,   254,    -1,    83,   257,
     155,   254,    -1,    -1,    73,   367,   256,   368,   255,   254,
      -1,   368,   369,    -1,   369,    -1,   370,    -1,   371,    -1,
     373,    -1,   375,    -1,   380,    -1,   381,    -1,   382,    -1,
     384,    -1,   385,    -1,   386,    -1,   372,    -1,   387,    -1,
     388,    -1,   383,    -1,   389,    -1,   374,    -1,     1,   254,
      -1,   242,   257,   155,   254,    -1,   149,   257,   155,   254,
      -1,   189,   257,   194,   254,    -1,    25,   257,   155,   254,
      -1,    48,   257,   194,   254,    -1,    -1,    53,   376,   257,
     377,   254,    -1,   377,   258,   378,    -1,   378,    -1,   131,
     379,    -1,   379,    -1,   189,    -1,    49,    -1,    93,    -1,
      74,    -1,    20,    -1,    21,    -1,   130,    -1,    67,    -1,
     170,    -1,   122,    -1,    93,   257,   194,   254,    -1,    74,
     257,   194,   254,    -1,    49,   257,   194,   254,    -1,    20,
     257,   194,   254,    -1,   130,   257,   194,   254,    -1,    67,
     257,   194,   254,    -1,   188,   257,   155,   254,    -1,   159,
     257,   155,   254,    -1,   158,   257,   132,   254,    -1,   122,
     257,   194,   254,    -1,    -1,   169,   391,   256,   392,   255,
     254,    -1,   392,   393,    -1,   393,    -1,   394,    -1,   395,
      -1,   396,    -1,     1,   254,    -1,   157,   257,   155,   254,
      -1,    22,   257,   155,   254,    -1,   125,   257,   155,   254,
      -1,    -1,   183,   398,   256,   399,   255,   254,    -1,   399,
     400,    -1,   400,    -1,   401,    -1,   402,    -1,   403,    -1,
       1,   254,    -1,   121,   257,   155,   254,    -1,   242,   257,
     155,   254,    -1,    -1,   185,   404,   257,   405,   254,    -1,
     405,   258,   406,    -1,   406,    -1,    92,    -1,   238,    -1,
     241,    -1,   251,    -1,   239,    -1,   233,    -1,   169,    -1,
     240,    -1,   232,    -1,   214,    -1,   200,    -1,    -1,   184,
     408,   256,   409,   255,   254,    -1,   409,   410,    -1,   410,
      -1,   411,    -1,   412,    -1,     1,   254,    -1,   121,   257,
     155,   254,    -1,    -1,   185,   413,   257,   414,   254,    -1,
     414,   258,   415,    -1,   415,    -1,    92,    -1,   238,    -1,
     241,    -1,   251,    -1,   239,    -1,   233,    -1,   169,    -1,
     240,    -1,   232,    -1,   214,    -1,   200,    -1,    -1,    28,
     417,   418,   256,   419,   255,   254,    -1,    -1,   422,    -1,
     419,   420,    -1,   420,    -1,   421,    -1,   423,    -1,   424,
      -1,   425,    -1,   426,    -1,   428,    -1,   427,    -1,   429,
      -1,   430,    -1,   440,    -1,   441,    -1,   442,    -1,   439,
      -1,   436,    -1,   438,    -1,   437,    -1,   435,    -1,   443,
      -1,     1,   254,    -1,   121,   257,   155,   254,    -1,   155,
      -1,    83,   257,   155,   254,    -1,   249,   257,   155,   254,
      -1,   177,   257,   155,   254,    -1,     3,   257,   155,   254,
      -1,   154,   257,   132,   254,    -1,     6,   257,   212,   254,
      -1,     6,   257,   213,   254,    -1,    52,   257,   155,   254,
      -1,    -1,    53,   431,   257,   432,   254,    -1,   432,   258,
     433,    -1,   433,    -1,   131,   434,    -1,   434,    -1,    98,
      -1,    26,    -1,    30,    -1,    10,    -1,    12,    -1,   236,
      -1,   167,   257,   155,   254,    -1,    48,   257,   194,   254,
      -1,    30,   257,   194,   254,    -1,    26,   257,   194,   254,
      -1,    10,   257,   194,   254,    -1,    85,   257,   155,   254,
      -1,    99,   257,   155,   254,    -1,    25,   257,   155,   254,
      -1,    24,   257,   155,   254,    -1,    -1,    90,   445,   256,
     450,   255,   254,    -1,    -1,   185,   447,   257,   448,   254,
      -1,   448,   258,   449,    -1,   449,    -1,   160,    -1,   450,
     451,    -1,   451,    -1,   452,    -1,   453,    -1,   446,    -1,
       1,    -1,   242,   257,   155,   254,    -1,   157,   257,   155,
     254,    -1,    -1,    35,   455,   256,   456,   255,   254,    -1,
     456,   457,    -1,   457,    -1,   458,    -1,   459,    -1,     1,
      -1,    89,   257,   155,   254,    -1,   157,   257,   155,   254,
      -1,    50,   256,   461,   255,   254,    -1,   461,   462,    -1,
     462,    -1,   463,    -1,     1,    -1,    89,   257,   155,   254,
      -1,    -1,    63,   465,   256,   470,   255,   254,    -1,    -1,
     185,   467,   257,   468,   254,    -1,   468,   258,   469,    -1,
     469,    -1,   160,    -1,   470,   471,    -1,   471,    -1,   472,
      -1,   473,    -1,   466,    -1,     1,    -1,   121,   257,   155,
     254,    -1,   157,   257,   155,   254,    -1,    64,   256,   475,
     255,   254,    -1,   475,   476,    -1,   476,    -1,   486,    -1,
     487,    -1,   489,    -1,   490,    -1,   491,    -1,   492,    -1,
     493,    -1,   494,    -1,   495,    -1,   496,    -1,   485,    -1,
     498,    -1,   499,    -1,   500,    -1,   501,    -1,   516,    -1,
     502,    -1,   504,    -1,   506,    -1,   505,    -1,   509,    -1,
     503,    -1,   510,    -1,   511,    -1,   512,    -1,   513,    -1,
     515,    -1,   517,    -1,   514,    -1,   531,    -1,   518,    -1,
     522,    -1,   523,    -1,   527,    -1,   507,    -1,   508,    -1,
     537,    -1,   535,    -1,   536,    -1,   519,    -1,   488,    -1,
     520,    -1,   521,    -1,   538,    -1,   526,    -1,   497,    -1,
     539,    -1,   524,    -1,   525,    -1,   479,    -1,   484,    -1,
     477,    -1,   478,    -1,   480,    -1,   481,    -1,   482,    -1,
     483,    -1,     1,    -1,    70,   257,   132,   254,    -1,    71,
     257,   132,   254,    -1,    12,   257,   194,   254,    -1,   248,
     257,   194,   254,    -1,   162,   257,   132,   254,    -1,   145,
     257,   132,   254,    -1,   146,   257,   132,   254,    -1,   182,
     257,   194,   254,    -1,    91,   257,   132,   254,    -1,    82,
     257,   194,   254,    -1,    87,   257,   194,   254,    -1,    41,
     257,   194,   254,    -1,    51,   257,   194,   254,    -1,     8,
     257,   194,   254,    -1,   113,   257,   263,   254,    -1,   112,
     257,   132,   254,    -1,   106,   257,   132,   254,    -1,     9,
     257,   263,   254,    -1,   198,   257,   263,   254,    -1,   197,
     257,   263,   254,    -1,    75,   257,   132,   254,    -1,    95,
     257,   194,   254,    -1,    94,   257,   155,   254,    -1,    88,
     257,   194,   254,    -1,   253,   257,   194,   254,    -1,   192,
     257,   194,   254,    -1,   193,   257,   194,   254,    -1,   191,
     257,   194,   254,    -1,   191,   257,   195,   254,    -1,   190,
     257,   194,   254,    -1,   190,   257,   195,   254,    -1,   147,
     257,   263,   254,    -1,    19,   257,   263,   254,    -1,   138,
     257,   194,   254,    -1,   148,   257,   263,   254,    -1,   186,
     257,   194,   254,    -1,   129,   257,   194,   254,    -1,   237,
     257,   194,   254,    -1,   141,   257,   194,   254,    -1,   116,
     257,   155,   254,    -1,    86,   257,   263,   254,    -1,    43,
     257,   132,   254,    -1,   105,   257,   132,   254,    -1,   115,
     257,   132,   254,    -1,   180,   257,   155,   254,    -1,    31,
     257,   155,   254,    -1,    27,   257,   132,   254,    -1,   243,
     257,   194,   254,    -1,    45,   257,   155,   254,    -1,   151,
     257,   194,   254,    -1,    38,   257,   194,   254,    -1,   235,
     257,   263,   254,    -1,    -1,   143,   528,   257,   529,   254,
      -1,   529,   258,   530,    -1,   530,    -1,   201,    -1,   204,
      -1,   206,    -1,   207,    -1,   210,    -1,   228,    -1,   224,
      -1,   226,    -1,   231,    -1,   229,    -1,   209,    -1,   225,
      -1,   227,    -1,   211,    -1,   234,    -1,   202,    -1,   203,
      -1,   214,    -1,    -1,   140,   532,   257,   533,   254,    -1,
     533,   258,   534,    -1,   534,    -1,   201,    -1,   204,    -1,
     206,    -1,   207,    -1,   210,    -1,   228,    -1,   224,    -1,
     226,    -1,   231,    -1,   229,    -1,   209,    -1,   225,    -1,
     227,    -1,   211,    -1,   234,    -1,   202,    -1,   203,    -1,
     214,    -1,   117,   257,   132,   254,    -1,   118,   257,   132,
     254,    -1,    32,   257,   132,   254,    -1,   205,   257,   265,
     254,    -1,    42,   257,   194,   254,    -1,    -1,    66,   541,
     256,   542,   255,   254,    -1,   542,   543,    -1,   543,    -1,
     544,    -1,   545,    -1,   546,    -1,   550,    -1,   551,    -1,
     552,    -1,     1,    -1,    47,   257,   194,   254,    -1,    44,
     257,   263,   254,    -1,    -1,   103,   547,   257,   548,   254,
      -1,   548,   258,   549,    -1,   549,    -1,   196,    -1,    11,
      -1,   242,   257,   155,   254,    -1,   121,   257,   155,   254,
      -1,    -1,     4,   553,   257,   554,   254,    -1,   554,   258,
     555,    -1,   555,    -1,   196,    -1,    11,    -1,    22,   256,
     557,   255,   254,    -1,   557,   558,    -1,   558,    -1,   559,
      -1,   560,    -1,   561,    -1,   562,    -1,   568,    -1,   563,
      -1,   564,    -1,   565,    -1,   566,    -1,   567,    -1,   569,
      -1,   570,    -1,   571,    -1,   572,    -1,   573,    -1,     1,
      -1,    40,   257,   194,   254,    -1,   244,   257,   194,   254,
      -1,   245,   257,   194,   254,    -1,   246,   257,   194,   254,
      -1,    96,   257,   263,   254,    -1,    97,   257,   263,   254,
      -1,   144,   257,   194,   254,    -1,   108,   257,   132,   254,
      -1,   156,   257,   194,   254,    -1,   107,   257,   132,   254,
      -1,    34,   257,   132,   254,    -1,    33,   257,   132,   254,
      -1,   127,   257,   194,   254,    -1,   128,   257,   194,   254,
      -1,    13,   257,   194,   254,    -1,   178,   256,   575,   255,
     254,    -1,   575,   576,    -1,   576,    -1,   577,    -1,   578,
      -1,   580,    -1,   582,    -1,   581,    -1,   579,    -1,   583,
      -1,     1,    -1,    54,   257,   194,   254,    -1,    81,   257,
     194,   254,    -1,    78,   257,   155,   254,    -1,   100,   257,
     263,   254,    -1,    76,   257,   194,   254,    -1,    39,   257,
     194,   254,    -1,    80,   257,   194,   254,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   390,   390,   391,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   419,   419,   420,   424,
     428,   432,   436,   440,   446,   446,   447,   448,   449,   450,
     457,   460,   460,   461,   461,   461,   463,   480,   491,   494,
     494,   496,   496,   496,   497,   497,   498,   498,   499,   500,
     500,   501,   501,   504,   538,   598,   612,   630,   639,   653,
     662,   690,   720,   736,   786,   788,   788,   789,   789,   789,
     790,   792,   801,   810,   823,   825,   825,   828,   828,   828,
     829,   830,   830,   831,   831,   832,   832,   833,   833,   834,
     837,   841,   845,   852,   859,   866,   873,   880,   887,   894,
     901,   905,   909,   913,   917,   921,   925,   931,   941,   940,
    1033,  1033,  1034,  1034,  1035,  1035,  1035,  1035,  1035,  1036,
    1036,  1036,  1037,  1037,  1037,  1038,  1038,  1038,  1039,  1039,
    1039,  1040,  1040,  1041,  1043,  1055,  1067,  1086,  1098,  1113,
    1124,  1166,  1175,  1186,  1197,  1208,  1219,  1230,  1241,  1252,
    1263,  1274,  1285,  1297,  1296,  1300,  1300,  1301,  1302,  1304,
    1311,  1318,  1325,  1332,  1339,  1346,  1353,  1360,  1367,  1374,
    1381,  1388,  1395,  1402,  1409,  1423,  1422,  1442,  1442,  1444,
    1444,  1445,  1445,  1446,  1447,  1448,  1449,  1450,  1451,  1452,
    1453,  1454,  1455,  1456,  1459,  1506,  1553,  1559,  1565,  1571,
    1577,  1583,  1589,  1595,  1601,  1607,  1613,  1623,  1622,  1639,
    1638,  1642,  1642,  1643,  1647,  1653,  1653,  1654,  1654,  1654,
    1654,  1654,  1656,  1658,  1658,  1660,  1675,  1697,  1706,  1719,
    1718,  1787,  1787,  1788,  1788,  1788,  1788,  1788,  1789,  1789,
    1790,  1790,  1790,  1791,  1791,  1792,  1792,  1792,  1793,  1793,
    1795,  1814,  1827,  1838,  1847,  1859,  1858,  1862,  1862,  1863,
    1864,  1866,  1874,  1881,  1888,  1895,  1902,  1909,  1916,  1923,
    1930,  1939,  1950,  1961,  1972,  1983,  1994,  2006,  2025,  2035,
    2044,  2060,  2059,  2075,  2075,  2076,  2076,  2076,  2076,  2078,
    2087,  2102,  2116,  2115,  2131,  2131,  2132,  2132,  2132,  2132,
    2134,  2143,  2152,  2151,  2157,  2157,  2158,  2162,  2166,  2170,
    2174,  2178,  2182,  2186,  2190,  2194,  2198,  2208,  2207,  2224,
    2224,  2225,  2225,  2225,  2227,  2234,  2233,  2239,  2239,  2240,
    2244,  2248,  2252,  2256,  2260,  2264,  2268,  2272,  2276,  2280,
    2290,  2289,  2439,  2439,  2440,  2440,  2441,  2441,  2441,  2441,
    2442,  2442,  2443,  2443,  2444,  2444,  2444,  2445,  2445,  2445,
    2446,  2446,  2446,  2447,  2447,  2450,  2462,  2474,  2483,  2509,
    2521,  2533,  2539,  2543,  2551,  2561,  2560,  2564,  2564,  2565,
    2566,  2568,  2575,  2586,  2593,  2600,  2607,  2617,  2658,  2669,
    2680,  2695,  2706,  2719,  2732,  2741,  2777,  2776,  2838,  2837,
    2841,  2841,  2842,  2848,  2848,  2849,  2849,  2849,  2849,  2851,
    2867,  2877,  2876,  2898,  2898,  2899,  2899,  2899,  2901,  2910,
    2922,  2924,  2924,  2925,  2925,  2927,  2947,  2946,  2988,  2987,
    2991,  2991,  2992,  2998,  2998,  2999,  2999,  2999,  2999,  3001,
    3007,  3016,  3019,  3019,  3020,  3020,  3020,  3021,  3021,  3022,
    3022,  3023,  3023,  3024,  3024,  3025,  3025,  3026,  3026,  3027,
    3027,  3028,  3028,  3029,  3029,  3030,  3030,  3031,  3031,  3032,
    3032,  3033,  3033,  3034,  3035,  3035,  3036,  3036,  3037,  3037,
    3038,  3038,  3039,  3039,  3040,  3040,  3041,  3042,  3042,  3043,
    3043,  3044,  3044,  3045,  3045,  3046,  3046,  3047,  3047,  3048,
    3048,  3049,  3054,  3059,  3064,  3069,  3074,  3079,  3084,  3089,
    3094,  3099,  3104,  3109,  3114,  3119,  3124,  3129,  3134,  3139,
    3144,  3149,  3155,  3166,  3171,  3180,  3185,  3190,  3195,  3200,
    3203,  3208,  3211,  3216,  3221,  3226,  3231,  3236,  3241,  3246,
    3251,  3256,  3267,  3272,  3277,  3282,  3287,  3296,  3328,  3346,
    3351,  3360,  3365,  3370,  3376,  3375,  3380,  3380,  3381,  3384,
    3387,  3390,  3393,  3396,  3399,  3402,  3405,  3408,  3411,  3414,
    3417,  3420,  3423,  3426,  3429,  3432,  3438,  3437,  3442,  3442,
    3443,  3446,  3449,  3452,  3455,  3458,  3461,  3464,  3467,  3470,
    3473,  3476,  3479,  3482,  3485,  3488,  3491,  3494,  3499,  3504,
    3509,  3514,  3519,  3528,  3527,  3553,  3553,  3554,  3554,  3555,
    3556,  3557,  3558,  3559,  3562,  3568,  3575,  3574,  3579,  3579,
    3580,  3584,  3590,  3609,  3619,  3618,  3661,  3661,  3662,  3666,
    3675,  3678,  3678,  3679,  3679,  3680,  3681,  3682,  3683,  3684,
    3685,  3686,  3687,  3688,  3689,  3690,  3691,  3692,  3693,  3696,
    3702,  3708,  3714,  3720,  3726,  3732,  3738,  3744,  3750,  3756,
    3762,  3768,  3774,  3780,  3789,  3792,  3792,  3793,  3793,  3793,
    3794,  3795,  3796,  3796,  3797,  3800,  3806,  3812,  3821,  3835,
    3841,  3847
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ACCEPT_PASSWORD", "ACTION", "ADMIN", 
  "AFTYPE", "T_ALLOW", "ANTI_NICK_FLOOD", "ANTI_SPAM_EXIT_MESSAGE_TIME", 
  "AUTOCONN", "T_BLOCK", "BURST_AWAY", "BURST_TOPICWHO", "BYTES", 
  "KBYTES", "MBYTES", "GBYTES", "TBYTES", "CALLER_ID_WAIT", "CAN_FLOOD", 
  "CAN_IDLE", "CHANNEL", "CIDR_BITLEN", "CIPHER_PREFERENCE", "CLASS", 
  "COMPRESSED", "COMPRESSION_LEVEL", "CONNECT", "CONNECTFREQ", 
  "CRYPTLINK", "DEFAULT_CIPHER_PREFERENCE", "DEFAULT_FLOODCOUNT", 
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
  "MAXIMUM_LINKS", "MAX_ACCEPT", "MAX_BANS", "MAX_CHANS_PER_USER", 
  "MAX_GLOBAL", "MAX_IDENT", "MAX_LOCAL", "MAX_NICK_CHANGES", 
  "MAX_NICK_TIME", "MAX_NUMBER", "MAX_TARGETS", "MESSAGE_LOCALE", 
  "MIN_NONWILDCARD", "MIN_NONWILDCARD_SIMPLE", "MODULE", "MODULES", 
  "NAME", "NEED_PASSWORD", "NETWORK_DESC", "NETWORK_NAME", "NICK", 
  "NICK_CHANGES", "NO_CREATE_ON_SPLIT", "NO_JOIN_ON_SPLIT", 
  "NO_OPER_FLOOD", "NO_TILDE", "NOT", "NUMBER", "NUMBER_PER_IDENT", 
  "NUMBER_PER_CIDR", "NUMBER_PER_IP", "NUMBER_PER_IP_GLOBAL", "OPERATOR", 
  "OPERS_BYPASS_CALLERID", "OPER_LOG", "OPER_ONLY_UMODES", 
  "OPER_PASS_RESV", "OPER_SPY_T", "OPER_UMODES", "INVITE_OPS_ONLY", 
  "JOIN_FLOOD_COUNT", "JOIN_FLOOD_TIME", "PACE_WAIT", "PACE_WAIT_SIMPLE", 
  "PASSWORD", "PATH", "PING_COOKIE", "PING_TIME", "PING_WARNING", "PORT", 
  "QSTRING", "QUIET_ON_BAN", "REASON", "REDIRPORT", "REDIRSERV", 
  "REGEX_T", "REHASH", "TREJECT_HOLD_TIME", "REMOTE", "REMOTEBAN", 
  "RESTRICTED", "RSA_PRIVATE_KEY_FILE", "RSA_PUBLIC_KEY_FILE", 
  "SSL_CERTIFICATE_FILE", "RESV", "RESV_EXEMPT", "SECONDS", "MINUTES", 
  "HOURS", "DAYS", "WEEKS", "SENDQ", "SEND_PASSWORD", "SERVERHIDE", 
  "SERVERINFO", "SERVLINK_PATH", "IRCD_SID", "TKLINE_EXPIRE_NOTICES", 
  "T_SHARED", "T_CLUSTER", "TYPE", "SHORT_MOTD", "SILENT", "SPOOF", 
  "SPOOF_NOTICE", "STATS_I_OPER_ONLY", "STATS_K_OPER_ONLY", 
  "STATS_O_OPER_ONLY", "STATS_P_OPER_ONLY", "TBOOL", "TMASKED", 
  "T_REJECT", "TS_MAX_DELTA", "TS_WARN_DELTA", "TWODOTS", "T_ALL", 
  "T_BOTS", "T_SOFTCALLERID", "T_CALLERID", "T_CCONN", "T_CLIENT_FLOOD", 
  "T_DEAF", "T_DEBUG", "T_DRONE", "T_EXTERNAL", "T_FULL", "T_INVISIBLE", 
  "T_IPV4", "T_IPV6", "T_LOCOPS", "T_LOGPATH", "T_L_CRIT", "T_L_DEBUG", 
  "T_L_ERROR", "T_L_INFO", "T_L_NOTICE", "T_L_TRACE", "T_L_WARN", 
  "T_MAX_CLIENTS", "T_NCHANGE", "T_OPERWALL", "T_REJ", "T_SERVNOTICE", 
  "T_SKILL", "T_SPY", "T_SSL", "T_UNAUTH", "T_UNRESV", "T_UNXLINE", 
  "T_WALLOP", "THROTTLE_TIME", "TOPICBURST", "TRUE_NO_OPER_FLOOD", 
  "TKLINE", "TXLINE", "TRESV", "UNKLINE", "USER", "USE_EGD", "USE_EXCEPT", 
  "USE_INVEX", "USE_KNOCK", "USE_LOGGING", "USE_WHOIS_ACTUALLY", "VHOST", 
  "VHOST6", "XLINE", "WARN", "WARN_NO_NLINE", "';'", "'}'", "'{'", "'='", 
  "','", "$accept", "conf", "conf_item", "timespec_", "timespec", 
  "sizespec_", "sizespec", "modules_entry", "modules_items", 
  "modules_item", "modules_module", "modules_path", "serverinfo_entry", 
  "serverinfo_items", "serverinfo_item", 
  "serverinfo_ssl_certificate_file", "serverinfo_rsa_private_key_file", 
  "serverinfo_name", "serverinfo_sid", "serverinfo_description", 
  "serverinfo_network_name", "serverinfo_network_desc", 
  "serverinfo_vhost", "serverinfo_vhost6", "serverinfo_max_clients", 
  "serverinfo_hub", "admin_entry", "admin_items", "admin_item", 
  "admin_name", "admin_email", "admin_description", "logging_entry", 
  "logging_items", "logging_item", "logging_path", "logging_oper_log", 
  "logging_fuserlog", "logging_ffailed_operlog", "logging_foperlog", 
  "logging_foperspylog", "logging_fglinelog", "logging_fklinelog", 
  "logging_ioerrlog", "logging_killlog", "logging_log_level", 
  "logging_use_logging", "oper_entry", "@1", "oper_name_b", "oper_items", 
  "oper_item", "oper_name", "oper_name_t", "oper_user", "oper_password", 
  "oper_encrypted", "oper_hidden_admin", "oper_rsa_public_key_file", 
  "oper_class", "oper_global_kill", "oper_remote", "oper_remoteban", 
  "oper_kline", "oper_xline", "oper_unkline", "oper_gline", 
  "oper_nick_changes", "oper_die", "oper_rehash", "oper_admin", 
  "oper_flags", "@2", "oper_flags_items", "oper_flags_item", 
  "oper_flags_item_atom", "class_entry", "@3", "class_name_b", 
  "class_items", "class_item", "class_name", "class_name_t", 
  "class_ping_time", "class_ping_warning", "class_number_per_ip", 
  "class_connectfreq", "class_max_number", "class_max_global", 
  "class_max_local", "class_max_ident", "class_sendq", 
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
  "connect_auto", "connect_hub_mask", "connect_leaf_mask", 
  "connect_class", "connect_cipher_preference", "kill_entry", "@15", 
  "kill_type", "@16", "kill_type_items", "kill_type_item", "kill_items", 
  "kill_item", "kill_user", "kill_reason", "deny_entry", "@17", 
  "deny_items", "deny_item", "deny_ip", "deny_reason", "exempt_entry", 
  "exempt_items", "exempt_item", "exempt_ip", "gecos_entry", "@18", 
  "gecos_flags", "@19", "gecos_flags_items", "gecos_flags_item", 
  "gecos_items", "gecos_item", "gecos_name", "gecos_reason", 
  "general_entry", "general_items", "general_item", 
  "general_gline_min_cidr", "general_gline_min_cidr6", 
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
  "general_dots_in_ident", "general_maximum_links", "general_max_targets", 
  "general_servlink_path", "general_default_cipher_preference", 
  "general_compression_level", "general_use_egd", "general_egdpool_path", 
  "general_ping_cookie", "general_disable_auth", "general_throttle_time", 
  "general_oper_umodes", "@20", "umode_oitems", "umode_oitem", 
  "general_oper_only_umodes", "@21", "umode_items", "umode_item", 
  "general_min_nonwildcard", "general_min_nonwildcard_simple", 
  "general_default_floodcount", "general_client_flood", 
  "general_dot_in_ip6_addr", "gline_entry", "@22", "gline_items", 
  "gline_item", "gline_enable", "gline_duration", "gline_logging", "@23", 
  "gline_logging_types", "gline_logging_type_item", "gline_user", 
  "gline_server", "gline_action", "@24", "gdeny_types", "gdeny_type_item", 
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
  "serverhide_hidden_name", "serverhide_links_delay", "serverhide_hidden", 
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
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,    59,   125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
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
     476,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     504,   505,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   528,   527,   529,   529,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   532,   531,   533,   533,
     534,   534,   534,   534,   534,   534,   534,   534,   534,   534,
     534,   534,   534,   534,   534,   534,   534,   534,   535,   536,
     537,   538,   539,   541,   540,   542,   542,   543,   543,   543,
     543,   543,   543,   543,   544,   545,   547,   546,   548,   548,
     549,   549,   550,   551,   553,   552,   554,   554,   555,   555,
     556,   557,   557,   558,   558,   558,   558,   558,   558,   558,
     558,   558,   558,   558,   558,   558,   558,   558,   558,   559,
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
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     0,     5,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     5,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     4,     0,     6,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     0,     5,     3,     1,
       1,     1,     4,     4,     0,     5,     3,     1,     1,     1,
       5,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       2,     0,     1,     0,     0,     0,   185,   350,   421,     0,
     436,     0,   613,   239,   406,   217,     0,     0,   118,   291,
       0,     0,   302,   327,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,   187,
     352,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   120,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    79,    78,   658,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   642,   643,   644,   645,   646,   648,   649,
     650,   651,   652,   647,   653,   654,   655,   656,   657,   205,
       0,   188,   376,     0,   353,     0,   434,     0,     0,   432,
     433,     0,   511,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   586,     0,   564,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   453,   505,   506,   503,   507,   508,   509,   510,   504,
     464,   454,   455,   494,   456,   457,   458,   459,   460,   461,
     462,   463,   499,   465,   466,   467,   468,   470,   475,   471,
     473,   472,   488,   489,   474,   476,   477,   478,   479,   482,
     480,   469,   481,   484,   493,   495,   496,   485,   486,   501,
     502,   498,   487,   483,   491,   492,   490,   497,   500,     0,
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
       0,     0,     0,     0,     0,     0,     0,   641,     0,     0,
     427,     0,     0,     0,   424,   425,   426,     0,     0,   431,
     448,     0,     0,   438,   447,     0,   444,   445,   446,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   452,   623,   634,
       0,     0,   626,     0,     0,     0,   616,   617,   618,   619,
     620,   621,   622,     0,     0,     0,     0,     0,   265,     0,
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
       0,     0,     0,     0,     0,     0,     0,   640,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   190,   191,   193,   194,   196,   197,   198,   199,
     200,   201,   202,   192,   195,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   385,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   355,   356,   357,   358,   359,
     360,   362,   361,   363,   364,   372,   369,   371,   370,   368,
     365,   366,   367,   373,     0,     0,     0,   423,     0,   430,
       0,     0,     0,     0,   443,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,   451,     0,     0,     0,     0,
       0,     0,     0,   615,   259,     0,     0,     0,     0,     0,
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
     664,   668,   666,   671,   672,   665,   667,   660,   661,   662,
     203,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   189,   374,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   354,     0,     0,   422,   435,
       0,     0,     0,   437,   525,   529,   514,   544,   558,   557,
     610,   562,   523,   612,   553,   560,   524,   512,   513,   532,
     521,   552,   522,   535,   520,   534,   533,   554,   528,   527,
     526,   555,   551,   608,   609,   548,   545,   590,   605,   606,
     591,   592,   593,   600,   594,   603,   607,   596,   601,   597,
     602,   595,   599,   598,   604,     0,   589,   550,   568,   583,
     584,   569,   570,   571,   578,   572,   581,   585,   574,   579,
     575,   580,   573,   577,   576,   582,     0,   567,   517,   518,
     543,   546,   561,   516,   556,   519,   547,   541,   542,   539,
     540,   537,   538,   531,   530,    34,    34,    34,    36,    35,
     611,   563,   549,   559,   515,   536,     0,     0,     0,     0,
       0,     0,   614,     0,     0,     0,     0,     0,     0,     0,
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
     428,   429,   449,   450,   442,     0,   441,   587,     0,   565,
       0,    37,    38,    39,   639,   638,     0,   637,   625,   624,
     631,   630,     0,   629,   633,   632,   284,   263,   264,   283,
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
     378,   439,     0,   588,   566,   635,     0,   627,     0,   269,
     266,     0,   409,     0,   220,     0,   236,   233,   162,   151,
     160,   148,   177,   175,   184,   174,   169,   178,   182,   171,
     179,     0,   181,   176,   170,   183,   180,   172,   173,     0,
     166,   168,   158,   152,   149,   155,   144,   159,   147,   161,
     153,   154,   150,   157,   146,   156,   313,     0,   336,     0,
     389,   386,     0,   440,   636,   628,   267,   410,   221,   167,
     164,     0,   314,   337,   387,   165
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,    24,   877,   878,  1028,  1029,    25,   273,   274,
     275,   276,    26,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,    27,    71,    72,    73,
      74,    75,    28,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,    29,    61,   278,
     807,   808,   809,   279,   810,   811,   812,   813,   814,   815,
     816,   817,   818,   819,   820,   821,   822,   823,   824,   825,
     826,   827,  1096,  1379,  1380,  1381,    30,    49,   110,   601,
     602,   603,   111,   604,   605,   606,   607,   608,   609,   610,
     611,   612,   613,   614,    31,    58,   492,   759,  1242,  1243,
     493,   494,   495,  1068,  1069,   496,   497,    32,    56,   460,
     461,   462,   463,   464,   465,   466,   467,   739,  1221,  1222,
    1223,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,    33,    62,   523,   524,   525,   526,   527,    34,    65,
     555,   556,   557,   558,   559,   856,  1284,  1285,    35,    66,
     563,   564,   565,   566,   862,  1299,  1300,    36,    50,   113,
     634,   635,   636,   114,   637,   638,   639,   640,   641,   642,
     643,   644,   915,  1330,  1331,  1332,   645,   646,   647,   648,
     649,   650,   651,   652,   653,    37,    57,   482,   754,  1237,
    1238,   483,   484,   485,   486,    38,    51,   353,   354,   355,
     356,    39,   118,   119,   120,    40,    53,   364,   662,  1185,
    1186,   365,   366,   367,   368,    41,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   404,
    1006,  1007,   233,   402,   985,   986,   234,   235,   236,   237,
     238,    42,    55,   435,   436,   437,   438,   439,   729,  1202,
    1203,   440,   441,   442,   726,  1196,  1197,    43,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    44,   289,   290,   291,   292,
     293,   294,   295,   296,   297
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -695
static const short yypact[] =
{
    -695,   827,  -695,  -247,  -238,  -230,  -695,  -695,  -695,  -217,
    -695,  -212,  -695,  -695,  -695,  -695,  -207,  -204,  -695,  -695,
    -191,  -188,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,   274,   775,   -80,
     -74,  -156,    20,  -153,   458,  -151,  -145,  -143,  -142,   722,
      30,   -61,  -129,   441,   506,  -120,  -111,  -133,  -127,  -109,
    -107,     4,  -695,  -695,  -695,  -695,  -695,  -101,   -96,   -83,
     -82,   -55,   -49,   -31,   -25,   -16,     0,     6,    32,    36,
      40,    46,   209,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
     -22,  -695,  -695,    -6,  -695,    13,  -695,    50,    18,  -695,
    -695,    16,  -695,    54,    64,    65,    67,    69,    77,    81,
      82,    83,    90,    91,    93,    95,    99,   101,   104,   105,
     111,   112,   114,   121,   123,   124,   127,   128,   131,   132,
     133,   134,   139,   140,   141,   144,  -695,   145,  -695,   150,
     151,   152,   154,   159,   162,   164,   170,   172,   173,   177,
     178,   180,   182,   183,   187,   192,   194,   195,   201,   204,
      47,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,   366,
     791,    66,    27,    89,   208,   211,   214,   215,   216,   219,
     221,   222,   224,   225,   226,   229,   157,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
     160,   231,   234,    86,  -695,  -695,  -695,  -695,    24,  -695,
      21,  -695,   235,   236,   237,   240,   245,   247,   249,    15,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,   254,   266,
     267,   269,   270,   273,   277,   278,   279,   281,   286,   290,
     282,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,   107,    63,  -695,   149,   307,   363,   285,
    -695,   354,   418,   419,   360,   424,   424,   426,   428,   367,
     368,   373,   374,   375,   378,   383,   324,  -695,   322,   721,
    -695,   323,   325,    10,  -695,  -695,  -695,   429,   327,  -695,
    -695,   328,   329,  -695,  -695,    22,  -695,  -695,  -695,   395,
     424,   398,   424,   456,   438,   462,   401,   403,   406,   485,
     463,   427,   490,   491,   492,   431,   424,   434,   439,   500,
     479,   442,   503,   505,   507,   424,   509,   487,   511,   513,
     453,   459,   397,   464,   400,   520,   527,   424,   424,   466,
     529,   512,   468,   470,  -162,  -148,   472,   474,   424,   424,
     537,   424,   476,   477,   482,   483,   425,  -695,  -695,  -695,
     416,   421,  -695,   432,   433,   100,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,   430,   435,   437,   443,   445,  -695,   447,
     448,   450,   452,   455,   457,   469,   471,   478,   481,   486,
     205,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,   493,
    -695,   496,  -695,    26,  -695,  -695,  -695,   465,  -695,   497,
     502,   504,  -695,    23,  -695,  -695,  -695,  -695,  -695,   526,
     528,   530,   531,   533,   536,   541,   544,   394,   555,   558,
     488,   480,  -695,  -695,   561,   565,   494,  -695,   554,   495,
     510,   514,   518,    14,  -695,  -695,  -695,  -695,   539,   542,
     546,   587,   550,   563,   424,   508,  -695,  -695,   605,   569,
     609,   611,   613,   632,   634,   635,   661,   639,   642,   545,
    -695,   547,   543,  -695,   553,    70,  -695,  -695,  -695,  -695,
     549,   556,  -695,    19,  -695,  -695,  -695,   560,   564,   568,
    -695,   571,   575,   576,   577,   251,   579,   580,   582,   583,
     584,   589,   592,   593,   594,   596,   597,  -695,   599,   602,
     603,   606,   607,   610,   612,   616,   617,   619,   621,   624,
     629,   265,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,   614,   630,   637,   640,   647,
     648,   649,   650,   652,   653,  -695,   655,   659,   663,   666,
     667,   668,   670,   672,   261,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,   643,   657,   638,  -695,   645,  -695,
     662,   686,   675,   681,  -695,   682,   684,   685,   687,   688,
     691,   692,   694,   697,   700,   701,   702,   703,   704,   705,
     706,   708,   709,   711,   712,   717,   719,   720,   723,   724,
     728,   729,   730,   734,   741,   743,   744,   745,   864,   746,
     898,   747,   748,   754,   755,   758,   759,   760,   761,   764,
     768,   769,   771,   772,   773,   774,   776,   777,   314,   778,
     780,   783,   784,   785,   786,  -695,   718,   424,   676,   750,
     821,   890,   792,  -695,  -695,   695,   892,   855,   856,   794,
     858,   861,   862,   863,   865,   903,   921,   905,   906,   868,
     908,   815,  -695,   917,   819,   922,   825,  -695,  -695,   823,
     926,   927,   952,   831,  -695,   832,   833,   840,   842,   843,
     849,   852,   857,   860,   866,   867,   874,   876,   877,   879,
     880,   881,   882,  -695,   883,   884,  -695,   885,   853,   886,
     887,   888,  -695,   889,   891,   893,   895,   896,   897,   899,
     900,   901,   902,   904,   907,   909,   910,     5,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,   958,
     960,   961,   911,  -695,   914,   915,   916,   918,   919,   920,
     923,  -695,   924,   925,   928,   929,   930,   931,   932,   933,
     934,   935,   936,  -695,  -695,   962,   937,   963,   938,  -695,
    -695,   964,   939,   941,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,   424,   424,   424,   424,   424,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  1008,   424,  1009,  1010,  1015,  1017,   996,  1023,  1028,
     424,   424,   537,   943,  -695,  -695,  1007,  -150,   969,  1016,
    1020,   982,   986,   987,  1036,   942,  1038,  1043,  1045,  1046,
    1070,  1048,  1049,  1050,   953,  -695,   954,   955,  -695,  -695,
     956,   957,   116,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -245,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -229,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,   537,   537,   537,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,    -7,   959,   965,     1,
     966,   967,  -695,   968,   970,   971,   972,   859,   973,   974,
     975,   976,   977,   978,   979,   980,   981,   983,   984,  -695,
     985,   736,   988,  -695,   -73,   989,   990,   608,  -220,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  1012,  1057,  1021,  1022,   991,  1024,  1029,  1042,
    1047,  1059,  1051,  1062,  1052,  1053,  1055,  1085,  1056,  1096,
    1058,   999,  -695,  1000,  1001,  1002,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  1003,   753,  1004,  -695,  1005,
     803,  -695,  -695,  -695,  -695,  -695,  -695,  1006,  1011,  1013,
    1014,  1018,  1019,  1025,  1026,  1027,  1030,  1031,  1032,  -695,
    1033,  1034,  1035,  1037,  1039,  1040,  1041,  1044,  1054,  1060,
     289,  1061,  1063,  1064,  1065,  1066,  1067,  1068,  1069,  -695,
    -695,  -695,  -695,  -695,  -695,  -213,  -695,  -695,   864,  -695,
     898,  -695,  -695,  -695,  -695,  -695,  -197,  -695,  -695,  -695,
    -695,  -695,  -135,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,   894,  -695,
    -695,  -134,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -126,  -695,  -695,
    -695,  -695,  -103,  -695,  -695,  -695,  1129,  -695,   952,  1071,
    1072,  1073,  1074,   660,  1075,  1076,  1077,  1078,  1079,  1080,
    1081,  1082,  1083,  1084,  1086,  1087,  1088,  1089,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,   -72,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,   -58,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,   347,  -695,
     -34,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,   116,  -695,  -695,  -695,    -7,  -695,     1,  -695,
    -695,   859,  -695,   736,  -695,   -73,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,   693,  -695,  -695,  -695,  -695,  -695,  -695,  -695,   -23,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,   753,  -695,   803,
    -695,  -695,   289,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,   660,  -695,  -695,  -695,  -695
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -695,  -695,  -695,  -361,  -335,  -694,  -418,  -695,  -695,   993,
    -695,  -695,  -695,  -695,   992,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,   795,  -695,
    -695,  -695,  -695,  -695,  1090,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,   467,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -149,  -108,  -695,  -695,  -695,  -695,
     669,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,   -91,
    -695,   782,  -695,  -695,    28,  -695,  -695,  -695,  -695,  -695,
     809,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,   -69,
      53,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,   767,  -695,  -695,  -695,  -695,  -695,
    -695,   737,  -695,  -695,  -695,  -695,  -695,  -119,  -695,  -695,
    -695,   714,  -695,  -695,  -695,  -695,  -116,  -695,  -695,  -695,
    -695,   665,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -106,   -28,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
     -56,  -695,   818,  -695,  -695,  -695,  -695,  -695,   950,  -695,
    -695,  -695,  -695,  1186,  -695,  -695,  -695,  -695,  -695,  -695,
     -37,  -695,   944,  -695,  -695,  -695,  -695,  1126,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,   117,  -695,  -695,  -695,   122,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,   878,  -695,  -695,  -695,  -695,  -695,
     -36,  -695,  -695,  -695,  -695,  -695,   -35,  -695,  -695,  1224,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,  -695,
    -695,  -695,  -695,  -695,  -695,  -695,  -695,  1091,  -695,  -695,
    -695,  -695,  -695,  -695,  -695
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, parse error.  */
#define YYTABLE_NINF -1
static const unsigned short yytable[] =
{
     576,   577,   719,  1240,  1194,    67,   787,    45,    46,  1187,
     788,   350,  1200,  1188,   350,   519,   281,   360,    47,   116,
     560,   116,   519,   360,   487,  1189,    48,   478,   487,  1190,
     789,   270,   710,   711,  1247,   666,   520,   668,  1248,    52,
      68,  1341,   790,   520,    54,  1342,   712,   713,   122,    59,
      69,   682,    60,   791,   282,   123,   124,  1345,   792,   125,
     691,  1346,  1161,  1162,   560,    63,   126,   478,    64,   283,
     793,   551,   703,   704,   127,   109,   488,   794,   128,   129,
     488,   112,   795,   716,   717,   130,   720,   270,   131,   132,
     133,   284,   134,   285,   277,   286,   287,   796,   135,   351,
     115,   428,   351,   121,   429,   239,   489,   117,   551,   117,
     489,   240,   490,   241,   242,   288,   490,   136,   137,  1347,
    1350,   325,   138,  1348,  1351,    70,   797,   280,  1352,   139,
     326,   798,  1353,   140,   141,   142,   323,   361,   143,   521,
     561,   144,   145,   361,   430,   324,   521,   431,   327,   271,
     328,  1354,   146,   147,   799,  1355,   331,  1241,   243,   148,
     149,   332,   150,   151,   152,   153,   800,   352,   801,   802,
     352,   522,   803,   362,   333,   334,   154,   491,   522,   362,
     272,   491,  1396,   479,   561,   155,  1397,   156,   157,  1195,
     158,   552,   159,   160,   161,   162,  1398,  1201,   163,   840,
    1399,   363,   335,   432,   562,   271,   443,   363,   336,   164,
      76,   480,   244,   245,   246,   247,   248,   249,   250,   251,
    1401,   433,    77,   479,  1402,   444,   337,   165,   552,   166,
     445,  1410,   338,   167,   348,  1411,   272,   168,   169,   170,
     171,   339,    78,    79,   172,   173,   804,   805,   562,    80,
     349,   480,   174,   446,   447,   553,   806,   340,   448,   329,
    1111,   252,   615,   341,   616,   656,   588,   617,   481,   832,
     535,   618,   449,   358,   863,    67,  1184,   663,   763,   450,
     518,   756,   175,   298,   176,   619,   620,   621,   589,   342,
     177,   622,   553,   343,   590,   178,   253,   344,   451,  1323,
     179,  1324,   426,   345,   567,    81,    82,   357,   481,   623,
      68,   369,   554,   624,   625,  1325,    83,    84,   299,  1326,
      69,   370,   371,   588,   372,   858,   373,   452,  1025,  1026,
    1027,  1191,  1192,  1193,   374,   453,    85,    86,   375,   376,
     377,   516,   434,   498,   626,   589,   627,   378,   379,   554,
     380,   590,   381,    87,   454,   732,   382,  1323,   383,  1324,
     628,   384,   385,   455,   456,    88,   300,   428,   386,   387,
     429,   388,   254,  1325,   591,   592,   593,  1326,   389,   594,
     390,   391,   629,   575,   392,   393,   595,  1327,   394,   395,
     396,   397,  1037,   457,   458,    70,   398,   399,   400,   596,
     597,   401,   403,   301,   255,   302,   303,   405,   406,   407,
     430,   408,   511,   431,   513,   630,   409,   598,   599,   410,
    1328,   411,   872,   873,   874,   875,   876,   412,   631,   413,
     414,   591,   592,   593,   415,   416,   594,   417,   632,   418,
     419,   600,   281,   595,   420,  1327,   718,   459,   304,   421,
     305,   422,   423,    89,    90,    91,   596,   597,   424,   122,
     751,   425,   568,   306,   346,   499,   123,   124,   500,   432,
     125,   501,   502,   503,   598,   599,   504,   126,   505,   506,
     282,   507,   508,   509,  1158,   127,   510,   433,   514,   128,
     129,   515,   528,   529,   530,   283,   130,   531,   600,   131,
     132,   133,   532,   134,   533,   307,   534,   298,   537,   135,
     633,  1142,  1143,  1144,  1145,  1146,   924,   284,   569,   285,
     903,   286,   287,   538,   539,  1329,   540,   541,   136,   137,
     542,   308,   309,   138,   543,   544,   545,   549,   546,   570,
     139,   288,   299,   547,   140,   141,   142,   548,   571,   143,
     572,   573,   144,   145,   574,   787,   575,  1148,   578,   788,
     579,   580,   581,   146,   147,  1156,  1157,   582,   583,   584,
     148,   149,   585,   150,   151,   152,   153,   586,   587,   789,
     654,   659,   655,  1329,   658,   660,   661,   154,   669,   665,
     300,   790,   667,   670,   671,   672,   155,   673,   156,   157,
     674,   158,   791,   159,   160,   161,   162,   792,   434,   163,
     773,   774,   775,   776,   777,   778,   779,   675,   676,   793,
     164,   677,   678,   679,   680,   681,   794,   301,   683,   302,
     303,   795,   685,   684,   686,   688,   687,   689,   165,   690,
     166,   692,   693,   694,   167,   695,   796,   696,   168,   169,
     170,   171,   701,   697,   698,   172,   173,   700,   699,   702,
     705,   706,   708,   174,   709,  1362,   714,   707,   715,   718,
     721,   722,   304,   727,   305,   797,   723,   724,   728,   725,
     798,   765,   782,   766,   734,   767,   768,   306,   769,   730,
     731,   770,   735,   175,   736,   176,   771,  1363,  1362,   772,
     737,   177,   738,   799,   740,   741,   178,   742,  1364,   743,
     780,   179,   744,   781,   745,   800,   784,   801,   802,   758,
     785,   803,   615,   243,   616,  1365,   746,   617,   747,   307,
    1363,   618,  1366,   834,   783,   748,   835,  1367,   749,  1368,
     836,  1364,   837,   750,   838,   619,   620,   621,   786,   828,
     753,   622,  1369,   755,   760,   308,   309,   839,  1365,   761,
     842,   762,   841,   843,   844,  1366,   845,   829,   846,   623,
    1367,   830,  1368,   624,   625,   831,    76,   244,   245,   246,
     247,   248,   249,   250,   251,  1369,  1370,   847,    77,   848,
     849,  1371,   443,   850,   851,   804,   805,   852,   926,   853,
     855,   854,  1372,   860,   626,   806,   627,  1246,    78,    79,
     857,   444,   927,   861,   865,    80,   445,   930,   866,  1370,
     628,  1373,   867,  1374,  1375,   868,   252,     2,     3,   869,
     870,   871,     4,   879,   880,  1372,   881,   882,   883,   446,
     447,   931,   629,   884,   448,  1273,   885,   886,   887,     5,
     888,   889,     6,   890,  1373,     7,  1374,  1375,   449,   891,
     892,   253,     8,   893,   894,   450,   330,   895,   905,   896,
    1038,    81,    82,   897,   898,   630,   899,     9,   900,  1210,
    1211,   901,    83,    84,   451,  1376,   902,   906,   631,  1043,
      10,    11,   928,    12,   907,  1288,  1236,   908,   632,   929,
      13,  1377,    85,    86,   909,   910,   911,   912,  1212,   913,
     914,  1378,   916,   452,  1210,  1211,   917,    14,  1376,    87,
     918,   453,  1274,   919,   920,   921,  1213,   922,    15,   923,
      16,    88,   932,  1214,  1377,   933,   934,   254,   935,   936,
     454,   937,   938,  1212,  1378,   939,   940,    17,   941,   455,
     456,   942,  1215,  1275,   943,   944,   945,   946,   947,   948,
     949,  1213,   950,   951,    18,   952,   953,  1276,  1214,   255,
     633,   954,  1289,   955,   956,  1036,  1040,   957,   958,   457,
     458,  1216,   959,   960,   961,  1277,  1278,  1215,   962,  1217,
    1218,  1279,  1280,  1281,  1282,   963,    19,   964,   965,   966,
     987,  1008,  1009,  1290,  1283,    20,    21,  1039,  1010,  1011,
      22,    23,  1012,  1013,  1014,  1015,  1216,  1291,  1016,    89,
      90,    91,  1017,  1018,  1217,  1019,  1020,  1021,  1022,  1219,
    1023,  1024,  1030,   459,  1031,  1292,  1293,  1032,  1033,  1034,
    1035,  1294,  1295,  1296,  1297,  1041,  1042,  1044,  1220,  1045,
    1046,  1047,  1048,  1054,  1298,  1049,  1050,  1051,  1053,  1052,
    1055,  1056,  1057,  1058,  1219,   967,   968,   969,   970,  1059,
     971,   972,  1060,   973,   974,   975,  1061,  1062,   976,  1063,
    1064,  1065,  1066,  1220,  1067,  1070,  1071,  1072,   977,   978,
     979,   980,   981,   982,  1073,   983,  1074,  1075,   984,   988,
     989,   990,   991,  1076,   992,   993,  1077,   994,   995,   996,
    1092,  1078,   997,  1113,  1079,  1114,  1115,  1135,  1137,  1139,
    1080,  1081,   998,   999,  1000,  1001,  1002,  1003,  1082,  1004,
    1083,  1084,  1005,  1085,  1086,  1087,  1088,  1089,  1090,  1091,
    1147,  1149,  1150,  1093,  1094,  1095,  1097,  1151,  1098,  1152,
    1099,  1153,  1100,  1101,  1102,  1154,  1103,  1104,  1105,  1106,
    1155,  1107,  1160,  1163,  1108,  1116,  1109,  1110,  1117,  1118,
    1119,  1164,  1120,  1121,  1122,  1165,  1166,  1123,  1124,  1125,
    1167,  1168,  1126,  1127,  1128,  1129,  1130,  1131,  1132,  1133,
    1134,  1169,  1138,  1171,  1136,  1141,  1140,  1159,  1172,  1170,
    1173,  1174,  1175,  1176,  1177,  1178,  1249,  1179,  1180,  1181,
    1182,  1183,  1250,  1198,  1258,  1251,  1252,  1260,  1254,  1199,
    1204,  1205,  1206,  1255,  1207,  1208,  1209,  1224,  1225,  1226,
    1227,  1228,  1229,  1230,  1231,  1232,  1256,  1233,  1234,  1235,
    1264,  1257,  1239,  1244,  1245,  1259,  1261,  1262,  1253,  1263,
    1265,  1266,  1267,  1268,  1269,  1270,  1271,  1272,  1286,  1287,
    1301,  1356,  1415,  1409,  1408,  1302,   517,  1303,  1304,   752,
     904,  1349,  1305,  1306,  1112,   764,  1357,   864,  1412,  1307,
    1308,  1309,  1406,  1413,  1310,  1311,  1312,  1313,  1314,  1315,
     833,  1316,   859,  1317,  1318,  1319,  1414,  1407,  1320,   925,
    1400,   757,   550,   657,   359,  1403,   427,  1344,  1321,   664,
    1343,  1404,  1405,   733,  1322,  1333,   347,  1334,  1335,  1336,
    1337,  1338,  1339,  1340,     0,  1358,  1359,  1360,  1361,  1382,
    1383,  1384,  1385,  1386,  1387,  1388,  1389,  1390,  1391,     0,
    1392,  1393,  1394,  1395,     0,     0,   512,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     536
};

static const short yycheck[] =
{
     335,   336,   420,    76,    11,     1,     1,   254,   255,   254,
       5,     1,    11,   258,     1,     1,     1,     1,   256,     1,
       1,     1,     1,     1,     1,   254,   256,     1,     1,   258,
      25,     1,   194,   195,   254,   370,    22,   372,   258,   256,
      36,   254,    37,    22,   256,   258,   194,   195,     1,   256,
      46,   386,   256,    48,    39,     8,     9,   254,    53,    12,
     395,   258,   212,   213,     1,   256,    19,     1,   256,    54,
      65,     1,   407,   408,    27,   155,    53,    72,    31,    32,
      53,   155,    77,   418,   419,    38,   421,     1,    41,    42,
      43,    76,    45,    78,   155,    80,    81,    92,    51,    89,
     256,     1,    89,   256,     4,   256,    83,    89,     1,    89,
      83,   256,    89,   256,   256,   100,    89,    70,    71,   254,
     254,   254,    75,   258,   258,   121,   121,   256,   254,    82,
     257,   126,   258,    86,    87,    88,   256,   121,    91,   125,
     121,    94,    95,   121,    44,   256,   125,    47,   257,   119,
     257,   254,   105,   106,   149,   258,   257,   230,     1,   112,
     113,   257,   115,   116,   117,   118,   161,   157,   163,   164,
     157,   157,   167,   157,   257,   257,   129,   154,   157,   157,
     150,   154,   254,   157,   121,   138,   258,   140,   141,   196,
     143,   121,   145,   146,   147,   148,   254,   196,   151,   534,
     258,   185,   257,   103,   185,   119,     1,   185,   257,   162,
       1,   185,    55,    56,    57,    58,    59,    60,    61,    62,
     254,   121,    13,   157,   258,    20,   257,   180,   121,   182,
      25,   254,   257,   186,   256,   258,   150,   190,   191,   192,
     193,   257,    33,    34,   197,   198,   241,   242,   185,    40,
     256,   185,   205,    48,    49,   185,   251,   257,    53,   255,
     255,   104,     1,   257,     3,   255,     1,     6,   242,   255,
     255,    10,    67,   255,   255,     1,   160,   255,   255,    74,
     256,   255,   235,     1,   237,    24,    25,    26,    23,   257,
     243,    30,   185,   257,    29,   248,   139,   257,    93,    10,
     253,    12,   255,   257,   155,    96,    97,   257,   242,    48,
      36,   257,   242,    52,    53,    26,   107,   108,    36,    30,
      46,   257,   257,     1,   257,   255,   257,   122,    14,    15,
      16,  1025,  1026,  1027,   257,   130,   127,   128,   257,   257,
     257,   255,   242,   254,    83,    23,    85,   257,   257,   242,
     257,    29,   257,   144,   149,   255,   257,    10,   257,    12,
      99,   257,   257,   158,   159,   156,    84,     1,   257,   257,
       4,   257,   215,    26,   109,   110,   111,    30,   257,   114,
     257,   257,   121,   132,   257,   257,   121,    98,   257,   257,
     257,   257,   727,   188,   189,   121,   257,   257,   257,   134,
     135,   257,   257,   121,   247,   123,   124,   257,   257,   257,
      44,   257,   255,    47,   254,   154,   257,   152,   153,   257,
     131,   257,   171,   172,   173,   174,   175,   257,   167,   257,
     257,   109,   110,   111,   257,   257,   114,   257,   177,   257,
     257,   176,     1,   121,   257,    98,   132,   242,   166,   257,
     168,   257,   257,   244,   245,   246,   134,   135,   257,     1,
     255,   257,   155,   181,   255,   257,     8,     9,   257,   103,
      12,   257,   257,   257,   152,   153,   257,    19,   257,   257,
      39,   257,   257,   257,   902,    27,   257,   121,   257,    31,
      32,   257,   257,   257,   257,    54,    38,   257,   176,    41,
      42,    43,   257,    45,   257,   223,   257,     1,   254,    51,
     249,   872,   873,   874,   875,   876,   255,    76,   155,    78,
     255,    80,    81,   257,   257,   236,   257,   257,    70,    71,
     257,   249,   250,    75,   257,   257,   257,   255,   257,   254,
      82,   100,    36,   257,    86,    87,    88,   257,   194,    91,
     132,   132,    94,    95,   194,     1,   132,   892,   132,     5,
     132,   194,   194,   105,   106,   900,   901,   194,   194,   194,
     112,   113,   194,   115,   116,   117,   118,   194,   254,    25,
     257,   254,   257,   236,   155,   257,   257,   129,   132,   194,
      84,    37,   194,   155,   132,   194,   138,   194,   140,   141,
     194,   143,    48,   145,   146,   147,   148,    53,   242,   151,
     216,   217,   218,   219,   220,   221,   222,   132,   155,    65,
     162,   194,   132,   132,   132,   194,    72,   121,   194,   123,
     124,    77,   132,   194,   155,   132,   194,   132,   180,   132,
     182,   132,   155,   132,   186,   132,    92,   194,   190,   191,
     192,   193,   132,   194,   257,   197,   198,   257,   194,   132,
     194,   132,   194,   205,   194,     5,   194,   155,   194,   132,
     194,   194,   166,   257,   168,   121,   194,   194,   257,   254,
     126,   155,   194,   155,   254,   155,   155,   181,   155,   257,
     257,   155,   257,   235,   257,   237,   155,    37,     5,   155,
     257,   243,   257,   149,   257,   257,   248,   257,    48,   257,
     155,   253,   257,   155,   257,   161,   155,   163,   164,   254,
     155,   167,     1,     1,     3,    65,   257,     6,   257,   223,
      37,    10,    72,   194,   254,   257,   194,    77,   257,    79,
     194,    48,   155,   257,   194,    24,    25,    26,   254,   254,
     257,    30,    92,   257,   257,   249,   250,   194,    65,   257,
     155,   257,   254,   194,   155,    72,   155,   257,   155,    48,
      77,   257,    79,    52,    53,   257,     1,    55,    56,    57,
      58,    59,    60,    61,    62,    92,   126,   155,    13,   155,
     155,   131,     1,   132,   155,   241,   242,   155,   155,   254,
     257,   254,   142,   254,    83,   251,    85,   199,    33,    34,
     257,    20,   155,   257,   254,    40,    25,   155,   254,   126,
      99,   161,   254,   163,   164,   254,   104,     0,     1,   254,
     254,   254,     5,   254,   254,   142,   254,   254,   254,    48,
      49,   155,   121,   254,    53,    92,   254,   254,   254,    22,
     254,   254,    25,   254,   161,    28,   163,   164,    67,   257,
     257,   139,    35,   257,   257,    74,    71,   257,   254,   257,
     194,    96,    97,   257,   257,   154,   257,    50,   257,    20,
      21,   257,   107,   108,    93,   225,   257,   257,   167,   194,
      63,    64,   254,    66,   257,    92,   160,   257,   177,   254,
      73,   241,   127,   128,   257,   257,   257,   257,    49,   257,
     257,   251,   257,   122,    20,    21,   257,    90,   225,   144,
     257,   130,   169,   257,   257,   257,    67,   257,   101,   257,
     103,   156,   257,    74,   241,   254,   254,   215,   254,   254,
     149,   254,   254,    49,   251,   254,   254,   120,   254,   158,
     159,   254,    93,   200,   254,   254,   254,   254,   254,   254,
     254,    67,   254,   254,   137,   254,   254,   214,    74,   247,
     249,   254,   169,   254,   254,   257,   155,   254,   254,   188,
     189,   122,   254,   254,   254,   232,   233,    93,   254,   130,
     131,   238,   239,   240,   241,   254,   169,   254,   254,   254,
     254,   254,   254,   200,   251,   178,   179,   257,   254,   254,
     183,   184,   254,   254,   254,   254,   122,   214,   254,   244,
     245,   246,   254,   254,   130,   254,   254,   254,   254,   170,
     254,   254,   254,   242,   254,   232,   233,   254,   254,   254,
     254,   238,   239,   240,   241,   155,   254,   155,   189,   194,
     194,   257,   194,   132,   251,   194,   194,   194,   155,   194,
     155,   155,   194,   155,   170,   201,   202,   203,   204,   254,
     206,   207,   155,   209,   210,   211,   257,   155,   214,   254,
     257,   155,   155,   189,   132,   254,   254,   254,   224,   225,
     226,   227,   228,   229,   254,   231,   254,   254,   234,   201,
     202,   203,   204,   254,   206,   207,   254,   209,   210,   211,
     257,   254,   214,   155,   254,   155,   155,   155,   155,   155,
     254,   254,   224,   225,   226,   227,   228,   229,   254,   231,
     254,   254,   234,   254,   254,   254,   254,   254,   254,   254,
     132,   132,   132,   257,   257,   257,   257,   132,   257,   132,
     257,   155,   257,   257,   257,   132,   257,   257,   257,   257,
     132,   257,   155,   194,   257,   254,   257,   257,   254,   254,
     254,   155,   254,   254,   254,   155,   194,   254,   254,   254,
     194,   194,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   155,   254,   155,   257,   254,   257,   254,   155,   257,
     155,   155,   132,   155,   155,   155,   194,   254,   254,   254,
     254,   254,   155,   254,   155,   194,   194,   155,   194,   254,
     254,   254,   254,   194,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   194,   254,   254,   254,
     155,   194,   254,   254,   254,   194,   194,   194,   257,   194,
     194,   155,   194,   254,   254,   254,   254,   254,   254,   254,
     254,   132,  1411,  1371,  1355,   254,   273,   254,   254,   460,
     601,  1218,   254,   254,   807,   493,  1248,   563,  1397,   254,
     254,   254,  1351,  1399,   254,   254,   254,   254,   254,   254,
     523,   254,   555,   254,   254,   254,  1402,  1353,   254,   634,
    1328,   483,   310,   353,   118,  1342,   180,  1190,   254,   365,
    1188,  1346,  1348,   435,   254,   254,    92,   254,   254,   254,
     254,   254,   254,   254,    -1,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,    -1,
     254,   254,   254,   254,    -1,    -1,   256,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     289
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,   260,     0,     1,     5,    22,    25,    28,    35,    50,
      63,    64,    66,    73,    90,   101,   103,   120,   137,   169,
     178,   179,   183,   184,   261,   266,   271,   285,   291,   306,
     335,   353,   366,   390,   397,   407,   416,   444,   454,   460,
     464,   474,   540,   556,   574,   254,   255,   256,   256,   336,
     417,   455,   256,   465,   256,   541,   367,   445,   354,   256,
     256,   307,   391,   256,   256,   398,   408,     1,    36,    46,
     121,   286,   287,   288,   289,   290,     1,    13,    33,    34,
      40,    96,    97,   107,   108,   127,   128,   144,   156,   244,
     245,   246,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   155,
     337,   341,   155,   418,   422,   256,     1,    89,   461,   462,
     463,   256,     1,     8,     9,    12,    19,    27,    31,    32,
      38,    41,    42,    43,    45,    51,    70,    71,    75,    82,
      86,    87,    88,    91,    94,    95,   105,   106,   112,   113,
     115,   116,   117,   118,   129,   138,   140,   141,   143,   145,
     146,   147,   148,   151,   162,   180,   182,   186,   190,   191,
     192,   193,   197,   198,   205,   235,   237,   243,   248,   253,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   531,   535,   536,   537,   538,   539,   256,
     256,   256,   256,     1,    55,    56,    57,    58,    59,    60,
      61,    62,   104,   139,   215,   247,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
       1,   119,   150,   267,   268,   269,   270,   155,   308,   312,
     256,     1,    39,    54,    76,    78,    80,    81,   100,   575,
     576,   577,   578,   579,   580,   581,   582,   583,     1,    36,
      84,   121,   123,   124,   166,   168,   181,   223,   249,   250,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   256,   256,   254,   257,   257,   257,   255,
     287,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   255,   558,   256,   256,
       1,    89,   157,   456,   457,   458,   459,   257,   255,   462,
       1,   121,   157,   185,   466,   470,   471,   472,   473,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   532,   257,   528,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   255,   476,     1,     4,
      44,    47,   103,   121,   242,   542,   543,   544,   545,   546,
     550,   551,   552,     1,    20,    25,    48,    49,    53,    67,
      74,    93,   122,   130,   149,   158,   159,   188,   189,   242,
     368,   369,   370,   371,   372,   373,   374,   375,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,     1,   157,
     185,   242,   446,   450,   451,   452,   453,     1,    53,    83,
      89,   154,   355,   359,   360,   361,   364,   365,   254,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   255,   293,   254,   257,   257,   255,   268,   256,     1,
      22,   125,   157,   392,   393,   394,   395,   396,   257,   257,
     257,   257,   257,   257,   257,   255,   576,   254,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   255,
     273,     1,   121,   185,   242,   399,   400,   401,   402,   403,
       1,   121,   185,   409,   410,   411,   412,   155,   155,   155,
     254,   194,   132,   132,   194,   132,   263,   263,   132,   132,
     194,   194,   194,   194,   194,   194,   194,   254,     1,    23,
      29,   109,   110,   111,   114,   121,   134,   135,   152,   153,
     176,   338,   339,   340,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,     1,     3,     6,    10,    24,
      25,    26,    30,    48,    52,    53,    83,    85,    99,   121,
     154,   167,   177,   249,   419,   420,   421,   423,   424,   425,
     426,   427,   428,   429,   430,   435,   436,   437,   438,   439,
     440,   441,   442,   443,   257,   257,   255,   457,   155,   254,
     257,   257,   467,   255,   471,   194,   263,   194,   263,   132,
     155,   132,   194,   194,   194,   132,   155,   194,   132,   132,
     132,   194,   263,   194,   194,   132,   155,   194,   132,   132,
     132,   263,   132,   155,   132,   132,   194,   194,   257,   194,
     257,   132,   132,   263,   263,   194,   132,   155,   194,   194,
     194,   195,   194,   195,   194,   194,   263,   263,   132,   265,
     263,   194,   194,   194,   194,   254,   553,   257,   257,   547,
     257,   257,   255,   543,   254,   257,   257,   257,   257,   376,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   255,   369,   257,   447,   257,   255,   451,   254,   356,
     257,   257,   257,   255,   360,   155,   155,   155,   155,   155,
     155,   155,   155,   216,   217,   218,   219,   220,   221,   222,
     155,   155,   194,   254,   155,   155,   254,     1,     5,    25,
      37,    48,    53,    65,    72,    77,    92,   121,   126,   149,
     161,   163,   164,   167,   241,   242,   251,   309,   310,   311,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   254,   257,
     257,   257,   255,   393,   194,   194,   194,   155,   194,   194,
     263,   254,   155,   194,   155,   155,   155,   155,   155,   155,
     132,   155,   155,   254,   254,   257,   404,   257,   255,   400,
     254,   257,   413,   255,   410,   254,   254,   254,   254,   254,
     254,   254,   171,   172,   173,   174,   175,   262,   263,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   255,   339,   254,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   431,   257,   257,   257,   257,
     257,   257,   257,   257,   255,   420,   155,   155,   254,   254,
     155,   155,   257,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   201,   202,   203,
     204,   206,   207,   209,   210,   211,   214,   224,   225,   226,
     227,   228,   229,   231,   234,   533,   534,   254,   201,   202,
     203,   204,   206,   207,   209,   210,   211,   214,   224,   225,
     226,   227,   228,   229,   231,   234,   529,   530,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,    14,    15,    16,   264,   265,
     254,   254,   254,   254,   254,   254,   257,   263,   194,   257,
     155,   155,   254,   194,   155,   194,   194,   257,   194,   194,
     194,   194,   194,   155,   132,   155,   155,   194,   155,   254,
     155,   257,   155,   254,   257,   155,   155,   132,   362,   363,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   257,   257,   257,   257,   331,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   255,   310,   155,   155,   155,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   155,   257,   155,   254,   155,
     257,   254,   262,   262,   262,   262,   262,   132,   263,   132,
     132,   132,   132,   155,   132,   132,   263,   263,   265,   254,
     155,   212,   213,   194,   155,   155,   194,   194,   194,   155,
     257,   155,   155,   155,   155,   132,   155,   155,   155,   254,
     254,   254,   254,   254,   160,   468,   469,   254,   258,   254,
     258,   264,   264,   264,    11,   196,   554,   555,   254,   254,
      11,   196,   548,   549,   254,   254,   254,   254,   254,   254,
      20,    21,    49,    67,    74,    93,   122,   130,   131,   170,
     189,   377,   378,   379,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   160,   448,   449,   254,
      76,   230,   357,   358,   254,   254,   199,   254,   258,   194,
     155,   194,   194,   257,   194,   194,   194,   194,   155,   194,
     155,   194,   194,   194,   155,   194,   155,   194,   254,   254,
     254,   254,   254,    92,   169,   200,   214,   232,   233,   238,
     239,   240,   241,   251,   405,   406,   254,   254,    92,   169,
     200,   214,   232,   233,   238,   239,   240,   241,   251,   414,
     415,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,    10,    12,    26,    30,    98,   131,   236,
     432,   433,   434,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   258,   534,   530,   254,   258,   254,   258,   379,
     254,   258,   254,   258,   254,   258,   132,   363,   254,   254,
     254,   254,     5,    37,    48,    65,    72,    77,    79,    92,
     126,   131,   142,   161,   163,   164,   225,   241,   251,   332,
     333,   334,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   258,   254,   258,
     434,   254,   258,   469,   555,   549,   378,   449,   358,   334,
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
#line 419 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 28:
#line 421 "ircd_parser.y"
    {
			yyval.number = yyvsp[-1].number + yyvsp[0].number;
		}
    break;

  case 29:
#line 425 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number + yyvsp[0].number;
		}
    break;

  case 30:
#line 429 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 + yyvsp[0].number;
		}
    break;

  case 31:
#line 433 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 + yyvsp[0].number;
		}
    break;

  case 32:
#line 437 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 + yyvsp[0].number;
		}
    break;

  case 33:
#line 441 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 * 7 + yyvsp[0].number;
		}
    break;

  case 34:
#line 446 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 36:
#line 447 "ircd_parser.y"
    { yyval.number = yyvsp[-1].number + yyvsp[0].number; }
    break;

  case 37:
#line 448 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number + yyvsp[0].number; }
    break;

  case 38:
#line 449 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 + yyvsp[0].number; }
    break;

  case 39:
#line 450 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 * 1024 + yyvsp[0].number; }
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
  }
  else
  {
    MyFree(class_name);
    class_name = NULL;
  }
}
    break;

  case 119:
#line 953 "ircd_parser.y"
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
#line 1044 "ircd_parser.y"
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
#line 1056 "ircd_parser.y"
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
#line 1068 "ircd_parser.y"
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
#line 1087 "ircd_parser.y"
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
#line 1099 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    SetConfEncrypted(yy_aconf);
  }
  else
  {
    if (yylval.number)
      SetConfEncrypted(yy_aconf);
    else
      ClearConfEncrypted(yy_aconf);
  }
}
    break;

  case 149:
#line 1114 "ircd_parser.y"
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
#line 1125 "ircd_parser.y"
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
#line 1167 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 152:
#line 1176 "ircd_parser.y"
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
#line 1187 "ircd_parser.y"
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
#line 1198 "ircd_parser.y"
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
#line 1209 "ircd_parser.y"
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
#line 1220 "ircd_parser.y"
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
#line 1231 "ircd_parser.y"
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
#line 1242 "ircd_parser.y"
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
#line 1253 "ircd_parser.y"
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
#line 1264 "ircd_parser.y"
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
#line 1275 "ircd_parser.y"
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
#line 1286 "ircd_parser.y"
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
#line 1297 "ircd_parser.y"
    {
}
    break;

  case 167:
#line 1301 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 168:
#line 1302 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 169:
#line 1305 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 170:
#line 1312 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 171:
#line 1319 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 172:
#line 1326 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 173:
#line 1333 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 174:
#line 1340 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 175:
#line 1347 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 176:
#line 1354 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 177:
#line 1361 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 178:
#line 1368 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 179:
#line 1375 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 180:
#line 1382 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 181:
#line 1389 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 182:
#line 1396 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 183:
#line 1403 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 184:
#line 1410 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) ClearConfEncrypted(yy_aconf);
    else SetConfEncrypted(yy_aconf);
  }
}
    break;

  case 185:
#line 1423 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = (struct ClassItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 186:
#line 1430 "ircd_parser.y"
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
#line 1460 "ircd_parser.y"
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
#line 1507 "ircd_parser.y"
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
#line 1554 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 207:
#line 1560 "ircd_parser.y"
    {
  if (ypass == 1)
    PingWarning(yy_class) = yyvsp[-1].number;
}
    break;

  case 208:
#line 1566 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = yyvsp[-1].number;
}
    break;

  case 209:
#line 1572 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 210:
#line 1578 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = yyvsp[-1].number;
}
    break;

  case 211:
#line 1584 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = yyvsp[-1].number;
}
    break;

  case 212:
#line 1590 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = yyvsp[-1].number;
}
    break;

  case 213:
#line 1596 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = yyvsp[-1].number;
}
    break;

  case 214:
#line 1602 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = yyvsp[-1].number;
}
    break;

  case 215:
#line 1608 "ircd_parser.y"
    {
  if (ypass == 2)
    CidrBitlen(yy_class) = yyvsp[-1].number;
}
    break;

  case 216:
#line 1614 "ircd_parser.y"
    {
  if (ypass == 2)
    NumberPerCidr(yy_class) = yyvsp[-1].number;
}
    break;

  case 217:
#line 1623 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    listener_address = NULL;
    listener_flags = 0;
  }
}
    break;

  case 218:
#line 1630 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 219:
#line 1639 "ircd_parser.y"
    {
}
    break;

  case 223:
#line 1644 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_SSL;
}
    break;

  case 224:
#line 1648 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_HIDDEN;
}
    break;

  case 235:
#line 1661 "ircd_parser.y"
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
    add_listener(yyvsp[0].number, listener_address, listener_flags);
    listener_flags = 0;
  }
}
    break;

  case 236:
#line 1676 "ircd_parser.y"
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

    for (i = yyvsp[-2].number; i <= yyvsp[0].number; ++i)
      add_listener(i, listener_address, listener_flags);

    listener_flags = 0;
  }
}
    break;

  case 237:
#line 1698 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 238:
#line 1707 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 239:
#line 1719 "ircd_parser.y"
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
#line 1731 "ircd_parser.y"
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
#line 1796 "ircd_parser.y"
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
#line 1815 "ircd_parser.y"
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
#line 1828 "ircd_parser.y"
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
#line 1839 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 264:
#line 1848 "ircd_parser.y"
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
#line 1859 "ircd_parser.y"
    {
}
    break;

  case 269:
#line 1863 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 270:
#line 1864 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 271:
#line 1867 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 272:
#line 1875 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 273:
#line 1882 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 274:
#line 1889 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 275:
#line 1896 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 276:
#line 1903 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 277:
#line 1910 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 278:
#line 1917 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 279:
#line 1924 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 280:
#line 1931 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 281:
#line 1940 "ircd_parser.y"
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
#line 1951 "ircd_parser.y"
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
#line 1962 "ircd_parser.y"
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
#line 1973 "ircd_parser.y"
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
#line 1984 "ircd_parser.y"
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
#line 1995 "ircd_parser.y"
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
#line 2007 "ircd_parser.y"
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
#line 2026 "ircd_parser.y"
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
#line 2036 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = yyvsp[-1].number;
  }
}
    break;

  case 290:
#line 2045 "ircd_parser.y"
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
#line 2060 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 292:
#line 2067 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 299:
#line 2079 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 300:
#line 2088 "ircd_parser.y"
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
#line 2103 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char def_reason[] = "No reason";

    create_nick_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
  }
}
    break;

  case 302:
#line 2116 "ircd_parser.y"
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
#line 2124 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 310:
#line 2135 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 311:
#line 2144 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    split_nuh(yylval.string, NULL, &yy_match_item->user, &yy_match_item->host);
  }
}
    break;

  case 312:
#line 2152 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 316:
#line 2159 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 317:
#line 2163 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TKLINE;
}
    break;

  case 318:
#line 2167 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 319:
#line 2171 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 320:
#line 2175 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TXLINE;
}
    break;

  case 321:
#line 2179 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 322:
#line 2183 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 323:
#line 2187 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TRESV;
}
    break;

  case 324:
#line 2191 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 325:
#line 2195 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_LOCOPS;
}
    break;

  case 326:
#line 2199 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 327:
#line 2208 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_conf->flags = SHARED_ALL;
  }
}
    break;

  case 328:
#line 2215 "ircd_parser.y"
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
#line 2228 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 335:
#line 2234 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = 0;
}
    break;

  case 339:
#line 2241 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_KLINE;
}
    break;

  case 340:
#line 2245 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TKLINE;
}
    break;

  case 341:
#line 2249 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNKLINE;
}
    break;

  case 342:
#line 2253 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_XLINE;
}
    break;

  case 343:
#line 2257 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TXLINE;
}
    break;

  case 344:
#line 2261 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNXLINE;
}
    break;

  case 345:
#line 2265 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_RESV;
}
    break;

  case 346:
#line 2269 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TRESV;
}
    break;

  case 347:
#line 2273 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNRESV;
}
    break;

  case 348:
#line 2277 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_LOCOPS;
}
    break;

  case 349:
#line 2281 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = SHARED_ALL;
}
    break;

  case 350:
#line 2290 "ircd_parser.y"
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
#line 2308 "ircd_parser.y"
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
#line 2451 "ircd_parser.y"
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
#line 2463 "ircd_parser.y"
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
#line 2475 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 378:
#line 2484 "ircd_parser.y"
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
#line 2510 "ircd_parser.y"
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
#line 2522 "ircd_parser.y"
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
#line 2534 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = yyvsp[-1].number;
}
    break;

  case 382:
#line 2540 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 383:
#line 2544 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 384:
#line 2552 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 385:
#line 2561 "ircd_parser.y"
    {
}
    break;

  case 389:
#line 2565 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 390:
#line 2566 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 391:
#line 2569 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfLazyLink(yy_aconf);
    else SetConfLazyLink(yy_aconf);
  }
}
    break;

  case 392:
#line 2576 "ircd_parser.y"
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
#line 2587 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfCryptLink(yy_aconf);
    else SetConfCryptLink(yy_aconf);
  }
}
    break;

  case 394:
#line 2594 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAllowAutoConn(yy_aconf);
    else SetConfAllowAutoConn(yy_aconf);
  }
}
    break;

  case 395:
#line 2601 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAwayBurst(yy_aconf);
    else SetConfAwayBurst(yy_aconf);
  }
}
    break;

  case 396:
#line 2608 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfTopicBurst(yy_aconf);
    else SetConfTopicBurst(yy_aconf);
  }
}
    break;

  case 397:
#line 2618 "ircd_parser.y"
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
#line 2659 "ircd_parser.y"
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
#line 2670 "ircd_parser.y"
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
#line 2681 "ircd_parser.y"
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
#line 2696 "ircd_parser.y"
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
#line 2707 "ircd_parser.y"
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
#line 2720 "ircd_parser.y"
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
#line 2733 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 405:
#line 2742 "ircd_parser.y"
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
#line 2777 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    userbuf[0] = hostbuf[0] = reasonbuf[0] = '\0';
    regex_ban = 0;
  }
}
    break;

  case 407:
#line 2784 "ircd_parser.y"
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
#line 2838 "ircd_parser.y"
    {
}
    break;

  case 412:
#line 2843 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 419:
#line 2852 "ircd_parser.y"
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
#line 2868 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 421:
#line 2877 "ircd_parser.y"
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
#line 2886 "ircd_parser.y"
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
#line 2902 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 429:
#line 2911 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 435:
#line 2928 "ircd_parser.y"
    {
  if (ypass == 2)
    if (yylval.string[0] && parse_netmask(yylval.string, NULL, NULL) != HM_HOST)
    {
      yy_conf = make_conf_item(EXEMPTDLINE_TYPE);
      yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
      yy_aconf->host = yylval.string;

      add_conf_by_address(CONF_EXEMPTDLINE, yy_aconf);

      yy_conf = NULL;
      yy_aconf = NULL;
    }
}
    break;

  case 436:
#line 2947 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    regex_ban = 0;
    reasonbuf[0] = gecos_name[0] = '\0';
  }
}
    break;

  case 437:
#line 2954 "ircd_parser.y"
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
#line 2988 "ircd_parser.y"
    {
}
    break;

  case 442:
#line 2993 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 449:
#line 3002 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(gecos_name, yylval.string, sizeof(gecos_name));
}
    break;

  case 450:
#line 3008 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 512:
#line 3055 "ircd_parser.y"
    {
  ConfigFileEntry.gline_min_cidr = yyvsp[-1].number;
}
    break;

  case 513:
#line 3060 "ircd_parser.y"
    {
  ConfigFileEntry.gline_min_cidr6 = yyvsp[-1].number;
}
    break;

  case 514:
#line 3065 "ircd_parser.y"
    {
  ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 515:
#line 3070 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
}
    break;

  case 516:
#line 3075 "ircd_parser.y"
    {
  GlobalSetOptions.rejecttime = yylval.number;
}
    break;

  case 517:
#line 3080 "ircd_parser.y"
    {
  GlobalSetOptions.joinfloodcount = yylval.number;
}
    break;

  case 518:
#line 3085 "ircd_parser.y"
    {
  GlobalSetOptions.joinfloodtime = yylval.number;
}
    break;

  case 519:
#line 3090 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 520:
#line 3095 "ircd_parser.y"
    {
  ConfigFileEntry.kill_chase_time_limit = yyvsp[-1].number;
}
    break;

  case 521:
#line 3100 "ircd_parser.y"
    {
  ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 522:
#line 3105 "ircd_parser.y"
    {
  ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 523:
#line 3110 "ircd_parser.y"
    {
  ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 524:
#line 3115 "ircd_parser.y"
    {
  ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 525:
#line 3120 "ircd_parser.y"
    {
  ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 526:
#line 3125 "ircd_parser.y"
    {
  ConfigFileEntry.max_nick_time = yyvsp[-1].number; 
}
    break;

  case 527:
#line 3130 "ircd_parser.y"
    {
  ConfigFileEntry.max_nick_changes = yyvsp[-1].number;
}
    break;

  case 528:
#line 3135 "ircd_parser.y"
    {
  ConfigFileEntry.max_accept = yyvsp[-1].number;
}
    break;

  case 529:
#line 3140 "ircd_parser.y"
    {
  ConfigFileEntry.anti_spam_exit_message_time = yyvsp[-1].number;
}
    break;

  case 530:
#line 3145 "ircd_parser.y"
    {
  ConfigFileEntry.ts_warn_delta = yyvsp[-1].number;
}
    break;

  case 531:
#line 3150 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = yyvsp[-1].number;
}
    break;

  case 532:
#line 3156 "ircd_parser.y"
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

  case 533:
#line 3167 "ircd_parser.y"
    {
  ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 534:
#line 3172 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 535:
#line 3181 "ircd_parser.y"
    {
  ConfigFileEntry.invisible_on_connect = yylval.number;
}
    break;

  case 536:
#line 3186 "ircd_parser.y"
    {
  ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 537:
#line 3191 "ircd_parser.y"
    {
  ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 538:
#line 3196 "ircd_parser.y"
    {
  ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 539:
#line 3201 "ircd_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 540:
#line 3204 "ircd_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 541:
#line 3209 "ircd_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 542:
#line 3212 "ircd_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 543:
#line 3217 "ircd_parser.y"
    {
  ConfigFileEntry.pace_wait = yyvsp[-1].number;
}
    break;

  case 544:
#line 3222 "ircd_parser.y"
    {
  ConfigFileEntry.caller_id_wait = yyvsp[-1].number;
}
    break;

  case 545:
#line 3227 "ircd_parser.y"
    {
  ConfigFileEntry.opers_bypass_callerid = yylval.number;
}
    break;

  case 546:
#line 3232 "ircd_parser.y"
    {
  ConfigFileEntry.pace_wait_simple = yyvsp[-1].number;
}
    break;

  case 547:
#line 3237 "ircd_parser.y"
    {
  ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 548:
#line 3242 "ircd_parser.y"
    {
  ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 549:
#line 3247 "ircd_parser.y"
    {
  ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 550:
#line 3252 "ircd_parser.y"
    {
  ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 551:
#line 3257 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
}
    break;

  case 552:
#line 3268 "ircd_parser.y"
    {
  ConfigFileEntry.idletime = yyvsp[-1].number;
}
    break;

  case 553:
#line 3273 "ircd_parser.y"
    {
  ConfigFileEntry.dots_in_ident = yyvsp[-1].number;
}
    break;

  case 554:
#line 3278 "ircd_parser.y"
    {
  ConfigFileEntry.maximum_links = yyvsp[-1].number;
}
    break;

  case 555:
#line 3283 "ircd_parser.y"
    {
  ConfigFileEntry.max_targets = yyvsp[-1].number;
}
    break;

  case 556:
#line 3288 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 557:
#line 3297 "ircd_parser.y"
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

  case 558:
#line 3329 "ircd_parser.y"
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

  case 559:
#line 3347 "ircd_parser.y"
    {
  ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 560:
#line 3352 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 561:
#line 3361 "ircd_parser.y"
    {
  ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 562:
#line 3366 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 563:
#line 3371 "ircd_parser.y"
    {
  ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 564:
#line 3376 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 568:
#line 3382 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 569:
#line 3385 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 570:
#line 3388 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEAF;
}
    break;

  case 571:
#line 3391 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 572:
#line 3394 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 573:
#line 3397 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 574:
#line 3400 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 575:
#line 3403 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 576:
#line 3406 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 577:
#line 3409 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 578:
#line 3412 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 579:
#line 3415 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 580:
#line 3418 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 581:
#line 3421 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 582:
#line 3424 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 583:
#line 3427 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 584:
#line 3430 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 585:
#line 3433 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 586:
#line 3438 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 590:
#line 3444 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 591:
#line 3447 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 592:
#line 3450 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEAF;
}
    break;

  case 593:
#line 3453 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 594:
#line 3456 "ircd_parser.y"
    { 
  ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 595:
#line 3459 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 596:
#line 3462 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 597:
#line 3465 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 598:
#line 3468 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 599:
#line 3471 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 600:
#line 3474 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 601:
#line 3477 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 602:
#line 3480 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 603:
#line 3483 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 604:
#line 3486 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 605:
#line 3489 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 606:
#line 3492 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 607:
#line 3495 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 608:
#line 3500 "ircd_parser.y"
    {
  ConfigFileEntry.min_nonwildcard = yyvsp[-1].number;
}
    break;

  case 609:
#line 3505 "ircd_parser.y"
    {
  ConfigFileEntry.min_nonwildcard_simple = yyvsp[-1].number;
}
    break;

  case 610:
#line 3510 "ircd_parser.y"
    {
  ConfigFileEntry.default_floodcount = yyvsp[-1].number;
}
    break;

  case 611:
#line 3515 "ircd_parser.y"
    {
  ConfigFileEntry.client_flood = yyvsp[-1].number;
}
    break;

  case 612:
#line 3520 "ircd_parser.y"
    {
  ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 613:
#line 3528 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->flags = 0;
  }
}
    break;

  case 614:
#line 3536 "ircd_parser.y"
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

  case 624:
#line 3563 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 625:
#line 3569 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = yyvsp[-1].number;
}
    break;

  case 626:
#line 3575 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 630:
#line 3581 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 631:
#line 3585 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 632:
#line 3591 "ircd_parser.y"
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

  case 633:
#line 3610 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 634:
#line 3619 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 635:
#line 3623 "ircd_parser.y"
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

  case 638:
#line 3663 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 639:
#line 3667 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 659:
#line 3697 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 660:
#line 3703 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_except = yylval.number;
}
    break;

  case 661:
#line 3709 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_invex = yylval.number;
}
    break;

  case 662:
#line 3715 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_knock = yylval.number;
}
    break;

  case 663:
#line 3721 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay = yyvsp[-1].number;
}
    break;

  case 664:
#line 3727 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay_channel = yyvsp[-1].number;
}
    break;

  case 665:
#line 3733 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 666:
#line 3739 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_chans_per_user = yyvsp[-1].number;
}
    break;

  case 667:
#line 3745 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 668:
#line 3751 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_bans = yyvsp[-1].number;
}
    break;

  case 669:
#line 3757 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_user_count = yyvsp[-1].number;
}
    break;

  case 670:
#line 3763 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_server_count = yyvsp[-1].number;
}
    break;

  case 671:
#line 3769 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 672:
#line 3775 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 673:
#line 3781 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.burst_topicwho = yylval.number;
}
    break;

  case 685:
#line 3801 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 686:
#line 3807 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 687:
#line 3813 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigServerHide.hidden_name);
    DupString(ConfigServerHide.hidden_name, yylval.string);
  }
}
    break;

  case 688:
#line 3822 "ircd_parser.y"
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

  case 689:
#line 3836 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 690:
#line 3842 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 691:
#line 3848 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 1016 of /usr/local/share/bison/yacc.c.  */
#line 7079 "y.tab.c"

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


#line 390 "ircd_parser.y"

