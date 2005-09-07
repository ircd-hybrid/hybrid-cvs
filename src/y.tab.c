/* A Bison parser, made from ircd_parser.y, by GNU bison 1.75.  */
/* $Id: y.tab.c,v 7.67 2005/09/07 02:21:19 adx Exp $ */

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
     OPERS_BYPASS_CALLERID = 276,
     CAN_FLOOD = 277,
     CAN_IDLE = 278,
     CHANNEL = 279,
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
     NEED_IDENT = 329,
     HAVENT_READ_CONF = 330,
     HIDDEN = 331,
     HIDDEN_ADMIN = 332,
     HIDDEN_OPER = 333,
     HIDE_SERVER_IPS = 334,
     HIDE_SERVERS = 335,
     HIDE_SPOOF_IPS = 336,
     HOST = 337,
     HUB = 338,
     HUB_MASK = 339,
     IDLETIME = 340,
     IGNORE_BOGUS_TS = 341,
     INVISIBLE_ON_CONNECT = 342,
     IP = 343,
     KILL = 344,
     KILL_CHASE_TIME_LIMIT = 345,
     KLINE = 346,
     KLINE_EXEMPT = 347,
     KLINE_REASON = 348,
     KLINE_WITH_REASON = 349,
     KNOCK_DELAY = 350,
     KNOCK_DELAY_CHANNEL = 351,
     LAZYLINK = 352,
     LEAF_MASK = 353,
     LINKS_DELAY = 354,
     LISTEN = 355,
     T_LOG = 356,
     LOGGING = 357,
     LOG_LEVEL = 358,
     MAXIMUM_LINKS = 359,
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
     NUMBER_PER_IP = 388,
     NUMBER_PER_IP_GLOBAL = 389,
     OPERATOR = 390,
     OPER_LOG = 391,
     OPER_ONLY_UMODES = 392,
     OPER_PASS_RESV = 393,
     OPER_SPY_T = 394,
     OPER_UMODES = 395,
     INVITE_OPS_ONLY = 396,
     JOIN_FLOOD_COUNT = 397,
     JOIN_FLOOD_TIME = 398,
     PACE_WAIT = 399,
     PACE_WAIT_SIMPLE = 400,
     PASSWORD = 401,
     PATH = 402,
     PING_COOKIE = 403,
     PING_TIME = 404,
     PING_WARNING = 405,
     PORT = 406,
     QSTRING = 407,
     QUIET_ON_BAN = 408,
     REASON = 409,
     REDIRPORT = 410,
     REDIRSERV = 411,
     REGEX_T = 412,
     REHASH = 413,
     TREJECT_HOLD_TIME = 414,
     REMOTE = 415,
     REMOTEBAN = 416,
     RESTRICTED = 417,
     RSA_PRIVATE_KEY_FILE = 418,
     RSA_PUBLIC_KEY_FILE = 419,
     SSL_CERTIFICATE_FILE = 420,
     RESV = 421,
     RESV_EXEMPT = 422,
     SECONDS = 423,
     MINUTES = 424,
     HOURS = 425,
     DAYS = 426,
     WEEKS = 427,
     SENDQ = 428,
     SEND_PASSWORD = 429,
     SERVERHIDE = 430,
     SERVERINFO = 431,
     SERVLINK_PATH = 432,
     IRCD_SID = 433,
     TKLINE_EXPIRE_NOTICES = 434,
     T_SHARED = 435,
     T_CLUSTER = 436,
     TYPE = 437,
     SHORT_MOTD = 438,
     SILENT = 439,
     SPOOF = 440,
     SPOOF_NOTICE = 441,
     STATS_I_OPER_ONLY = 442,
     STATS_K_OPER_ONLY = 443,
     STATS_O_OPER_ONLY = 444,
     STATS_P_OPER_ONLY = 445,
     TBOOL = 446,
     TMASKED = 447,
     T_REJECT = 448,
     TS_MAX_DELTA = 449,
     TS_WARN_DELTA = 450,
     TWODOTS = 451,
     T_ALL = 452,
     T_BOTS = 453,
     T_SOFTCALLERID = 454,
     T_CALLERID = 455,
     T_CCONN = 456,
     T_CLIENT_FLOOD = 457,
     T_DEAF = 458,
     T_DEBUG = 459,
     T_DRONE = 460,
     T_EXTERNAL = 461,
     T_FULL = 462,
     T_INVISIBLE = 463,
     T_IPV4 = 464,
     T_IPV6 = 465,
     T_LOCOPS = 466,
     T_LOGPATH = 467,
     T_L_CRIT = 468,
     T_L_DEBUG = 469,
     T_L_ERROR = 470,
     T_L_INFO = 471,
     T_L_NOTICE = 472,
     T_L_TRACE = 473,
     T_L_WARN = 474,
     T_MAX_CLIENTS = 475,
     T_NCHANGE = 476,
     T_OPERWALL = 477,
     T_REJ = 478,
     T_SERVNOTICE = 479,
     T_SKILL = 480,
     T_SPY = 481,
     T_SSL = 482,
     T_UNAUTH = 483,
     T_UNRESV = 484,
     T_UNXLINE = 485,
     T_WALLOP = 486,
     THROTTLE_TIME = 487,
     TOPICBURST = 488,
     TRUE_NO_OPER_FLOOD = 489,
     TKLINE = 490,
     TXLINE = 491,
     TRESV = 492,
     UNKLINE = 493,
     USER = 494,
     USE_EGD = 495,
     USE_EXCEPT = 496,
     USE_INVEX = 497,
     USE_KNOCK = 498,
     USE_LOGGING = 499,
     USE_WHOIS_ACTUALLY = 500,
     VHOST = 501,
     VHOST6 = 502,
     XLINE = 503,
     WARN = 504,
     WARN_NO_NLINE = 505
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
#define OPERS_BYPASS_CALLERID 276
#define CAN_FLOOD 277
#define CAN_IDLE 278
#define CHANNEL 279
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
#define NEED_IDENT 329
#define HAVENT_READ_CONF 330
#define HIDDEN 331
#define HIDDEN_ADMIN 332
#define HIDDEN_OPER 333
#define HIDE_SERVER_IPS 334
#define HIDE_SERVERS 335
#define HIDE_SPOOF_IPS 336
#define HOST 337
#define HUB 338
#define HUB_MASK 339
#define IDLETIME 340
#define IGNORE_BOGUS_TS 341
#define INVISIBLE_ON_CONNECT 342
#define IP 343
#define KILL 344
#define KILL_CHASE_TIME_LIMIT 345
#define KLINE 346
#define KLINE_EXEMPT 347
#define KLINE_REASON 348
#define KLINE_WITH_REASON 349
#define KNOCK_DELAY 350
#define KNOCK_DELAY_CHANNEL 351
#define LAZYLINK 352
#define LEAF_MASK 353
#define LINKS_DELAY 354
#define LISTEN 355
#define T_LOG 356
#define LOGGING 357
#define LOG_LEVEL 358
#define MAXIMUM_LINKS 359
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
#define NUMBER_PER_IP 388
#define NUMBER_PER_IP_GLOBAL 389
#define OPERATOR 390
#define OPER_LOG 391
#define OPER_ONLY_UMODES 392
#define OPER_PASS_RESV 393
#define OPER_SPY_T 394
#define OPER_UMODES 395
#define INVITE_OPS_ONLY 396
#define JOIN_FLOOD_COUNT 397
#define JOIN_FLOOD_TIME 398
#define PACE_WAIT 399
#define PACE_WAIT_SIMPLE 400
#define PASSWORD 401
#define PATH 402
#define PING_COOKIE 403
#define PING_TIME 404
#define PING_WARNING 405
#define PORT 406
#define QSTRING 407
#define QUIET_ON_BAN 408
#define REASON 409
#define REDIRPORT 410
#define REDIRSERV 411
#define REGEX_T 412
#define REHASH 413
#define TREJECT_HOLD_TIME 414
#define REMOTE 415
#define REMOTEBAN 416
#define RESTRICTED 417
#define RSA_PRIVATE_KEY_FILE 418
#define RSA_PUBLIC_KEY_FILE 419
#define SSL_CERTIFICATE_FILE 420
#define RESV 421
#define RESV_EXEMPT 422
#define SECONDS 423
#define MINUTES 424
#define HOURS 425
#define DAYS 426
#define WEEKS 427
#define SENDQ 428
#define SEND_PASSWORD 429
#define SERVERHIDE 430
#define SERVERINFO 431
#define SERVLINK_PATH 432
#define IRCD_SID 433
#define TKLINE_EXPIRE_NOTICES 434
#define T_SHARED 435
#define T_CLUSTER 436
#define TYPE 437
#define SHORT_MOTD 438
#define SILENT 439
#define SPOOF 440
#define SPOOF_NOTICE 441
#define STATS_I_OPER_ONLY 442
#define STATS_K_OPER_ONLY 443
#define STATS_O_OPER_ONLY 444
#define STATS_P_OPER_ONLY 445
#define TBOOL 446
#define TMASKED 447
#define T_REJECT 448
#define TS_MAX_DELTA 449
#define TS_WARN_DELTA 450
#define TWODOTS 451
#define T_ALL 452
#define T_BOTS 453
#define T_SOFTCALLERID 454
#define T_CALLERID 455
#define T_CCONN 456
#define T_CLIENT_FLOOD 457
#define T_DEAF 458
#define T_DEBUG 459
#define T_DRONE 460
#define T_EXTERNAL 461
#define T_FULL 462
#define T_INVISIBLE 463
#define T_IPV4 464
#define T_IPV6 465
#define T_LOCOPS 466
#define T_LOGPATH 467
#define T_L_CRIT 468
#define T_L_DEBUG 469
#define T_L_ERROR 470
#define T_L_INFO 471
#define T_L_NOTICE 472
#define T_L_TRACE 473
#define T_L_WARN 474
#define T_MAX_CLIENTS 475
#define T_NCHANGE 476
#define T_OPERWALL 477
#define T_REJ 478
#define T_SERVNOTICE 479
#define T_SKILL 480
#define T_SPY 481
#define T_SSL 482
#define T_UNAUTH 483
#define T_UNRESV 484
#define T_UNXLINE 485
#define T_WALLOP 486
#define THROTTLE_TIME 487
#define TOPICBURST 488
#define TRUE_NO_OPER_FLOOD 489
#define TKLINE 490
#define TXLINE 491
#define TRESV 492
#define UNKLINE 493
#define USER 494
#define USE_EGD 495
#define USE_EXCEPT 496
#define USE_INVEX 497
#define USE_KNOCK 498
#define USE_LOGGING 499
#define USE_WHOIS_ACTUALLY 500
#define VHOST 501
#define VHOST6 502
#define XLINE 503
#define WARN 504
#define WARN_NO_NLINE 505




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
#line 686 "y.tab.c"
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
#line 707 "y.tab.c"

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
#define YYLAST   1371

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  256
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  323
/* YYNRULES -- Number of rules. */
#define YYNRULES  686
/* YYNRULES -- Number of states. */
#define YYNSTATES  1402

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   505

#define YYTRANSLATE(X) \
  ((unsigned)(X) <= YYMAXUTOK ? yytranslate[X] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   255,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   251,
       2,   254,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   253,     2,   252,     2,     2,     2,     2,
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
     245,   246,   247,   248,   249,   250
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
     614,   616,   619,   624,   626,   631,   636,   641,   646,   651,
     656,   661,   666,   671,   672,   679,   680,   686,   690,   692,
     694,   696,   699,   701,   703,   705,   707,   709,   712,   717,
     721,   723,   725,   729,   734,   739,   740,   747,   750,   752,
     754,   756,   758,   760,   762,   764,   766,   768,   770,   772,
     774,   776,   778,   780,   782,   784,   787,   792,   797,   802,
     807,   812,   813,   819,   823,   825,   828,   830,   832,   834,
     836,   838,   840,   842,   844,   846,   848,   850,   855,   860,
     865,   870,   875,   880,   885,   890,   895,   900,   901,   908,
     911,   913,   915,   917,   919,   922,   927,   932,   937,   938,
     945,   948,   950,   952,   954,   956,   959,   964,   969,   970,
     976,   980,   982,   984,   986,   988,   990,   992,   994,   996,
     998,  1000,  1002,  1004,  1005,  1012,  1015,  1017,  1019,  1021,
    1024,  1029,  1030,  1036,  1040,  1042,  1044,  1046,  1048,  1050,
    1052,  1054,  1056,  1058,  1060,  1062,  1064,  1065,  1073,  1074,
    1076,  1079,  1081,  1083,  1085,  1087,  1089,  1091,  1093,  1095,
    1097,  1099,  1101,  1103,  1105,  1107,  1109,  1111,  1113,  1115,
    1117,  1120,  1125,  1127,  1132,  1137,  1142,  1147,  1152,  1157,
    1162,  1167,  1168,  1174,  1178,  1180,  1183,  1185,  1187,  1189,
    1191,  1193,  1195,  1197,  1202,  1207,  1212,  1217,  1222,  1227,
    1232,  1237,  1242,  1243,  1250,  1251,  1257,  1261,  1263,  1265,
    1268,  1270,  1272,  1274,  1276,  1278,  1283,  1288,  1289,  1296,
    1299,  1301,  1303,  1305,  1307,  1312,  1317,  1318,  1325,  1328,
    1330,  1332,  1334,  1339,  1340,  1347,  1348,  1354,  1358,  1360,
    1362,  1365,  1367,  1369,  1371,  1373,  1375,  1380,  1385,  1391,
    1394,  1396,  1398,  1400,  1402,  1404,  1406,  1408,  1410,  1412,
    1414,  1416,  1418,  1420,  1422,  1424,  1426,  1428,  1430,  1432,
    1434,  1436,  1438,  1440,  1442,  1444,  1446,  1448,  1450,  1452,
    1454,  1456,  1458,  1460,  1462,  1464,  1466,  1468,  1470,  1472,
    1474,  1476,  1478,  1480,  1482,  1484,  1486,  1488,  1490,  1492,
    1494,  1496,  1498,  1500,  1502,  1504,  1506,  1508,  1510,  1512,
    1517,  1522,  1527,  1532,  1537,  1542,  1547,  1552,  1557,  1562,
    1567,  1572,  1577,  1582,  1587,  1592,  1597,  1602,  1607,  1612,
    1617,  1622,  1627,  1632,  1637,  1642,  1647,  1652,  1657,  1662,
    1667,  1672,  1677,  1682,  1687,  1692,  1697,  1702,  1707,  1712,
    1717,  1722,  1727,  1732,  1737,  1742,  1747,  1752,  1757,  1762,
    1767,  1772,  1773,  1779,  1783,  1785,  1787,  1789,  1791,  1793,
    1795,  1797,  1799,  1801,  1803,  1805,  1807,  1809,  1811,  1813,
    1815,  1817,  1819,  1821,  1822,  1828,  1832,  1834,  1836,  1838,
    1840,  1842,  1844,  1846,  1848,  1850,  1852,  1854,  1856,  1858,
    1860,  1862,  1864,  1866,  1868,  1870,  1875,  1880,  1885,  1890,
    1895,  1896,  1903,  1906,  1908,  1910,  1912,  1914,  1916,  1918,
    1920,  1922,  1927,  1932,  1933,  1939,  1943,  1945,  1947,  1949,
    1954,  1959,  1960,  1966,  1970,  1972,  1974,  1976,  1982,  1985,
    1987,  1989,  1991,  1993,  1995,  1997,  1999,  2001,  2003,  2005,
    2007,  2009,  2011,  2013,  2015,  2017,  2019,  2024,  2029,  2034,
    2039,  2044,  2049,  2054,  2059,  2064,  2069,  2074,  2079,  2084,
    2089,  2094,  2100,  2103,  2105,  2107,  2109,  2111,  2113,  2115,
    2117,  2119,  2124,  2129,  2134,  2139,  2144
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     257,     0,    -1,    -1,   257,   258,    -1,   282,    -1,   288,
      -1,   303,    -1,   552,    -1,   332,    -1,   348,    -1,   361,
      -1,   268,    -1,   570,    -1,   385,    -1,   392,    -1,   402,
      -1,   411,    -1,   439,    -1,   449,    -1,   455,    -1,   470,
      -1,   536,    -1,   460,    -1,   263,    -1,     1,   251,    -1,
       1,   252,    -1,    -1,   260,    -1,   131,   259,    -1,   131,
     168,   259,    -1,   131,   169,   259,    -1,   131,   170,   259,
      -1,   131,   171,   259,    -1,   131,   172,   259,    -1,    -1,
     262,    -1,   131,   261,    -1,   131,    15,   261,    -1,   131,
      16,   261,    -1,   131,    17,   261,    -1,   119,   253,   264,
     252,   251,    -1,   264,   265,    -1,   265,    -1,   266,    -1,
     267,    -1,     1,   251,    -1,   118,   254,   152,   251,    -1,
     147,   254,   152,   251,    -1,   176,   253,   269,   252,   251,
      -1,   269,   270,    -1,   270,    -1,   273,    -1,   278,    -1,
     281,    -1,   275,    -1,   276,    -1,   277,    -1,   280,    -1,
     272,    -1,   279,    -1,   274,    -1,   271,    -1,     1,   251,
      -1,   165,   254,   152,   251,    -1,   163,   254,   152,   251,
      -1,   120,   254,   152,   251,    -1,   178,   254,   152,   251,
      -1,    37,   254,   152,   251,    -1,   123,   254,   152,   251,
      -1,   122,   254,   152,   251,    -1,   246,   254,   152,   251,
      -1,   247,   254,   152,   251,    -1,   220,   254,   131,   251,
      -1,    83,   254,   191,   251,    -1,     5,   253,   283,   252,
     251,    -1,   283,   284,    -1,   284,    -1,   285,    -1,   287,
      -1,   286,    -1,     1,   251,    -1,   120,   254,   152,   251,
      -1,    47,   254,   152,   251,    -1,    37,   254,   152,   251,
      -1,   102,   253,   289,   252,   251,    -1,   289,   290,    -1,
     290,    -1,   291,    -1,   292,    -1,   301,    -1,   302,    -1,
     293,    -1,   295,    -1,   297,    -1,   298,    -1,   300,    -1,
     296,    -1,   299,    -1,   294,    -1,     1,   251,    -1,   212,
     254,   152,   251,    -1,   136,   254,   152,   251,    -1,    63,
     254,   152,   251,    -1,    56,   254,   152,   251,    -1,    61,
     254,   152,   251,    -1,    62,   254,   152,   251,    -1,    59,
     254,   152,   251,    -1,    58,   254,   152,   251,    -1,    60,
     254,   152,   251,    -1,    57,   254,   152,   251,    -1,   103,
     254,   213,   251,    -1,   103,   254,   215,   251,    -1,   103,
     254,   219,   251,    -1,   103,   254,   217,   251,    -1,   103,
     254,   218,   251,    -1,   103,   254,   216,   251,    -1,   103,
     254,   214,   251,    -1,   244,   254,   191,   251,    -1,    -1,
     135,   304,   305,   253,   306,   252,   251,    -1,    -1,   309,
      -1,   306,   307,    -1,   307,    -1,   308,    -1,   310,    -1,
     311,    -1,   313,    -1,   315,    -1,   316,    -1,   317,    -1,
     319,    -1,   320,    -1,   321,    -1,   322,    -1,   323,    -1,
     318,    -1,   324,    -1,   325,    -1,   326,    -1,   312,    -1,
     314,    -1,   327,    -1,     1,   251,    -1,   120,   254,   152,
     251,    -1,   152,    -1,   239,   254,   152,   251,    -1,   146,
     254,   152,   251,    -1,    49,   254,   191,   251,    -1,    77,
     254,   191,   251,    -1,   164,   254,   152,   251,    -1,    26,
     254,   152,   251,    -1,    73,   254,   191,   251,    -1,   160,
     254,   191,   251,    -1,   161,   254,   191,   251,    -1,    91,
     254,   191,   251,    -1,   248,   254,   191,   251,    -1,   238,
     254,   191,   251,    -1,    66,   254,   191,   251,    -1,   125,
     254,   191,   251,    -1,    38,   254,   191,   251,    -1,   158,
     254,   191,   251,    -1,     5,   254,   191,   251,    -1,    -1,
      54,   328,   254,   329,   251,    -1,   329,   255,   330,    -1,
     330,    -1,   130,   331,    -1,   331,    -1,    73,    -1,   160,
      -1,    91,    -1,   238,    -1,   248,    -1,    66,    -1,    38,
      -1,   158,    -1,     5,    -1,    77,    -1,   125,    -1,   222,
      -1,   139,    -1,    78,    -1,   161,    -1,    49,    -1,    -1,
      26,   333,   334,   253,   335,   252,   251,    -1,    -1,   338,
      -1,   335,   336,    -1,   336,    -1,   337,    -1,   339,    -1,
     340,    -1,   341,    -1,   342,    -1,   343,    -1,   344,    -1,
     345,    -1,   346,    -1,   347,    -1,     1,   251,    -1,   120,
     254,   152,   251,    -1,   152,    -1,   149,   254,   260,   251,
      -1,   150,   254,   260,   251,    -1,   133,   254,   131,   251,
      -1,    30,   254,   260,   251,    -1,   113,   254,   131,   251,
      -1,   108,   254,   131,   251,    -1,   110,   254,   131,   251,
      -1,   109,   254,   131,   251,    -1,   173,   254,   262,   251,
      -1,    -1,   100,   349,   253,   354,   252,   251,    -1,    -1,
      54,   351,   254,   352,   251,    -1,   352,   255,   353,    -1,
     353,    -1,   227,    -1,    76,    -1,   354,   355,    -1,   355,
      -1,   356,    -1,   350,    -1,   359,    -1,   360,    -1,     1,
     251,    -1,   151,   254,   357,   251,    -1,   357,   255,   358,
      -1,   358,    -1,   131,    -1,   131,   196,   131,    -1,    88,
     254,   152,   251,    -1,    82,   254,   152,   251,    -1,    -1,
      10,   362,   253,   363,   252,   251,    -1,   363,   364,    -1,
     364,    -1,   365,    -1,   366,    -1,   368,    -1,   370,    -1,
     375,    -1,   376,    -1,   377,    -1,   379,    -1,   380,    -1,
     381,    -1,   367,    -1,   382,    -1,   383,    -1,   378,    -1,
     384,    -1,   369,    -1,     1,   251,    -1,   239,   254,   152,
     251,    -1,   146,   254,   152,   251,    -1,   186,   254,   191,
     251,    -1,    26,   254,   152,   251,    -1,    49,   254,   191,
     251,    -1,    -1,    54,   371,   254,   372,   251,    -1,   372,
     255,   373,    -1,   373,    -1,   130,   374,    -1,   374,    -1,
     186,    -1,    50,    -1,    92,    -1,    74,    -1,    22,    -1,
      23,    -1,   129,    -1,    68,    -1,   167,    -1,   121,    -1,
      92,   254,   191,   251,    -1,    74,   254,   191,   251,    -1,
      50,   254,   191,   251,    -1,    22,   254,   191,   251,    -1,
     129,   254,   191,   251,    -1,    68,   254,   191,   251,    -1,
     185,   254,   152,   251,    -1,   156,   254,   152,   251,    -1,
     155,   254,   131,   251,    -1,   121,   254,   191,   251,    -1,
      -1,   166,   386,   253,   387,   252,   251,    -1,   387,   388,
      -1,   388,    -1,   389,    -1,   390,    -1,   391,    -1,     1,
     251,    -1,   154,   254,   152,   251,    -1,    24,   254,   152,
     251,    -1,   124,   254,   152,   251,    -1,    -1,   180,   393,
     253,   394,   252,   251,    -1,   394,   395,    -1,   395,    -1,
     396,    -1,   397,    -1,   398,    -1,     1,   251,    -1,   120,
     254,   152,   251,    -1,   239,   254,   152,   251,    -1,    -1,
     182,   399,   254,   400,   251,    -1,   400,   255,   401,    -1,
     401,    -1,    91,    -1,   235,    -1,   238,    -1,   248,    -1,
     236,    -1,   230,    -1,   166,    -1,   237,    -1,   229,    -1,
     211,    -1,   197,    -1,    -1,   181,   403,   253,   404,   252,
     251,    -1,   404,   405,    -1,   405,    -1,   406,    -1,   407,
      -1,     1,   251,    -1,   120,   254,   152,   251,    -1,    -1,
     182,   408,   254,   409,   251,    -1,   409,   255,   410,    -1,
     410,    -1,    91,    -1,   235,    -1,   238,    -1,   248,    -1,
     236,    -1,   230,    -1,   166,    -1,   237,    -1,   229,    -1,
     211,    -1,   197,    -1,    -1,    29,   412,   413,   253,   414,
     252,   251,    -1,    -1,   417,    -1,   414,   415,    -1,   415,
      -1,   416,    -1,   418,    -1,   419,    -1,   420,    -1,   421,
      -1,   423,    -1,   422,    -1,   424,    -1,   425,    -1,   435,
      -1,   436,    -1,   437,    -1,   434,    -1,   431,    -1,   433,
      -1,   432,    -1,   430,    -1,   438,    -1,     1,   251,    -1,
     120,   254,   152,   251,    -1,   152,    -1,    82,   254,   152,
     251,    -1,   246,   254,   152,   251,    -1,   174,   254,   152,
     251,    -1,     3,   254,   152,   251,    -1,   151,   254,   131,
     251,    -1,     6,   254,   209,   251,    -1,     6,   254,   210,
     251,    -1,    53,   254,   152,   251,    -1,    -1,    54,   426,
     254,   427,   251,    -1,   427,   255,   428,    -1,   428,    -1,
     130,   429,    -1,   429,    -1,    97,    -1,    27,    -1,    31,
      -1,    11,    -1,    13,    -1,   233,    -1,   164,   254,   152,
     251,    -1,    49,   254,   191,   251,    -1,    31,   254,   191,
     251,    -1,    27,   254,   191,   251,    -1,    11,   254,   191,
     251,    -1,    84,   254,   152,   251,    -1,    98,   254,   152,
     251,    -1,    26,   254,   152,   251,    -1,    25,   254,   152,
     251,    -1,    -1,    89,   440,   253,   445,   252,   251,    -1,
      -1,   182,   442,   254,   443,   251,    -1,   443,   255,   444,
      -1,   444,    -1,   157,    -1,   445,   446,    -1,   446,    -1,
     447,    -1,   448,    -1,   441,    -1,     1,    -1,   239,   254,
     152,   251,    -1,   154,   254,   152,   251,    -1,    -1,    36,
     450,   253,   451,   252,   251,    -1,   451,   452,    -1,   452,
      -1,   453,    -1,   454,    -1,     1,    -1,    88,   254,   152,
     251,    -1,   154,   254,   152,   251,    -1,    -1,    51,   456,
     253,   457,   252,   251,    -1,   457,   458,    -1,   458,    -1,
     459,    -1,     1,    -1,    88,   254,   152,   251,    -1,    -1,
      64,   461,   253,   466,   252,   251,    -1,    -1,   182,   463,
     254,   464,   251,    -1,   464,   255,   465,    -1,   465,    -1,
     157,    -1,   466,   467,    -1,   467,    -1,   468,    -1,   469,
      -1,   462,    -1,     1,    -1,   120,   254,   152,   251,    -1,
     154,   254,   152,   251,    -1,    65,   253,   471,   252,   251,
      -1,   471,   472,    -1,   472,    -1,   482,    -1,   483,    -1,
     485,    -1,   486,    -1,   487,    -1,   488,    -1,   489,    -1,
     490,    -1,   491,    -1,   492,    -1,   481,    -1,   494,    -1,
     495,    -1,   496,    -1,   497,    -1,   512,    -1,   498,    -1,
     500,    -1,   502,    -1,   501,    -1,   505,    -1,   499,    -1,
     506,    -1,   507,    -1,   508,    -1,   509,    -1,   511,    -1,
     513,    -1,   510,    -1,   527,    -1,   514,    -1,   518,    -1,
     519,    -1,   523,    -1,   503,    -1,   504,    -1,   533,    -1,
     531,    -1,   532,    -1,   515,    -1,   484,    -1,   516,    -1,
     517,    -1,   534,    -1,   522,    -1,   493,    -1,   535,    -1,
     520,    -1,   521,    -1,   475,    -1,   480,    -1,   473,    -1,
     474,    -1,   476,    -1,   477,    -1,   478,    -1,   479,    -1,
       1,    -1,    71,   254,   131,   251,    -1,    72,   254,   131,
     251,    -1,    13,   254,   191,   251,    -1,   245,   254,   191,
     251,    -1,   159,   254,   131,   251,    -1,   142,   254,   131,
     251,    -1,   143,   254,   131,   251,    -1,   179,   254,   191,
     251,    -1,    90,   254,   131,   251,    -1,    81,   254,   191,
     251,    -1,    86,   254,   191,   251,    -1,    42,   254,   191,
     251,    -1,    52,   254,   191,   251,    -1,     8,   254,   191,
     251,    -1,   112,   254,   260,   251,    -1,   111,   254,   131,
     251,    -1,   105,   254,   131,   251,    -1,     9,   254,   260,
     251,    -1,   195,   254,   260,   251,    -1,   194,   254,   260,
     251,    -1,    75,   254,   131,   251,    -1,    94,   254,   191,
     251,    -1,    93,   254,   152,   251,    -1,    87,   254,   191,
     251,    -1,   250,   254,   191,   251,    -1,   189,   254,   191,
     251,    -1,   190,   254,   191,   251,    -1,   188,   254,   191,
     251,    -1,   188,   254,   192,   251,    -1,   187,   254,   191,
     251,    -1,   187,   254,   192,   251,    -1,   144,   254,   260,
     251,    -1,    20,   254,   260,   251,    -1,    21,   254,   191,
     251,    -1,   145,   254,   260,   251,    -1,   183,   254,   191,
     251,    -1,   128,   254,   191,   251,    -1,   234,   254,   191,
     251,    -1,   138,   254,   191,   251,    -1,   115,   254,   152,
     251,    -1,    85,   254,   260,   251,    -1,    44,   254,   131,
     251,    -1,   104,   254,   131,   251,    -1,   114,   254,   131,
     251,    -1,   177,   254,   152,   251,    -1,    32,   254,   152,
     251,    -1,    28,   254,   131,   251,    -1,   240,   254,   191,
     251,    -1,    46,   254,   152,   251,    -1,   148,   254,   191,
     251,    -1,    39,   254,   191,   251,    -1,   232,   254,   260,
     251,    -1,    -1,   140,   524,   254,   525,   251,    -1,   525,
     255,   526,    -1,   526,    -1,   198,    -1,   201,    -1,   203,
      -1,   204,    -1,   207,    -1,   225,    -1,   221,    -1,   223,
      -1,   228,    -1,   226,    -1,   206,    -1,   222,    -1,   224,
      -1,   208,    -1,   231,    -1,   199,    -1,   200,    -1,   211,
      -1,    -1,   137,   528,   254,   529,   251,    -1,   529,   255,
     530,    -1,   530,    -1,   198,    -1,   201,    -1,   203,    -1,
     204,    -1,   207,    -1,   225,    -1,   221,    -1,   223,    -1,
     228,    -1,   226,    -1,   206,    -1,   222,    -1,   224,    -1,
     208,    -1,   231,    -1,   199,    -1,   200,    -1,   211,    -1,
     116,   254,   131,   251,    -1,   117,   254,   131,   251,    -1,
      33,   254,   131,   251,    -1,   202,   254,   262,   251,    -1,
      43,   254,   191,   251,    -1,    -1,    67,   537,   253,   538,
     252,   251,    -1,   538,   539,    -1,   539,    -1,   540,    -1,
     541,    -1,   542,    -1,   546,    -1,   547,    -1,   548,    -1,
       1,    -1,    48,   254,   191,   251,    -1,    45,   254,   260,
     251,    -1,    -1,   102,   543,   254,   544,   251,    -1,   544,
     255,   545,    -1,   545,    -1,   193,    -1,    12,    -1,   239,
     254,   152,   251,    -1,   120,   254,   152,   251,    -1,    -1,
       4,   549,   254,   550,   251,    -1,   550,   255,   551,    -1,
     551,    -1,   193,    -1,    12,    -1,    24,   253,   553,   252,
     251,    -1,   553,   554,    -1,   554,    -1,   555,    -1,   556,
      -1,   557,    -1,   558,    -1,   564,    -1,   559,    -1,   560,
      -1,   561,    -1,   562,    -1,   563,    -1,   565,    -1,   566,
      -1,   567,    -1,   568,    -1,   569,    -1,     1,    -1,    41,
     254,   191,   251,    -1,   241,   254,   191,   251,    -1,   242,
     254,   191,   251,    -1,   243,   254,   191,   251,    -1,    95,
     254,   260,   251,    -1,    96,   254,   260,   251,    -1,   141,
     254,   191,   251,    -1,   107,   254,   131,   251,    -1,   153,
     254,   191,   251,    -1,   106,   254,   131,   251,    -1,    35,
     254,   131,   251,    -1,    34,   254,   131,   251,    -1,   126,
     254,   191,   251,    -1,   127,   254,   191,   251,    -1,    14,
     254,   191,   251,    -1,   175,   253,   571,   252,   251,    -1,
     571,   572,    -1,   572,    -1,   573,    -1,   574,    -1,   575,
      -1,   577,    -1,   576,    -1,   578,    -1,     1,    -1,    55,
     254,   191,   251,    -1,    80,   254,   191,   251,    -1,    99,
     254,   260,   251,    -1,    76,   254,   191,   251,    -1,    40,
     254,   191,   251,    -1,    79,   254,   191,   251,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   387,   387,   388,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   410,   411,   412,   416,   416,   417,   421,
     425,   429,   433,   437,   443,   443,   444,   445,   446,   447,
     454,   457,   457,   458,   458,   458,   460,   477,   488,   491,
     491,   493,   493,   493,   494,   494,   495,   495,   496,   497,
     497,   498,   498,   501,   535,   595,   609,   627,   636,   650,
     659,   687,   717,   733,   783,   785,   785,   786,   786,   786,
     787,   789,   798,   807,   820,   822,   822,   825,   825,   825,
     826,   827,   827,   828,   828,   829,   829,   830,   830,   831,
     834,   838,   842,   849,   856,   863,   870,   877,   884,   891,
     898,   902,   906,   910,   914,   918,   922,   928,   938,   937,
    1030,  1030,  1031,  1031,  1032,  1032,  1032,  1032,  1032,  1033,
    1033,  1033,  1034,  1034,  1034,  1035,  1035,  1035,  1036,  1036,
    1036,  1037,  1037,  1038,  1040,  1052,  1064,  1083,  1095,  1106,
    1117,  1159,  1168,  1179,  1190,  1201,  1212,  1223,  1234,  1245,
    1256,  1267,  1278,  1290,  1289,  1293,  1293,  1294,  1295,  1297,
    1304,  1311,  1318,  1325,  1332,  1339,  1346,  1353,  1360,  1367,
    1374,  1381,  1388,  1395,  1402,  1416,  1415,  1435,  1435,  1437,
    1437,  1438,  1438,  1439,  1440,  1441,  1442,  1443,  1444,  1445,
    1446,  1447,  1450,  1497,  1544,  1550,  1556,  1562,  1568,  1574,
    1580,  1586,  1592,  1602,  1601,  1618,  1617,  1621,  1621,  1622,
    1626,  1632,  1632,  1633,  1633,  1633,  1633,  1633,  1635,  1637,
    1637,  1639,  1654,  1676,  1685,  1698,  1697,  1766,  1766,  1767,
    1767,  1767,  1767,  1767,  1768,  1768,  1769,  1769,  1769,  1770,
    1770,  1771,  1771,  1771,  1772,  1772,  1774,  1793,  1806,  1817,
    1826,  1838,  1837,  1841,  1841,  1842,  1843,  1845,  1853,  1860,
    1867,  1874,  1881,  1888,  1895,  1902,  1909,  1918,  1929,  1940,
    1951,  1962,  1973,  1985,  2004,  2014,  2023,  2039,  2038,  2054,
    2054,  2055,  2055,  2055,  2055,  2057,  2066,  2081,  2095,  2094,
    2110,  2110,  2111,  2111,  2111,  2111,  2113,  2122,  2131,  2130,
    2136,  2136,  2137,  2141,  2145,  2149,  2153,  2157,  2161,  2165,
    2169,  2173,  2177,  2187,  2186,  2203,  2203,  2204,  2204,  2204,
    2206,  2213,  2212,  2218,  2218,  2219,  2223,  2227,  2231,  2235,
    2239,  2243,  2247,  2251,  2255,  2259,  2269,  2268,  2418,  2418,
    2419,  2419,  2420,  2420,  2420,  2420,  2421,  2421,  2422,  2422,
    2423,  2423,  2423,  2424,  2424,  2424,  2425,  2425,  2425,  2426,
    2426,  2429,  2441,  2453,  2462,  2488,  2500,  2512,  2518,  2522,
    2530,  2540,  2539,  2543,  2543,  2544,  2545,  2547,  2554,  2565,
    2572,  2579,  2586,  2596,  2637,  2648,  2659,  2674,  2685,  2698,
    2711,  2720,  2756,  2755,  2817,  2816,  2820,  2820,  2821,  2827,
    2827,  2828,  2828,  2828,  2828,  2830,  2846,  2856,  2855,  2877,
    2877,  2878,  2878,  2878,  2880,  2889,  2902,  2901,  2922,  2922,
    2923,  2923,  2925,  2938,  2937,  2979,  2978,  2982,  2982,  2983,
    2989,  2989,  2990,  2990,  2990,  2990,  2992,  2998,  3007,  3010,
    3010,  3011,  3011,  3011,  3012,  3012,  3013,  3013,  3014,  3014,
    3015,  3015,  3016,  3016,  3017,  3017,  3018,  3018,  3019,  3019,
    3020,  3020,  3021,  3021,  3022,  3022,  3023,  3023,  3024,  3024,
    3025,  3026,  3026,  3027,  3027,  3028,  3028,  3029,  3029,  3030,
    3030,  3031,  3031,  3032,  3033,  3033,  3034,  3034,  3035,  3035,
    3036,  3036,  3037,  3037,  3038,  3038,  3039,  3039,  3040,  3045,
    3050,  3055,  3060,  3065,  3070,  3075,  3080,  3085,  3090,  3095,
    3100,  3105,  3110,  3115,  3120,  3125,  3130,  3135,  3140,  3146,
    3157,  3162,  3171,  3176,  3181,  3186,  3191,  3194,  3199,  3202,
    3207,  3212,  3217,  3222,  3227,  3232,  3237,  3242,  3247,  3258,
    3263,  3268,  3273,  3278,  3287,  3319,  3337,  3342,  3351,  3356,
    3361,  3367,  3366,  3371,  3371,  3372,  3375,  3378,  3381,  3384,
    3387,  3390,  3393,  3396,  3399,  3402,  3405,  3408,  3411,  3414,
    3417,  3420,  3423,  3429,  3428,  3433,  3433,  3434,  3437,  3440,
    3443,  3446,  3449,  3452,  3455,  3458,  3461,  3464,  3467,  3470,
    3473,  3476,  3479,  3482,  3485,  3490,  3495,  3500,  3505,  3510,
    3519,  3518,  3544,  3544,  3545,  3545,  3546,  3547,  3548,  3549,
    3550,  3553,  3559,  3566,  3565,  3570,  3570,  3571,  3575,  3581,
    3600,  3610,  3609,  3652,  3652,  3653,  3657,  3666,  3669,  3669,
    3670,  3670,  3671,  3672,  3673,  3674,  3675,  3676,  3677,  3678,
    3679,  3680,  3681,  3682,  3683,  3684,  3687,  3693,  3699,  3705,
    3711,  3717,  3723,  3729,  3735,  3741,  3747,  3753,  3759,  3765,
    3771,  3780,  3783,  3783,  3784,  3784,  3784,  3785,  3786,  3787,
    3788,  3791,  3797,  3803,  3817,  3823,  3829
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
  "OPERS_BYPASS_CALLERID", "CAN_FLOOD", "CAN_IDLE", "CHANNEL", 
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
  "GLOBAL_KILL", "NEED_IDENT", "HAVENT_READ_CONF", "HIDDEN", 
  "HIDDEN_ADMIN", "HIDDEN_OPER", "HIDE_SERVER_IPS", "HIDE_SERVERS", 
  "HIDE_SPOOF_IPS", "HOST", "HUB", "HUB_MASK", "IDLETIME", 
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
  "NUMBER_PER_IP", "NUMBER_PER_IP_GLOBAL", "OPERATOR", "OPER_LOG", 
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
  "class_max_local", "class_max_ident", "class_sendq", "listen_entry", 
  "@4", "listen_flags", "@5", "listen_flags_items", "listen_flags_item", 
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
  "@18", "exempt_items", "exempt_item", "exempt_ip", "gecos_entry", "@19", 
  "gecos_flags", "@20", "gecos_flags_items", "gecos_flags_item", 
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
  "general_oper_umodes", "@21", "umode_oitems", "umode_oitem", 
  "general_oper_only_umodes", "@22", "umode_items", "umode_item", 
  "general_min_nonwildcard", "general_min_nonwildcard_simple", 
  "general_default_floodcount", "general_client_flood", 
  "general_dot_in_ip6_addr", "gline_entry", "@23", "gline_items", 
  "gline_item", "gline_enable", "gline_duration", "gline_logging", "@24", 
  "gline_logging_types", "gline_logging_type_item", "gline_user", 
  "gline_server", "gline_action", "@25", "gdeny_types", "gdeny_type_item", 
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
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,    59,   125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   256,   257,   257,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   259,   259,   260,   260,
     260,   260,   260,   260,   261,   261,   262,   262,   262,   262,
     263,   264,   264,   265,   265,   265,   266,   267,   268,   269,
     269,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   283,   284,   284,   284,
     284,   285,   286,   287,   288,   289,   289,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   301,   301,   301,   301,   301,   301,   302,   304,   303,
     305,   305,   306,   306,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   328,   327,   329,   329,   330,   330,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   333,   332,   334,   334,   335,
     335,   336,   336,   336,   336,   336,   336,   336,   336,   336,
     336,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   349,   348,   351,   350,   352,   352,   353,
     353,   354,   354,   355,   355,   355,   355,   355,   356,   357,
     357,   358,   358,   359,   360,   362,   361,   363,   363,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   364,   364,   365,   366,   367,   368,
     369,   371,   370,   372,   372,   373,   373,   374,   374,   374,
     374,   374,   374,   374,   374,   374,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   386,   385,   387,
     387,   388,   388,   388,   388,   389,   390,   391,   393,   392,
     394,   394,   395,   395,   395,   395,   396,   397,   399,   398,
     400,   400,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   403,   402,   404,   404,   405,   405,   405,
     406,   408,   407,   409,   409,   410,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   412,   411,   413,   413,
     414,   414,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   415,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   423,
     424,   426,   425,   427,   427,   428,   428,   429,   429,   429,
     429,   429,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   440,   439,   442,   441,   443,   443,   444,   445,
     445,   446,   446,   446,   446,   447,   448,   450,   449,   451,
     451,   452,   452,   452,   453,   454,   456,   455,   457,   457,
     458,   458,   459,   461,   460,   463,   462,   464,   464,   465,
     466,   466,   467,   467,   467,   467,   468,   469,   470,   471,
     471,   472,   472,   472,   472,   472,   472,   472,   472,   472,
     472,   472,   472,   472,   472,   472,   472,   472,   472,   472,
     472,   472,   472,   472,   472,   472,   472,   472,   472,   472,
     472,   472,   472,   472,   472,   472,   472,   472,   472,   472,
     472,   472,   472,   472,   472,   472,   472,   472,   472,   472,
     472,   472,   472,   472,   472,   472,   472,   472,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   500,   501,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   524,   523,   525,   525,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   528,   527,   529,   529,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   531,   532,   533,   534,   535,
     537,   536,   538,   538,   539,   539,   539,   539,   539,   539,
     539,   540,   541,   543,   542,   544,   544,   545,   545,   546,
     547,   549,   548,   550,   550,   551,   551,   552,   553,   553,
     554,   554,   554,   554,   554,   554,   554,   554,   554,   554,
     554,   554,   554,   554,   554,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,   568,
     569,   570,   571,   571,   572,   572,   572,   572,   572,   572,
     572,   573,   574,   575,   576,   577,   578
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
       1,     2,     4,     1,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     0,     6,     0,     5,     3,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     2,     4,     3,
       1,     1,     3,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     4,     4,     4,     4,
       4,     0,     5,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     0,     6,     2,
       1,     1,     1,     1,     2,     4,     4,     4,     0,     6,
       2,     1,     1,     1,     1,     2,     4,     4,     0,     5,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     6,     2,     1,     1,     1,     2,
       4,     0,     5,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     7,     0,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     0,     5,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     0,     6,     0,     5,     3,     1,     1,     2,
       1,     1,     1,     1,     1,     4,     4,     0,     6,     2,
       1,     1,     1,     1,     4,     4,     0,     6,     2,     1,
       1,     1,     4,     0,     6,     0,     5,     3,     1,     1,
       2,     1,     1,     1,     1,     1,     4,     4,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     0,     5,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       0,     6,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     0,     5,     3,     1,     1,     1,     4,
       4,     0,     5,     3,     1,     1,     1,     5,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     5,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       2,     0,     1,     0,     0,   235,     0,   185,   346,   417,
     426,   433,     0,   610,   402,   213,     0,     0,   118,   287,
       0,     0,   298,   323,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,     0,
     187,   348,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   120,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    79,    78,     0,   655,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   639,   640,   641,   642,   643,   645,
     646,   647,   648,   649,   644,   650,   651,   652,   653,   654,
     203,     0,   188,   372,     0,   349,     0,     0,     0,   508,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   583,     0,   561,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   450,   502,
     503,   500,   504,   505,   506,   507,   501,   461,   451,   452,
     491,   453,   454,   455,   456,   457,   458,   459,   460,   496,
     462,   463,   464,   465,   467,   472,   468,   470,   469,   485,
     486,   471,   473,   474,   475,   476,   479,   477,   466,   478,
     481,   490,   492,   493,   482,   483,   498,   499,   495,   484,
     480,   488,   489,   487,   494,   497,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86,    87,    88,    91,    98,    92,    96,
      93,    94,    97,    95,    89,    90,     0,     0,     0,     0,
      42,    43,    44,   145,     0,   121,     0,   680,     0,     0,
       0,     0,     0,     0,     0,   673,   674,   675,   676,   678,
     677,   679,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,    61,    58,    51,    60,
      54,    55,    56,    52,    59,    57,    53,     0,     0,    80,
       0,     0,     0,     0,    75,     0,     0,     0,     0,     0,
     261,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   238,   239,   240,   249,   241,   254,   242,
     243,   244,   245,   252,   246,   247,   248,   250,   251,   253,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   638,     0,     0,   423,
       0,     0,     0,   420,   421,   422,   431,     0,     0,   429,
     430,   445,     0,     0,   435,   444,     0,   441,   442,   443,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   449,   620,
     631,     0,     0,   623,     0,     0,     0,   613,   614,   615,
     616,   617,   618,   619,   414,     0,   404,     0,   413,     0,
     410,   411,   412,     0,   215,     0,     0,     0,   224,     0,
     222,   223,   225,   226,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,    45,
       0,     0,     0,    41,     0,     0,     0,     0,     0,     0,
     290,   291,   292,   293,     0,     0,     0,     0,     0,     0,
       0,   672,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,     0,     0,   308,     0,
       0,   301,   302,   303,   304,     0,     0,   331,     0,   326,
     327,   328,     0,     0,     0,    74,   255,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,     0,     0,     0,     0,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   637,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   381,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   351,   352,   353,   354,   355,
     356,   358,   357,   359,   360,   368,   365,   367,   366,   364,
     361,   362,   363,   369,     0,     0,     0,   419,     0,     0,
     428,     0,     0,     0,     0,   440,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
       0,     0,     0,     0,     0,     0,   448,     0,     0,     0,
       0,     0,     0,     0,   612,     0,     0,     0,     0,   409,
     227,     0,     0,     0,     0,     0,   221,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     0,     0,    40,     0,
       0,     0,     0,     0,   163,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     123,   124,   125,   126,   140,   127,   141,   128,   129,   130,
     136,   131,   132,   133,   134,   135,   137,   138,   139,   142,
     294,     0,     0,     0,     0,   289,     0,     0,     0,     0,
       0,     0,   671,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,   305,     0,     0,     0,     0,
     300,   329,     0,     0,     0,   325,    83,    82,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   236,   670,   667,   666,   656,
      26,    26,    26,    26,    26,    28,    27,   660,   661,   665,
     663,   668,   669,   662,   664,   657,   658,   659,   201,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     189,   370,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   350,     0,     0,   418,     0,   427,     0,     0,     0,
     434,   522,   526,   511,   541,   542,   555,   554,   607,   559,
     520,   609,   550,   557,   521,   509,   510,   529,   518,   549,
     519,   532,   517,   531,   530,   551,   525,   524,   523,   552,
     548,   605,   606,   545,   587,   602,   603,   588,   589,   590,
     597,   591,   600,   604,   593,   598,   594,   599,   592,   596,
     595,   601,     0,   586,   547,   565,   580,   581,   566,   567,
     568,   575,   569,   578,   582,   571,   576,   572,   577,   570,
     574,   573,   579,     0,   564,   514,   515,   540,   543,   558,
     513,   553,   516,   544,   538,   539,   536,   537,   534,   535,
     528,   527,    34,    34,    34,    36,    35,   608,   560,   546,
     556,   512,   533,     0,     0,     0,     0,     0,     0,   611,
       0,     0,     0,   403,     0,     0,     0,   231,     0,   230,
     214,   103,   109,   107,   106,   108,   104,   105,   102,   110,
     116,   111,   115,   113,   114,   112,   101,   100,   117,    46,
      47,   143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,     0,     0,     0,   288,   685,   681,   684,
     686,   682,   683,    67,    73,    65,    69,    68,    64,    63,
      66,    72,    70,    71,     0,     0,     0,   299,     0,     0,
     324,   280,   259,   260,   279,   271,   272,   268,   274,   270,
     269,   276,   273,     0,   275,   267,     0,   264,   266,   282,
     278,   277,   286,   281,   257,   285,   284,   283,   258,   256,
      29,    30,    31,    32,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   186,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   347,   424,   425,   432,   446,
     447,   439,     0,   438,   584,     0,   562,     0,    37,    38,
      39,   636,   635,     0,   634,   622,   621,   628,   627,     0,
     626,   630,   629,   416,   408,     0,   407,   415,   220,   219,
       0,   218,   234,   233,     0,   228,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   296,   297,   295,
     306,   312,   318,   322,   321,   320,   317,   313,   316,   319,
     314,   315,     0,   311,   307,   330,   335,   341,   345,   344,
     343,   340,   336,   339,   342,   337,   338,     0,   334,   265,
     262,     0,   207,   209,   211,   210,   208,   202,   206,   204,
     205,   212,   376,   378,   379,   397,   401,   400,   396,   395,
     394,   380,   390,   391,   388,   389,   387,     0,   392,     0,
     384,   386,   373,   398,   399,   371,   377,   393,   375,   374,
     436,     0,   585,   563,   632,     0,   624,     0,   405,     0,
     216,     0,   232,   229,   162,   151,   160,   148,   177,   175,
     184,   174,   169,   178,   182,   171,   179,     0,   181,   176,
     170,   183,   180,   172,   173,     0,   166,   168,   158,   152,
     149,   155,   144,   159,   147,   161,   153,   154,   150,   157,
     146,   156,   309,     0,   332,     0,   263,   385,   382,     0,
     437,   633,   625,   406,   217,   167,   164,     0,   310,   333,
     383,   165
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,    24,   885,   886,  1035,  1036,    25,   269,   270,
     271,   272,    26,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,    27,    71,    72,    73,
      74,    75,    28,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,    29,    61,   274,
     799,   800,   801,   275,   802,   803,   804,   805,   806,   807,
     808,   809,   810,   811,   812,   813,   814,   815,   816,   817,
     818,   819,  1086,  1365,  1366,  1367,    30,    50,   111,   613,
     614,   615,   112,   616,   617,   618,   619,   620,   621,   622,
     623,   624,    31,    58,   488,   751,  1230,  1231,   489,   490,
     491,  1058,  1059,   492,   493,    32,    48,   342,   343,   344,
     345,   346,   347,   348,   349,   571,  1146,  1147,  1148,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,    33,
      62,   519,   520,   521,   522,   523,    34,    65,   550,   551,
     552,   553,   554,   847,  1272,  1273,    35,    66,   558,   559,
     560,   561,   853,  1287,  1288,    36,    51,   114,   644,   645,
     646,   115,   647,   648,   649,   650,   651,   652,   653,   654,
     921,  1319,  1320,  1321,   655,   656,   657,   658,   659,   660,
     661,   662,   663,    37,    57,   478,   746,  1225,  1226,   479,
     480,   481,   482,    38,    52,   382,   383,   384,   385,    39,
      53,   388,   389,   390,    40,    54,   395,   673,  1202,  1203,
     396,   397,   398,   399,    41,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   435,  1013,
    1014,   230,   433,   992,   993,   231,   232,   233,   234,   235,
      42,    56,   466,   467,   468,   469,   470,   740,  1219,  1220,
     471,   472,   473,   737,  1213,  1214,    43,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    44,   284,   285,   286,   287,   288,
     289,   290,   291
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -860
static const short yypact[] =
{
    -860,   902,  -860,  -233,  -222,  -860,  -212,  -860,  -860,  -860,
    -860,  -860,  -197,  -860,  -860,  -860,  -183,  -177,  -860,  -860,
    -171,  -170,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,    34,  -159,   768,
    -101,   -55,  -147,  -132,  -114,   505,  -112,   -98,   -92,   737,
      65,   -26,   -62,   526,   545,   -53,   -47,   -37,   -35,   -17,
     -15,    15,  -860,  -860,  -860,  -860,   830,  -860,    -4,     9,
      18,    26,    41,    43,    47,    49,    53,    60,    67,    72,
      75,    78,    79,   322,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,   -36,  -860,  -860,   -28,  -860,    89,     5,    28,  -860,
      80,    83,    86,    90,    92,    96,    98,    99,   100,   101,
     104,   110,   112,   116,   117,   118,   122,   124,   127,   139,
     140,   141,   144,   145,   146,   147,   150,   155,   156,   159,
     166,   168,   169,  -860,   170,  -860,   171,   172,   176,   177,
     178,   182,   184,   186,   189,   190,   199,   200,   202,   204,
     208,   210,   214,   218,   220,   222,   223,    59,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,   314,     6,   379,    11,
     224,   226,   227,   228,   229,   230,   231,   235,   238,   239,
     240,   242,    56,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,    22,   244,   245,    32,
    -860,  -860,  -860,  -860,   -19,  -860,    54,  -860,   246,   247,
     248,   250,   251,   253,    44,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,    30,   257,   258,   262,   265,   266,   268,   269,
     270,   274,   275,   277,   219,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,    12,    16,  -860,
     133,   134,   191,    71,  -860,   281,   280,   282,   285,   286,
    -860,   287,   291,   300,   301,   302,   306,   307,   308,   313,
     315,   316,   256,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
     107,   188,   342,   326,   441,   441,   442,   444,   388,   393,
     394,   396,   397,   402,   403,   346,  -860,   717,   660,  -860,
     347,   349,    68,  -860,  -860,  -860,  -860,   350,    19,  -860,
    -860,  -860,   354,   358,  -860,  -860,     8,  -860,  -860,  -860,
     409,   441,   422,   441,   423,   487,   471,   493,   435,   436,
     438,   499,   479,   443,   504,   506,   507,   445,   441,   448,
     449,   510,   494,   460,   521,   523,   525,   441,   528,   517,
     531,   539,   466,   419,   483,   421,   546,   547,   441,   441,
     485,   549,   529,   511,   513,  -133,  -127,   514,   515,   441,
     441,   559,   441,   520,   533,   534,   541,   447,  -860,  -860,
    -860,   458,   462,  -860,   463,   465,   121,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,   480,  -860,   481,  -860,    13,
    -860,  -860,  -860,   450,  -860,   482,   489,   495,  -860,     7,
    -860,  -860,  -860,  -860,  -860,   544,   568,   581,   589,   594,
     599,   601,   602,   173,   604,   605,   569,   512,  -860,  -860,
     609,   610,   522,  -860,   606,   524,   518,   527,   530,     3,
    -860,  -860,  -860,  -860,   577,   580,   583,   586,   587,   441,
     535,  -860,  -860,   627,   598,   633,   638,   652,   653,   654,
     655,   677,   658,   661,   561,  -860,   563,   562,  -860,   564,
      31,  -860,  -860,  -860,  -860,   566,   565,  -860,    27,  -860,
    -860,  -860,   570,   571,   572,  -860,  -860,   624,   668,   637,
     641,   575,   642,   645,   647,   648,   650,   690,   712,   694,
     695,   657,   699,   607,  -860,   608,   611,   614,   618,    58,
     621,   625,   626,   631,   632,   634,   635,   636,   646,   649,
     659,  -860,   662,   603,   639,   651,   663,   664,   666,   669,
     670,   671,   673,   337,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,   665,   675,   676,   679,   680,
     681,   682,   685,   686,   687,  -860,   688,   691,   692,   693,
     696,   698,   700,   701,   263,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,   703,   708,   706,  -860,   709,   711,
    -860,   726,   736,   714,   713,  -860,   719,   720,   721,   722,
     723,   724,   727,   728,   729,   731,   732,   733,   738,   741,
     742,   743,   744,   745,   746,   748,   749,   752,   754,   755,
     756,   757,   761,   762,   763,   766,   767,   771,   772,   886,
     773,   920,   778,   779,   780,   781,   782,   783,   784,   788,
     789,   791,   792,   793,   794,   795,   796,   797,   798,    93,
     799,   800,   801,   802,   803,   805,  -860,   734,   441,   705,
     787,   747,   759,   806,  -860,   808,   804,   811,   809,  -860,
    -860,   807,   813,   825,   758,   812,  -860,   814,   815,   816,
     819,   820,   821,   822,   823,   824,   828,   829,   837,   840,
     844,   845,   847,   848,   849,  -860,   850,   851,  -860,   852,
     810,   827,   859,   861,  -860,   862,   868,   871,   875,   876,
     878,   879,   880,   881,   882,   883,   884,   885,   893,   167,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,   907,   910,   924,   853,  -860,   854,   855,   889,   898,
     899,   901,  -860,   903,   904,   905,   906,   908,   909,   911,
     912,   913,   914,   915,  -860,  -860,  1001,   916,  1006,   917,
    -860,  -860,  1009,   918,   922,  -860,  -860,  -860,  -860,   923,
     925,   926,   927,   429,   928,   929,   930,   931,   932,   933,
     934,   935,   936,   937,   938,  -860,  -860,  -860,  -860,  -860,
     441,   441,   441,   441,   441,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,   441,
     770,   777,  1036,  1038,  1019,  1044,   441,   441,   559,   939,
    -860,  -860,  1039,   -29,   753,  1040,  1041,  1003,  1004,  1005,
    1045,   944,  1047,  1048,  1049,  1050,  1072,  1052,  1053,  1054,
     956,  -860,   957,   958,  -860,   959,  -860,   960,   961,  1056,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -240,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -215,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,   559,   559,   559,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,    -9,   963,   964,    -7,   965,   966,  -860,
     967,  1062,   969,  -860,   -42,   970,   971,   179,  -213,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  1032,  1073,  1033,  1035,   973,  1037,  1042,  1043,
    1046,  1077,  1051,  1078,  1055,  1057,  1058,  1079,  1059,  1080,
    1060,   984,  -860,   985,   987,   988,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,   989,   492,   990,  -860,   992,   790,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,   869,  -860,  -860,  -208,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,   993,   994,   996,  1002,  1007,
    1008,  1010,  1011,  1012,  1013,  -860,  1014,  1015,  1016,  1017,
    1018,  1020,  1021,  1022,  1023,  1024,    -1,  1025,  1026,  1027,
    1028,  1029,  1030,  1031,  1034,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -207,  -860,  -860,   886,  -860,   920,  -860,  -860,
    -860,  -860,  -860,  -205,  -860,  -860,  -860,  -860,  -860,  -202,
    -860,  -860,  -860,  -860,  -860,  -178,  -860,  -860,  -860,  -860,
    -151,  -860,  -860,  -860,  1121,  -860,   758,  1061,  1063,  1064,
    1065,   330,  1066,  1067,  1068,  1069,  1070,  1071,  1074,  1075,
    1076,  1081,  1082,  1083,  1084,  1085,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -118,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -113,  -860,  -860,
    -860,   429,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,   338,  -860,   -40,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  1056,  -860,  -860,  -860,    -9,  -860,    -7,  -860,  1062,
    -860,   -42,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,   710,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,   -20,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,   492,  -860,   790,  -860,  -860,  -860,    -1,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,   330,  -860,  -860,
    -860,  -860
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -860,  -860,  -860,  -859,  -364,  -757,  -449,  -860,  -860,   584,
    -860,  -860,  -860,  -860,   950,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,   843,  -860,
    -860,  -860,  -860,  -860,  1086,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,   456,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -482,  -100,  -860,  -860,  -860,  -860,
     643,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,   -81,  -860,   817,
    -860,  -860,    48,  -860,  -860,  -860,  -860,  -860,   941,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,   -21,   143,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,   769,  -860,  -860,  -860,  -860,  -860,  -860,   739,
    -860,  -860,  -860,  -860,  -860,   -96,  -860,  -860,  -860,   735,
    -860,  -860,  -860,  -860,   -95,  -860,  -860,  -860,  -860,   656,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,   -97,   -23,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,   -48,  -860,
     818,  -860,  -860,  -860,  -860,  -860,   919,  -860,  -860,  -860,
    -860,  -860,   921,  -860,  -860,  -860,  -860,  -860,  -860,   -33,
    -860,   900,  -860,  -860,  -860,  -860,  1118,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
      95,  -860,  -860,  -860,    94,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,   838,  -860,  -860,  -860,  -860,  -860,   -34,
    -860,  -860,  -860,  -860,  -860,   -30,  -860,  -860,  1214,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  1087,  -860,  -860,  -860,
    -860,  -860,  -860
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, parse error.  */
#define YYTABLE_NINF -1
static const unsigned short yytable[] =
{
     590,   591,   730,  1211,   515,  1217,   386,   474,   483,   391,
    1312,  1204,  1313,   546,   474,  1205,    67,   555,    45,    46,
     386,  1160,  1161,  1162,  1163,  1164,  1314,   516,   555,   391,
    1315,    47,   546,   266,  1228,    67,  1206,   677,  1235,   679,
    1207,    49,  1236,  1290,  1330,   277,  1334,  1291,  1331,  1336,
    1335,   110,    68,  1337,   694,   515,    55,   239,   721,   722,
     119,   484,    69,   703,   723,   724,   266,   120,   121,   379,
      59,    68,   122,  1338,   714,   715,    60,  1339,   516,   123,
     124,    69,    63,    64,   278,   727,   728,   125,   731,   485,
     379,   126,   127,   387,    76,   486,  1316,   113,   128,   279,
    1340,   129,   130,   131,  1341,   132,   116,   387,  1032,  1033,
    1034,   133,   240,   241,   242,   243,   244,   245,   246,   247,
     280,   117,   459,   281,   282,   460,   273,   517,   392,  1317,
     134,   135,   547,  1382,   136,    70,   556,  1383,  1384,   118,
     137,   236,  1385,   283,   138,   139,   140,   556,   392,   141,
     267,   547,   142,   143,    70,   237,   380,   518,   487,   248,
     475,   238,   393,   144,   145,   831,   461,   475,   779,   462,
     146,   147,   780,   148,   149,   150,   151,   380,   517,   268,
    1177,  1178,   393,   267,  1212,  1229,  1218,   152,   476,   589,
     394,   276,   249,   781,   548,   476,   153,   154,   557,   155,
     317,   156,   157,   158,   159,   782,   318,   160,   518,   557,
     394,  1388,   268,   548,   319,  1389,   783,   377,   161,   320,
     292,   784,   381,   463,   729,   378,   880,   881,   882,   883,
     884,  1396,  1318,   785,   514,  1397,   162,   321,   163,   322,
     786,   464,   164,   381,   787,   477,   165,   166,   167,   168,
     360,   549,   477,   169,   170,   824,   293,   325,   788,   755,
     674,   171,   494,   361,   625,   748,   626,   323,   250,   627,
     549,   669,   362,   509,   628,  1208,  1209,  1210,   326,   854,
     363,   532,   327,   849,   512,   562,   563,   789,   629,   630,
     631,   172,   790,   173,   632,   364,   530,   365,   585,   174,
     251,   366,   294,   367,   175,   328,   329,   368,   507,   176,
     330,   457,   633,   791,   369,   459,   634,   635,   460,   586,
     666,   370,   565,    77,   331,   792,   371,   793,   794,   372,
     332,   795,   373,   374,   400,  1348,    78,   401,   602,   295,
     402,   296,   297,   564,   403,   636,   404,   637,   333,  1312,
     405,  1313,   406,   407,   408,   409,    79,    80,   410,   461,
     465,   638,   462,    81,   411,  1314,   412,   603,  1349,  1315,
     413,   414,   415,   743,  1044,  1234,   416,   334,   417,  1350,
     483,   418,   298,   639,   299,   335,   765,   766,   767,   768,
     769,   770,   771,   419,   420,   421,  1351,   300,   422,   423,
     424,   425,   336,  1352,   426,   796,   797,  1353,  1354,   427,
     428,   337,   338,   429,   640,   798,   463,    82,    83,  1101,
     430,  1355,   431,   432,   434,   436,   437,   641,    84,    85,
     438,   439,   440,   484,   464,  1316,   441,   642,   442,   301,
     443,   339,   340,   444,   445,   604,   605,   606,    86,    87,
     607,  1135,  1136,   446,   447,  1356,   448,   608,   449,  1174,
    1357,   485,   450,    88,   451,   302,   303,   486,   452,  1358,
     609,   544,   453,   587,   454,    89,   455,   456,   495,  1137,
     496,   497,   498,   499,   500,   501,   610,   611,  1359,   502,
    1360,  1361,   503,   504,   505,   341,   506,  1138,   510,   511,
     524,   525,   526,  1139,   527,   528,   119,   529,   583,   643,
     612,   533,   534,   120,   121,   930,   535,   588,   122,   536,
     537,  1140,   538,   539,   540,   123,   124,   277,   541,   542,
     487,   543,   566,   125,   567,  1165,   568,   126,   127,   569,
     570,   572,  1172,  1173,   128,   573,   292,   129,   130,   131,
    1141,   132,  1362,   465,   574,   575,   576,   133,  1142,  1143,
     577,   578,   579,    90,    91,    92,   278,   580,  1363,   581,
     582,  1318,   589,   592,   375,   593,   134,   135,  1364,   594,
     136,   279,   293,  1261,   595,   596,   137,   597,   598,   909,
     138,   139,   140,   599,   600,   141,  1144,   601,   142,   143,
     676,   664,   280,   665,   668,   281,   282,   779,   671,   144,
     145,   780,   672,   678,   680,  1145,   146,   147,   681,   148,
     149,   150,   151,   682,   683,   283,   684,   685,   294,   686,
     687,   688,   781,   152,   689,   690,   693,   691,   692,   695,
     696,   697,   153,   154,   782,   155,   698,   156,   157,   158,
     159,   699,   700,   160,   701,   783,   702,   708,  1262,   704,
     784,   625,   706,   626,   161,   295,   627,   296,   297,   705,
     707,   628,   785,   709,   710,   711,   716,   712,   713,   786,
     717,   718,   162,   787,   163,   629,   630,   631,   164,  1263,
     729,   632,   165,   166,   167,   168,   757,   788,   736,   169,
     170,   750,   719,  1264,   720,   725,   726,   171,   298,   633,
     299,   732,   738,   634,   635,  1348,   739,   741,   602,   742,
     758,  1265,  1266,   300,   733,   734,   789,  1267,  1268,  1269,
    1270,   790,   735,   759,   745,   747,   752,   172,   239,   173,
    1271,   760,   636,   753,   637,   174,   761,   603,  1349,   754,
     175,   762,   791,   763,   764,   176,   772,   773,   638,  1350,
     774,   776,   777,   775,   792,   301,   793,   794,   826,    77,
     795,   827,   821,   778,   828,   820,  1351,   829,   830,   833,
     639,   822,    78,  1352,   823,   835,   832,  1353,  1354,   834,
     836,   302,   303,   240,   241,   242,   243,   244,   245,   246,
     247,  1355,    79,    80,   837,   838,   839,   840,   841,    81,
     842,   640,   844,   843,   845,   859,   846,   851,   848,   852,
     860,   856,   857,   858,   641,   604,   605,   606,   861,   863,
     607,   325,   862,   864,   642,  1356,   865,   608,   866,   867,
     248,   868,   869,   870,   796,   797,   871,   872,   873,  1358,
     609,   874,   326,   513,   798,   932,   327,   899,   875,   876,
     933,   935,   877,    82,    83,   878,   610,   611,  1359,   879,
    1360,  1361,   887,   249,    84,    85,   888,   889,   937,   328,
     329,  1276,   890,   891,   330,   892,   893,   894,   938,  1057,
     612,  1135,  1136,   900,    86,    87,  1045,   895,   331,  1047,
     896,  1166,     2,     3,   332,   901,   643,     4,  1167,    88,
     897,  1048,     5,   898,   324,  1401,   911,   902,   903,  1137,
     904,    89,   333,   905,   906,   907,     6,   908,     7,   912,
     913,     8,  1362,   914,   915,   916,   917,  1138,     9,   918,
     919,   920,   922,  1139,  1179,   923,   924,   925,  1363,   250,
     926,   334,   927,    10,   928,   929,  1277,   934,  1364,   335,
    1050,  1140,   936,  1052,   940,  1055,    11,    12,   939,    13,
     941,   942,   943,   944,   945,   946,   336,  1056,   947,   948,
     949,   251,   950,   951,   952,   337,   338,  1278,  1043,   953,
    1141,    14,   954,   955,   956,   957,   958,   959,  1142,   960,
     961,  1279,    15,   962,    16,   963,   964,   965,   966,    90,
      91,    92,   967,   968,   969,   339,   340,   970,   971,  1280,
    1281,    17,   972,   973,   994,  1282,  1283,  1284,  1285,  1015,
    1016,  1017,  1018,  1019,  1020,  1021,  1144,    18,  1286,  1022,
    1023,  1046,  1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,
    1037,  1038,  1039,  1040,  1041,  1145,  1042,  1049,  1051,  1103,
    1053,  1054,  1104,  1060,  1082,  1061,  1062,  1063,    19,   341,
    1064,  1065,  1066,  1067,  1068,  1069,  1105,    20,    21,  1070,
    1071,  1083,    22,    23,   974,   975,   976,   977,  1072,   978,
     979,  1073,   980,   981,   982,  1074,  1075,   983,  1076,  1077,
    1078,  1079,  1080,  1081,  1106,  1107,  1108,   984,   985,   986,
     987,   988,   989,  1084,   990,  1085,  1087,   991,   995,   996,
     997,   998,  1088,   999,  1000,  1089,  1001,  1002,  1003,  1090,
    1091,  1004,  1092,  1093,  1094,  1095,  1096,  1097,  1098,  1099,
    1109,  1005,  1006,  1007,  1008,  1009,  1010,  1100,  1011,  1110,
    1111,  1012,  1112,  1124,  1113,  1114,  1115,  1116,  1126,  1117,
    1118,  1128,  1119,  1120,  1121,  1122,  1123,  1168,  1127,  1169,
    1125,  1170,  1129,  1130,  1131,  1171,  1132,  1133,  1134,  1149,
    1150,  1151,  1152,  1153,  1154,  1155,  1156,  1157,  1158,  1159,
    1175,  1176,  1180,  1181,  1182,  1183,  1184,  1185,  1186,  1187,
    1188,  1189,  1190,  1191,  1192,  1193,  1194,  1195,  1196,  1197,
    1198,  1199,  1200,  1201,  1215,  1216,  1221,  1222,  1223,  1224,
    1227,  1232,  1233,  1237,  1239,  1238,  1240,  1241,  1242,  1246,
    1248,  1252,  1254,  1243,  1244,  1256,  1257,  1245,  1258,  1259,
    1260,  1274,  1247,  1275,  1292,  1293,  1249,  1294,  1250,  1251,
    1253,  1255,  1342,  1295,   545,  1102,   910,  1395,  1296,  1297,
    1394,  1298,  1299,  1300,  1301,  1302,  1303,  1304,  1305,  1306,
    1386,  1307,  1308,  1309,  1310,  1311,  1322,  1323,  1324,  1325,
    1326,  1327,  1328,   584,  1343,  1329,  1289,  1398,   825,   850,
    1399,  1393,  1400,   855,  1387,   458,   675,   749,  1390,  1332,
     931,   667,  1333,  1392,   744,  1391,   756,   376,     0,   670,
       0,     0,  1344,     0,  1345,  1346,  1347,  1368,  1369,  1370,
    1371,  1372,  1373,     0,     0,  1374,  1375,  1376,     0,     0,
       0,     0,  1377,  1378,  1379,  1380,  1381,     0,   508,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   531
};

static const short yycheck[] =
{
     364,   365,   451,    12,     1,    12,     1,     1,     1,     1,
      11,   251,    13,     1,     1,   255,     1,     1,   251,   252,
       1,   880,   881,   882,   883,   884,    27,    24,     1,     1,
      31,   253,     1,     1,    76,     1,   251,   401,   251,   403,
     255,   253,   255,   251,   251,     1,   251,   255,   255,   251,
     255,   152,    37,   255,   418,     1,   253,     1,   191,   192,
       1,    54,    47,   427,   191,   192,     1,     8,     9,     1,
     253,    37,    13,   251,   438,   439,   253,   255,    24,    20,
      21,    47,   253,   253,    40,   449,   450,    28,   452,    82,
       1,    32,    33,    88,   253,    88,    97,   152,    39,    55,
     251,    42,    43,    44,   255,    46,   253,    88,    15,    16,
      17,    52,    56,    57,    58,    59,    60,    61,    62,    63,
      76,   253,     1,    79,    80,     4,   152,   124,   120,   130,
      71,    72,   120,   251,    75,   120,   120,   255,   251,   253,
      81,   253,   255,    99,    85,    86,    87,   120,   120,    90,
     118,   120,    93,    94,   120,   253,    88,   154,   151,   103,
     154,   253,   154,   104,   105,   529,    45,   154,     1,    48,
     111,   112,     5,   114,   115,   116,   117,    88,   124,   147,
     209,   210,   154,   118,   193,   227,   193,   128,   182,   131,
     182,   253,   136,    26,   182,   182,   137,   138,   182,   140,
     253,   142,   143,   144,   145,    38,   253,   148,   154,   182,
     182,   251,   147,   182,   251,   255,    49,   253,   159,   254,
       1,    54,   154,   102,   131,   253,   168,   169,   170,   171,
     172,   251,   233,    66,   253,   255,   177,   254,   179,   254,
      73,   120,   183,   154,    77,   239,   187,   188,   189,   190,
     254,   239,   239,   194,   195,   252,    37,     1,    91,   252,
     252,   202,   251,   254,     1,   252,     3,   252,   212,     6,
     239,   252,   254,   251,    11,  1032,  1033,  1034,    22,   252,
     254,   251,    26,   252,   252,   152,   152,   120,    25,    26,
      27,   232,   125,   234,    31,   254,   252,   254,   191,   240,
     244,   254,    83,   254,   245,    49,    50,   254,   252,   250,
      54,   252,    49,   146,   254,     1,    53,    54,     4,   131,
     252,   254,   251,     1,    68,   158,   254,   160,   161,   254,
      74,   164,   254,   254,   254,     5,    14,   254,     1,   120,
     254,   122,   123,   152,   254,    82,   254,    84,    92,    11,
     254,    13,   254,   254,   254,   254,    34,    35,   254,    45,
     239,    98,    48,    41,   254,    27,   254,    30,    38,    31,
     254,   254,   254,   252,   738,   196,   254,   121,   254,    49,
       1,   254,   163,   120,   165,   129,   213,   214,   215,   216,
     217,   218,   219,   254,   254,   254,    66,   178,   254,   254,
     254,   254,   146,    73,   254,   238,   239,    77,    78,   254,
     254,   155,   156,   254,   151,   248,   102,    95,    96,   252,
     254,    91,   254,   254,   254,   254,   254,   164,   106,   107,
     254,   254,   254,    54,   120,    97,   254,   174,   254,   220,
     254,   185,   186,   254,   254,   108,   109,   110,   126,   127,
     113,    22,    23,   254,   254,   125,   254,   120,   254,   908,
     130,    82,   254,   141,   254,   246,   247,    88,   254,   139,
     133,   252,   254,   131,   254,   153,   254,   254,   254,    50,
     254,   254,   254,   254,   254,   254,   149,   150,   158,   254,
     160,   161,   254,   254,   254,   239,   254,    68,   254,   254,
     254,   254,   254,    74,   254,   254,     1,   254,   252,   246,
     173,   254,   254,     8,     9,   252,   254,   191,    13,   254,
     254,    92,   254,   254,   254,    20,    21,     1,   254,   254,
     151,   254,   251,    28,   254,   899,   254,    32,    33,   254,
     254,   254,   906,   907,    39,   254,     1,    42,    43,    44,
     121,    46,   222,   239,   254,   254,   254,    52,   129,   130,
     254,   254,   254,   241,   242,   243,    40,   254,   238,   254,
     254,   233,   131,   131,   252,   131,    71,    72,   248,   191,
      75,    55,    37,    91,   191,   191,    81,   191,   191,   252,
      85,    86,    87,   191,   191,    90,   167,   251,    93,    94,
     191,   254,    76,   254,   254,    79,    80,     1,   254,   104,
     105,     5,   254,   191,   191,   186,   111,   112,   131,   114,
     115,   116,   117,   152,   131,    99,   191,   191,    83,   191,
     131,   152,    26,   128,   191,   131,   191,   131,   131,   191,
     191,   131,   137,   138,    38,   140,   152,   142,   143,   144,
     145,   191,   131,   148,   131,    49,   131,   191,   166,   131,
      54,     1,   131,     3,   159,   120,     6,   122,   123,   152,
     131,    11,    66,   254,   191,   254,   191,   131,   131,    73,
     131,   152,   177,    77,   179,    25,    26,    27,   183,   197,
     131,    31,   187,   188,   189,   190,   152,    91,   251,   194,
     195,   251,   191,   211,   191,   191,   191,   202,   163,    49,
     165,   191,   254,    53,    54,     5,   254,   254,     1,   254,
     152,   229,   230,   178,   191,   191,   120,   235,   236,   237,
     238,   125,   191,   152,   254,   254,   254,   232,     1,   234,
     248,   152,    82,   254,    84,   240,   152,    30,    38,   254,
     245,   152,   146,   152,   152,   250,   152,   152,    98,    49,
     191,   152,   152,   251,   158,   220,   160,   161,   191,     1,
     164,   191,   254,   251,   191,   251,    66,   191,   191,   152,
     120,   254,    14,    73,   254,   152,   251,    77,    78,   191,
     152,   246,   247,    56,    57,    58,    59,    60,    61,    62,
      63,    91,    34,    35,   152,   152,   152,   152,   131,    41,
     152,   151,   251,   152,   251,   191,   254,   251,   254,   254,
     152,   251,   251,   251,   164,   108,   109,   110,   191,   254,
     113,     1,   191,   191,   174,   125,   191,   120,   191,   191,
     103,   191,   152,   131,   238,   239,   152,   152,   191,   139,
     133,   152,    22,   269,   248,   152,    26,   254,   251,   251,
     152,   152,   251,    95,    96,   251,   149,   150,   158,   251,
     160,   161,   251,   136,   106,   107,   251,   251,   152,    49,
      50,    91,   251,   251,    54,   251,   251,   251,   152,   131,
     173,    22,    23,   254,   126,   127,   191,   251,    68,   152,
     251,   131,     0,     1,    74,   254,   246,     5,   131,   141,
     251,   152,    10,   251,    71,  1397,   251,   254,   254,    50,
     254,   153,    92,   254,   254,   254,    24,   254,    26,   254,
     254,    29,   222,   254,   254,   254,   254,    68,    36,   254,
     254,   254,   254,    74,   191,   254,   254,   254,   238,   212,
     254,   121,   254,    51,   254,   254,   166,   251,   248,   129,
     152,    92,   251,   152,   251,   152,    64,    65,   254,    67,
     251,   251,   251,   251,   251,   251,   146,   152,   251,   251,
     251,   244,   251,   251,   251,   155,   156,   197,   254,   251,
     121,    89,   251,   251,   251,   251,   251,   251,   129,   251,
     251,   211,   100,   251,   102,   251,   251,   251,   251,   241,
     242,   243,   251,   251,   251,   185,   186,   251,   251,   229,
     230,   119,   251,   251,   251,   235,   236,   237,   238,   251,
     251,   251,   251,   251,   251,   251,   167,   135,   248,   251,
     251,   254,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   186,   251,   251,   254,   152,
     251,   254,   152,   251,   254,   251,   251,   251,   166,   239,
     251,   251,   251,   251,   251,   251,   152,   175,   176,   251,
     251,   254,   180,   181,   198,   199,   200,   201,   251,   203,
     204,   251,   206,   207,   208,   251,   251,   211,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   221,   222,   223,
     224,   225,   226,   254,   228,   254,   254,   231,   198,   199,
     200,   201,   254,   203,   204,   254,   206,   207,   208,   254,
     254,   211,   254,   254,   254,   254,   254,   254,   254,   254,
     251,   221,   222,   223,   224,   225,   226,   254,   228,   251,
     251,   231,   251,   152,   251,   251,   251,   251,   152,   251,
     251,   152,   251,   251,   251,   251,   251,   131,   251,   131,
     254,   152,   254,   251,   251,   131,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   152,   152,   152,   191,   191,   191,   152,   254,   152,
     152,   152,   152,   131,   152,   152,   152,   251,   251,   251,
     251,   251,   251,   157,   251,   251,   251,   251,   251,   157,
     251,   251,   251,   191,   191,   152,   191,   254,   191,   152,
     152,   152,   152,   191,   191,   251,   251,   191,   251,   251,
     251,   251,   191,   251,   251,   251,   191,   251,   191,   191,
     191,   191,   131,   251,   304,   799,   613,  1357,   251,   251,
    1341,   251,   251,   251,   251,   251,   251,   251,   251,   251,
    1291,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   342,  1236,   251,  1143,  1383,   519,   550,
    1385,  1339,  1389,   558,  1317,   177,   396,   479,  1331,  1205,
     644,   382,  1207,  1337,   466,  1335,   489,    93,    -1,   388,
      -1,    -1,   251,    -1,   251,   251,   251,   251,   251,   251,
     251,   251,   251,    -1,    -1,   251,   251,   251,    -1,    -1,
      -1,    -1,   251,   251,   251,   251,   251,    -1,   252,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   284
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,   257,     0,     1,     5,    10,    24,    26,    29,    36,
      51,    64,    65,    67,    89,   100,   102,   119,   135,   166,
     175,   176,   180,   181,   258,   263,   268,   282,   288,   303,
     332,   348,   361,   385,   392,   402,   411,   439,   449,   455,
     460,   470,   536,   552,   570,   251,   252,   253,   362,   253,
     333,   412,   450,   456,   461,   253,   537,   440,   349,   253,
     253,   304,   386,   253,   253,   393,   403,     1,    37,    47,
     120,   283,   284,   285,   286,   287,   253,     1,    14,    34,
      35,    41,    95,    96,   106,   107,   126,   127,   141,   153,
     241,   242,   243,   553,   554,   555,   556,   557,   558,   559,
     560,   561,   562,   563,   564,   565,   566,   567,   568,   569,
     152,   334,   338,   152,   413,   417,   253,   253,   253,     1,
       8,     9,    13,    20,    21,    28,    32,    33,    39,    42,
      43,    44,    46,    52,    71,    72,    75,    81,    85,    86,
      87,    90,    93,    94,   104,   105,   111,   112,   114,   115,
     116,   117,   128,   137,   138,   140,   142,   143,   144,   145,
     148,   159,   177,   179,   183,   187,   188,   189,   190,   194,
     195,   202,   232,   234,   240,   245,   250,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     527,   531,   532,   533,   534,   535,   253,   253,   253,     1,
      56,    57,    58,    59,    60,    61,    62,    63,   103,   136,
     212,   244,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,     1,   118,   147,   264,
     265,   266,   267,   152,   305,   309,   253,     1,    40,    55,
      76,    79,    80,    99,   571,   572,   573,   574,   575,   576,
     577,   578,     1,    37,    83,   120,   122,   123,   163,   165,
     178,   220,   246,   247,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   253,   253,   251,
     254,   254,   254,   252,   284,     1,    22,    26,    49,    50,
      54,    68,    74,    92,   121,   129,   146,   155,   156,   185,
     186,   239,   363,   364,   365,   366,   367,   368,   369,   370,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   252,   554,   253,   253,     1,
      88,   154,   451,   452,   453,   454,     1,    88,   457,   458,
     459,     1,   120,   154,   182,   462,   466,   467,   468,   469,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   528,   254,   524,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   252,   472,     1,
       4,    45,    48,   102,   120,   239,   538,   539,   540,   541,
     542,   546,   547,   548,     1,   154,   182,   239,   441,   445,
     446,   447,   448,     1,    54,    82,    88,   151,   350,   354,
     355,   356,   359,   360,   251,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   252,   290,   251,
     254,   254,   252,   265,   253,     1,    24,   124,   154,   387,
     388,   389,   390,   391,   254,   254,   254,   254,   254,   254,
     252,   572,   251,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   252,   270,     1,   120,   182,   239,
     394,   395,   396,   397,   398,     1,   120,   182,   404,   405,
     406,   407,   152,   152,   152,   251,   251,   254,   254,   254,
     254,   371,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   252,   364,   191,   131,   131,   191,   131,
     260,   260,   131,   131,   191,   191,   191,   191,   191,   191,
     191,   251,     1,    30,   108,   109,   110,   113,   120,   133,
     149,   150,   173,   335,   336,   337,   339,   340,   341,   342,
     343,   344,   345,   346,   347,     1,     3,     6,    11,    25,
      26,    27,    31,    49,    53,    54,    82,    84,    98,   120,
     151,   164,   174,   246,   414,   415,   416,   418,   419,   420,
     421,   422,   423,   424,   425,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   254,   254,   252,   452,   254,   252,
     458,   254,   254,   463,   252,   467,   191,   260,   191,   260,
     191,   131,   152,   131,   191,   191,   191,   131,   152,   191,
     131,   131,   131,   191,   260,   191,   191,   131,   152,   191,
     131,   131,   131,   260,   131,   152,   131,   131,   191,   254,
     191,   254,   131,   131,   260,   260,   191,   131,   152,   191,
     191,   191,   192,   191,   192,   191,   191,   260,   260,   131,
     262,   260,   191,   191,   191,   191,   251,   549,   254,   254,
     543,   254,   254,   252,   539,   254,   442,   254,   252,   446,
     251,   351,   254,   254,   254,   252,   355,   152,   152,   152,
     152,   152,   152,   152,   152,   213,   214,   215,   216,   217,
     218,   219,   152,   152,   191,   251,   152,   152,   251,     1,
       5,    26,    38,    49,    54,    66,    73,    77,    91,   120,
     125,   146,   158,   160,   161,   164,   238,   239,   248,   306,
     307,   308,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     251,   254,   254,   254,   252,   388,   191,   191,   191,   191,
     191,   260,   251,   152,   191,   152,   152,   152,   152,   152,
     152,   131,   152,   152,   251,   251,   254,   399,   254,   252,
     395,   251,   254,   408,   252,   405,   251,   251,   251,   191,
     152,   191,   191,   254,   191,   191,   191,   191,   191,   152,
     131,   152,   152,   191,   152,   251,   251,   251,   251,   251,
     168,   169,   170,   171,   172,   259,   260,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   252,
     336,   251,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   426,   254,   254,   254,   254,   254,   254,   254,   254,
     252,   415,   152,   152,   251,   152,   251,   152,   152,   254,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   198,   199,   200,   201,   203,   204,
     206,   207,   208,   211,   221,   222,   223,   224,   225,   226,
     228,   231,   529,   530,   251,   198,   199,   200,   201,   203,
     204,   206,   207,   208,   211,   221,   222,   223,   224,   225,
     226,   228,   231,   525,   526,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,    15,    16,    17,   261,   262,   251,   251,   251,
     251,   251,   251,   254,   260,   191,   254,   152,   152,   251,
     152,   254,   152,   251,   254,   152,   152,   131,   357,   358,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   254,   254,   254,   254,   328,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   252,   307,   152,   152,   152,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   152,   254,   152,   251,   152,   254,
     251,   251,   251,   251,   251,    22,    23,    50,    68,    74,
      92,   121,   129,   130,   167,   186,   372,   373,   374,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     259,   259,   259,   259,   259,   260,   131,   131,   131,   131,
     152,   131,   260,   260,   262,   251,   152,   209,   210,   191,
     152,   152,   191,   191,   191,   152,   254,   152,   152,   152,
     152,   131,   152,   152,   152,   251,   251,   251,   251,   251,
     251,   157,   464,   465,   251,   255,   251,   255,   261,   261,
     261,    12,   193,   550,   551,   251,   251,    12,   193,   544,
     545,   251,   251,   251,   157,   443,   444,   251,    76,   227,
     352,   353,   251,   251,   196,   251,   255,   191,   152,   191,
     191,   254,   191,   191,   191,   191,   152,   191,   152,   191,
     191,   191,   152,   191,   152,   191,   251,   251,   251,   251,
     251,    91,   166,   197,   211,   229,   230,   235,   236,   237,
     238,   248,   400,   401,   251,   251,    91,   166,   197,   211,
     229,   230,   235,   236,   237,   238,   248,   409,   410,   374,
     251,   255,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,    11,    13,    27,    31,    97,   130,   233,   427,
     428,   429,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   255,   530,   526,   251,   255,   251,   255,   251,   255,
     251,   255,   131,   358,   251,   251,   251,   251,     5,    38,
      49,    66,    73,    77,    78,    91,   125,   130,   139,   158,
     160,   161,   222,   238,   248,   329,   330,   331,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   255,   251,   255,   373,   429,   251,   255,
     465,   551,   545,   444,   353,   331,   251,   255,   401,   410,
     428,   330
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
#line 416 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 28:
#line 418 "ircd_parser.y"
    {
			yyval.number = yyvsp[-1].number + yyvsp[0].number;
		}
    break;

  case 29:
#line 422 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number + yyvsp[0].number;
		}
    break;

  case 30:
#line 426 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 + yyvsp[0].number;
		}
    break;

  case 31:
#line 430 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 + yyvsp[0].number;
		}
    break;

  case 32:
#line 434 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 + yyvsp[0].number;
		}
    break;

  case 33:
#line 438 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 * 7 + yyvsp[0].number;
		}
    break;

  case 34:
#line 443 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 36:
#line 444 "ircd_parser.y"
    { yyval.number = yyvsp[-1].number + yyvsp[0].number; }
    break;

  case 37:
#line 445 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number + yyvsp[0].number; }
    break;

  case 38:
#line 446 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 + yyvsp[0].number; }
    break;

  case 39:
#line 447 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 * 1024 + yyvsp[0].number; }
    break;

  case 46:
#line 461 "ircd_parser.y"
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
#line 478 "ircd_parser.y"
    {
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
}
    break;

  case 63:
#line 502 "ircd_parser.y"
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
#line 536 "ircd_parser.y"
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
#line 596 "ircd_parser.y"
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
#line 610 "ircd_parser.y"
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
#line 628 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.description);
    DupString(ServerInfo.description,yylval.string);
  }
}
    break;

  case 68:
#line 637 "ircd_parser.y"
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
#line 651 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.network_desc);
    DupString(ServerInfo.network_desc, yylval.string);
  }
}
    break;

  case 70:
#line 660 "ircd_parser.y"
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
#line 688 "ircd_parser.y"
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
#line 718 "ircd_parser.y"
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
#line 734 "ircd_parser.y"
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
#line 790 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.name);
    DupString(AdminInfo.name, yylval.string);
  }
}
    break;

  case 82:
#line 799 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.email);
    DupString(AdminInfo.email, yylval.string);
  }
}
    break;

  case 83:
#line 808 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.description);
    DupString(AdminInfo.description, yylval.string);
  }
}
    break;

  case 100:
#line 835 "ircd_parser.y"
    {
                        }
    break;

  case 101:
#line 839 "ircd_parser.y"
    {
                        }
    break;

  case 102:
#line 843 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
}
    break;

  case 103:
#line 850 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
}
    break;

  case 104:
#line 857 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
}
    break;

  case 105:
#line 864 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operspylog, yylval.string,
            sizeof(ConfigLoggingEntry.operspylog));
}
    break;

  case 106:
#line 871 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.glinelog, yylval.string,
            sizeof(ConfigLoggingEntry.glinelog));
}
    break;

  case 107:
#line 878 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.klinelog, yylval.string,
            sizeof(ConfigLoggingEntry.klinelog));
}
    break;

  case 108:
#line 885 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.ioerrlog, yylval.string,
            sizeof(ConfigLoggingEntry.ioerrlog));
}
    break;

  case 109:
#line 892 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.killlog, yylval.string,
            sizeof(ConfigLoggingEntry.killlog));
}
    break;

  case 110:
#line 899 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
}
    break;

  case 111:
#line 903 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
}
    break;

  case 112:
#line 907 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
}
    break;

  case 113:
#line 911 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
}
    break;

  case 114:
#line 915 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
}
    break;

  case 115:
#line 919 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
}
    break;

  case 116:
#line 923 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
}
    break;

  case 117:
#line 929 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 118:
#line 938 "ircd_parser.y"
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
#line 950 "ircd_parser.y"
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
#line 1041 "ircd_parser.y"
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

  case 146:
#line 1065 "ircd_parser.y"
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
#line 1084 "ircd_parser.y"
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
#line 1096 "ircd_parser.y"
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

  case 149:
#line 1107 "ircd_parser.y"
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
#line 1118 "ircd_parser.y"
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
#line 1160 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 152:
#line 1169 "ircd_parser.y"
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
#line 1180 "ircd_parser.y"
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
#line 1191 "ircd_parser.y"
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
#line 1202 "ircd_parser.y"
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
#line 1213 "ircd_parser.y"
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
#line 1224 "ircd_parser.y"
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
#line 1235 "ircd_parser.y"
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
#line 1246 "ircd_parser.y"
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
#line 1257 "ircd_parser.y"
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
#line 1268 "ircd_parser.y"
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
#line 1279 "ircd_parser.y"
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
#line 1290 "ircd_parser.y"
    {
}
    break;

  case 167:
#line 1294 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 168:
#line 1295 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 169:
#line 1298 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 170:
#line 1305 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 171:
#line 1312 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 172:
#line 1319 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 173:
#line 1326 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 174:
#line 1333 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 175:
#line 1340 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 176:
#line 1347 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 177:
#line 1354 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 178:
#line 1361 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 179:
#line 1368 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 180:
#line 1375 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 181:
#line 1382 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 182:
#line 1389 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 183:
#line 1396 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 184:
#line 1403 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) ClearConfEncrypted(yy_aconf);
    else SetConfEncrypted(yy_aconf);
  }
}
    break;

  case 185:
#line 1416 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = (struct ClassItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 186:
#line 1423 "ircd_parser.y"
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

  case 202:
#line 1451 "ircd_parser.y"
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

  case 203:
#line 1498 "ircd_parser.y"
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

  case 204:
#line 1545 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 205:
#line 1551 "ircd_parser.y"
    {
  if (ypass == 1)
    PingWarning(yy_class) = yyvsp[-1].number;
}
    break;

  case 206:
#line 1557 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = yyvsp[-1].number;
}
    break;

  case 207:
#line 1563 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 208:
#line 1569 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = yyvsp[-1].number;
}
    break;

  case 209:
#line 1575 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = yyvsp[-1].number;
}
    break;

  case 210:
#line 1581 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = yyvsp[-1].number;
}
    break;

  case 211:
#line 1587 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = yyvsp[-1].number;
}
    break;

  case 212:
#line 1593 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = yyvsp[-1].number;
}
    break;

  case 213:
#line 1602 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    listener_address = NULL;
    listener_flags = 0;
  }
}
    break;

  case 214:
#line 1609 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 215:
#line 1618 "ircd_parser.y"
    {
}
    break;

  case 219:
#line 1623 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_SSL;
}
    break;

  case 220:
#line 1627 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_HIDDEN;
}
    break;

  case 231:
#line 1640 "ircd_parser.y"
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

  case 232:
#line 1655 "ircd_parser.y"
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

  case 233:
#line 1677 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 234:
#line 1686 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 235:
#line 1698 "ircd_parser.y"
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

  case 236:
#line 1710 "ircd_parser.y"
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

  case 256:
#line 1775 "ircd_parser.y"
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

  case 257:
#line 1794 "ircd_parser.y"
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

  case 258:
#line 1807 "ircd_parser.y"
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

  case 259:
#line 1818 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 260:
#line 1827 "ircd_parser.y"
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

  case 261:
#line 1838 "ircd_parser.y"
    {
}
    break;

  case 265:
#line 1842 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 266:
#line 1843 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 267:
#line 1846 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 268:
#line 1854 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 269:
#line 1861 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 270:
#line 1868 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 271:
#line 1875 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 272:
#line 1882 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 273:
#line 1889 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 274:
#line 1896 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 275:
#line 1903 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 276:
#line 1910 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 277:
#line 1919 "ircd_parser.y"
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

  case 278:
#line 1930 "ircd_parser.y"
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

  case 279:
#line 1941 "ircd_parser.y"
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

  case 280:
#line 1952 "ircd_parser.y"
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

  case 281:
#line 1963 "ircd_parser.y"
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

  case 282:
#line 1974 "ircd_parser.y"
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

  case 283:
#line 1986 "ircd_parser.y"
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

  case 284:
#line 2005 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 285:
#line 2015 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = yyvsp[-1].number;
  }
}
    break;

  case 286:
#line 2024 "ircd_parser.y"
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

  case 287:
#line 2039 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 288:
#line 2046 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 295:
#line 2058 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 296:
#line 2067 "ircd_parser.y"
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

  case 297:
#line 2082 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char def_reason[] = "No reason";

    create_nick_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
  }
}
    break;

  case 298:
#line 2095 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(ULINE_TYPE);
    yy_match_item = map_to_conf(yy_conf);
    yy_match_item->action = SHARED_ALL;
  }
}
    break;

  case 299:
#line 2103 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 306:
#line 2114 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 307:
#line 2123 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    split_nuh(yylval.string, NULL, &yy_match_item->user, &yy_match_item->host);
  }
}
    break;

  case 308:
#line 2131 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 312:
#line 2138 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 313:
#line 2142 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TKLINE;
}
    break;

  case 314:
#line 2146 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 315:
#line 2150 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 316:
#line 2154 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TXLINE;
}
    break;

  case 317:
#line 2158 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 318:
#line 2162 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 319:
#line 2166 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TRESV;
}
    break;

  case 320:
#line 2170 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 321:
#line 2174 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_LOCOPS;
}
    break;

  case 322:
#line 2178 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 323:
#line 2187 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_conf->flags = SHARED_ALL;
  }
}
    break;

  case 324:
#line 2194 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_conf->name == NULL)
      DupString(yy_conf->name, "*");
    yy_conf = NULL;
  }
}
    break;

  case 330:
#line 2207 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 331:
#line 2213 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = 0;
}
    break;

  case 335:
#line 2220 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_KLINE;
}
    break;

  case 336:
#line 2224 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TKLINE;
}
    break;

  case 337:
#line 2228 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNKLINE;
}
    break;

  case 338:
#line 2232 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_XLINE;
}
    break;

  case 339:
#line 2236 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TXLINE;
}
    break;

  case 340:
#line 2240 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNXLINE;
}
    break;

  case 341:
#line 2244 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_RESV;
}
    break;

  case 342:
#line 2248 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TRESV;
}
    break;

  case 343:
#line 2252 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNRESV;
}
    break;

  case 344:
#line 2256 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_LOCOPS;
}
    break;

  case 345:
#line 2260 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = SHARED_ALL;
}
    break;

  case 346:
#line 2269 "ircd_parser.y"
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

  case 347:
#line 2287 "ircd_parser.y"
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

  case 371:
#line 2430 "ircd_parser.y"
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

  case 372:
#line 2442 "ircd_parser.y"
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

  case 373:
#line 2454 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 374:
#line 2463 "ircd_parser.y"
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

  case 375:
#line 2489 "ircd_parser.y"
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

  case 376:
#line 2501 "ircd_parser.y"
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

  case 377:
#line 2513 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = yyvsp[-1].number;
}
    break;

  case 378:
#line 2519 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 379:
#line 2523 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 380:
#line 2531 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 381:
#line 2540 "ircd_parser.y"
    {
}
    break;

  case 385:
#line 2544 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 386:
#line 2545 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 387:
#line 2548 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfLazyLink(yy_aconf);
    else SetConfLazyLink(yy_aconf);
  }
}
    break;

  case 388:
#line 2555 "ircd_parser.y"
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

  case 389:
#line 2566 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfCryptLink(yy_aconf);
    else SetConfCryptLink(yy_aconf);
  }
}
    break;

  case 390:
#line 2573 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAllowAutoConn(yy_aconf);
    else SetConfAllowAutoConn(yy_aconf);
  }
}
    break;

  case 391:
#line 2580 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAwayBurst(yy_aconf);
    else SetConfAwayBurst(yy_aconf);
  }
}
    break;

  case 392:
#line 2587 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfTopicBurst(yy_aconf);
    else SetConfTopicBurst(yy_aconf);
  }
}
    break;

  case 393:
#line 2597 "ircd_parser.y"
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

  case 394:
#line 2638 "ircd_parser.y"
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

  case 395:
#line 2649 "ircd_parser.y"
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

  case 396:
#line 2660 "ircd_parser.y"
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

  case 397:
#line 2675 "ircd_parser.y"
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

  case 398:
#line 2686 "ircd_parser.y"
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

  case 399:
#line 2699 "ircd_parser.y"
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

  case 400:
#line 2712 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 401:
#line 2721 "ircd_parser.y"
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

  case 402:
#line 2756 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    userbuf[0] = hostbuf[0] = reasonbuf[0] = '\0';
    regex_ban = 0;
  }
}
    break;

  case 403:
#line 2763 "ircd_parser.y"
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

  case 404:
#line 2817 "ircd_parser.y"
    {
}
    break;

  case 408:
#line 2822 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 415:
#line 2831 "ircd_parser.y"
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

  case 416:
#line 2847 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 417:
#line 2856 "ircd_parser.y"
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

  case 418:
#line 2865 "ircd_parser.y"
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

  case 424:
#line 2881 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 425:
#line 2890 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 426:
#line 2902 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(EXEMPTDLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    DupString(yy_aconf->passwd, "*");
  }
}
    break;

  case 427:
#line 2910 "ircd_parser.y"
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

  case 432:
#line 2926 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 433:
#line 2938 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    regex_ban = 0;
    reasonbuf[0] = gecos_name[0] = '\0';
  }
}
    break;

  case 434:
#line 2945 "ircd_parser.y"
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

  case 435:
#line 2979 "ircd_parser.y"
    {
}
    break;

  case 439:
#line 2984 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 446:
#line 2993 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(gecos_name, yylval.string, sizeof(gecos_name));
}
    break;

  case 447:
#line 2999 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 509:
#line 3046 "ircd_parser.y"
    {
  ConfigFileEntry.gline_min_cidr = yyvsp[-1].number;
}
    break;

  case 510:
#line 3051 "ircd_parser.y"
    {
  ConfigFileEntry.gline_min_cidr6 = yyvsp[-1].number;
}
    break;

  case 511:
#line 3056 "ircd_parser.y"
    {
  ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 512:
#line 3061 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
}
    break;

  case 513:
#line 3066 "ircd_parser.y"
    {
  GlobalSetOptions.rejecttime = yylval.number;
}
    break;

  case 514:
#line 3071 "ircd_parser.y"
    {
  GlobalSetOptions.joinfloodcount = yylval.number;
}
    break;

  case 515:
#line 3076 "ircd_parser.y"
    {
  GlobalSetOptions.joinfloodtime = yylval.number;
}
    break;

  case 516:
#line 3081 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 517:
#line 3086 "ircd_parser.y"
    {
  ConfigFileEntry.kill_chase_time_limit = yyvsp[-1].number;
}
    break;

  case 518:
#line 3091 "ircd_parser.y"
    {
  ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 519:
#line 3096 "ircd_parser.y"
    {
  ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 520:
#line 3101 "ircd_parser.y"
    {
  ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 521:
#line 3106 "ircd_parser.y"
    {
  ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 522:
#line 3111 "ircd_parser.y"
    {
  ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 523:
#line 3116 "ircd_parser.y"
    {
  ConfigFileEntry.max_nick_time = yyvsp[-1].number; 
}
    break;

  case 524:
#line 3121 "ircd_parser.y"
    {
  ConfigFileEntry.max_nick_changes = yyvsp[-1].number;
}
    break;

  case 525:
#line 3126 "ircd_parser.y"
    {
  ConfigFileEntry.max_accept = yyvsp[-1].number;
}
    break;

  case 526:
#line 3131 "ircd_parser.y"
    {
  ConfigFileEntry.anti_spam_exit_message_time = yyvsp[-1].number;
}
    break;

  case 527:
#line 3136 "ircd_parser.y"
    {
  ConfigFileEntry.ts_warn_delta = yyvsp[-1].number;
}
    break;

  case 528:
#line 3141 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = yyvsp[-1].number;
}
    break;

  case 529:
#line 3147 "ircd_parser.y"
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
#line 3158 "ircd_parser.y"
    {
  ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 531:
#line 3163 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 532:
#line 3172 "ircd_parser.y"
    {
  ConfigFileEntry.invisible_on_connect = yylval.number;
}
    break;

  case 533:
#line 3177 "ircd_parser.y"
    {
  ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 534:
#line 3182 "ircd_parser.y"
    {
  ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 535:
#line 3187 "ircd_parser.y"
    {
  ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 536:
#line 3192 "ircd_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 537:
#line 3195 "ircd_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 538:
#line 3200 "ircd_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 539:
#line 3203 "ircd_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 540:
#line 3208 "ircd_parser.y"
    {
  ConfigFileEntry.pace_wait = yyvsp[-1].number;
}
    break;

  case 541:
#line 3213 "ircd_parser.y"
    {
  ConfigFileEntry.caller_id_wait = yyvsp[-1].number;
}
    break;

  case 542:
#line 3218 "ircd_parser.y"
    {
  ConfigFileEntry.opers_bypass_callerid = yylval.number;
}
    break;

  case 543:
#line 3223 "ircd_parser.y"
    {
  ConfigFileEntry.pace_wait_simple = yyvsp[-1].number;
}
    break;

  case 544:
#line 3228 "ircd_parser.y"
    {
  ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 545:
#line 3233 "ircd_parser.y"
    {
  ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 546:
#line 3238 "ircd_parser.y"
    {
  ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 547:
#line 3243 "ircd_parser.y"
    {
  ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 548:
#line 3248 "ircd_parser.y"
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
#line 3259 "ircd_parser.y"
    {
  ConfigFileEntry.idletime = yyvsp[-1].number;
}
    break;

  case 550:
#line 3264 "ircd_parser.y"
    {
  ConfigFileEntry.dots_in_ident = yyvsp[-1].number;
}
    break;

  case 551:
#line 3269 "ircd_parser.y"
    {
  ConfigFileEntry.maximum_links = yyvsp[-1].number;
}
    break;

  case 552:
#line 3274 "ircd_parser.y"
    {
  ConfigFileEntry.max_targets = yyvsp[-1].number;
}
    break;

  case 553:
#line 3279 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 554:
#line 3288 "ircd_parser.y"
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

  case 555:
#line 3320 "ircd_parser.y"
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

  case 556:
#line 3338 "ircd_parser.y"
    {
  ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 557:
#line 3343 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 558:
#line 3352 "ircd_parser.y"
    {
  ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 559:
#line 3357 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 560:
#line 3362 "ircd_parser.y"
    {
  ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 561:
#line 3367 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 565:
#line 3373 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 566:
#line 3376 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 567:
#line 3379 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEAF;
}
    break;

  case 568:
#line 3382 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 569:
#line 3385 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 570:
#line 3388 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 571:
#line 3391 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 572:
#line 3394 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 573:
#line 3397 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 574:
#line 3400 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 575:
#line 3403 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 576:
#line 3406 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 577:
#line 3409 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 578:
#line 3412 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 579:
#line 3415 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 580:
#line 3418 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 581:
#line 3421 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 582:
#line 3424 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 583:
#line 3429 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 587:
#line 3435 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 588:
#line 3438 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 589:
#line 3441 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEAF;
}
    break;

  case 590:
#line 3444 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 591:
#line 3447 "ircd_parser.y"
    { 
  ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 592:
#line 3450 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 593:
#line 3453 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 594:
#line 3456 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 595:
#line 3459 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 596:
#line 3462 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 597:
#line 3465 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 598:
#line 3468 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 599:
#line 3471 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 600:
#line 3474 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 601:
#line 3477 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 602:
#line 3480 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 603:
#line 3483 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 604:
#line 3486 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 605:
#line 3491 "ircd_parser.y"
    {
  ConfigFileEntry.min_nonwildcard = yyvsp[-1].number;
}
    break;

  case 606:
#line 3496 "ircd_parser.y"
    {
  ConfigFileEntry.min_nonwildcard_simple = yyvsp[-1].number;
}
    break;

  case 607:
#line 3501 "ircd_parser.y"
    {
  ConfigFileEntry.default_floodcount = yyvsp[-1].number;
}
    break;

  case 608:
#line 3506 "ircd_parser.y"
    {
  ConfigFileEntry.client_flood = yyvsp[-1].number;
}
    break;

  case 609:
#line 3511 "ircd_parser.y"
    {
  ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 610:
#line 3519 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->flags = 0;
  }
}
    break;

  case 611:
#line 3527 "ircd_parser.y"
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

  case 621:
#line 3554 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 622:
#line 3560 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = yyvsp[-1].number;
}
    break;

  case 623:
#line 3566 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 627:
#line 3572 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 628:
#line 3576 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 629:
#line 3582 "ircd_parser.y"
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

  case 630:
#line 3601 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 631:
#line 3610 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 632:
#line 3614 "ircd_parser.y"
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

  case 635:
#line 3654 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 636:
#line 3658 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 656:
#line 3688 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 657:
#line 3694 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_except = yylval.number;
}
    break;

  case 658:
#line 3700 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_invex = yylval.number;
}
    break;

  case 659:
#line 3706 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_knock = yylval.number;
}
    break;

  case 660:
#line 3712 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay = yyvsp[-1].number;
}
    break;

  case 661:
#line 3718 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay_channel = yyvsp[-1].number;
}
    break;

  case 662:
#line 3724 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 663:
#line 3730 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_chans_per_user = yyvsp[-1].number;
}
    break;

  case 664:
#line 3736 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 665:
#line 3742 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_bans = yyvsp[-1].number;
}
    break;

  case 666:
#line 3748 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_user_count = yyvsp[-1].number;
}
    break;

  case 667:
#line 3754 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_server_count = yyvsp[-1].number;
}
    break;

  case 668:
#line 3760 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 669:
#line 3766 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 670:
#line 3772 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.burst_topicwho = yylval.number;
}
    break;

  case 681:
#line 3792 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 682:
#line 3798 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 683:
#line 3804 "ircd_parser.y"
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

  case 684:
#line 3818 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 685:
#line 3824 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 686:
#line 3830 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 1016 of /usr/local/share/bison/yacc.c.  */
#line 7051 "y.tab.c"

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


#line 387 "ircd_parser.y"

