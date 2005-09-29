/* A Bison parser, made from ircd_parser.y, by GNU bison 1.75.  */
/* $Id: y.tab.c,v 7.84 2005/09/29 01:50:00 adx Exp $ */

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
     CIDR_BITLEN_IPV4 = 278,
     CIDR_BITLEN_IPV6 = 279,
     CIPHER_PREFERENCE = 280,
     CLASS = 281,
     COMPRESSED = 282,
     COMPRESSION_LEVEL = 283,
     CONNECT = 284,
     CONNECTFREQ = 285,
     CRYPTLINK = 286,
     DEFAULT_CIPHER_PREFERENCE = 287,
     DEFAULT_FLOODCOUNT = 288,
     DEFAULT_SPLIT_SERVER_COUNT = 289,
     DEFAULT_SPLIT_USER_COUNT = 290,
     DENY = 291,
     DESCRIPTION = 292,
     DIE = 293,
     DISABLE_AUTH = 294,
     DISABLE_HIDDEN = 295,
     DISABLE_LOCAL_CHANNELS = 296,
     DISABLE_REMOTE_COMMANDS = 297,
     DOT_IN_IP6_ADDR = 298,
     DOTS_IN_IDENT = 299,
     DURATION = 300,
     EGDPOOL_PATH = 301,
     EMAIL = 302,
     ENABLE = 303,
     ENCRYPTED = 304,
     EXCEED_LIMIT = 305,
     EXEMPT = 306,
     FAILED_OPER_NOTICE = 307,
     FAKENAME = 308,
     IRCD_FLAGS = 309,
     FLATTEN_LINKS = 310,
     FFAILED_OPERLOG = 311,
     FKILLLOG = 312,
     FKLINELOG = 313,
     FGLINELOG = 314,
     FIOERRLOG = 315,
     FOPERLOG = 316,
     FOPERSPYLOG = 317,
     FUSERLOG = 318,
     GECOS = 319,
     GENERAL = 320,
     GLINE = 321,
     GLINES = 322,
     GLINE_EXEMPT = 323,
     GLINE_LOG = 324,
     GLINE_TIME = 325,
     GLINE_MIN_CIDR = 326,
     GLINE_MIN_CIDR6 = 327,
     GLOBAL_KILL = 328,
     IRCD_AUTH = 329,
     NEED_IDENT = 330,
     HAVENT_READ_CONF = 331,
     HIDDEN = 332,
     HIDDEN_ADMIN = 333,
     HIDDEN_NAME = 334,
     HIDDEN_OPER = 335,
     HIDE_SERVER_IPS = 336,
     HIDE_SERVERS = 337,
     HIDE_SPOOF_IPS = 338,
     HOST = 339,
     HUB = 340,
     HUB_MASK = 341,
     IDLETIME = 342,
     IGNORE_BOGUS_TS = 343,
     INVISIBLE_ON_CONNECT = 344,
     IP = 345,
     KILL = 346,
     KILL_CHASE_TIME_LIMIT = 347,
     KLINE = 348,
     KLINE_EXEMPT = 349,
     KLINE_REASON = 350,
     KLINE_WITH_REASON = 351,
     KNOCK_DELAY = 352,
     KNOCK_DELAY_CHANNEL = 353,
     LAZYLINK = 354,
     LEAF_MASK = 355,
     LINKS_DELAY = 356,
     LISTEN = 357,
     T_LOG = 358,
     LOGGING = 359,
     LOG_LEVEL = 360,
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
     RESTRICT_CHANNELS = 420,
     RESTRICTED = 421,
     RSA_PRIVATE_KEY_FILE = 422,
     RSA_PUBLIC_KEY_FILE = 423,
     SSL_CERTIFICATE_FILE = 424,
     RESV = 425,
     RESV_EXEMPT = 426,
     SECONDS = 427,
     MINUTES = 428,
     HOURS = 429,
     DAYS = 430,
     WEEKS = 431,
     SENDQ = 432,
     SEND_PASSWORD = 433,
     SERVERHIDE = 434,
     SERVERINFO = 435,
     SERVLINK_PATH = 436,
     IRCD_SID = 437,
     TKLINE_EXPIRE_NOTICES = 438,
     T_SHARED = 439,
     T_CLUSTER = 440,
     TYPE = 441,
     SHORT_MOTD = 442,
     SILENT = 443,
     SPOOF = 444,
     SPOOF_NOTICE = 445,
     STATS_I_OPER_ONLY = 446,
     STATS_K_OPER_ONLY = 447,
     STATS_O_OPER_ONLY = 448,
     STATS_P_OPER_ONLY = 449,
     TBOOL = 450,
     TMASKED = 451,
     T_REJECT = 452,
     TS_MAX_DELTA = 453,
     TS_WARN_DELTA = 454,
     TWODOTS = 455,
     T_ALL = 456,
     T_BOTS = 457,
     T_SOFTCALLERID = 458,
     T_CALLERID = 459,
     T_CCONN = 460,
     T_CLIENT_FLOOD = 461,
     T_DEAF = 462,
     T_DEBUG = 463,
     T_DRONE = 464,
     T_EXTERNAL = 465,
     T_FULL = 466,
     T_INVISIBLE = 467,
     T_IPV4 = 468,
     T_IPV6 = 469,
     T_LOCOPS = 470,
     T_LOGPATH = 471,
     T_L_CRIT = 472,
     T_L_DEBUG = 473,
     T_L_ERROR = 474,
     T_L_INFO = 475,
     T_L_NOTICE = 476,
     T_L_TRACE = 477,
     T_L_WARN = 478,
     T_MAX_CLIENTS = 479,
     T_NCHANGE = 480,
     T_OPERWALL = 481,
     T_REJ = 482,
     T_SERVNOTICE = 483,
     T_SKILL = 484,
     T_SPY = 485,
     T_SSL = 486,
     T_UNAUTH = 487,
     T_UNRESV = 488,
     T_UNXLINE = 489,
     T_WALLOP = 490,
     THROTTLE_TIME = 491,
     TOPICBURST = 492,
     TRUE_NO_OPER_FLOOD = 493,
     TKLINE = 494,
     TXLINE = 495,
     TRESV = 496,
     UNKLINE = 497,
     USER = 498,
     USE_EGD = 499,
     USE_EXCEPT = 500,
     USE_INVEX = 501,
     USE_KNOCK = 502,
     USE_LOGGING = 503,
     USE_WHOIS_ACTUALLY = 504,
     VHOST = 505,
     VHOST6 = 506,
     XLINE = 507,
     WARN = 508,
     WARN_NO_NLINE = 509
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
#define CIDR_BITLEN_IPV4 278
#define CIDR_BITLEN_IPV6 279
#define CIPHER_PREFERENCE 280
#define CLASS 281
#define COMPRESSED 282
#define COMPRESSION_LEVEL 283
#define CONNECT 284
#define CONNECTFREQ 285
#define CRYPTLINK 286
#define DEFAULT_CIPHER_PREFERENCE 287
#define DEFAULT_FLOODCOUNT 288
#define DEFAULT_SPLIT_SERVER_COUNT 289
#define DEFAULT_SPLIT_USER_COUNT 290
#define DENY 291
#define DESCRIPTION 292
#define DIE 293
#define DISABLE_AUTH 294
#define DISABLE_HIDDEN 295
#define DISABLE_LOCAL_CHANNELS 296
#define DISABLE_REMOTE_COMMANDS 297
#define DOT_IN_IP6_ADDR 298
#define DOTS_IN_IDENT 299
#define DURATION 300
#define EGDPOOL_PATH 301
#define EMAIL 302
#define ENABLE 303
#define ENCRYPTED 304
#define EXCEED_LIMIT 305
#define EXEMPT 306
#define FAILED_OPER_NOTICE 307
#define FAKENAME 308
#define IRCD_FLAGS 309
#define FLATTEN_LINKS 310
#define FFAILED_OPERLOG 311
#define FKILLLOG 312
#define FKLINELOG 313
#define FGLINELOG 314
#define FIOERRLOG 315
#define FOPERLOG 316
#define FOPERSPYLOG 317
#define FUSERLOG 318
#define GECOS 319
#define GENERAL 320
#define GLINE 321
#define GLINES 322
#define GLINE_EXEMPT 323
#define GLINE_LOG 324
#define GLINE_TIME 325
#define GLINE_MIN_CIDR 326
#define GLINE_MIN_CIDR6 327
#define GLOBAL_KILL 328
#define IRCD_AUTH 329
#define NEED_IDENT 330
#define HAVENT_READ_CONF 331
#define HIDDEN 332
#define HIDDEN_ADMIN 333
#define HIDDEN_NAME 334
#define HIDDEN_OPER 335
#define HIDE_SERVER_IPS 336
#define HIDE_SERVERS 337
#define HIDE_SPOOF_IPS 338
#define HOST 339
#define HUB 340
#define HUB_MASK 341
#define IDLETIME 342
#define IGNORE_BOGUS_TS 343
#define INVISIBLE_ON_CONNECT 344
#define IP 345
#define KILL 346
#define KILL_CHASE_TIME_LIMIT 347
#define KLINE 348
#define KLINE_EXEMPT 349
#define KLINE_REASON 350
#define KLINE_WITH_REASON 351
#define KNOCK_DELAY 352
#define KNOCK_DELAY_CHANNEL 353
#define LAZYLINK 354
#define LEAF_MASK 355
#define LINKS_DELAY 356
#define LISTEN 357
#define T_LOG 358
#define LOGGING 359
#define LOG_LEVEL 360
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
#define RESTRICT_CHANNELS 420
#define RESTRICTED 421
#define RSA_PRIVATE_KEY_FILE 422
#define RSA_PUBLIC_KEY_FILE 423
#define SSL_CERTIFICATE_FILE 424
#define RESV 425
#define RESV_EXEMPT 426
#define SECONDS 427
#define MINUTES 428
#define HOURS 429
#define DAYS 430
#define WEEKS 431
#define SENDQ 432
#define SEND_PASSWORD 433
#define SERVERHIDE 434
#define SERVERINFO 435
#define SERVLINK_PATH 436
#define IRCD_SID 437
#define TKLINE_EXPIRE_NOTICES 438
#define T_SHARED 439
#define T_CLUSTER 440
#define TYPE 441
#define SHORT_MOTD 442
#define SILENT 443
#define SPOOF 444
#define SPOOF_NOTICE 445
#define STATS_I_OPER_ONLY 446
#define STATS_K_OPER_ONLY 447
#define STATS_O_OPER_ONLY 448
#define STATS_P_OPER_ONLY 449
#define TBOOL 450
#define TMASKED 451
#define T_REJECT 452
#define TS_MAX_DELTA 453
#define TS_WARN_DELTA 454
#define TWODOTS 455
#define T_ALL 456
#define T_BOTS 457
#define T_SOFTCALLERID 458
#define T_CALLERID 459
#define T_CCONN 460
#define T_CLIENT_FLOOD 461
#define T_DEAF 462
#define T_DEBUG 463
#define T_DRONE 464
#define T_EXTERNAL 465
#define T_FULL 466
#define T_INVISIBLE 467
#define T_IPV4 468
#define T_IPV6 469
#define T_LOCOPS 470
#define T_LOGPATH 471
#define T_L_CRIT 472
#define T_L_DEBUG 473
#define T_L_ERROR 474
#define T_L_INFO 475
#define T_L_NOTICE 476
#define T_L_TRACE 477
#define T_L_WARN 478
#define T_MAX_CLIENTS 479
#define T_NCHANGE 480
#define T_OPERWALL 481
#define T_REJ 482
#define T_SERVNOTICE 483
#define T_SKILL 484
#define T_SPY 485
#define T_SSL 486
#define T_UNAUTH 487
#define T_UNRESV 488
#define T_UNXLINE 489
#define T_WALLOP 490
#define THROTTLE_TIME 491
#define TOPICBURST 492
#define TRUE_NO_OPER_FLOOD 493
#define TKLINE 494
#define TXLINE 495
#define TRESV 496
#define UNKLINE 497
#define USER 498
#define USE_EGD 499
#define USE_EXCEPT 500
#define USE_INVEX 501
#define USE_KNOCK 502
#define USE_LOGGING 503
#define USE_WHOIS_ACTUALLY 504
#define VHOST 505
#define VHOST6 506
#define XLINE 507
#define WARN 508
#define WARN_NO_NLINE 509




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
#include "sprintf_irc.h"
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
static char *yy_class_name;

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
#line 134 "ircd_parser.y"
typedef union {
  int number;
  char *string;
} yystype;
/* Line 193 of /usr/local/share/bison/yacc.c.  */
#line 695 "y.tab.c"
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
#line 716 "y.tab.c"

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
#define YYLAST   1393

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  260
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  326
/* YYNRULES -- Number of rules. */
#define YYNRULES  693
/* YYNRULES -- Number of states. */
#define YYNSTATES  1421

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   509

#define YYTRANSLATE(X) \
  ((unsigned)(X) <= YYMAXUTOK ? yytranslate[X] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned short yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   259,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   255,
       2,   258,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   257,     2,   256,     2,     2,     2,     2,
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
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254
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
     614,   616,   618,   620,   622,   625,   630,   632,   637,   642,
     647,   652,   657,   662,   667,   672,   677,   682,   687,   692,
     693,   700,   701,   707,   711,   713,   715,   717,   720,   722,
     724,   726,   728,   730,   733,   738,   742,   744,   746,   750,
     755,   760,   761,   768,   771,   773,   775,   777,   779,   781,
     783,   785,   787,   789,   791,   793,   795,   797,   799,   801,
     803,   805,   808,   813,   818,   823,   828,   833,   834,   840,
     844,   846,   849,   851,   853,   855,   857,   859,   861,   863,
     865,   867,   869,   871,   876,   881,   886,   891,   896,   901,
     906,   911,   916,   921,   922,   929,   932,   934,   936,   938,
     940,   943,   948,   953,   958,   959,   966,   969,   971,   973,
     975,   977,   980,   985,   990,   991,   997,  1001,  1003,  1005,
    1007,  1009,  1011,  1013,  1015,  1017,  1019,  1021,  1023,  1025,
    1026,  1033,  1036,  1038,  1040,  1042,  1045,  1050,  1051,  1057,
    1061,  1063,  1065,  1067,  1069,  1071,  1073,  1075,  1077,  1079,
    1081,  1083,  1085,  1086,  1094,  1095,  1097,  1100,  1102,  1104,
    1106,  1108,  1110,  1112,  1114,  1116,  1118,  1120,  1122,  1124,
    1126,  1128,  1130,  1132,  1134,  1136,  1138,  1141,  1146,  1148,
    1153,  1158,  1163,  1168,  1173,  1178,  1183,  1188,  1189,  1195,
    1199,  1201,  1204,  1206,  1208,  1210,  1212,  1214,  1216,  1218,
    1223,  1228,  1233,  1238,  1243,  1248,  1253,  1258,  1263,  1264,
    1271,  1272,  1278,  1282,  1284,  1286,  1289,  1291,  1293,  1295,
    1297,  1299,  1304,  1309,  1310,  1317,  1320,  1322,  1324,  1326,
    1328,  1333,  1338,  1344,  1347,  1349,  1351,  1353,  1358,  1359,
    1366,  1367,  1373,  1377,  1379,  1381,  1384,  1386,  1388,  1390,
    1392,  1394,  1399,  1404,  1410,  1413,  1415,  1417,  1419,  1421,
    1423,  1425,  1427,  1429,  1431,  1433,  1435,  1437,  1439,  1441,
    1443,  1445,  1447,  1449,  1451,  1453,  1455,  1457,  1459,  1461,
    1463,  1465,  1467,  1469,  1471,  1473,  1475,  1477,  1479,  1481,
    1483,  1485,  1487,  1489,  1491,  1493,  1495,  1497,  1499,  1501,
    1503,  1505,  1507,  1509,  1511,  1513,  1515,  1517,  1519,  1521,
    1523,  1525,  1530,  1535,  1540,  1545,  1550,  1555,  1560,  1565,
    1570,  1575,  1580,  1585,  1590,  1595,  1600,  1605,  1610,  1615,
    1620,  1625,  1630,  1635,  1640,  1645,  1650,  1655,  1660,  1665,
    1670,  1675,  1680,  1685,  1690,  1695,  1700,  1705,  1710,  1715,
    1720,  1725,  1730,  1735,  1740,  1745,  1750,  1755,  1760,  1765,
    1770,  1771,  1777,  1781,  1783,  1785,  1787,  1789,  1791,  1793,
    1795,  1797,  1799,  1801,  1803,  1805,  1807,  1809,  1811,  1813,
    1815,  1817,  1819,  1820,  1826,  1830,  1832,  1834,  1836,  1838,
    1840,  1842,  1844,  1846,  1848,  1850,  1852,  1854,  1856,  1858,
    1860,  1862,  1864,  1866,  1868,  1873,  1878,  1883,  1888,  1893,
    1894,  1901,  1904,  1906,  1908,  1910,  1912,  1914,  1916,  1918,
    1920,  1925,  1930,  1931,  1937,  1941,  1943,  1945,  1947,  1952,
    1957,  1958,  1964,  1968,  1970,  1972,  1974,  1980,  1983,  1985,
    1987,  1989,  1991,  1993,  1995,  1997,  1999,  2001,  2003,  2005,
    2007,  2009,  2011,  2013,  2015,  2017,  2019,  2021,  2023,  2028,
    2033,  2038,  2043,  2048,  2053,  2058,  2063,  2068,  2073,  2078,
    2083,  2088,  2093,  2098,  2103,  2108,  2113,  2119,  2122,  2124,
    2126,  2128,  2130,  2132,  2134,  2136,  2138,  2140,  2145,  2150,
    2155,  2160,  2165,  2170
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     261,     0,    -1,    -1,   261,   262,    -1,   286,    -1,   292,
      -1,   307,    -1,   555,    -1,   336,    -1,   355,    -1,   368,
      -1,   272,    -1,   576,    -1,   392,    -1,   399,    -1,   409,
      -1,   418,    -1,   446,    -1,   456,    -1,   462,    -1,   476,
      -1,   539,    -1,   466,    -1,   267,    -1,     1,   255,    -1,
       1,   256,    -1,    -1,   264,    -1,   132,   263,    -1,   132,
     172,   263,    -1,   132,   173,   263,    -1,   132,   174,   263,
      -1,   132,   175,   263,    -1,   132,   176,   263,    -1,    -1,
     266,    -1,   132,   265,    -1,   132,    14,   265,    -1,   132,
      15,   265,    -1,   132,    16,   265,    -1,   120,   257,   268,
     256,   255,    -1,   268,   269,    -1,   269,    -1,   270,    -1,
     271,    -1,     1,   255,    -1,   119,   258,   155,   255,    -1,
     150,   258,   155,   255,    -1,   180,   257,   273,   256,   255,
      -1,   273,   274,    -1,   274,    -1,   277,    -1,   282,    -1,
     285,    -1,   279,    -1,   280,    -1,   281,    -1,   284,    -1,
     276,    -1,   283,    -1,   278,    -1,   275,    -1,     1,   255,
      -1,   169,   258,   155,   255,    -1,   167,   258,   155,   255,
      -1,   121,   258,   155,   255,    -1,   182,   258,   155,   255,
      -1,    37,   258,   155,   255,    -1,   124,   258,   155,   255,
      -1,   123,   258,   155,   255,    -1,   250,   258,   155,   255,
      -1,   251,   258,   155,   255,    -1,   224,   258,   132,   255,
      -1,    85,   258,   195,   255,    -1,     5,   257,   287,   256,
     255,    -1,   287,   288,    -1,   288,    -1,   289,    -1,   291,
      -1,   290,    -1,     1,   255,    -1,   121,   258,   155,   255,
      -1,    47,   258,   155,   255,    -1,    37,   258,   155,   255,
      -1,   104,   257,   293,   256,   255,    -1,   293,   294,    -1,
     294,    -1,   295,    -1,   296,    -1,   305,    -1,   306,    -1,
     297,    -1,   299,    -1,   301,    -1,   302,    -1,   304,    -1,
     300,    -1,   303,    -1,   298,    -1,     1,   255,    -1,   216,
     258,   155,   255,    -1,   139,   258,   155,   255,    -1,    63,
     258,   155,   255,    -1,    56,   258,   155,   255,    -1,    61,
     258,   155,   255,    -1,    62,   258,   155,   255,    -1,    59,
     258,   155,   255,    -1,    58,   258,   155,   255,    -1,    60,
     258,   155,   255,    -1,    57,   258,   155,   255,    -1,   105,
     258,   217,   255,    -1,   105,   258,   219,   255,    -1,   105,
     258,   223,   255,    -1,   105,   258,   221,   255,    -1,   105,
     258,   222,   255,    -1,   105,   258,   220,   255,    -1,   105,
     258,   218,   255,    -1,   248,   258,   195,   255,    -1,    -1,
     137,   308,   309,   257,   310,   256,   255,    -1,    -1,   313,
      -1,   310,   311,    -1,   311,    -1,   312,    -1,   314,    -1,
     315,    -1,   317,    -1,   319,    -1,   320,    -1,   321,    -1,
     323,    -1,   324,    -1,   325,    -1,   326,    -1,   327,    -1,
     322,    -1,   328,    -1,   329,    -1,   330,    -1,   316,    -1,
     318,    -1,   331,    -1,     1,   255,    -1,   121,   258,   155,
     255,    -1,   155,    -1,   243,   258,   155,   255,    -1,   149,
     258,   155,   255,    -1,    49,   258,   195,   255,    -1,    78,
     258,   195,   255,    -1,   168,   258,   155,   255,    -1,    26,
     258,   155,   255,    -1,    73,   258,   195,   255,    -1,   163,
     258,   195,   255,    -1,   164,   258,   195,   255,    -1,    93,
     258,   195,   255,    -1,   252,   258,   195,   255,    -1,   242,
     258,   195,   255,    -1,    66,   258,   195,   255,    -1,   126,
     258,   195,   255,    -1,    38,   258,   195,   255,    -1,   161,
     258,   195,   255,    -1,     5,   258,   195,   255,    -1,    -1,
      54,   332,   258,   333,   255,    -1,   333,   259,   334,    -1,
     334,    -1,   131,   335,    -1,   335,    -1,    73,    -1,   163,
      -1,    93,    -1,   242,    -1,   252,    -1,    66,    -1,    38,
      -1,   161,    -1,     5,    -1,    78,    -1,   126,    -1,   226,
      -1,   142,    -1,    80,    -1,   164,    -1,    49,    -1,    -1,
      26,   337,   338,   257,   339,   256,   255,    -1,    -1,   342,
      -1,   339,   340,    -1,   340,    -1,   341,    -1,   352,    -1,
     353,    -1,   343,    -1,   344,    -1,   354,    -1,   345,    -1,
     346,    -1,   347,    -1,   348,    -1,   349,    -1,   350,    -1,
     351,    -1,     1,   255,    -1,   121,   258,   155,   255,    -1,
     155,    -1,   152,   258,   264,   255,    -1,   153,   258,   264,
     255,    -1,   135,   258,   132,   255,    -1,    30,   258,   264,
     255,    -1,   114,   258,   132,   255,    -1,   109,   258,   132,
     255,    -1,   111,   258,   132,   255,    -1,   110,   258,   132,
     255,    -1,   177,   258,   266,   255,    -1,    23,   258,   132,
     255,    -1,    24,   258,   132,   255,    -1,   134,   258,   132,
     255,    -1,    -1,   102,   356,   257,   361,   256,   255,    -1,
      -1,    54,   358,   258,   359,   255,    -1,   359,   259,   360,
      -1,   360,    -1,   231,    -1,    77,    -1,   361,   362,    -1,
     362,    -1,   363,    -1,   357,    -1,   366,    -1,   367,    -1,
       1,   255,    -1,   154,   258,   364,   255,    -1,   364,   259,
     365,    -1,   365,    -1,   132,    -1,   132,   200,   132,    -1,
      90,   258,   155,   255,    -1,    84,   258,   155,   255,    -1,
      -1,    74,   369,   257,   370,   256,   255,    -1,   370,   371,
      -1,   371,    -1,   372,    -1,   373,    -1,   375,    -1,   377,
      -1,   382,    -1,   383,    -1,   384,    -1,   386,    -1,   387,
      -1,   388,    -1,   374,    -1,   389,    -1,   390,    -1,   385,
      -1,   391,    -1,   376,    -1,     1,   255,    -1,   243,   258,
     155,   255,    -1,   149,   258,   155,   255,    -1,   190,   258,
     195,   255,    -1,    26,   258,   155,   255,    -1,    49,   258,
     195,   255,    -1,    -1,    54,   378,   258,   379,   255,    -1,
     379,   259,   380,    -1,   380,    -1,   131,   381,    -1,   381,
      -1,   190,    -1,    50,    -1,    94,    -1,    75,    -1,    20,
      -1,    21,    -1,   130,    -1,    68,    -1,   171,    -1,   122,
      -1,    94,   258,   195,   255,    -1,    75,   258,   195,   255,
      -1,    50,   258,   195,   255,    -1,    20,   258,   195,   255,
      -1,   130,   258,   195,   255,    -1,    68,   258,   195,   255,
      -1,   189,   258,   155,   255,    -1,   159,   258,   155,   255,
      -1,   158,   258,   132,   255,    -1,   122,   258,   195,   255,
      -1,    -1,   170,   393,   257,   394,   256,   255,    -1,   394,
     395,    -1,   395,    -1,   396,    -1,   397,    -1,   398,    -1,
       1,   255,    -1,   157,   258,   155,   255,    -1,    22,   258,
     155,   255,    -1,   125,   258,   155,   255,    -1,    -1,   184,
     400,   257,   401,   256,   255,    -1,   401,   402,    -1,   402,
      -1,   403,    -1,   404,    -1,   405,    -1,     1,   255,    -1,
     121,   258,   155,   255,    -1,   243,   258,   155,   255,    -1,
      -1,   186,   406,   258,   407,   255,    -1,   407,   259,   408,
      -1,   408,    -1,    93,    -1,   239,    -1,   242,    -1,   252,
      -1,   240,    -1,   234,    -1,   170,    -1,   241,    -1,   233,
      -1,   215,    -1,   201,    -1,    -1,   185,   410,   257,   411,
     256,   255,    -1,   411,   412,    -1,   412,    -1,   413,    -1,
     414,    -1,     1,   255,    -1,   121,   258,   155,   255,    -1,
      -1,   186,   415,   258,   416,   255,    -1,   416,   259,   417,
      -1,   417,    -1,    93,    -1,   239,    -1,   242,    -1,   252,
      -1,   240,    -1,   234,    -1,   170,    -1,   241,    -1,   233,
      -1,   215,    -1,   201,    -1,    -1,    29,   419,   420,   257,
     421,   256,   255,    -1,    -1,   424,    -1,   421,   422,    -1,
     422,    -1,   423,    -1,   425,    -1,   426,    -1,   427,    -1,
     428,    -1,   430,    -1,   429,    -1,   431,    -1,   432,    -1,
     442,    -1,   443,    -1,   444,    -1,   441,    -1,   438,    -1,
     440,    -1,   439,    -1,   437,    -1,   445,    -1,     1,   255,
      -1,   121,   258,   155,   255,    -1,   155,    -1,    84,   258,
     155,   255,    -1,   250,   258,   155,   255,    -1,   178,   258,
     155,   255,    -1,     3,   258,   155,   255,    -1,   154,   258,
     132,   255,    -1,     6,   258,   213,   255,    -1,     6,   258,
     214,   255,    -1,    53,   258,   155,   255,    -1,    -1,    54,
     433,   258,   434,   255,    -1,   434,   259,   435,    -1,   435,
      -1,   131,   436,    -1,   436,    -1,    99,    -1,    27,    -1,
      31,    -1,    10,    -1,    12,    -1,   237,    -1,   168,   258,
     155,   255,    -1,    49,   258,   195,   255,    -1,    31,   258,
     195,   255,    -1,    27,   258,   195,   255,    -1,    10,   258,
     195,   255,    -1,    86,   258,   155,   255,    -1,   100,   258,
     155,   255,    -1,    26,   258,   155,   255,    -1,    25,   258,
     155,   255,    -1,    -1,    91,   447,   257,   452,   256,   255,
      -1,    -1,   186,   449,   258,   450,   255,    -1,   450,   259,
     451,    -1,   451,    -1,   160,    -1,   452,   453,    -1,   453,
      -1,   454,    -1,   455,    -1,   448,    -1,     1,    -1,   243,
     258,   155,   255,    -1,   157,   258,   155,   255,    -1,    -1,
      36,   457,   257,   458,   256,   255,    -1,   458,   459,    -1,
     459,    -1,   460,    -1,   461,    -1,     1,    -1,    90,   258,
     155,   255,    -1,   157,   258,   155,   255,    -1,    51,   257,
     463,   256,   255,    -1,   463,   464,    -1,   464,    -1,   465,
      -1,     1,    -1,    90,   258,   155,   255,    -1,    -1,    64,
     467,   257,   472,   256,   255,    -1,    -1,   186,   469,   258,
     470,   255,    -1,   470,   259,   471,    -1,   471,    -1,   160,
      -1,   472,   473,    -1,   473,    -1,   474,    -1,   475,    -1,
     468,    -1,     1,    -1,   121,   258,   155,   255,    -1,   157,
     258,   155,   255,    -1,    65,   257,   477,   256,   255,    -1,
     477,   478,    -1,   478,    -1,   486,    -1,   487,    -1,   489,
      -1,   490,    -1,   491,    -1,   492,    -1,   493,    -1,   494,
      -1,   495,    -1,   496,    -1,   485,    -1,   498,    -1,   499,
      -1,   500,    -1,   501,    -1,   516,    -1,   502,    -1,   504,
      -1,   506,    -1,   505,    -1,   509,    -1,   503,    -1,   510,
      -1,   511,    -1,   512,    -1,   513,    -1,   515,    -1,   514,
      -1,   530,    -1,   517,    -1,   521,    -1,   522,    -1,   526,
      -1,   507,    -1,   508,    -1,   536,    -1,   534,    -1,   535,
      -1,   518,    -1,   488,    -1,   519,    -1,   520,    -1,   537,
      -1,   525,    -1,   497,    -1,   538,    -1,   523,    -1,   524,
      -1,   481,    -1,   484,    -1,   479,    -1,   480,    -1,   482,
      -1,   483,    -1,     1,    -1,    71,   258,   132,   255,    -1,
      72,   258,   132,   255,    -1,    12,   258,   195,   255,    -1,
     249,   258,   195,   255,    -1,   162,   258,   264,   255,    -1,
     183,   258,   195,   255,    -1,    92,   258,   132,   255,    -1,
      83,   258,   195,   255,    -1,    88,   258,   195,   255,    -1,
      42,   258,   195,   255,    -1,    52,   258,   195,   255,    -1,
       8,   258,   195,   255,    -1,   113,   258,   264,   255,    -1,
     112,   258,   132,   255,    -1,   106,   258,   132,   255,    -1,
       9,   258,   264,   255,    -1,   199,   258,   264,   255,    -1,
     198,   258,   264,   255,    -1,    76,   258,   132,   255,    -1,
      96,   258,   195,   255,    -1,    95,   258,   155,   255,    -1,
      89,   258,   195,   255,    -1,   254,   258,   195,   255,    -1,
     193,   258,   195,   255,    -1,   194,   258,   195,   255,    -1,
     192,   258,   195,   255,    -1,   192,   258,   196,   255,    -1,
     191,   258,   195,   255,    -1,   191,   258,   196,   255,    -1,
     147,   258,   264,   255,    -1,    19,   258,   264,   255,    -1,
     138,   258,   195,   255,    -1,   148,   258,   264,   255,    -1,
     187,   258,   195,   255,    -1,   129,   258,   195,   255,    -1,
     238,   258,   195,   255,    -1,   141,   258,   195,   255,    -1,
     116,   258,   155,   255,    -1,    87,   258,   264,   255,    -1,
      44,   258,   132,   255,    -1,   115,   258,   132,   255,    -1,
     181,   258,   155,   255,    -1,    32,   258,   155,   255,    -1,
      28,   258,   132,   255,    -1,   244,   258,   195,   255,    -1,
      46,   258,   155,   255,    -1,   151,   258,   195,   255,    -1,
      39,   258,   195,   255,    -1,   236,   258,   264,   255,    -1,
      -1,   143,   527,   258,   528,   255,    -1,   528,   259,   529,
      -1,   529,    -1,   202,    -1,   205,    -1,   207,    -1,   208,
      -1,   211,    -1,   229,    -1,   225,    -1,   227,    -1,   232,
      -1,   230,    -1,   210,    -1,   226,    -1,   228,    -1,   212,
      -1,   235,    -1,   203,    -1,   204,    -1,   215,    -1,    -1,
     140,   531,   258,   532,   255,    -1,   532,   259,   533,    -1,
     533,    -1,   202,    -1,   205,    -1,   207,    -1,   208,    -1,
     211,    -1,   229,    -1,   225,    -1,   227,    -1,   232,    -1,
     230,    -1,   210,    -1,   226,    -1,   228,    -1,   212,    -1,
     235,    -1,   203,    -1,   204,    -1,   215,    -1,   117,   258,
     132,   255,    -1,   118,   258,   132,   255,    -1,    33,   258,
     132,   255,    -1,   206,   258,   266,   255,    -1,    43,   258,
     195,   255,    -1,    -1,    67,   540,   257,   541,   256,   255,
      -1,   541,   542,    -1,   542,    -1,   543,    -1,   544,    -1,
     545,    -1,   549,    -1,   550,    -1,   551,    -1,     1,    -1,
      48,   258,   195,   255,    -1,    45,   258,   264,   255,    -1,
      -1,   104,   546,   258,   547,   255,    -1,   547,   259,   548,
      -1,   548,    -1,   197,    -1,    11,    -1,   243,   258,   155,
     255,    -1,   121,   258,   155,   255,    -1,    -1,     4,   552,
     258,   553,   255,    -1,   553,   259,   554,    -1,   554,    -1,
     197,    -1,    11,    -1,    22,   257,   556,   256,   255,    -1,
     556,   557,    -1,   557,    -1,   559,    -1,   560,    -1,   561,
      -1,   562,    -1,   568,    -1,   563,    -1,   564,    -1,   565,
      -1,   566,    -1,   567,    -1,   569,    -1,   570,    -1,   571,
      -1,   558,    -1,   572,    -1,   573,    -1,   574,    -1,   575,
      -1,     1,    -1,   165,   258,   195,   255,    -1,    41,   258,
     195,   255,    -1,   245,   258,   195,   255,    -1,   246,   258,
     195,   255,    -1,   247,   258,   195,   255,    -1,    97,   258,
     264,   255,    -1,    98,   258,   264,   255,    -1,   144,   258,
     195,   255,    -1,   108,   258,   132,   255,    -1,   156,   258,
     195,   255,    -1,   107,   258,   132,   255,    -1,    35,   258,
     132,   255,    -1,    34,   258,   132,   255,    -1,   127,   258,
     195,   255,    -1,   128,   258,   195,   255,    -1,    13,   258,
     195,   255,    -1,   145,   258,   132,   255,    -1,   146,   258,
     264,   255,    -1,   179,   257,   577,   256,   255,    -1,   577,
     578,    -1,   578,    -1,   579,    -1,   580,    -1,   582,    -1,
     584,    -1,   583,    -1,   581,    -1,   585,    -1,     1,    -1,
      55,   258,   195,   255,    -1,    82,   258,   195,   255,    -1,
      79,   258,   155,   255,    -1,   101,   258,   264,   255,    -1,
      77,   258,   195,   255,    -1,    40,   258,   195,   255,    -1,
      81,   258,   195,   255,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   392,   392,   393,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   421,   421,   422,   426,
     430,   434,   438,   442,   448,   448,   449,   450,   451,   452,
     459,   462,   462,   463,   463,   463,   465,   482,   493,   496,
     496,   498,   498,   498,   499,   499,   500,   500,   501,   502,
     502,   503,   503,   506,   540,   600,   614,   632,   641,   655,
     664,   692,   722,   745,   795,   797,   797,   798,   798,   798,
     799,   801,   810,   819,   832,   834,   834,   837,   837,   837,
     838,   839,   839,   840,   840,   841,   841,   842,   842,   843,
     846,   850,   854,   861,   868,   875,   882,   889,   896,   903,
     910,   914,   918,   922,   926,   930,   934,   940,   950,   949,
    1043,  1043,  1044,  1044,  1045,  1045,  1045,  1045,  1045,  1046,
    1046,  1046,  1047,  1047,  1047,  1048,  1048,  1048,  1049,  1049,
    1049,  1050,  1050,  1051,  1053,  1065,  1077,  1096,  1108,  1119,
    1130,  1172,  1181,  1192,  1203,  1214,  1225,  1236,  1247,  1258,
    1269,  1280,  1291,  1303,  1302,  1306,  1306,  1307,  1308,  1310,
    1317,  1324,  1331,  1338,  1345,  1352,  1359,  1366,  1373,  1380,
    1387,  1394,  1401,  1408,  1415,  1429,  1428,  1470,  1470,  1472,
    1472,  1473,  1473,  1474,  1474,  1475,  1476,  1477,  1478,  1479,
    1480,  1481,  1482,  1483,  1484,  1487,  1496,  1505,  1511,  1517,
    1523,  1529,  1535,  1541,  1547,  1553,  1559,  1565,  1571,  1581,
    1580,  1597,  1596,  1600,  1600,  1601,  1605,  1611,  1611,  1612,
    1612,  1612,  1612,  1612,  1614,  1616,  1616,  1618,  1633,  1655,
    1664,  1677,  1676,  1745,  1745,  1746,  1746,  1746,  1746,  1746,
    1747,  1747,  1748,  1748,  1748,  1749,  1749,  1750,  1750,  1750,
    1751,  1751,  1753,  1772,  1785,  1796,  1805,  1817,  1816,  1820,
    1820,  1821,  1822,  1824,  1832,  1839,  1846,  1853,  1860,  1867,
    1874,  1881,  1888,  1897,  1908,  1919,  1930,  1941,  1952,  1964,
    1983,  1993,  2002,  2018,  2017,  2033,  2033,  2034,  2034,  2034,
    2034,  2036,  2045,  2060,  2074,  2073,  2089,  2089,  2090,  2090,
    2090,  2090,  2092,  2101,  2110,  2109,  2115,  2115,  2116,  2120,
    2124,  2128,  2132,  2136,  2140,  2144,  2148,  2152,  2156,  2166,
    2165,  2182,  2182,  2183,  2183,  2183,  2185,  2192,  2191,  2197,
    2197,  2198,  2202,  2206,  2210,  2214,  2218,  2222,  2226,  2230,
    2234,  2238,  2248,  2247,  2397,  2397,  2398,  2398,  2399,  2399,
    2399,  2399,  2400,  2400,  2401,  2401,  2402,  2402,  2402,  2403,
    2403,  2403,  2404,  2404,  2404,  2405,  2405,  2408,  2420,  2432,
    2441,  2467,  2479,  2491,  2497,  2501,  2509,  2519,  2518,  2522,
    2522,  2523,  2524,  2526,  2533,  2544,  2551,  2558,  2565,  2575,
    2616,  2627,  2638,  2653,  2664,  2677,  2690,  2699,  2735,  2734,
    2796,  2795,  2799,  2799,  2800,  2806,  2806,  2807,  2807,  2807,
    2807,  2809,  2825,  2835,  2834,  2856,  2856,  2857,  2857,  2857,
    2859,  2868,  2880,  2882,  2882,  2883,  2883,  2885,  2907,  2906,
    2948,  2947,  2951,  2951,  2952,  2958,  2958,  2959,  2959,  2959,
    2959,  2961,  2967,  2976,  2979,  2979,  2980,  2980,  2980,  2981,
    2981,  2982,  2982,  2983,  2983,  2984,  2984,  2985,  2985,  2986,
    2986,  2987,  2987,  2988,  2988,  2989,  2989,  2990,  2990,  2991,
    2991,  2992,  2992,  2993,  2993,  2994,  2994,  2995,  2995,  2996,
    2996,  2997,  2997,  2998,  2998,  2999,  2999,  3000,  3001,  3001,
    3002,  3002,  3003,  3003,  3004,  3004,  3005,  3005,  3006,  3006,
    3007,  3012,  3017,  3022,  3027,  3032,  3037,  3042,  3047,  3052,
    3057,  3062,  3067,  3072,  3077,  3082,  3087,  3092,  3097,  3103,
    3114,  3119,  3128,  3133,  3138,  3143,  3148,  3151,  3156,  3159,
    3164,  3169,  3174,  3179,  3184,  3189,  3194,  3199,  3204,  3215,
    3220,  3225,  3230,  3239,  3271,  3289,  3294,  3303,  3308,  3313,
    3319,  3318,  3323,  3323,  3324,  3327,  3330,  3333,  3336,  3339,
    3342,  3345,  3348,  3351,  3354,  3357,  3360,  3363,  3366,  3369,
    3372,  3375,  3381,  3380,  3385,  3385,  3386,  3389,  3392,  3395,
    3398,  3401,  3404,  3407,  3410,  3413,  3416,  3419,  3422,  3425,
    3428,  3431,  3434,  3437,  3442,  3447,  3452,  3457,  3462,  3471,
    3470,  3496,  3496,  3497,  3497,  3498,  3499,  3500,  3501,  3502,
    3505,  3511,  3518,  3517,  3522,  3522,  3523,  3527,  3533,  3552,
    3562,  3561,  3604,  3604,  3605,  3609,  3618,  3621,  3621,  3622,
    3622,  3622,  3623,  3623,  3624,  3624,  3625,  3625,  3626,  3626,
    3627,  3628,  3629,  3629,  3630,  3630,  3631,  3631,  3634,  3639,
    3644,  3649,  3654,  3659,  3664,  3669,  3674,  3679,  3684,  3689,
    3694,  3699,  3704,  3709,  3714,  3719,  3727,  3730,  3730,  3731,
    3731,  3731,  3732,  3733,  3734,  3734,  3735,  3738,  3744,  3750,
    3759,  3773,  3779,  3785
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
  "CAN_IDLE", "CHANNEL", "CIDR_BITLEN_IPV4", "CIDR_BITLEN_IPV6", 
  "CIPHER_PREFERENCE", "CLASS", "COMPRESSED", "COMPRESSION_LEVEL", 
  "CONNECT", "CONNECTFREQ", "CRYPTLINK", "DEFAULT_CIPHER_PREFERENCE", 
  "DEFAULT_FLOODCOUNT", "DEFAULT_SPLIT_SERVER_COUNT", 
  "DEFAULT_SPLIT_USER_COUNT", "DENY", "DESCRIPTION", "DIE", 
  "DISABLE_AUTH", "DISABLE_HIDDEN", "DISABLE_LOCAL_CHANNELS", 
  "DISABLE_REMOTE_COMMANDS", "DOT_IN_IP6_ADDR", "DOTS_IN_IDENT", 
  "DURATION", "EGDPOOL_PATH", "EMAIL", "ENABLE", "ENCRYPTED", 
  "EXCEED_LIMIT", "EXEMPT", "FAILED_OPER_NOTICE", "FAKENAME", 
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
  "REMOTE", "REMOTEBAN", "RESTRICT_CHANNELS", "RESTRICTED", 
  "RSA_PRIVATE_KEY_FILE", "RSA_PUBLIC_KEY_FILE", "SSL_CERTIFICATE_FILE", 
  "RESV", "RESV_EXEMPT", "SECONDS", "MINUTES", "HOURS", "DAYS", "WEEKS", 
  "SENDQ", "SEND_PASSWORD", "SERVERHIDE", "SERVERINFO", "SERVLINK_PATH", 
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
  "class_cidr_bitlen_ipv4", "class_cidr_bitlen_ipv6", 
  "class_number_per_cidr", "listen_entry", "@4", "listen_flags", "@5", 
  "listen_flags_items", "listen_flags_item", "listen_items", 
  "listen_item", "listen_port", "port_items", "port_item", 
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
  "general_reject_hold_time", "general_tkline_expire_notices", 
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
  "channel_items", "channel_item", "channel_restrict_channels", 
  "channel_disable_local_channels", "channel_use_except", 
  "channel_use_invex", "channel_use_knock", "channel_knock_delay", 
  "channel_knock_delay_channel", "channel_invite_ops_only", 
  "channel_max_chans_per_user", "channel_quiet_on_ban", 
  "channel_max_bans", "channel_default_split_user_count", 
  "channel_default_split_server_count", "channel_no_create_on_split", 
  "channel_no_join_on_split", "channel_burst_topicwho", 
  "channel_jflood_count", "channel_jflood_time", "serverhide_entry", 
  "serverhide_items", "serverhide_item", "serverhide_flatten_links", 
  "serverhide_hide_servers", "serverhide_hidden_name", 
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
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,    59,   125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   260,   261,   261,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   263,   263,   264,   264,
     264,   264,   264,   264,   265,   265,   266,   266,   266,   266,
     267,   268,   268,   269,   269,   269,   270,   271,   272,   273,
     273,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   287,   288,   288,   288,
     288,   289,   290,   291,   292,   293,   293,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   305,   305,   305,   305,   305,   305,   306,   308,   307,
     309,   309,   310,   310,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   332,   331,   333,   333,   334,   334,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   337,   336,   338,   338,   339,
     339,   340,   340,   340,   340,   340,   340,   340,   340,   340,
     340,   340,   340,   340,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   356,
     355,   358,   357,   359,   359,   360,   360,   361,   361,   362,
     362,   362,   362,   362,   363,   364,   364,   365,   365,   366,
     367,   369,   368,   370,   370,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   372,   373,   374,   375,   376,   378,   377,   379,
     379,   380,   380,   381,   381,   381,   381,   381,   381,   381,
     381,   381,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   393,   392,   394,   394,   395,   395,   395,
     395,   396,   397,   398,   400,   399,   401,   401,   402,   402,
     402,   402,   403,   404,   406,   405,   407,   407,   408,   408,
     408,   408,   408,   408,   408,   408,   408,   408,   408,   410,
     409,   411,   411,   412,   412,   412,   413,   415,   414,   416,
     416,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   419,   418,   420,   420,   421,   421,   422,   422,
     422,   422,   422,   422,   422,   422,   422,   422,   422,   422,
     422,   422,   422,   422,   422,   422,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   430,   431,   433,   432,   434,
     434,   435,   435,   436,   436,   436,   436,   436,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   447,   446,
     449,   448,   450,   450,   451,   452,   452,   453,   453,   453,
     453,   454,   455,   457,   456,   458,   458,   459,   459,   459,
     460,   461,   462,   463,   463,   464,   464,   465,   467,   466,
     469,   468,   470,   470,   471,   472,   472,   473,   473,   473,
     473,   474,   475,   476,   477,   477,   478,   478,   478,   478,
     478,   478,   478,   478,   478,   478,   478,   478,   478,   478,
     478,   478,   478,   478,   478,   478,   478,   478,   478,   478,
     478,   478,   478,   478,   478,   478,   478,   478,   478,   478,
     478,   478,   478,   478,   478,   478,   478,   478,   478,   478,
     478,   478,   478,   478,   478,   478,   478,   478,   478,   478,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   504,   505,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     527,   526,   528,   528,   529,   529,   529,   529,   529,   529,
     529,   529,   529,   529,   529,   529,   529,   529,   529,   529,
     529,   529,   531,   530,   532,   532,   533,   533,   533,   533,
     533,   533,   533,   533,   533,   533,   533,   533,   533,   533,
     533,   533,   533,   533,   534,   535,   536,   537,   538,   540,
     539,   541,   541,   542,   542,   542,   542,   542,   542,   542,
     543,   544,   546,   545,   547,   547,   548,   548,   549,   550,
     552,   551,   553,   553,   554,   554,   555,   556,   556,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   558,   559,
     560,   561,   562,   563,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   577,   578,
     578,   578,   578,   578,   578,   578,   578,   579,   580,   581,
     582,   583,   584,   585
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
       1,     1,     1,     1,     2,     4,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     0,
       6,     0,     5,     3,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     2,     4,     3,     1,     1,     3,     4,
       4,     0,     6,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     4,     4,     4,     4,     0,     5,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     0,     6,     2,     1,     1,     1,     1,
       2,     4,     4,     4,     0,     6,     2,     1,     1,     1,
       1,     2,     4,     4,     0,     5,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       6,     2,     1,     1,     1,     2,     4,     0,     5,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     7,     0,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     0,     5,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     0,     6,
       0,     5,     3,     1,     1,     2,     1,     1,     1,     1,
       1,     4,     4,     0,     6,     2,     1,     1,     1,     1,
       4,     4,     5,     2,     1,     1,     1,     4,     0,     6,
       0,     5,     3,     1,     1,     2,     1,     1,     1,     1,
       1,     4,     4,     5,     2,     1,     1,     1,     1,     1,
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
       0,     5,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     5,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     4,     0,
       6,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     0,     5,     3,     1,     1,     1,     4,     4,
       0,     5,     3,     1,     1,     1,     5,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     5,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       2,     0,     1,     0,     0,     0,   185,   352,   423,     0,
     438,     0,   609,   241,   408,   219,     0,     0,   118,   293,
       0,     0,   304,   329,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,   187,
     354,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   120,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    79,    78,   657,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   638,   652,   639,   640,
     641,   642,   644,   645,   646,   647,   648,   643,   649,   650,
     651,   653,   654,   655,   656,   206,     0,   188,   378,     0,
     355,     0,   436,     0,     0,   434,   435,     0,   510,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   582,     0,   560,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   455,   506,   507,   504,   508,   509,
     505,   466,   456,   457,   495,   458,   459,   460,   461,   462,
     463,   464,   465,   500,   467,   468,   469,   470,   472,   477,
     473,   475,   474,   489,   490,   476,   478,   479,   480,   481,
     483,   482,   471,   485,   494,   496,   497,   486,   487,   502,
     503,   499,   488,   484,   492,   493,   491,   498,   501,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,    88,
      91,    98,    92,    96,    93,    94,    97,    95,    89,    90,
       0,     0,     0,     0,    42,    43,    44,   145,     0,   121,
       0,   686,     0,     0,     0,     0,     0,     0,     0,     0,
     678,   679,   680,   684,   681,   683,   682,   685,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,    61,    58,    51,    60,    54,    55,    56,    52,
      59,    57,    53,     0,     0,    80,     0,     0,     0,     0,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     637,     0,     0,   429,     0,     0,     0,   426,   427,   428,
       0,     0,   433,   450,     0,     0,   440,   449,     0,   446,
     447,   448,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   454,   619,   630,
       0,     0,   622,     0,     0,     0,   612,   613,   614,   615,
     616,   617,   618,     0,     0,     0,     0,     0,   267,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   244,   245,   246,   255,   247,   260,   248,   249,   250,
     251,   258,   252,   253,   254,   256,   257,   259,   420,     0,
     410,     0,   419,     0,   416,   417,   418,     0,   221,     0,
       0,     0,   230,     0,   228,   229,   231,   232,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,    45,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,   296,   297,   298,   299,     0,     0,
       0,     0,     0,     0,     0,     0,   677,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,   314,     0,     0,   307,   308,   309,   310,
       0,     0,   337,     0,   332,   333,   334,     0,     0,     0,
      74,     0,     0,     0,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     636,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   190,   191,   194,   195,
     197,   198,   199,   200,   201,   202,   203,   192,   193,   196,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     387,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     357,   358,   359,   360,   361,   362,   364,   363,   365,   366,
     374,   371,   373,   372,   370,   367,   368,   369,   375,     0,
       0,     0,   425,     0,   432,     0,     0,     0,     0,   445,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,   453,     0,     0,
       0,     0,     0,     0,     0,   611,   261,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   243,     0,     0,     0,     0,   415,
     233,     0,     0,     0,     0,     0,   227,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     0,     0,    40,     0,
       0,     0,     0,     0,   163,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     123,   124,   125,   126,   140,   127,   141,   128,   129,   130,
     136,   131,   132,   133,   134,   135,   137,   138,   139,   142,
     300,     0,     0,     0,     0,   295,     0,     0,     0,     0,
       0,     0,     0,   676,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,   311,     0,     0,     0,
       0,   306,   335,     0,     0,     0,   331,    83,    82,    81,
     673,   670,   669,   659,    26,    26,    26,    26,    26,    28,
      27,   663,   664,   668,   666,   671,   672,   665,   674,   675,
     667,   658,   660,   661,   662,   204,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     189,   376,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   356,     0,     0,   424,   437,     0,     0,     0,   439,
     522,   526,   513,   541,   554,   553,   606,   558,   520,   608,
     550,   556,   521,   511,   512,   529,   518,   549,   519,   532,
     517,   531,   530,   525,   524,   523,   551,   548,   604,   605,
     545,   542,   586,   601,   602,   587,   588,   589,   596,   590,
     599,   603,   592,   597,   593,   598,   591,   595,   594,   600,
       0,   585,   547,   564,   579,   580,   565,   566,   567,   574,
     568,   577,   581,   570,   575,   571,   576,   569,   573,   572,
     578,     0,   563,   540,   543,   557,   515,   552,   516,   544,
     538,   539,   536,   537,   534,   535,   528,   527,    34,    34,
      34,    36,    35,   607,   559,   546,   555,   514,   533,     0,
       0,     0,     0,     0,     0,   610,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   242,     0,     0,     0,   409,     0,     0,     0,
     237,     0,   236,   220,   103,   109,   107,   106,   108,   104,
     105,   102,   110,   116,   111,   115,   113,   114,   112,   101,
     100,   117,    46,    47,   143,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,     0,   294,
     692,   687,   691,   689,   693,   688,   690,    67,    73,    65,
      69,    68,    64,    63,    66,    72,    70,    71,     0,     0,
       0,   305,     0,     0,   330,    29,    30,    31,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   186,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   353,   430,   431,   451,   452,   444,     0,
     443,   583,     0,   561,     0,    37,    38,    39,   635,   634,
       0,   633,   621,   620,   627,   626,     0,   625,   629,   628,
     286,   265,   266,   285,   277,   278,   274,   280,   276,   275,
     282,   279,     0,   281,   273,     0,   270,   272,   288,   284,
     283,   292,   287,   263,   291,   290,   289,   264,   262,   422,
     414,     0,   413,   421,   226,   225,     0,   224,   240,   239,
       0,   234,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   302,   303,   301,   312,   318,   324,   328,
     327,   326,   323,   319,   322,   325,   320,   321,     0,   317,
     313,   336,   341,   347,   351,   350,   349,   346,   342,   345,
     348,   343,   344,     0,   340,   216,   217,   210,   212,   214,
     213,   211,   205,   218,   209,   207,   208,   215,   382,   384,
     385,   403,   407,   406,   402,   401,   400,   386,   396,   397,
     394,   395,   393,     0,   398,     0,   390,   392,   379,   404,
     405,   377,   383,   399,   381,   380,   441,     0,   584,   562,
     631,     0,   623,     0,   271,   268,     0,   411,     0,   222,
       0,   238,   235,   162,   151,   160,   148,   177,   175,   184,
     174,   169,   178,   182,   171,   179,     0,   181,   176,   170,
     183,   180,   172,   173,     0,   166,   168,   158,   152,   149,
     155,   144,   159,   147,   161,   153,   154,   150,   157,   146,
     156,   315,     0,   338,     0,   391,   388,     0,   442,   632,
     624,   269,   412,   223,   167,   164,     0,   316,   339,   389,
     165
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,    24,   879,   880,  1031,  1032,    25,   273,   274,
     275,   276,    26,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,    27,    71,    72,    73,
      74,    75,    28,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,    29,    61,   278,
     809,   810,   811,   279,   812,   813,   814,   815,   816,   817,
     818,   819,   820,   821,   822,   823,   824,   825,   826,   827,
     828,   829,  1099,  1384,  1385,  1386,    30,    49,   116,   605,
     606,   607,   117,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,    31,    58,   492,   761,  1246,
    1247,   493,   494,   495,  1071,  1072,   496,   497,    32,    56,
     460,   461,   462,   463,   464,   465,   466,   467,   741,  1225,
    1226,  1227,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,    33,    62,   523,   524,   525,   526,   527,    34,
      65,   555,   556,   557,   558,   559,   858,  1288,  1289,    35,
      66,   563,   564,   565,   566,   864,  1303,  1304,    36,    50,
     119,   639,   640,   641,   120,   642,   643,   644,   645,   646,
     647,   648,   649,   921,  1335,  1336,  1337,   650,   651,   652,
     653,   654,   655,   656,   657,   658,    37,    57,   482,   756,
    1241,  1242,   483,   484,   485,   486,    38,    51,   356,   357,
     358,   359,    39,   124,   125,   126,    40,    53,   367,   667,
    1189,  1190,   368,   369,   370,   371,    41,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   406,  1011,  1012,
     233,   404,   990,   991,   234,   235,   236,   237,   238,    42,
      55,   435,   436,   437,   438,   439,   731,  1206,  1207,   440,
     441,   442,   728,  1200,  1201,    43,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    44,   289,   290,   291,
     292,   293,   294,   295,   296,   297
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -985
static const short yypact[] =
{
    -985,   796,  -985,  -252,  -224,  -192,  -985,  -985,  -985,  -181,
    -985,  -178,  -985,  -985,  -985,  -985,  -167,  -158,  -985,  -985,
    -137,  -127,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,   299,   712,  -128,
     -97,  -124,     5,  -109,   439,   -98,   -85,   -78,   -76,   403,
     138,    58,   -72,   844,   488,   -37,   -33,   -13,    19,    24,
      37,    10,  -985,  -985,  -985,  -985,  -985,    38,    52,    53,
      57,    68,    71,    72,    79,    92,    94,    97,   101,   102,
     104,   109,   110,   114,   115,   141,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,    35,  -985,  -985,    59,
    -985,    13,  -985,   116,     4,  -985,  -985,    30,  -985,   117,
     118,   119,   123,   124,   125,   137,   142,   147,   148,   153,
     155,   156,   157,   158,   160,   165,   166,   170,   172,   174,
     175,   176,   177,   178,   179,   183,   184,   185,   186,   187,
     191,  -985,   192,  -985,   196,   197,   198,   199,   212,   218,
     219,   222,   226,   229,   230,   234,   236,   237,   238,   240,
     242,   243,   245,     9,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,    65,
     646,    48,   255,    12,   246,   251,   262,   266,   272,   274,
     275,   279,   281,   283,   285,   286,   105,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
     143,   288,   289,    34,  -985,  -985,  -985,  -985,    63,  -985,
      49,  -985,   292,   295,   306,   307,   308,   309,   311,   140,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,   144,   312,
     316,   317,   318,   320,   323,   325,   326,   327,   330,   333,
      22,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,     8,    23,  -985,   208,   225,   352,   220,
    -985,   343,   381,   460,   399,   461,   461,   465,   466,   404,
     405,   407,   471,   461,   409,   412,   415,   419,   420,   358,
    -985,   783,   615,  -985,   359,   365,   122,  -985,  -985,  -985,
     469,   372,  -985,  -985,   370,   376,  -985,  -985,    76,  -985,
    -985,  -985,   441,   461,   448,   461,   512,   493,   517,   457,
     458,   459,   524,   503,   464,   528,   529,   531,   470,   461,
     476,   481,   546,   525,   487,   552,   553,   461,   554,   532,
     557,   559,   497,   508,   440,   510,   449,   461,   461,   511,
     461,   555,   513,   514,   -18,    32,   516,   521,   461,   461,
     586,   461,   527,   533,   534,   535,   468,  -985,  -985,  -985,
     462,   473,  -985,   475,   477,   280,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,   479,   483,   484,   486,   490,  -985,   491,
     494,   505,   509,   515,   519,   522,   523,   536,   540,   541,
     263,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,   542,
    -985,   544,  -985,   113,  -985,  -985,  -985,   482,  -985,   545,
     556,   558,  -985,   217,  -985,  -985,  -985,  -985,  -985,   564,
     569,   571,   590,   596,   616,   617,   619,   537,   620,   627,
     575,   560,  -985,  -985,   631,   634,   562,  -985,   353,   566,
     565,   570,   572,   136,  -985,  -985,  -985,  -985,   595,   597,
     629,   636,   639,   642,   461,   574,  -985,  -985,   656,   649,
     657,   676,   686,   691,   693,   694,   719,   699,   700,   604,
    -985,   607,   606,  -985,   609,   108,  -985,  -985,  -985,  -985,
     618,   613,  -985,   133,  -985,  -985,  -985,   623,   626,   630,
    -985,   635,   640,   641,   648,   386,   650,   651,   658,   659,
     660,   667,   669,   672,   673,   675,   677,   679,   682,   683,
    -985,   684,   614,   621,   628,   633,   653,   654,   685,   688,
     689,   695,   696,   697,   698,   213,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
     687,   703,   704,   705,   707,   709,   710,   711,   713,   714,
    -985,   715,   716,   720,   721,   726,   727,   728,   729,   249,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,   776,
     785,   722,  -985,   737,  -985,   786,   789,   735,   743,  -985,
     750,   751,   753,   754,   755,   756,   757,   759,   760,   761,
     768,   770,   771,   777,   780,   784,   787,   788,   790,   791,
     793,   794,   795,   802,   804,   805,   807,   808,   809,   810,
     811,   812,   792,   813,   826,   814,   815,   816,   817,   818,
     819,   820,   821,   822,   823,   824,   825,   827,   828,   829,
     103,   830,   831,   832,   833,   834,   835,  -985,   782,   461,
     680,   836,   797,   858,   837,  -985,  -985,   775,   889,   852,
     886,   838,   896,   898,   900,   902,   903,   944,   742,   945,
     946,   907,   948,   849,  -985,   950,   848,   952,   853,  -985,
    -985,   851,   955,   956,   980,   859,  -985,   860,   861,   862,
     863,   864,   865,   866,   867,   868,   869,   870,   871,   872,
     873,   874,   875,   876,   877,  -985,   878,   879,  -985,   880,
     855,   881,   882,   883,  -985,   884,   885,   887,   888,   890,
     891,   892,   893,   894,   895,   897,   899,   901,   904,    62,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,   981,   982,   983,   905,  -985,   906,   908,   909,   910,
     911,   912,   913,  -985,   914,   915,   916,   917,   918,   919,
     920,   921,   922,   923,   924,  -985,  -985,   989,   925,   992,
     926,  -985,  -985,   999,   927,   929,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,   461,   461,   461,   461,   461,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  1024,  1026,   461,  1048,
    1050,  1054,  1055,  1033,  1057,  1058,   461,   461,   586,   936,
    -985,  -985,  1037,    18,   998,  1039,  1040,  1001,  1002,  1003,
    1044,   942,  1046,  1047,  1049,  1051,  1071,  1052,  1053,  1056,
     954,  -985,   957,   958,  -985,  -985,   959,   960,  1045,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -239,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -233,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,   586,   586,
     586,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,    -4,
     961,   962,     1,   963,   964,  -985,   965,   966,   967,   968,
     418,   969,   970,   971,   972,   973,   974,   975,   976,   977,
     978,   979,  -985,   984,  1075,   985,  -985,   -58,   986,   987,
    1010,  -230,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  1041,  1082,  1043,  1059,   988,
    1060,  1061,  1062,  1063,  1088,  1064,  1089,  1065,  1066,  1067,
    1090,  1068,  1092,  1069,   993,  -985,   994,   995,   996,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,   997,   668,
    1011,  -985,  1012,   749,  -985,  -985,  -985,  -985,  -985,  -985,
    1013,  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,
    1023,  1025,  1027,  -985,  1028,  1029,  1030,  1031,  1032,  1034,
    1035,  1036,  1038,  1042,   398,  1070,  1072,  1073,  1074,  1076,
    1077,  1078,  1079,  -985,  -985,  -985,  -985,  -985,  -985,  -223,
    -985,  -985,   792,  -985,   826,  -985,  -985,  -985,  -985,  -985,
    -216,  -985,  -985,  -985,  -985,  -985,  -199,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,   758,  -985,  -985,  -191,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -185,  -985,  -985,  -985,  -985,  -177,  -985,  -985,  -985,
    1121,  -985,   980,  1080,  1081,  1083,  1084,   601,  1085,  1086,
    1087,  1091,  1093,  1094,  1095,  1096,  1097,  1098,  1099,  1100,
    1101,  1102,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -168,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -166,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,     3,  -985,  -147,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  1045,  -985,  -985,
    -985,    -4,  -985,     1,  -985,  -985,   418,  -985,  1075,  -985,
     -58,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,   624,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -123,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,   668,  -985,   749,  -985,  -985,   398,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,   601,  -985,  -985,  -985,
    -985
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -985,  -985,  -985,  -534,  -335,  -984,  -418,  -985,  -985,   678,
    -985,  -985,  -985,  -985,   990,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  1194,  -985,
    -985,  -985,  -985,  -985,  1103,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,    73,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -467,   -95,  -985,  -985,  -985,  -985,
     674,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
     -68,  -985,   801,  -985,  -985,    36,  -985,  -985,  -985,  -985,
    -985,   839,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
     -61,    74,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,   778,  -985,  -985,  -985,  -985,
    -985,  -985,   747,  -985,  -985,  -985,  -985,  -985,  -104,  -985,
    -985,  -985,   740,  -985,  -985,  -985,  -985,  -100,  -985,  -985,
    -985,  -985,   666,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -101,   -26,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,   -50,  -985,   840,  -985,  -985,  -985,  -985,  -985,   953,
    -985,  -985,  -985,  -985,  1186,  -985,  -985,  -985,  -985,  -985,
    -985,   -36,  -985,   947,  -985,  -985,  -985,  -985,  1129,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,   120,
    -985,  -985,  -985,   121,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,   928,  -985,  -985,  -985,  -985,  -985,   -35,  -985,
    -985,  -985,  -985,  -985,   -34,  -985,  -985,  1221,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,
    -985,  -985,  -985,  -985,  -985,  -985,  -985,  -985,  1104,  -985,
    -985,  -985,  -985,  -985,  -985,  -985
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, parse error.  */
#define YYTABLE_NINF -1
static const unsigned short yytable[] =
{
     576,   577,   721,    45,    46,   122,   122,  1198,   584,   551,
     128,    67,  1204,  1328,   353,  1329,  1191,   129,   130,  1244,
    1192,   131,  1193,   298,   560,  1251,  1194,   115,   132,  1252,
    1330,   363,  1346,    47,  1331,   270,  1347,   133,   671,  1350,
     673,   134,   135,  1351,  1195,  1196,  1197,    68,   136,   478,
     519,   137,   138,   139,   687,   140,  1352,    69,   118,   299,
    1353,   141,   695,   789,  1355,    48,   428,   790,  1356,   429,
    1357,   520,   705,   706,  1358,   708,    52,   363,  1359,    54,
     142,   143,  1360,   718,   719,   144,   722,  1401,   791,  1403,
      59,  1402,   145,  1404,   123,   123,   146,   147,   148,    60,
     792,   149,  1332,   354,   150,   151,   243,   300,  1406,   551,
     430,   793,  1407,   431,   478,   152,   794,  1028,  1029,  1030,
      63,   153,   154,   353,   155,   156,   157,   158,   795,   552,
      64,    70,  1415,   121,   560,   796,  1416,   519,   159,   270,
     797,   281,    76,   301,   561,   302,   303,   160,   127,   161,
     162,   364,   163,   271,    77,   798,   164,   165,   520,   239,
     166,   244,   245,   246,   247,   248,   249,   250,   251,   432,
     355,   167,   240,  1245,   521,    78,    79,   712,   713,   241,
     282,   242,    80,   799,   272,   280,   433,   365,   800,   304,
     168,   305,   169,  1199,   553,   283,   170,   364,  1205,   842,
     171,   172,   173,   174,   306,   479,   522,   175,   176,   562,
     252,   801,   354,   277,   591,   177,   366,   284,   487,   285,
     323,   286,   287,   802,   324,   803,   804,   714,   715,   552,
     805,  1165,  1166,   365,   480,   720,   592,   593,    81,    82,
    1334,   288,   325,   594,   253,   178,   307,   179,    83,    84,
     620,   554,   621,   180,   561,   622,   487,   271,   181,   623,
     361,   521,   366,   182,   443,   426,   329,   498,    85,    86,
     479,   488,   308,   309,   624,   625,   626,   326,   549,   355,
     627,   428,   327,   444,   429,    87,    88,    89,   272,   445,
     516,   481,   351,   522,   553,   328,   331,    90,   628,   480,
      67,   489,   629,   630,   806,   807,    91,   490,   434,   488,
     332,   333,   446,   447,   808,   334,   352,   448,  1114,   562,
     518,   254,   595,   596,   597,   430,   335,   598,   431,   336,
     337,   449,   668,   631,   599,   632,    68,   338,   450,   489,
    1145,  1146,  1147,  1148,  1149,   490,    69,   600,   601,   633,
     339,   554,   340,   255,   789,   341,   481,   451,   790,   342,
     343,   511,   344,   567,   860,   602,   603,   345,   346,   758,
     634,   491,   347,   348,   360,   372,   373,   374,   661,   791,
     568,   375,   376,   377,   432,   452,    92,    93,    94,   865,
     604,   792,   834,   453,  1040,   378,   535,   349,   513,   537,
     379,   433,   793,   635,   243,   380,   381,   794,  1328,   491,
    1329,   382,   454,   383,   384,   385,   386,   636,   387,   795,
      70,   455,   456,   388,   389,  1330,   796,   637,   390,  1331,
     391,   797,   392,   393,   394,   395,   396,   397,  1214,  1215,
     128,   398,   399,   400,   401,   402,   798,   129,   130,   403,
     405,   131,   457,   458,   407,   408,   409,   410,   132,   244,
     245,   246,   247,   248,   249,   250,   251,   133,  1216,   909,
     411,   134,   135,   765,   799,   570,   412,   413,   136,   800,
     414,   137,   138,   139,   415,   140,  1217,   416,   417,   298,
    1162,   141,   418,  1218,   419,   420,   421,  1332,   422,   638,
     423,   424,   801,   425,   499,   930,   459,   569,   252,   500,
     142,   143,  1219,   572,   802,   144,   803,   804,   575,   753,
     501,   805,   145,   434,   502,   299,   146,   147,   148,  1333,
     503,   149,   504,   505,   150,   151,   734,   506,   571,   507,
    1220,   508,   253,   509,   510,   152,   514,   515,  1221,  1222,
     528,   153,   154,   529,   155,   156,   157,   158,   874,   875,
     876,   877,   878,  1152,   530,   531,   532,   533,   159,   534,
     538,  1160,  1161,   300,   539,   540,   541,   160,   542,   161,
     162,   543,   163,   544,   545,   546,   164,   165,   547,  1223,
     166,   548,   573,   575,   574,   806,   807,   578,   579,   580,
     581,   167,   582,   583,   585,   808,  1367,   586,  1224,   301,
     587,   302,   303,   590,   588,   589,   620,   659,   621,   254,
     168,   622,   169,   660,   663,   623,   170,   664,   665,  1367,
     171,   172,   173,   174,   666,  1334,   670,   175,   176,  1368,
     624,   625,   626,   672,   674,   177,   627,   443,   675,   676,
    1369,   255,   677,   678,   679,   304,   680,   305,   681,   682,
     683,   684,  1368,   685,   628,   686,   444,  1370,   629,   630,
     306,   688,   445,  1369,  1371,   178,   689,   179,   690,  1372,
     691,  1373,   692,   180,   693,   694,   696,   697,   181,   698,
    1370,   699,   700,   182,  1374,   446,   447,  1371,   702,   631,
     448,   632,  1372,   701,  1373,   703,   707,   704,   710,   711,
     709,   716,   307,    76,   449,   633,   717,  1374,   720,   767,
     729,   450,   723,   727,   768,    77,   769,  1375,   724,   725,
     726,   730,  1376,   732,   736,   733,   634,   760,   308,   309,
     451,   737,   738,  1377,   739,   770,    78,    79,   740,   742,
    1375,   771,   743,    80,   775,   776,   777,   778,   779,   780,
     781,  1277,  1378,   744,  1379,  1380,  1377,   745,   452,   635,
     784,   772,   773,   746,   774,   782,   453,   747,  1214,  1215,
     748,   749,   783,   636,   591,  1378,   786,  1379,  1380,   787,
     836,   839,   837,   637,   750,   454,     2,     3,   751,   752,
     755,     4,   757,   762,   455,   456,   592,   593,  1216,    81,
      82,   844,   846,   594,   763,   785,   764,   788,     5,    83,
      84,   830,     6,   831,   838,     7,  1217,  1381,   832,   843,
     833,   847,     8,  1218,   840,   457,   458,   841,  1278,    85,
      86,   848,  1292,  1382,   845,   281,   849,     9,   850,   851,
    1381,   852,  1219,  1383,   853,   854,    87,    88,    89,   855,
      10,    11,   856,    12,   857,   638,  1382,   859,    90,  1279,
      13,   863,   896,   862,  1057,  1041,  1383,    91,   867,   897,
    1220,   868,  1115,  1280,   282,   869,   898,    14,  1221,   459,
     870,   899,   595,   596,   597,   871,   872,   598,    15,   283,
      16,  1281,  1282,   873,   599,   881,   882,  1283,  1284,  1285,
    1286,   900,   901,   883,   884,   885,    17,   600,   601,  1293,
    1287,   284,   886,   285,   887,   286,   287,   888,   889,  1223,
     890,   932,   891,    18,   892,   602,   603,   893,   894,   895,
     933,   936,   911,   902,   937,   288,   903,   904,  1224,  1420,
    1294,   517,  1043,   905,   906,   907,   908,    92,    93,    94,
     604,   912,   913,   914,  1295,   915,    19,   916,   917,   918,
    1046,   919,   920,   922,   923,    20,    21,   934,   924,   925,
      22,    23,  1296,  1297,   926,   927,   928,   929,  1298,  1299,
    1300,  1301,   935,   938,   972,   973,   974,   975,   939,   976,
     977,  1302,   978,   979,   980,   940,   941,   981,   942,   943,
     944,   945,   946,  1044,   947,   948,   949,   982,   983,   984,
     985,   986,   987,   950,   988,   951,   952,   989,   993,   994,
     995,   996,   953,   997,   998,   954,   999,  1000,  1001,   955,
    1039,  1002,   956,   957,  1047,   958,   959,  1048,   960,   961,
     962,  1003,  1004,  1005,  1006,  1007,  1008,   963,  1009,   964,
     965,  1010,   966,   967,   968,   969,   970,   971,   992,  1013,
    1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,
    1024,  1049,  1025,  1026,  1027,  1033,  1034,  1035,  1036,  1037,
    1038,  1051,  1045,  1052,  1042,  1053,  1050,  1054,  1055,  1056,
    1058,  1059,  1060,  1061,  1062,  1063,  1064,  1065,  1066,  1067,
    1068,  1069,  1070,  1095,  1073,  1074,  1075,  1076,  1077,  1078,
    1079,  1080,  1081,  1082,  1083,  1084,  1085,  1086,  1087,  1088,
    1089,  1090,  1091,  1092,  1093,  1094,  1116,  1117,  1118,  1096,
    1097,  1098,  1100,  1101,  1138,  1102,  1103,  1140,  1104,  1105,
    1106,  1107,  1108,  1109,  1142,  1110,  1150,  1111,  1151,  1112,
    1119,  1120,  1113,  1121,  1122,  1123,  1124,  1125,  1126,  1127,
    1128,  1129,  1130,  1131,  1132,  1133,  1134,  1135,  1136,  1137,
    1153,  1141,  1154,  1139,  1144,  1143,  1155,  1156,  1157,  1158,
    1159,  1163,  1164,  1167,  1168,  1169,  1170,  1171,  1172,  1173,
    1174,  1175,  1176,  1179,  1177,  1188,  1178,  1180,  1181,  1183,
    1250,  1182,  1184,  1185,  1186,  1187,  1202,  1203,  1208,  1209,
    1210,  1211,  1212,  1213,  1228,  1229,  1230,  1231,  1232,  1233,
    1234,  1235,  1236,  1237,  1238,  1240,  1253,  1254,  1255,  1239,
    1243,  1248,  1249,  1262,  1264,  1268,  1257,  1270,  1272,  1273,
    1274,  1275,  1276,  1361,  1256,  1258,  1259,  1260,  1261,  1263,
    1265,  1266,  1267,  1269,  1271,   330,  1290,  1291,  1305,  1306,
    1307,  1308,  1309,  1310,  1311,  1312,  1313,  1314,  1315,   910,
    1316,  1414,  1317,  1318,  1319,  1320,  1321,  1322,  1362,  1323,
    1324,  1325,  1413,  1326,   766,  1411,  1354,  1327,  1417,   754,
     550,   835,   861,   866,  1418,   931,  1419,  1405,  1412,   662,
     362,  1408,   427,  1348,  1349,   669,   350,  1409,  1410,     0,
       0,     0,     0,   759,     0,  1338,     0,  1339,  1340,  1341,
       0,  1342,  1343,  1344,  1345,  1363,  1364,     0,  1365,  1366,
    1387,  1388,  1389,     0,     0,     0,  1390,     0,  1391,  1392,
    1393,  1394,  1395,  1396,  1397,  1398,  1399,  1400,     0,   512,
       0,     0,     0,   735,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   536
};

static const short yycheck[] =
{
     335,   336,   420,   255,   256,     1,     1,    11,   343,     1,
       1,     1,    11,    10,     1,    12,   255,     8,     9,    77,
     259,    12,   255,     1,     1,   255,   259,   155,    19,   259,
      27,     1,   255,   257,    31,     1,   259,    28,   373,   255,
     375,    32,    33,   259,  1028,  1029,  1030,    37,    39,     1,
       1,    42,    43,    44,   389,    46,   255,    47,   155,    37,
     259,    52,   397,     1,   255,   257,     1,     5,   259,     4,
     255,    22,   407,   408,   259,   410,   257,     1,   255,   257,
      71,    72,   259,   418,   419,    76,   421,   255,    26,   255,
     257,   259,    83,   259,    90,    90,    87,    88,    89,   257,
      38,    92,    99,    90,    95,    96,     1,    85,   255,     1,
      45,    49,   259,    48,     1,   106,    54,    14,    15,    16,
     257,   112,   113,     1,   115,   116,   117,   118,    66,   121,
     257,   121,   255,   257,     1,    73,   259,     1,   129,     1,
      78,     1,     1,   121,   121,   123,   124,   138,   257,   140,
     141,   121,   143,   119,    13,    93,   147,   148,    22,   257,
     151,    56,    57,    58,    59,    60,    61,    62,    63,   104,
     157,   162,   257,   231,   125,    34,    35,   195,   196,   257,
      40,   257,    41,   121,   150,   257,   121,   157,   126,   167,
     181,   169,   183,   197,   186,    55,   187,   121,   197,   534,
     191,   192,   193,   194,   182,   157,   157,   198,   199,   186,
     105,   149,    90,   155,     1,   206,   186,    77,     1,    79,
     257,    81,    82,   161,   257,   163,   164,   195,   196,   121,
     168,   213,   214,   157,   186,   132,    23,    24,    97,    98,
     237,   101,   255,    30,   139,   236,   224,   238,   107,   108,
       1,   243,     3,   244,   121,     6,     1,   119,   249,    10,
     256,   125,   186,   254,     1,   256,   256,   255,   127,   128,
     157,    54,   250,   251,    25,    26,    27,   258,   256,   157,
      31,     1,   258,    20,     4,   144,   145,   146,   150,    26,
     256,   243,   257,   157,   186,   258,   258,   156,    49,   186,
       1,    84,    53,    54,   242,   243,   165,    90,   243,    54,
     258,   258,    49,    50,   252,   258,   257,    54,   256,   186,
     257,   216,   109,   110,   111,    45,   258,   114,    48,   258,
     258,    68,   256,    84,   121,    86,    37,   258,    75,    84,
     874,   875,   876,   877,   878,    90,    47,   134,   135,   100,
     258,   243,   258,   248,     1,   258,   243,    94,     5,   258,
     258,   256,   258,   155,   256,   152,   153,   258,   258,   256,
     121,   154,   258,   258,   258,   258,   258,   258,   256,    26,
     155,   258,   258,   258,   104,   122,   245,   246,   247,   256,
     177,    38,   256,   130,   729,   258,   256,   256,   255,   255,
     258,   121,    49,   154,     1,   258,   258,    54,    10,   154,
      12,   258,   149,   258,   258,   258,   258,   168,   258,    66,
     121,   158,   159,   258,   258,    27,    73,   178,   258,    31,
     258,    78,   258,   258,   258,   258,   258,   258,    20,    21,
       1,   258,   258,   258,   258,   258,    93,     8,     9,   258,
     258,    12,   189,   190,   258,   258,   258,   258,    19,    56,
      57,    58,    59,    60,    61,    62,    63,    28,    50,   256,
     258,    32,    33,   256,   121,   255,   258,   258,    39,   126,
     258,    42,    43,    44,   258,    46,    68,   258,   258,     1,
     908,    52,   258,    75,   258,   258,   258,    99,   258,   250,
     258,   258,   149,   258,   258,   256,   243,   155,   105,   258,
      71,    72,    94,   132,   161,    76,   163,   164,   132,   256,
     258,   168,    83,   243,   258,    37,    87,    88,    89,   131,
     258,    92,   258,   258,    95,    96,   256,   258,   195,   258,
     122,   258,   139,   258,   258,   106,   258,   258,   130,   131,
     258,   112,   113,   258,   115,   116,   117,   118,   172,   173,
     174,   175,   176,   898,   258,   258,   258,   258,   129,   258,
     258,   906,   907,    85,   258,   258,   258,   138,   258,   140,
     141,   258,   143,   258,   258,   258,   147,   148,   258,   171,
     151,   258,   132,   132,   195,   242,   243,   132,   132,   195,
     195,   162,   195,   132,   195,   252,     5,   195,   190,   121,
     195,   123,   124,   255,   195,   195,     1,   258,     3,   216,
     181,     6,   183,   258,   155,    10,   187,   255,   258,     5,
     191,   192,   193,   194,   258,   237,   195,   198,   199,    38,
      25,    26,    27,   195,   132,   206,    31,     1,   155,   132,
      49,   248,   195,   195,   195,   167,   132,   169,   155,   195,
     132,   132,    38,   132,    49,   195,    20,    66,    53,    54,
     182,   195,    26,    49,    73,   236,   195,   238,   132,    78,
     155,    80,   195,   244,   132,   132,   132,   155,   249,   132,
      66,   132,   195,   254,    93,    49,    50,    73,   258,    84,
      54,    86,    78,   195,    80,   195,   195,   258,   195,   195,
     155,   195,   224,     1,    68,   100,   195,    93,   132,   155,
     258,    75,   195,   255,   155,    13,   155,   126,   195,   195,
     195,   258,   131,   258,   255,   258,   121,   255,   250,   251,
      94,   258,   258,   142,   258,   155,    34,    35,   258,   258,
     126,   155,   258,    41,   217,   218,   219,   220,   221,   222,
     223,    93,   161,   258,   163,   164,   142,   258,   122,   154,
     195,   155,   155,   258,   155,   155,   130,   258,    20,    21,
     258,   258,   155,   168,     1,   161,   155,   163,   164,   155,
     195,   155,   195,   178,   258,   149,     0,     1,   258,   258,
     258,     5,   258,   258,   158,   159,    23,    24,    50,    97,
      98,   155,   155,    30,   258,   255,   258,   255,    22,   107,
     108,   255,    26,   258,   195,    29,    68,   226,   258,   255,
     258,   155,    36,    75,   195,   189,   190,   195,   170,   127,
     128,   155,    93,   242,   195,     1,   155,    51,   155,   155,
     226,   132,    94,   252,   155,   155,   144,   145,   146,   255,
      64,    65,   255,    67,   258,   250,   242,   258,   156,   201,
      74,   258,   258,   255,   132,   195,   252,   165,   255,   258,
     122,   255,   809,   215,    40,   255,   258,    91,   130,   243,
     255,   258,   109,   110,   111,   255,   255,   114,   102,    55,
     104,   233,   234,   255,   121,   255,   255,   239,   240,   241,
     242,   258,   258,   255,   255,   255,   120,   134,   135,   170,
     252,    77,   255,    79,   255,    81,    82,   255,   255,   171,
     255,   155,   255,   137,   255,   152,   153,   255,   255,   255,
     155,   155,   255,   258,   155,   101,   258,   258,   190,  1416,
     201,   273,   155,   258,   258,   258,   258,   245,   246,   247,
     177,   258,   258,   258,   215,   258,   170,   258,   258,   258,
     195,   258,   258,   258,   258,   179,   180,   255,   258,   258,
     184,   185,   233,   234,   258,   258,   258,   258,   239,   240,
     241,   242,   255,   258,   202,   203,   204,   205,   255,   207,
     208,   252,   210,   211,   212,   255,   255,   215,   255,   255,
     255,   255,   255,   155,   255,   255,   255,   225,   226,   227,
     228,   229,   230,   255,   232,   255,   255,   235,   202,   203,
     204,   205,   255,   207,   208,   255,   210,   211,   212,   255,
     258,   215,   255,   255,   155,   255,   255,   195,   255,   255,
     255,   225,   226,   227,   228,   229,   230,   255,   232,   255,
     255,   235,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   195,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   195,   255,   195,   258,   195,   258,   195,   195,   155,
     155,   155,   195,   155,   255,   155,   258,   155,   255,   258,
     155,   155,   132,   258,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   155,   155,   155,   258,
     258,   258,   258,   258,   155,   258,   258,   155,   258,   258,
     258,   258,   258,   258,   155,   258,   132,   258,   132,   258,
     255,   255,   258,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     132,   255,   132,   258,   255,   258,   132,   132,   155,   132,
     132,   255,   155,   195,   155,   155,   195,   195,   195,   155,
     258,   155,   155,   132,   155,   160,   155,   155,   155,   255,
     200,   155,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   160,   195,   155,   195,   255,
     255,   255,   255,   155,   155,   155,   258,   155,   255,   255,
     255,   255,   255,   132,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   195,    71,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   605,
     255,  1376,   255,   255,   255,   255,   255,   255,  1252,   255,
     255,   255,  1360,   255,   493,  1356,  1222,   255,  1402,   460,
     310,   523,   555,   563,  1404,   639,  1407,  1333,  1358,   356,
     124,  1347,   183,  1192,  1194,   368,    95,  1351,  1353,    -1,
      -1,    -1,    -1,   483,    -1,   255,    -1,   255,   255,   255,
      -1,   255,   255,   255,   255,   255,   255,    -1,   255,   255,
     255,   255,   255,    -1,    -1,    -1,   255,    -1,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,    -1,   256,
      -1,    -1,    -1,   435,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   289
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,   261,     0,     1,     5,    22,    26,    29,    36,    51,
      64,    65,    67,    74,    91,   102,   104,   120,   137,   170,
     179,   180,   184,   185,   262,   267,   272,   286,   292,   307,
     336,   355,   368,   392,   399,   409,   418,   446,   456,   462,
     466,   476,   539,   555,   576,   255,   256,   257,   257,   337,
     419,   457,   257,   467,   257,   540,   369,   447,   356,   257,
     257,   308,   393,   257,   257,   400,   410,     1,    37,    47,
     121,   287,   288,   289,   290,   291,     1,    13,    34,    35,
      41,    97,    98,   107,   108,   127,   128,   144,   145,   146,
     156,   165,   245,   246,   247,   556,   557,   558,   559,   560,
     561,   562,   563,   564,   565,   566,   567,   568,   569,   570,
     571,   572,   573,   574,   575,   155,   338,   342,   155,   420,
     424,   257,     1,    90,   463,   464,   465,   257,     1,     8,
       9,    12,    19,    28,    32,    33,    39,    42,    43,    44,
      46,    52,    71,    72,    76,    83,    87,    88,    89,    92,
      95,    96,   106,   112,   113,   115,   116,   117,   118,   129,
     138,   140,   141,   143,   147,   148,   151,   162,   181,   183,
     187,   191,   192,   193,   194,   198,   199,   206,   236,   238,
     244,   249,   254,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   530,   534,   535,   536,   537,   538,   257,
     257,   257,   257,     1,    56,    57,    58,    59,    60,    61,
      62,    63,   105,   139,   216,   248,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
       1,   119,   150,   268,   269,   270,   271,   155,   309,   313,
     257,     1,    40,    55,    77,    79,    81,    82,   101,   577,
     578,   579,   580,   581,   582,   583,   584,   585,     1,    37,
      85,   121,   123,   124,   167,   169,   182,   224,   250,   251,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   257,   257,   255,   258,   258,   258,   256,
     288,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   256,
     557,   257,   257,     1,    90,   157,   458,   459,   460,   461,
     258,   256,   464,     1,   121,   157,   186,   468,   472,   473,
     474,   475,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   531,   258,   527,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   256,   478,     1,     4,
      45,    48,   104,   121,   243,   541,   542,   543,   544,   545,
     549,   550,   551,     1,    20,    26,    49,    50,    54,    68,
      75,    94,   122,   130,   149,   158,   159,   189,   190,   243,
     370,   371,   372,   373,   374,   375,   376,   377,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,     1,   157,
     186,   243,   448,   452,   453,   454,   455,     1,    54,    84,
      90,   154,   357,   361,   362,   363,   366,   367,   255,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   256,   294,   255,   258,   258,   256,   269,   257,     1,
      22,   125,   157,   394,   395,   396,   397,   398,   258,   258,
     258,   258,   258,   258,   258,   256,   578,   255,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   256,
     274,     1,   121,   186,   243,   401,   402,   403,   404,   405,
       1,   121,   186,   411,   412,   413,   414,   155,   155,   155,
     255,   195,   132,   132,   195,   132,   264,   264,   132,   132,
     195,   195,   195,   132,   264,   195,   195,   195,   195,   195,
     255,     1,    23,    24,    30,   109,   110,   111,   114,   121,
     134,   135,   152,   153,   177,   339,   340,   341,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
       1,     3,     6,    10,    25,    26,    27,    31,    49,    53,
      54,    84,    86,   100,   121,   154,   168,   178,   250,   421,
     422,   423,   425,   426,   427,   428,   429,   430,   431,   432,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   258,
     258,   256,   459,   155,   255,   258,   258,   469,   256,   473,
     195,   264,   195,   264,   132,   155,   132,   195,   195,   195,
     132,   155,   195,   132,   132,   132,   195,   264,   195,   195,
     132,   155,   195,   132,   132,   264,   132,   155,   132,   132,
     195,   195,   258,   195,   258,   264,   264,   195,   264,   155,
     195,   195,   195,   196,   195,   196,   195,   195,   264,   264,
     132,   266,   264,   195,   195,   195,   195,   255,   552,   258,
     258,   546,   258,   258,   256,   542,   255,   258,   258,   258,
     258,   378,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   256,   371,   258,   449,   258,   256,   453,
     255,   358,   258,   258,   258,   256,   362,   155,   155,   155,
     155,   155,   155,   155,   155,   217,   218,   219,   220,   221,
     222,   223,   155,   155,   195,   255,   155,   155,   255,     1,
       5,    26,    38,    49,    54,    66,    73,    78,    93,   121,
     126,   149,   161,   163,   164,   168,   242,   243,   252,   310,
     311,   312,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     255,   258,   258,   258,   256,   395,   195,   195,   195,   155,
     195,   195,   264,   255,   155,   195,   155,   155,   155,   155,
     155,   155,   132,   155,   155,   255,   255,   258,   406,   258,
     256,   402,   255,   258,   415,   256,   412,   255,   255,   255,
     255,   255,   255,   255,   172,   173,   174,   175,   176,   263,
     264,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   256,
     340,   255,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   433,   258,   258,   258,   258,   258,   258,   258,   258,
     256,   422,   155,   155,   255,   255,   155,   155,   258,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   202,   203,   204,   205,   207,   208,   210,   211,
     212,   215,   225,   226,   227,   228,   229,   230,   232,   235,
     532,   533,   255,   202,   203,   204,   205,   207,   208,   210,
     211,   212,   215,   225,   226,   227,   228,   229,   230,   232,
     235,   528,   529,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,    14,    15,
      16,   265,   266,   255,   255,   255,   255,   255,   255,   258,
     264,   195,   258,   155,   155,   255,   195,   155,   195,   195,
     258,   195,   195,   195,   195,   195,   155,   132,   155,   155,
     195,   155,   255,   155,   258,   155,   255,   258,   155,   155,
     132,   364,   365,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   258,   258,   258,   258,   332,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   256,   311,   155,   155,   155,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   155,   258,
     155,   255,   155,   258,   255,   263,   263,   263,   263,   263,
     132,   132,   264,   132,   132,   132,   132,   155,   132,   132,
     264,   264,   266,   255,   155,   213,   214,   195,   155,   155,
     195,   195,   195,   155,   258,   155,   155,   155,   155,   132,
     155,   155,   155,   255,   255,   255,   255,   255,   160,   470,
     471,   255,   259,   255,   259,   265,   265,   265,    11,   197,
     553,   554,   255,   255,    11,   197,   547,   548,   255,   255,
     255,   255,   255,   255,    20,    21,    50,    68,    75,    94,
     122,   130,   131,   171,   190,   379,   380,   381,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     160,   450,   451,   255,    77,   231,   359,   360,   255,   255,
     200,   255,   259,   195,   155,   195,   195,   258,   195,   195,
     195,   195,   155,   195,   155,   195,   195,   195,   155,   195,
     155,   195,   255,   255,   255,   255,   255,    93,   170,   201,
     215,   233,   234,   239,   240,   241,   242,   252,   407,   408,
     255,   255,    93,   170,   201,   215,   233,   234,   239,   240,
     241,   242,   252,   416,   417,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,    10,    12,
      27,    31,    99,   131,   237,   434,   435,   436,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   259,   533,   529,
     255,   259,   255,   259,   381,   255,   259,   255,   259,   255,
     259,   132,   365,   255,   255,   255,   255,     5,    38,    49,
      66,    73,    78,    80,    93,   126,   131,   142,   161,   163,
     164,   226,   242,   252,   333,   334,   335,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   259,   255,   259,   436,   255,   259,   471,   554,
     548,   380,   451,   360,   335,   255,   259,   408,   417,   435,
     334
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
#line 421 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 28:
#line 423 "ircd_parser.y"
    {
			yyval.number = yyvsp[-1].number + yyvsp[0].number;
		}
    break;

  case 29:
#line 427 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number + yyvsp[0].number;
		}
    break;

  case 30:
#line 431 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 + yyvsp[0].number;
		}
    break;

  case 31:
#line 435 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 + yyvsp[0].number;
		}
    break;

  case 32:
#line 439 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 + yyvsp[0].number;
		}
    break;

  case 33:
#line 443 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 * 7 + yyvsp[0].number;
		}
    break;

  case 34:
#line 448 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 36:
#line 449 "ircd_parser.y"
    { yyval.number = yyvsp[-1].number + yyvsp[0].number; }
    break;

  case 37:
#line 450 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number + yyvsp[0].number; }
    break;

  case 38:
#line 451 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 + yyvsp[0].number; }
    break;

  case 39:
#line 452 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 * 1024 + yyvsp[0].number; }
    break;

  case 46:
#line 466 "ircd_parser.y"
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
#line 483 "ircd_parser.y"
    {
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
}
    break;

  case 63:
#line 507 "ircd_parser.y"
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
#line 541 "ircd_parser.y"
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
#line 601 "ircd_parser.y"
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
#line 615 "ircd_parser.y"
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
#line 633 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.description);
    DupString(ServerInfo.description,yylval.string);
  }
}
    break;

  case 68:
#line 642 "ircd_parser.y"
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
#line 656 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.network_desc);
    DupString(ServerInfo.network_desc, yylval.string);
  }
}
    break;

  case 70:
#line 665 "ircd_parser.y"
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
#line 693 "ircd_parser.y"
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
#line 723 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    recalc_fdlimit(NULL);

    if (yyvsp[-1].number < MAXCLIENTS_MIN)
    {
      char buf[IRCD_BUFSIZE];
      ircsprintf(buf, "MAXCLIENTS too low, setting to %d", MAXCLIENTS_MIN);
      yyerror(buf);
    }
    else if (yyvsp[-1].number > MAXCLIENTS_MAX)
    {
      char buf[IRCD_BUFSIZE];
      ircsprintf(buf, "MAXCLIENTS too high, setting to %d", MAXCLIENTS_MAX);
      yyerror(buf);
    }
    else
      ServerInfo.max_clients = yyvsp[-1].number;
  }
}
    break;

  case 73:
#line 746 "ircd_parser.y"
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
#line 802 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.name);
    DupString(AdminInfo.name, yylval.string);
  }
}
    break;

  case 82:
#line 811 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.email);
    DupString(AdminInfo.email, yylval.string);
  }
}
    break;

  case 83:
#line 820 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.description);
    DupString(AdminInfo.description, yylval.string);
  }
}
    break;

  case 100:
#line 847 "ircd_parser.y"
    {
                        }
    break;

  case 101:
#line 851 "ircd_parser.y"
    {
                        }
    break;

  case 102:
#line 855 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
}
    break;

  case 103:
#line 862 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
}
    break;

  case 104:
#line 869 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
}
    break;

  case 105:
#line 876 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operspylog, yylval.string,
            sizeof(ConfigLoggingEntry.operspylog));
}
    break;

  case 106:
#line 883 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.glinelog, yylval.string,
            sizeof(ConfigLoggingEntry.glinelog));
}
    break;

  case 107:
#line 890 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.klinelog, yylval.string,
            sizeof(ConfigLoggingEntry.klinelog));
}
    break;

  case 108:
#line 897 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.ioerrlog, yylval.string,
            sizeof(ConfigLoggingEntry.ioerrlog));
}
    break;

  case 109:
#line 904 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.killlog, yylval.string,
            sizeof(ConfigLoggingEntry.killlog));
}
    break;

  case 110:
#line 911 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
}
    break;

  case 111:
#line 915 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
}
    break;

  case 112:
#line 919 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
}
    break;

  case 113:
#line 923 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
}
    break;

  case 114:
#line 927 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
}
    break;

  case 115:
#line 931 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
}
    break;

  case 116:
#line 935 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
}
    break;

  case 117:
#line 941 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 118:
#line 950 "ircd_parser.y"
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
#line 963 "ircd_parser.y"
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
#line 1054 "ircd_parser.y"
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
#line 1066 "ircd_parser.y"
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
#line 1078 "ircd_parser.y"
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
#line 1097 "ircd_parser.y"
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
#line 1109 "ircd_parser.y"
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
#line 1120 "ircd_parser.y"
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
#line 1131 "ircd_parser.y"
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
#line 1173 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 152:
#line 1182 "ircd_parser.y"
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
#line 1193 "ircd_parser.y"
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
#line 1204 "ircd_parser.y"
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
#line 1215 "ircd_parser.y"
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
#line 1226 "ircd_parser.y"
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
#line 1237 "ircd_parser.y"
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
#line 1248 "ircd_parser.y"
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
#line 1259 "ircd_parser.y"
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
#line 1270 "ircd_parser.y"
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
#line 1281 "ircd_parser.y"
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
#line 1292 "ircd_parser.y"
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
#line 1303 "ircd_parser.y"
    {
}
    break;

  case 167:
#line 1307 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 168:
#line 1308 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 169:
#line 1311 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 170:
#line 1318 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 171:
#line 1325 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 172:
#line 1332 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 173:
#line 1339 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 174:
#line 1346 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 175:
#line 1353 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 176:
#line 1360 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 177:
#line 1367 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 178:
#line 1374 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 179:
#line 1381 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 180:
#line 1388 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 181:
#line 1395 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 182:
#line 1402 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 183:
#line 1409 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 184:
#line 1416 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) ClearConfEncrypted(yy_aconf);
    else SetConfEncrypted(yy_aconf);
  }
}
    break;

  case 185:
#line 1429 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = (struct ClassItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 186:
#line 1436 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    struct ConfItem *cconf;
    struct ClassItem *class = NULL;

    if (yy_class_name == NULL)
    {
      delete_conf_item(yy_conf);
    }
    else
    {
      cconf = find_exact_name_conf(CLASS_TYPE, yy_class_name, NULL, NULL);

      if (cconf != NULL)		/* The class existed already */
      {
        class = (struct ClassItem *) map_to_conf(cconf);
        *class = *yy_class;
        rebuild_cidr_class(cconf, class);
        delete_conf_item(yy_conf);

        MyFree(cconf->name);            /* Allows case change of class name */
        cconf->name = yy_class_name;
      }
      else	/* Brand new class */
      {
        MyFree(yy_conf->name);          /* just in case it was allocated */
        yy_conf->name = yy_class_name;
      }
    }
    yy_class_name = NULL;
  }
}
    break;

  case 205:
#line 1488 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    MyFree(yy_class_name);
    DupString(yy_class_name, yylval.string);
  }
}
    break;

  case 206:
#line 1497 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    MyFree(yy_class_name);
    DupString(yy_class_name, yylval.string);
  }
}
    break;

  case 207:
#line 1506 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 208:
#line 1512 "ircd_parser.y"
    {
  if (ypass == 1)
    PingWarning(yy_class) = yyvsp[-1].number;
}
    break;

  case 209:
#line 1518 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = yyvsp[-1].number;
}
    break;

  case 210:
#line 1524 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 211:
#line 1530 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = yyvsp[-1].number;
}
    break;

  case 212:
#line 1536 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = yyvsp[-1].number;
}
    break;

  case 213:
#line 1542 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = yyvsp[-1].number;
}
    break;

  case 214:
#line 1548 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = yyvsp[-1].number;
}
    break;

  case 215:
#line 1554 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = yyvsp[-1].number;
}
    break;

  case 216:
#line 1560 "ircd_parser.y"
    {
  if (ypass == 1)
    CidrBitlenIPV4(yy_class) = yyvsp[-1].number;
}
    break;

  case 217:
#line 1566 "ircd_parser.y"
    {
  if (ypass == 1)
    CidrBitlenIPV6(yy_class) = yyvsp[-1].number;
}
    break;

  case 218:
#line 1572 "ircd_parser.y"
    {
  if (ypass == 1)
    NumberPerCidr(yy_class) = yyvsp[-1].number;
}
    break;

  case 219:
#line 1581 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    listener_address = NULL;
    listener_flags = 0;
  }
}
    break;

  case 220:
#line 1588 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 221:
#line 1597 "ircd_parser.y"
    {
}
    break;

  case 225:
#line 1602 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_SSL;
}
    break;

  case 226:
#line 1606 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_HIDDEN;
}
    break;

  case 237:
#line 1619 "ircd_parser.y"
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

  case 238:
#line 1634 "ircd_parser.y"
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

  case 239:
#line 1656 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 240:
#line 1665 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 241:
#line 1677 "ircd_parser.y"
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

  case 242:
#line 1689 "ircd_parser.y"
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

  case 262:
#line 1754 "ircd_parser.y"
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

  case 263:
#line 1773 "ircd_parser.y"
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

  case 264:
#line 1786 "ircd_parser.y"
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

  case 265:
#line 1797 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 266:
#line 1806 "ircd_parser.y"
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

  case 267:
#line 1817 "ircd_parser.y"
    {
}
    break;

  case 271:
#line 1821 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 272:
#line 1822 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 273:
#line 1825 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 274:
#line 1833 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 275:
#line 1840 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 276:
#line 1847 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 277:
#line 1854 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 278:
#line 1861 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 279:
#line 1868 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 280:
#line 1875 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 281:
#line 1882 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 282:
#line 1889 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 283:
#line 1898 "ircd_parser.y"
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

  case 284:
#line 1909 "ircd_parser.y"
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

  case 285:
#line 1920 "ircd_parser.y"
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

  case 286:
#line 1931 "ircd_parser.y"
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

  case 287:
#line 1942 "ircd_parser.y"
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

  case 288:
#line 1953 "ircd_parser.y"
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

  case 289:
#line 1965 "ircd_parser.y"
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

  case 290:
#line 1984 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 291:
#line 1994 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = yyvsp[-1].number;
  }
}
    break;

  case 292:
#line 2003 "ircd_parser.y"
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

  case 293:
#line 2018 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 294:
#line 2025 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 301:
#line 2037 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 302:
#line 2046 "ircd_parser.y"
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

  case 303:
#line 2061 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char def_reason[] = "No reason";

    create_nick_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
  }
}
    break;

  case 304:
#line 2074 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(ULINE_TYPE);
    yy_match_item = map_to_conf(yy_conf);
    yy_match_item->action = SHARED_ALL;
  }
}
    break;

  case 305:
#line 2082 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 312:
#line 2093 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 313:
#line 2102 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    split_nuh(yylval.string, NULL, &yy_match_item->user, &yy_match_item->host);
  }
}
    break;

  case 314:
#line 2110 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 318:
#line 2117 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 319:
#line 2121 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TKLINE;
}
    break;

  case 320:
#line 2125 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 321:
#line 2129 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 322:
#line 2133 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TXLINE;
}
    break;

  case 323:
#line 2137 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 324:
#line 2141 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 325:
#line 2145 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TRESV;
}
    break;

  case 326:
#line 2149 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 327:
#line 2153 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_LOCOPS;
}
    break;

  case 328:
#line 2157 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 329:
#line 2166 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_conf->flags = SHARED_ALL;
  }
}
    break;

  case 330:
#line 2173 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_conf->name == NULL)
      DupString(yy_conf->name, "*");
    yy_conf = NULL;
  }
}
    break;

  case 336:
#line 2186 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 337:
#line 2192 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = 0;
}
    break;

  case 341:
#line 2199 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_KLINE;
}
    break;

  case 342:
#line 2203 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TKLINE;
}
    break;

  case 343:
#line 2207 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNKLINE;
}
    break;

  case 344:
#line 2211 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_XLINE;
}
    break;

  case 345:
#line 2215 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TXLINE;
}
    break;

  case 346:
#line 2219 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNXLINE;
}
    break;

  case 347:
#line 2223 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_RESV;
}
    break;

  case 348:
#line 2227 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TRESV;
}
    break;

  case 349:
#line 2231 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNRESV;
}
    break;

  case 350:
#line 2235 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_LOCOPS;
}
    break;

  case 351:
#line 2239 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = SHARED_ALL;
}
    break;

  case 352:
#line 2248 "ircd_parser.y"
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

  case 353:
#line 2266 "ircd_parser.y"
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

  case 377:
#line 2409 "ircd_parser.y"
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

  case 378:
#line 2421 "ircd_parser.y"
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

  case 379:
#line 2433 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 380:
#line 2442 "ircd_parser.y"
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

  case 381:
#line 2468 "ircd_parser.y"
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

  case 382:
#line 2480 "ircd_parser.y"
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

  case 383:
#line 2492 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = yyvsp[-1].number;
}
    break;

  case 384:
#line 2498 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 385:
#line 2502 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 386:
#line 2510 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 387:
#line 2519 "ircd_parser.y"
    {
}
    break;

  case 391:
#line 2523 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 392:
#line 2524 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 393:
#line 2527 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfLazyLink(yy_aconf);
    else SetConfLazyLink(yy_aconf);
  }
}
    break;

  case 394:
#line 2534 "ircd_parser.y"
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

  case 395:
#line 2545 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfCryptLink(yy_aconf);
    else SetConfCryptLink(yy_aconf);
  }
}
    break;

  case 396:
#line 2552 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAllowAutoConn(yy_aconf);
    else SetConfAllowAutoConn(yy_aconf);
  }
}
    break;

  case 397:
#line 2559 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAwayBurst(yy_aconf);
    else SetConfAwayBurst(yy_aconf);
  }
}
    break;

  case 398:
#line 2566 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfTopicBurst(yy_aconf);
    else SetConfTopicBurst(yy_aconf);
  }
}
    break;

  case 399:
#line 2576 "ircd_parser.y"
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

  case 400:
#line 2617 "ircd_parser.y"
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

  case 401:
#line 2628 "ircd_parser.y"
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

  case 402:
#line 2639 "ircd_parser.y"
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

  case 403:
#line 2654 "ircd_parser.y"
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

  case 404:
#line 2665 "ircd_parser.y"
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

  case 405:
#line 2678 "ircd_parser.y"
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

  case 406:
#line 2691 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 407:
#line 2700 "ircd_parser.y"
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

  case 408:
#line 2735 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    userbuf[0] = hostbuf[0] = reasonbuf[0] = '\0';
    regex_ban = 0;
  }
}
    break;

  case 409:
#line 2742 "ircd_parser.y"
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

  case 410:
#line 2796 "ircd_parser.y"
    {
}
    break;

  case 414:
#line 2801 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 421:
#line 2810 "ircd_parser.y"
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

  case 422:
#line 2826 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 423:
#line 2835 "ircd_parser.y"
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

  case 424:
#line 2844 "ircd_parser.y"
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

  case 430:
#line 2860 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 431:
#line 2869 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 437:
#line 2886 "ircd_parser.y"
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

  case 438:
#line 2907 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    regex_ban = 0;
    reasonbuf[0] = gecos_name[0] = '\0';
  }
}
    break;

  case 439:
#line 2914 "ircd_parser.y"
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

  case 440:
#line 2948 "ircd_parser.y"
    {
}
    break;

  case 444:
#line 2953 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 451:
#line 2962 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(gecos_name, yylval.string, sizeof(gecos_name));
}
    break;

  case 452:
#line 2968 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 511:
#line 3013 "ircd_parser.y"
    {
  ConfigFileEntry.gline_min_cidr = yyvsp[-1].number;
}
    break;

  case 512:
#line 3018 "ircd_parser.y"
    {
  ConfigFileEntry.gline_min_cidr6 = yyvsp[-1].number;
}
    break;

  case 513:
#line 3023 "ircd_parser.y"
    {
  ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 514:
#line 3028 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
}
    break;

  case 515:
#line 3033 "ircd_parser.y"
    {
  GlobalSetOptions.rejecttime = yylval.number;
}
    break;

  case 516:
#line 3038 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 517:
#line 3043 "ircd_parser.y"
    {
  ConfigFileEntry.kill_chase_time_limit = yyvsp[-1].number;
}
    break;

  case 518:
#line 3048 "ircd_parser.y"
    {
  ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 519:
#line 3053 "ircd_parser.y"
    {
  ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 520:
#line 3058 "ircd_parser.y"
    {
  ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 521:
#line 3063 "ircd_parser.y"
    {
  ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 522:
#line 3068 "ircd_parser.y"
    {
  ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 523:
#line 3073 "ircd_parser.y"
    {
  ConfigFileEntry.max_nick_time = yyvsp[-1].number; 
}
    break;

  case 524:
#line 3078 "ircd_parser.y"
    {
  ConfigFileEntry.max_nick_changes = yyvsp[-1].number;
}
    break;

  case 525:
#line 3083 "ircd_parser.y"
    {
  ConfigFileEntry.max_accept = yyvsp[-1].number;
}
    break;

  case 526:
#line 3088 "ircd_parser.y"
    {
  ConfigFileEntry.anti_spam_exit_message_time = yyvsp[-1].number;
}
    break;

  case 527:
#line 3093 "ircd_parser.y"
    {
  ConfigFileEntry.ts_warn_delta = yyvsp[-1].number;
}
    break;

  case 528:
#line 3098 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = yyvsp[-1].number;
}
    break;

  case 529:
#line 3104 "ircd_parser.y"
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

  case 530:
#line 3115 "ircd_parser.y"
    {
  ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 531:
#line 3120 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 532:
#line 3129 "ircd_parser.y"
    {
  ConfigFileEntry.invisible_on_connect = yylval.number;
}
    break;

  case 533:
#line 3134 "ircd_parser.y"
    {
  ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 534:
#line 3139 "ircd_parser.y"
    {
  ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 535:
#line 3144 "ircd_parser.y"
    {
  ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 536:
#line 3149 "ircd_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 537:
#line 3152 "ircd_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 538:
#line 3157 "ircd_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 539:
#line 3160 "ircd_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 540:
#line 3165 "ircd_parser.y"
    {
  ConfigFileEntry.pace_wait = yyvsp[-1].number;
}
    break;

  case 541:
#line 3170 "ircd_parser.y"
    {
  ConfigFileEntry.caller_id_wait = yyvsp[-1].number;
}
    break;

  case 542:
#line 3175 "ircd_parser.y"
    {
  ConfigFileEntry.opers_bypass_callerid = yylval.number;
}
    break;

  case 543:
#line 3180 "ircd_parser.y"
    {
  ConfigFileEntry.pace_wait_simple = yyvsp[-1].number;
}
    break;

  case 544:
#line 3185 "ircd_parser.y"
    {
  ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 545:
#line 3190 "ircd_parser.y"
    {
  ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 546:
#line 3195 "ircd_parser.y"
    {
  ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 547:
#line 3200 "ircd_parser.y"
    {
  ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 548:
#line 3205 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
}
    break;

  case 549:
#line 3216 "ircd_parser.y"
    {
  ConfigFileEntry.idletime = yyvsp[-1].number;
}
    break;

  case 550:
#line 3221 "ircd_parser.y"
    {
  ConfigFileEntry.dots_in_ident = yyvsp[-1].number;
}
    break;

  case 551:
#line 3226 "ircd_parser.y"
    {
  ConfigFileEntry.max_targets = yyvsp[-1].number;
}
    break;

  case 552:
#line 3231 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 553:
#line 3240 "ircd_parser.y"
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

  case 554:
#line 3272 "ircd_parser.y"
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

  case 555:
#line 3290 "ircd_parser.y"
    {
  ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 556:
#line 3295 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 557:
#line 3304 "ircd_parser.y"
    {
  ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 558:
#line 3309 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 559:
#line 3314 "ircd_parser.y"
    {
  ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 560:
#line 3319 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 564:
#line 3325 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 565:
#line 3328 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 566:
#line 3331 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEAF;
}
    break;

  case 567:
#line 3334 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 568:
#line 3337 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 569:
#line 3340 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 570:
#line 3343 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 571:
#line 3346 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 572:
#line 3349 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 573:
#line 3352 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 574:
#line 3355 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 575:
#line 3358 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 576:
#line 3361 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 577:
#line 3364 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 578:
#line 3367 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 579:
#line 3370 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 580:
#line 3373 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 581:
#line 3376 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 582:
#line 3381 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 586:
#line 3387 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 587:
#line 3390 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 588:
#line 3393 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEAF;
}
    break;

  case 589:
#line 3396 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 590:
#line 3399 "ircd_parser.y"
    { 
  ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 591:
#line 3402 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 592:
#line 3405 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 593:
#line 3408 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 594:
#line 3411 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 595:
#line 3414 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 596:
#line 3417 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 597:
#line 3420 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 598:
#line 3423 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 599:
#line 3426 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 600:
#line 3429 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 601:
#line 3432 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 602:
#line 3435 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 603:
#line 3438 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 604:
#line 3443 "ircd_parser.y"
    {
  ConfigFileEntry.min_nonwildcard = yyvsp[-1].number;
}
    break;

  case 605:
#line 3448 "ircd_parser.y"
    {
  ConfigFileEntry.min_nonwildcard_simple = yyvsp[-1].number;
}
    break;

  case 606:
#line 3453 "ircd_parser.y"
    {
  ConfigFileEntry.default_floodcount = yyvsp[-1].number;
}
    break;

  case 607:
#line 3458 "ircd_parser.y"
    {
  ConfigFileEntry.client_flood = yyvsp[-1].number;
}
    break;

  case 608:
#line 3463 "ircd_parser.y"
    {
  ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 609:
#line 3471 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->flags = 0;
  }
}
    break;

  case 610:
#line 3479 "ircd_parser.y"
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

  case 620:
#line 3506 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 621:
#line 3512 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = yyvsp[-1].number;
}
    break;

  case 622:
#line 3518 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 626:
#line 3524 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 627:
#line 3528 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 628:
#line 3534 "ircd_parser.y"
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

  case 629:
#line 3553 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 630:
#line 3562 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 631:
#line 3566 "ircd_parser.y"
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

  case 634:
#line 3606 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 635:
#line 3610 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 658:
#line 3635 "ircd_parser.y"
    {
  ConfigChannel.restrict_channels = yylval.number;
}
    break;

  case 659:
#line 3640 "ircd_parser.y"
    {
  ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 660:
#line 3645 "ircd_parser.y"
    {
  ConfigChannel.use_except = yylval.number;
}
    break;

  case 661:
#line 3650 "ircd_parser.y"
    {
  ConfigChannel.use_invex = yylval.number;
}
    break;

  case 662:
#line 3655 "ircd_parser.y"
    {
  ConfigChannel.use_knock = yylval.number;
}
    break;

  case 663:
#line 3660 "ircd_parser.y"
    {
  ConfigChannel.knock_delay = yyvsp[-1].number;
}
    break;

  case 664:
#line 3665 "ircd_parser.y"
    {
  ConfigChannel.knock_delay_channel = yyvsp[-1].number;
}
    break;

  case 665:
#line 3670 "ircd_parser.y"
    {
  ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 666:
#line 3675 "ircd_parser.y"
    {
  ConfigChannel.max_chans_per_user = yyvsp[-1].number;
}
    break;

  case 667:
#line 3680 "ircd_parser.y"
    {
  ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 668:
#line 3685 "ircd_parser.y"
    {
  ConfigChannel.max_bans = yyvsp[-1].number;
}
    break;

  case 669:
#line 3690 "ircd_parser.y"
    {
  ConfigChannel.default_split_user_count = yyvsp[-1].number;
}
    break;

  case 670:
#line 3695 "ircd_parser.y"
    {
  ConfigChannel.default_split_server_count = yyvsp[-1].number;
}
    break;

  case 671:
#line 3700 "ircd_parser.y"
    {
  ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 672:
#line 3705 "ircd_parser.y"
    {
  ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 673:
#line 3710 "ircd_parser.y"
    {
  ConfigChannel.burst_topicwho = yylval.number;
}
    break;

  case 674:
#line 3715 "ircd_parser.y"
    {
  GlobalSetOptions.joinfloodcount = yylval.number;
}
    break;

  case 675:
#line 3720 "ircd_parser.y"
    {
  GlobalSetOptions.joinfloodtime = yylval.number;
}
    break;

  case 687:
#line 3739 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 688:
#line 3745 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 689:
#line 3751 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigServerHide.hidden_name);
    DupString(ConfigServerHide.hidden_name, yylval.string);
  }
}
    break;

  case 690:
#line 3760 "ircd_parser.y"
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

  case 691:
#line 3774 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 692:
#line 3780 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 693:
#line 3786 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 1016 of /usr/local/share/bison/yacc.c.  */
#line 7035 "y.tab.c"

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


#line 392 "ircd_parser.y"

