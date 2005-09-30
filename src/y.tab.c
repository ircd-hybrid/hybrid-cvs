/* $Id: y.tab.c,v 7.86 2005/09/30 14:20:03 michael Exp $ */
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
static char *yy_class_name = NULL;

static dlink_list col_conf_list  = { NULL, NULL, 0 };
static dlink_list hub_conf_list  = { NULL, NULL, 0 };
static dlink_list leaf_conf_list = { NULL, NULL, 0 };
static unsigned int listener_flags = 0;
static unsigned int regex_ban = 0;
static char userbuf[IRCD_BUFSIZE];
static char hostbuf[IRCD_BUFSIZE];
static char reasonbuf[REASONLEN + 1];
static char gecos_name[REALLEN * 4];

extern dlink_list gdeny_items; /* XXX */

static char *resv_reason = NULL;
static char *listener_address = NULL;
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
/* Line 190 of yacc.c.  */
#line 698 "y.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 213 of yacc.c.  */
#line 710 "y.tab.c"

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
#define YYLAST   1395

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  260
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  327
/* YYNRULES -- Number of rules. */
#define YYNRULES  695
/* YYNRULES -- Number of states. */
#define YYNSTATES  1426

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   509

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned short int yytranslate[] =
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
     428,   430,   432,   434,   436,   439,   444,   446,   451,   456,
     461,   466,   471,   476,   481,   486,   491,   496,   501,   506,
     511,   516,   521,   526,   531,   536,   537,   543,   547,   549,
     552,   554,   556,   558,   560,   562,   564,   566,   568,   570,
     572,   574,   576,   578,   580,   582,   584,   586,   587,   595,
     596,   598,   601,   603,   605,   607,   609,   611,   613,   615,
     617,   619,   621,   623,   625,   627,   629,   632,   637,   639,
     644,   649,   654,   659,   664,   669,   674,   679,   684,   689,
     694,   699,   700,   707,   708,   714,   718,   720,   722,   724,
     727,   729,   731,   733,   735,   737,   740,   745,   749,   751,
     753,   757,   762,   767,   768,   775,   778,   780,   782,   784,
     786,   788,   790,   792,   794,   796,   798,   800,   802,   804,
     806,   808,   810,   812,   815,   820,   825,   830,   835,   840,
     841,   847,   851,   853,   856,   858,   860,   862,   864,   866,
     868,   870,   872,   874,   876,   878,   883,   888,   893,   898,
     903,   908,   913,   918,   923,   928,   929,   936,   939,   941,
     943,   945,   947,   950,   955,   960,   965,   966,   973,   976,
     978,   980,   982,   984,   987,   992,   997,   998,  1004,  1008,
    1010,  1012,  1014,  1016,  1018,  1020,  1022,  1024,  1026,  1028,
    1030,  1032,  1033,  1040,  1043,  1045,  1047,  1049,  1052,  1057,
    1058,  1064,  1068,  1070,  1072,  1074,  1076,  1078,  1080,  1082,
    1084,  1086,  1088,  1090,  1092,  1093,  1101,  1102,  1104,  1107,
    1109,  1111,  1113,  1115,  1117,  1119,  1121,  1123,  1125,  1127,
    1129,  1131,  1133,  1135,  1137,  1139,  1141,  1143,  1145,  1148,
    1153,  1155,  1160,  1165,  1170,  1175,  1180,  1185,  1190,  1195,
    1196,  1202,  1206,  1208,  1211,  1213,  1215,  1217,  1219,  1221,
    1223,  1225,  1230,  1235,  1240,  1245,  1250,  1255,  1260,  1265,
    1270,  1271,  1278,  1279,  1285,  1289,  1291,  1293,  1296,  1298,
    1300,  1302,  1304,  1306,  1311,  1316,  1317,  1324,  1327,  1329,
    1331,  1333,  1335,  1340,  1345,  1351,  1354,  1356,  1358,  1360,
    1365,  1366,  1373,  1374,  1380,  1384,  1386,  1388,  1391,  1393,
    1395,  1397,  1399,  1401,  1406,  1411,  1417,  1420,  1422,  1424,
    1426,  1428,  1430,  1432,  1434,  1436,  1438,  1440,  1442,  1444,
    1446,  1448,  1450,  1452,  1454,  1456,  1458,  1460,  1462,  1464,
    1466,  1468,  1470,  1472,  1474,  1476,  1478,  1480,  1482,  1484,
    1486,  1488,  1490,  1492,  1494,  1496,  1498,  1500,  1502,  1504,
    1506,  1508,  1510,  1512,  1514,  1516,  1518,  1520,  1522,  1524,
    1526,  1528,  1530,  1532,  1537,  1542,  1547,  1552,  1557,  1562,
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
    2010,  2012,  2014,  2016,  2018,  2020,  2022,  2024,  2026,  2028,
    2030,  2035,  2040,  2045,  2050,  2055,  2060,  2065,  2070,  2075,
    2080,  2085,  2090,  2095,  2100,  2105,  2110,  2115,  2120,  2126,
    2129,  2131,  2133,  2135,  2137,  2139,  2141,  2143,  2145,  2147,
    2152,  2157,  2162,  2167,  2172,  2177
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     261,     0,    -1,    -1,   261,   262,    -1,   286,    -1,   292,
      -1,   307,    -1,   556,    -1,   337,    -1,   356,    -1,   369,
      -1,   272,    -1,   577,    -1,   393,    -1,   400,    -1,   410,
      -1,   419,    -1,   447,    -1,   457,    -1,   463,    -1,   477,
      -1,   540,    -1,   467,    -1,   267,    -1,     1,   255,    -1,
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
     315,    -1,   330,    -1,   318,    -1,   319,    -1,   320,    -1,
     322,    -1,   323,    -1,   324,    -1,   325,    -1,   326,    -1,
     321,    -1,   327,    -1,   328,    -1,   329,    -1,   331,    -1,
     316,    -1,   317,    -1,   332,    -1,     1,   255,    -1,   121,
     258,   155,   255,    -1,   155,    -1,   243,   258,   155,   255,
      -1,   149,   258,   155,   255,    -1,    49,   258,   195,   255,
      -1,   168,   258,   155,   255,    -1,    26,   258,   155,   255,
      -1,    73,   258,   195,   255,    -1,   163,   258,   195,   255,
      -1,   164,   258,   195,   255,    -1,    93,   258,   195,   255,
      -1,   252,   258,   195,   255,    -1,   242,   258,   195,   255,
      -1,    66,   258,   195,   255,    -1,   126,   258,   195,   255,
      -1,    38,   258,   195,   255,    -1,   161,   258,   195,   255,
      -1,     5,   258,   195,   255,    -1,    78,   258,   195,   255,
      -1,   226,   258,   195,   255,    -1,    -1,    54,   333,   258,
     334,   255,    -1,   334,   259,   335,    -1,   335,    -1,   131,
     336,    -1,   336,    -1,    73,    -1,   163,    -1,    93,    -1,
     242,    -1,   252,    -1,    66,    -1,    38,    -1,   161,    -1,
       5,    -1,    78,    -1,   126,    -1,   226,    -1,   142,    -1,
      80,    -1,   164,    -1,    49,    -1,    -1,    26,   338,   339,
     257,   340,   256,   255,    -1,    -1,   343,    -1,   340,   341,
      -1,   341,    -1,   342,    -1,   353,    -1,   354,    -1,   344,
      -1,   345,    -1,   355,    -1,   346,    -1,   347,    -1,   348,
      -1,   349,    -1,   350,    -1,   351,    -1,   352,    -1,     1,
     255,    -1,   121,   258,   155,   255,    -1,   155,    -1,   152,
     258,   264,   255,    -1,   153,   258,   264,   255,    -1,   135,
     258,   132,   255,    -1,    30,   258,   264,   255,    -1,   114,
     258,   132,   255,    -1,   109,   258,   132,   255,    -1,   111,
     258,   132,   255,    -1,   110,   258,   132,   255,    -1,   177,
     258,   266,   255,    -1,    23,   258,   132,   255,    -1,    24,
     258,   132,   255,    -1,   134,   258,   132,   255,    -1,    -1,
     102,   357,   257,   362,   256,   255,    -1,    -1,    54,   359,
     258,   360,   255,    -1,   360,   259,   361,    -1,   361,    -1,
     231,    -1,    77,    -1,   362,   363,    -1,   363,    -1,   364,
      -1,   358,    -1,   367,    -1,   368,    -1,     1,   255,    -1,
     154,   258,   365,   255,    -1,   365,   259,   366,    -1,   366,
      -1,   132,    -1,   132,   200,   132,    -1,    90,   258,   155,
     255,    -1,    84,   258,   155,   255,    -1,    -1,    74,   370,
     257,   371,   256,   255,    -1,   371,   372,    -1,   372,    -1,
     373,    -1,   374,    -1,   376,    -1,   378,    -1,   383,    -1,
     384,    -1,   385,    -1,   387,    -1,   388,    -1,   389,    -1,
     375,    -1,   390,    -1,   391,    -1,   386,    -1,   392,    -1,
     377,    -1,     1,   255,    -1,   243,   258,   155,   255,    -1,
     149,   258,   155,   255,    -1,   190,   258,   195,   255,    -1,
      26,   258,   155,   255,    -1,    49,   258,   195,   255,    -1,
      -1,    54,   379,   258,   380,   255,    -1,   380,   259,   381,
      -1,   381,    -1,   131,   382,    -1,   382,    -1,   190,    -1,
      50,    -1,    94,    -1,    75,    -1,    20,    -1,    21,    -1,
     130,    -1,    68,    -1,   171,    -1,   122,    -1,    94,   258,
     195,   255,    -1,    75,   258,   195,   255,    -1,    50,   258,
     195,   255,    -1,    20,   258,   195,   255,    -1,   130,   258,
     195,   255,    -1,    68,   258,   195,   255,    -1,   189,   258,
     155,   255,    -1,   159,   258,   155,   255,    -1,   158,   258,
     132,   255,    -1,   122,   258,   195,   255,    -1,    -1,   170,
     394,   257,   395,   256,   255,    -1,   395,   396,    -1,   396,
      -1,   397,    -1,   398,    -1,   399,    -1,     1,   255,    -1,
     157,   258,   155,   255,    -1,    22,   258,   155,   255,    -1,
     125,   258,   155,   255,    -1,    -1,   184,   401,   257,   402,
     256,   255,    -1,   402,   403,    -1,   403,    -1,   404,    -1,
     405,    -1,   406,    -1,     1,   255,    -1,   121,   258,   155,
     255,    -1,   243,   258,   155,   255,    -1,    -1,   186,   407,
     258,   408,   255,    -1,   408,   259,   409,    -1,   409,    -1,
      93,    -1,   239,    -1,   242,    -1,   252,    -1,   240,    -1,
     234,    -1,   170,    -1,   241,    -1,   233,    -1,   215,    -1,
     201,    -1,    -1,   185,   411,   257,   412,   256,   255,    -1,
     412,   413,    -1,   413,    -1,   414,    -1,   415,    -1,     1,
     255,    -1,   121,   258,   155,   255,    -1,    -1,   186,   416,
     258,   417,   255,    -1,   417,   259,   418,    -1,   418,    -1,
      93,    -1,   239,    -1,   242,    -1,   252,    -1,   240,    -1,
     234,    -1,   170,    -1,   241,    -1,   233,    -1,   215,    -1,
     201,    -1,    -1,    29,   420,   421,   257,   422,   256,   255,
      -1,    -1,   425,    -1,   422,   423,    -1,   423,    -1,   424,
      -1,   426,    -1,   427,    -1,   428,    -1,   429,    -1,   431,
      -1,   430,    -1,   432,    -1,   433,    -1,   443,    -1,   444,
      -1,   445,    -1,   442,    -1,   439,    -1,   441,    -1,   440,
      -1,   438,    -1,   446,    -1,     1,   255,    -1,   121,   258,
     155,   255,    -1,   155,    -1,    84,   258,   155,   255,    -1,
     250,   258,   155,   255,    -1,   178,   258,   155,   255,    -1,
       3,   258,   155,   255,    -1,   154,   258,   132,   255,    -1,
       6,   258,   213,   255,    -1,     6,   258,   214,   255,    -1,
      53,   258,   155,   255,    -1,    -1,    54,   434,   258,   435,
     255,    -1,   435,   259,   436,    -1,   436,    -1,   131,   437,
      -1,   437,    -1,    99,    -1,    27,    -1,    31,    -1,    10,
      -1,    12,    -1,   237,    -1,   168,   258,   155,   255,    -1,
      49,   258,   195,   255,    -1,    31,   258,   195,   255,    -1,
      27,   258,   195,   255,    -1,    10,   258,   195,   255,    -1,
      86,   258,   155,   255,    -1,   100,   258,   155,   255,    -1,
      26,   258,   155,   255,    -1,    25,   258,   155,   255,    -1,
      -1,    91,   448,   257,   453,   256,   255,    -1,    -1,   186,
     450,   258,   451,   255,    -1,   451,   259,   452,    -1,   452,
      -1,   160,    -1,   453,   454,    -1,   454,    -1,   455,    -1,
     456,    -1,   449,    -1,     1,    -1,   243,   258,   155,   255,
      -1,   157,   258,   155,   255,    -1,    -1,    36,   458,   257,
     459,   256,   255,    -1,   459,   460,    -1,   460,    -1,   461,
      -1,   462,    -1,     1,    -1,    90,   258,   155,   255,    -1,
     157,   258,   155,   255,    -1,    51,   257,   464,   256,   255,
      -1,   464,   465,    -1,   465,    -1,   466,    -1,     1,    -1,
      90,   258,   155,   255,    -1,    -1,    64,   468,   257,   473,
     256,   255,    -1,    -1,   186,   470,   258,   471,   255,    -1,
     471,   259,   472,    -1,   472,    -1,   160,    -1,   473,   474,
      -1,   474,    -1,   475,    -1,   476,    -1,   469,    -1,     1,
      -1,   121,   258,   155,   255,    -1,   157,   258,   155,   255,
      -1,    65,   257,   478,   256,   255,    -1,   478,   479,    -1,
     479,    -1,   487,    -1,   488,    -1,   490,    -1,   491,    -1,
     492,    -1,   493,    -1,   494,    -1,   495,    -1,   496,    -1,
     497,    -1,   486,    -1,   499,    -1,   500,    -1,   501,    -1,
     502,    -1,   517,    -1,   503,    -1,   505,    -1,   507,    -1,
     506,    -1,   510,    -1,   504,    -1,   511,    -1,   512,    -1,
     513,    -1,   514,    -1,   516,    -1,   515,    -1,   531,    -1,
     518,    -1,   522,    -1,   523,    -1,   527,    -1,   508,    -1,
     509,    -1,   537,    -1,   535,    -1,   536,    -1,   519,    -1,
     489,    -1,   520,    -1,   521,    -1,   538,    -1,   526,    -1,
     498,    -1,   539,    -1,   524,    -1,   525,    -1,   482,    -1,
     485,    -1,   480,    -1,   481,    -1,   483,    -1,   484,    -1,
       1,    -1,    71,   258,   132,   255,    -1,    72,   258,   132,
     255,    -1,    12,   258,   195,   255,    -1,   249,   258,   195,
     255,    -1,   162,   258,   264,   255,    -1,   183,   258,   195,
     255,    -1,    92,   258,   132,   255,    -1,    83,   258,   195,
     255,    -1,    88,   258,   195,   255,    -1,    42,   258,   195,
     255,    -1,    52,   258,   195,   255,    -1,     8,   258,   195,
     255,    -1,   113,   258,   264,   255,    -1,   112,   258,   132,
     255,    -1,   106,   258,   132,   255,    -1,     9,   258,   264,
     255,    -1,   199,   258,   264,   255,    -1,   198,   258,   264,
     255,    -1,    76,   258,   132,   255,    -1,    96,   258,   195,
     255,    -1,    95,   258,   155,   255,    -1,    89,   258,   195,
     255,    -1,   254,   258,   195,   255,    -1,   193,   258,   195,
     255,    -1,   194,   258,   195,   255,    -1,   192,   258,   195,
     255,    -1,   192,   258,   196,   255,    -1,   191,   258,   195,
     255,    -1,   191,   258,   196,   255,    -1,   147,   258,   264,
     255,    -1,    19,   258,   264,   255,    -1,   138,   258,   195,
     255,    -1,   148,   258,   264,   255,    -1,   187,   258,   195,
     255,    -1,   129,   258,   195,   255,    -1,   238,   258,   195,
     255,    -1,   141,   258,   195,   255,    -1,   116,   258,   155,
     255,    -1,    87,   258,   264,   255,    -1,    44,   258,   132,
     255,    -1,   115,   258,   132,   255,    -1,   181,   258,   155,
     255,    -1,    32,   258,   155,   255,    -1,    28,   258,   132,
     255,    -1,   244,   258,   195,   255,    -1,    46,   258,   155,
     255,    -1,   151,   258,   195,   255,    -1,    39,   258,   195,
     255,    -1,   236,   258,   264,   255,    -1,    -1,   143,   528,
     258,   529,   255,    -1,   529,   259,   530,    -1,   530,    -1,
     202,    -1,   205,    -1,   207,    -1,   208,    -1,   211,    -1,
     229,    -1,   225,    -1,   227,    -1,   232,    -1,   230,    -1,
     210,    -1,   226,    -1,   228,    -1,   212,    -1,   235,    -1,
     203,    -1,   204,    -1,   215,    -1,    -1,   140,   532,   258,
     533,   255,    -1,   533,   259,   534,    -1,   534,    -1,   202,
      -1,   205,    -1,   207,    -1,   208,    -1,   211,    -1,   229,
      -1,   225,    -1,   227,    -1,   232,    -1,   230,    -1,   210,
      -1,   226,    -1,   228,    -1,   212,    -1,   235,    -1,   203,
      -1,   204,    -1,   215,    -1,   117,   258,   132,   255,    -1,
     118,   258,   132,   255,    -1,    33,   258,   132,   255,    -1,
     206,   258,   266,   255,    -1,    43,   258,   195,   255,    -1,
      -1,    67,   541,   257,   542,   256,   255,    -1,   542,   543,
      -1,   543,    -1,   544,    -1,   545,    -1,   546,    -1,   550,
      -1,   551,    -1,   552,    -1,     1,    -1,    48,   258,   195,
     255,    -1,    45,   258,   264,   255,    -1,    -1,   104,   547,
     258,   548,   255,    -1,   548,   259,   549,    -1,   549,    -1,
     197,    -1,    11,    -1,   243,   258,   155,   255,    -1,   121,
     258,   155,   255,    -1,    -1,     4,   553,   258,   554,   255,
      -1,   554,   259,   555,    -1,   555,    -1,   197,    -1,    11,
      -1,    22,   257,   557,   256,   255,    -1,   557,   558,    -1,
     558,    -1,   560,    -1,   561,    -1,   562,    -1,   563,    -1,
     569,    -1,   564,    -1,   565,    -1,   566,    -1,   567,    -1,
     568,    -1,   570,    -1,   571,    -1,   572,    -1,   559,    -1,
     573,    -1,   574,    -1,   575,    -1,   576,    -1,     1,    -1,
     165,   258,   195,   255,    -1,    41,   258,   195,   255,    -1,
     245,   258,   195,   255,    -1,   246,   258,   195,   255,    -1,
     247,   258,   195,   255,    -1,    97,   258,   264,   255,    -1,
      98,   258,   264,   255,    -1,   144,   258,   195,   255,    -1,
     108,   258,   132,   255,    -1,   156,   258,   195,   255,    -1,
     107,   258,   132,   255,    -1,    35,   258,   132,   255,    -1,
      34,   258,   132,   255,    -1,   127,   258,   195,   255,    -1,
     128,   258,   195,   255,    -1,    13,   258,   195,   255,    -1,
     145,   258,   132,   255,    -1,   146,   258,   264,   255,    -1,
     179,   257,   578,   256,   255,    -1,   578,   579,    -1,   579,
      -1,   580,    -1,   581,    -1,   583,    -1,   585,    -1,   584,
      -1,   582,    -1,   586,    -1,     1,    -1,    55,   258,   195,
     255,    -1,    82,   258,   195,   255,    -1,    79,   258,   155,
     255,    -1,   101,   258,   264,   255,    -1,    77,   258,   195,
     255,    -1,    40,   258,   195,   255,    -1,    81,   258,   195,
     255,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   392,   392,   393,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   421,   421,   422,   426,
     430,   434,   438,   442,   448,   448,   449,   450,   451,   452,
     459,   462,   462,   463,   463,   463,   465,   482,   493,   496,
     497,   498,   498,   499,   499,   500,   500,   501,   502,   502,
     503,   503,   504,   506,   540,   600,   614,   632,   641,   655,
     664,   692,   722,   745,   795,   797,   797,   798,   798,   799,
     799,   801,   810,   819,   832,   834,   835,   837,   837,   838,
     839,   839,   840,   840,   841,   841,   842,   842,   843,   844,
     846,   850,   854,   861,   868,   875,   882,   889,   896,   903,
     910,   914,   918,   922,   926,   930,   934,   940,   950,   949,
    1043,  1043,  1044,  1044,  1045,  1045,  1045,  1045,  1046,  1046,
    1046,  1047,  1047,  1047,  1048,  1048,  1048,  1049,  1049,  1049,
    1049,  1050,  1050,  1051,  1051,  1053,  1065,  1077,  1096,  1108,
    1119,  1161,  1170,  1181,  1192,  1203,  1214,  1225,  1236,  1247,
    1258,  1269,  1280,  1291,  1302,  1314,  1313,  1317,  1317,  1318,
    1319,  1321,  1328,  1335,  1342,  1349,  1356,  1363,  1370,  1377,
    1384,  1391,  1398,  1405,  1412,  1419,  1426,  1440,  1439,  1481,
    1481,  1483,  1483,  1484,  1485,  1485,  1486,  1487,  1488,  1489,
    1490,  1491,  1492,  1493,  1494,  1495,  1496,  1498,  1507,  1516,
    1522,  1528,  1534,  1540,  1546,  1552,  1558,  1564,  1570,  1576,
    1582,  1592,  1591,  1608,  1607,  1611,  1611,  1612,  1616,  1622,
    1622,  1623,  1623,  1623,  1623,  1623,  1625,  1627,  1627,  1629,
    1644,  1666,  1675,  1688,  1687,  1756,  1756,  1757,  1757,  1757,
    1757,  1758,  1758,  1759,  1759,  1759,  1760,  1760,  1761,  1761,
    1761,  1762,  1762,  1762,  1764,  1783,  1796,  1807,  1816,  1828,
    1827,  1831,  1831,  1832,  1833,  1835,  1843,  1850,  1857,  1864,
    1871,  1878,  1885,  1892,  1899,  1908,  1919,  1930,  1941,  1952,
    1963,  1975,  1994,  2004,  2013,  2029,  2028,  2044,  2044,  2045,
    2045,  2045,  2045,  2047,  2056,  2071,  2085,  2084,  2100,  2100,
    2101,  2101,  2101,  2101,  2103,  2112,  2121,  2120,  2126,  2126,
    2127,  2131,  2135,  2139,  2143,  2147,  2151,  2155,  2159,  2163,
    2167,  2177,  2176,  2193,  2193,  2194,  2194,  2194,  2196,  2203,
    2202,  2208,  2208,  2209,  2213,  2217,  2221,  2225,  2229,  2233,
    2237,  2241,  2245,  2249,  2259,  2258,  2408,  2408,  2409,  2409,
    2410,  2410,  2410,  2411,  2411,  2412,  2412,  2413,  2413,  2413,
    2414,  2414,  2414,  2415,  2415,  2415,  2416,  2416,  2417,  2419,
    2431,  2443,  2452,  2478,  2490,  2502,  2508,  2512,  2520,  2530,
    2529,  2533,  2533,  2534,  2535,  2537,  2544,  2555,  2562,  2569,
    2576,  2586,  2627,  2638,  2649,  2664,  2675,  2688,  2701,  2710,
    2746,  2745,  2807,  2806,  2810,  2810,  2811,  2817,  2817,  2818,
    2818,  2818,  2818,  2820,  2836,  2846,  2845,  2867,  2867,  2868,
    2868,  2868,  2870,  2879,  2891,  2893,  2893,  2894,  2894,  2896,
    2918,  2917,  2959,  2958,  2962,  2962,  2963,  2969,  2969,  2970,
    2970,  2970,  2970,  2972,  2978,  2987,  2990,  2990,  2991,  2991,
    2992,  2992,  2993,  2993,  2994,  2994,  2995,  2995,  2996,  2996,
    2997,  2997,  2998,  2998,  2999,  2999,  3000,  3000,  3001,  3001,
    3002,  3002,  3003,  3003,  3004,  3004,  3005,  3005,  3006,  3006,
    3007,  3007,  3008,  3008,  3009,  3009,  3010,  3010,  3011,  3012,
    3012,  3013,  3013,  3014,  3014,  3015,  3015,  3016,  3016,  3017,
    3017,  3018,  3019,  3023,  3028,  3033,  3038,  3043,  3048,  3053,
    3058,  3063,  3068,  3073,  3078,  3083,  3088,  3093,  3098,  3103,
    3108,  3114,  3125,  3130,  3139,  3144,  3149,  3154,  3159,  3162,
    3167,  3170,  3175,  3180,  3185,  3190,  3195,  3200,  3205,  3210,
    3215,  3226,  3231,  3236,  3241,  3250,  3282,  3300,  3305,  3314,
    3319,  3324,  3330,  3329,  3334,  3334,  3335,  3338,  3341,  3344,
    3347,  3350,  3353,  3356,  3359,  3362,  3365,  3368,  3371,  3374,
    3377,  3380,  3383,  3386,  3392,  3391,  3396,  3396,  3397,  3400,
    3403,  3406,  3409,  3412,  3415,  3418,  3421,  3424,  3427,  3430,
    3433,  3436,  3439,  3442,  3445,  3448,  3453,  3458,  3463,  3468,
    3473,  3482,  3481,  3507,  3507,  3508,  3509,  3510,  3511,  3512,
    3513,  3514,  3516,  3522,  3529,  3528,  3533,  3533,  3534,  3538,
    3544,  3563,  3573,  3572,  3615,  3615,  3616,  3620,  3629,  3632,
    3632,  3633,  3633,  3634,  3634,  3635,  3635,  3636,  3636,  3637,
    3637,  3638,  3639,  3640,  3640,  3641,  3641,  3642,  3642,  3643,
    3645,  3650,  3655,  3660,  3665,  3670,  3675,  3680,  3685,  3690,
    3695,  3700,  3705,  3710,  3715,  3720,  3725,  3730,  3738,  3741,
    3741,  3742,  3742,  3743,  3744,  3745,  3745,  3746,  3747,  3749,
    3755,  3761,  3770,  3784,  3790,  3796
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
  "CHANNEL", "CIDR_BITLEN_IPV4", "CIDR_BITLEN_IPV6", "CIPHER_PREFERENCE",
  "CLASS", "COMPRESSED", "COMPRESSION_LEVEL", "CONNECT", "CONNECTFREQ",
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
  "oper_user", "oper_password", "oper_encrypted",
  "oper_rsa_public_key_file", "oper_class", "oper_global_kill",
  "oper_remote", "oper_remoteban", "oper_kline", "oper_xline",
  "oper_unkline", "oper_gline", "oper_nick_changes", "oper_die",
  "oper_rehash", "oper_admin", "oper_hidden_admin", "oper_operwall",
  "oper_flags", "@2", "oper_flags_items", "oper_flags_item",
  "oper_flags_item_atom", "class_entry", "@3", "class_name_b",
  "class_items", "class_item", "class_name", "class_name_t",
  "class_ping_time", "class_ping_warning", "class_number_per_ip",
  "class_connectfreq", "class_max_number", "class_max_global",
  "class_max_local", "class_max_ident", "class_sendq",
  "class_cidr_bitlen_ipv4", "class_cidr_bitlen_ipv6",
  "class_number_per_cidr", "listen_entry", "@4", "listen_flags", "@5",
  "listen_flags_items", "listen_flags_item", "listen_items", "listen_item",
  "listen_port", "port_items", "port_item", "listen_address",
  "listen_host", "auth_entry", "@6", "auth_items", "auth_item",
  "auth_user", "auth_passwd", "auth_spoof_notice", "auth_class",
  "auth_encrypted", "auth_flags", "@7", "auth_flags_items",
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
     505,   506,   507,   508,   509,    59,   125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
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
     311,   311,   311,   311,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   333,   332,   334,   334,   335,
     335,   336,   336,   336,   336,   336,   336,   336,   336,   336,
     336,   336,   336,   336,   336,   336,   336,   338,   337,   339,
     339,   340,   340,   341,   341,   341,   341,   341,   341,   341,
     341,   341,   341,   341,   341,   341,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   357,   356,   359,   358,   360,   360,   361,   361,   362,
     362,   363,   363,   363,   363,   363,   364,   365,   365,   366,
     366,   367,   368,   370,   369,   371,   371,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   373,   374,   375,   376,   377,   379,
     378,   380,   380,   381,   381,   382,   382,   382,   382,   382,
     382,   382,   382,   382,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   394,   393,   395,   395,   396,
     396,   396,   396,   397,   398,   399,   401,   400,   402,   402,
     403,   403,   403,   403,   404,   405,   407,   406,   408,   408,
     409,   409,   409,   409,   409,   409,   409,   409,   409,   409,
     409,   411,   410,   412,   412,   413,   413,   413,   414,   416,
     415,   417,   417,   418,   418,   418,   418,   418,   418,   418,
     418,   418,   418,   418,   420,   419,   421,   421,   422,   422,
     423,   423,   423,   423,   423,   423,   423,   423,   423,   423,
     423,   423,   423,   423,   423,   423,   423,   423,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   431,   432,   434,
     433,   435,   435,   436,   436,   437,   437,   437,   437,   437,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     448,   447,   450,   449,   451,   451,   452,   453,   453,   454,
     454,   454,   454,   455,   456,   458,   457,   459,   459,   460,
     460,   460,   461,   462,   463,   464,   464,   465,   465,   466,
     468,   467,   470,   469,   471,   471,   472,   473,   473,   474,
     474,   474,   474,   475,   476,   477,   478,   478,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   505,
     506,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   528,   527,   529,   529,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   532,   531,   533,   533,   534,   534,
     534,   534,   534,   534,   534,   534,   534,   534,   534,   534,
     534,   534,   534,   534,   534,   534,   535,   536,   537,   538,
     539,   541,   540,   542,   542,   543,   543,   543,   543,   543,
     543,   543,   544,   545,   547,   546,   548,   548,   549,   549,
     550,   551,   553,   552,   554,   554,   555,   555,   556,   557,
     557,   558,   558,   558,   558,   558,   558,   558,   558,   558,
     558,   558,   558,   558,   558,   558,   558,   558,   558,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     578,   579,   579,   579,   579,   579,   579,   579,   579,   580,
     581,   582,   583,   584,   585,   586
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
       1,     1,     1,     1,     2,     4,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     5,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     7,     0,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     0,     6,     0,     5,     3,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     2,     4,     3,     1,     1,
       3,     4,     4,     0,     6,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     4,     4,     4,     4,     4,     0,
       5,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     2,     4,     4,     4,     0,     6,     2,     1,
       1,     1,     1,     2,     4,     4,     0,     5,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     6,     2,     1,     1,     1,     2,     4,     0,
       5,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     7,     0,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     0,
       5,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       0,     6,     0,     5,     3,     1,     1,     2,     1,     1,
       1,     1,     1,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     4,     4,     5,     2,     1,     1,     1,     4,
       0,     6,     0,     5,     3,     1,     1,     2,     1,     1,
       1,     1,     1,     4,     4,     5,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       2,     0,     1,     0,     0,     0,   187,   354,   425,     0,
     440,     0,   611,   243,   410,   221,     0,     0,   118,   295,
       0,     0,   306,   331,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,   189,
     356,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   120,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    79,    78,   659,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   640,   654,   641,   642,
     643,   644,   646,   647,   648,   649,   650,   645,   651,   652,
     653,   655,   656,   657,   658,   208,     0,   190,   380,     0,
     357,     0,   438,     0,     0,   436,   437,     0,   512,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   584,     0,   562,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   457,   508,   509,   506,   510,   511,
     507,   468,   458,   459,   497,   460,   461,   462,   463,   464,
     465,   466,   467,   502,   469,   470,   471,   472,   474,   479,
     475,   477,   476,   491,   492,   478,   480,   481,   482,   483,
     485,   484,   473,   487,   496,   498,   499,   488,   489,   504,
     505,   501,   490,   486,   494,   495,   493,   500,   503,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,    88,
      91,    98,    92,    96,    93,    94,    97,    95,    89,    90,
       0,     0,     0,     0,    42,    43,    44,   146,     0,   121,
       0,   688,     0,     0,     0,     0,     0,     0,     0,     0,
     680,   681,   682,   686,   683,   685,   684,   687,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,    61,    58,    51,    60,    54,    55,    56,    52,
      59,    57,    53,     0,     0,    80,     0,     0,     0,     0,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     639,     0,     0,   431,     0,     0,     0,   428,   429,   430,
       0,     0,   435,   452,     0,     0,   442,   451,     0,   448,
     449,   450,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   456,   621,   632,
       0,     0,   624,     0,     0,     0,   614,   615,   616,   617,
     618,   619,   620,     0,     0,     0,     0,     0,   269,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   246,   247,   248,   257,   249,   262,   250,   251,   252,
     253,   260,   254,   255,   256,   258,   259,   261,   422,     0,
     412,     0,   421,     0,   418,   419,   420,     0,   223,     0,
       0,     0,   232,     0,   230,   231,   233,   234,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,    45,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,   298,   299,   300,   301,     0,     0,
       0,     0,     0,     0,     0,     0,   679,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,   316,     0,     0,   309,   310,   311,   312,
       0,     0,   339,     0,   334,   335,   336,     0,     0,     0,
      74,     0,     0,     0,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     638,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   192,   193,   196,   197,
     199,   200,   201,   202,   203,   204,   205,   194,   195,   198,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     389,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     359,   360,   361,   362,   363,   364,   366,   365,   367,   368,
     376,   373,   375,   374,   372,   369,   370,   371,   377,     0,
       0,     0,   427,     0,   434,     0,     0,     0,     0,   447,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,   455,     0,     0,
       0,     0,     0,     0,     0,   613,   263,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   245,     0,     0,     0,     0,   417,
     235,     0,     0,     0,     0,     0,   229,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     0,     0,    40,     0,
       0,     0,     0,     0,   165,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   123,   124,   125,   126,   141,   142,   128,   129,   130,
     136,   131,   132,   133,   134,   135,   137,   138,   139,   127,
     140,   143,   302,     0,     0,     0,     0,   297,     0,     0,
       0,     0,     0,     0,     0,   678,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,   313,     0,
       0,     0,     0,   308,   337,     0,     0,     0,   333,    83,
      82,    81,   675,   672,   671,   661,    26,    26,    26,    26,
      26,    28,    27,   665,   666,   670,   668,   673,   674,   667,
     676,   677,   669,   660,   662,   663,   664,   206,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   191,   378,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   358,     0,     0,   426,   439,     0,     0,
       0,   441,   524,   528,   515,   543,   556,   555,   608,   560,
     522,   610,   552,   558,   523,   513,   514,   531,   520,   551,
     521,   534,   519,   533,   532,   527,   526,   525,   553,   550,
     606,   607,   547,   544,   588,   603,   604,   589,   590,   591,
     598,   592,   601,   605,   594,   599,   595,   600,   593,   597,
     596,   602,     0,   587,   549,   566,   581,   582,   567,   568,
     569,   576,   570,   579,   583,   572,   577,   573,   578,   571,
     575,   574,   580,     0,   565,   542,   545,   559,   517,   554,
     518,   546,   540,   541,   538,   539,   536,   537,   530,   529,
      34,    34,    34,    36,    35,   609,   561,   548,   557,   516,
     535,     0,     0,     0,     0,     0,     0,   612,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   244,     0,     0,     0,   411,     0,
       0,     0,   239,     0,   238,   222,   103,   109,   107,   106,
     108,   104,   105,   102,   110,   116,   111,   115,   113,   114,
     112,   101,   100,   117,    46,    47,   144,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,     0,
       0,     0,   296,   694,   689,   693,   691,   695,   690,   692,
      67,    73,    65,    69,    68,    64,    63,    66,    72,    70,
      71,     0,     0,     0,   307,     0,     0,   332,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   188,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   355,   432,   433,   453,
     454,   446,     0,   445,   585,     0,   563,     0,    37,    38,
      39,   637,   636,     0,   635,   623,   622,   629,   628,     0,
     627,   631,   630,   288,   267,   268,   287,   279,   280,   276,
     282,   278,   277,   284,   281,     0,   283,   275,     0,   272,
     274,   290,   286,   285,   294,   289,   265,   293,   292,   291,
     266,   264,   424,   416,     0,   415,   423,   228,   227,     0,
     226,   242,   241,     0,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   304,   305,   303,
     314,   320,   326,   330,   329,   328,   325,   321,   324,   327,
     322,   323,     0,   319,   315,   338,   343,   349,   353,   352,
     351,   348,   344,   347,   350,   345,   346,     0,   342,   218,
     219,   212,   214,   216,   215,   213,   207,   220,   211,   209,
     210,   217,   384,   386,   387,   405,   409,   408,   404,   403,
     402,   388,   398,   399,   396,   397,   395,     0,   400,     0,
     392,   394,   381,   406,   407,   379,   385,   401,   383,   382,
     443,     0,   586,   564,   633,     0,   625,     0,   273,   270,
       0,   413,     0,   224,     0,   240,   237,   162,   151,   160,
     149,   179,   177,   186,   176,   171,   180,   184,   173,   181,
       0,   183,   178,   172,   185,   182,   174,   175,     0,   168,
     170,   158,   152,   163,   155,   145,   159,   148,   161,   153,
     154,   150,   164,   157,   147,   156,   317,     0,   340,     0,
     393,   390,     0,   444,   634,   626,   271,   414,   225,   169,
     166,     0,   318,   341,   391,   167
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     1,    24,   881,   882,  1033,  1034,    25,   273,   274,
     275,   276,    26,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,    27,    71,    72,    73,
      74,    75,    28,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,    29,    61,   278,
     810,   811,   812,   279,   813,   814,   815,   816,   817,   818,
     819,   820,   821,   822,   823,   824,   825,   826,   827,   828,
     829,   830,   831,  1101,  1388,  1389,  1390,    30,    49,   116,
     605,   606,   607,   117,   608,   609,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,    31,    58,   492,   761,
    1249,  1250,   493,   494,   495,  1073,  1074,   496,   497,    32,
      56,   460,   461,   462,   463,   464,   465,   466,   467,   741,
    1228,  1229,  1230,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,    33,    62,   523,   524,   525,   526,   527,
      34,    65,   555,   556,   557,   558,   559,   860,  1292,  1293,
      35,    66,   563,   564,   565,   566,   866,  1307,  1308,    36,
      50,   119,   639,   640,   641,   120,   642,   643,   644,   645,
     646,   647,   648,   649,   923,  1339,  1340,  1341,   650,   651,
     652,   653,   654,   655,   656,   657,   658,    37,    57,   482,
     756,  1244,  1245,   483,   484,   485,   486,    38,    51,   356,
     357,   358,   359,    39,   124,   125,   126,    40,    53,   367,
     667,  1192,  1193,   368,   369,   370,   371,    41,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   406,  1013,
    1014,   233,   404,   992,   993,   234,   235,   236,   237,   238,
      42,    55,   435,   436,   437,   438,   439,   731,  1209,  1210,
     440,   441,   442,   728,  1203,  1204,    43,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,    44,   289,   290,
     291,   292,   293,   294,   295,   296,   297
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -987
static const short int yypact[] =
{
    -987,   854,  -987,  -252,  -224,  -192,  -987,  -987,  -987,  -181,
    -987,  -178,  -987,  -987,  -987,  -987,  -167,  -158,  -987,  -987,
    -137,  -127,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,   308,   721,  -128,
     -97,  -124,     5,  -118,   438,  -109,   -98,   -85,   -76,   374,
     176,    58,   -72,   419,   474,   -37,   -33,   -13,    -2,    19,
      24,    10,  -987,  -987,  -987,  -987,  -987,    38,    42,    53,
      57,    71,    72,    78,    83,    84,    85,    86,    92,    94,
     101,   102,   104,   109,   110,   141,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,    35,  -987,  -987,    59,
    -987,    13,  -987,   114,     4,  -987,  -987,    30,  -987,   115,
     116,   118,   119,   137,   144,   146,   147,   148,   149,   150,
     151,   153,   155,   156,   157,   158,   160,   161,   165,   166,
     167,   170,   180,   187,   190,   191,   193,   196,   197,   198,
     202,  -987,   203,  -987,   204,   205,   206,   207,   209,   210,
     214,   218,   220,   225,   227,   228,   229,   230,   231,   233,
     235,   236,   237,     9,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,    65,
     749,    48,   256,    12,   239,   244,   245,   246,   250,   254,
     257,   258,   259,   260,   264,   266,   105,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
     143,   270,   271,    34,  -987,  -987,  -987,  -987,    63,  -987,
      49,  -987,   273,   274,   277,   279,   281,   282,   283,   140,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,   252,   284,
     287,   288,   290,   291,   294,   299,   300,   302,   303,   304,
      22,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,     8,    23,  -987,   208,   383,   408,   311,
    -987,   375,   267,   437,   376,   440,   440,   443,   445,   387,
     388,   389,   455,   440,   393,   397,   398,   399,   404,   346,
    -987,   782,   659,  -987,   344,   345,   122,  -987,  -987,  -987,
     449,   351,  -987,  -987,   349,   352,  -987,  -987,    76,  -987,
    -987,  -987,   414,   440,   416,   440,   480,   458,   482,   421,
     422,   423,   491,   469,   431,   495,   496,   501,   439,   440,
     444,   447,   508,   490,   451,   515,   516,   440,   518,   498,
     519,   520,   459,   460,   400,   462,   401,   440,   440,   466,
     440,   509,   472,   475,   -17,    32,   476,   477,   440,   440,
     543,   440,   484,   486,   488,   493,   434,  -987,  -987,  -987,
     436,   453,  -987,   463,   465,   280,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,   441,   470,   478,   481,   483,  -987,   494,
     499,   500,   502,   512,   513,   523,   524,   528,   529,   530,
     263,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,   531,
    -987,   532,  -987,   113,  -987,  -987,  -987,   442,  -987,   533,
     535,   537,  -987,   217,  -987,  -987,  -987,  -987,  -987,   522,
     540,   546,   547,   552,   554,   572,   575,   497,   577,   578,
     545,   489,  -987,  -987,   580,   583,   511,  -987,   542,   521,
     538,   539,   544,   136,  -987,  -987,  -987,  -987,   551,   556,
     558,   594,   579,   605,   440,   549,  -987,  -987,   612,   613,
     623,   652,   656,   660,   661,   665,   682,   666,   667,   568,
    -987,   576,   574,  -987,   581,   108,  -987,  -987,  -987,  -987,
     585,   586,  -987,   133,  -987,  -987,  -987,   590,   591,   592,
    -987,   596,   598,   602,   603,   268,   606,   609,   615,   617,
     618,   619,   620,   626,   627,   629,   630,   632,   633,   634,
    -987,   639,   610,   637,   643,   644,   646,   648,   653,   655,
     657,   662,   664,   668,   669,   213,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
     642,   672,   673,   674,   678,   684,   686,   688,   690,   691,
    -987,   692,   694,   695,   697,   702,   703,   704,   705,   249,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,   675,
     681,   685,  -987,   710,  -987,   683,   723,   711,   715,  -987,
     716,   717,   722,   724,   725,   730,   731,   732,   733,   734,
     735,   738,   740,   743,   744,   745,   751,   752,   753,   755,
     756,   757,   758,   759,   761,   762,   764,   765,   766,   767,
     768,   770,   849,   771,   883,   772,   773,   774,   775,   776,
     777,   780,   781,   785,   786,   787,   788,   789,   790,   791,
     103,   792,   793,   794,   800,   803,   807,  -987,   760,   440,
     638,   779,   769,   908,   810,  -987,  -987,   719,   911,   728,
     872,   812,   873,   876,   877,   878,   885,   927,   778,   928,
     934,   897,   941,   842,  -987,   944,   843,   945,   847,  -987,
    -987,   845,   949,   950,   805,   851,  -987,   852,   859,   861,
     862,   864,   865,   866,   867,   868,   869,   870,   871,   874,
     875,   880,   881,   882,   884,  -987,   886,   887,  -987,   888,
     889,   890,   891,   892,  -987,   893,   894,   895,   896,   898,
     899,   900,   901,   902,   903,   904,   905,   906,   907,   909,
      62,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,   972,   973,   976,   913,  -987,   914,   915,
     916,   917,   918,   919,   920,  -987,   921,   922,   923,   924,
     925,   926,   929,   930,   931,   932,   933,  -987,  -987,   977,
     935,   978,   936,  -987,  -987,   979,   937,   939,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,   440,   440,   440,   440,
     440,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  1006,  1008,
     440,  1012,  1013,  1014,  1023,  1011,  1050,  1051,   440,   440,
     543,   942,  -987,  -987,  1034,    18,   995,  1037,  1041,  1003,
    1004,  1005,  1046,   946,  1047,  1048,  1052,  1053,  1073,  1054,
    1055,  1056,   951,  -987,   957,   958,  -987,  -987,   959,   960,
    1057,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -239,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -233,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
     543,   543,   543,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,    -4,   961,   963,     1,   964,   965,  -987,   966,   967,
     968,   969,   679,   970,   971,   974,   975,   980,   981,   982,
     983,   984,   985,   986,  -987,   987,  1067,   988,  -987,   -58,
     989,   990,  1028,  -230,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  1036,  1077,  1038,
    1039,   991,  1058,  1059,  1060,  1061,  1091,  1062,  1092,  1063,
    1064,  1065,  1093,  1066,  1068,  1095,  1069,   996,  -987,   997,
    1007,  1010,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  1015,   742,  1016,  -987,  1017,   763,  -987,  -987,  -987,
    -987,  -987,  -987,  1018,  1019,  1020,  1021,  1022,  1024,  1025,
    1026,  1027,  1029,  1030,  1031,  1032,  -987,  1033,  1035,  1040,
    1042,  1043,  1044,  1045,  1049,  1070,  1071,   327,  1072,  1074,
    1075,  1076,  1078,  1079,  1080,  1081,  -987,  -987,  -987,  -987,
    -987,  -987,  -223,  -987,  -987,   849,  -987,   883,  -987,  -987,
    -987,  -987,  -987,  -216,  -987,  -987,  -987,  -987,  -987,  -199,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,   879,  -987,  -987,  -191,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -185,  -987,  -987,  -987,  -987,  -177,
    -987,  -987,  -987,  1134,  -987,   805,  1082,  1083,  1084,  1085,
     600,  1086,  1087,  1088,  1089,  1090,  1094,  1096,  1097,  1098,
    1099,  1100,  1101,  1102,  1103,  1104,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -168,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -166,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,     3,  -987,  -147,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  1057,  -987,  -987,  -987,    -4,  -987,     1,  -987,  -987,
     679,  -987,  1067,  -987,   -58,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
     699,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -123,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,   742,  -987,   763,
    -987,  -987,   327,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,   600,  -987,  -987,  -987,  -987
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -987,  -987,  -987,  -497,  -335,  -986,  -418,  -987,  -987,   561,
    -987,  -987,  -987,  -987,    81,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  1196,  -987,
    -987,  -987,  -987,  -987,  1105,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,   468,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -153,  -111,  -987,  -987,  -987,
    -987,   687,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,   -81,  -987,   796,  -987,  -987,    36,  -987,  -987,  -987,
    -987,  -987,   833,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,   -66,    77,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,   783,  -987,  -987,  -987,
    -987,  -987,  -987,   741,  -987,  -987,  -987,  -987,  -987,  -106,
    -987,  -987,  -987,   746,  -987,  -987,  -987,  -987,  -104,  -987,
    -987,  -987,  -987,   671,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -105,   -34,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,   -54,  -987,   828,  -987,  -987,  -987,  -987,  -987,
     956,  -987,  -987,  -987,  -987,  1189,  -987,  -987,  -987,  -987,
    -987,  -987,   -36,  -987,   948,  -987,  -987,  -987,  -987,  1131,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
     120,  -987,  -987,  -987,   123,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,   912,  -987,  -987,  -987,  -987,  -987,   -38,
    -987,  -987,  -987,  -987,  -987,   -35,  -987,  -987,  1226,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,
    -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  -987,  1106,
    -987,  -987,  -987,  -987,  -987,  -987,  -987
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned short int yytable[] =
{
     576,   577,   721,    45,    46,   122,   122,  1201,   584,   551,
     128,    67,  1207,  1332,   353,  1333,  1194,   129,   130,  1247,
    1195,   131,  1196,   298,   560,  1254,  1197,   115,   132,  1255,
    1334,   363,  1350,    47,  1335,   270,  1351,   133,   671,  1354,
     673,   134,   135,  1355,  1198,  1199,  1200,    68,   136,   478,
     519,   137,   138,   139,   687,   140,  1356,    69,   118,   299,
    1357,   141,   695,   789,  1359,    48,   428,   790,  1360,   429,
    1361,   520,   705,   706,  1362,   708,    52,   363,  1363,    54,
     142,   143,  1364,   718,   719,   144,   722,  1406,   791,  1408,
      59,  1407,   145,  1409,   123,   123,   146,   147,   148,    60,
     792,   149,  1336,   354,   150,   151,   243,   300,  1411,   551,
     430,   793,  1412,   431,   478,   152,   794,  1030,  1031,  1032,
      63,   153,   154,   353,   155,   156,   157,   158,   795,   552,
      64,    70,  1420,   121,   560,   796,  1421,   519,   159,   127,
     797,   281,    76,   301,   561,   302,   303,   160,   239,   161,
     162,   364,   163,   271,    77,   798,   164,   165,   520,   240,
     166,   244,   245,   246,   247,   248,   249,   250,   251,   432,
     355,   167,   241,  1248,   521,    78,    79,   270,   712,   713,
     282,   242,    80,   799,   272,   280,   433,   365,   800,   304,
     168,   305,   169,  1202,   553,   283,   170,   364,  1208,   844,
     171,   172,   173,   174,   306,   479,   522,   175,   176,   562,
     252,   801,   354,   277,   591,   177,   366,   284,   487,   285,
     323,   286,   287,   802,   324,   803,   804,   714,   715,   552,
     805,  1168,  1169,   365,   480,   720,   592,   593,    81,    82,
    1338,   288,   325,   594,   253,   178,   307,   179,    83,    84,
     620,   554,   621,   180,   561,   622,   326,   487,   181,   623,
     361,   521,   366,   182,   443,   426,   329,   498,    85,    86,
     479,   488,   308,   309,   624,   625,   626,   327,   549,   355,
     627,   428,   328,   444,   429,    87,    88,    89,   806,   445,
     516,   481,   351,   522,   553,   271,   331,    90,   628,   480,
     332,   489,   629,   630,   807,   808,    91,   490,   434,    67,
     488,   333,   446,   447,   809,   334,   352,   448,  1117,   562,
     518,   254,   595,   596,   597,   430,   272,   598,   431,   335,
     336,   449,   668,   631,   599,   632,   337,  1332,   450,  1333,
     489,   338,   339,   340,   341,    68,   490,   600,   601,   633,
     342,   554,   343,   255,  1334,    69,   481,   451,  1335,   344,
     345,   511,   346,   567,   862,   602,   603,   347,   348,   758,
     634,   491,   360,   372,   373,   243,   374,   375,   661,  1148,
    1149,  1150,  1151,  1152,   432,   452,    92,    93,    94,   867,
     604,   550,   836,   453,  1042,   376,   535,   349,   513,   572,
     575,   433,   377,   635,   378,   379,   380,   381,   382,   383,
     491,   384,   454,   385,   386,   387,   388,   636,   389,   390,
     281,   455,   456,   391,   392,   393,  1336,   637,   394,    70,
     244,   245,   246,   247,   248,   249,   250,   251,   395,   128,
     876,   877,   878,   879,   880,   396,   129,   130,   397,   398,
     131,   399,   457,   458,   400,   401,   402,   132,  1337,   282,
     403,   405,   407,   408,   409,   410,   133,   411,   412,   911,
     134,   135,   413,   765,   283,   298,   414,   136,   415,   252,
     137,   138,   139,   416,   140,   417,   418,   419,   420,   421,
     141,   422,  1165,   423,   424,   425,   284,   499,   285,   638,
     286,   287,   500,   501,   502,   932,   459,   537,   503,   142,
     143,   299,   504,   253,   144,   505,   506,   507,   508,   753,
     288,   145,   509,   434,   510,   146,   147,   148,   514,   515,
     149,   528,   529,   150,   151,   530,   734,   531,   568,   532,
     533,   534,   538,   789,   152,   539,   540,   790,   541,   542,
     153,   154,   543,   155,   156,   157,   158,   544,   545,   300,
     546,   547,   548,   569,  1338,  1155,   570,   159,   791,   573,
     571,   574,   575,  1163,  1164,   578,   160,   579,   161,   162,
     792,   163,   580,   581,   582,   164,   165,   583,   585,   166,
     254,   793,   586,   587,   588,   301,   794,   302,   303,   589,
     167,   590,   659,   660,   663,  1371,   664,   665,   795,   670,
     666,   672,   674,   675,   676,   796,   677,   678,   679,   168,
     797,   169,   255,   680,   681,   170,   682,   683,   684,   171,
     172,   173,   174,   685,   686,   798,   175,   176,  1372,   688,
     690,   304,   689,   305,   177,   691,   692,   693,   694,  1373,
     696,   698,   699,   697,   700,   701,   306,   703,   702,   704,
     620,   707,   621,   799,   709,   622,  1374,   710,   800,   623,
     711,   716,   717,  1375,   178,   720,   179,   767,  1376,   723,
    1377,   724,   180,   725,   624,   625,   626,   181,   726,   727,
     627,   801,   182,  1378,   729,   768,   736,   760,   307,  1217,
    1218,   769,   770,   802,  1371,   803,   804,   771,   628,   772,
     805,   730,   629,   630,   775,   776,   777,   778,   779,   780,
     781,   732,    76,   733,   308,   309,  1379,   773,   737,  1219,
     774,  1380,   782,   783,    77,   786,   738,  1372,   787,   739,
     784,   740,  1381,   631,   785,   632,   838,  1220,  1373,   841,
     443,   839,   742,   840,  1221,    78,    79,   743,   744,   633,
     745,  1382,    80,  1383,  1384,  1374,   788,   846,   806,   444,
     746,   747,  1375,  1222,   842,   445,   832,  1376,   848,  1377,
     634,   748,   749,   591,   807,   808,   750,   751,   752,   755,
     757,   762,  1378,   763,   809,   764,   833,   834,   446,   447,
     843,  1223,   835,   448,   845,   592,   593,   849,   847,  1224,
    1225,   850,   594,   635,   854,   851,   852,   449,    81,    82,
     853,   855,   856,   857,   450,  1379,  1385,   636,    83,    84,
     934,   858,   859,  1043,   517,  1281,   935,   637,   938,   861,
     864,  1381,  1386,   451,   865,   869,   870,   871,    85,    86,
    1226,   872,  1387,   873,     2,     3,  1296,   874,   875,     4,
    1382,   883,  1383,  1384,   884,    87,    88,    89,   898,  1227,
     885,   452,   886,   887,   888,   889,     5,    90,   939,   453,
       6,   890,   891,     7,   892,   893,    91,   894,   895,   896,
       8,   595,   596,   597,   897,   899,   598,   913,   454,  1217,
    1218,   900,   901,   599,   902,     9,   903,   455,   456,   638,
    1059,   904,  1282,   905,  1048,   906,   600,   601,    10,    11,
     907,    12,   908,  1050,  1045,  1385,   909,   910,    13,  1219,
     914,   915,   916,  1297,   602,   603,   917,  1072,   457,   458,
     936,  1386,   918,  1283,   919,    14,   920,  1220,   921,   922,
     924,  1387,   925,   926,  1221,   927,    15,  1284,    16,   604,
     928,   929,   930,   931,  1298,   937,    92,    93,    94,   940,
     941,   942,   943,  1222,    17,  1285,  1286,   944,  1299,   945,
     946,  1287,  1288,  1289,  1290,   947,   948,   949,   950,   951,
     952,    18,   459,   953,  1291,   954,  1300,  1301,   955,   956,
     957,  1223,  1302,  1303,  1304,  1305,   958,   959,   960,  1224,
     961,   962,   963,   964,   965,  1306,   966,   967,  1041,   968,
     969,   970,   971,   972,    19,   973,   994,  1015,  1016,  1017,
    1018,  1019,  1020,    20,    21,  1021,  1022,  1044,    22,    23,
    1023,  1024,  1025,  1026,  1027,  1028,  1029,  1035,  1036,  1037,
    1226,   974,   975,   976,   977,  1038,   978,   979,  1039,   980,
     981,   982,  1040,  1046,   983,  1047,  1049,  1051,  1053,  1227,
    1052,  1054,  1055,  1056,   984,   985,   986,   987,   988,   989,
    1057,   990,  1058,  1060,   991,   995,   996,   997,   998,  1061,
     999,  1000,  1062,  1001,  1002,  1003,  1063,  1064,  1004,  1065,
    1067,  1066,  1068,  1069,  1070,  1071,  1075,  1076,  1005,  1006,
    1007,  1008,  1009,  1010,  1077,  1011,  1078,  1079,  1012,  1080,
    1081,  1082,  1083,  1084,  1085,  1086,  1087,  1119,  1120,  1088,
    1089,  1121,  1141,  1143,  1145,  1090,  1091,  1092,  1153,  1093,
    1154,  1094,  1095,  1096,  1156,  1157,  1158,  1097,  1098,  1099,
    1100,  1102,  1103,  1104,  1105,  1159,  1106,  1107,  1108,  1109,
    1110,  1111,  1112,  1113,  1114,  1115,  1160,  1116,  1122,  1123,
    1124,  1125,  1126,  1127,  1128,  1129,  1130,  1131,  1132,  1133,
    1134,  1135,  1161,  1162,  1136,  1137,  1138,  1139,  1140,  1167,
    1170,  1144,  1171,  1142,  1147,  1146,  1172,  1166,  1173,  1174,
    1175,  1176,  1178,  1179,  1177,  1182,  1186,  1180,  1181,  1183,
    1184,  1185,  1187,  1188,  1189,  1190,  1205,  1191,  1206,  1211,
    1212,  1213,  1214,  1215,  1216,  1231,  1232,  1243,  1253,  1233,
    1234,  1256,  1257,  1258,  1259,  1235,  1236,  1237,  1238,  1239,
    1240,  1241,  1242,  1246,  1251,  1252,  1265,  1267,  1271,  1260,
    1274,  1276,  1277,  1261,  1262,  1263,  1264,  1266,  1268,  1269,
    1270,  1272,  1278,  1273,  1275,  1279,  1365,   330,  1425,  1419,
    1280,  1294,  1295,  1309,  1310,  1311,  1312,  1313,  1118,  1314,
    1315,  1316,  1317,  1418,  1318,  1319,  1320,  1321,  1322,   766,
    1323,  1366,   912,   754,  1416,  1324,   863,  1325,  1326,  1327,
    1328,  1422,  1358,  1410,  1329,  1423,   837,  1424,  1417,   868,
     933,   759,   662,   362,   427,  1413,   669,  1353,  1352,  1415,
    1414,   350,     0,     0,     0,  1330,  1331,  1342,     0,  1343,
    1344,  1345,     0,  1346,  1347,  1348,  1349,  1367,  1368,  1369,
    1370,  1391,  1392,  1393,  1394,  1395,     0,   735,     0,  1396,
       0,  1397,  1398,  1399,  1400,  1401,  1402,  1403,  1404,  1405,
       0,   512,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   536
};

static const short int yycheck[] =
{
     335,   336,   420,   255,   256,     1,     1,    11,   343,     1,
       1,     1,    11,    10,     1,    12,   255,     8,     9,    77,
     259,    12,   255,     1,     1,   255,   259,   155,    19,   259,
      27,     1,   255,   257,    31,     1,   259,    28,   373,   255,
     375,    32,    33,   259,  1030,  1031,  1032,    37,    39,     1,
       1,    42,    43,    44,   389,    46,   255,    47,   155,    37,
     259,    52,   397,     1,   255,   257,     1,     5,   259,     4,
     255,    22,   407,   408,   259,   410,   257,     1,   255,   257,
      71,    72,   259,   418,   419,    76,   421,   255,    26,   255,
     257,   259,    83,   259,    90,    90,    87,    88,    89,   257,
      38,    92,    99,    90,    95,    96,     1,    85,   255,     1,
      45,    49,   259,    48,     1,   106,    54,    14,    15,    16,
     257,   112,   113,     1,   115,   116,   117,   118,    66,   121,
     257,   121,   255,   257,     1,    73,   259,     1,   129,   257,
      78,     1,     1,   121,   121,   123,   124,   138,   257,   140,
     141,   121,   143,   119,    13,    93,   147,   148,    22,   257,
     151,    56,    57,    58,    59,    60,    61,    62,    63,   104,
     157,   162,   257,   231,   125,    34,    35,     1,   195,   196,
      40,   257,    41,   121,   150,   257,   121,   157,   126,   167,
     181,   169,   183,   197,   186,    55,   187,   121,   197,   534,
     191,   192,   193,   194,   182,   157,   157,   198,   199,   186,
     105,   149,    90,   155,     1,   206,   186,    77,     1,    79,
     257,    81,    82,   161,   257,   163,   164,   195,   196,   121,
     168,   213,   214,   157,   186,   132,    23,    24,    97,    98,
     237,   101,   255,    30,   139,   236,   224,   238,   107,   108,
       1,   243,     3,   244,   121,     6,   258,     1,   249,    10,
     256,   125,   186,   254,     1,   256,   256,   255,   127,   128,
     157,    54,   250,   251,    25,    26,    27,   258,   256,   157,
      31,     1,   258,    20,     4,   144,   145,   146,   226,    26,
     256,   243,   257,   157,   186,   119,   258,   156,    49,   186,
     258,    84,    53,    54,   242,   243,   165,    90,   243,     1,
      54,   258,    49,    50,   252,   258,   257,    54,   256,   186,
     257,   216,   109,   110,   111,    45,   150,   114,    48,   258,
     258,    68,   256,    84,   121,    86,   258,    10,    75,    12,
      84,   258,   258,   258,   258,    37,    90,   134,   135,   100,
     258,   243,   258,   248,    27,    47,   243,    94,    31,   258,
     258,   256,   258,   155,   256,   152,   153,   258,   258,   256,
     121,   154,   258,   258,   258,     1,   258,   258,   256,   876,
     877,   878,   879,   880,   104,   122,   245,   246,   247,   256,
     177,   310,   256,   130,   729,   258,   256,   256,   255,   132,
     132,   121,   258,   154,   258,   258,   258,   258,   258,   258,
     154,   258,   149,   258,   258,   258,   258,   168,   258,   258,
       1,   158,   159,   258,   258,   258,    99,   178,   258,   121,
      56,    57,    58,    59,    60,    61,    62,    63,   258,     1,
     172,   173,   174,   175,   176,   258,     8,     9,   258,   258,
      12,   258,   189,   190,   258,   258,   258,    19,   131,    40,
     258,   258,   258,   258,   258,   258,    28,   258,   258,   256,
      32,    33,   258,   256,    55,     1,   258,    39,   258,   105,
      42,    43,    44,   258,    46,   258,   258,   258,   258,   258,
      52,   258,   910,   258,   258,   258,    77,   258,    79,   250,
      81,    82,   258,   258,   258,   256,   243,   255,   258,    71,
      72,    37,   258,   139,    76,   258,   258,   258,   258,   256,
     101,    83,   258,   243,   258,    87,    88,    89,   258,   258,
      92,   258,   258,    95,    96,   258,   256,   258,   155,   258,
     258,   258,   258,     1,   106,   258,   258,     5,   258,   258,
     112,   113,   258,   115,   116,   117,   118,   258,   258,    85,
     258,   258,   258,   155,   237,   900,   255,   129,    26,   132,
     195,   195,   132,   908,   909,   132,   138,   132,   140,   141,
      38,   143,   195,   195,   195,   147,   148,   132,   195,   151,
     216,    49,   195,   195,   195,   121,    54,   123,   124,   195,
     162,   255,   258,   258,   155,     5,   255,   258,    66,   195,
     258,   195,   132,   155,   132,    73,   195,   195,   195,   181,
      78,   183,   248,   132,   155,   187,   195,   132,   132,   191,
     192,   193,   194,   132,   195,    93,   198,   199,    38,   195,
     132,   167,   195,   169,   206,   155,   195,   132,   132,    49,
     132,   132,   132,   155,   195,   195,   182,   195,   258,   258,
       1,   195,     3,   121,   155,     6,    66,   195,   126,    10,
     195,   195,   195,    73,   236,   132,   238,   155,    78,   195,
      80,   195,   244,   195,    25,    26,    27,   249,   195,   255,
      31,   149,   254,    93,   258,   155,   255,   255,   224,    20,
      21,   155,   155,   161,     5,   163,   164,   155,    49,   155,
     168,   258,    53,    54,   217,   218,   219,   220,   221,   222,
     223,   258,     1,   258,   250,   251,   126,   155,   258,    50,
     155,   131,   155,   155,    13,   155,   258,    38,   155,   258,
     195,   258,   142,    84,   255,    86,   195,    68,    49,   155,
       1,   195,   258,   195,    75,    34,    35,   258,   258,   100,
     258,   161,    41,   163,   164,    66,   255,   155,   226,    20,
     258,   258,    73,    94,   195,    26,   255,    78,   155,    80,
     121,   258,   258,     1,   242,   243,   258,   258,   258,   258,
     258,   258,    93,   258,   252,   258,   258,   258,    49,    50,
     195,   122,   258,    54,   255,    23,    24,   155,   195,   130,
     131,   155,    30,   154,   132,   155,   155,    68,    97,    98,
     155,   155,   155,   255,    75,   126,   226,   168,   107,   108,
     155,   255,   258,   195,   273,    93,   155,   178,   155,   258,
     255,   142,   242,    94,   258,   255,   255,   255,   127,   128,
     171,   255,   252,   255,     0,     1,    93,   255,   255,     5,
     161,   255,   163,   164,   255,   144,   145,   146,   258,   190,
     255,   122,   255,   255,   255,   255,    22,   156,   155,   130,
      26,   255,   255,    29,   255,   255,   165,   255,   255,   255,
      36,   109,   110,   111,   255,   258,   114,   255,   149,    20,
      21,   258,   258,   121,   258,    51,   258,   158,   159,   250,
     132,   258,   170,   258,   195,   258,   134,   135,    64,    65,
     258,    67,   258,   195,   155,   226,   258,   258,    74,    50,
     258,   258,   258,   170,   152,   153,   258,   132,   189,   190,
     255,   242,   258,   201,   258,    91,   258,    68,   258,   258,
     258,   252,   258,   258,    75,   258,   102,   215,   104,   177,
     258,   258,   258,   258,   201,   255,   245,   246,   247,   258,
     255,   255,   255,    94,   120,   233,   234,   255,   215,   255,
     255,   239,   240,   241,   242,   255,   255,   255,   255,   255,
     255,   137,   243,   255,   252,   255,   233,   234,   255,   255,
     255,   122,   239,   240,   241,   242,   255,   255,   255,   130,
     255,   255,   255,   255,   255,   252,   255,   255,   258,   255,
     255,   255,   255,   255,   170,   255,   255,   255,   255,   255,
     255,   255,   255,   179,   180,   255,   255,   258,   184,   185,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     171,   202,   203,   204,   205,   255,   207,   208,   255,   210,
     211,   212,   255,   155,   215,   255,   155,   195,   195,   190,
     258,   195,   195,   195,   225,   226,   227,   228,   229,   230,
     195,   232,   155,   155,   235,   202,   203,   204,   205,   155,
     207,   208,   195,   210,   211,   212,   155,   255,   215,   155,
     155,   258,   255,   258,   155,   155,   255,   255,   225,   226,
     227,   228,   229,   230,   255,   232,   255,   255,   235,   255,
     255,   255,   255,   255,   255,   255,   255,   155,   155,   255,
     255,   155,   155,   155,   155,   255,   255,   255,   132,   255,
     132,   255,   255,   255,   132,   132,   132,   258,   258,   258,
     258,   258,   258,   258,   258,   132,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   155,   258,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   132,   132,   255,   255,   255,   255,   255,   155,
     195,   255,   155,   258,   255,   258,   155,   255,   195,   195,
     195,   155,   155,   155,   258,   132,   255,   155,   155,   155,
     155,   155,   255,   255,   255,   255,   255,   160,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   160,   200,   255,
     255,   195,   155,   195,   195,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   155,   155,   155,   258,
     155,   255,   255,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   255,   195,   195,   255,   132,    71,  1421,  1380,
     255,   255,   255,   255,   255,   255,   255,   255,   810,   255,
     255,   255,   255,  1364,   255,   255,   255,   255,   255,   493,
     255,  1255,   605,   460,  1360,   255,   555,   255,   255,   255,
     255,  1407,  1225,  1337,   255,  1409,   523,  1412,  1362,   563,
     639,   483,   356,   124,   183,  1351,   368,  1197,  1195,  1357,
    1355,    95,    -1,    -1,    -1,   255,   255,   255,    -1,   255,
     255,   255,    -1,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,    -1,   435,    -1,   255,
      -1,   255,   255,   255,   255,   255,   255,   255,   255,   255,
      -1,   256,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   289
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   261,     0,     1,     5,    22,    26,    29,    36,    51,
      64,    65,    67,    74,    91,   102,   104,   120,   137,   170,
     179,   180,   184,   185,   262,   267,   272,   286,   292,   307,
     337,   356,   369,   393,   400,   410,   419,   447,   457,   463,
     467,   477,   540,   556,   577,   255,   256,   257,   257,   338,
     420,   458,   257,   468,   257,   541,   370,   448,   357,   257,
     257,   308,   394,   257,   257,   401,   411,     1,    37,    47,
     121,   287,   288,   289,   290,   291,     1,    13,    34,    35,
      41,    97,    98,   107,   108,   127,   128,   144,   145,   146,
     156,   165,   245,   246,   247,   557,   558,   559,   560,   561,
     562,   563,   564,   565,   566,   567,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   155,   339,   343,   155,   421,
     425,   257,     1,    90,   464,   465,   466,   257,     1,     8,
       9,    12,    19,    28,    32,    33,    39,    42,    43,    44,
      46,    52,    71,    72,    76,    83,    87,    88,    89,    92,
      95,    96,   106,   112,   113,   115,   116,   117,   118,   129,
     138,   140,   141,   143,   147,   148,   151,   162,   181,   183,
     187,   191,   192,   193,   194,   198,   199,   206,   236,   238,
     244,   249,   254,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   531,   535,   536,   537,   538,   539,   257,
     257,   257,   257,     1,    56,    57,    58,    59,    60,    61,
      62,    63,   105,   139,   216,   248,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
       1,   119,   150,   268,   269,   270,   271,   155,   309,   313,
     257,     1,    40,    55,    77,    79,    81,    82,   101,   578,
     579,   580,   581,   582,   583,   584,   585,   586,     1,    37,
      85,   121,   123,   124,   167,   169,   182,   224,   250,   251,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   257,   257,   255,   258,   258,   258,   256,
     288,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   256,
     558,   257,   257,     1,    90,   157,   459,   460,   461,   462,
     258,   256,   465,     1,   121,   157,   186,   469,   473,   474,
     475,   476,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   532,   258,   528,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   256,   479,     1,     4,
      45,    48,   104,   121,   243,   542,   543,   544,   545,   546,
     550,   551,   552,     1,    20,    26,    49,    50,    54,    68,
      75,    94,   122,   130,   149,   158,   159,   189,   190,   243,
     371,   372,   373,   374,   375,   376,   377,   378,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,     1,   157,
     186,   243,   449,   453,   454,   455,   456,     1,    54,    84,
      90,   154,   358,   362,   363,   364,   367,   368,   255,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   256,   294,   255,   258,   258,   256,   269,   257,     1,
      22,   125,   157,   395,   396,   397,   398,   399,   258,   258,
     258,   258,   258,   258,   258,   256,   579,   255,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   256,
     274,     1,   121,   186,   243,   402,   403,   404,   405,   406,
       1,   121,   186,   412,   413,   414,   415,   155,   155,   155,
     255,   195,   132,   132,   195,   132,   264,   264,   132,   132,
     195,   195,   195,   132,   264,   195,   195,   195,   195,   195,
     255,     1,    23,    24,    30,   109,   110,   111,   114,   121,
     134,   135,   152,   153,   177,   340,   341,   342,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
       1,     3,     6,    10,    25,    26,    27,    31,    49,    53,
      54,    84,    86,   100,   121,   154,   168,   178,   250,   422,
     423,   424,   426,   427,   428,   429,   430,   431,   432,   433,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   258,
     258,   256,   460,   155,   255,   258,   258,   470,   256,   474,
     195,   264,   195,   264,   132,   155,   132,   195,   195,   195,
     132,   155,   195,   132,   132,   132,   195,   264,   195,   195,
     132,   155,   195,   132,   132,   264,   132,   155,   132,   132,
     195,   195,   258,   195,   258,   264,   264,   195,   264,   155,
     195,   195,   195,   196,   195,   196,   195,   195,   264,   264,
     132,   266,   264,   195,   195,   195,   195,   255,   553,   258,
     258,   547,   258,   258,   256,   543,   255,   258,   258,   258,
     258,   379,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   256,   372,   258,   450,   258,   256,   454,
     255,   359,   258,   258,   258,   256,   363,   155,   155,   155,
     155,   155,   155,   155,   155,   217,   218,   219,   220,   221,
     222,   223,   155,   155,   195,   255,   155,   155,   255,     1,
       5,    26,    38,    49,    54,    66,    73,    78,    93,   121,
     126,   149,   161,   163,   164,   168,   226,   242,   243,   252,
     310,   311,   312,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   255,   258,   258,   258,   256,   396,   195,   195,
     195,   155,   195,   195,   264,   255,   155,   195,   155,   155,
     155,   155,   155,   155,   132,   155,   155,   255,   255,   258,
     407,   258,   256,   403,   255,   258,   416,   256,   413,   255,
     255,   255,   255,   255,   255,   255,   172,   173,   174,   175,
     176,   263,   264,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   256,   341,   255,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   434,   258,   258,   258,   258,   258,   258,
     258,   258,   256,   423,   155,   155,   255,   255,   155,   155,
     258,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   202,   203,   204,   205,   207,   208,
     210,   211,   212,   215,   225,   226,   227,   228,   229,   230,
     232,   235,   533,   534,   255,   202,   203,   204,   205,   207,
     208,   210,   211,   212,   215,   225,   226,   227,   228,   229,
     230,   232,   235,   529,   530,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
      14,    15,    16,   265,   266,   255,   255,   255,   255,   255,
     255,   258,   264,   195,   258,   155,   155,   255,   195,   155,
     195,   195,   258,   195,   195,   195,   195,   195,   155,   132,
     155,   155,   195,   155,   255,   155,   258,   155,   255,   258,
     155,   155,   132,   365,   366,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   258,   258,   258,
     258,   333,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   256,   311,   155,
     155,   155,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   155,   258,   155,   255,   155,   258,   255,   263,   263,
     263,   263,   263,   132,   132,   264,   132,   132,   132,   132,
     155,   132,   132,   264,   264,   266,   255,   155,   213,   214,
     195,   155,   155,   195,   195,   195,   155,   258,   155,   155,
     155,   155,   132,   155,   155,   155,   255,   255,   255,   255,
     255,   160,   471,   472,   255,   259,   255,   259,   265,   265,
     265,    11,   197,   554,   555,   255,   255,    11,   197,   548,
     549,   255,   255,   255,   255,   255,   255,    20,    21,    50,
      68,    75,    94,   122,   130,   131,   171,   190,   380,   381,
     382,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   160,   451,   452,   255,    77,   231,   360,
     361,   255,   255,   200,   255,   259,   195,   155,   195,   195,
     258,   195,   195,   195,   195,   155,   195,   155,   195,   195,
     195,   155,   195,   195,   155,   195,   255,   255,   255,   255,
     255,    93,   170,   201,   215,   233,   234,   239,   240,   241,
     242,   252,   408,   409,   255,   255,    93,   170,   201,   215,
     233,   234,   239,   240,   241,   242,   252,   417,   418,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,    10,    12,    27,    31,    99,   131,   237,   435,
     436,   437,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   259,   534,   530,   255,   259,   255,   259,   382,   255,
     259,   255,   259,   255,   259,   132,   366,   255,   255,   255,
     255,     5,    38,    49,    66,    73,    78,    80,    93,   126,
     131,   142,   161,   163,   164,   226,   242,   252,   334,   335,
     336,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   259,   255,   259,
     437,   255,   259,   472,   555,   549,   381,   452,   361,   336,
     255,   259,   409,   418,   436,   335
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
#line 421 "ircd_parser.y"
    { (yyval.number) = 0; }
    break;

  case 28:
#line 423 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number);
		}
    break;

  case 29:
#line 427 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number);
		}
    break;

  case 30:
#line 431 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number);
		}
    break;

  case 31:
#line 435 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number);
		}
    break;

  case 32:
#line 439 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number);
		}
    break;

  case 33:
#line 443 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number);
		}
    break;

  case 34:
#line 448 "ircd_parser.y"
    { (yyval.number) = 0; }
    break;

  case 36:
#line 449 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
    break;

  case 37:
#line 450 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
    break;

  case 38:
#line 451 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
    break;

  case 39:
#line 452 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
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

    if ((yyvsp[-1].number) < MAXCLIENTS_MIN)
    {
      char buf[IRCD_BUFSIZE];
      ircsprintf(buf, "MAXCLIENTS too low, setting to %d", MAXCLIENTS_MIN);
      yyerror(buf);
    }
    else if ((yyvsp[-1].number) > MAXCLIENTS_MAX)
    {
      char buf[IRCD_BUFSIZE];
      ircsprintf(buf, "MAXCLIENTS too high, setting to %d", MAXCLIENTS_MAX);
      yyerror(buf);
    }
    else
      ServerInfo.max_clients = (yyvsp[-1].number);
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
    yy_aconf = map_to_conf(yy_conf);
    SetConfEncrypted(yy_aconf); /* Yes, the default is encrypted */
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

  case 145:
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

  case 146:
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

  case 147:
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

  case 148:
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

  case 149:
#line 1109 "ircd_parser.y"
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

  case 150:
#line 1120 "ircd_parser.y"
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
#line 1162 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 152:
#line 1171 "ircd_parser.y"
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
#line 1182 "ircd_parser.y"
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
#line 1193 "ircd_parser.y"
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
#line 1204 "ircd_parser.y"
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
#line 1215 "ircd_parser.y"
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
#line 1226 "ircd_parser.y"
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
#line 1237 "ircd_parser.y"
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
#line 1248 "ircd_parser.y"
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
#line 1259 "ircd_parser.y"
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
#line 1270 "ircd_parser.y"
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
#line 1281 "ircd_parser.y"
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
#line 1292 "ircd_parser.y"
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

  case 164:
#line 1303 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_OPERWALL;
    else
      yy_aconf->port &= ~OPER_FLAG_OPERWALL;
  }
}
    break;

  case 165:
#line 1314 "ircd_parser.y"
    {
}
    break;

  case 169:
#line 1318 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 170:
#line 1319 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 171:
#line 1322 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 172:
#line 1329 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 173:
#line 1336 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 174:
#line 1343 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 175:
#line 1350 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 176:
#line 1357 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 177:
#line 1364 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 178:
#line 1371 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 179:
#line 1378 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 180:
#line 1385 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 181:
#line 1392 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 182:
#line 1399 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 183:
#line 1406 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 184:
#line 1413 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 185:
#line 1420 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 186:
#line 1427 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) ClearConfEncrypted(yy_aconf);
    else SetConfEncrypted(yy_aconf);
  }
}
    break;

  case 187:
#line 1440 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = (struct ClassItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 188:
#line 1447 "ircd_parser.y"
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
        rebuild_cidr_class(cconf, yy_class);
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

  case 207:
#line 1499 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    MyFree(yy_class_name);
    DupString(yy_class_name, yylval.string);
  }
}
    break;

  case 208:
#line 1508 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    MyFree(yy_class_name);
    DupString(yy_class_name, yylval.string);
  }
}
    break;

  case 209:
#line 1517 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 210:
#line 1523 "ircd_parser.y"
    {
  if (ypass == 1)
    PingWarning(yy_class) = (yyvsp[-1].number);
}
    break;

  case 211:
#line 1529 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = (yyvsp[-1].number);
}
    break;

  case 212:
#line 1535 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 213:
#line 1541 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 214:
#line 1547 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 215:
#line 1553 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 216:
#line 1559 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = (yyvsp[-1].number);
}
    break;

  case 217:
#line 1565 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 218:
#line 1571 "ircd_parser.y"
    {
  if (ypass == 1)
    CidrBitlenIPV4(yy_class) = (yyvsp[-1].number);
}
    break;

  case 219:
#line 1577 "ircd_parser.y"
    {
  if (ypass == 1)
    CidrBitlenIPV6(yy_class) = (yyvsp[-1].number);
}
    break;

  case 220:
#line 1583 "ircd_parser.y"
    {
  if (ypass == 1)
    NumberPerCidr(yy_class) = (yyvsp[-1].number);
}
    break;

  case 221:
#line 1592 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    listener_address = NULL;
    listener_flags = 0;
  }
}
    break;

  case 222:
#line 1599 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 223:
#line 1608 "ircd_parser.y"
    {
}
    break;

  case 227:
#line 1613 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_SSL;
}
    break;

  case 228:
#line 1617 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_HIDDEN;
}
    break;

  case 239:
#line 1630 "ircd_parser.y"
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

  case 240:
#line 1645 "ircd_parser.y"
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

  case 241:
#line 1667 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 242:
#line 1676 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 243:
#line 1688 "ircd_parser.y"
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

  case 244:
#line 1700 "ircd_parser.y"
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

  case 264:
#line 1765 "ircd_parser.y"
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

  case 265:
#line 1784 "ircd_parser.y"
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

  case 266:
#line 1797 "ircd_parser.y"
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

  case 267:
#line 1808 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 268:
#line 1817 "ircd_parser.y"
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

  case 269:
#line 1828 "ircd_parser.y"
    {
}
    break;

  case 273:
#line 1832 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 274:
#line 1833 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 275:
#line 1836 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 276:
#line 1844 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 277:
#line 1851 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 278:
#line 1858 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 279:
#line 1865 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 280:
#line 1872 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 281:
#line 1879 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 282:
#line 1886 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 283:
#line 1893 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 284:
#line 1900 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 285:
#line 1909 "ircd_parser.y"
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

  case 286:
#line 1920 "ircd_parser.y"
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

  case 287:
#line 1931 "ircd_parser.y"
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

  case 288:
#line 1942 "ircd_parser.y"
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

  case 289:
#line 1953 "ircd_parser.y"
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

  case 290:
#line 1964 "ircd_parser.y"
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

  case 291:
#line 1976 "ircd_parser.y"
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

  case 292:
#line 1995 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 293:
#line 2005 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = (yyvsp[-1].number);
  }
}
    break;

  case 294:
#line 2014 "ircd_parser.y"
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

  case 295:
#line 2029 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 296:
#line 2036 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 303:
#line 2048 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 304:
#line 2057 "ircd_parser.y"
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

  case 305:
#line 2072 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char def_reason[] = "No reason";

    create_nick_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
  }
}
    break;

  case 306:
#line 2085 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(ULINE_TYPE);
    yy_match_item = map_to_conf(yy_conf);
    yy_match_item->action = SHARED_ALL;
  }
}
    break;

  case 307:
#line 2093 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 314:
#line 2104 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 315:
#line 2113 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    split_nuh(yylval.string, NULL, &yy_match_item->user, &yy_match_item->host);
  }
}
    break;

  case 316:
#line 2121 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 320:
#line 2128 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 321:
#line 2132 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TKLINE;
}
    break;

  case 322:
#line 2136 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 323:
#line 2140 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 324:
#line 2144 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TXLINE;
}
    break;

  case 325:
#line 2148 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 326:
#line 2152 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 327:
#line 2156 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TRESV;
}
    break;

  case 328:
#line 2160 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 329:
#line 2164 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_LOCOPS;
}
    break;

  case 330:
#line 2168 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 331:
#line 2177 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_conf->flags = SHARED_ALL;
  }
}
    break;

  case 332:
#line 2184 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_conf->name == NULL)
      DupString(yy_conf->name, "*");
    yy_conf = NULL;
  }
}
    break;

  case 338:
#line 2197 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 339:
#line 2203 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = 0;
}
    break;

  case 343:
#line 2210 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_KLINE;
}
    break;

  case 344:
#line 2214 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TKLINE;
}
    break;

  case 345:
#line 2218 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNKLINE;
}
    break;

  case 346:
#line 2222 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_XLINE;
}
    break;

  case 347:
#line 2226 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TXLINE;
}
    break;

  case 348:
#line 2230 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNXLINE;
}
    break;

  case 349:
#line 2234 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_RESV;
}
    break;

  case 350:
#line 2238 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TRESV;
}
    break;

  case 351:
#line 2242 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNRESV;
}
    break;

  case 352:
#line 2246 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_LOCOPS;
}
    break;

  case 353:
#line 2250 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = SHARED_ALL;
}
    break;

  case 354:
#line 2259 "ircd_parser.y"
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

  case 355:
#line 2277 "ircd_parser.y"
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

  case 379:
#line 2420 "ircd_parser.y"
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

  case 380:
#line 2432 "ircd_parser.y"
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

  case 381:
#line 2444 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 382:
#line 2453 "ircd_parser.y"
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

  case 383:
#line 2479 "ircd_parser.y"
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

  case 384:
#line 2491 "ircd_parser.y"
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

  case 385:
#line 2503 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = (yyvsp[-1].number);
}
    break;

  case 386:
#line 2509 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 387:
#line 2513 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 388:
#line 2521 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 389:
#line 2530 "ircd_parser.y"
    {
}
    break;

  case 393:
#line 2534 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 394:
#line 2535 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 395:
#line 2538 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfLazyLink(yy_aconf);
    else SetConfLazyLink(yy_aconf);
  }
}
    break;

  case 396:
#line 2545 "ircd_parser.y"
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

  case 397:
#line 2556 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfCryptLink(yy_aconf);
    else SetConfCryptLink(yy_aconf);
  }
}
    break;

  case 398:
#line 2563 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAllowAutoConn(yy_aconf);
    else SetConfAllowAutoConn(yy_aconf);
  }
}
    break;

  case 399:
#line 2570 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAwayBurst(yy_aconf);
    else SetConfAwayBurst(yy_aconf);
  }
}
    break;

  case 400:
#line 2577 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfTopicBurst(yy_aconf);
    else SetConfTopicBurst(yy_aconf);
  }
}
    break;

  case 401:
#line 2587 "ircd_parser.y"
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

  case 402:
#line 2628 "ircd_parser.y"
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

  case 403:
#line 2639 "ircd_parser.y"
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

  case 404:
#line 2650 "ircd_parser.y"
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

  case 405:
#line 2665 "ircd_parser.y"
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

  case 406:
#line 2676 "ircd_parser.y"
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

  case 407:
#line 2689 "ircd_parser.y"
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

  case 408:
#line 2702 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 409:
#line 2711 "ircd_parser.y"
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

  case 410:
#line 2746 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    userbuf[0] = hostbuf[0] = reasonbuf[0] = '\0';
    regex_ban = 0;
  }
}
    break;

  case 411:
#line 2753 "ircd_parser.y"
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

  case 412:
#line 2807 "ircd_parser.y"
    {
}
    break;

  case 416:
#line 2812 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 423:
#line 2821 "ircd_parser.y"
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

  case 424:
#line 2837 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 425:
#line 2846 "ircd_parser.y"
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

  case 426:
#line 2855 "ircd_parser.y"
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

  case 432:
#line 2871 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 433:
#line 2880 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 439:
#line 2897 "ircd_parser.y"
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

  case 440:
#line 2918 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    regex_ban = 0;
    reasonbuf[0] = gecos_name[0] = '\0';
  }
}
    break;

  case 441:
#line 2925 "ircd_parser.y"
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

  case 442:
#line 2959 "ircd_parser.y"
    {
}
    break;

  case 446:
#line 2964 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 453:
#line 2973 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(gecos_name, yylval.string, sizeof(gecos_name));
}
    break;

  case 454:
#line 2979 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 513:
#line 3024 "ircd_parser.y"
    {
  ConfigFileEntry.gline_min_cidr = (yyvsp[-1].number);
}
    break;

  case 514:
#line 3029 "ircd_parser.y"
    {
  ConfigFileEntry.gline_min_cidr6 = (yyvsp[-1].number);
}
    break;

  case 515:
#line 3034 "ircd_parser.y"
    {
  ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 516:
#line 3039 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
}
    break;

  case 517:
#line 3044 "ircd_parser.y"
    {
  GlobalSetOptions.rejecttime = yylval.number;
}
    break;

  case 518:
#line 3049 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 519:
#line 3054 "ircd_parser.y"
    {
  ConfigFileEntry.kill_chase_time_limit = (yyvsp[-1].number);
}
    break;

  case 520:
#line 3059 "ircd_parser.y"
    {
  ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 521:
#line 3064 "ircd_parser.y"
    {
  ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 522:
#line 3069 "ircd_parser.y"
    {
  ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 523:
#line 3074 "ircd_parser.y"
    {
  ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 524:
#line 3079 "ircd_parser.y"
    {
  ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 525:
#line 3084 "ircd_parser.y"
    {
  ConfigFileEntry.max_nick_time = (yyvsp[-1].number); 
}
    break;

  case 526:
#line 3089 "ircd_parser.y"
    {
  ConfigFileEntry.max_nick_changes = (yyvsp[-1].number);
}
    break;

  case 527:
#line 3094 "ircd_parser.y"
    {
  ConfigFileEntry.max_accept = (yyvsp[-1].number);
}
    break;

  case 528:
#line 3099 "ircd_parser.y"
    {
  ConfigFileEntry.anti_spam_exit_message_time = (yyvsp[-1].number);
}
    break;

  case 529:
#line 3104 "ircd_parser.y"
    {
  ConfigFileEntry.ts_warn_delta = (yyvsp[-1].number);
}
    break;

  case 530:
#line 3109 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = (yyvsp[-1].number);
}
    break;

  case 531:
#line 3115 "ircd_parser.y"
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
#line 3126 "ircd_parser.y"
    {
  ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 533:
#line 3131 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 534:
#line 3140 "ircd_parser.y"
    {
  ConfigFileEntry.invisible_on_connect = yylval.number;
}
    break;

  case 535:
#line 3145 "ircd_parser.y"
    {
  ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 536:
#line 3150 "ircd_parser.y"
    {
  ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 537:
#line 3155 "ircd_parser.y"
    {
  ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 538:
#line 3160 "ircd_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 539:
#line 3163 "ircd_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 540:
#line 3168 "ircd_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 541:
#line 3171 "ircd_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 542:
#line 3176 "ircd_parser.y"
    {
  ConfigFileEntry.pace_wait = (yyvsp[-1].number);
}
    break;

  case 543:
#line 3181 "ircd_parser.y"
    {
  ConfigFileEntry.caller_id_wait = (yyvsp[-1].number);
}
    break;

  case 544:
#line 3186 "ircd_parser.y"
    {
  ConfigFileEntry.opers_bypass_callerid = yylval.number;
}
    break;

  case 545:
#line 3191 "ircd_parser.y"
    {
  ConfigFileEntry.pace_wait_simple = (yyvsp[-1].number);
}
    break;

  case 546:
#line 3196 "ircd_parser.y"
    {
  ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 547:
#line 3201 "ircd_parser.y"
    {
  ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 548:
#line 3206 "ircd_parser.y"
    {
  ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 549:
#line 3211 "ircd_parser.y"
    {
  ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 550:
#line 3216 "ircd_parser.y"
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
#line 3227 "ircd_parser.y"
    {
  ConfigFileEntry.idletime = (yyvsp[-1].number);
}
    break;

  case 552:
#line 3232 "ircd_parser.y"
    {
  ConfigFileEntry.dots_in_ident = (yyvsp[-1].number);
}
    break;

  case 553:
#line 3237 "ircd_parser.y"
    {
  ConfigFileEntry.max_targets = (yyvsp[-1].number);
}
    break;

  case 554:
#line 3242 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 555:
#line 3251 "ircd_parser.y"
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
#line 3283 "ircd_parser.y"
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
#line 3301 "ircd_parser.y"
    {
  ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 558:
#line 3306 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 559:
#line 3315 "ircd_parser.y"
    {
  ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 560:
#line 3320 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 561:
#line 3325 "ircd_parser.y"
    {
  ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 562:
#line 3330 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 566:
#line 3336 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 567:
#line 3339 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 568:
#line 3342 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEAF;
}
    break;

  case 569:
#line 3345 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 570:
#line 3348 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 571:
#line 3351 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 572:
#line 3354 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 573:
#line 3357 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 574:
#line 3360 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 575:
#line 3363 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 576:
#line 3366 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 577:
#line 3369 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 578:
#line 3372 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 579:
#line 3375 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 580:
#line 3378 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 581:
#line 3381 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 582:
#line 3384 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 583:
#line 3387 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 584:
#line 3392 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 588:
#line 3398 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 589:
#line 3401 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 590:
#line 3404 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEAF;
}
    break;

  case 591:
#line 3407 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 592:
#line 3410 "ircd_parser.y"
    { 
  ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 593:
#line 3413 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 594:
#line 3416 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 595:
#line 3419 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 596:
#line 3422 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 597:
#line 3425 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 598:
#line 3428 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 599:
#line 3431 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 600:
#line 3434 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 601:
#line 3437 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 602:
#line 3440 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 603:
#line 3443 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 604:
#line 3446 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 605:
#line 3449 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 606:
#line 3454 "ircd_parser.y"
    {
  ConfigFileEntry.min_nonwildcard = (yyvsp[-1].number);
}
    break;

  case 607:
#line 3459 "ircd_parser.y"
    {
  ConfigFileEntry.min_nonwildcard_simple = (yyvsp[-1].number);
}
    break;

  case 608:
#line 3464 "ircd_parser.y"
    {
  ConfigFileEntry.default_floodcount = (yyvsp[-1].number);
}
    break;

  case 609:
#line 3469 "ircd_parser.y"
    {
  ConfigFileEntry.client_flood = (yyvsp[-1].number);
}
    break;

  case 610:
#line 3474 "ircd_parser.y"
    {
  ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 611:
#line 3482 "ircd_parser.y"
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
#line 3490 "ircd_parser.y"
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
#line 3517 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 623:
#line 3523 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = (yyvsp[-1].number);
}
    break;

  case 624:
#line 3529 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 628:
#line 3535 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 629:
#line 3539 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 630:
#line 3545 "ircd_parser.y"
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
#line 3564 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 632:
#line 3573 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 633:
#line 3577 "ircd_parser.y"
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
#line 3617 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 637:
#line 3621 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 660:
#line 3646 "ircd_parser.y"
    {
  ConfigChannel.restrict_channels = yylval.number;
}
    break;

  case 661:
#line 3651 "ircd_parser.y"
    {
  ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 662:
#line 3656 "ircd_parser.y"
    {
  ConfigChannel.use_except = yylval.number;
}
    break;

  case 663:
#line 3661 "ircd_parser.y"
    {
  ConfigChannel.use_invex = yylval.number;
}
    break;

  case 664:
#line 3666 "ircd_parser.y"
    {
  ConfigChannel.use_knock = yylval.number;
}
    break;

  case 665:
#line 3671 "ircd_parser.y"
    {
  ConfigChannel.knock_delay = (yyvsp[-1].number);
}
    break;

  case 666:
#line 3676 "ircd_parser.y"
    {
  ConfigChannel.knock_delay_channel = (yyvsp[-1].number);
}
    break;

  case 667:
#line 3681 "ircd_parser.y"
    {
  ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 668:
#line 3686 "ircd_parser.y"
    {
  ConfigChannel.max_chans_per_user = (yyvsp[-1].number);
}
    break;

  case 669:
#line 3691 "ircd_parser.y"
    {
  ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 670:
#line 3696 "ircd_parser.y"
    {
  ConfigChannel.max_bans = (yyvsp[-1].number);
}
    break;

  case 671:
#line 3701 "ircd_parser.y"
    {
  ConfigChannel.default_split_user_count = (yyvsp[-1].number);
}
    break;

  case 672:
#line 3706 "ircd_parser.y"
    {
  ConfigChannel.default_split_server_count = (yyvsp[-1].number);
}
    break;

  case 673:
#line 3711 "ircd_parser.y"
    {
  ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 674:
#line 3716 "ircd_parser.y"
    {
  ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 675:
#line 3721 "ircd_parser.y"
    {
  ConfigChannel.burst_topicwho = yylval.number;
}
    break;

  case 676:
#line 3726 "ircd_parser.y"
    {
  GlobalSetOptions.joinfloodcount = yylval.number;
}
    break;

  case 677:
#line 3731 "ircd_parser.y"
    {
  GlobalSetOptions.joinfloodtime = yylval.number;
}
    break;

  case 689:
#line 3750 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 690:
#line 3756 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 691:
#line 3762 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigServerHide.hidden_name);
    DupString(ConfigServerHide.hidden_name, yylval.string);
  }
}
    break;

  case 692:
#line 3771 "ircd_parser.y"
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

  case 693:
#line 3785 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 694:
#line 3791 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 695:
#line 3797 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 1037 of yacc.c.  */
#line 7134 "y.tab.c"

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



