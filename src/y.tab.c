/* A Bison parser, made from ircd_parser.y, by GNU bison 1.75.  */
/* $Id: y.tab.c,v 7.72 2005/09/15 11:46:54 adx Exp $ */

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
     RESTRICTED = 419,
     RSA_PRIVATE_KEY_FILE = 420,
     RSA_PUBLIC_KEY_FILE = 421,
     SSL_CERTIFICATE_FILE = 422,
     RESV = 423,
     RESV_EXEMPT = 424,
     SECONDS = 425,
     MINUTES = 426,
     HOURS = 427,
     DAYS = 428,
     WEEKS = 429,
     SENDQ = 430,
     SEND_PASSWORD = 431,
     SERVERHIDE = 432,
     SERVERINFO = 433,
     SERVLINK_PATH = 434,
     IRCD_SID = 435,
     TKLINE_EXPIRE_NOTICES = 436,
     T_SHARED = 437,
     T_CLUSTER = 438,
     TYPE = 439,
     SHORT_MOTD = 440,
     SILENT = 441,
     SPOOF = 442,
     SPOOF_NOTICE = 443,
     STATS_I_OPER_ONLY = 444,
     STATS_K_OPER_ONLY = 445,
     STATS_O_OPER_ONLY = 446,
     STATS_P_OPER_ONLY = 447,
     TBOOL = 448,
     TMASKED = 449,
     T_REJECT = 450,
     TS_MAX_DELTA = 451,
     TS_WARN_DELTA = 452,
     TWODOTS = 453,
     T_ALL = 454,
     T_BOTS = 455,
     T_SOFTCALLERID = 456,
     T_CALLERID = 457,
     T_CCONN = 458,
     T_CLIENT_FLOOD = 459,
     T_DEAF = 460,
     T_DEBUG = 461,
     T_DRONE = 462,
     T_EXTERNAL = 463,
     T_FULL = 464,
     T_INVISIBLE = 465,
     T_IPV4 = 466,
     T_IPV6 = 467,
     T_LOCOPS = 468,
     T_LOGPATH = 469,
     T_L_CRIT = 470,
     T_L_DEBUG = 471,
     T_L_ERROR = 472,
     T_L_INFO = 473,
     T_L_NOTICE = 474,
     T_L_TRACE = 475,
     T_L_WARN = 476,
     T_MAX_CLIENTS = 477,
     T_NCHANGE = 478,
     T_OPERWALL = 479,
     T_REJ = 480,
     T_SERVNOTICE = 481,
     T_SKILL = 482,
     T_SPY = 483,
     T_SSL = 484,
     T_UNAUTH = 485,
     T_UNRESV = 486,
     T_UNXLINE = 487,
     T_WALLOP = 488,
     THROTTLE_TIME = 489,
     TOPICBURST = 490,
     TRUE_NO_OPER_FLOOD = 491,
     TKLINE = 492,
     TXLINE = 493,
     TRESV = 494,
     UNKLINE = 495,
     USER = 496,
     USE_EGD = 497,
     USE_EXCEPT = 498,
     USE_INVEX = 499,
     USE_KNOCK = 500,
     USE_LOGGING = 501,
     USE_WHOIS_ACTUALLY = 502,
     VHOST = 503,
     VHOST6 = 504,
     XLINE = 505,
     WARN = 506,
     WARN_NO_NLINE = 507
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
#define RESTRICTED 419
#define RSA_PRIVATE_KEY_FILE 420
#define RSA_PUBLIC_KEY_FILE 421
#define SSL_CERTIFICATE_FILE 422
#define RESV 423
#define RESV_EXEMPT 424
#define SECONDS 425
#define MINUTES 426
#define HOURS 427
#define DAYS 428
#define WEEKS 429
#define SENDQ 430
#define SEND_PASSWORD 431
#define SERVERHIDE 432
#define SERVERINFO 433
#define SERVLINK_PATH 434
#define IRCD_SID 435
#define TKLINE_EXPIRE_NOTICES 436
#define T_SHARED 437
#define T_CLUSTER 438
#define TYPE 439
#define SHORT_MOTD 440
#define SILENT 441
#define SPOOF 442
#define SPOOF_NOTICE 443
#define STATS_I_OPER_ONLY 444
#define STATS_K_OPER_ONLY 445
#define STATS_O_OPER_ONLY 446
#define STATS_P_OPER_ONLY 447
#define TBOOL 448
#define TMASKED 449
#define T_REJECT 450
#define TS_MAX_DELTA 451
#define TS_WARN_DELTA 452
#define TWODOTS 453
#define T_ALL 454
#define T_BOTS 455
#define T_SOFTCALLERID 456
#define T_CALLERID 457
#define T_CCONN 458
#define T_CLIENT_FLOOD 459
#define T_DEAF 460
#define T_DEBUG 461
#define T_DRONE 462
#define T_EXTERNAL 463
#define T_FULL 464
#define T_INVISIBLE 465
#define T_IPV4 466
#define T_IPV6 467
#define T_LOCOPS 468
#define T_LOGPATH 469
#define T_L_CRIT 470
#define T_L_DEBUG 471
#define T_L_ERROR 472
#define T_L_INFO 473
#define T_L_NOTICE 474
#define T_L_TRACE 475
#define T_L_WARN 476
#define T_MAX_CLIENTS 477
#define T_NCHANGE 478
#define T_OPERWALL 479
#define T_REJ 480
#define T_SERVNOTICE 481
#define T_SKILL 482
#define T_SPY 483
#define T_SSL 484
#define T_UNAUTH 485
#define T_UNRESV 486
#define T_UNXLINE 487
#define T_WALLOP 488
#define THROTTLE_TIME 489
#define TOPICBURST 490
#define TRUE_NO_OPER_FLOOD 491
#define TKLINE 492
#define TXLINE 493
#define TRESV 494
#define UNKLINE 495
#define USER 496
#define USE_EGD 497
#define USE_EXCEPT 498
#define USE_INVEX 499
#define USE_KNOCK 500
#define USE_LOGGING 501
#define USE_WHOIS_ACTUALLY 502
#define VHOST 503
#define VHOST6 504
#define XLINE 505
#define WARN 506
#define WARN_NO_NLINE 507




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
#line 690 "y.tab.c"
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
#line 711 "y.tab.c"

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
#define YYNTOKENS  258
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  324
/* YYNRULES -- Number of rules. */
#define YYNRULES  689
/* YYNRULES -- Number of states. */
#define YYNSTATES  1411

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   507

#define YYTRANSLATE(X) \
  ((unsigned)(X) <= YYMAXUTOK ? yytranslate[X] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned short yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   257,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   253,
       2,   256,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   255,     2,   254,     2,     2,     2,     2,
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
     245,   246,   247,   248,   249,   250,   251,   252
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
    2010,  2012,  2014,  2016,  2018,  2020,  2022,  2024,  2029,  2034,
    2039,  2044,  2049,  2054,  2059,  2064,  2069,  2074,  2079,  2084,
    2089,  2094,  2099,  2105,  2108,  2110,  2112,  2114,  2116,  2118,
    2120,  2122,  2124,  2126,  2131,  2136,  2141,  2146,  2151,  2156
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     259,     0,    -1,    -1,   259,   260,    -1,   284,    -1,   290,
      -1,   305,    -1,   554,    -1,   334,    -1,   352,    -1,   365,
      -1,   270,    -1,   572,    -1,   389,    -1,   396,    -1,   406,
      -1,   415,    -1,   443,    -1,   453,    -1,   459,    -1,   473,
      -1,   538,    -1,   463,    -1,   265,    -1,     1,   253,    -1,
       1,   254,    -1,    -1,   262,    -1,   131,   261,    -1,   131,
     170,   261,    -1,   131,   171,   261,    -1,   131,   172,   261,
      -1,   131,   173,   261,    -1,   131,   174,   261,    -1,    -1,
     264,    -1,   131,   263,    -1,   131,    14,   263,    -1,   131,
      15,   263,    -1,   131,    16,   263,    -1,   119,   255,   266,
     254,   253,    -1,   266,   267,    -1,   267,    -1,   268,    -1,
     269,    -1,     1,   253,    -1,   118,   256,   154,   253,    -1,
     149,   256,   154,   253,    -1,   178,   255,   271,   254,   253,
      -1,   271,   272,    -1,   272,    -1,   275,    -1,   280,    -1,
     283,    -1,   277,    -1,   278,    -1,   279,    -1,   282,    -1,
     274,    -1,   281,    -1,   276,    -1,   273,    -1,     1,   253,
      -1,   167,   256,   154,   253,    -1,   165,   256,   154,   253,
      -1,   120,   256,   154,   253,    -1,   180,   256,   154,   253,
      -1,    36,   256,   154,   253,    -1,   123,   256,   154,   253,
      -1,   122,   256,   154,   253,    -1,   248,   256,   154,   253,
      -1,   249,   256,   154,   253,    -1,   222,   256,   131,   253,
      -1,    84,   256,   193,   253,    -1,     5,   255,   285,   254,
     253,    -1,   285,   286,    -1,   286,    -1,   287,    -1,   289,
      -1,   288,    -1,     1,   253,    -1,   120,   256,   154,   253,
      -1,    46,   256,   154,   253,    -1,    36,   256,   154,   253,
      -1,   103,   255,   291,   254,   253,    -1,   291,   292,    -1,
     292,    -1,   293,    -1,   294,    -1,   303,    -1,   304,    -1,
     295,    -1,   297,    -1,   299,    -1,   300,    -1,   302,    -1,
     298,    -1,   301,    -1,   296,    -1,     1,   253,    -1,   214,
     256,   154,   253,    -1,   138,   256,   154,   253,    -1,    62,
     256,   154,   253,    -1,    55,   256,   154,   253,    -1,    60,
     256,   154,   253,    -1,    61,   256,   154,   253,    -1,    58,
     256,   154,   253,    -1,    57,   256,   154,   253,    -1,    59,
     256,   154,   253,    -1,    56,   256,   154,   253,    -1,   104,
     256,   215,   253,    -1,   104,   256,   217,   253,    -1,   104,
     256,   221,   253,    -1,   104,   256,   219,   253,    -1,   104,
     256,   220,   253,    -1,   104,   256,   218,   253,    -1,   104,
     256,   216,   253,    -1,   246,   256,   193,   253,    -1,    -1,
     136,   306,   307,   255,   308,   254,   253,    -1,    -1,   311,
      -1,   308,   309,    -1,   309,    -1,   310,    -1,   312,    -1,
     313,    -1,   315,    -1,   317,    -1,   318,    -1,   319,    -1,
     321,    -1,   322,    -1,   323,    -1,   324,    -1,   325,    -1,
     320,    -1,   326,    -1,   327,    -1,   328,    -1,   314,    -1,
     316,    -1,   329,    -1,     1,   253,    -1,   120,   256,   154,
     253,    -1,   154,    -1,   241,   256,   154,   253,    -1,   148,
     256,   154,   253,    -1,    48,   256,   193,   253,    -1,    77,
     256,   193,   253,    -1,   166,   256,   154,   253,    -1,    25,
     256,   154,   253,    -1,    72,   256,   193,   253,    -1,   162,
     256,   193,   253,    -1,   163,   256,   193,   253,    -1,    92,
     256,   193,   253,    -1,   250,   256,   193,   253,    -1,   240,
     256,   193,   253,    -1,    65,   256,   193,   253,    -1,   125,
     256,   193,   253,    -1,    37,   256,   193,   253,    -1,   160,
     256,   193,   253,    -1,     5,   256,   193,   253,    -1,    -1,
      53,   330,   256,   331,   253,    -1,   331,   257,   332,    -1,
     332,    -1,   130,   333,    -1,   333,    -1,    72,    -1,   162,
      -1,    92,    -1,   240,    -1,   250,    -1,    65,    -1,    37,
      -1,   160,    -1,     5,    -1,    77,    -1,   125,    -1,   224,
      -1,   141,    -1,    79,    -1,   163,    -1,    48,    -1,    -1,
      25,   335,   336,   255,   337,   254,   253,    -1,    -1,   340,
      -1,   337,   338,    -1,   338,    -1,   339,    -1,   350,    -1,
     341,    -1,   342,    -1,   351,    -1,   343,    -1,   344,    -1,
     345,    -1,   346,    -1,   347,    -1,   348,    -1,   349,    -1,
       1,   253,    -1,   120,   256,   154,   253,    -1,   154,    -1,
     151,   256,   262,   253,    -1,   152,   256,   262,   253,    -1,
     134,   256,   131,   253,    -1,    29,   256,   262,   253,    -1,
     113,   256,   131,   253,    -1,   108,   256,   131,   253,    -1,
     110,   256,   131,   253,    -1,   109,   256,   131,   253,    -1,
     175,   256,   264,   253,    -1,    23,   256,   131,   253,    -1,
     133,   256,   131,   253,    -1,    -1,   101,   353,   255,   358,
     254,   253,    -1,    -1,    53,   355,   256,   356,   253,    -1,
     356,   257,   357,    -1,   357,    -1,   229,    -1,    76,    -1,
     358,   359,    -1,   359,    -1,   360,    -1,   354,    -1,   363,
      -1,   364,    -1,     1,   253,    -1,   153,   256,   361,   253,
      -1,   361,   257,   362,    -1,   362,    -1,   131,    -1,   131,
     198,   131,    -1,    89,   256,   154,   253,    -1,    83,   256,
     154,   253,    -1,    -1,    73,   366,   255,   367,   254,   253,
      -1,   367,   368,    -1,   368,    -1,   369,    -1,   370,    -1,
     372,    -1,   374,    -1,   379,    -1,   380,    -1,   381,    -1,
     383,    -1,   384,    -1,   385,    -1,   371,    -1,   386,    -1,
     387,    -1,   382,    -1,   388,    -1,   373,    -1,     1,   253,
      -1,   241,   256,   154,   253,    -1,   148,   256,   154,   253,
      -1,   188,   256,   193,   253,    -1,    25,   256,   154,   253,
      -1,    48,   256,   193,   253,    -1,    -1,    53,   375,   256,
     376,   253,    -1,   376,   257,   377,    -1,   377,    -1,   130,
     378,    -1,   378,    -1,   188,    -1,    49,    -1,    93,    -1,
      74,    -1,    20,    -1,    21,    -1,   129,    -1,    67,    -1,
     169,    -1,   121,    -1,    93,   256,   193,   253,    -1,    74,
     256,   193,   253,    -1,    49,   256,   193,   253,    -1,    20,
     256,   193,   253,    -1,   129,   256,   193,   253,    -1,    67,
     256,   193,   253,    -1,   187,   256,   154,   253,    -1,   158,
     256,   154,   253,    -1,   157,   256,   131,   253,    -1,   121,
     256,   193,   253,    -1,    -1,   168,   390,   255,   391,   254,
     253,    -1,   391,   392,    -1,   392,    -1,   393,    -1,   394,
      -1,   395,    -1,     1,   253,    -1,   156,   256,   154,   253,
      -1,    22,   256,   154,   253,    -1,   124,   256,   154,   253,
      -1,    -1,   182,   397,   255,   398,   254,   253,    -1,   398,
     399,    -1,   399,    -1,   400,    -1,   401,    -1,   402,    -1,
       1,   253,    -1,   120,   256,   154,   253,    -1,   241,   256,
     154,   253,    -1,    -1,   184,   403,   256,   404,   253,    -1,
     404,   257,   405,    -1,   405,    -1,    92,    -1,   237,    -1,
     240,    -1,   250,    -1,   238,    -1,   232,    -1,   168,    -1,
     239,    -1,   231,    -1,   213,    -1,   199,    -1,    -1,   183,
     407,   255,   408,   254,   253,    -1,   408,   409,    -1,   409,
      -1,   410,    -1,   411,    -1,     1,   253,    -1,   120,   256,
     154,   253,    -1,    -1,   184,   412,   256,   413,   253,    -1,
     413,   257,   414,    -1,   414,    -1,    92,    -1,   237,    -1,
     240,    -1,   250,    -1,   238,    -1,   232,    -1,   168,    -1,
     239,    -1,   231,    -1,   213,    -1,   199,    -1,    -1,    28,
     416,   417,   255,   418,   254,   253,    -1,    -1,   421,    -1,
     418,   419,    -1,   419,    -1,   420,    -1,   422,    -1,   423,
      -1,   424,    -1,   425,    -1,   427,    -1,   426,    -1,   428,
      -1,   429,    -1,   439,    -1,   440,    -1,   441,    -1,   438,
      -1,   435,    -1,   437,    -1,   436,    -1,   434,    -1,   442,
      -1,     1,   253,    -1,   120,   256,   154,   253,    -1,   154,
      -1,    83,   256,   154,   253,    -1,   248,   256,   154,   253,
      -1,   176,   256,   154,   253,    -1,     3,   256,   154,   253,
      -1,   153,   256,   131,   253,    -1,     6,   256,   211,   253,
      -1,     6,   256,   212,   253,    -1,    52,   256,   154,   253,
      -1,    -1,    53,   430,   256,   431,   253,    -1,   431,   257,
     432,    -1,   432,    -1,   130,   433,    -1,   433,    -1,    98,
      -1,    26,    -1,    30,    -1,    10,    -1,    12,    -1,   235,
      -1,   166,   256,   154,   253,    -1,    48,   256,   193,   253,
      -1,    30,   256,   193,   253,    -1,    26,   256,   193,   253,
      -1,    10,   256,   193,   253,    -1,    85,   256,   154,   253,
      -1,    99,   256,   154,   253,    -1,    25,   256,   154,   253,
      -1,    24,   256,   154,   253,    -1,    -1,    90,   444,   255,
     449,   254,   253,    -1,    -1,   184,   446,   256,   447,   253,
      -1,   447,   257,   448,    -1,   448,    -1,   159,    -1,   449,
     450,    -1,   450,    -1,   451,    -1,   452,    -1,   445,    -1,
       1,    -1,   241,   256,   154,   253,    -1,   156,   256,   154,
     253,    -1,    -1,    35,   454,   255,   455,   254,   253,    -1,
     455,   456,    -1,   456,    -1,   457,    -1,   458,    -1,     1,
      -1,    89,   256,   154,   253,    -1,   156,   256,   154,   253,
      -1,    50,   255,   460,   254,   253,    -1,   460,   461,    -1,
     461,    -1,   462,    -1,     1,    -1,    89,   256,   154,   253,
      -1,    -1,    63,   464,   255,   469,   254,   253,    -1,    -1,
     184,   466,   256,   467,   253,    -1,   467,   257,   468,    -1,
     468,    -1,   159,    -1,   469,   470,    -1,   470,    -1,   471,
      -1,   472,    -1,   465,    -1,     1,    -1,   120,   256,   154,
     253,    -1,   156,   256,   154,   253,    -1,    64,   255,   474,
     254,   253,    -1,   474,   475,    -1,   475,    -1,   485,    -1,
     486,    -1,   488,    -1,   489,    -1,   490,    -1,   491,    -1,
     492,    -1,   493,    -1,   494,    -1,   495,    -1,   484,    -1,
     497,    -1,   498,    -1,   499,    -1,   500,    -1,   515,    -1,
     501,    -1,   503,    -1,   505,    -1,   504,    -1,   508,    -1,
     502,    -1,   509,    -1,   510,    -1,   511,    -1,   512,    -1,
     514,    -1,   513,    -1,   529,    -1,   516,    -1,   520,    -1,
     521,    -1,   525,    -1,   506,    -1,   507,    -1,   535,    -1,
     533,    -1,   534,    -1,   517,    -1,   487,    -1,   518,    -1,
     519,    -1,   536,    -1,   524,    -1,   496,    -1,   537,    -1,
     522,    -1,   523,    -1,   478,    -1,   483,    -1,   476,    -1,
     477,    -1,   479,    -1,   480,    -1,   481,    -1,   482,    -1,
       1,    -1,    70,   256,   131,   253,    -1,    71,   256,   131,
     253,    -1,    12,   256,   193,   253,    -1,   247,   256,   193,
     253,    -1,   161,   256,   131,   253,    -1,   144,   256,   131,
     253,    -1,   145,   256,   131,   253,    -1,   181,   256,   193,
     253,    -1,    91,   256,   131,   253,    -1,    82,   256,   193,
     253,    -1,    87,   256,   193,   253,    -1,    41,   256,   193,
     253,    -1,    51,   256,   193,   253,    -1,     8,   256,   193,
     253,    -1,   112,   256,   262,   253,    -1,   111,   256,   131,
     253,    -1,   105,   256,   131,   253,    -1,     9,   256,   262,
     253,    -1,   197,   256,   262,   253,    -1,   196,   256,   262,
     253,    -1,    75,   256,   131,   253,    -1,    95,   256,   193,
     253,    -1,    94,   256,   154,   253,    -1,    88,   256,   193,
     253,    -1,   252,   256,   193,   253,    -1,   191,   256,   193,
     253,    -1,   192,   256,   193,   253,    -1,   190,   256,   193,
     253,    -1,   190,   256,   194,   253,    -1,   189,   256,   193,
     253,    -1,   189,   256,   194,   253,    -1,   146,   256,   262,
     253,    -1,    19,   256,   262,   253,    -1,   137,   256,   193,
     253,    -1,   147,   256,   262,   253,    -1,   185,   256,   193,
     253,    -1,   128,   256,   193,   253,    -1,   236,   256,   193,
     253,    -1,   140,   256,   193,   253,    -1,   115,   256,   154,
     253,    -1,    86,   256,   262,   253,    -1,    43,   256,   131,
     253,    -1,   114,   256,   131,   253,    -1,   179,   256,   154,
     253,    -1,    31,   256,   154,   253,    -1,    27,   256,   131,
     253,    -1,   242,   256,   193,   253,    -1,    45,   256,   154,
     253,    -1,   150,   256,   193,   253,    -1,    38,   256,   193,
     253,    -1,   234,   256,   262,   253,    -1,    -1,   142,   526,
     256,   527,   253,    -1,   527,   257,   528,    -1,   528,    -1,
     200,    -1,   203,    -1,   205,    -1,   206,    -1,   209,    -1,
     227,    -1,   223,    -1,   225,    -1,   230,    -1,   228,    -1,
     208,    -1,   224,    -1,   226,    -1,   210,    -1,   233,    -1,
     201,    -1,   202,    -1,   213,    -1,    -1,   139,   530,   256,
     531,   253,    -1,   531,   257,   532,    -1,   532,    -1,   200,
      -1,   203,    -1,   205,    -1,   206,    -1,   209,    -1,   227,
      -1,   223,    -1,   225,    -1,   230,    -1,   228,    -1,   208,
      -1,   224,    -1,   226,    -1,   210,    -1,   233,    -1,   201,
      -1,   202,    -1,   213,    -1,   116,   256,   131,   253,    -1,
     117,   256,   131,   253,    -1,    32,   256,   131,   253,    -1,
     204,   256,   264,   253,    -1,    42,   256,   193,   253,    -1,
      -1,    66,   539,   255,   540,   254,   253,    -1,   540,   541,
      -1,   541,    -1,   542,    -1,   543,    -1,   544,    -1,   548,
      -1,   549,    -1,   550,    -1,     1,    -1,    47,   256,   193,
     253,    -1,    44,   256,   262,   253,    -1,    -1,   103,   545,
     256,   546,   253,    -1,   546,   257,   547,    -1,   547,    -1,
     195,    -1,    11,    -1,   241,   256,   154,   253,    -1,   120,
     256,   154,   253,    -1,    -1,     4,   551,   256,   552,   253,
      -1,   552,   257,   553,    -1,   553,    -1,   195,    -1,    11,
      -1,    22,   255,   555,   254,   253,    -1,   555,   556,    -1,
     556,    -1,   557,    -1,   558,    -1,   559,    -1,   560,    -1,
     566,    -1,   561,    -1,   562,    -1,   563,    -1,   564,    -1,
     565,    -1,   567,    -1,   568,    -1,   569,    -1,   570,    -1,
     571,    -1,     1,    -1,    40,   256,   193,   253,    -1,   243,
     256,   193,   253,    -1,   244,   256,   193,   253,    -1,   245,
     256,   193,   253,    -1,    96,   256,   262,   253,    -1,    97,
     256,   262,   253,    -1,   143,   256,   193,   253,    -1,   107,
     256,   131,   253,    -1,   155,   256,   193,   253,    -1,   106,
     256,   131,   253,    -1,    34,   256,   131,   253,    -1,    33,
     256,   131,   253,    -1,   126,   256,   193,   253,    -1,   127,
     256,   193,   253,    -1,    13,   256,   193,   253,    -1,   177,
     255,   573,   254,   253,    -1,   573,   574,    -1,   574,    -1,
     575,    -1,   576,    -1,   578,    -1,   580,    -1,   579,    -1,
     577,    -1,   581,    -1,     1,    -1,    54,   256,   193,   253,
      -1,    81,   256,   193,   253,    -1,    78,   256,   154,   253,
      -1,   100,   256,   262,   253,    -1,    76,   256,   193,   253,
      -1,    39,   256,   193,   253,    -1,    80,   256,   193,   253,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   389,   389,   390,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   418,   418,   419,   423,
     427,   431,   435,   439,   445,   445,   446,   447,   448,   449,
     456,   459,   459,   460,   460,   460,   462,   479,   490,   493,
     493,   495,   495,   495,   496,   496,   497,   497,   498,   499,
     499,   500,   500,   503,   537,   597,   611,   629,   638,   652,
     661,   689,   719,   735,   785,   787,   787,   788,   788,   788,
     789,   791,   800,   809,   822,   824,   824,   827,   827,   827,
     828,   829,   829,   830,   830,   831,   831,   832,   832,   833,
     836,   840,   844,   851,   858,   865,   872,   879,   886,   893,
     900,   904,   908,   912,   916,   920,   924,   930,   940,   939,
    1032,  1032,  1033,  1033,  1034,  1034,  1034,  1034,  1034,  1035,
    1035,  1035,  1036,  1036,  1036,  1037,  1037,  1037,  1038,  1038,
    1038,  1039,  1039,  1040,  1042,  1054,  1066,  1085,  1097,  1112,
    1123,  1165,  1174,  1185,  1196,  1207,  1218,  1229,  1240,  1251,
    1262,  1273,  1284,  1296,  1295,  1299,  1299,  1300,  1301,  1303,
    1310,  1317,  1324,  1331,  1338,  1345,  1352,  1359,  1366,  1373,
    1380,  1387,  1394,  1401,  1408,  1422,  1421,  1441,  1441,  1443,
    1443,  1444,  1444,  1445,  1446,  1447,  1448,  1449,  1450,  1451,
    1452,  1453,  1454,  1455,  1458,  1505,  1552,  1558,  1564,  1570,
    1576,  1582,  1588,  1594,  1600,  1606,  1612,  1622,  1621,  1638,
    1637,  1641,  1641,  1642,  1646,  1652,  1652,  1653,  1653,  1653,
    1653,  1653,  1655,  1657,  1657,  1659,  1674,  1696,  1705,  1718,
    1717,  1786,  1786,  1787,  1787,  1787,  1787,  1787,  1788,  1788,
    1789,  1789,  1789,  1790,  1790,  1791,  1791,  1791,  1792,  1792,
    1794,  1813,  1826,  1837,  1846,  1858,  1857,  1861,  1861,  1862,
    1863,  1865,  1873,  1880,  1887,  1894,  1901,  1908,  1915,  1922,
    1929,  1938,  1949,  1960,  1971,  1982,  1993,  2005,  2024,  2034,
    2043,  2059,  2058,  2074,  2074,  2075,  2075,  2075,  2075,  2077,
    2086,  2101,  2115,  2114,  2130,  2130,  2131,  2131,  2131,  2131,
    2133,  2142,  2151,  2150,  2156,  2156,  2157,  2161,  2165,  2169,
    2173,  2177,  2181,  2185,  2189,  2193,  2197,  2207,  2206,  2223,
    2223,  2224,  2224,  2224,  2226,  2233,  2232,  2238,  2238,  2239,
    2243,  2247,  2251,  2255,  2259,  2263,  2267,  2271,  2275,  2279,
    2289,  2288,  2438,  2438,  2439,  2439,  2440,  2440,  2440,  2440,
    2441,  2441,  2442,  2442,  2443,  2443,  2443,  2444,  2444,  2444,
    2445,  2445,  2445,  2446,  2446,  2449,  2461,  2473,  2482,  2508,
    2520,  2532,  2538,  2542,  2550,  2560,  2559,  2563,  2563,  2564,
    2565,  2567,  2574,  2585,  2592,  2599,  2606,  2616,  2657,  2668,
    2679,  2694,  2705,  2718,  2731,  2740,  2776,  2775,  2837,  2836,
    2840,  2840,  2841,  2847,  2847,  2848,  2848,  2848,  2848,  2850,
    2866,  2876,  2875,  2897,  2897,  2898,  2898,  2898,  2900,  2909,
    2921,  2923,  2923,  2924,  2924,  2926,  2946,  2945,  2987,  2986,
    2990,  2990,  2991,  2997,  2997,  2998,  2998,  2998,  2998,  3000,
    3006,  3015,  3018,  3018,  3019,  3019,  3019,  3020,  3020,  3021,
    3021,  3022,  3022,  3023,  3023,  3024,  3024,  3025,  3025,  3026,
    3026,  3027,  3027,  3028,  3028,  3029,  3029,  3030,  3030,  3031,
    3031,  3032,  3032,  3033,  3033,  3034,  3034,  3035,  3035,  3036,
    3036,  3037,  3037,  3038,  3038,  3039,  3040,  3040,  3041,  3041,
    3042,  3042,  3043,  3043,  3044,  3044,  3045,  3045,  3046,  3046,
    3047,  3052,  3057,  3062,  3067,  3072,  3077,  3082,  3087,  3092,
    3097,  3102,  3107,  3112,  3117,  3122,  3127,  3132,  3137,  3142,
    3147,  3153,  3164,  3169,  3178,  3183,  3188,  3193,  3198,  3201,
    3206,  3209,  3214,  3219,  3224,  3229,  3234,  3239,  3244,  3249,
    3254,  3265,  3270,  3275,  3280,  3289,  3321,  3339,  3344,  3353,
    3358,  3363,  3369,  3368,  3373,  3373,  3374,  3377,  3380,  3383,
    3386,  3389,  3392,  3395,  3398,  3401,  3404,  3407,  3410,  3413,
    3416,  3419,  3422,  3425,  3431,  3430,  3435,  3435,  3436,  3439,
    3442,  3445,  3448,  3451,  3454,  3457,  3460,  3463,  3466,  3469,
    3472,  3475,  3478,  3481,  3484,  3487,  3492,  3497,  3502,  3507,
    3512,  3521,  3520,  3546,  3546,  3547,  3547,  3548,  3549,  3550,
    3551,  3552,  3555,  3561,  3568,  3567,  3572,  3572,  3573,  3577,
    3583,  3602,  3612,  3611,  3654,  3654,  3655,  3659,  3668,  3671,
    3671,  3672,  3672,  3673,  3674,  3675,  3676,  3677,  3678,  3679,
    3680,  3681,  3682,  3683,  3684,  3685,  3686,  3689,  3695,  3701,
    3707,  3713,  3719,  3725,  3731,  3737,  3743,  3749,  3755,  3761,
    3767,  3773,  3782,  3785,  3785,  3786,  3786,  3786,  3787,  3788,
    3789,  3789,  3790,  3793,  3799,  3805,  3814,  3828,  3834,  3840
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
  "PING_WARNING", "PORT", "QSTRING", "QUIET_ON_BAN", "REASON", 
  "REDIRPORT", "REDIRSERV", "REGEX_T", "REHASH", "TREJECT_HOLD_TIME", 
  "REMOTE", "REMOTEBAN", "RESTRICTED", "RSA_PRIVATE_KEY_FILE", 
  "RSA_PUBLIC_KEY_FILE", "SSL_CERTIFICATE_FILE", "RESV", "RESV_EXEMPT", 
  "SECONDS", "MINUTES", "HOURS", "DAYS", "WEEKS", "SENDQ", 
  "SEND_PASSWORD", "SERVERHIDE", "SERVERINFO", "SERVLINK_PATH", 
  "IRCD_SID", "TKLINE_EXPIRE_NOTICES", "T_SHARED", "T_CLUSTER", "TYPE", 
  "SHORT_MOTD", "SILENT", "SPOOF", "SPOOF_NOTICE", "STATS_I_OPER_ONLY", 
  "STATS_K_OPER_ONLY", "STATS_O_OPER_ONLY", "STATS_P_OPER_ONLY", "TBOOL", 
  "TMASKED", "T_REJECT", "TS_MAX_DELTA", "TS_WARN_DELTA", "TWODOTS", 
  "T_ALL", "T_BOTS", "T_SOFTCALLERID", "T_CALLERID", "T_CCONN", 
  "T_CLIENT_FLOOD", "T_DEAF", "T_DEBUG", "T_DRONE", "T_EXTERNAL", 
  "T_FULL", "T_INVISIBLE", "T_IPV4", "T_IPV6", "T_LOCOPS", "T_LOGPATH", 
  "T_L_CRIT", "T_L_DEBUG", "T_L_ERROR", "T_L_INFO", "T_L_NOTICE", 
  "T_L_TRACE", "T_L_WARN", "T_MAX_CLIENTS", "T_NCHANGE", "T_OPERWALL", 
  "T_REJ", "T_SERVNOTICE", "T_SKILL", "T_SPY", "T_SSL", "T_UNAUTH", 
  "T_UNRESV", "T_UNXLINE", "T_WALLOP", "THROTTLE_TIME", "TOPICBURST", 
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
  "serverinfo_max_clients", "serverinfo_hub", "admin_entry", 
  "admin_items", "admin_item", "admin_name", "admin_email", 
  "admin_description", "logging_entry", "logging_items", "logging_item", 
  "logging_path", "logging_oper_log", "logging_fuserlog", 
  "logging_ffailed_operlog", "logging_foperlog", "logging_foperspylog", 
  "logging_fglinelog", "logging_fklinelog", "logging_ioerrlog", 
  "logging_killlog", "logging_log_level", "logging_use_logging", 
  "oper_entry", "@1", "oper_name_b", "oper_items", "oper_item", 
  "oper_name", "oper_name_t", "oper_user", "oper_password", 
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
  "general_dots_in_ident", "general_max_targets", "general_servlink_path", 
  "general_default_cipher_preference", "general_compression_level", 
  "general_use_egd", "general_egdpool_path", "general_ping_cookie", 
  "general_disable_auth", "general_throttle_time", "general_oper_umodes", 
  "@20", "umode_oitems", "umode_oitem", "general_oper_only_umodes", "@21", 
  "umode_items", "umode_item", "general_min_nonwildcard", 
  "general_min_nonwildcard_simple", "general_default_floodcount", 
  "general_client_flood", "general_dot_in_ip6_addr", "gline_entry", "@22", 
  "gline_items", "gline_item", "gline_enable", "gline_duration", 
  "gline_logging", "@23", "gline_logging_types", 
  "gline_logging_type_item", "gline_user", "gline_server", "gline_action", 
  "@24", "gdeny_types", "gdeny_type_item", "channel_entry", 
  "channel_items", "channel_item", "channel_disable_local_channels", 
  "channel_use_except", "channel_use_invex", "channel_use_knock", 
  "channel_knock_delay", "channel_knock_delay_channel", 
  "channel_invite_ops_only", "channel_max_chans_per_user", 
  "channel_quiet_on_ban", "channel_max_bans", 
  "channel_default_split_user_count", 
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
     505,   506,   507,    59,   125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   258,   259,   259,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   261,   261,   262,   262,
     262,   262,   262,   262,   263,   263,   264,   264,   264,   264,
     265,   266,   266,   267,   267,   267,   268,   269,   270,   271,
     271,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   285,   286,   286,   286,
     286,   287,   288,   289,   290,   291,   291,   292,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   303,   303,   303,   303,   303,   303,   304,   306,   305,
     307,   307,   308,   308,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   330,   329,   331,   331,   332,   332,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   335,   334,   336,   336,   337,
     337,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   353,   352,   355,
     354,   356,   356,   357,   357,   358,   358,   359,   359,   359,
     359,   359,   360,   361,   361,   362,   362,   363,   364,   366,
     365,   367,   367,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   368,
     369,   370,   371,   372,   373,   375,   374,   376,   376,   377,
     377,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   390,   389,   391,   391,   392,   392,   392,   392,   393,
     394,   395,   397,   396,   398,   398,   399,   399,   399,   399,
     400,   401,   403,   402,   404,   404,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   405,   405,   407,   406,   408,
     408,   409,   409,   409,   410,   412,   411,   413,   413,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     416,   415,   417,   417,   418,   418,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   427,   428,   430,   429,   431,   431,   432,
     432,   433,   433,   433,   433,   433,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   444,   443,   446,   445,
     447,   447,   448,   449,   449,   450,   450,   450,   450,   451,
     452,   454,   453,   455,   455,   456,   456,   456,   457,   458,
     459,   460,   460,   461,   461,   462,   464,   463,   466,   465,
     467,   467,   468,   469,   469,   470,   470,   470,   470,   471,
     472,   473,   474,   474,   475,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   503,
     504,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   526,   525,   527,   527,   528,   528,   528,   528,
     528,   528,   528,   528,   528,   528,   528,   528,   528,   528,
     528,   528,   528,   528,   530,   529,   531,   531,   532,   532,
     532,   532,   532,   532,   532,   532,   532,   532,   532,   532,
     532,   532,   532,   532,   532,   532,   533,   534,   535,   536,
     537,   539,   538,   540,   540,   541,   541,   541,   541,   541,
     541,   541,   542,   543,   545,   544,   546,   546,   547,   547,
     548,   549,   551,   550,   552,   552,   553,   553,   554,   555,
     555,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   557,   558,   559,
     560,   561,   562,   563,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,   573,   574,   574,   574,   574,   574,
     574,   574,   574,   575,   576,   577,   578,   579,   580,   581
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
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     5,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       2,     0,     1,     0,     0,     0,   185,   350,   421,     0,
     436,     0,   611,   239,   406,   217,     0,     0,   118,   291,
       0,     0,   302,   327,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,   187,
     352,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   120,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    79,    78,   656,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   640,   641,   642,   643,   644,   646,   647,
     648,   649,   650,   645,   651,   652,   653,   654,   655,   205,
       0,   188,   376,     0,   353,     0,   434,     0,     0,   432,
     433,     0,   510,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   584,     0,   562,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     453,   504,   505,   502,   506,   507,   508,   509,   503,   464,
     454,   455,   493,   456,   457,   458,   459,   460,   461,   462,
     463,   498,   465,   466,   467,   468,   470,   475,   471,   473,
     472,   487,   488,   474,   476,   477,   478,   479,   481,   480,
     469,   483,   492,   494,   495,   484,   485,   500,   501,   497,
     486,   482,   490,   491,   489,   496,   499,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    86,    87,    88,    91,    98,
      92,    96,    93,    94,    97,    95,    89,    90,     0,     0,
       0,     0,    42,    43,    44,   145,     0,   121,     0,   682,
       0,     0,     0,     0,     0,     0,     0,     0,   674,   675,
     676,   680,   677,   679,   678,   681,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
      61,    58,    51,    60,    54,    55,    56,    52,    59,    57,
      53,     0,     0,    80,     0,     0,     0,     0,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   639,     0,     0,   427,     0,
       0,     0,   424,   425,   426,     0,     0,   431,   448,     0,
       0,   438,   447,     0,   444,   445,   446,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   452,   621,   632,     0,     0,   624,
       0,     0,     0,   614,   615,   616,   617,   618,   619,   620,
       0,     0,     0,     0,     0,   265,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   242,   243,
     244,   253,   245,   258,   246,   247,   248,   249,   256,   250,
     251,   252,   254,   255,   257,   418,     0,   408,     0,   417,
       0,   414,   415,   416,     0,   219,     0,     0,     0,   228,
       0,   226,   227,   229,   230,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
      45,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,   294,   295,   296,   297,     0,     0,     0,     0,     0,
       0,     0,     0,   673,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,     0,     0,
     312,     0,     0,   305,   306,   307,   308,     0,     0,   335,
       0,   330,   331,   332,     0,     0,     0,    74,     0,     0,
       0,     0,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   638,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   190,
     191,   193,   194,   196,   197,   198,   199,   200,   201,   202,
     192,   195,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   385,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   355,   356,   357,   358,   359,   360,   362,   361,
     363,   364,   372,   369,   371,   370,   368,   365,   366,   367,
     373,     0,     0,     0,   423,     0,   430,     0,     0,     0,
       0,   443,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,     0,     0,     0,     0,     0,
       0,   451,     0,     0,     0,     0,     0,     0,     0,   613,
     259,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   241,     0,
       0,     0,     0,   413,   231,     0,     0,     0,     0,     0,
     225,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,     0,    40,     0,     0,     0,     0,     0,   163,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   123,   124,   125,   126,   140,   127,
     141,   128,   129,   130,   136,   131,   132,   133,   134,   135,
     137,   138,   139,   142,   298,     0,     0,     0,     0,   293,
       0,     0,     0,     0,     0,     0,     0,   672,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
     309,     0,     0,     0,     0,   304,   333,     0,     0,     0,
     329,    83,    82,    81,   671,   668,   667,   657,    26,    26,
      26,    26,    26,    28,    27,   661,   662,   666,   664,   669,
     670,   663,   665,   658,   659,   660,   203,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     189,   374,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   354,     0,     0,   422,   435,     0,     0,     0,   437,
     524,   528,   513,   543,   556,   555,   608,   560,   522,   610,
     552,   558,   523,   511,   512,   531,   520,   551,   521,   534,
     519,   533,   532,   527,   526,   525,   553,   550,   606,   607,
     547,   544,   588,   603,   604,   589,   590,   591,   598,   592,
     601,   605,   594,   599,   595,   600,   593,   597,   596,   602,
       0,   587,   549,   566,   581,   582,   567,   568,   569,   576,
     570,   579,   583,   572,   577,   573,   578,   571,   575,   574,
     580,     0,   565,   516,   517,   542,   545,   559,   515,   554,
     518,   546,   540,   541,   538,   539,   536,   537,   530,   529,
      34,    34,    34,    36,    35,   609,   561,   548,   557,   514,
     535,     0,     0,     0,     0,     0,     0,   612,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   240,     0,     0,     0,   407,     0,
       0,     0,   235,     0,   234,   218,   103,   109,   107,   106,
     108,   104,   105,   102,   110,   116,   111,   115,   113,   114,
     112,   101,   100,   117,    46,    47,   143,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,     0,     0,
       0,   292,   688,   683,   687,   685,   689,   684,   686,    67,
      73,    65,    69,    68,    64,    63,    66,    72,    70,    71,
       0,     0,     0,   303,     0,     0,   328,    29,    30,    31,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   186,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   351,   428,   429,   449,   450,   442,
       0,   441,   585,     0,   563,     0,    37,    38,    39,   637,
     636,     0,   635,   623,   622,   629,   628,     0,   627,   631,
     630,   284,   263,   264,   283,   275,   276,   272,   278,   274,
     273,   280,   277,     0,   279,   271,     0,   268,   270,   286,
     282,   281,   290,   285,   261,   289,   288,   287,   262,   260,
     420,   412,     0,   411,   419,   224,   223,     0,   222,   238,
     237,     0,   232,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   300,   301,   299,   310,   316,   322,
     326,   325,   324,   321,   317,   320,   323,   318,   319,     0,
     315,   311,   334,   339,   345,   349,   348,   347,   344,   340,
     343,   346,   341,   342,     0,   338,   215,   209,   211,   213,
     212,   210,   204,   216,   208,   206,   207,   214,   380,   382,
     383,   401,   405,   404,   400,   399,   398,   384,   394,   395,
     392,   393,   391,     0,   396,     0,   388,   390,   377,   402,
     403,   375,   381,   397,   379,   378,   439,     0,   586,   564,
     633,     0,   625,     0,   269,   266,     0,   409,     0,   220,
       0,   236,   233,   162,   151,   160,   148,   177,   175,   184,
     174,   169,   178,   182,   171,   179,     0,   181,   176,   170,
     183,   180,   172,   173,     0,   166,   168,   158,   152,   149,
     155,   144,   159,   147,   161,   153,   154,   150,   157,   146,
     156,   313,     0,   336,     0,   389,   386,     0,   440,   634,
     626,   267,   410,   221,   167,   164,     0,   314,   337,   387,
     165
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,    24,   873,   874,  1023,  1024,    25,   271,   272,
     273,   274,    26,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,    27,    71,    72,    73,
      74,    75,    28,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,    29,    61,   276,
     803,   804,   805,   277,   806,   807,   808,   809,   810,   811,
     812,   813,   814,   815,   816,   817,   818,   819,   820,   821,
     822,   823,  1091,  1374,  1375,  1376,    30,    49,   110,   598,
     599,   600,   111,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   610,   611,    31,    58,   489,   755,  1237,  1238,
     490,   491,   492,  1063,  1064,   493,   494,    32,    56,   457,
     458,   459,   460,   461,   462,   463,   464,   735,  1216,  1217,
    1218,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,    33,    62,   520,   521,   522,   523,   524,    34,    65,
     552,   553,   554,   555,   556,   852,  1279,  1280,    35,    66,
     560,   561,   562,   563,   858,  1294,  1295,    36,    50,   113,
     631,   632,   633,   114,   634,   635,   636,   637,   638,   639,
     640,   641,   911,  1325,  1326,  1327,   642,   643,   644,   645,
     646,   647,   648,   649,   650,    37,    57,   479,   750,  1232,
    1233,   480,   481,   482,   483,    38,    51,   351,   352,   353,
     354,    39,   118,   119,   120,    40,    53,   362,   659,  1180,
    1181,   363,   364,   365,   366,    41,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   401,  1001,
    1002,   231,   399,   980,   981,   232,   233,   234,   235,   236,
      42,    55,   432,   433,   434,   435,   436,   725,  1197,  1198,
     437,   438,   439,   722,  1191,  1192,    43,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,    44,   287,   288,   289,   290,   291,
     292,   293,   294,   295
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1004
static const short yypact[] =
{
   -1004,   929, -1004,  -243,  -229,  -210, -1004, -1004, -1004,  -205,
   -1004,  -187, -1004, -1004, -1004, -1004,  -180,  -177, -1004, -1004,
    -143,  -141, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004,   170,   694,   -35,
     -30,  -125,    11,  -112,   483,  -109,   -98,   -82,   -71,   486,
      79,    -6,   -62,   945,   526,   -59,   -55,   -67,   -54,   -41,
     -26,    12, -1004, -1004, -1004, -1004, -1004,   -25,   -24,   -22,
     -21,   -20,   -17,   -16,   -15,   -10,    -8,    33,    35,    40,
      42,    47,   220, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
      -4, -1004, -1004,    46, -1004,     2, -1004,    49,     7, -1004,
   -1004,   150, -1004,    58,    63,    64,    65,    67,    69,    72,
      74,    75,    76,    81,    84,    87,    89,    98,   103,   104,
     105,   106,   108,   118,   121,   123,   132,   133,   140,   142,
     143,   145,   147,   149,   160, -1004,   166, -1004,   168,   177,
     185,   186,   188,   195,   197,   200,   201,   205,   210,   212,
     213,   214,   215,   216,   221,   222,   223,   229,   230,    22,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004,   340,   787,   128,
     399,    -3,   233,   234,   237,   238,   240,   241,   242,   243,
     244,   245,   248,   249,   119, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,    71,   252,
     255,    38, -1004, -1004, -1004, -1004,    80, -1004,   246, -1004,
     257,   263,   264,   266,   267,   273,   274,    45, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004,   100,   275,   276,   277,
     279,   280,   281,   283,   293,   294,   295,   300,   258, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004,    97,    20, -1004,   134,   321,   322,   153, -1004,   347,
     303,   428,   367,   430,   430,   435,   436,   375,   379,   380,
     382,   387,   389,   391,   332, -1004,   852,   746, -1004,   330,
     331,    39, -1004, -1004, -1004,   438,   336, -1004, -1004,   337,
     345, -1004, -1004,    43, -1004, -1004, -1004,   403,   430,   409,
     430,   473,   451,   475,   414,   415,   416,   485,   460,   424,
     487,   488,   490,   439,   430,   441,   442,   505,   484,   444,
     508,   509,   430,   511,   491,   516,   520,   459,   461,   397,
     463,   401,   527,   529,   430,   430,   468,   532,   513,   472,
     476,  -107,  -105,   478,   489,   430,   430,   545,   430,   495,
     496,   497,   499,   425, -1004, -1004, -1004,   421,   427, -1004,
     440,   443,    32, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
     431,   445,   446,   448,   449, -1004,   452,   453,   454,   455,
     456,   458,   464,   466,   467,   477,   481,   262, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004,   494, -1004,   498, -1004,
      54, -1004, -1004, -1004,   462, -1004,   501,   503,   506, -1004,
     102, -1004, -1004, -1004, -1004, -1004,   540,   543,   562,   570,
     577,   588,   589,   591,   211,   597,   601,   571,   510, -1004,
   -1004,   611,   612,   514, -1004,   578,   524,   522,   525,   528,
      68, -1004, -1004, -1004, -1004,   576,   590,   593,   628,   594,
     596,   430,   539, -1004, -1004,   631,   600,   641,   643,   648,
     650,   651,   655,   550,   659,   660,   563, -1004,   564,   568,
   -1004,   569,    21, -1004, -1004, -1004, -1004,   573,   574, -1004,
      24, -1004, -1004, -1004,   579,   580,   581, -1004,   585,   586,
     595,   598,   178,   599,   602,   604,   605,   606,   609,   610,
     614,   615,   616,   617, -1004,   618,   608,   620,   621,   626,
     627,   632,   633,   634,   636,   639,   640,   642,   284, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004,   649,   644,   645,   653,   654,   657,   658,   661,
     662,   663, -1004,   664,   667,   668,   669,   670,   671,   672,
     676,   219, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004,   673,   688,   680, -1004,   683, -1004,   693,   696,   684,
     689, -1004,   690,   695,   697,   699,   700,   703,   705,   706,
     710,   713,   714,   715,   716,   717,   720,   723,   724,   725,
     727,   729,   730,   734,   735,   736,   737,   738,   743,   744,
     745,   747,   748,   752,   833,   753,   868,   754,   755,   756,
     757,   758,   759,   760,   761,   762,   763,   764,   765,   767,
     769,   771,   776,   778,     0,   784,   791,   794,   796,   797,
     798, -1004,   685,   430,   711,   691,   719,   749,   799, -1004,
   -1004,   718,   795,   722,   847,   806,   860,   861,   862,   871,
     874,   918,   775,   921,   925,   887,   928,   830, -1004,   930,
     829,   932,   834, -1004, -1004,   832,   935,   936,   968,   849,
   -1004,   850,   851,   855,   856,   857,   863,   864,   865,   866,
     867,   869,   870,   872,   873,   875,   876,   877,   878, -1004,
     879,   880, -1004,   881,   844,   858,   859,   882, -1004,   883,
     884,   885,   886,   888,   889,   890,   891,   892,   893,   894,
     895,   896,   897,   117, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004,   951,   959,   967,   901, -1004,
     902,   903,   904,   905,   906,   907,   908, -1004,   909,   910,
     911,   912,   913,   914,   915,   916,   917,   919,   920, -1004,
   -1004,   970,   922,   973,   923, -1004, -1004,   981,   924,   926,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,   430,   430,
     430,   430,   430, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004,  1005,   430,  1006,
    1012,  1040,  1043,  1021,  1046,  1050,   430,   430,   545,   931,
   -1004, -1004,  1028,  -117,   990,  1031,  1032,   994,   995,   996,
    1036,   937,  1037,  1038,  1041,  1042,  1063,  1044,  1045,  1047,
     944, -1004,   947,   949, -1004, -1004,   950,   952,  1048, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
    -248, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004,  -233, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
     545,   545,   545, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004,    -7,   953,   955,    -5,   956,   957, -1004,   958,   960,
     961,   962,   388,   963,   964,   965,   966,   969,   971,   972,
     974,   975,   976,   977, -1004,   978,  1053,   979, -1004,   -69,
     980,   982,   709,  -225, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004,  1011,  1066,  1030,
    1033,   983,  1049,  1051,  1052,  1054,  1067,  1055,  1080,  1056,
    1057,  1058,  1082,  1059,  1083,  1060,   985, -1004,   987,   988,
     993, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
    1001,   208,  1002, -1004,  1003,   647, -1004, -1004, -1004, -1004,
   -1004, -1004,  1004,  1007,  1008,  1009,  1010,  1013,  1014,  1015,
    1016,  1017,  1018,  1019, -1004,  1020,  1022,  1023,  1024,  1025,
    1026,  1027,  1029,  1034,  1035,    17,  1039,  1061,  1062,  1064,
    1065,  1068,  1069,  1070, -1004, -1004, -1004, -1004, -1004, -1004,
    -215, -1004, -1004,   833, -1004,   868, -1004, -1004, -1004, -1004,
   -1004,  -201, -1004, -1004, -1004, -1004, -1004,  -196, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004,   592, -1004, -1004,  -191, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004,  -183, -1004, -1004, -1004, -1004,  -176, -1004, -1004,
   -1004,  1112, -1004,   968,  1071,  1072,  1073,  1074,   681,  1075,
    1076,  1077,  1078,  1079,  1081,  1084,  1085,  1086,  1087,  1088,
    1089,  1090,  1091, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,  -152,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004,  -151, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004,   356, -1004,  -146, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004,  1048, -1004, -1004,
   -1004,    -7, -1004,    -5, -1004, -1004,   388, -1004,  1053, -1004,
     -69, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004,   731, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004,  -104, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004,   208, -1004,   647, -1004, -1004,    17, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004,   681, -1004, -1004, -1004,
   -1004
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
   -1004, -1004, -1004,  -457,  -333, -1003,  -415, -1004, -1004,   603,
   -1004, -1004, -1004, -1004,   557, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,  1187, -1004,
   -1004, -1004, -1004, -1004,  1092, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004,   471, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004,  -147,  -102, -1004, -1004, -1004, -1004,
     686, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,   -85,
   -1004,   793, -1004, -1004,    48, -1004, -1004, -1004, -1004, -1004,
     824, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,   -61,
      73, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004,   770, -1004, -1004, -1004, -1004, -1004,
   -1004,   741, -1004, -1004, -1004, -1004, -1004,  -103, -1004, -1004,
   -1004,   739, -1004, -1004, -1004, -1004,  -100, -1004, -1004, -1004,
   -1004,   665, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004,   -99,   -28, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
     -51, -1004,   820, -1004, -1004, -1004, -1004, -1004,   954, -1004,
   -1004, -1004, -1004,  1183, -1004, -1004, -1004, -1004, -1004, -1004,
     -34, -1004,   939, -1004, -1004, -1004, -1004,  1125, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
     122, -1004, -1004, -1004,   125, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004,   927, -1004, -1004, -1004, -1004, -1004,   -37,
   -1004, -1004, -1004, -1004, -1004,   -32, -1004, -1004,  1218, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004, -1004, -1004,  1093, -1004, -1004, -1004,
   -1004, -1004, -1004, -1004
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, parse error.  */
#define YYTABLE_NINF -1
static const unsigned short yytable[] =
{
     573,   574,   715,   348,  1189,  1182,  1195,  1235,   116,  1183,
      45,    46,   116,    67,  1020,  1021,  1022,  1186,  1187,  1188,
    1184,   557,   548,   122,  1185,   557,    47,  1318,  1242,  1319,
     123,   124,  1243,   425,   125,   663,   426,   665,  1336,   268,
     348,   126,  1337,  1320,   358,    48,   279,  1321,    68,   127,
      52,   679,  1340,   128,   129,   475,  1341,  1342,    69,   687,
     130,  1343,  1345,   131,   132,   133,  1346,   134,    54,   516,
    1347,   699,   700,   135,  1348,    59,   427,  1349,    60,   428,
     268,  1350,   712,   713,   280,   716,   706,   707,   708,   709,
     517,   349,   136,   137,  1156,  1157,   117,   138,   548,   281,
     117,  1391,  1393,   484,   139,  1392,  1394,  1396,   140,   141,
     142,  1397,    63,   143,    64,  1322,   144,   145,   783,   109,
     241,   282,   784,   283,   112,   284,   285,   146,   349,   475,
     115,   714,    70,   147,   148,   429,   149,   150,   151,   152,
     558,   549,   785,   121,   558,   286,   237,  1323,   275,  1405,
     153,   358,   430,  1406,   786,   485,   269,   238,   350,   154,
    1236,   155,   156,   359,   157,   787,   158,   159,   160,   161,
     788,    67,   162,   239,   242,   243,   244,   245,   246,   247,
     248,   249,   789,   163,   240,   486,   323,   270,  1190,   790,
    1196,   487,   518,   278,   791,   350,   321,   269,   836,   360,
     322,   164,   324,   165,   559,   550,    68,   166,   559,   792,
     476,   167,   168,   169,   170,   325,    69,   549,   171,   172,
     612,    76,   613,   250,   519,   614,   173,   361,   270,   615,
     326,   329,   330,    77,   331,   332,   333,   793,   477,   334,
     335,   336,   794,   616,   617,   618,   337,   516,   338,   619,
     495,   346,  1324,    78,    79,   488,   174,   251,   175,   296,
      80,   356,   551,   440,   176,   795,   327,   620,   517,   177,
     359,   621,   622,   431,   178,   854,   423,   796,   859,   797,
     798,   550,   441,   799,   476,   585,   728,   442,   564,   339,
      70,   340,   513,   653,   297,   478,   341,   660,   342,   532,
    1268,   347,   623,   343,   624,   355,   360,   586,   752,   572,
     443,   444,   477,   587,   367,   445,    81,    82,   625,   368,
     369,   370,   828,   371,   510,   372,    83,    84,   373,   446,
     374,   375,   376,   252,   361,   515,   447,   377,   551,   626,
     378,   425,   298,   379,   426,   380,    85,    86,   868,   869,
     870,   871,   872,   534,   381,   448,   759,   800,   801,   382,
     383,   384,   385,    87,   386,   253,  1318,   802,  1319,   478,
     518,  1106,   627,   508,   387,    88,  1269,   388,   299,   389,
     300,   301,  1320,   449,   427,   628,  1321,   428,   390,   391,
    1032,   450,   588,   589,   590,   629,   392,   591,   393,   394,
     484,   395,   519,   396,   592,   397,   567,  1270,  1205,  1206,
     451,  1137,  1138,  1139,  1140,  1141,   398,   593,   594,   452,
     453,  1271,   400,   302,   402,   303,   769,   770,   771,   772,
     773,   774,   775,   403,   569,   595,   596,  1207,   304,  1272,
    1273,   404,   405,   429,   406,  1274,  1275,  1276,  1277,   454,
     455,   407,   485,   408,  1322,  1208,   409,   410,  1278,   597,
     430,   411,  1209,    89,    90,    91,   412,   630,   413,   414,
     415,   416,   417,   920,   344,   565,   566,   418,   419,   420,
     305,  1210,   486,  1153,   122,   421,   422,   241,   487,   496,
     497,   123,   124,   498,   499,   125,   500,   501,   502,   503,
     504,   505,   126,   456,   506,   507,   306,   307,   511,  1211,
     127,   512,   546,   525,   128,   129,   747,  1212,  1213,   526,
     527,   130,   528,   529,   131,   132,   133,   296,   134,   530,
     531,   535,   536,   537,   135,   538,   539,   540,   899,   541,
     568,   242,   243,   244,   245,   246,   247,   248,   249,   542,
     543,   544,   488,   136,   137,  1143,   545,  1214,   138,   570,
     571,   572,   297,  1151,  1152,   139,   575,   576,   577,   140,
     141,   142,   578,   579,   143,   580,  1215,   144,   145,   783,
     581,   431,   582,   784,   583,   584,   651,   652,   146,   656,
     250,  1324,   655,   657,   147,   148,   662,   149,   150,   151,
     152,   658,   664,   785,   666,   667,   668,   669,   670,   671,
     298,   153,  1205,  1206,   673,   786,   672,   674,   675,   676,
     154,   677,   155,   156,   251,   157,   787,   158,   159,   160,
     161,   788,   678,   162,   680,   681,   682,   684,   683,   685,
     686,  1207,   688,   789,   163,   689,   299,   690,   300,   301,
     790,   691,   692,   694,   693,   791,   695,   696,   697,  1208,
     698,   701,   164,   702,   165,   704,  1209,   703,   166,   705,
     792,   710,   167,   168,   169,   170,   714,   723,   721,   171,
     172,   846,   711,   724,   730,  1210,  1357,   173,   717,   718,
     719,   302,   720,   303,   761,    76,   726,   762,   793,   727,
     252,   731,   732,   794,   733,   734,   304,    77,   736,   737,
     738,   739,   740,  1211,   741,   754,   763,   174,  1358,   175,
     742,  1212,   743,   744,   764,   176,   795,    78,    79,  1359,
     177,   765,   253,   745,    80,   178,  1357,   746,   796,  1283,
     797,   798,   766,   767,   799,   768,  1360,   612,   305,   613,
     749,   776,   614,  1361,   751,   777,   615,   756,  1362,   757,
    1363,  1214,   758,   779,   778,   780,   781,   782,  1358,   830,
     616,   617,   618,  1364,   306,   307,   619,   824,   825,  1359,
    1215,   826,   833,   831,   827,   838,   832,   834,   440,   835,
      81,    82,   837,   839,   620,   840,  1360,   841,   621,   622,
      83,    84,   842,  1361,   843,   844,  1365,   441,  1362,   845,
    1363,  1366,   442,   847,   848,  1284,   849,   850,   800,   801,
      85,    86,  1367,  1364,   851,   853,   856,   922,   802,   623,
     857,   624,   861,   862,   863,   443,   444,    87,   864,   865,
     445,  1368,   923,  1369,  1370,   625,  1285,   926,   866,    88,
     927,   867,   875,   585,   446,   876,  1365,   877,   878,   879,
    1286,   447,   880,   881,   887,   547,   626,   882,   883,   884,
     885,   886,  1367,  1035,   514,   586,   888,   889,  1287,  1288,
     448,   587,   890,   891,  1289,  1290,  1291,  1292,   892,   893,
     894,  1368,   895,  1369,  1370,   896,   897,  1293,   898,   627,
     902,   903,   901,  1036,  1033,  1371,  1049,  1241,   449,   904,
     905,  1038,   628,   906,   907,  1040,   450,   908,   909,   910,
     912,  1372,   629,   913,   914,   915,   916,   917,   918,     2,
       3,  1373,   919,   924,     4,   451,   925,    89,    90,    91,
     928,  1031,   929,   930,   452,   453,   279,  1034,   931,  1039,
     932,     5,   933,   934,     6,  1371,   935,     7,   936,   937,
     588,   589,   590,   938,     8,   591,   939,   940,   941,   942,
     943,  1372,   592,   944,   454,   455,   945,   946,   947,     9,
     948,  1373,   949,   950,   280,   593,   594,   951,   952,   953,
     954,   955,    10,    11,   630,    12,   956,   957,   958,   281,
     959,   960,    13,   595,   596,   961,   982,  1003,  1004,  1005,
    1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,    14,
    1015,   282,  1016,   283,  1017,   284,   285,   597,   456,  1018,
      15,  1019,    16,   962,   963,   964,   965,  1025,   966,   967,
    1041,   968,   969,   970,  1026,   286,   971,  1027,    17,  1028,
    1029,  1030,  1037,  1043,  1044,  1045,   972,   973,   974,   975,
     976,   977,  1042,   978,  1046,    18,   979,  1047,   983,   984,
     985,   986,  1048,   987,   988,  1050,   989,   990,   991,  1051,
    1052,   992,  1053,  1054,  1055,  1056,  1057,  1058,  1059,  1060,
    1061,   993,   994,   995,   996,   997,   998,    19,   999,  1062,
    1087,  1000,  1065,  1066,  1067,  1108,    20,    21,  1068,  1069,
    1070,    22,    23,  1109,  1088,  1089,  1071,  1072,  1073,  1074,
    1075,  1110,  1076,  1077,  1130,  1078,  1079,  1132,  1080,  1081,
    1082,  1083,  1084,  1085,  1086,  1134,  1142,  1144,  1090,  1092,
    1093,  1094,  1095,  1145,  1096,  1097,  1098,  1099,  1100,  1101,
    1102,  1103,  1104,  1105,  1111,  1112,  1113,  1114,  1115,  1116,
    1117,  1118,  1119,  1120,  1121,  1122,  1123,  1124,  1125,  1126,
    1127,  1146,  1128,  1129,  1147,  1148,  1133,  1149,  1131,  1136,
    1135,  1150,  1155,  1158,  1154,  1159,  1160,  1161,  1162,  1163,
    1164,  1166,  1167,  1165,  1170,  1168,  1169,  1174,  1171,  1172,
    1175,  1173,  1176,  1177,  1244,  1178,  1193,  1179,  1194,  1199,
    1200,  1201,  1231,  1202,  1203,  1204,  1219,  1220,  1221,  1222,
    1245,  1253,  1223,  1246,  1224,  1225,  1247,  1226,  1227,  1228,
    1229,  1230,  1234,  1239,  1255,  1240,  1259,  1261,  1263,  1248,
    1264,  1265,  1249,  1351,  1250,  1251,  1266,  1252,  1254,  1256,
    1257,  1258,  1260,  1262,  1267,  1281,  1282,  1296,   328,  1410,
    1297,  1298,  1299,  1300,  1404,  1403,  1301,  1302,  1303,  1304,
    1305,  1306,  1307,  1308,  1107,  1309,  1310,  1311,  1312,  1313,
    1314,   748,  1315,   760,   900,  1401,  1344,  1316,  1317,  1407,
     829,  1352,  1328,   855,  1408,  1395,   921,  1402,  1409,   860,
     753,   357,   661,  1398,   424,   654,  1400,  1339,  1338,  1399,
     345,     0,     0,     0,  1329,  1330,     0,  1331,  1332,     0,
       0,  1333,  1334,  1335,  1353,  1354,  1355,  1356,  1377,  1378,
    1379,  1380,  1381,     0,  1382,     0,     0,  1383,  1384,  1385,
    1386,  1387,  1388,  1389,  1390,     0,   509,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   729,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     533
};

static const short yycheck[] =
{
     333,   334,   417,     1,    11,   253,    11,    76,     1,   257,
     253,   254,     1,     1,    14,    15,    16,  1020,  1021,  1022,
     253,     1,     1,     1,   257,     1,   255,    10,   253,    12,
       8,     9,   257,     1,    12,   368,     4,   370,   253,     1,
       1,    19,   257,    26,     1,   255,     1,    30,    36,    27,
     255,   384,   253,    31,    32,     1,   257,   253,    46,   392,
      38,   257,   253,    41,    42,    43,   257,    45,   255,     1,
     253,   404,   405,    51,   257,   255,    44,   253,   255,    47,
       1,   257,   415,   416,    39,   418,   193,   194,   193,   194,
      22,    89,    70,    71,   211,   212,    89,    75,     1,    54,
      89,   253,   253,     1,    82,   257,   257,   253,    86,    87,
      88,   257,   255,    91,   255,    98,    94,    95,     1,   154,
       1,    76,     5,    78,   154,    80,    81,   105,    89,     1,
     255,   131,   120,   111,   112,   103,   114,   115,   116,   117,
     120,   120,    25,   255,   120,   100,   255,   130,   154,   253,
     128,     1,   120,   257,    37,    53,   118,   255,   156,   137,
     229,   139,   140,   120,   142,    48,   144,   145,   146,   147,
      53,     1,   150,   255,    55,    56,    57,    58,    59,    60,
      61,    62,    65,   161,   255,    83,   253,   149,   195,    72,
     195,    89,   124,   255,    77,   156,   255,   118,   531,   156,
     255,   179,   256,   181,   184,   184,    36,   185,   184,    92,
     156,   189,   190,   191,   192,   256,    46,   120,   196,   197,
       1,     1,     3,   104,   156,     6,   204,   184,   149,    10,
     256,   256,   256,    13,   256,   256,   256,   120,   184,   256,
     256,   256,   125,    24,    25,    26,   256,     1,   256,    30,
     253,   255,   235,    33,    34,   153,   234,   138,   236,     1,
      40,   254,   241,     1,   242,   148,   254,    48,    22,   247,
     120,    52,    53,   241,   252,   254,   254,   160,   254,   162,
     163,   184,    20,   166,   156,     1,   254,    25,   154,   256,
     120,   256,   254,   254,    36,   241,   256,   254,   256,   254,
      92,   255,    83,   256,    85,   256,   156,    23,   254,   131,
      48,    49,   184,    29,   256,    53,    96,    97,    99,   256,
     256,   256,   254,   256,   253,   256,   106,   107,   256,    67,
     256,   256,   256,   214,   184,   255,    74,   256,   241,   120,
     256,     1,    84,   256,     4,   256,   126,   127,   170,   171,
     172,   173,   174,   253,   256,    93,   254,   240,   241,   256,
     256,   256,   256,   143,   256,   246,    10,   250,    12,   241,
     124,   254,   153,   254,   256,   155,   168,   256,   120,   256,
     122,   123,    26,   121,    44,   166,    30,    47,   256,   256,
     723,   129,   108,   109,   110,   176,   256,   113,   256,   256,
       1,   256,   156,   256,   120,   256,   253,   199,    20,    21,
     148,   868,   869,   870,   871,   872,   256,   133,   134,   157,
     158,   213,   256,   165,   256,   167,   215,   216,   217,   218,
     219,   220,   221,   256,   131,   151,   152,    49,   180,   231,
     232,   256,   256,   103,   256,   237,   238,   239,   240,   187,
     188,   256,    53,   256,    98,    67,   256,   256,   250,   175,
     120,   256,    74,   243,   244,   245,   256,   248,   256,   256,
     256,   256,   256,   254,   254,   154,   154,   256,   256,   256,
     222,    93,    83,   898,     1,   256,   256,     1,    89,   256,
     256,     8,     9,   256,   256,    12,   256,   256,   256,   256,
     256,   256,    19,   241,   256,   256,   248,   249,   256,   121,
      27,   256,   254,   256,    31,    32,   254,   129,   130,   256,
     256,    38,   256,   256,    41,    42,    43,     1,    45,   256,
     256,   256,   256,   256,    51,   256,   256,   256,   254,   256,
     193,    55,    56,    57,    58,    59,    60,    61,    62,   256,
     256,   256,   153,    70,    71,   888,   256,   169,    75,   131,
     193,   131,    36,   896,   897,    82,   131,   131,   193,    86,
      87,    88,   193,   193,    91,   193,   188,    94,    95,     1,
     193,   241,   193,     5,   193,   253,   256,   256,   105,   253,
     104,   235,   154,   256,   111,   112,   193,   114,   115,   116,
     117,   256,   193,    25,   131,   154,   131,   193,   193,   193,
      84,   128,    20,    21,   154,    37,   131,   193,   131,   131,
     137,   131,   139,   140,   138,   142,    48,   144,   145,   146,
     147,    53,   193,   150,   193,   193,   131,   193,   154,   131,
     131,    49,   131,    65,   161,   154,   120,   131,   122,   123,
      72,   131,   193,   256,   193,    77,   193,   256,   131,    67,
     131,   193,   179,   131,   181,   193,    74,   154,   185,   193,
      92,   193,   189,   190,   191,   192,   131,   256,   253,   196,
     197,   131,   193,   256,   253,    93,     5,   204,   193,   193,
     193,   165,   193,   167,   154,     1,   256,   154,   120,   256,
     214,   256,   256,   125,   256,   256,   180,    13,   256,   256,
     256,   256,   256,   121,   256,   253,   154,   234,    37,   236,
     256,   129,   256,   256,   154,   242,   148,    33,    34,    48,
     247,   154,   246,   256,    40,   252,     5,   256,   160,    92,
     162,   163,   154,   154,   166,   154,    65,     1,   222,     3,
     256,   154,     6,    72,   256,   154,    10,   256,    77,   256,
      79,   169,   256,   253,   193,   154,   154,   253,    37,   193,
      24,    25,    26,    92,   248,   249,    30,   253,   256,    48,
     188,   256,   154,   193,   256,   154,   193,   193,     1,   193,
      96,    97,   253,   193,    48,   154,    65,   154,    52,    53,
     106,   107,   154,    72,   154,   154,   125,    20,    77,   154,
      79,   130,    25,   154,   154,   168,   253,   253,   240,   241,
     126,   127,   141,    92,   256,   256,   253,   154,   250,    83,
     256,    85,   253,   253,   253,    48,    49,   143,   253,   253,
      53,   160,   154,   162,   163,    99,   199,   154,   253,   155,
     154,   253,   253,     1,    67,   253,   125,   253,   253,   253,
     213,    74,   253,   253,   256,   308,   120,   253,   253,   253,
     253,   253,   141,   154,   271,    23,   256,   256,   231,   232,
      93,    29,   256,   256,   237,   238,   239,   240,   256,   256,
     256,   160,   256,   162,   163,   256,   256,   250,   256,   153,
     256,   256,   253,   154,   193,   224,   131,   198,   121,   256,
     256,   193,   166,   256,   256,   193,   129,   256,   256,   256,
     256,   240,   176,   256,   256,   256,   256,   256,   256,     0,
       1,   250,   256,   253,     5,   148,   253,   243,   244,   245,
     256,   256,   253,   253,   157,   158,     1,   256,   253,   154,
     253,    22,   253,   253,    25,   224,   253,    28,   253,   253,
     108,   109,   110,   253,    35,   113,   253,   253,   253,   253,
     253,   240,   120,   253,   187,   188,   253,   253,   253,    50,
     253,   250,   253,   253,    39,   133,   134,   253,   253,   253,
     253,   253,    63,    64,   248,    66,   253,   253,   253,    54,
     253,   253,    73,   151,   152,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,    90,
     253,    76,   253,    78,   253,    80,    81,   175,   241,   253,
     101,   253,   103,   200,   201,   202,   203,   253,   205,   206,
     193,   208,   209,   210,   253,   100,   213,   253,   119,   253,
     253,   253,   253,   193,   193,   193,   223,   224,   225,   226,
     227,   228,   256,   230,   193,   136,   233,   193,   200,   201,
     202,   203,   154,   205,   206,   154,   208,   209,   210,   154,
     193,   213,   154,   253,   154,   256,   154,   253,   256,   154,
     154,   223,   224,   225,   226,   227,   228,   168,   230,   131,
     256,   233,   253,   253,   253,   154,   177,   178,   253,   253,
     253,   182,   183,   154,   256,   256,   253,   253,   253,   253,
     253,   154,   253,   253,   154,   253,   253,   154,   253,   253,
     253,   253,   253,   253,   253,   154,   131,   131,   256,   256,
     256,   256,   256,   131,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   131,   253,   253,   131,   154,   253,   131,   256,   253,
     256,   131,   154,   193,   253,   154,   154,   193,   193,   193,
     154,   154,   154,   256,   131,   154,   154,   253,   154,   154,
     253,   154,   253,   253,   193,   253,   253,   159,   253,   253,
     253,   253,   159,   253,   253,   253,   253,   253,   253,   253,
     154,   154,   253,   193,   253,   253,   193,   253,   253,   253,
     253,   253,   253,   253,   154,   253,   154,   154,   253,   256,
     253,   253,   193,   131,   193,   193,   253,   193,   193,   193,
     193,   193,   193,   193,   253,   253,   253,   253,    71,  1406,
     253,   253,   253,   253,  1366,  1350,   253,   253,   253,   253,
     253,   253,   253,   253,   803,   253,   253,   253,   253,   253,
     253,   457,   253,   490,   598,  1346,  1213,   253,   253,  1392,
     520,  1243,   253,   552,  1394,  1323,   631,  1348,  1397,   560,
     480,   118,   363,  1337,   179,   351,  1343,  1185,  1183,  1341,
      92,    -1,    -1,    -1,   253,   253,    -1,   253,   253,    -1,
      -1,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,    -1,   253,    -1,    -1,   253,   253,   253,
     253,   253,   253,   253,   253,    -1,   254,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   432,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     287
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,   259,     0,     1,     5,    22,    25,    28,    35,    50,
      63,    64,    66,    73,    90,   101,   103,   119,   136,   168,
     177,   178,   182,   183,   260,   265,   270,   284,   290,   305,
     334,   352,   365,   389,   396,   406,   415,   443,   453,   459,
     463,   473,   538,   554,   572,   253,   254,   255,   255,   335,
     416,   454,   255,   464,   255,   539,   366,   444,   353,   255,
     255,   306,   390,   255,   255,   397,   407,     1,    36,    46,
     120,   285,   286,   287,   288,   289,     1,    13,    33,    34,
      40,    96,    97,   106,   107,   126,   127,   143,   155,   243,
     244,   245,   555,   556,   557,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,   568,   569,   570,   571,   154,
     336,   340,   154,   417,   421,   255,     1,    89,   460,   461,
     462,   255,     1,     8,     9,    12,    19,    27,    31,    32,
      38,    41,    42,    43,    45,    51,    70,    71,    75,    82,
      86,    87,    88,    91,    94,    95,   105,   111,   112,   114,
     115,   116,   117,   128,   137,   139,   140,   142,   144,   145,
     146,   147,   150,   161,   179,   181,   185,   189,   190,   191,
     192,   196,   197,   204,   234,   236,   242,   247,   252,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   529,   533,   534,   535,   536,   537,   255,   255,   255,
     255,     1,    55,    56,    57,    58,    59,    60,    61,    62,
     104,   138,   214,   246,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,     1,   118,
     149,   266,   267,   268,   269,   154,   307,   311,   255,     1,
      39,    54,    76,    78,    80,    81,   100,   573,   574,   575,
     576,   577,   578,   579,   580,   581,     1,    36,    84,   120,
     122,   123,   165,   167,   180,   222,   248,   249,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   255,   255,   253,   256,   256,   256,   254,   286,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   254,   556,   255,   255,     1,    89,
     156,   455,   456,   457,   458,   256,   254,   461,     1,   120,
     156,   184,   465,   469,   470,   471,   472,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   530,
     256,   526,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   254,   475,     1,     4,    44,    47,   103,
     120,   241,   540,   541,   542,   543,   544,   548,   549,   550,
       1,    20,    25,    48,    49,    53,    67,    74,    93,   121,
     129,   148,   157,   158,   187,   188,   241,   367,   368,   369,
     370,   371,   372,   373,   374,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,     1,   156,   184,   241,   445,
     449,   450,   451,   452,     1,    53,    83,    89,   153,   354,
     358,   359,   360,   363,   364,   253,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   254,   292,
     253,   256,   256,   254,   267,   255,     1,    22,   124,   156,
     391,   392,   393,   394,   395,   256,   256,   256,   256,   256,
     256,   256,   254,   574,   253,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   254,   272,     1,   120,
     184,   241,   398,   399,   400,   401,   402,     1,   120,   184,
     408,   409,   410,   411,   154,   154,   154,   253,   193,   131,
     131,   193,   131,   262,   262,   131,   131,   193,   193,   193,
     193,   193,   193,   193,   253,     1,    23,    29,   108,   109,
     110,   113,   120,   133,   134,   151,   152,   175,   337,   338,
     339,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,     1,     3,     6,    10,    24,    25,    26,    30,
      48,    52,    53,    83,    85,    99,   120,   153,   166,   176,
     248,   418,   419,   420,   422,   423,   424,   425,   426,   427,
     428,   429,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   256,   256,   254,   456,   154,   253,   256,   256,   466,
     254,   470,   193,   262,   193,   262,   131,   154,   131,   193,
     193,   193,   131,   154,   193,   131,   131,   131,   193,   262,
     193,   193,   131,   154,   193,   131,   131,   262,   131,   154,
     131,   131,   193,   193,   256,   193,   256,   131,   131,   262,
     262,   193,   131,   154,   193,   193,   193,   194,   193,   194,
     193,   193,   262,   262,   131,   264,   262,   193,   193,   193,
     193,   253,   551,   256,   256,   545,   256,   256,   254,   541,
     253,   256,   256,   256,   256,   375,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   254,   368,   256,
     446,   256,   254,   450,   253,   355,   256,   256,   256,   254,
     359,   154,   154,   154,   154,   154,   154,   154,   154,   215,
     216,   217,   218,   219,   220,   221,   154,   154,   193,   253,
     154,   154,   253,     1,     5,    25,    37,    48,    53,    65,
      72,    77,    92,   120,   125,   148,   160,   162,   163,   166,
     240,   241,   250,   308,   309,   310,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   253,   256,   256,   256,   254,   392,
     193,   193,   193,   154,   193,   193,   262,   253,   154,   193,
     154,   154,   154,   154,   154,   154,   131,   154,   154,   253,
     253,   256,   403,   256,   254,   399,   253,   256,   412,   254,
     409,   253,   253,   253,   253,   253,   253,   253,   170,   171,
     172,   173,   174,   261,   262,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   254,
     338,   253,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   430,   256,   256,   256,   256,   256,   256,   256,   256,
     254,   419,   154,   154,   253,   253,   154,   154,   256,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   200,   201,   202,   203,   205,   206,   208,   209,
     210,   213,   223,   224,   225,   226,   227,   228,   230,   233,
     531,   532,   253,   200,   201,   202,   203,   205,   206,   208,
     209,   210,   213,   223,   224,   225,   226,   227,   228,   230,
     233,   527,   528,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
      14,    15,    16,   263,   264,   253,   253,   253,   253,   253,
     253,   256,   262,   193,   256,   154,   154,   253,   193,   154,
     193,   193,   256,   193,   193,   193,   193,   193,   154,   131,
     154,   154,   193,   154,   253,   154,   256,   154,   253,   256,
     154,   154,   131,   361,   362,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   256,   256,   256,
     256,   330,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   254,   309,   154,   154,
     154,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     154,   256,   154,   253,   154,   256,   253,   261,   261,   261,
     261,   261,   131,   262,   131,   131,   131,   131,   154,   131,
     131,   262,   262,   264,   253,   154,   211,   212,   193,   154,
     154,   193,   193,   193,   154,   256,   154,   154,   154,   154,
     131,   154,   154,   154,   253,   253,   253,   253,   253,   159,
     467,   468,   253,   257,   253,   257,   263,   263,   263,    11,
     195,   552,   553,   253,   253,    11,   195,   546,   547,   253,
     253,   253,   253,   253,   253,    20,    21,    49,    67,    74,
      93,   121,   129,   130,   169,   188,   376,   377,   378,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   159,   447,   448,   253,    76,   229,   356,   357,   253,
     253,   198,   253,   257,   193,   154,   193,   193,   256,   193,
     193,   193,   193,   154,   193,   154,   193,   193,   193,   154,
     193,   154,   193,   253,   253,   253,   253,   253,    92,   168,
     199,   213,   231,   232,   237,   238,   239,   240,   250,   404,
     405,   253,   253,    92,   168,   199,   213,   231,   232,   237,
     238,   239,   240,   250,   413,   414,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,    10,    12,
      26,    30,    98,   130,   235,   431,   432,   433,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   257,   532,   528,
     253,   257,   253,   257,   378,   253,   257,   253,   257,   253,
     257,   131,   362,   253,   253,   253,   253,     5,    37,    48,
      65,    72,    77,    79,    92,   125,   130,   141,   160,   162,
     163,   224,   240,   250,   331,   332,   333,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   257,   253,   257,   433,   253,   257,   468,   553,
     547,   377,   448,   357,   333,   253,   257,   405,   414,   432,
     332
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
#line 418 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 28:
#line 420 "ircd_parser.y"
    {
			yyval.number = yyvsp[-1].number + yyvsp[0].number;
		}
    break;

  case 29:
#line 424 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number + yyvsp[0].number;
		}
    break;

  case 30:
#line 428 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 + yyvsp[0].number;
		}
    break;

  case 31:
#line 432 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 + yyvsp[0].number;
		}
    break;

  case 32:
#line 436 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 + yyvsp[0].number;
		}
    break;

  case 33:
#line 440 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 * 7 + yyvsp[0].number;
		}
    break;

  case 34:
#line 445 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 36:
#line 446 "ircd_parser.y"
    { yyval.number = yyvsp[-1].number + yyvsp[0].number; }
    break;

  case 37:
#line 447 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number + yyvsp[0].number; }
    break;

  case 38:
#line 448 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 + yyvsp[0].number; }
    break;

  case 39:
#line 449 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 * 1024 + yyvsp[0].number; }
    break;

  case 46:
#line 463 "ircd_parser.y"
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
#line 480 "ircd_parser.y"
    {
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
}
    break;

  case 63:
#line 504 "ircd_parser.y"
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
#line 538 "ircd_parser.y"
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
#line 598 "ircd_parser.y"
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
#line 612 "ircd_parser.y"
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
#line 630 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.description);
    DupString(ServerInfo.description,yylval.string);
  }
}
    break;

  case 68:
#line 639 "ircd_parser.y"
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
#line 653 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.network_desc);
    DupString(ServerInfo.network_desc, yylval.string);
  }
}
    break;

  case 70:
#line 662 "ircd_parser.y"
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
#line 690 "ircd_parser.y"
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
#line 720 "ircd_parser.y"
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
#line 736 "ircd_parser.y"
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
#line 792 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.name);
    DupString(AdminInfo.name, yylval.string);
  }
}
    break;

  case 82:
#line 801 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.email);
    DupString(AdminInfo.email, yylval.string);
  }
}
    break;

  case 83:
#line 810 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.description);
    DupString(AdminInfo.description, yylval.string);
  }
}
    break;

  case 100:
#line 837 "ircd_parser.y"
    {
                        }
    break;

  case 101:
#line 841 "ircd_parser.y"
    {
                        }
    break;

  case 102:
#line 845 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
}
    break;

  case 103:
#line 852 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
}
    break;

  case 104:
#line 859 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
}
    break;

  case 105:
#line 866 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operspylog, yylval.string,
            sizeof(ConfigLoggingEntry.operspylog));
}
    break;

  case 106:
#line 873 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.glinelog, yylval.string,
            sizeof(ConfigLoggingEntry.glinelog));
}
    break;

  case 107:
#line 880 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.klinelog, yylval.string,
            sizeof(ConfigLoggingEntry.klinelog));
}
    break;

  case 108:
#line 887 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.ioerrlog, yylval.string,
            sizeof(ConfigLoggingEntry.ioerrlog));
}
    break;

  case 109:
#line 894 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.killlog, yylval.string,
            sizeof(ConfigLoggingEntry.killlog));
}
    break;

  case 110:
#line 901 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
}
    break;

  case 111:
#line 905 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
}
    break;

  case 112:
#line 909 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
}
    break;

  case 113:
#line 913 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
}
    break;

  case 114:
#line 917 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
}
    break;

  case 115:
#line 921 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
}
    break;

  case 116:
#line 925 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
}
    break;

  case 117:
#line 931 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 118:
#line 940 "ircd_parser.y"
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
#line 952 "ircd_parser.y"
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
#line 1043 "ircd_parser.y"
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
#line 1055 "ircd_parser.y"
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
#line 1067 "ircd_parser.y"
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
#line 1086 "ircd_parser.y"
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
#line 1098 "ircd_parser.y"
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
#line 1113 "ircd_parser.y"
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
#line 1124 "ircd_parser.y"
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
#line 1166 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 152:
#line 1175 "ircd_parser.y"
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
#line 1186 "ircd_parser.y"
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
#line 1197 "ircd_parser.y"
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
#line 1208 "ircd_parser.y"
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
#line 1219 "ircd_parser.y"
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
#line 1230 "ircd_parser.y"
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
#line 1241 "ircd_parser.y"
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
#line 1252 "ircd_parser.y"
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
#line 1263 "ircd_parser.y"
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
#line 1274 "ircd_parser.y"
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
#line 1285 "ircd_parser.y"
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
#line 1296 "ircd_parser.y"
    {
}
    break;

  case 167:
#line 1300 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 168:
#line 1301 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 169:
#line 1304 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 170:
#line 1311 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 171:
#line 1318 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 172:
#line 1325 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 173:
#line 1332 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 174:
#line 1339 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 175:
#line 1346 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 176:
#line 1353 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 177:
#line 1360 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 178:
#line 1367 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 179:
#line 1374 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 180:
#line 1381 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 181:
#line 1388 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 182:
#line 1395 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 183:
#line 1402 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 184:
#line 1409 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) ClearConfEncrypted(yy_aconf);
    else SetConfEncrypted(yy_aconf);
  }
}
    break;

  case 185:
#line 1422 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = (struct ClassItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 186:
#line 1429 "ircd_parser.y"
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
#line 1459 "ircd_parser.y"
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
#line 1506 "ircd_parser.y"
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
#line 1553 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 207:
#line 1559 "ircd_parser.y"
    {
  if (ypass == 1)
    PingWarning(yy_class) = yyvsp[-1].number;
}
    break;

  case 208:
#line 1565 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = yyvsp[-1].number;
}
    break;

  case 209:
#line 1571 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 210:
#line 1577 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = yyvsp[-1].number;
}
    break;

  case 211:
#line 1583 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = yyvsp[-1].number;
}
    break;

  case 212:
#line 1589 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = yyvsp[-1].number;
}
    break;

  case 213:
#line 1595 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = yyvsp[-1].number;
}
    break;

  case 214:
#line 1601 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = yyvsp[-1].number;
}
    break;

  case 215:
#line 1607 "ircd_parser.y"
    {
  if (ypass == 2)
    CidrBitlen(yy_class) = yyvsp[-1].number;
}
    break;

  case 216:
#line 1613 "ircd_parser.y"
    {
  if (ypass == 2)
    NumberPerCidr(yy_class) = yyvsp[-1].number;
}
    break;

  case 217:
#line 1622 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    listener_address = NULL;
    listener_flags = 0;
  }
}
    break;

  case 218:
#line 1629 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 219:
#line 1638 "ircd_parser.y"
    {
}
    break;

  case 223:
#line 1643 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_SSL;
}
    break;

  case 224:
#line 1647 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_HIDDEN;
}
    break;

  case 235:
#line 1660 "ircd_parser.y"
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
#line 1675 "ircd_parser.y"
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
#line 1697 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 238:
#line 1706 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 239:
#line 1718 "ircd_parser.y"
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
#line 1730 "ircd_parser.y"
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
#line 1795 "ircd_parser.y"
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
#line 1814 "ircd_parser.y"
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
#line 1827 "ircd_parser.y"
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
#line 1838 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 264:
#line 1847 "ircd_parser.y"
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
#line 1858 "ircd_parser.y"
    {
}
    break;

  case 269:
#line 1862 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 270:
#line 1863 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 271:
#line 1866 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 272:
#line 1874 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 273:
#line 1881 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 274:
#line 1888 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 275:
#line 1895 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 276:
#line 1902 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 277:
#line 1909 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 278:
#line 1916 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 279:
#line 1923 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 280:
#line 1930 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 281:
#line 1939 "ircd_parser.y"
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
#line 1950 "ircd_parser.y"
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
#line 1961 "ircd_parser.y"
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
#line 1972 "ircd_parser.y"
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
#line 1983 "ircd_parser.y"
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
#line 1994 "ircd_parser.y"
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
#line 2006 "ircd_parser.y"
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
#line 2025 "ircd_parser.y"
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
#line 2035 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = yyvsp[-1].number;
  }
}
    break;

  case 290:
#line 2044 "ircd_parser.y"
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
#line 2059 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 292:
#line 2066 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 299:
#line 2078 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 300:
#line 2087 "ircd_parser.y"
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
#line 2102 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char def_reason[] = "No reason";

    create_nick_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
  }
}
    break;

  case 302:
#line 2115 "ircd_parser.y"
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
#line 2123 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 310:
#line 2134 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 311:
#line 2143 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    split_nuh(yylval.string, NULL, &yy_match_item->user, &yy_match_item->host);
  }
}
    break;

  case 312:
#line 2151 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 316:
#line 2158 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 317:
#line 2162 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TKLINE;
}
    break;

  case 318:
#line 2166 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 319:
#line 2170 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 320:
#line 2174 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TXLINE;
}
    break;

  case 321:
#line 2178 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 322:
#line 2182 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 323:
#line 2186 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TRESV;
}
    break;

  case 324:
#line 2190 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 325:
#line 2194 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_LOCOPS;
}
    break;

  case 326:
#line 2198 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 327:
#line 2207 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_conf->flags = SHARED_ALL;
  }
}
    break;

  case 328:
#line 2214 "ircd_parser.y"
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
#line 2227 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 335:
#line 2233 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = 0;
}
    break;

  case 339:
#line 2240 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_KLINE;
}
    break;

  case 340:
#line 2244 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TKLINE;
}
    break;

  case 341:
#line 2248 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNKLINE;
}
    break;

  case 342:
#line 2252 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_XLINE;
}
    break;

  case 343:
#line 2256 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TXLINE;
}
    break;

  case 344:
#line 2260 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNXLINE;
}
    break;

  case 345:
#line 2264 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_RESV;
}
    break;

  case 346:
#line 2268 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TRESV;
}
    break;

  case 347:
#line 2272 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNRESV;
}
    break;

  case 348:
#line 2276 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_LOCOPS;
}
    break;

  case 349:
#line 2280 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = SHARED_ALL;
}
    break;

  case 350:
#line 2289 "ircd_parser.y"
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
#line 2307 "ircd_parser.y"
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
#line 2450 "ircd_parser.y"
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
#line 2462 "ircd_parser.y"
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
#line 2474 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 378:
#line 2483 "ircd_parser.y"
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
#line 2509 "ircd_parser.y"
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
#line 2521 "ircd_parser.y"
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
#line 2533 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = yyvsp[-1].number;
}
    break;

  case 382:
#line 2539 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 383:
#line 2543 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 384:
#line 2551 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 385:
#line 2560 "ircd_parser.y"
    {
}
    break;

  case 389:
#line 2564 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 390:
#line 2565 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 391:
#line 2568 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfLazyLink(yy_aconf);
    else SetConfLazyLink(yy_aconf);
  }
}
    break;

  case 392:
#line 2575 "ircd_parser.y"
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
#line 2586 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfCryptLink(yy_aconf);
    else SetConfCryptLink(yy_aconf);
  }
}
    break;

  case 394:
#line 2593 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAllowAutoConn(yy_aconf);
    else SetConfAllowAutoConn(yy_aconf);
  }
}
    break;

  case 395:
#line 2600 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAwayBurst(yy_aconf);
    else SetConfAwayBurst(yy_aconf);
  }
}
    break;

  case 396:
#line 2607 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfTopicBurst(yy_aconf);
    else SetConfTopicBurst(yy_aconf);
  }
}
    break;

  case 397:
#line 2617 "ircd_parser.y"
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
#line 2658 "ircd_parser.y"
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
#line 2669 "ircd_parser.y"
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
#line 2680 "ircd_parser.y"
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
#line 2695 "ircd_parser.y"
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
#line 2706 "ircd_parser.y"
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
#line 2719 "ircd_parser.y"
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
#line 2732 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 405:
#line 2741 "ircd_parser.y"
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
#line 2776 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    userbuf[0] = hostbuf[0] = reasonbuf[0] = '\0';
    regex_ban = 0;
  }
}
    break;

  case 407:
#line 2783 "ircd_parser.y"
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
#line 2837 "ircd_parser.y"
    {
}
    break;

  case 412:
#line 2842 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 419:
#line 2851 "ircd_parser.y"
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
#line 2867 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 421:
#line 2876 "ircd_parser.y"
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
#line 2885 "ircd_parser.y"
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
#line 2901 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 429:
#line 2910 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 435:
#line 2927 "ircd_parser.y"
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
  ConfigFileEntry.gline_min_cidr = yyvsp[-1].number;
}
    break;

  case 512:
#line 3058 "ircd_parser.y"
    {
  ConfigFileEntry.gline_min_cidr6 = yyvsp[-1].number;
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
  ConfigFileEntry.kill_chase_time_limit = yyvsp[-1].number;
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
  ConfigFileEntry.max_nick_time = yyvsp[-1].number; 
}
    break;

  case 526:
#line 3128 "ircd_parser.y"
    {
  ConfigFileEntry.max_nick_changes = yyvsp[-1].number;
}
    break;

  case 527:
#line 3133 "ircd_parser.y"
    {
  ConfigFileEntry.max_accept = yyvsp[-1].number;
}
    break;

  case 528:
#line 3138 "ircd_parser.y"
    {
  ConfigFileEntry.anti_spam_exit_message_time = yyvsp[-1].number;
}
    break;

  case 529:
#line 3143 "ircd_parser.y"
    {
  ConfigFileEntry.ts_warn_delta = yyvsp[-1].number;
}
    break;

  case 530:
#line 3148 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = yyvsp[-1].number;
}
    break;

  case 531:
#line 3154 "ircd_parser.y"
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
  ConfigFileEntry.pace_wait = yyvsp[-1].number;
}
    break;

  case 543:
#line 3220 "ircd_parser.y"
    {
  ConfigFileEntry.caller_id_wait = yyvsp[-1].number;
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
  ConfigFileEntry.pace_wait_simple = yyvsp[-1].number;
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
  ConfigFileEntry.idletime = yyvsp[-1].number;
}
    break;

  case 552:
#line 3271 "ircd_parser.y"
    {
  ConfigFileEntry.dots_in_ident = yyvsp[-1].number;
}
    break;

  case 553:
#line 3276 "ircd_parser.y"
    {
  ConfigFileEntry.max_targets = yyvsp[-1].number;
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
  ConfigFileEntry.min_nonwildcard = yyvsp[-1].number;
}
    break;

  case 607:
#line 3498 "ircd_parser.y"
    {
  ConfigFileEntry.min_nonwildcard_simple = yyvsp[-1].number;
}
    break;

  case 608:
#line 3503 "ircd_parser.y"
    {
  ConfigFileEntry.default_floodcount = yyvsp[-1].number;
}
    break;

  case 609:
#line 3508 "ircd_parser.y"
    {
  ConfigFileEntry.client_flood = yyvsp[-1].number;
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
    ConfigFileEntry.gline_time = yyvsp[-1].number;
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

  case 657:
#line 3690 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 658:
#line 3696 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_except = yylval.number;
}
    break;

  case 659:
#line 3702 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_invex = yylval.number;
}
    break;

  case 660:
#line 3708 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_knock = yylval.number;
}
    break;

  case 661:
#line 3714 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay = yyvsp[-1].number;
}
    break;

  case 662:
#line 3720 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay_channel = yyvsp[-1].number;
}
    break;

  case 663:
#line 3726 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 664:
#line 3732 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_chans_per_user = yyvsp[-1].number;
}
    break;

  case 665:
#line 3738 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 666:
#line 3744 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_bans = yyvsp[-1].number;
}
    break;

  case 667:
#line 3750 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_user_count = yyvsp[-1].number;
}
    break;

  case 668:
#line 3756 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_server_count = yyvsp[-1].number;
}
    break;

  case 669:
#line 3762 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 670:
#line 3768 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 671:
#line 3774 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.burst_topicwho = yylval.number;
}
    break;

  case 683:
#line 3794 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 684:
#line 3800 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 685:
#line 3806 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigServerHide.hidden_name);
    DupString(ConfigServerHide.hidden_name, yylval.string);
  }
}
    break;

  case 686:
#line 3815 "ircd_parser.y"
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

  case 687:
#line 3829 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 688:
#line 3835 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 689:
#line 3841 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 1016 of /usr/local/share/bison/yacc.c.  */
#line 7066 "y.tab.c"

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


#line 389 "ircd_parser.y"

