/* A Bison parser, made by GNU Bison 1.875d.  */
/* $Id: y.tab.c,v 7.81 2005/09/25 20:07:38 knight Exp $ */

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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 134 "ircd_parser.y"
typedef union YYSTYPE {
  int number;
  char *string;
} YYSTYPE;
/* Line 191 of yacc.c.  */
#line 696 "y.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 708 "y.tab.c"

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
#   define YYSTACK_ALLOC alloca
#  endif
# else
#  if defined (alloca) || defined (_ALLOCA_H)
#   define YYSTACK_ALLOC alloca
#  else
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
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
#define YYLAST   1387

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
    1523,  1528,  1533,  1538,  1543,  1548,  1553,  1558,  1563,  1568,
    1573,  1578,  1583,  1588,  1593,  1598,  1603,  1608,  1613,  1618,
    1623,  1628,  1633,  1638,  1643,  1648,  1653,  1658,  1663,  1668,
    1673,  1678,  1683,  1688,  1693,  1698,  1703,  1708,  1713,  1718,
    1723,  1728,  1733,  1738,  1743,  1748,  1753,  1758,  1763,  1764,
    1770,  1774,  1776,  1778,  1780,  1782,  1784,  1786,  1788,  1790,
    1792,  1794,  1796,  1798,  1800,  1802,  1804,  1806,  1808,  1810,
    1812,  1813,  1819,  1823,  1825,  1827,  1829,  1831,  1833,  1835,
    1837,  1839,  1841,  1843,  1845,  1847,  1849,  1851,  1853,  1855,
    1857,  1859,  1861,  1866,  1871,  1876,  1881,  1886,  1887,  1894,
    1897,  1899,  1901,  1903,  1905,  1907,  1909,  1911,  1913,  1918,
    1923,  1924,  1930,  1934,  1936,  1938,  1940,  1945,  1950,  1951,
    1957,  1961,  1963,  1965,  1967,  1973,  1976,  1978,  1980,  1982,
    1984,  1986,  1988,  1990,  1992,  1994,  1996,  1998,  2000,  2002,
    2004,  2006,  2008,  2010,  2012,  2014,  2016,  2021,  2026,  2031,
    2036,  2041,  2046,  2051,  2056,  2061,  2066,  2071,  2076,  2081,
    2086,  2091,  2096,  2101,  2106,  2112,  2115,  2117,  2119,  2121,
    2123,  2125,  2127,  2129,  2131,  2133,  2138,  2143,  2148,  2153,
    2158,  2163
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     260,     0,    -1,    -1,   260,   261,    -1,   285,    -1,   291,
      -1,   306,    -1,   553,    -1,   335,    -1,   353,    -1,   366,
      -1,   271,    -1,   574,    -1,   390,    -1,   397,    -1,   407,
      -1,   416,    -1,   444,    -1,   454,    -1,   460,    -1,   474,
      -1,   537,    -1,   464,    -1,   266,    -1,     1,   254,    -1,
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
     255,   254,    -1,   475,   476,    -1,   476,    -1,   484,    -1,
     485,    -1,   487,    -1,   488,    -1,   489,    -1,   490,    -1,
     491,    -1,   492,    -1,   493,    -1,   494,    -1,   483,    -1,
     496,    -1,   497,    -1,   498,    -1,   499,    -1,   514,    -1,
     500,    -1,   502,    -1,   504,    -1,   503,    -1,   507,    -1,
     501,    -1,   508,    -1,   509,    -1,   510,    -1,   511,    -1,
     513,    -1,   512,    -1,   528,    -1,   515,    -1,   519,    -1,
     520,    -1,   524,    -1,   505,    -1,   506,    -1,   534,    -1,
     532,    -1,   533,    -1,   516,    -1,   486,    -1,   517,    -1,
     518,    -1,   535,    -1,   523,    -1,   495,    -1,   536,    -1,
     521,    -1,   522,    -1,   479,    -1,   482,    -1,   477,    -1,
     478,    -1,   480,    -1,   481,    -1,     1,    -1,    70,   257,
     131,   254,    -1,    71,   257,   131,   254,    -1,    12,   257,
     194,   254,    -1,   248,   257,   194,   254,    -1,   161,   257,
     131,   254,    -1,   182,   257,   194,   254,    -1,    91,   257,
     131,   254,    -1,    82,   257,   194,   254,    -1,    87,   257,
     194,   254,    -1,    41,   257,   194,   254,    -1,    51,   257,
     194,   254,    -1,     8,   257,   194,   254,    -1,   112,   257,
     263,   254,    -1,   111,   257,   131,   254,    -1,   105,   257,
     131,   254,    -1,     9,   257,   263,   254,    -1,   198,   257,
     263,   254,    -1,   197,   257,   263,   254,    -1,    75,   257,
     131,   254,    -1,    95,   257,   194,   254,    -1,    94,   257,
     154,   254,    -1,    88,   257,   194,   254,    -1,   253,   257,
     194,   254,    -1,   192,   257,   194,   254,    -1,   193,   257,
     194,   254,    -1,   191,   257,   194,   254,    -1,   191,   257,
     195,   254,    -1,   190,   257,   194,   254,    -1,   190,   257,
     195,   254,    -1,   146,   257,   263,   254,    -1,    19,   257,
     263,   254,    -1,   137,   257,   194,   254,    -1,   147,   257,
     263,   254,    -1,   186,   257,   194,   254,    -1,   128,   257,
     194,   254,    -1,   237,   257,   194,   254,    -1,   140,   257,
     194,   254,    -1,   115,   257,   154,   254,    -1,    86,   257,
     263,   254,    -1,    43,   257,   131,   254,    -1,   114,   257,
     131,   254,    -1,   180,   257,   154,   254,    -1,    31,   257,
     154,   254,    -1,    27,   257,   131,   254,    -1,   243,   257,
     194,   254,    -1,    45,   257,   154,   254,    -1,   150,   257,
     194,   254,    -1,    38,   257,   194,   254,    -1,   235,   257,
     263,   254,    -1,    -1,   142,   525,   257,   526,   254,    -1,
     526,   258,   527,    -1,   527,    -1,   201,    -1,   204,    -1,
     206,    -1,   207,    -1,   210,    -1,   228,    -1,   224,    -1,
     226,    -1,   231,    -1,   229,    -1,   209,    -1,   225,    -1,
     227,    -1,   211,    -1,   234,    -1,   202,    -1,   203,    -1,
     214,    -1,    -1,   139,   529,   257,   530,   254,    -1,   530,
     258,   531,    -1,   531,    -1,   201,    -1,   204,    -1,   206,
      -1,   207,    -1,   210,    -1,   228,    -1,   224,    -1,   226,
      -1,   231,    -1,   229,    -1,   209,    -1,   225,    -1,   227,
      -1,   211,    -1,   234,    -1,   202,    -1,   203,    -1,   214,
      -1,   116,   257,   131,   254,    -1,   117,   257,   131,   254,
      -1,    32,   257,   131,   254,    -1,   205,   257,   265,   254,
      -1,    42,   257,   194,   254,    -1,    -1,    66,   538,   256,
     539,   255,   254,    -1,   539,   540,    -1,   540,    -1,   541,
      -1,   542,    -1,   543,    -1,   547,    -1,   548,    -1,   549,
      -1,     1,    -1,    47,   257,   194,   254,    -1,    44,   257,
     263,   254,    -1,    -1,   103,   544,   257,   545,   254,    -1,
     545,   258,   546,    -1,   546,    -1,   196,    -1,    11,    -1,
     242,   257,   154,   254,    -1,   120,   257,   154,   254,    -1,
      -1,     4,   550,   257,   551,   254,    -1,   551,   258,   552,
      -1,   552,    -1,   196,    -1,    11,    -1,    22,   256,   554,
     255,   254,    -1,   554,   555,    -1,   555,    -1,   557,    -1,
     558,    -1,   559,    -1,   560,    -1,   566,    -1,   561,    -1,
     562,    -1,   563,    -1,   564,    -1,   565,    -1,   567,    -1,
     568,    -1,   569,    -1,   556,    -1,   570,    -1,   571,    -1,
     572,    -1,   573,    -1,     1,    -1,   164,   257,   194,   254,
      -1,    40,   257,   194,   254,    -1,   244,   257,   194,   254,
      -1,   245,   257,   194,   254,    -1,   246,   257,   194,   254,
      -1,    96,   257,   263,   254,    -1,    97,   257,   263,   254,
      -1,   143,   257,   194,   254,    -1,   107,   257,   131,   254,
      -1,   155,   257,   194,   254,    -1,   106,   257,   131,   254,
      -1,    34,   257,   131,   254,    -1,    33,   257,   131,   254,
      -1,   126,   257,   194,   254,    -1,   127,   257,   194,   254,
      -1,    13,   257,   194,   254,    -1,   144,   257,   131,   254,
      -1,   145,   257,   263,   254,    -1,   178,   256,   575,   255,
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
       0,   391,   391,   392,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   420,   420,   421,   425,
     429,   433,   437,   441,   447,   447,   448,   449,   450,   451,
     458,   461,   461,   462,   462,   462,   464,   481,   492,   495,
     496,   497,   497,   498,   498,   499,   499,   500,   501,   501,
     502,   502,   503,   505,   539,   599,   613,   631,   640,   654,
     663,   691,   721,   744,   794,   796,   796,   797,   797,   798,
     798,   800,   809,   818,   831,   833,   834,   836,   836,   837,
     838,   838,   839,   839,   840,   840,   841,   841,   842,   843,
     845,   849,   853,   860,   867,   874,   881,   888,   895,   902,
     909,   913,   917,   921,   925,   929,   933,   939,   949,   948,
    1042,  1042,  1043,  1043,  1044,  1044,  1044,  1044,  1045,  1045,
    1045,  1046,  1046,  1046,  1047,  1047,  1047,  1048,  1048,  1048,
    1049,  1049,  1050,  1050,  1052,  1064,  1076,  1095,  1107,  1118,
    1129,  1171,  1180,  1191,  1202,  1213,  1224,  1235,  1246,  1257,
    1268,  1279,  1290,  1302,  1301,  1305,  1305,  1306,  1307,  1309,
    1316,  1323,  1330,  1337,  1344,  1351,  1358,  1365,  1372,  1379,
    1386,  1393,  1400,  1407,  1414,  1428,  1427,  1467,  1467,  1469,
    1469,  1470,  1471,  1472,  1473,  1474,  1475,  1476,  1477,  1478,
    1479,  1480,  1481,  1482,  1484,  1493,  1502,  1508,  1514,  1520,
    1526,  1532,  1538,  1544,  1550,  1556,  1562,  1572,  1571,  1588,
    1587,  1591,  1591,  1592,  1596,  1602,  1602,  1603,  1603,  1603,
    1603,  1603,  1605,  1607,  1607,  1609,  1624,  1646,  1655,  1668,
    1667,  1736,  1736,  1737,  1737,  1737,  1737,  1738,  1738,  1739,
    1739,  1739,  1740,  1740,  1741,  1741,  1741,  1742,  1742,  1742,
    1744,  1763,  1776,  1787,  1796,  1808,  1807,  1811,  1811,  1812,
    1813,  1815,  1823,  1830,  1837,  1844,  1851,  1858,  1865,  1872,
    1879,  1888,  1899,  1910,  1921,  1932,  1943,  1955,  1974,  1984,
    1993,  2009,  2008,  2024,  2024,  2025,  2025,  2025,  2025,  2027,
    2036,  2051,  2065,  2064,  2080,  2080,  2081,  2081,  2081,  2081,
    2083,  2092,  2101,  2100,  2106,  2106,  2107,  2111,  2115,  2119,
    2123,  2127,  2131,  2135,  2139,  2143,  2147,  2157,  2156,  2173,
    2173,  2174,  2174,  2174,  2176,  2183,  2182,  2188,  2188,  2189,
    2193,  2197,  2201,  2205,  2209,  2213,  2217,  2221,  2225,  2229,
    2239,  2238,  2388,  2388,  2389,  2389,  2390,  2390,  2390,  2391,
    2391,  2392,  2392,  2393,  2393,  2393,  2394,  2394,  2394,  2395,
    2395,  2395,  2396,  2396,  2397,  2399,  2411,  2423,  2432,  2458,
    2470,  2482,  2488,  2492,  2500,  2510,  2509,  2513,  2513,  2514,
    2515,  2517,  2524,  2535,  2542,  2549,  2556,  2566,  2607,  2618,
    2629,  2644,  2655,  2668,  2681,  2690,  2726,  2725,  2787,  2786,
    2790,  2790,  2791,  2797,  2797,  2798,  2798,  2798,  2798,  2800,
    2816,  2826,  2825,  2847,  2847,  2848,  2848,  2848,  2850,  2859,
    2871,  2873,  2873,  2874,  2874,  2876,  2898,  2897,  2939,  2938,
    2942,  2942,  2943,  2949,  2949,  2950,  2950,  2950,  2950,  2952,
    2958,  2967,  2970,  2970,  2971,  2971,  2972,  2972,  2973,  2973,
    2974,  2974,  2975,  2975,  2976,  2976,  2977,  2977,  2978,  2978,
    2979,  2979,  2980,  2980,  2981,  2981,  2982,  2982,  2983,  2983,
    2984,  2984,  2985,  2985,  2986,  2986,  2987,  2987,  2988,  2988,
    2989,  2989,  2990,  2990,  2991,  2992,  2992,  2993,  2993,  2994,
    2994,  2995,  2995,  2996,  2996,  2997,  2997,  2998,  2999,  3003,
    3008,  3013,  3018,  3023,  3028,  3033,  3038,  3043,  3048,  3053,
    3058,  3063,  3068,  3073,  3078,  3083,  3088,  3094,  3105,  3110,
    3119,  3124,  3129,  3134,  3139,  3142,  3147,  3150,  3155,  3160,
    3165,  3170,  3175,  3180,  3185,  3190,  3195,  3206,  3211,  3216,
    3221,  3230,  3262,  3280,  3285,  3294,  3299,  3304,  3310,  3309,
    3314,  3314,  3315,  3318,  3321,  3324,  3327,  3330,  3333,  3336,
    3339,  3342,  3345,  3348,  3351,  3354,  3357,  3360,  3363,  3366,
    3372,  3371,  3376,  3376,  3377,  3380,  3383,  3386,  3389,  3392,
    3395,  3398,  3401,  3404,  3407,  3410,  3413,  3416,  3419,  3422,
    3425,  3428,  3433,  3438,  3443,  3448,  3453,  3462,  3461,  3487,
    3487,  3488,  3489,  3490,  3491,  3492,  3493,  3494,  3496,  3502,
    3509,  3508,  3513,  3513,  3514,  3518,  3524,  3543,  3553,  3552,
    3595,  3595,  3596,  3600,  3609,  3612,  3612,  3613,  3613,  3614,
    3614,  3615,  3615,  3616,  3616,  3617,  3617,  3618,  3619,  3620,
    3620,  3621,  3621,  3622,  3622,  3623,  3625,  3630,  3635,  3640,
    3645,  3650,  3655,  3660,  3665,  3670,  3675,  3680,  3685,  3690,
    3695,  3700,  3705,  3710,  3718,  3721,  3721,  3722,  3722,  3723,
    3724,  3725,  3725,  3726,  3727,  3729,  3735,  3741,  3750,  3764,
    3770,  3776
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
  "channel_burst_topicwho", "channel_jflood_count", "channel_jflood_time",
  "serverhide_entry", "serverhide_items", "serverhide_item",
  "serverhide_flatten_links", "serverhide_hide_servers",
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
     476,   476,   476,   476,   476,   476,   476,   476,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   502,   503,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   525,   524,
     526,   526,   527,   527,   527,   527,   527,   527,   527,   527,
     527,   527,   527,   527,   527,   527,   527,   527,   527,   527,
     529,   528,   530,   530,   531,   531,   531,   531,   531,   531,
     531,   531,   531,   531,   531,   531,   531,   531,   531,   531,
     531,   531,   532,   533,   534,   535,   536,   538,   537,   539,
     539,   540,   540,   540,   540,   540,   540,   540,   541,   542,
     544,   543,   545,   545,   546,   546,   547,   548,   550,   549,
     551,   551,   552,   552,   553,   554,   554,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   556,   557,   558,   559,
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     0,     5,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     5,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     0,     6,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       0,     5,     3,     1,     1,     1,     4,     4,     0,     5,
       3,     1,     1,     1,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
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
     436,     0,   607,   239,   406,   217,     0,     0,   118,   291,
       0,     0,   302,   327,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,   187,
     352,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   120,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    79,    78,   655,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   636,   650,   637,   638,
     639,   640,   642,   643,   644,   645,   646,   641,   647,   648,
     649,   651,   652,   653,   654,   205,     0,   188,   376,     0,
     353,     0,   434,     0,     0,   432,   433,     0,   508,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   580,     0,   558,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   453,   504,   505,   502,   506,   507,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     635,     0,     0,   427,     0,     0,     0,   424,   425,   426,
       0,     0,   431,   448,     0,     0,   438,   447,     0,   444,
     445,   446,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   452,   617,   628,
       0,     0,   620,     0,     0,     0,   610,   611,   612,   613,
     614,   615,   616,     0,     0,     0,     0,     0,   265,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     634,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   190,   191,   193,   194,   196,
     197,   198,   199,   200,   201,   202,   192,   195,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   385,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   355,   356,
     357,   358,   359,   360,   362,   361,   363,   364,   372,   369,
     371,   370,   368,   365,   366,   367,   373,     0,     0,     0,
     423,     0,   430,     0,     0,     0,     0,   443,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,   451,     0,     0,     0,     0,
       0,     0,     0,   609,   259,     0,     0,     0,     0,     0,
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
     333,     0,     0,     0,   329,    83,    82,    81,   671,   668,
     667,   657,    26,    26,    26,    26,    26,    28,    27,   661,
     662,   666,   664,   669,   670,   663,   672,   673,   665,   656,
     658,   659,   660,   203,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   189,   374,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   354,     0,
       0,   422,   435,     0,     0,     0,   437,   520,   524,   511,
     539,   552,   551,   604,   556,   518,   606,   548,   554,   519,
     509,   510,   527,   516,   547,   517,   530,   515,   529,   528,
     523,   522,   521,   549,   546,   602,   603,   543,   540,   584,
     599,   600,   585,   586,   587,   594,   588,   597,   601,   590,
     595,   591,   596,   589,   593,   592,   598,     0,   583,   545,
     562,   577,   578,   563,   564,   565,   572,   566,   575,   579,
     568,   573,   569,   574,   567,   571,   570,   576,     0,   561,
     538,   541,   555,   513,   550,   514,   542,   536,   537,   534,
     535,   532,   533,   526,   525,    34,    34,    34,    36,    35,
     605,   557,   544,   553,   512,   531,     0,     0,     0,     0,
       0,     0,   608,     0,     0,     0,     0,     0,     0,     0,
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
     428,   429,   449,   450,   442,     0,   441,   581,     0,   559,
       0,    37,    38,    39,   633,   632,     0,   631,   619,   618,
     625,   624,     0,   623,   627,   626,   284,   263,   264,   283,
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
     378,   439,     0,   582,   560,   629,     0,   621,     0,   269,
     266,     0,   409,     0,   220,     0,   236,   233,   162,   151,
     160,   148,   177,   175,   184,   174,   169,   178,   182,   171,
     179,     0,   181,   176,   170,   183,   180,   172,   173,     0,
     166,   168,   158,   152,   149,   155,   144,   159,   147,   161,
     153,   154,   150,   157,   146,   156,   313,     0,   336,     0,
     389,   386,     0,   440,   630,   622,   267,   410,   221,   167,
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
     826,   827,  1096,  1379,  1380,  1381,    30,    49,   116,   604,
     605,   606,   117,   607,   608,   609,   610,   611,   612,   613,
     614,   615,   616,   617,    31,    58,   492,   759,  1242,  1243,
     493,   494,   495,  1068,  1069,   496,   497,    32,    56,   460,
     461,   462,   463,   464,   465,   466,   467,   739,  1221,  1222,
    1223,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,    33,    62,   523,   524,   525,   526,   527,    34,    65,
     555,   556,   557,   558,   559,   856,  1284,  1285,    35,    66,
     563,   564,   565,   566,   862,  1299,  1300,    36,    50,   119,
     637,   638,   639,   120,   640,   641,   642,   643,   644,   645,
     646,   647,   918,  1330,  1331,  1332,   648,   649,   650,   651,
     652,   653,   654,   655,   656,    37,    57,   482,   754,  1237,
    1238,   483,   484,   485,   486,    38,    51,   356,   357,   358,
     359,    39,   124,   125,   126,    40,    53,   367,   665,  1185,
    1186,   368,   369,   370,   371,    41,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   406,  1008,  1009,   233,
     404,   987,   988,   234,   235,   236,   237,   238,    42,    55,
     435,   436,   437,   438,   439,   729,  1202,  1203,   440,   441,
     442,   726,  1196,  1197,    43,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,    44,   289,   290,   291,   292,
     293,   294,   295,   296,   297
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -678
static const short int yypact[] =
{
    -678,   821,  -678,  -196,  -252,  -245,  -678,  -678,  -678,  -240,
    -678,  -221,  -678,  -678,  -678,  -678,  -214,  -212,  -678,  -678,
    -185,  -168,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,    33,   697,  -126,
     -59,  -153,    18,  -151,   447,  -144,  -125,  -113,  -110,   296,
      14,     2,   -77,   616,   331,   -75,   -40,   -34,   -74,   -31,
     -30,     9,  -678,  -678,  -678,  -678,  -678,   -28,   -27,   -23,
     -21,   -20,   -12,   -11,    -8,    -3,     0,    21,    37,    43,
      55,    71,    73,    74,    78,   125,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,    31,  -678,  -678,    49,
    -678,    22,  -678,    79,    26,  -678,  -678,    50,  -678,    83,
     103,   104,   105,   106,   107,   111,   115,   117,   126,   132,
     139,   140,   145,   146,   147,   151,   152,   153,   154,   156,
     157,   160,   163,   169,   176,   178,   181,   182,   185,   186,
     187,  -678,   188,  -678,   189,   190,   192,   193,   195,   201,
     205,   206,   207,   211,   213,   214,   215,   220,   223,   224,
     226,   227,   236,     5,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,   337,
     743,    30,   333,    53,   237,   238,   239,   243,   245,   246,
     247,   249,   250,   252,   253,   258,   261,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
     128,   263,   264,    51,  -678,  -678,  -678,  -678,   171,  -678,
      11,  -678,   266,   269,   270,   271,   273,   274,   275,    28,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,   221,   279,
     287,   288,   289,   290,   292,   298,   300,   309,   313,   314,
     301,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,    62,    48,  -678,   122,   360,   413,   319,
    -678,   380,   134,   445,   384,   451,   451,   452,   454,   394,
     396,   397,   464,   451,   402,   407,   408,   410,   411,   352,
    -678,   490,   606,  -678,   354,   356,    24,  -678,  -678,  -678,
     461,   364,  -678,  -678,   362,   365,  -678,  -678,    19,  -678,
    -678,  -678,   427,   451,   432,   451,   497,   480,   504,   449,
     453,   455,   519,   499,   457,   525,   533,   534,   474,   451,
     475,   477,   541,   521,   479,   545,   546,   451,   547,   526,
     548,   552,   491,   493,   442,   508,   446,   451,   451,   512,
     576,   554,   515,   517,   -71,    17,   518,   520,   451,   451,
     582,   451,   523,   524,   528,   529,   465,  -678,  -678,  -678,
     458,   463,  -678,   467,   468,   170,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,   473,   472,   481,   483,   486,  -678,   488,
     489,   492,   507,   513,   527,   530,   531,   532,   542,   543,
     218,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,   544,
    -678,   549,  -678,     8,  -678,  -678,  -678,   478,  -678,   550,
     555,   557,  -678,   135,  -678,  -678,  -678,  -678,  -678,   593,
     602,   620,   632,   636,   644,   648,   651,   742,   654,   655,
     617,   482,  -678,  -678,   661,   671,   573,  -678,   500,   574,
     575,   578,   580,    38,  -678,  -678,  -678,  -678,   637,   639,
     650,   676,   653,   657,   451,   584,  -678,  -678,   691,   659,
     694,   700,   703,   704,   705,   708,   732,   711,   712,   614,
    -678,   615,   613,  -678,   621,    40,  -678,  -678,  -678,  -678,
     623,   625,  -678,    20,  -678,  -678,  -678,   626,   629,   634,
    -678,   635,   638,   641,   642,   257,   645,   649,   658,   660,
     663,   664,   665,   667,   669,   672,   674,   675,   679,   680,
    -678,   682,   633,   647,   652,   668,   673,   681,   687,   688,
     690,   692,   693,   695,   285,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,   685,   696,
     698,   709,   710,   714,   715,   716,   722,   723,  -678,   724,
     726,   727,   729,   734,   735,   736,   738,   124,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,   739,   744,   740,
    -678,   748,  -678,   751,   754,   741,   749,  -678,   752,   753,
     755,   756,   757,   758,   759,   760,   761,   762,   763,   764,
     767,   768,   770,   775,   776,   781,   789,   791,   792,   793,
     794,   795,   796,   797,   798,   799,   806,   808,   809,   811,
     551,   812,   830,   813,   814,   815,   816,   817,   818,   819,
     820,   822,   823,   824,   825,   826,   827,   828,   310,   829,
     831,   832,   833,   834,   835,  -678,   836,   451,   719,   837,
     800,   842,   838,  -678,  -678,   721,   843,   771,   774,   839,
     881,   890,   896,   897,   901,   854,   779,   943,   944,   905,
     946,   847,  -678,   948,   846,   950,   851,  -678,  -678,   849,
     953,   954,   858,   855,  -678,   856,   857,   859,   860,   861,
     862,   863,   864,   865,   866,   867,   868,   869,   870,   871,
     872,   873,   874,  -678,   875,   876,  -678,   877,   878,   879,
     880,   882,  -678,   883,   884,   885,   886,   887,   888,   889,
     891,   892,   893,   894,   895,   898,   899,   136,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,   958,
     978,   979,   900,  -678,   903,   904,   906,   907,   908,   909,
     910,  -678,   911,   912,   913,   914,   915,   916,   917,   918,
     919,   920,   921,  -678,  -678,   980,   902,   984,   922,  -678,
    -678,   993,   923,   924,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,   451,   451,   451,   451,   451,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  1022,   451,  1046,  1048,  1050,  1051,
    1029,  1053,  1054,   451,   451,   582,   932,  -678,  -678,  1033,
      97,   994,  1035,  1036,   997,   998,   999,  1040,   938,  1042,
    1043,  1044,  1045,  1069,  1047,  1049,  1052,   951,  -678,   955,
     956,  -678,  -678,   957,   959,  1055,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -236,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -228,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,   582,   582,   582,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,    -6,   961,   962,    -4,
     963,   964,  -678,   965,   966,   967,   968,   746,   969,   970,
     971,   972,   973,   974,   975,   976,   977,   981,   982,  -678,
     983,  1073,   985,  -678,   -73,   986,   987,  1003,  -201,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  1010,  1058,  1013,  1014,   988,  1039,  1056,  1057,
    1059,  1080,  1060,  1084,  1061,  1062,  1063,  1088,  1064,  1089,
    1065,   990,  -678,   992,   995,  1006,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  1007,   737,  1008,  -678,  1009,
     787,  -678,  -678,  -678,  -678,  -678,  -678,  1011,  1012,  1015,
    1016,  1017,  1018,  1019,  1020,  1021,  1023,  1024,  1025,  -678,
    1026,  1027,  1028,  1030,  1031,  1032,  1034,  1037,  1038,  1041,
     229,  1066,  1067,  1068,  1070,  1071,  1072,  1074,  1075,  -678,
    -678,  -678,  -678,  -678,  -678,  -193,  -678,  -678,   551,  -678,
     830,  -678,  -678,  -678,  -678,  -678,  -190,  -678,  -678,  -678,
    -678,  -678,  -188,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,   853,  -678,
    -678,  -180,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -177,  -678,  -678,
    -678,  -678,  -169,  -678,  -678,  -678,  1116,  -678,   858,  1076,
    1077,  1078,  1079,   609,  1081,  1082,  1083,  1085,  1086,  1087,
    1090,  1091,  1092,  1093,  1094,  1095,  1096,  1097,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -164,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -157,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,   303,  -678,
    -156,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  1055,  -678,  -678,  -678,    -6,  -678,    -4,  -678,
    -678,   746,  -678,  1073,  -678,   -73,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,   656,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -140,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,   737,  -678,   787,
    -678,  -678,   229,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,   609,  -678,  -678,  -678,  -678
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -678,  -678,  -678,  -530,  -335,  -677,  -418,  -678,  -678,   991,
    -678,  -678,  -678,  -678,   942,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  1177,  -678,
    -678,  -678,  -678,  -678,   630,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,   141,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -143,  -104,  -678,  -678,  -678,  -678,
     683,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,   -79,
    -678,   790,  -678,  -678,    41,  -678,  -678,  -678,  -678,  -678,
     840,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,   -61,
      75,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,   773,  -678,  -678,  -678,  -678,  -678,
    -678,   747,  -678,  -678,  -678,  -678,  -678,  -103,  -678,  -678,
    -678,   745,  -678,  -678,  -678,  -678,  -102,  -678,  -678,  -678,
    -678,   662,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -101,   -25,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
     -55,  -678,   844,  -678,  -678,  -678,  -678,  -678,   949,  -678,
    -678,  -678,  -678,  1180,  -678,  -678,  -678,  -678,  -678,  -678,
     -36,  -678,   939,  -678,  -678,  -678,  -678,  1126,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,   120,  -678,
    -678,  -678,   123,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,   925,  -678,  -678,  -678,  -678,  -678,   -35,  -678,  -678,
    -678,  -678,  -678,   -32,  -678,  -678,  1217,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,  -678,
    -678,  -678,  -678,  -678,  -678,  -678,  -678,  1098,  -678,  -678,
    -678,  -678,  -678,  -678,  -678
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned short int yytable[] =
{
     576,   577,   719,  1240,    47,  1194,   128,  1200,   584,   478,
      67,    48,   519,   129,   130,   270,    52,   131,  1187,   122,
     363,   560,  1188,   353,   132,   353,  1189,   122,   115,   281,
    1190,   478,   133,   520,    67,    54,   134,   135,   669,   519,
     671,   551,    59,   136,    60,    68,   137,   138,   139,   560,
     140,   363,   270,  1247,   685,    69,   141,  1248,    45,    46,
     520,  1341,   693,   551,  1345,  1342,  1347,   282,  1346,    68,
    1348,    63,   703,   704,  1350,   142,   143,  1352,  1351,    69,
     144,  1353,   283,   716,   717,  1354,   720,   145,    64,  1355,
    1396,   146,   147,   148,  1397,   118,   149,  1398,  1401,   150,
     151,  1399,  1402,   121,   284,   127,   285,   123,   286,   287,
     152,   354,   239,   354,  1410,   123,   153,   154,  1411,   155,
     156,   157,   158,   710,   711,   618,    76,   619,   288,    70,
     620,   240,   271,   159,   621,   521,   487,   787,    77,   364,
     561,   788,   160,   241,   161,   162,   242,   163,   622,   623,
     624,   164,   165,    70,   625,   166,   277,  1241,    78,    79,
     552,   789,   521,   272,   479,    80,   167,   522,   561,   271,
     364,   428,   626,   790,   429,   365,   627,   628,   355,   280,
     355,   323,   552,   326,   791,   168,   479,   169,   488,   792,
    1195,   170,  1201,   480,   522,   171,   172,   173,   174,   840,
     272,   793,   175,   176,   366,   562,   365,   629,   794,   630,
     177,   712,   713,   795,   430,   480,   324,   431,   489,   443,
     325,    81,    82,   631,   490,   553,   327,   328,   796,   331,
     332,    83,    84,   562,   333,   366,   334,   335,   444,  1323,
     178,  1324,   179,   445,   632,   336,   337,   553,   180,   338,
     481,    85,    86,   181,   339,  1325,   797,   340,   182,  1326,
     426,   798,   243,   756,   329,   572,   446,   447,    87,    88,
      89,   448,   481,   432,   666,   863,   567,   633,   341,   659,
      90,   361,   554,   535,   799,   449,   591,   351,   491,    91,
     433,   634,   450,   832,   342,   858,   800,   243,   801,   802,
     343,   635,   298,   803,   554,   352,   516,   498,   592,  1161,
    1162,   451,   344,  1323,   593,  1324,   244,   245,   246,   247,
     248,   249,   250,   251,  1025,  1026,  1027,  1327,   345,  1325,
     346,   347,   298,  1326,   487,   348,   360,   299,   428,   452,
     372,   429,  1142,  1143,  1144,  1145,  1146,   453,  1191,  1192,
    1193,   244,   245,   246,   247,   248,   249,   250,   251,  1328,
     373,   374,   375,   376,   377,   252,   454,   299,   378,    92,
      93,    94,   379,   636,   380,   455,   456,   804,   805,   927,
     349,   430,   513,   381,   431,   300,   488,   806,   575,   382,
     763,  1111,  1037,   594,   595,   596,   383,   384,   597,   253,
     252,  1327,   385,   386,   387,   598,   457,   458,   388,   389,
     390,   391,   434,   392,   393,   300,   489,   394,   599,   600,
     395,   301,   490,   302,   303,   732,   396,   518,   872,   873,
     874,   875,   876,   397,   253,   398,   601,   602,   399,   400,
     432,   718,   401,   402,   403,   405,   407,   408,   128,   409,
     410,   301,   411,   302,   303,   129,   130,   433,   412,   131,
     459,   603,   413,   414,   415,  1329,   132,   304,   416,   305,
     417,   418,   419,   751,   133,   537,   254,   420,   134,   135,
     421,   422,   306,   423,   424,   136,   491,  1158,   137,   138,
     139,   591,   140,   425,   499,   500,   501,   304,   141,   305,
     502,   787,   503,   504,   505,   788,   506,   507,   255,   508,
     509,   254,   306,   592,   568,   510,   511,   142,   143,   593,
     514,   515,   144,   528,   307,   789,   529,   530,   531,   145,
     532,   533,   534,   146,   147,   148,   538,   790,   149,  1329,
     906,   150,   151,   255,   539,   540,   541,   542,   791,   543,
     308,   309,   152,   792,   307,   544,   549,   545,   153,   154,
    1148,   155,   156,   157,   158,   793,   546,   569,  1156,  1157,
     547,   548,   794,   570,   571,   159,   573,   795,   574,   434,
     308,   309,   575,   578,   160,   579,   161,   162,   580,   163,
     581,   582,   796,   164,   165,   583,   585,   166,   594,   595,
     596,   586,   587,   597,   588,   589,   590,   618,   167,   619,
     598,   657,   620,   658,  1362,   661,   621,   281,   662,   663,
     797,   668,   664,   599,   600,   798,   670,   168,   672,   169,
     622,   623,   624,   170,   673,   674,   625,   171,   172,   173,
     174,   601,   602,   675,   175,   176,  1363,   676,   799,   677,
     678,   680,   177,   679,   626,   282,   681,  1364,   627,   628,
     800,  1362,   801,   802,   682,   683,   603,   803,   684,   686,
     283,   687,   688,   690,  1365,   689,   691,   692,   694,   696,
     695,  1366,   178,   697,   179,   698,  1367,   699,  1368,   629,
     180,   630,   284,  1363,   285,   181,   286,   287,    76,   700,
     182,  1369,   701,   702,  1364,   631,   705,   706,   707,   708,
      77,   709,   714,   718,   715,   727,   288,   721,   722,   725,
     728,  1365,   723,   724,   730,   731,   632,   734,  1366,   735,
      78,    79,   758,  1367,  1370,  1368,   783,    80,   736,  1371,
     737,   804,   805,   738,   443,   740,   741,   765,  1369,   742,
    1372,   806,   969,   970,   971,   972,   766,   973,   974,   633,
     975,   976,   977,   444,   743,   978,  1210,  1211,   445,  1373,
     744,  1374,  1375,   634,   767,   979,   980,   981,   982,   983,
     984,  1370,   985,   635,   745,   986,   768,   746,   747,   748,
     769,   446,   447,    81,    82,  1212,   448,  1372,   770,   749,
     750,   753,   771,    83,    84,   772,   755,   760,   780,   781,
     449,   782,   761,  1213,   762,   784,  1373,   450,  1374,  1375,
    1214,     2,     3,    85,    86,   785,     4,   786,   828,  1273,
     837,   834,   829,   835,  1376,   830,   451,   831,   841,  1215,
      87,    88,    89,     5,   836,   842,     6,   838,   844,     7,
    1377,   839,    90,   843,   845,   636,     8,   846,   847,   848,
    1378,    91,   849,   850,   452,   851,   852,  1216,   853,   854,
     855,     9,   453,  1210,  1211,  1217,  1218,   860,   857,  1288,
     865,  1376,   861,   866,    10,    11,   512,    12,   867,   868,
     894,   454,   869,   929,    13,   870,   871,  1377,   930,   879,
     455,   456,  1212,   880,   895,   933,  1274,  1378,   934,   896,
    1054,    14,   881,  1038,   882,  1043,  1219,   883,   884,   885,
    1213,   886,    15,   887,    16,   897,   888,  1214,   889,   890,
     898,   457,   458,   891,   892,  1220,   893,  1275,   899,   908,
      17,    92,    93,    94,   900,   901,  1215,   902,  1112,   903,
     904,  1276,   905,   909,  1040,   910,  1289,    18,   773,   774,
     775,   776,   777,   778,   779,  1045,   911,   912,  1046,  1277,
    1278,   913,   914,   915,  1216,  1279,  1280,  1281,  1282,   916,
     917,   919,  1217,   920,   921,   459,   922,  1290,  1283,  1067,
      19,   923,   924,   925,   931,   926,  1041,  1044,   935,    20,
      21,  1291,   932,   936,    22,    23,   937,   938,  1053,   939,
     940,   941,   942,   943,   944,   945,   946,   947,   948,  1292,
    1293,   949,   950,  1219,   951,  1294,  1295,  1296,  1297,   952,
     953,   990,   991,   992,   993,   954,   994,   995,  1298,   996,
     997,   998,  1220,   955,   999,   956,   957,   958,   959,   960,
     961,   962,   963,   964,  1000,  1001,  1002,  1003,  1004,  1005,
     965,  1006,   966,   967,  1007,   968,   989,  1010,  1011,  1012,
    1013,  1014,  1015,  1016,  1017,  1048,  1018,  1019,  1020,  1021,
    1022,  1023,  1024,  1030,  1049,  1031,  1032,  1033,  1034,  1035,
    1050,  1051,  1042,  1036,  1039,  1052,  1047,  1055,  1056,  1057,
    1058,  1059,  1060,  1061,  1062,  1063,  1064,  1065,  1066,  1070,
    1071,  1072,  1113,  1073,  1074,  1075,  1076,  1077,  1078,  1079,
    1080,  1081,  1082,  1083,  1084,  1085,  1086,  1087,  1088,  1089,
    1090,  1091,  1114,  1115,  1135,  1092,  1093,  1094,  1137,  1095,
    1097,  1098,  1099,  1100,  1101,  1102,  1103,  1139,  1104,  1105,
    1106,  1107,  1108,  1147,  1116,  1109,  1110,  1117,  1118,  1136,
    1119,  1120,  1121,  1122,  1123,  1124,  1125,  1126,  1127,  1128,
    1129,  1130,  1131,  1132,  1133,  1134,  1138,  1149,  1141,  1150,
    1140,  1151,  1152,  1153,  1154,  1155,  1159,  1160,  1163,  1164,
    1165,  1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,  1174,
    1175,  1176,  1246,  1177,  1249,  1179,  1178,  1251,  1252,  1180,
    1181,  1182,  1250,  1183,  1184,  1198,  1199,  1204,  1205,  1206,
    1207,  1208,  1209,  1224,  1225,  1226,  1227,  1228,  1229,  1230,
    1231,  1232,  1236,  1254,  1258,  1233,  1234,  1235,  1260,  1239,
    1244,  1245,  1264,  1266,  1268,  1253,  1269,  1356,   330,  1270,
    1255,  1256,   550,  1257,  1259,  1261,  1262,  1263,  1265,  1267,
    1271,  1272,  1286,  1287,   517,  1301,  1302,  1409,  1415,  1303,
    1304,  1305,  1306,  1307,  1308,  1309,  1408,  1310,  1311,  1312,
    1313,  1314,  1315,   764,  1316,  1317,  1318,   907,  1319,  1357,
    1406,  1320,  1321,  1349,  1412,  1322,   833,  1413,  1407,   928,
     752,  1414,   859,  1400,   362,   660,  1403,   667,   864,   427,
    1344,  1343,   350,  1405,  1404,     0,     0,     0,     0,     0,
    1333,  1334,  1335,     0,  1336,  1337,  1338,   757,  1339,  1340,
    1358,  1359,  1360,  1361,     0,  1382,  1383,  1384,     0,  1385,
    1386,  1387,     0,     0,  1388,  1389,  1390,  1391,  1392,  1393,
    1394,  1395,     0,     0,     0,     0,     0,     0,     0,     0,
     733,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   536
};

static const short int yycheck[] =
{
     335,   336,   420,    76,   256,    11,     1,    11,   343,     1,
       1,   256,     1,     8,     9,     1,   256,    12,   254,     1,
       1,     1,   258,     1,    19,     1,   254,     1,   154,     1,
     258,     1,    27,    22,     1,   256,    31,    32,   373,     1,
     375,     1,   256,    38,   256,    36,    41,    42,    43,     1,
      45,     1,     1,   254,   389,    46,    51,   258,   254,   255,
      22,   254,   397,     1,   254,   258,   254,    39,   258,    36,
     258,   256,   407,   408,   254,    70,    71,   254,   258,    46,
      75,   258,    54,   418,   419,   254,   421,    82,   256,   258,
     254,    86,    87,    88,   258,   154,    91,   254,   254,    94,
      95,   258,   258,   256,    76,   256,    78,    89,    80,    81,
     105,    89,   256,    89,   254,    89,   111,   112,   258,   114,
     115,   116,   117,   194,   195,     1,     1,     3,   100,   120,
       6,   256,   118,   128,    10,   124,     1,     1,    13,   120,
     120,     5,   137,   256,   139,   140,   256,   142,    24,    25,
      26,   146,   147,   120,    30,   150,   154,   230,    33,    34,
     120,    25,   124,   149,   156,    40,   161,   156,   120,   118,
     120,     1,    48,    37,     4,   156,    52,    53,   156,   256,
     156,   256,   120,   257,    48,   180,   156,   182,    53,    53,
     196,   186,   196,   185,   156,   190,   191,   192,   193,   534,
     149,    65,   197,   198,   185,   185,   156,    83,    72,    85,
     205,   194,   195,    77,    44,   185,   256,    47,    83,     1,
     254,    96,    97,    99,    89,   185,   257,   257,    92,   257,
     257,   106,   107,   185,   257,   185,   257,   257,    20,    10,
     235,    12,   237,    25,   120,   257,   257,   185,   243,   257,
     242,   126,   127,   248,   257,    26,   120,   257,   253,    30,
     255,   125,     1,   255,   255,   131,    48,    49,   143,   144,
     145,    53,   242,   103,   255,   255,   154,   153,   257,   255,
     155,   255,   242,   255,   148,    67,     1,   256,   153,   164,
     120,   167,    74,   255,   257,   255,   160,     1,   162,   163,
     257,   177,     1,   167,   242,   256,   255,   254,    23,   212,
     213,    93,   257,    10,    29,    12,    55,    56,    57,    58,
      59,    60,    61,    62,    14,    15,    16,    98,   257,    26,
     257,   257,     1,    30,     1,   257,   257,    36,     1,   121,
     257,     4,   872,   873,   874,   875,   876,   129,  1025,  1026,
    1027,    55,    56,    57,    58,    59,    60,    61,    62,   130,
     257,   257,   257,   257,   257,   104,   148,    36,   257,   244,
     245,   246,   257,   249,   257,   157,   158,   241,   242,   255,
     255,    44,   254,   257,    47,    84,    53,   251,   131,   257,
     255,   255,   727,   108,   109,   110,   257,   257,   113,   138,
     104,    98,   257,   257,   257,   120,   188,   189,   257,   257,
     257,   257,   242,   257,   257,    84,    83,   257,   133,   134,
     257,   120,    89,   122,   123,   255,   257,   256,   171,   172,
     173,   174,   175,   257,   138,   257,   151,   152,   257,   257,
     103,   131,   257,   257,   257,   257,   257,   257,     1,   257,
     257,   120,   257,   122,   123,     8,     9,   120,   257,    12,
     242,   176,   257,   257,   257,   236,    19,   166,   257,   168,
     257,   257,   257,   255,    27,   254,   215,   257,    31,    32,
     257,   257,   181,   257,   257,    38,   153,   905,    41,    42,
      43,     1,    45,   257,   257,   257,   257,   166,    51,   168,
     257,     1,   257,   257,   257,     5,   257,   257,   247,   257,
     257,   215,   181,    23,   154,   257,   255,    70,    71,    29,
     257,   257,    75,   257,   223,    25,   257,   257,   257,    82,
     257,   257,   257,    86,    87,    88,   257,    37,    91,   236,
     255,    94,    95,   247,   257,   257,   257,   257,    48,   257,
     249,   250,   105,    53,   223,   257,   255,   257,   111,   112,
     895,   114,   115,   116,   117,    65,   257,   154,   903,   904,
     257,   257,    72,   254,   194,   128,   131,    77,   194,   242,
     249,   250,   131,   131,   137,   131,   139,   140,   194,   142,
     194,   194,    92,   146,   147,   131,   194,   150,   108,   109,
     110,   194,   194,   113,   194,   194,   254,     1,   161,     3,
     120,   257,     6,   257,     5,   154,    10,     1,   254,   257,
     120,   194,   257,   133,   134,   125,   194,   180,   131,   182,
      24,    25,    26,   186,   154,   131,    30,   190,   191,   192,
     193,   151,   152,   194,   197,   198,    37,   194,   148,   194,
     131,   194,   205,   154,    48,    39,   131,    48,    52,    53,
     160,     5,   162,   163,   131,   131,   176,   167,   194,   194,
      54,   194,   131,   194,    65,   154,   131,   131,   131,   131,
     154,    72,   235,   131,   237,   194,    77,   194,    79,    83,
     243,    85,    76,    37,    78,   248,    80,    81,     1,   257,
     253,    92,   194,   257,    48,    99,   194,   131,   154,   194,
      13,   194,   194,   131,   194,   257,   100,   194,   194,   254,
     257,    65,   194,   194,   257,   257,   120,   254,    72,   257,
      33,    34,   254,    77,   125,    79,   254,    40,   257,   130,
     257,   241,   242,   257,     1,   257,   257,   154,    92,   257,
     141,   251,   201,   202,   203,   204,   154,   206,   207,   153,
     209,   210,   211,    20,   257,   214,    20,    21,    25,   160,
     257,   162,   163,   167,   154,   224,   225,   226,   227,   228,
     229,   125,   231,   177,   257,   234,   154,   257,   257,   257,
     154,    48,    49,    96,    97,    49,    53,   141,   154,   257,
     257,   257,   154,   106,   107,   154,   257,   257,   154,   154,
      67,   194,   257,    67,   257,   154,   160,    74,   162,   163,
      74,     0,     1,   126,   127,   154,     5,   254,   254,    92,
     154,   194,   257,   194,   225,   257,    93,   257,   254,    93,
     143,   144,   145,    22,   194,   154,    25,   194,   154,    28,
     241,   194,   155,   194,   154,   249,    35,   154,   154,   154,
     251,   164,   154,   131,   121,   154,   154,   121,   254,   254,
     257,    50,   129,    20,    21,   129,   130,   254,   257,    92,
     254,   225,   257,   254,    63,    64,   256,    66,   254,   254,
     257,   148,   254,   154,    73,   254,   254,   241,   154,   254,
     157,   158,    49,   254,   257,   154,   169,   251,   154,   257,
     131,    90,   254,   194,   254,   194,   170,   254,   254,   254,
      67,   254,   101,   254,   103,   257,   254,    74,   254,   254,
     257,   188,   189,   254,   254,   189,   254,   200,   257,   254,
     119,   244,   245,   246,   257,   257,    93,   257,   807,   257,
     257,   214,   257,   257,   154,   257,   169,   136,   216,   217,
     218,   219,   220,   221,   222,   194,   257,   257,   194,   232,
     233,   257,   257,   257,   121,   238,   239,   240,   241,   257,
     257,   257,   129,   257,   257,   242,   257,   200,   251,   131,
     169,   257,   257,   257,   254,   257,   154,   154,   257,   178,
     179,   214,   254,   254,   183,   184,   254,   254,   154,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   232,
     233,   254,   254,   170,   254,   238,   239,   240,   241,   254,
     254,   201,   202,   203,   204,   254,   206,   207,   251,   209,
     210,   211,   189,   254,   214,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   224,   225,   226,   227,   228,   229,
     254,   231,   254,   254,   234,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   194,   254,   254,   254,   254,
     254,   254,   254,   254,   194,   254,   254,   254,   254,   254,
     194,   194,   254,   257,   257,   194,   257,   154,   154,   194,
     154,   254,   154,   257,   154,   254,   257,   154,   154,   254,
     254,   254,   154,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   154,   154,   154,   257,   257,   257,   154,   257,
     257,   257,   257,   257,   257,   257,   257,   154,   257,   257,
     257,   257,   257,   131,   254,   257,   257,   254,   254,   257,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   131,   254,   131,
     257,   131,   131,   154,   131,   131,   254,   154,   194,   154,
     154,   194,   194,   194,   154,   257,   154,   154,   154,   154,
     131,   154,   199,   154,   194,   254,   154,   194,   194,   254,
     254,   254,   154,   254,   159,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   159,   194,   154,   254,   254,   254,   154,   254,
     254,   254,   154,   154,   254,   257,   254,   131,    71,   254,
     194,   194,   310,   194,   194,   194,   194,   194,   194,   194,
     254,   254,   254,   254,   273,   254,   254,  1371,  1411,   254,
     254,   254,   254,   254,   254,   254,  1355,   254,   254,   254,
     254,   254,   254,   493,   254,   254,   254,   604,   254,  1248,
    1351,   254,   254,  1218,  1397,   254,   523,  1399,  1353,   637,
     460,  1402,   555,  1328,   124,   356,  1342,   368,   563,   183,
    1190,  1188,    95,  1348,  1346,    -1,    -1,    -1,    -1,    -1,
     254,   254,   254,    -1,   254,   254,   254,   483,   254,   254,
     254,   254,   254,   254,    -1,   254,   254,   254,    -1,   254,
     254,   254,    -1,    -1,   254,   254,   254,   254,   254,   254,
     254,   254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     435,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   289
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   260,     0,     1,     5,    22,    25,    28,    35,    50,
      63,    64,    66,    73,    90,   101,   103,   119,   136,   169,
     178,   179,   183,   184,   261,   266,   271,   285,   291,   306,
     335,   353,   366,   390,   397,   407,   416,   444,   454,   460,
     464,   474,   537,   553,   574,   254,   255,   256,   256,   336,
     417,   455,   256,   465,   256,   538,   367,   445,   354,   256,
     256,   307,   391,   256,   256,   398,   408,     1,    36,    46,
     120,   286,   287,   288,   289,   290,     1,    13,    33,    34,
      40,    96,    97,   106,   107,   126,   127,   143,   144,   145,
     155,   164,   244,   245,   246,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,   154,   337,   341,   154,   418,
     422,   256,     1,    89,   461,   462,   463,   256,     1,     8,
       9,    12,    19,    27,    31,    32,    38,    41,    42,    43,
      45,    51,    70,    71,    75,    82,    86,    87,    88,    91,
      94,    95,   105,   111,   112,   114,   115,   116,   117,   128,
     137,   139,   140,   142,   146,   147,   150,   161,   180,   182,
     186,   190,   191,   192,   193,   197,   198,   205,   235,   237,
     243,   248,   253,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   528,   532,   533,   534,   535,   536,   256,
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
     257,   257,   257,   257,   257,   257,   257,   257,   257,   255,
     555,   256,   256,     1,    89,   156,   456,   457,   458,   459,
     257,   255,   462,     1,   120,   156,   185,   466,   470,   471,
     472,   473,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   529,   257,   525,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   255,   476,     1,     4,
      44,    47,   103,   120,   242,   539,   540,   541,   542,   543,
     547,   548,   549,     1,    20,    25,    48,    49,    53,    67,
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
     194,   194,   194,   131,   263,   194,   194,   194,   194,   194,
     254,     1,    23,    29,   108,   109,   110,   113,   120,   133,
     134,   151,   152,   176,   338,   339,   340,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,     1,     3,
       6,    10,    24,    25,    26,    30,    48,    52,    53,    83,
      85,    99,   120,   153,   167,   177,   249,   419,   420,   421,
     423,   424,   425,   426,   427,   428,   429,   430,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   257,   257,   255,
     457,   154,   254,   257,   257,   467,   255,   471,   194,   263,
     194,   263,   131,   154,   131,   194,   194,   194,   131,   154,
     194,   131,   131,   131,   194,   263,   194,   194,   131,   154,
     194,   131,   131,   263,   131,   154,   131,   131,   194,   194,
     257,   194,   257,   263,   263,   194,   131,   154,   194,   194,
     194,   195,   194,   195,   194,   194,   263,   263,   131,   265,
     263,   194,   194,   194,   194,   254,   550,   257,   257,   544,
     257,   257,   255,   540,   254,   257,   257,   257,   257,   376,
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
     254,   254,   254,   254,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   255,   339,   254,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   431,   257,
     257,   257,   257,   257,   257,   257,   257,   255,   420,   154,
     154,   254,   254,   154,   154,   257,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   201,
     202,   203,   204,   206,   207,   209,   210,   211,   214,   224,
     225,   226,   227,   228,   229,   231,   234,   530,   531,   254,
     201,   202,   203,   204,   206,   207,   209,   210,   211,   214,
     224,   225,   226,   227,   228,   229,   231,   234,   526,   527,
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
     258,   264,   264,   264,    11,   196,   551,   552,   254,   254,
      11,   196,   545,   546,   254,   254,   254,   254,   254,   254,
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
     254,   254,   258,   531,   527,   254,   258,   254,   258,   379,
     254,   258,   254,   258,   254,   258,   131,   363,   254,   254,
     254,   254,     5,    37,    48,    65,    72,    77,    79,    92,
     125,   130,   141,   160,   162,   163,   225,   241,   251,   332,
     333,   334,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   258,   254,   258,
     434,   254,   258,   469,   552,   546,   378,   449,   358,   334,
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

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)		\
   ((Current).first_line   = (Rhs)[1].first_line,	\
    (Current).first_column = (Rhs)[1].first_column,	\
    (Current).last_line    = (Rhs)[N].last_line,	\
    (Current).last_column  = (Rhs)[N].last_column)
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

#if defined (YYMAXDEPTH) && YYMAXDEPTH == 0
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
#line 420 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 28:
#line 422 "ircd_parser.y"
    {
			yyval.number = yyvsp[-1].number + yyvsp[0].number;
		}
    break;

  case 29:
#line 426 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number + yyvsp[0].number;
		}
    break;

  case 30:
#line 430 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 + yyvsp[0].number;
		}
    break;

  case 31:
#line 434 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 + yyvsp[0].number;
		}
    break;

  case 32:
#line 438 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 + yyvsp[0].number;
		}
    break;

  case 33:
#line 442 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 * 7 + yyvsp[0].number;
		}
    break;

  case 34:
#line 447 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 36:
#line 448 "ircd_parser.y"
    { yyval.number = yyvsp[-1].number + yyvsp[0].number; }
    break;

  case 37:
#line 449 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number + yyvsp[0].number; }
    break;

  case 38:
#line 450 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 + yyvsp[0].number; }
    break;

  case 39:
#line 451 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 * 1024 + yyvsp[0].number; }
    break;

  case 46:
#line 465 "ircd_parser.y"
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
#line 482 "ircd_parser.y"
    {
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
}
    break;

  case 63:
#line 506 "ircd_parser.y"
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
#line 540 "ircd_parser.y"
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
#line 600 "ircd_parser.y"
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
#line 614 "ircd_parser.y"
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
#line 632 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.description);
    DupString(ServerInfo.description,yylval.string);
  }
}
    break;

  case 68:
#line 641 "ircd_parser.y"
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
#line 655 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.network_desc);
    DupString(ServerInfo.network_desc, yylval.string);
  }
}
    break;

  case 70:
#line 664 "ircd_parser.y"
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
#line 692 "ircd_parser.y"
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
#line 722 "ircd_parser.y"
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
#line 745 "ircd_parser.y"
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
#line 801 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.name);
    DupString(AdminInfo.name, yylval.string);
  }
}
    break;

  case 82:
#line 810 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.email);
    DupString(AdminInfo.email, yylval.string);
  }
}
    break;

  case 83:
#line 819 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.description);
    DupString(AdminInfo.description, yylval.string);
  }
}
    break;

  case 100:
#line 846 "ircd_parser.y"
    {
                        }
    break;

  case 101:
#line 850 "ircd_parser.y"
    {
                        }
    break;

  case 102:
#line 854 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
}
    break;

  case 103:
#line 861 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
}
    break;

  case 104:
#line 868 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
}
    break;

  case 105:
#line 875 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operspylog, yylval.string,
            sizeof(ConfigLoggingEntry.operspylog));
}
    break;

  case 106:
#line 882 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.glinelog, yylval.string,
            sizeof(ConfigLoggingEntry.glinelog));
}
    break;

  case 107:
#line 889 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.klinelog, yylval.string,
            sizeof(ConfigLoggingEntry.klinelog));
}
    break;

  case 108:
#line 896 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.ioerrlog, yylval.string,
            sizeof(ConfigLoggingEntry.ioerrlog));
}
    break;

  case 109:
#line 903 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.killlog, yylval.string,
            sizeof(ConfigLoggingEntry.killlog));
}
    break;

  case 110:
#line 910 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
}
    break;

  case 111:
#line 914 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
}
    break;

  case 112:
#line 918 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
}
    break;

  case 113:
#line 922 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
}
    break;

  case 114:
#line 926 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
}
    break;

  case 115:
#line 930 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
}
    break;

  case 116:
#line 934 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
}
    break;

  case 117:
#line 940 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 118:
#line 949 "ircd_parser.y"
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
#line 962 "ircd_parser.y"
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
#line 1053 "ircd_parser.y"
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
#line 1065 "ircd_parser.y"
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
#line 1077 "ircd_parser.y"
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
#line 1096 "ircd_parser.y"
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
#line 1108 "ircd_parser.y"
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
#line 1119 "ircd_parser.y"
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
#line 1130 "ircd_parser.y"
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
#line 1172 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 152:
#line 1181 "ircd_parser.y"
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
#line 1192 "ircd_parser.y"
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
#line 1203 "ircd_parser.y"
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
#line 1214 "ircd_parser.y"
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
#line 1225 "ircd_parser.y"
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
#line 1236 "ircd_parser.y"
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
#line 1247 "ircd_parser.y"
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
#line 1258 "ircd_parser.y"
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
#line 1269 "ircd_parser.y"
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
#line 1280 "ircd_parser.y"
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
#line 1291 "ircd_parser.y"
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
#line 1302 "ircd_parser.y"
    {
}
    break;

  case 167:
#line 1306 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 168:
#line 1307 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 169:
#line 1310 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 170:
#line 1317 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 171:
#line 1324 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 172:
#line 1331 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 173:
#line 1338 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 174:
#line 1345 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 175:
#line 1352 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 176:
#line 1359 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 177:
#line 1366 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 178:
#line 1373 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 179:
#line 1380 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 180:
#line 1387 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 181:
#line 1394 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 182:
#line 1401 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 183:
#line 1408 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 184:
#line 1415 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) ClearConfEncrypted(yy_aconf);
    else SetConfEncrypted(yy_aconf);
  }
}
    break;

  case 185:
#line 1428 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = (struct ClassItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 186:
#line 1435 "ircd_parser.y"
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

  case 204:
#line 1485 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    MyFree(yy_class_name);
    DupString(yy_class_name, yylval.string);
  }
}
    break;

  case 205:
#line 1494 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    MyFree(yy_class_name);
    DupString(yy_class_name, yylval.string);
  }
}
    break;

  case 206:
#line 1503 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 207:
#line 1509 "ircd_parser.y"
    {
  if (ypass == 1)
    PingWarning(yy_class) = yyvsp[-1].number;
}
    break;

  case 208:
#line 1515 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = yyvsp[-1].number;
}
    break;

  case 209:
#line 1521 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 210:
#line 1527 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = yyvsp[-1].number;
}
    break;

  case 211:
#line 1533 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = yyvsp[-1].number;
}
    break;

  case 212:
#line 1539 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = yyvsp[-1].number;
}
    break;

  case 213:
#line 1545 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = yyvsp[-1].number;
}
    break;

  case 214:
#line 1551 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = yyvsp[-1].number;
}
    break;

  case 215:
#line 1557 "ircd_parser.y"
    {
  if (ypass == 1)
    CidrBitlen(yy_class) = yyvsp[-1].number;
}
    break;

  case 216:
#line 1563 "ircd_parser.y"
    {
  if (ypass == 1)
    NumberPerCidr(yy_class) = yyvsp[-1].number;
}
    break;

  case 217:
#line 1572 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    listener_address = NULL;
    listener_flags = 0;
  }
}
    break;

  case 218:
#line 1579 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 219:
#line 1588 "ircd_parser.y"
    {
}
    break;

  case 223:
#line 1593 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_SSL;
}
    break;

  case 224:
#line 1597 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_HIDDEN;
}
    break;

  case 235:
#line 1610 "ircd_parser.y"
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
#line 1625 "ircd_parser.y"
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
#line 1647 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 238:
#line 1656 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 239:
#line 1668 "ircd_parser.y"
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
#line 1680 "ircd_parser.y"
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
#line 1745 "ircd_parser.y"
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
#line 1764 "ircd_parser.y"
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
#line 1777 "ircd_parser.y"
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
#line 1788 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 264:
#line 1797 "ircd_parser.y"
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
#line 1808 "ircd_parser.y"
    {
}
    break;

  case 269:
#line 1812 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 270:
#line 1813 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 271:
#line 1816 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 272:
#line 1824 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 273:
#line 1831 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 274:
#line 1838 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 275:
#line 1845 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 276:
#line 1852 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 277:
#line 1859 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 278:
#line 1866 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 279:
#line 1873 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 280:
#line 1880 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 281:
#line 1889 "ircd_parser.y"
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
#line 1900 "ircd_parser.y"
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
#line 1911 "ircd_parser.y"
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
#line 1922 "ircd_parser.y"
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
#line 1933 "ircd_parser.y"
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
#line 1944 "ircd_parser.y"
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
#line 1956 "ircd_parser.y"
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
#line 1975 "ircd_parser.y"
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
#line 1985 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = yyvsp[-1].number;
  }
}
    break;

  case 290:
#line 1994 "ircd_parser.y"
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
#line 2009 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 292:
#line 2016 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 299:
#line 2028 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 300:
#line 2037 "ircd_parser.y"
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
#line 2052 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char def_reason[] = "No reason";

    create_nick_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
  }
}
    break;

  case 302:
#line 2065 "ircd_parser.y"
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
#line 2073 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 310:
#line 2084 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 311:
#line 2093 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    split_nuh(yylval.string, NULL, &yy_match_item->user, &yy_match_item->host);
  }
}
    break;

  case 312:
#line 2101 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 316:
#line 2108 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 317:
#line 2112 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TKLINE;
}
    break;

  case 318:
#line 2116 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 319:
#line 2120 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 320:
#line 2124 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TXLINE;
}
    break;

  case 321:
#line 2128 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 322:
#line 2132 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 323:
#line 2136 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TRESV;
}
    break;

  case 324:
#line 2140 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 325:
#line 2144 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_LOCOPS;
}
    break;

  case 326:
#line 2148 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 327:
#line 2157 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_conf->flags = SHARED_ALL;
  }
}
    break;

  case 328:
#line 2164 "ircd_parser.y"
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
#line 2177 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 335:
#line 2183 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = 0;
}
    break;

  case 339:
#line 2190 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_KLINE;
}
    break;

  case 340:
#line 2194 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TKLINE;
}
    break;

  case 341:
#line 2198 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNKLINE;
}
    break;

  case 342:
#line 2202 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_XLINE;
}
    break;

  case 343:
#line 2206 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TXLINE;
}
    break;

  case 344:
#line 2210 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNXLINE;
}
    break;

  case 345:
#line 2214 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_RESV;
}
    break;

  case 346:
#line 2218 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TRESV;
}
    break;

  case 347:
#line 2222 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNRESV;
}
    break;

  case 348:
#line 2226 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_LOCOPS;
}
    break;

  case 349:
#line 2230 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = SHARED_ALL;
}
    break;

  case 350:
#line 2239 "ircd_parser.y"
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
#line 2257 "ircd_parser.y"
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
#line 2400 "ircd_parser.y"
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
#line 2412 "ircd_parser.y"
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
#line 2424 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 378:
#line 2433 "ircd_parser.y"
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
#line 2459 "ircd_parser.y"
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
#line 2471 "ircd_parser.y"
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
#line 2483 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = yyvsp[-1].number;
}
    break;

  case 382:
#line 2489 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 383:
#line 2493 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 384:
#line 2501 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 385:
#line 2510 "ircd_parser.y"
    {
}
    break;

  case 389:
#line 2514 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 390:
#line 2515 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 391:
#line 2518 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfLazyLink(yy_aconf);
    else SetConfLazyLink(yy_aconf);
  }
}
    break;

  case 392:
#line 2525 "ircd_parser.y"
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
#line 2536 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfCryptLink(yy_aconf);
    else SetConfCryptLink(yy_aconf);
  }
}
    break;

  case 394:
#line 2543 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAllowAutoConn(yy_aconf);
    else SetConfAllowAutoConn(yy_aconf);
  }
}
    break;

  case 395:
#line 2550 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAwayBurst(yy_aconf);
    else SetConfAwayBurst(yy_aconf);
  }
}
    break;

  case 396:
#line 2557 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfTopicBurst(yy_aconf);
    else SetConfTopicBurst(yy_aconf);
  }
}
    break;

  case 397:
#line 2567 "ircd_parser.y"
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
#line 2608 "ircd_parser.y"
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
#line 2619 "ircd_parser.y"
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
#line 2630 "ircd_parser.y"
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
#line 2645 "ircd_parser.y"
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
#line 2656 "ircd_parser.y"
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
#line 2669 "ircd_parser.y"
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
#line 2682 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 405:
#line 2691 "ircd_parser.y"
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
#line 2726 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    userbuf[0] = hostbuf[0] = reasonbuf[0] = '\0';
    regex_ban = 0;
  }
}
    break;

  case 407:
#line 2733 "ircd_parser.y"
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
#line 2787 "ircd_parser.y"
    {
}
    break;

  case 412:
#line 2792 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 419:
#line 2801 "ircd_parser.y"
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
#line 2817 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 421:
#line 2826 "ircd_parser.y"
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
#line 2835 "ircd_parser.y"
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
#line 2851 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 429:
#line 2860 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 435:
#line 2877 "ircd_parser.y"
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
#line 2898 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    regex_ban = 0;
    reasonbuf[0] = gecos_name[0] = '\0';
  }
}
    break;

  case 437:
#line 2905 "ircd_parser.y"
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
#line 2939 "ircd_parser.y"
    {
}
    break;

  case 442:
#line 2944 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 449:
#line 2953 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(gecos_name, yylval.string, sizeof(gecos_name));
}
    break;

  case 450:
#line 2959 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 509:
#line 3004 "ircd_parser.y"
    {
  ConfigFileEntry.gline_min_cidr = yyvsp[-1].number;
}
    break;

  case 510:
#line 3009 "ircd_parser.y"
    {
  ConfigFileEntry.gline_min_cidr6 = yyvsp[-1].number;
}
    break;

  case 511:
#line 3014 "ircd_parser.y"
    {
  ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 512:
#line 3019 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
}
    break;

  case 513:
#line 3024 "ircd_parser.y"
    {
  GlobalSetOptions.rejecttime = yylval.number;
}
    break;

  case 514:
#line 3029 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 515:
#line 3034 "ircd_parser.y"
    {
  ConfigFileEntry.kill_chase_time_limit = yyvsp[-1].number;
}
    break;

  case 516:
#line 3039 "ircd_parser.y"
    {
  ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 517:
#line 3044 "ircd_parser.y"
    {
  ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 518:
#line 3049 "ircd_parser.y"
    {
  ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 519:
#line 3054 "ircd_parser.y"
    {
  ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 520:
#line 3059 "ircd_parser.y"
    {
  ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 521:
#line 3064 "ircd_parser.y"
    {
  ConfigFileEntry.max_nick_time = yyvsp[-1].number; 
}
    break;

  case 522:
#line 3069 "ircd_parser.y"
    {
  ConfigFileEntry.max_nick_changes = yyvsp[-1].number;
}
    break;

  case 523:
#line 3074 "ircd_parser.y"
    {
  ConfigFileEntry.max_accept = yyvsp[-1].number;
}
    break;

  case 524:
#line 3079 "ircd_parser.y"
    {
  ConfigFileEntry.anti_spam_exit_message_time = yyvsp[-1].number;
}
    break;

  case 525:
#line 3084 "ircd_parser.y"
    {
  ConfigFileEntry.ts_warn_delta = yyvsp[-1].number;
}
    break;

  case 526:
#line 3089 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = yyvsp[-1].number;
}
    break;

  case 527:
#line 3095 "ircd_parser.y"
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

  case 528:
#line 3106 "ircd_parser.y"
    {
  ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 529:
#line 3111 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 530:
#line 3120 "ircd_parser.y"
    {
  ConfigFileEntry.invisible_on_connect = yylval.number;
}
    break;

  case 531:
#line 3125 "ircd_parser.y"
    {
  ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 532:
#line 3130 "ircd_parser.y"
    {
  ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 533:
#line 3135 "ircd_parser.y"
    {
  ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 534:
#line 3140 "ircd_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 535:
#line 3143 "ircd_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 536:
#line 3148 "ircd_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 537:
#line 3151 "ircd_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 538:
#line 3156 "ircd_parser.y"
    {
  ConfigFileEntry.pace_wait = yyvsp[-1].number;
}
    break;

  case 539:
#line 3161 "ircd_parser.y"
    {
  ConfigFileEntry.caller_id_wait = yyvsp[-1].number;
}
    break;

  case 540:
#line 3166 "ircd_parser.y"
    {
  ConfigFileEntry.opers_bypass_callerid = yylval.number;
}
    break;

  case 541:
#line 3171 "ircd_parser.y"
    {
  ConfigFileEntry.pace_wait_simple = yyvsp[-1].number;
}
    break;

  case 542:
#line 3176 "ircd_parser.y"
    {
  ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 543:
#line 3181 "ircd_parser.y"
    {
  ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 544:
#line 3186 "ircd_parser.y"
    {
  ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 545:
#line 3191 "ircd_parser.y"
    {
  ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 546:
#line 3196 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
}
    break;

  case 547:
#line 3207 "ircd_parser.y"
    {
  ConfigFileEntry.idletime = yyvsp[-1].number;
}
    break;

  case 548:
#line 3212 "ircd_parser.y"
    {
  ConfigFileEntry.dots_in_ident = yyvsp[-1].number;
}
    break;

  case 549:
#line 3217 "ircd_parser.y"
    {
  ConfigFileEntry.max_targets = yyvsp[-1].number;
}
    break;

  case 550:
#line 3222 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 551:
#line 3231 "ircd_parser.y"
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

  case 552:
#line 3263 "ircd_parser.y"
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

  case 553:
#line 3281 "ircd_parser.y"
    {
  ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 554:
#line 3286 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 555:
#line 3295 "ircd_parser.y"
    {
  ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 556:
#line 3300 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 557:
#line 3305 "ircd_parser.y"
    {
  ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 558:
#line 3310 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 562:
#line 3316 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 563:
#line 3319 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 564:
#line 3322 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEAF;
}
    break;

  case 565:
#line 3325 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 566:
#line 3328 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 567:
#line 3331 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 568:
#line 3334 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 569:
#line 3337 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 570:
#line 3340 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 571:
#line 3343 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 572:
#line 3346 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 573:
#line 3349 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 574:
#line 3352 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 575:
#line 3355 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 576:
#line 3358 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 577:
#line 3361 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 578:
#line 3364 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 579:
#line 3367 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 580:
#line 3372 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 584:
#line 3378 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 585:
#line 3381 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 586:
#line 3384 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEAF;
}
    break;

  case 587:
#line 3387 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 588:
#line 3390 "ircd_parser.y"
    { 
  ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 589:
#line 3393 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 590:
#line 3396 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 591:
#line 3399 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 592:
#line 3402 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 593:
#line 3405 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 594:
#line 3408 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 595:
#line 3411 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 596:
#line 3414 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 597:
#line 3417 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 598:
#line 3420 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 599:
#line 3423 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 600:
#line 3426 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 601:
#line 3429 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 602:
#line 3434 "ircd_parser.y"
    {
  ConfigFileEntry.min_nonwildcard = yyvsp[-1].number;
}
    break;

  case 603:
#line 3439 "ircd_parser.y"
    {
  ConfigFileEntry.min_nonwildcard_simple = yyvsp[-1].number;
}
    break;

  case 604:
#line 3444 "ircd_parser.y"
    {
  ConfigFileEntry.default_floodcount = yyvsp[-1].number;
}
    break;

  case 605:
#line 3449 "ircd_parser.y"
    {
  ConfigFileEntry.client_flood = yyvsp[-1].number;
}
    break;

  case 606:
#line 3454 "ircd_parser.y"
    {
  ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 607:
#line 3462 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->flags = 0;
  }
}
    break;

  case 608:
#line 3470 "ircd_parser.y"
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

  case 618:
#line 3497 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 619:
#line 3503 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = yyvsp[-1].number;
}
    break;

  case 620:
#line 3509 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 624:
#line 3515 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 625:
#line 3519 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 626:
#line 3525 "ircd_parser.y"
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

  case 627:
#line 3544 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 628:
#line 3553 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 629:
#line 3557 "ircd_parser.y"
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

  case 632:
#line 3597 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 633:
#line 3601 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 656:
#line 3626 "ircd_parser.y"
    {
  ConfigChannel.restrict_channels = yylval.number;
}
    break;

  case 657:
#line 3631 "ircd_parser.y"
    {
  ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 658:
#line 3636 "ircd_parser.y"
    {
  ConfigChannel.use_except = yylval.number;
}
    break;

  case 659:
#line 3641 "ircd_parser.y"
    {
  ConfigChannel.use_invex = yylval.number;
}
    break;

  case 660:
#line 3646 "ircd_parser.y"
    {
  ConfigChannel.use_knock = yylval.number;
}
    break;

  case 661:
#line 3651 "ircd_parser.y"
    {
  ConfigChannel.knock_delay = yyvsp[-1].number;
}
    break;

  case 662:
#line 3656 "ircd_parser.y"
    {
  ConfigChannel.knock_delay_channel = yyvsp[-1].number;
}
    break;

  case 663:
#line 3661 "ircd_parser.y"
    {
  ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 664:
#line 3666 "ircd_parser.y"
    {
  ConfigChannel.max_chans_per_user = yyvsp[-1].number;
}
    break;

  case 665:
#line 3671 "ircd_parser.y"
    {
  ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 666:
#line 3676 "ircd_parser.y"
    {
  ConfigChannel.max_bans = yyvsp[-1].number;
}
    break;

  case 667:
#line 3681 "ircd_parser.y"
    {
  ConfigChannel.default_split_user_count = yyvsp[-1].number;
}
    break;

  case 668:
#line 3686 "ircd_parser.y"
    {
  ConfigChannel.default_split_server_count = yyvsp[-1].number;
}
    break;

  case 669:
#line 3691 "ircd_parser.y"
    {
  ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 670:
#line 3696 "ircd_parser.y"
    {
  ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 671:
#line 3701 "ircd_parser.y"
    {
  ConfigChannel.burst_topicwho = yylval.number;
}
    break;

  case 672:
#line 3706 "ircd_parser.y"
    {
  GlobalSetOptions.joinfloodcount = yylval.number;
}
    break;

  case 673:
#line 3711 "ircd_parser.y"
    {
  GlobalSetOptions.joinfloodtime = yylval.number;
}
    break;

  case 685:
#line 3730 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 686:
#line 3736 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 687:
#line 3742 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigServerHide.hidden_name);
    DupString(ConfigServerHide.hidden_name, yylval.string);
  }
}
    break;

  case 688:
#line 3751 "ircd_parser.y"
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
#line 3765 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 690:
#line 3771 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 691:
#line 3777 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 1010 of yacc.c.  */
#line 7075 "y.tab.c"

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
      /* If just tried and failed to reuse lookahead token after an
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
		 YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
		 yydestruct (yystos[*yyssp], yyvsp);
	       }
        }
      else
	{
	  YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
	  yydestruct (yytoken, &yylval);
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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
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



