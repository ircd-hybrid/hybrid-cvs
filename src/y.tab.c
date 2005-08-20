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
/*  $Id: y.tab.c,v 7.59 2005/08/20 12:02:29 michael Exp $ */
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
     REGEX_T = 401,
     REHASH = 402,
     REMOTE = 403,
     REMOTEBAN = 404,
     RESTRICTED = 405,
     RSA_PRIVATE_KEY_FILE = 406,
     RSA_PUBLIC_KEY_FILE = 407,
     SSL_CERTIFICATE_FILE = 408,
     RESV = 409,
     RESV_EXEMPT = 410,
     SECONDS = 411,
     MINUTES = 412,
     HOURS = 413,
     DAYS = 414,
     WEEKS = 415,
     SENDQ = 416,
     SEND_PASSWORD = 417,
     SERVERHIDE = 418,
     SERVERINFO = 419,
     SERVLINK_PATH = 420,
     IRCD_SID = 421,
     TKLINE_EXPIRE_NOTICES = 422,
     T_SHARED = 423,
     T_CLUSTER = 424,
     TYPE = 425,
     SHORT_MOTD = 426,
     SILENT = 427,
     SPOOF = 428,
     SPOOF_NOTICE = 429,
     STATS_I_OPER_ONLY = 430,
     STATS_K_OPER_ONLY = 431,
     STATS_O_OPER_ONLY = 432,
     STATS_P_OPER_ONLY = 433,
     TBOOL = 434,
     TMASKED = 435,
     T_REJECT = 436,
     TS_MAX_DELTA = 437,
     TS_WARN_DELTA = 438,
     TWODOTS = 439,
     T_ALL = 440,
     T_BOTS = 441,
     T_SOFTCALLERID = 442,
     T_CALLERID = 443,
     T_CCONN = 444,
     T_CLIENT_FLOOD = 445,
     T_DEAF = 446,
     T_DEBUG = 447,
     T_DRONE = 448,
     T_EXTERNAL = 449,
     T_FULL = 450,
     T_INVISIBLE = 451,
     T_IPV4 = 452,
     T_IPV6 = 453,
     T_LOCOPS = 454,
     T_LOGPATH = 455,
     T_L_CRIT = 456,
     T_L_DEBUG = 457,
     T_L_ERROR = 458,
     T_L_INFO = 459,
     T_L_NOTICE = 460,
     T_L_TRACE = 461,
     T_L_WARN = 462,
     T_MAX_CLIENTS = 463,
     T_NCHANGE = 464,
     T_OPERWALL = 465,
     T_REJ = 466,
     T_SERVNOTICE = 467,
     T_SKILL = 468,
     T_SPY = 469,
     T_SSL = 470,
     T_UNAUTH = 471,
     T_UNRESV = 472,
     T_UNXLINE = 473,
     T_WALLOP = 474,
     THROTTLE_TIME = 475,
     TOPICBURST = 476,
     TRUE_NO_OPER_FLOOD = 477,
     TKLINE = 478,
     TXLINE = 479,
     TRESV = 480,
     UNKLINE = 481,
     USER = 482,
     USE_EGD = 483,
     USE_EXCEPT = 484,
     USE_INVEX = 485,
     USE_KNOCK = 486,
     USE_LOGGING = 487,
     USE_WHOIS_ACTUALLY = 488,
     VHOST = 489,
     VHOST6 = 490,
     XLINE = 491,
     WARN = 492,
     WARN_NO_NLINE = 493
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
#define REGEX_T 401
#define REHASH 402
#define REMOTE 403
#define REMOTEBAN 404
#define RESTRICTED 405
#define RSA_PRIVATE_KEY_FILE 406
#define RSA_PUBLIC_KEY_FILE 407
#define SSL_CERTIFICATE_FILE 408
#define RESV 409
#define RESV_EXEMPT 410
#define SECONDS 411
#define MINUTES 412
#define HOURS 413
#define DAYS 414
#define WEEKS 415
#define SENDQ 416
#define SEND_PASSWORD 417
#define SERVERHIDE 418
#define SERVERINFO 419
#define SERVLINK_PATH 420
#define IRCD_SID 421
#define TKLINE_EXPIRE_NOTICES 422
#define T_SHARED 423
#define T_CLUSTER 424
#define TYPE 425
#define SHORT_MOTD 426
#define SILENT 427
#define SPOOF 428
#define SPOOF_NOTICE 429
#define STATS_I_OPER_ONLY 430
#define STATS_K_OPER_ONLY 431
#define STATS_O_OPER_ONLY 432
#define STATS_P_OPER_ONLY 433
#define TBOOL 434
#define TMASKED 435
#define T_REJECT 436
#define TS_MAX_DELTA 437
#define TS_WARN_DELTA 438
#define TWODOTS 439
#define T_ALL 440
#define T_BOTS 441
#define T_SOFTCALLERID 442
#define T_CALLERID 443
#define T_CCONN 444
#define T_CLIENT_FLOOD 445
#define T_DEAF 446
#define T_DEBUG 447
#define T_DRONE 448
#define T_EXTERNAL 449
#define T_FULL 450
#define T_INVISIBLE 451
#define T_IPV4 452
#define T_IPV6 453
#define T_LOCOPS 454
#define T_LOGPATH 455
#define T_L_CRIT 456
#define T_L_DEBUG 457
#define T_L_ERROR 458
#define T_L_INFO 459
#define T_L_NOTICE 460
#define T_L_TRACE 461
#define T_L_WARN 462
#define T_MAX_CLIENTS 463
#define T_NCHANGE 464
#define T_OPERWALL 465
#define T_REJ 466
#define T_SERVNOTICE 467
#define T_SKILL 468
#define T_SPY 469
#define T_SSL 470
#define T_UNAUTH 471
#define T_UNRESV 472
#define T_UNXLINE 473
#define T_WALLOP 474
#define THROTTLE_TIME 475
#define TOPICBURST 476
#define TRUE_NO_OPER_FLOOD 477
#define TKLINE 478
#define TXLINE 479
#define TRESV 480
#define UNKLINE 481
#define USER 482
#define USE_EGD 483
#define USE_EXCEPT 484
#define USE_INVEX 485
#define USE_KNOCK 486
#define USE_LOGGING 487
#define USE_WHOIS_ACTUALLY 488
#define VHOST 489
#define VHOST6 490
#define XLINE 491
#define WARN 492
#define WARN_NO_NLINE 493




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
#line 132 "ircd_parser.y"
typedef union YYSTYPE {
  int number;
  char *string;
} YYSTYPE;
/* Line 190 of yacc.c.  */
#line 664 "y.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 213 of yacc.c.  */
#line 676 "y.tab.c"

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
#define YYLAST   1312

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  244
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  312
/* YYNRULES -- Number of rules. */
#define YYNRULES  664
/* YYNRULES -- Number of states. */
#define YYNSTATES  1347

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   493

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   243,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   239,
       2,   242,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   241,     2,   240,     2,     2,     2,     2,
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
     235,   236,   237,   238
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
     268,   270,   272,   274,   276,   278,   281,   286,   291,   296,
     301,   306,   311,   316,   321,   326,   331,   336,   341,   346,
     351,   352,   360,   361,   363,   366,   368,   370,   372,   374,
     376,   378,   380,   382,   384,   386,   388,   390,   392,   394,
     396,   398,   400,   402,   404,   406,   409,   414,   416,   421,
     426,   431,   436,   441,   446,   451,   456,   461,   466,   471,
     476,   481,   486,   491,   496,   501,   502,   508,   512,   514,
     517,   519,   521,   523,   525,   527,   529,   531,   533,   535,
     537,   539,   541,   543,   545,   547,   549,   551,   552,   560,
     561,   563,   566,   568,   570,   572,   574,   576,   578,   580,
     582,   584,   586,   589,   594,   596,   601,   606,   611,   616,
     621,   626,   631,   636,   637,   644,   645,   651,   655,   657,
     659,   661,   664,   666,   668,   670,   672,   674,   677,   682,
     686,   688,   690,   694,   699,   704,   705,   712,   715,   717,
     719,   721,   723,   725,   727,   729,   731,   733,   735,   737,
     739,   741,   743,   745,   747,   749,   752,   757,   762,   767,
     772,   777,   778,   784,   788,   790,   793,   795,   797,   799,
     801,   803,   805,   807,   809,   811,   813,   815,   820,   825,
     830,   835,   840,   845,   850,   855,   860,   865,   866,   873,
     876,   878,   880,   882,   884,   887,   892,   897,   902,   903,
     910,   913,   915,   917,   919,   921,   924,   929,   934,   935,
     941,   945,   947,   949,   951,   953,   955,   957,   959,   961,
     963,   965,   967,   969,   970,   977,   980,   982,   984,   986,
     989,   994,   995,  1001,  1005,  1007,  1009,  1011,  1013,  1015,
    1017,  1019,  1021,  1023,  1025,  1027,  1029,  1030,  1038,  1039,
    1041,  1044,  1046,  1048,  1050,  1052,  1054,  1056,  1058,  1060,
    1062,  1064,  1066,  1068,  1070,  1072,  1074,  1076,  1078,  1080,
    1083,  1088,  1090,  1095,  1100,  1105,  1110,  1115,  1120,  1125,
    1126,  1132,  1136,  1138,  1141,  1143,  1145,  1147,  1149,  1151,
    1153,  1155,  1160,  1165,  1170,  1175,  1180,  1185,  1190,  1195,
    1200,  1201,  1208,  1209,  1215,  1219,  1221,  1223,  1226,  1228,
    1230,  1232,  1234,  1236,  1241,  1246,  1247,  1254,  1257,  1259,
    1261,  1263,  1265,  1270,  1275,  1276,  1283,  1286,  1288,  1290,
    1292,  1297,  1298,  1305,  1306,  1312,  1316,  1318,  1320,  1323,
    1325,  1327,  1329,  1331,  1333,  1338,  1343,  1349,  1352,  1354,
    1356,  1358,  1360,  1362,  1364,  1366,  1368,  1370,  1372,  1374,
    1376,  1378,  1380,  1382,  1384,  1386,  1388,  1390,  1392,  1394,
    1396,  1398,  1400,  1402,  1404,  1406,  1408,  1410,  1412,  1414,
    1416,  1418,  1420,  1422,  1424,  1426,  1428,  1430,  1432,  1434,
    1436,  1438,  1440,  1442,  1444,  1446,  1448,  1450,  1452,  1454,
    1456,  1458,  1460,  1465,  1470,  1475,  1480,  1485,  1490,  1495,
    1500,  1505,  1510,  1515,  1520,  1525,  1530,  1535,  1540,  1545,
    1550,  1555,  1560,  1565,  1570,  1575,  1580,  1585,  1590,  1595,
    1600,  1605,  1610,  1615,  1620,  1625,  1630,  1635,  1640,  1645,
    1650,  1655,  1660,  1665,  1670,  1675,  1680,  1685,  1690,  1695,
    1696,  1702,  1706,  1708,  1710,  1712,  1714,  1716,  1718,  1720,
    1722,  1724,  1726,  1728,  1730,  1732,  1734,  1736,  1738,  1740,
    1742,  1744,  1745,  1751,  1755,  1757,  1759,  1761,  1763,  1765,
    1767,  1769,  1771,  1773,  1775,  1777,  1779,  1781,  1783,  1785,
    1787,  1789,  1791,  1793,  1798,  1803,  1808,  1813,  1818,  1819,
    1826,  1829,  1831,  1833,  1835,  1837,  1839,  1841,  1843,  1845,
    1850,  1855,  1856,  1862,  1866,  1868,  1870,  1872,  1877,  1882,
    1883,  1889,  1893,  1895,  1897,  1899,  1905,  1908,  1910,  1912,
    1914,  1916,  1918,  1920,  1922,  1924,  1926,  1928,  1930,  1932,
    1934,  1936,  1938,  1940,  1942,  1947,  1952,  1957,  1962,  1967,
    1972,  1977,  1982,  1987,  1992,  1997,  2002,  2007,  2012,  2017,
    2023,  2026,  2028,  2030,  2032,  2034,  2036,  2038,  2040,  2042,
    2047,  2052,  2057,  2062,  2067
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     245,     0,    -1,    -1,   245,   246,    -1,   270,    -1,   276,
      -1,   287,    -1,   529,    -1,   316,    -1,   331,    -1,   344,
      -1,   256,    -1,   547,    -1,   368,    -1,   375,    -1,   385,
      -1,   394,    -1,   421,    -1,   431,    -1,   437,    -1,   452,
      -1,   513,    -1,   442,    -1,   251,    -1,     1,   239,    -1,
       1,   240,    -1,    -1,   248,    -1,   123,   247,    -1,   123,
     156,   247,    -1,   123,   157,   247,    -1,   123,   158,   247,
      -1,   123,   159,   247,    -1,   123,   160,   247,    -1,    -1,
     250,    -1,   123,   249,    -1,   123,    15,   249,    -1,   123,
      16,   249,    -1,   123,    17,   249,    -1,   111,   241,   252,
     240,   239,    -1,   252,   253,    -1,   253,    -1,   254,    -1,
     255,    -1,     1,   239,    -1,   110,   242,   141,   239,    -1,
     137,   242,   141,   239,    -1,   164,   241,   257,   240,   239,
      -1,   257,   258,    -1,   258,    -1,   261,    -1,   266,    -1,
     269,    -1,   263,    -1,   264,    -1,   265,    -1,   268,    -1,
     260,    -1,   267,    -1,   262,    -1,   259,    -1,     1,   239,
      -1,   153,   242,   141,   239,    -1,   151,   242,   141,   239,
      -1,   112,   242,   141,   239,    -1,   166,   242,   141,   239,
      -1,    36,   242,   141,   239,    -1,   115,   242,   141,   239,
      -1,   114,   242,   141,   239,    -1,   234,   242,   141,   239,
      -1,   235,   242,   141,   239,    -1,   208,   242,   123,   239,
      -1,    77,   242,   179,   239,    -1,     5,   241,   271,   240,
     239,    -1,   271,   272,    -1,   272,    -1,   273,    -1,   275,
      -1,   274,    -1,     1,   239,    -1,   112,   242,   141,   239,
      -1,    46,   242,   141,   239,    -1,    36,   242,   141,   239,
      -1,    94,   241,   277,   240,   239,    -1,   277,   278,    -1,
     278,    -1,   279,    -1,   280,    -1,   281,    -1,   285,    -1,
     286,    -1,   282,    -1,   284,    -1,   283,    -1,     1,   239,
      -1,   200,   242,   141,   239,    -1,   128,   242,   141,   239,
      -1,    63,   242,   141,   239,    -1,    57,   242,   141,   239,
      -1,    55,   242,   141,   239,    -1,    56,   242,   141,   239,
      -1,    95,   242,   201,   239,    -1,    95,   242,   203,   239,
      -1,    95,   242,   207,   239,    -1,    95,   242,   205,   239,
      -1,    95,   242,   206,   239,    -1,    95,   242,   204,   239,
      -1,    95,   242,   202,   239,    -1,   232,   242,   179,   239,
      -1,    -1,   127,   288,   289,   241,   290,   240,   239,    -1,
      -1,   293,    -1,   290,   291,    -1,   291,    -1,   292,    -1,
     294,    -1,   295,    -1,   297,    -1,   299,    -1,   300,    -1,
     301,    -1,   303,    -1,   304,    -1,   305,    -1,   306,    -1,
     307,    -1,   302,    -1,   308,    -1,   309,    -1,   310,    -1,
     296,    -1,   298,    -1,   311,    -1,     1,   239,    -1,   112,
     242,   141,   239,    -1,   141,    -1,   227,   242,   141,   239,
      -1,   136,   242,   141,   239,    -1,    48,   242,   179,   239,
      -1,    71,   242,   179,   239,    -1,   152,   242,   141,   239,
      -1,    25,   242,   141,   239,    -1,    67,   242,   179,   239,
      -1,   148,   242,   179,   239,    -1,   149,   242,   179,   239,
      -1,    84,   242,   179,   239,    -1,   236,   242,   179,   239,
      -1,   226,   242,   179,   239,    -1,    60,   242,   179,   239,
      -1,   117,   242,   179,   239,    -1,    37,   242,   179,   239,
      -1,   147,   242,   179,   239,    -1,     5,   242,   179,   239,
      -1,    -1,    53,   312,   242,   313,   239,    -1,   313,   243,
     314,    -1,   314,    -1,   122,   315,    -1,   315,    -1,    67,
      -1,   148,    -1,    84,    -1,   226,    -1,   236,    -1,    60,
      -1,    37,    -1,   147,    -1,     5,    -1,    71,    -1,   117,
      -1,   210,    -1,   131,    -1,    72,    -1,   149,    -1,    48,
      -1,    -1,    25,   317,   318,   241,   319,   240,   239,    -1,
      -1,   322,    -1,   319,   320,    -1,   320,    -1,   321,    -1,
     323,    -1,   324,    -1,   325,    -1,   326,    -1,   327,    -1,
     328,    -1,   329,    -1,   330,    -1,     1,   239,    -1,   112,
     242,   141,   239,    -1,   141,    -1,   139,   242,   248,   239,
      -1,   125,   242,   123,   239,    -1,    29,   242,   248,   239,
      -1,   105,   242,   123,   239,    -1,   100,   242,   123,   239,
      -1,   102,   242,   123,   239,    -1,   101,   242,   123,   239,
      -1,   161,   242,   250,   239,    -1,    -1,    93,   332,   241,
     337,   240,   239,    -1,    -1,    53,   334,   242,   335,   239,
      -1,   335,   243,   336,    -1,   336,    -1,   215,    -1,    70,
      -1,   337,   338,    -1,   338,    -1,   339,    -1,   333,    -1,
     342,    -1,   343,    -1,     1,   239,    -1,   140,   242,   340,
     239,    -1,   340,   243,   341,    -1,   341,    -1,   123,    -1,
     123,   184,   123,    -1,    81,   242,   141,   239,    -1,    76,
     242,   141,   239,    -1,    -1,    10,   345,   241,   346,   240,
     239,    -1,   346,   347,    -1,   347,    -1,   348,    -1,   349,
      -1,   351,    -1,   353,    -1,   358,    -1,   359,    -1,   360,
      -1,   362,    -1,   363,    -1,   364,    -1,   350,    -1,   365,
      -1,   366,    -1,   361,    -1,   367,    -1,   352,    -1,     1,
     239,    -1,   227,   242,   141,   239,    -1,   136,   242,   141,
     239,    -1,   174,   242,   179,   239,    -1,    25,   242,   141,
     239,    -1,    48,   242,   179,   239,    -1,    -1,    53,   354,
     242,   355,   239,    -1,   355,   243,   356,    -1,   356,    -1,
     122,   357,    -1,   357,    -1,   174,    -1,    49,    -1,    85,
      -1,    68,    -1,    21,    -1,    22,    -1,   121,    -1,    62,
      -1,   155,    -1,   113,    -1,    85,   242,   179,   239,    -1,
      68,   242,   179,   239,    -1,    49,   242,   179,   239,    -1,
      21,   242,   179,   239,    -1,   121,   242,   179,   239,    -1,
      62,   242,   179,   239,    -1,   173,   242,   141,   239,    -1,
     145,   242,   141,   239,    -1,   144,   242,   123,   239,    -1,
     113,   242,   179,   239,    -1,    -1,   154,   369,   241,   370,
     240,   239,    -1,   370,   371,    -1,   371,    -1,   372,    -1,
     373,    -1,   374,    -1,     1,   239,    -1,   143,   242,   141,
     239,    -1,    23,   242,   141,   239,    -1,   116,   242,   141,
     239,    -1,    -1,   168,   376,   241,   377,   240,   239,    -1,
     377,   378,    -1,   378,    -1,   379,    -1,   380,    -1,   381,
      -1,     1,   239,    -1,   112,   242,   141,   239,    -1,   227,
     242,   141,   239,    -1,    -1,   170,   382,   242,   383,   239,
      -1,   383,   243,   384,    -1,   384,    -1,    84,    -1,   223,
      -1,   226,    -1,   236,    -1,   224,    -1,   218,    -1,   154,
      -1,   225,    -1,   217,    -1,   199,    -1,   185,    -1,    -1,
     169,   386,   241,   387,   240,   239,    -1,   387,   388,    -1,
     388,    -1,   389,    -1,   390,    -1,     1,   239,    -1,   112,
     242,   141,   239,    -1,    -1,   170,   391,   242,   392,   239,
      -1,   392,   243,   393,    -1,   393,    -1,    84,    -1,   223,
      -1,   226,    -1,   236,    -1,   224,    -1,   218,    -1,   154,
      -1,   225,    -1,   217,    -1,   199,    -1,   185,    -1,    -1,
      28,   395,   396,   241,   397,   240,   239,    -1,    -1,   400,
      -1,   397,   398,    -1,   398,    -1,   399,    -1,   401,    -1,
     402,    -1,   403,    -1,   404,    -1,   405,    -1,   406,    -1,
     407,    -1,   417,    -1,   418,    -1,   419,    -1,   416,    -1,
     413,    -1,   415,    -1,   414,    -1,   412,    -1,   420,    -1,
       1,   239,    -1,   112,   242,   141,   239,    -1,   141,    -1,
      76,   242,   141,   239,    -1,   162,   242,   141,   239,    -1,
       3,   242,   141,   239,    -1,   140,   242,   123,   239,    -1,
       6,   242,   197,   239,    -1,     6,   242,   198,   239,    -1,
      52,   242,   141,   239,    -1,    -1,    53,   408,   242,   409,
     239,    -1,   409,   243,   410,    -1,   410,    -1,   122,   411,
      -1,   411,    -1,    90,    -1,    26,    -1,    30,    -1,    11,
      -1,    13,    -1,   221,    -1,   152,   242,   141,   239,    -1,
      48,   242,   179,   239,    -1,    30,   242,   179,   239,    -1,
      26,   242,   179,   239,    -1,    11,   242,   179,   239,    -1,
      78,   242,   141,   239,    -1,    91,   242,   141,   239,    -1,
      25,   242,   141,   239,    -1,    24,   242,   141,   239,    -1,
      -1,    82,   422,   241,   427,   240,   239,    -1,    -1,   170,
     424,   242,   425,   239,    -1,   425,   243,   426,    -1,   426,
      -1,   146,    -1,   427,   428,    -1,   428,    -1,   429,    -1,
     430,    -1,   423,    -1,     1,    -1,   227,   242,   141,   239,
      -1,   143,   242,   141,   239,    -1,    -1,    35,   432,   241,
     433,   240,   239,    -1,   433,   434,    -1,   434,    -1,   435,
      -1,   436,    -1,     1,    -1,    81,   242,   141,   239,    -1,
     143,   242,   141,   239,    -1,    -1,    50,   438,   241,   439,
     240,   239,    -1,   439,   440,    -1,   440,    -1,   441,    -1,
       1,    -1,    81,   242,   141,   239,    -1,    -1,    58,   443,
     241,   448,   240,   239,    -1,    -1,   170,   445,   242,   446,
     239,    -1,   446,   243,   447,    -1,   447,    -1,   146,    -1,
     448,   449,    -1,   449,    -1,   450,    -1,   451,    -1,   444,
      -1,     1,    -1,   112,   242,   141,   239,    -1,   143,   242,
     141,   239,    -1,    59,   241,   453,   240,   239,    -1,   453,
     454,    -1,   454,    -1,   461,    -1,   462,    -1,   464,    -1,
     465,    -1,   466,    -1,   467,    -1,   468,    -1,   469,    -1,
     470,    -1,   471,    -1,   460,    -1,   473,    -1,   474,    -1,
     475,    -1,   489,    -1,   476,    -1,   478,    -1,   480,    -1,
     479,    -1,   482,    -1,   477,    -1,   483,    -1,   484,    -1,
     485,    -1,   486,    -1,   488,    -1,   490,    -1,   487,    -1,
     504,    -1,   491,    -1,   495,    -1,   496,    -1,   500,    -1,
     481,    -1,   510,    -1,   508,    -1,   509,    -1,   492,    -1,
     463,    -1,   493,    -1,   494,    -1,   511,    -1,   499,    -1,
     472,    -1,   512,    -1,   497,    -1,   498,    -1,   457,    -1,
     459,    -1,   455,    -1,   456,    -1,   458,    -1,     1,    -1,
      65,   242,   123,   239,    -1,    66,   242,   123,   239,    -1,
      13,   242,   179,   239,    -1,   233,   242,   179,   239,    -1,
     167,   242,   179,   239,    -1,    83,   242,   123,   239,    -1,
      75,   242,   179,   239,    -1,    80,   242,   179,   239,    -1,
      41,   242,   179,   239,    -1,    51,   242,   179,   239,    -1,
       8,   242,   179,   239,    -1,   104,   242,   248,   239,    -1,
     103,   242,   123,   239,    -1,    97,   242,   123,   239,    -1,
       9,   242,   248,   239,    -1,   183,   242,   248,   239,    -1,
     182,   242,   248,   239,    -1,    69,   242,   123,   239,    -1,
      87,   242,   179,   239,    -1,    86,   242,   141,   239,    -1,
     238,   242,   179,   239,    -1,   177,   242,   179,   239,    -1,
     178,   242,   179,   239,    -1,   176,   242,   179,   239,    -1,
     176,   242,   180,   239,    -1,   175,   242,   179,   239,    -1,
     175,   242,   180,   239,    -1,   134,   242,   248,   239,    -1,
      20,   242,   248,   239,    -1,   135,   242,   248,   239,    -1,
     171,   242,   179,   239,    -1,   120,   242,   179,   239,    -1,
     222,   242,   179,   239,    -1,   130,   242,   179,   239,    -1,
     107,   242,   141,   239,    -1,    79,   242,   248,   239,    -1,
      43,   242,   123,   239,    -1,    96,   242,   123,   239,    -1,
     106,   242,   123,   239,    -1,   165,   242,   141,   239,    -1,
      31,   242,   141,   239,    -1,    27,   242,   123,   239,    -1,
     228,   242,   179,   239,    -1,    45,   242,   141,   239,    -1,
     138,   242,   179,   239,    -1,    38,   242,   179,   239,    -1,
     220,   242,   248,   239,    -1,    -1,   132,   501,   242,   502,
     239,    -1,   502,   243,   503,    -1,   503,    -1,   186,    -1,
     189,    -1,   191,    -1,   192,    -1,   195,    -1,   213,    -1,
     209,    -1,   211,    -1,   216,    -1,   214,    -1,   194,    -1,
     210,    -1,   212,    -1,   196,    -1,   219,    -1,   187,    -1,
     188,    -1,   199,    -1,    -1,   129,   505,   242,   506,   239,
      -1,   506,   243,   507,    -1,   507,    -1,   186,    -1,   189,
      -1,   191,    -1,   192,    -1,   195,    -1,   213,    -1,   209,
      -1,   211,    -1,   216,    -1,   214,    -1,   194,    -1,   210,
      -1,   212,    -1,   196,    -1,   219,    -1,   187,    -1,   188,
      -1,   199,    -1,   108,   242,   123,   239,    -1,   109,   242,
     123,   239,    -1,    32,   242,   123,   239,    -1,   190,   242,
     250,   239,    -1,    42,   242,   179,   239,    -1,    -1,    61,
     514,   241,   515,   240,   239,    -1,   515,   516,    -1,   516,
      -1,   517,    -1,   518,    -1,   519,    -1,   523,    -1,   524,
      -1,   525,    -1,     1,    -1,    47,   242,   179,   239,    -1,
      44,   242,   248,   239,    -1,    -1,    94,   520,   242,   521,
     239,    -1,   521,   243,   522,    -1,   522,    -1,   181,    -1,
      12,    -1,   227,   242,   141,   239,    -1,   112,   242,   141,
     239,    -1,    -1,     4,   526,   242,   527,   239,    -1,   527,
     243,   528,    -1,   528,    -1,   181,    -1,    12,    -1,    23,
     241,   530,   240,   239,    -1,   530,   531,    -1,   531,    -1,
     532,    -1,   533,    -1,   534,    -1,   535,    -1,   541,    -1,
     536,    -1,   537,    -1,   538,    -1,   539,    -1,   540,    -1,
     542,    -1,   543,    -1,   544,    -1,   545,    -1,   546,    -1,
       1,    -1,    40,   242,   179,   239,    -1,   229,   242,   179,
     239,    -1,   230,   242,   179,   239,    -1,   231,   242,   179,
     239,    -1,    88,   242,   248,   239,    -1,    89,   242,   248,
     239,    -1,   133,   242,   179,   239,    -1,    99,   242,   123,
     239,    -1,   142,   242,   179,   239,    -1,    98,   242,   123,
     239,    -1,    34,   242,   123,   239,    -1,    33,   242,   123,
     239,    -1,   118,   242,   179,   239,    -1,   119,   242,   179,
     239,    -1,    14,   242,   179,   239,    -1,   163,   241,   548,
     240,   239,    -1,   548,   549,    -1,   549,    -1,   550,    -1,
     551,    -1,   552,    -1,   554,    -1,   553,    -1,   555,    -1,
       1,    -1,    54,   242,   179,   239,    -1,    74,   242,   179,
     239,    -1,    92,   242,   248,   239,    -1,    70,   242,   179,
     239,    -1,    39,   242,   179,   239,    -1,    73,   242,   179,
     239,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   374,   374,   375,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   403,   403,   404,   408,
     412,   416,   420,   424,   430,   430,   431,   432,   433,   434,
     441,   444,   444,   445,   445,   445,   447,   464,   475,   478,
     479,   480,   480,   481,   481,   482,   482,   483,   484,   484,
     485,   485,   486,   488,   522,   582,   596,   614,   623,   637,
     646,   674,   704,   720,   770,   772,   772,   773,   773,   774,
     774,   776,   785,   794,   807,   809,   810,   812,   812,   813,
     813,   814,   814,   815,   815,   816,   818,   822,   826,   830,
     837,   844,   851,   855,   859,   863,   867,   871,   875,   881,
     891,   890,   983,   983,   984,   984,   985,   985,   985,   985,
     986,   986,   986,   987,   987,   987,   988,   988,   988,   989,
     989,   989,   990,   990,   991,   991,   993,  1005,  1017,  1036,
    1048,  1059,  1070,  1112,  1121,  1132,  1143,  1154,  1165,  1176,
    1187,  1198,  1209,  1220,  1231,  1243,  1242,  1246,  1246,  1247,
    1248,  1250,  1257,  1264,  1271,  1278,  1285,  1292,  1299,  1306,
    1313,  1320,  1327,  1334,  1341,  1348,  1355,  1369,  1368,  1388,
    1388,  1390,  1390,  1391,  1392,  1393,  1394,  1395,  1396,  1397,
    1398,  1399,  1400,  1402,  1448,  1494,  1500,  1506,  1512,  1518,
    1524,  1530,  1536,  1546,  1545,  1562,  1561,  1565,  1565,  1566,
    1570,  1576,  1576,  1577,  1577,  1577,  1577,  1577,  1579,  1581,
    1581,  1583,  1598,  1620,  1629,  1642,  1641,  1710,  1710,  1711,
    1711,  1711,  1711,  1712,  1712,  1713,  1713,  1713,  1714,  1714,
    1715,  1715,  1715,  1716,  1716,  1716,  1718,  1737,  1750,  1761,
    1770,  1782,  1781,  1785,  1785,  1786,  1787,  1789,  1797,  1804,
    1811,  1818,  1825,  1832,  1839,  1846,  1853,  1862,  1873,  1884,
    1895,  1906,  1917,  1929,  1948,  1958,  1967,  1983,  1982,  1998,
    1998,  1999,  1999,  1999,  1999,  2001,  2010,  2025,  2039,  2038,
    2054,  2054,  2055,  2055,  2055,  2055,  2057,  2066,  2075,  2074,
    2080,  2080,  2081,  2085,  2089,  2093,  2097,  2101,  2105,  2109,
    2113,  2117,  2121,  2131,  2130,  2147,  2147,  2148,  2148,  2148,
    2150,  2157,  2156,  2162,  2162,  2163,  2167,  2171,  2175,  2179,
    2183,  2187,  2191,  2195,  2199,  2203,  2213,  2212,  2362,  2362,
    2363,  2363,  2364,  2364,  2364,  2365,  2365,  2365,  2366,  2366,
    2366,  2367,  2367,  2367,  2368,  2368,  2368,  2369,  2369,  2370,
    2372,  2384,  2396,  2405,  2417,  2429,  2435,  2439,  2447,  2457,
    2456,  2460,  2460,  2461,  2462,  2464,  2471,  2482,  2489,  2496,
    2503,  2513,  2554,  2565,  2576,  2591,  2602,  2615,  2628,  2637,
    2673,  2672,  2744,  2743,  2747,  2747,  2748,  2754,  2754,  2755,
    2755,  2755,  2755,  2757,  2773,  2783,  2782,  2804,  2804,  2805,
    2805,  2805,  2807,  2816,  2829,  2828,  2849,  2849,  2850,  2850,
    2852,  2865,  2864,  2915,  2914,  2918,  2918,  2919,  2925,  2925,
    2926,  2926,  2926,  2926,  2928,  2934,  2943,  2946,  2946,  2947,
    2947,  2948,  2948,  2949,  2949,  2950,  2950,  2951,  2951,  2952,
    2952,  2953,  2954,  2954,  2955,  2955,  2956,  2956,  2957,  2957,
    2958,  2958,  2959,  2959,  2960,  2960,  2961,  2962,  2962,  2963,
    2963,  2964,  2965,  2965,  2966,  2966,  2967,  2967,  2968,  2969,
    2969,  2970,  2970,  2971,  2971,  2972,  2972,  2973,  2973,  2974,
    2974,  2975,  2979,  2985,  2991,  2997,  3002,  3007,  3013,  3019,
    3025,  3031,  3037,  3043,  3049,  3055,  3061,  3067,  3073,  3079,
    3090,  3096,  3105,  3111,  3117,  3123,  3127,  3133,  3137,  3143,
    3149,  3155,  3161,  3167,  3173,  3179,  3185,  3196,  3202,  3208,
    3214,  3220,  3229,  3261,  3279,  3285,  3294,  3300,  3305,  3312,
    3311,  3317,  3317,  3318,  3322,  3326,  3330,  3334,  3338,  3342,
    3346,  3350,  3354,  3358,  3362,  3366,  3370,  3374,  3378,  3382,
    3386,  3393,  3392,  3398,  3398,  3399,  3403,  3407,  3411,  3415,
    3419,  3423,  3427,  3431,  3435,  3439,  3443,  3447,  3451,  3455,
    3459,  3463,  3467,  3473,  3479,  3485,  3491,  3497,  3507,  3506,
    3532,  3532,  3533,  3534,  3535,  3536,  3537,  3538,  3539,  3541,
    3547,  3554,  3553,  3558,  3558,  3559,  3563,  3569,  3588,  3598,
    3597,  3640,  3640,  3641,  3645,  3654,  3657,  3657,  3658,  3659,
    3660,  3661,  3662,  3663,  3664,  3665,  3666,  3667,  3668,  3669,
    3670,  3671,  3672,  3673,  3675,  3681,  3687,  3693,  3699,  3705,
    3711,  3717,  3723,  3729,  3735,  3741,  3747,  3753,  3759,  3768,
    3771,  3771,  3772,  3772,  3773,  3774,  3775,  3776,  3777,  3779,
    3785,  3791,  3805,  3811,  3817
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
  "COMPRESSED", "COMPRESSION_LEVEL", "CONNECT", "CONNECTFREQ", "CRYPTLINK",
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
  "REDIRSERV", "REGEX_T", "REHASH", "REMOTE", "REMOTEBAN", "RESTRICTED",
  "RSA_PRIVATE_KEY_FILE", "RSA_PUBLIC_KEY_FILE", "SSL_CERTIFICATE_FILE",
  "RESV", "RESV_EXEMPT", "SECONDS", "MINUTES", "HOURS", "DAYS", "WEEKS",
  "SENDQ", "SEND_PASSWORD", "SERVERHIDE", "SERVERINFO", "SERVLINK_PATH",
  "IRCD_SID", "TKLINE_EXPIRE_NOTICES", "T_SHARED", "T_CLUSTER", "TYPE",
  "SHORT_MOTD", "SILENT", "SPOOF", "SPOOF_NOTICE", "STATS_I_OPER_ONLY",
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
  "logging_oper_log", "logging_gline_log", "logging_fuserlog",
  "logging_ffailed_operlog", "logging_foperlog", "logging_log_level",
  "logging_use_logging", "oper_entry", "@1", "oper_name_b", "oper_items",
  "oper_item", "oper_name", "oper_name_t", "oper_user", "oper_password",
  "oper_encrypted", "oper_hidden_admin", "oper_rsa_public_key_file",
  "oper_class", "oper_global_kill", "oper_remote", "oper_remoteban",
  "oper_kline", "oper_xline", "oper_unkline", "oper_gline",
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
  "connect_send_password", "connect_accept_password", "connect_port",
  "connect_aftype", "connect_fakename", "connect_flags", "@14",
  "connect_flags_items", "connect_flags_item", "connect_flags_item_atom",
  "connect_rsa_public_key_file", "connect_encrypted", "connect_cryptlink",
  "connect_compressed", "connect_auto", "connect_hub_mask",
  "connect_leaf_mask", "connect_class", "connect_cipher_preference",
  "kill_entry", "@15", "kill_type", "@16", "kill_type_items",
  "kill_type_item", "kill_items", "kill_item", "kill_user", "kill_reason",
  "deny_entry", "@17", "deny_items", "deny_item", "deny_ip", "deny_reason",
  "exempt_entry", "@18", "exempt_items", "exempt_item", "exempt_ip",
  "gecos_entry", "@19", "gecos_flags", "@20", "gecos_flags_items",
  "gecos_flags_item", "gecos_items", "gecos_item", "gecos_name",
  "gecos_reason", "general_entry", "general_items", "general_item",
  "general_gline_min_cidr", "general_gline_min_cidr6",
  "general_burst_away", "general_use_whois_actually",
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
  "@21", "umode_oitems", "umode_oitem", "general_oper_only_umodes", "@22",
  "umode_items", "umode_item", "general_min_nonwildcard",
  "general_min_nonwildcard_simple", "general_default_floodcount",
  "general_client_flood", "general_dot_in_ip6_addr", "gline_entry", "@23",
  "gline_items", "gline_item", "gline_enable", "gline_duration",
  "gline_logging", "@24", "gline_logging_types", "gline_logging_type_item",
  "gline_user", "gline_server", "gline_action", "@25", "gdeny_types",
  "gdeny_type_item", "channel_entry", "channel_items", "channel_item",
  "channel_disable_local_channels", "channel_use_except",
  "channel_use_invex", "channel_use_knock", "channel_knock_delay",
  "channel_knock_delay_channel", "channel_invite_ops_only",
  "channel_max_chans_per_user", "channel_quiet_on_ban", "channel_max_bans",
  "channel_default_split_user_count", "channel_default_split_server_count",
  "channel_no_create_on_split", "channel_no_join_on_split",
  "channel_burst_topicwho", "serverhide_entry", "serverhide_items",
  "serverhide_item", "serverhide_flatten_links", "serverhide_hide_servers",
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
     485,   486,   487,   488,   489,   490,   491,   492,   493,    59,
     125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   244,   245,   245,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   247,   247,   248,   248,
     248,   248,   248,   248,   249,   249,   250,   250,   250,   250,
     251,   252,   252,   253,   253,   253,   254,   255,   256,   257,
     257,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   271,   272,   272,   272,
     272,   273,   274,   275,   276,   277,   277,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   279,   280,   281,   282,
     283,   284,   285,   285,   285,   285,   285,   285,   285,   286,
     288,   287,   289,   289,   290,   290,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   312,   311,   313,   313,   314,
     314,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   317,   316,   318,
     318,   319,   319,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   332,   331,   334,   333,   335,   335,   336,
     336,   337,   337,   338,   338,   338,   338,   338,   339,   340,
     340,   341,   341,   342,   343,   345,   344,   346,   346,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   348,   349,   350,   351,
     352,   354,   353,   355,   355,   356,   356,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   369,   368,   370,
     370,   371,   371,   371,   371,   372,   373,   374,   376,   375,
     377,   377,   378,   378,   378,   378,   379,   380,   382,   381,
     383,   383,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   386,   385,   387,   387,   388,   388,   388,
     389,   391,   390,   392,   392,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   395,   394,   396,   396,
     397,   397,   398,   398,   398,   398,   398,   398,   398,   398,
     398,   398,   398,   398,   398,   398,   398,   398,   398,   398,
     399,   400,   401,   402,   403,   404,   405,   405,   406,   408,
     407,   409,   409,   410,   410,   411,   411,   411,   411,   411,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     422,   421,   424,   423,   425,   425,   426,   427,   427,   428,
     428,   428,   428,   429,   430,   432,   431,   433,   433,   434,
     434,   434,   435,   436,   438,   437,   439,   439,   440,   440,
     441,   443,   442,   445,   444,   446,   446,   447,   448,   448,
     449,   449,   449,   449,   450,   451,   452,   453,   453,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   478,   479,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   501,
     500,   502,   502,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   505,   504,   506,   506,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   508,   509,   510,   511,   512,   514,   513,
     515,   515,   516,   516,   516,   516,   516,   516,   516,   517,
     518,   520,   519,   521,   521,   522,   522,   523,   524,   526,
     525,   527,   527,   528,   528,   529,   530,   530,   531,   531,
     531,   531,   531,   531,   531,   531,   531,   531,   531,   531,
     531,   531,   531,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   548,   549,   549,   549,   549,   549,   549,   549,   550,
     551,   552,   553,   554,   555
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
       1,     1,     1,     1,     1,     2,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       0,     7,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     4,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     5,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     7,     0,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     1,     4,     4,     4,     4,     4,
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     1,     4,     4,     4,     4,     4,     4,     4,     0,
       5,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       0,     6,     0,     5,     3,     1,     1,     2,     1,     1,
       1,     1,     1,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     4,     4,     0,     6,     2,     1,     1,     1,
       4,     0,     6,     0,     5,     3,     1,     1,     2,     1,
       1,     1,     1,     1,     4,     4,     5,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     0,
       5,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     5,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     0,     6,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     0,     5,     3,     1,     1,     1,     4,     4,     0,
       5,     3,     1,     1,     1,     5,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     5,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       2,     0,     1,     0,     0,   225,     0,   177,   336,   405,
     414,   421,     0,   588,   390,   203,     0,     0,   110,   277,
       0,     0,   288,   313,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,     0,
     179,   338,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    79,    78,     0,   633,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   617,   618,   619,   620,   621,   623,
     624,   625,   626,   627,   622,   628,   629,   630,   631,   632,
     194,     0,   180,   361,     0,   339,     0,     0,     0,   491,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   561,     0,   539,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   438,   488,   489,   486,   490,   487,   449,
     439,   440,   477,   441,   442,   443,   444,   445,   446,   447,
     448,   482,   450,   451,   452,   454,   459,   455,   457,   456,
     472,   458,   460,   461,   462,   463,   466,   464,   453,   465,
     468,   476,   478,   479,   469,   470,   484,   485,   481,   471,
     467,   474,   475,   473,   480,   483,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,    88,    89,    92,    94,    93,    90,    91,     0,     0,
       0,     0,    42,    43,    44,   137,     0,   113,     0,   658,
       0,     0,     0,     0,     0,     0,     0,   651,   652,   653,
     654,   656,   655,   657,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,    61,    58,
      51,    60,    54,    55,    56,    52,    59,    57,    53,     0,
       0,    80,     0,     0,     0,     0,    75,     0,     0,     0,
       0,     0,   251,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   228,   229,   230,   239,   231,
     244,   232,   233,   234,   235,   242,   236,   237,   238,   240,
     241,   243,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   616,     0,
       0,   411,     0,     0,     0,   408,   409,   410,   419,     0,
       0,   417,   418,   433,     0,     0,   423,   432,     0,   429,
     430,   431,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   437,   598,   609,     0,     0,
     601,     0,     0,     0,   591,   592,   593,   594,   595,   596,
     597,   402,     0,   392,     0,   401,     0,   398,   399,   400,
       0,   205,     0,     0,     0,   214,     0,   212,   213,   215,
     216,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,    45,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,   280,   281,   282,   283,     0,     0,     0,
       0,     0,     0,     0,   650,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
       0,   298,     0,     0,   291,   292,   293,   294,     0,     0,
     321,     0,   316,   317,   318,     0,     0,     0,    74,   245,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   227,     0,     0,
       0,     0,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   615,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,     0,
       0,     0,     0,     0,     0,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   357,   354,   356,   355,   353,   350,
     351,   352,   358,     0,     0,     0,   407,     0,     0,   416,
       0,     0,     0,     0,   428,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
     436,     0,     0,     0,     0,     0,     0,     0,   590,     0,
       0,     0,     0,   397,   217,     0,     0,     0,     0,     0,
     211,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     0,     0,    40,     0,
       0,     0,     0,     0,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     115,   116,   117,   118,   132,   119,   133,   120,   121,   122,
     128,   123,   124,   125,   126,   127,   129,   130,   131,   134,
     284,     0,     0,     0,     0,   279,     0,     0,     0,     0,
       0,     0,   649,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,   295,     0,     0,     0,     0,
     290,   319,     0,     0,     0,   315,    83,    82,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   226,   648,   645,   644,   634,
      26,    26,    26,    26,    26,    28,    27,   638,   639,   643,
     641,   646,   647,   640,   642,   635,   636,   637,   192,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   181,
     359,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   340,
       0,     0,   406,     0,   415,     0,     0,     0,   422,   502,
     506,   494,   520,   533,   532,   585,   537,   500,   587,   528,
     535,   501,   492,   493,   509,   498,   527,   499,   497,   511,
     510,   529,   505,   504,   503,   530,   526,   583,   584,   523,
     565,   580,   581,   566,   567,   568,   575,   569,   578,   582,
     571,   576,   572,   577,   570,   574,   573,   579,     0,   564,
     525,   543,   558,   559,   544,   545,   546,   553,   547,   556,
     560,   549,   554,   550,   555,   548,   552,   551,   557,     0,
     542,   519,   521,   536,   531,   496,   522,   517,   518,   515,
     516,   513,   514,   508,   507,    34,    34,    34,    36,    35,
     586,   538,   524,   534,   495,   512,     0,     0,     0,     0,
       0,     0,   589,     0,     0,     0,   391,     0,     0,     0,
     221,     0,   220,   204,   100,   101,    99,    98,   102,   108,
     103,   107,   105,   106,   104,    97,    96,   109,    46,    47,
     135,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,     0,     0,     0,   278,   663,   659,   662,   664,
     660,   661,    67,    73,    65,    69,    68,    64,    63,    66,
      72,    70,    71,     0,     0,     0,   289,     0,     0,   314,
     270,   249,   250,   269,   261,   262,   258,   264,   260,   259,
     266,   263,     0,   265,   257,     0,   254,   256,   272,   268,
     267,   276,   271,   247,   275,   274,   273,   248,   246,    29,
      30,    31,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   178,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   337,   412,   413,   420,   434,   435,   427,     0,
     426,   562,     0,   540,     0,    37,    38,    39,   614,   613,
       0,   612,   600,   599,   606,   605,     0,   604,   608,   607,
     404,   396,     0,   395,   403,   210,   209,     0,   208,   224,
     223,     0,   218,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   111,   286,   287,   285,   296,   302,   308,
     312,   311,   310,   307,   303,   306,   309,   304,   305,     0,
     301,   297,   320,   325,   331,   335,   334,   333,   330,   326,
     329,   332,   327,   328,     0,   324,   255,   252,     0,   197,
     199,   201,   200,   198,   193,   196,   195,   202,   364,   366,
     367,   385,   389,   388,   384,   383,   382,   368,   378,   379,
     376,   377,   375,     0,   380,     0,   372,   374,   362,   386,
     387,   360,   365,   381,   363,   424,     0,   563,   541,   610,
       0,   602,     0,   393,     0,   206,     0,   222,   219,   154,
     143,   152,   140,   169,   167,   176,   166,   161,   170,   174,
     163,   171,     0,   173,   168,   162,   175,   172,   164,   165,
       0,   158,   160,   150,   144,   141,   147,   136,   151,   139,
     153,   145,   146,   142,   149,   138,   148,   299,     0,   322,
       0,   253,   373,   370,     0,   425,   611,   603,   394,   207,
     159,   156,     0,   300,   323,   371,   157
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     1,    24,   845,   846,   988,   989,    25,   251,   252,
     253,   254,    26,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,    27,    71,    72,    73,
      74,    75,    28,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,    29,    61,   256,   759,   760,   761,   257,
     762,   763,   764,   765,   766,   767,   768,   769,   770,   771,
     772,   773,   774,   775,   776,   777,   778,   779,  1035,  1310,
    1311,  1312,    30,    50,   111,   585,   586,   587,   112,   588,
     589,   590,   591,   592,   593,   594,   595,    31,    58,   465,
     715,  1177,  1178,   466,   467,   468,  1011,  1012,   469,   470,
      32,    48,   324,   325,   326,   327,   328,   329,   330,   331,
     544,  1095,  1096,  1097,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,    33,    62,   492,   493,   494,   495,
     496,    34,    65,   523,   524,   525,   526,   527,   807,  1219,
    1220,    35,    66,   531,   532,   533,   534,   813,  1234,  1235,
      36,    51,   114,   614,   615,   616,   115,   617,   618,   619,
     620,   621,   622,   623,   880,  1265,  1266,  1267,   624,   625,
     626,   627,   628,   629,   630,   631,   632,    37,    57,   455,
     710,  1172,  1173,   456,   457,   458,   459,    38,    52,   364,
     365,   366,   367,    39,    53,   370,   371,   372,    40,    54,
     377,   642,  1149,  1150,   378,   379,   380,   381,    41,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   415,   969,   970,
     220,   413,   948,   949,   221,   222,   223,   224,   225,    42,
      56,   443,   444,   445,   446,   447,   704,  1166,  1167,   448,
     449,   450,   701,  1160,  1161,    43,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    44,   266,   267,   268,   269,   270,   271,
     272,   273
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -924
static const short int yypact[] =
{
    -924,   701,  -924,  -139,  -237,  -924,  -232,  -924,  -924,  -924,
    -924,  -924,  -216,  -924,  -924,  -924,  -213,  -199,  -924,  -924,
    -196,  -193,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,   250,  -184,   589,
    -127,   -76,  -165,  -159,  -130,   422,  -108,  -106,   -93,   437,
     103,   -39,   -77,   363,   306,   -52,   -38,   -23,   -21,   -15,
     -10,    22,  -924,  -924,  -924,  -924,   632,  -924,    -4,    30,
      33,    35,    38,    51,    55,    71,    72,    74,    77,    78,
      79,    80,    86,   255,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,    23,  -924,  -924,    59,  -924,    10,     6,   159,  -924,
      89,    91,    93,    97,   109,   110,   115,   116,   118,   119,
     121,   124,   127,   134,   135,   143,   144,   145,   148,   150,
     152,   153,   158,   161,   163,   165,   166,   167,   168,   171,
     173,  -924,   177,  -924,   180,   198,   201,   204,   206,   208,
     209,   210,   214,   220,   224,   233,   235,   236,   238,   239,
     240,   241,     9,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,   367,    65,   256,   101,
     247,   248,   257,   261,   264,   265,   269,   270,   106,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,   162,   273,
     274,    42,  -924,  -924,  -924,  -924,   104,  -924,     7,  -924,
     275,   279,   280,   281,   282,   285,    54,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,   259,   291,   292,   293,   295,   296,
     297,   301,   302,   303,   304,   308,   164,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,    98,
       2,  -924,   102,   207,   369,   316,  -924,   323,   331,   332,
     335,   336,  -924,   339,   340,   342,   344,   346,   349,   353,
     359,   360,   365,   368,   205,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,   176,   324,   441,   430,   488,   488,   490,   491,
     438,   439,   445,   446,   447,   448,   452,   395,  -924,   467,
     785,  -924,   393,   394,    68,  -924,  -924,  -924,  -924,   396,
       4,  -924,  -924,  -924,   397,   399,  -924,  -924,    45,  -924,
    -924,  -924,   464,   488,   466,   488,   526,   510,   529,   475,
     477,   479,   536,   520,   483,   543,   544,   545,   503,   488,
     504,   561,   549,   507,   566,   569,   570,   488,   575,   558,
     580,   582,   539,   478,   540,   481,   488,   488,   542,   587,
     551,   553,   -70,   125,   554,   555,   488,   488,   614,   488,
     559,   560,   562,   563,   501,  -924,  -924,  -924,   502,   505,
    -924,   506,   508,   189,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,   512,  -924,   514,  -924,    34,  -924,  -924,  -924,
     518,  -924,   519,   523,   524,  -924,   141,  -924,  -924,  -924,
    -924,  -924,   602,   605,   608,   626,   469,   628,   629,   593,
     534,  -924,  -924,   634,   637,   546,  -924,   322,   564,   537,
     547,   556,    96,  -924,  -924,  -924,  -924,   603,   611,   613,
     620,   621,   488,   565,  -924,  -924,   652,   622,   661,   666,
     672,   673,   676,   682,   702,   683,   685,   590,  -924,   591,
     592,  -924,   594,    25,  -924,  -924,  -924,  -924,   596,   597,
    -924,    58,  -924,  -924,  -924,   601,   604,   606,  -924,  -924,
     653,   690,   662,   663,   607,   667,   669,   671,   675,   677,
     706,   728,   711,   717,   681,   721,   627,  -924,   635,   636,
     638,   639,   268,   640,   643,   644,   645,   648,   650,   651,
     656,   657,   659,   660,  -924,   664,   631,   658,   665,   670,
     674,   680,   688,   689,   692,    20,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,   678,   693,   694,   696,
     709,   710,   712,   713,   714,   715,  -924,   716,   718,   719,
     720,   727,   729,   730,   172,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,   740,   760,   679,  -924,   764,   684,  -924,
     765,   767,   736,   705,  -924,   742,   746,   747,   749,   750,
     751,   752,   753,   755,   756,   757,   766,   769,   770,   771,
     772,   773,   774,   775,   776,   777,   778,   779,   780,   781,
     782,   783,   784,   786,   787,   789,   754,   790,   788,   791,
     792,   793,   794,   795,   796,   797,   798,   799,   800,   801,
     802,   803,   804,    17,   805,   806,   807,   808,   809,   810,
    -924,   761,   488,   731,   811,   768,   818,   812,  -924,   852,
     813,   865,   815,  -924,  -924,   814,   883,   886,   745,   819,
    -924,   820,   821,   822,   823,   824,   825,   826,   827,   828,
     829,   830,   831,   832,   833,  -924,   834,   835,  -924,   836,
     837,   838,   839,   840,  -924,   841,   842,   843,   844,   845,
     846,   847,   848,   849,   850,   851,   853,   854,   855,    19,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,   909,   911,   916,   859,  -924,   860,   861,   862,   863,
     864,   866,  -924,   867,   868,   869,   870,   871,   872,   873,
     874,   875,   876,   877,  -924,  -924,   935,   878,   936,   879,
    -924,  -924,   937,   880,   882,  -924,  -924,  -924,  -924,   884,
     885,   887,   888,   642,   889,   890,   891,   892,   893,   894,
     895,   896,   897,   898,   899,  -924,  -924,  -924,  -924,  -924,
     488,   488,   488,   488,   488,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,   488,
     748,   971,   981,   994,   978,  1002,   488,   614,   900,  -924,
    -924,   999,   113,   732,  1000,  1001,   734,   964,   965,  1004,
     904,  1006,  1007,  1008,  1009,  1028,  1011,  1012,   915,  -924,
     917,   918,  -924,   919,  -924,   920,   921,  1015,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -227,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -224,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,   614,   614,   614,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,     1,   923,   924,    26,
     925,   926,  -924,   927,  1021,   929,  -924,   -64,   930,   931,
     735,  -212,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,   976,  1030,   993,   995,   933,   997,   998,  1003,  1005,
    1032,  1010,  1037,  1013,  1014,  1016,  1038,  1017,  1039,  1018,
     942,  -924,   944,   946,   947,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,   948,   668,   949,  -924,   951,   703,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,   759,  -924,  -924,  -166,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,   952,   955,   959,   960,   961,   962,
     963,   966,   967,  -924,   968,   969,   970,   972,   973,   974,
     975,   977,   979,   980,   354,   982,   983,   984,   985,   986,
     987,   988,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -145,
    -924,  -924,   754,  -924,   788,  -924,  -924,  -924,  -924,  -924,
    -113,  -924,  -924,  -924,  -924,  -924,   -85,  -924,  -924,  -924,
    -924,  -924,   -34,  -924,  -924,  -924,  -924,   -25,  -924,  -924,
    -924,  1080,  -924,   745,   989,   990,   991,   992,   499,   996,
    1019,  1020,  1022,  1023,  1024,  1025,  1026,  1027,  1029,  1031,
    1033,  1034,  1035,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,   -20,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,    27,  -924,  -924,  -924,   642,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,   550,  -924,    48,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  1015,  -924,  -924,  -924,
       1,  -924,    26,  -924,  1021,  -924,   -64,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,   548,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
      60,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,   668,  -924,
     703,  -924,  -924,  -924,   354,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,   499,  -924,  -924,  -924,  -924
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -924,  -924,  -924,  -128,  -346,  -923,  -426,  -924,  -924,   953,
    -924,  -924,  -924,  -924,   646,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  1139,  -924,
    -924,  -924,  -924,  -924,   686,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,   156,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -125,   -87,  -924,  -924,  -924,  -924,   647,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,   -66,  -924,   816,  -924,  -924,    50,  -924,  -924,
    -924,  -924,  -924,   910,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,    -2,   146,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,   758,  -924,  -924,
    -924,  -924,  -924,  -924,   722,  -924,  -924,  -924,  -924,  -924,
     -91,  -924,  -924,  -924,   708,  -924,  -924,  -924,  -924,   -90,
    -924,  -924,  -924,  -924,   630,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,   -92,   -22,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,   -41,  -924,   856,  -924,  -924,  -924,  -924,  -924,
     903,  -924,  -924,  -924,  -924,  -924,   881,  -924,  -924,  -924,
    -924,  -924,  -924,   -30,  -924,   901,  -924,  -924,  -924,  -924,
    1075,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,    94,
    -924,  -924,  -924,   100,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,   817,  -924,  -924,  -924,  -924,  -924,   -33,  -924,
    -924,  -924,  -924,  -924,   -27,  -924,  -924,  1161,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  1036,  -924,  -924,  -924,  -924,
    -924,  -924
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned short int yytable[] =
{
     563,   564,   694,   528,    47,   368,  1175,   368,   488,    49,
     119,   361,  1151,  1158,   110,  1153,  1152,   120,   121,  1154,
     739,   575,   122,    67,   740,    55,   519,  1182,    59,   123,
     489,  1183,   985,   986,   987,   451,   124,   646,  1164,   648,
     125,   126,    60,   248,   741,    63,   373,   127,    64,   576,
     128,   129,   130,   662,   131,   259,   742,    76,    68,   528,
     132,   670,  1155,  1156,  1157,   113,   451,   743,    69,   361,
     679,   680,   744,  1237,   133,   134,   116,  1238,   135,   745,
     691,   692,   117,   695,   136,   369,   746,   369,   137,   138,
     747,   362,   139,   260,  1275,   140,   141,   488,  1276,   519,
      45,    46,   255,   748,   248,   142,   143,   229,   261,   685,
     686,   118,   144,   145,   529,   146,   147,   148,   149,   489,
     577,   578,   579,   490,   262,   580,  1279,   263,   264,   150,
    1280,   749,   581,   226,    70,   227,   750,   520,   151,   152,
     693,   153,   460,   154,   155,   582,   265,   156,   228,   362,
     491,  1176,   249,   363,  1281,   751,   791,   374,  1282,   583,
     373,   230,   231,   232,   258,   274,   752,   753,   754,   233,
     529,   755,   530,   596,   157,   597,   158,   452,   598,   250,
     159,   584,  1159,   599,   160,   161,   162,   163,   375,   299,
     436,   164,   165,   437,   461,   521,   600,   601,   602,   166,
     275,   234,   603,   300,   453,  1283,   307,  1165,   452,  1284,
     520,   363,   490,   249,  1285,   376,   301,   462,  1286,  1327,
     604,   302,   463,  1328,   605,   606,   308,   303,   530,   167,
     309,   168,   304,   438,   235,   453,   439,   169,   342,   491,
     250,   276,   170,   535,   638,   756,   757,   171,   607,   434,
     608,    67,   522,   310,   311,   758,    77,   460,   312,  1050,
     868,   454,   305,   609,   359,   809,  1329,   313,   521,    78,
    1330,   374,   343,   314,   712,   344,   277,   345,   278,   279,
     346,   464,   485,   440,   610,   643,    68,  1333,    79,    80,
     315,  1334,   454,   347,   503,    81,    69,   348,   814,  1341,
     360,   441,   375,  1342,   687,   688,   236,   274,   635,   461,
    1125,  1126,   611,   349,   350,   280,   351,   281,   316,   352,
     353,   354,   355,   739,   612,   522,   317,   740,   356,   376,
     282,   382,   462,   383,   613,   384,   784,   463,   237,   385,
     471,   318,   275,    82,    83,   487,   480,   741,   536,   319,
     320,   386,   387,    84,    85,   558,   997,   388,   389,   742,
     390,   391,    70,   392,   259,  1258,   393,  1259,   436,   394,
     743,   437,   283,    86,    87,   744,   395,   396,   321,   322,
    1260,   719,   745,   276,  1261,   397,   398,   399,    88,   746,
     400,   562,   401,   747,   402,   403,   464,    89,   284,   285,
     404,   482,   260,   405,   517,   406,   748,   407,   408,   409,
     410,   438,   888,   411,   439,   412,   442,   261,   277,   414,
     278,   279,   416,   119,   840,   841,   842,   843,   844,   707,
     120,   121,   323,   262,   749,   122,   263,   264,   229,   750,
     417,  1122,   123,   418,  1262,   556,   419,   559,   420,   124,
     421,   422,   423,   125,   126,   265,   424,   280,   751,   281,
     127,   440,   425,   128,   129,   130,   426,   131,   575,   752,
     753,   754,   282,   132,   755,   427,  1263,   428,   429,   441,
     430,   431,   432,   433,    90,    91,    92,   133,   134,   472,
     473,   135,   230,   231,   232,   357,   576,   136,   505,   474,
     233,   137,   138,   475,  1293,   139,   476,   477,   140,   141,
     537,   478,   479,  1114,   283,   483,   484,   497,   142,   143,
    1121,   498,   499,   500,   501,   144,   145,   502,   146,   147,
     148,   149,   234,   506,   507,   508,  1294,   509,   510,   511,
     284,   285,   150,   512,   513,   514,   515,  1295,   756,   757,
     516,   151,   152,  1293,   153,   538,   154,   155,   758,  1296,
     156,  1258,   539,  1259,   560,   235,  1297,   577,   578,   579,
    1298,  1299,   580,   540,   541,  1264,  1260,   542,   543,   581,
    1261,   545,   546,  1300,   547,  1294,   548,   157,   549,   158,
      77,   550,   582,   159,   442,   551,  1295,   160,   161,   162,
     163,   552,   553,    78,   164,   165,   583,   554,  1296,   561,
     555,   562,   166,   565,   566,  1297,  1301,   567,   568,  1298,
    1299,  1302,    79,    80,   569,   570,   571,   572,   584,    81,
    1303,   573,  1300,   307,   574,   633,   634,   236,   637,   640,
    1262,   641,   167,   645,   168,   647,  1304,  1305,  1306,   649,
     169,   650,   651,   308,   652,   170,   653,   309,   654,   655,
     171,   656,   657,  1084,  1085,  1301,   658,   659,   660,   237,
     725,   726,   727,   728,   729,   730,   731,    82,    83,  1303,
     310,   311,   661,   663,   664,   312,   666,    84,    85,   667,
     665,  1086,   668,   669,   313,  1304,  1305,  1306,   671,   672,
     314,     2,     3,   673,  1087,   674,     4,    86,    87,  1307,
    1088,     5,  1109,  1110,  1111,  1112,  1113,   315,   675,   677,
     676,   681,    88,   678,     6,  1308,     7,  1089,   682,     8,
     683,    89,   684,   689,   690,  1309,     9,   693,   696,   697,
     700,   698,   699,   721,   702,   316,   722,   703,   705,   723,
     706,    10,  1208,   317,   709,  1090,   711,   714,  1307,    11,
      12,   716,    13,  1091,  1092,   717,   718,   724,   318,   732,
     733,  1264,   734,   735,  1308,   736,   319,   320,   737,   781,
    1084,  1085,   786,    14,  1309,   738,   596,  1223,   597,   782,
     787,   598,   788,   793,    15,    16,   599,  1093,   783,   789,
     790,   794,   795,   780,   792,   321,   322,   796,  1086,   600,
     601,   602,    17,   797,   798,   603,  1094,   799,    90,    91,
      92,  1087,  1209,   800,   802,   801,   803,  1088,    18,   804,
     805,   820,   819,   604,   806,   811,   808,   605,   606,   812,
     816,   821,   822,   817,  1089,   818,   824,   829,   825,   823,
     826,   830,   831,  1210,   827,    19,   828,  1224,   832,   323,
     833,   607,   834,   608,    20,    21,   835,  1211,  1010,    22,
      23,  1115,  1090,   859,   836,   837,   609,   838,   839,   847,
    1091,   890,   848,   849,   850,  1212,  1213,   851,  1225,   852,
     853,  1214,  1215,  1216,  1217,   854,   855,   610,   856,   857,
     860,   891,  1226,   858,  1218,   893,   895,   861,   896,  1000,
     998,  1127,   862,  1130,  1093,  1051,   863,   870,   892,  1181,
    1227,  1228,   864,   894,   481,   611,  1229,  1230,  1231,  1232,
     865,   866,   518,  1094,   867,   871,   872,   612,   873,  1233,
     930,   931,   932,   933,   898,   934,   935,   613,   936,   937,
     938,   874,   875,   939,   876,   877,   878,   879,   881,  1001,
     882,   883,   884,   940,   941,   942,   943,   944,   945,   885,
     946,   886,   887,   947,   951,   952,   953,   954,   897,   955,
     956,   899,   957,   958,   959,   900,   901,   960,   902,   903,
     904,   905,   906,  1003,   907,   908,   909,   961,   962,   963,
     964,   965,   966,   996,   967,   910,  1005,   968,   911,   912,
     913,   914,   915,   916,   917,   918,   919,   920,   921,   922,
     923,   924,   925,   926,  1008,   927,   928,  1009,   929,   950,
     971,   972,   973,   974,   975,   976,   977,   978,   979,   980,
     981,   982,   983,   984,   990,   991,   992,   993,   994,   995,
    1052,  1002,  1053,   999,  1006,  1004,  1007,  1054,  1013,  1014,
    1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,
    1025,  1026,  1027,  1028,  1029,  1030,  1073,  1075,  1077,  1031,
    1032,  1033,  1034,  1036,  1037,  1038,  1039,  1040,  1041,  1042,
    1043,  1044,  1045,  1046,  1116,  1047,  1048,  1049,  1055,  1056,
    1057,  1058,  1059,  1060,  1117,  1061,  1062,  1063,  1064,  1065,
    1066,  1067,  1068,  1069,  1070,  1071,  1072,  1118,  1076,  1119,
    1074,  1079,  1078,  1080,  1081,  1120,  1082,  1083,  1098,  1099,
    1100,  1101,  1102,  1103,  1104,  1105,  1106,  1107,  1108,  1123,
    1124,  1128,  1129,  1131,  1132,  1133,  1134,  1135,  1136,  1137,
    1138,  1139,  1140,  1141,  1142,  1184,  1143,  1144,  1145,  1146,
    1147,  1148,  1162,  1163,  1168,  1169,  1170,  1171,  1174,  1179,
    1180,  1185,  1186,  1193,  1187,  1188,  1189,  1190,  1195,  1199,
    1201,  1203,  1191,  1204,  1192,  1205,  1206,  1207,  1221,  1194,
    1222,  1239,  1196,  1197,  1240,  1198,  1200,  1202,  1241,  1242,
    1243,  1244,  1245,  1287,   486,  1246,  1247,  1248,  1249,  1250,
     306,  1251,  1252,  1253,  1254,  1340,  1255,  1346,  1256,  1257,
    1339,  1268,  1269,  1270,  1271,  1272,  1273,  1274,  1289,  1290,
    1291,  1292,   869,  1288,   557,  1313,  1331,  1343,  1236,   815,
    1344,  1332,  1345,  1338,   889,   810,  1335,   435,  1278,  1337,
     785,   639,  1277,  1336,   358,     0,     0,     0,  1314,  1315,
     708,  1316,  1317,  1318,  1319,  1320,  1321,   636,  1322,     0,
    1323,     0,  1324,  1325,  1326,     0,     0,     0,     0,   644,
       0,     0,   720,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   504,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   713
};

static const short int yycheck[] =
{
     346,   347,   428,     1,   241,     1,    70,     1,     1,   241,
       1,     1,   239,    12,   141,   239,   243,     8,     9,   243,
       1,     1,    13,     1,     5,   241,     1,   239,   241,    20,
      23,   243,    15,    16,    17,     1,    27,   383,    12,   385,
      31,    32,   241,     1,    25,   241,     1,    38,   241,    29,
      41,    42,    43,   399,    45,     1,    37,   241,    36,     1,
      51,   407,   985,   986,   987,   141,     1,    48,    46,     1,
     416,   417,    53,   239,    65,    66,   241,   243,    69,    60,
     426,   427,   241,   429,    75,    81,    67,    81,    79,    80,
      71,    81,    83,    39,   239,    86,    87,     1,   243,     1,
     239,   240,   141,    84,     1,    96,    97,     1,    54,   179,
     180,   241,   103,   104,   112,   106,   107,   108,   109,    23,
     100,   101,   102,   116,    70,   105,   239,    73,    74,   120,
     243,   112,   112,   241,   112,   241,   117,   112,   129,   130,
     123,   132,     1,   134,   135,   125,    92,   138,   241,    81,
     143,   215,   110,   143,   239,   136,   502,   112,   243,   139,
       1,    55,    56,    57,   241,     1,   147,   148,   149,    63,
     112,   152,   170,     1,   165,     3,   167,   143,     6,   137,
     171,   161,   181,    11,   175,   176,   177,   178,   143,   241,
       1,   182,   183,     4,    53,   170,    24,    25,    26,   190,
      36,    95,    30,   241,   170,   239,     1,   181,   143,   243,
     112,   143,   116,   110,   239,   170,   239,    76,   243,   239,
      48,   242,    81,   243,    52,    53,    21,   242,   170,   220,
      25,   222,   242,    44,   128,   170,    47,   228,   242,   143,
     137,    77,   233,   141,   240,   226,   227,   238,    76,   240,
      78,     1,   227,    48,    49,   236,     1,     1,    53,   240,
     240,   227,   240,    91,   241,   240,   239,    62,   170,    14,
     243,   112,   242,    68,   240,   242,   112,   242,   114,   115,
     242,   140,   240,    94,   112,   240,    36,   239,    33,    34,
      85,   243,   227,   242,   240,    40,    46,   242,   240,   239,
     241,   112,   143,   243,   179,   180,   200,     1,   240,    53,
     197,   198,   140,   242,   242,   151,   242,   153,   113,   242,
     242,   242,   242,     1,   152,   227,   121,     5,   242,   170,
     166,   242,    76,   242,   162,   242,   240,    81,   232,   242,
     239,   136,    36,    88,    89,   241,   240,    25,   141,   144,
     145,   242,   242,    98,    99,   179,   702,   242,   242,    37,
     242,   242,   112,   242,     1,    11,   242,    13,     1,   242,
      48,     4,   208,   118,   119,    53,   242,   242,   173,   174,
      26,   240,    60,    77,    30,   242,   242,   242,   133,    67,
     242,   123,   242,    71,   242,   242,   140,   142,   234,   235,
     242,   239,    39,   242,   240,   242,    84,   242,   242,   242,
     242,    44,   240,   242,    47,   242,   227,    54,   112,   242,
     114,   115,   242,     1,   156,   157,   158,   159,   160,   240,
       8,     9,   227,    70,   112,    13,    73,    74,     1,   117,
     242,   867,    20,   242,    90,   240,   242,   123,   242,    27,
     242,   242,   242,    31,    32,    92,   242,   151,   136,   153,
      38,    94,   242,    41,    42,    43,   242,    45,     1,   147,
     148,   149,   166,    51,   152,   242,   122,   242,   242,   112,
     242,   242,   242,   242,   229,   230,   231,    65,    66,   242,
     242,    69,    55,    56,    57,   240,    29,    75,   239,   242,
      63,    79,    80,   242,     5,    83,   242,   242,    86,    87,
     141,   242,   242,   859,   208,   242,   242,   242,    96,    97,
     866,   242,   242,   242,   242,   103,   104,   242,   106,   107,
     108,   109,    95,   242,   242,   242,    37,   242,   242,   242,
     234,   235,   120,   242,   242,   242,   242,    48,   226,   227,
     242,   129,   130,     5,   132,   239,   134,   135,   236,    60,
     138,    11,   239,    13,   123,   128,    67,   100,   101,   102,
      71,    72,   105,   242,   242,   221,    26,   242,   242,   112,
      30,   242,   242,    84,   242,    37,   242,   165,   242,   167,
       1,   242,   125,   171,   227,   242,    48,   175,   176,   177,
     178,   242,   242,    14,   182,   183,   139,   242,    60,   179,
     242,   123,   190,   123,   123,    67,   117,   179,   179,    71,
      72,   122,    33,    34,   179,   179,   179,   179,   161,    40,
     131,   179,    84,     1,   239,   242,   242,   200,   242,   242,
      90,   242,   220,   179,   222,   179,   147,   148,   149,   123,
     228,   141,   123,    21,   179,   233,   179,    25,   179,   123,
     238,   141,   179,    21,    22,   117,   123,   123,   123,   232,
     201,   202,   203,   204,   205,   206,   207,    88,    89,   131,
      48,    49,   179,   179,   123,    53,   179,    98,    99,   123,
     141,    49,   123,   123,    62,   147,   148,   149,   123,   141,
      68,     0,     1,   123,    62,   123,     5,   118,   119,   210,
      68,    10,   840,   841,   842,   843,   844,    85,   179,   179,
     242,   179,   133,   242,    23,   226,    25,    85,   141,    28,
     179,   142,   179,   179,   179,   236,    35,   123,   179,   179,
     239,   179,   179,   141,   242,   113,   141,   242,   242,   141,
     242,    50,    84,   121,   242,   113,   242,   239,   210,    58,
      59,   242,    61,   121,   122,   242,   242,   141,   136,   141,
     141,   221,   179,   239,   226,   141,   144,   145,   141,   242,
      21,    22,   179,    82,   236,   239,     1,    84,     3,   242,
     179,     6,   179,   141,    93,    94,    11,   155,   242,   179,
     179,   179,   141,   239,   239,   173,   174,   141,    49,    24,
      25,    26,   111,   141,   141,    30,   174,   141,   229,   230,
     231,    62,   154,   141,   141,   123,   141,    68,   127,   239,
     239,   141,   179,    48,   242,   239,   242,    52,    53,   242,
     239,   179,   179,   239,    85,   239,   179,   141,   179,   242,
     179,   123,   141,   185,   179,   154,   179,   154,   141,   227,
     179,    76,   141,    78,   163,   164,   239,   199,   123,   168,
     169,   123,   113,   242,   239,   239,    91,   239,   239,   239,
     121,   141,   239,   239,   239,   217,   218,   239,   185,   239,
     239,   223,   224,   225,   226,   239,   239,   112,   239,   239,
     242,   141,   199,   239,   236,   141,   141,   242,   141,   141,
     179,   179,   242,   179,   155,   759,   242,   239,   239,   184,
     217,   218,   242,   239,   238,   140,   223,   224,   225,   226,
     242,   242,   286,   174,   242,   242,   242,   152,   242,   236,
     186,   187,   188,   189,   239,   191,   192,   162,   194,   195,
     196,   242,   242,   199,   242,   242,   242,   242,   242,   141,
     242,   242,   242,   209,   210,   211,   212,   213,   214,   242,
     216,   242,   242,   219,   186,   187,   188,   189,   242,   191,
     192,   239,   194,   195,   196,   239,   239,   199,   239,   239,
     239,   239,   239,   141,   239,   239,   239,   209,   210,   211,
     212,   213,   214,   242,   216,   239,   141,   219,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   141,   239,   239,   141,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     141,   239,   141,   242,   239,   242,   242,   141,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   141,   141,   141,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   123,   242,   242,   242,   239,   239,
     239,   239,   239,   239,   123,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   123,   239,   141,
     242,   239,   242,   239,   239,   123,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     141,   141,   141,   179,   179,   141,   242,   141,   141,   141,
     141,   123,   141,   141,   239,   179,   239,   239,   239,   239,
     239,   146,   239,   239,   239,   239,   239,   146,   239,   239,
     239,   141,   179,   141,   179,   242,   179,   179,   141,   141,
     141,   239,   179,   239,   179,   239,   239,   239,   239,   179,
     239,   239,   179,   179,   239,   179,   179,   179,   239,   239,
     239,   239,   239,   123,   251,   239,   239,   239,   239,   239,
      71,   239,   239,   239,   239,  1302,   239,  1342,   239,   239,
    1286,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   585,  1183,   324,   239,  1238,  1328,  1092,   531,
    1330,  1263,  1334,  1284,   614,   523,  1276,   172,  1154,  1282,
     492,   370,  1152,  1280,    93,    -1,    -1,    -1,   239,   239,
     443,   239,   239,   239,   239,   239,   239,   364,   239,    -1,
     239,    -1,   239,   239,   239,    -1,    -1,    -1,    -1,   378,
      -1,    -1,   466,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   456
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   245,     0,     1,     5,    10,    23,    25,    28,    35,
      50,    58,    59,    61,    82,    93,    94,   111,   127,   154,
     163,   164,   168,   169,   246,   251,   256,   270,   276,   287,
     316,   331,   344,   368,   375,   385,   394,   421,   431,   437,
     442,   452,   513,   529,   547,   239,   240,   241,   345,   241,
     317,   395,   432,   438,   443,   241,   514,   422,   332,   241,
     241,   288,   369,   241,   241,   376,   386,     1,    36,    46,
     112,   271,   272,   273,   274,   275,   241,     1,    14,    33,
      34,    40,    88,    89,    98,    99,   118,   119,   133,   142,
     229,   230,   231,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     141,   318,   322,   141,   396,   400,   241,   241,   241,     1,
       8,     9,    13,    20,    27,    31,    32,    38,    41,    42,
      43,    45,    51,    65,    66,    69,    75,    79,    80,    83,
      86,    87,    96,    97,   103,   104,   106,   107,   108,   109,
     120,   129,   130,   132,   134,   135,   138,   165,   167,   171,
     175,   176,   177,   178,   182,   183,   190,   220,   222,   228,
     233,   238,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     504,   508,   509,   510,   511,   512,   241,   241,   241,     1,
      55,    56,    57,    63,    95,   128,   200,   232,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,     1,   110,
     137,   252,   253,   254,   255,   141,   289,   293,   241,     1,
      39,    54,    70,    73,    74,    92,   548,   549,   550,   551,
     552,   553,   554,   555,     1,    36,    77,   112,   114,   115,
     151,   153,   166,   208,   234,   235,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   241,
     241,   239,   242,   242,   242,   240,   272,     1,    21,    25,
      48,    49,    53,    62,    68,    85,   113,   121,   136,   144,
     145,   173,   174,   227,   346,   347,   348,   349,   350,   351,
     352,   353,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   240,   531,   241,
     241,     1,    81,   143,   433,   434,   435,   436,     1,    81,
     439,   440,   441,     1,   112,   143,   170,   444,   448,   449,
     450,   451,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   505,   242,   501,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   240,   454,     1,     4,    44,    47,
      94,   112,   227,   515,   516,   517,   518,   519,   523,   524,
     525,     1,   143,   170,   227,   423,   427,   428,   429,   430,
       1,    53,    76,    81,   140,   333,   337,   338,   339,   342,
     343,   239,   242,   242,   242,   242,   242,   242,   242,   242,
     240,   278,   239,   242,   242,   240,   253,   241,     1,    23,
     116,   143,   370,   371,   372,   373,   374,   242,   242,   242,
     242,   242,   242,   240,   549,   239,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   240,   258,     1,
     112,   170,   227,   377,   378,   379,   380,   381,     1,   112,
     170,   387,   388,   389,   390,   141,   141,   141,   239,   239,
     242,   242,   242,   242,   354,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   240,   347,   179,   123,
     123,   179,   123,   248,   248,   123,   123,   179,   179,   179,
     179,   179,   179,   179,   239,     1,    29,   100,   101,   102,
     105,   112,   125,   139,   161,   319,   320,   321,   323,   324,
     325,   326,   327,   328,   329,   330,     1,     3,     6,    11,
      24,    25,    26,    30,    48,    52,    53,    76,    78,    91,
     112,   140,   152,   162,   397,   398,   399,   401,   402,   403,
     404,   405,   406,   407,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   242,   242,   240,   434,   242,   240,   440,
     242,   242,   445,   240,   449,   179,   248,   179,   248,   123,
     141,   123,   179,   179,   179,   123,   141,   179,   123,   123,
     123,   179,   248,   179,   123,   141,   179,   123,   123,   123,
     248,   123,   141,   123,   123,   179,   242,   179,   242,   248,
     248,   179,   141,   179,   179,   179,   180,   179,   180,   179,
     179,   248,   248,   123,   250,   248,   179,   179,   179,   179,
     239,   526,   242,   242,   520,   242,   242,   240,   516,   242,
     424,   242,   240,   428,   239,   334,   242,   242,   242,   240,
     338,   141,   141,   141,   141,   201,   202,   203,   204,   205,
     206,   207,   141,   141,   179,   239,   141,   141,   239,     1,
       5,    25,    37,    48,    53,    60,    67,    71,    84,   112,
     117,   136,   147,   148,   149,   152,   226,   227,   236,   290,
     291,   292,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     239,   242,   242,   242,   240,   371,   179,   179,   179,   179,
     179,   248,   239,   141,   179,   141,   141,   141,   141,   141,
     141,   123,   141,   141,   239,   239,   242,   382,   242,   240,
     378,   239,   242,   391,   240,   388,   239,   239,   239,   179,
     141,   179,   179,   242,   179,   179,   179,   179,   179,   141,
     123,   141,   141,   179,   141,   239,   239,   239,   239,   239,
     156,   157,   158,   159,   160,   247,   248,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   240,   320,
     239,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     408,   242,   242,   242,   242,   242,   242,   242,   240,   398,
     141,   141,   239,   141,   239,   141,   141,   242,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     186,   187,   188,   189,   191,   192,   194,   195,   196,   199,
     209,   210,   211,   212,   213,   214,   216,   219,   506,   507,
     239,   186,   187,   188,   189,   191,   192,   194,   195,   196,
     199,   209,   210,   211,   212,   213,   214,   216,   219,   502,
     503,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,    15,    16,    17,   249,   250,
     239,   239,   239,   239,   239,   239,   242,   248,   179,   242,
     141,   141,   239,   141,   242,   141,   239,   242,   141,   141,
     123,   340,   341,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   242,   242,   242,   242,   312,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     240,   291,   141,   141,   141,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   141,   242,   141,   239,   141,   242,   239,
     239,   239,   239,   239,    21,    22,    49,    62,    68,    85,
     113,   121,   122,   155,   174,   355,   356,   357,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   247,
     247,   247,   247,   247,   248,   123,   123,   123,   123,   141,
     123,   248,   250,   239,   141,   197,   198,   179,   141,   141,
     179,   179,   179,   141,   242,   141,   141,   141,   141,   123,
     141,   141,   239,   239,   239,   239,   239,   239,   146,   446,
     447,   239,   243,   239,   243,   249,   249,   249,    12,   181,
     527,   528,   239,   239,    12,   181,   521,   522,   239,   239,
     239,   146,   425,   426,   239,    70,   215,   335,   336,   239,
     239,   184,   239,   243,   179,   141,   179,   179,   242,   179,
     179,   179,   179,   141,   179,   141,   179,   179,   179,   141,
     179,   141,   179,   239,   239,   239,   239,   239,    84,   154,
     185,   199,   217,   218,   223,   224,   225,   226,   236,   383,
     384,   239,   239,    84,   154,   185,   199,   217,   218,   223,
     224,   225,   226,   236,   392,   393,   357,   239,   243,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,    11,    13,
      26,    30,    90,   122,   221,   409,   410,   411,   239,   239,
     239,   239,   239,   239,   239,   239,   243,   507,   503,   239,
     243,   239,   243,   239,   243,   239,   243,   123,   341,   239,
     239,   239,   239,     5,    37,    48,    60,    67,    71,    72,
      84,   117,   122,   131,   147,   148,   149,   210,   226,   236,
     313,   314,   315,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   243,   239,
     243,   356,   411,   239,   243,   447,   528,   522,   426,   336,
     315,   239,   243,   384,   393,   410,   314
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
#line 403 "ircd_parser.y"
    { (yyval.number) = 0; }
    break;

  case 28:
#line 405 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number);
		}
    break;

  case 29:
#line 409 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number);
		}
    break;

  case 30:
#line 413 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number);
		}
    break;

  case 31:
#line 417 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number);
		}
    break;

  case 32:
#line 421 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number);
		}
    break;

  case 33:
#line 425 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number);
		}
    break;

  case 34:
#line 430 "ircd_parser.y"
    { (yyval.number) = 0; }
    break;

  case 36:
#line 431 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
    break;

  case 37:
#line 432 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
    break;

  case 38:
#line 433 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
    break;

  case 39:
#line 434 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
    break;

  case 46:
#line 448 "ircd_parser.y"
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
#line 465 "ircd_parser.y"
    {
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
}
    break;

  case 63:
#line 489 "ircd_parser.y"
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
#line 523 "ircd_parser.y"
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
#line 583 "ircd_parser.y"
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
#line 597 "ircd_parser.y"
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
#line 615 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.description);
    DupString(ServerInfo.description,yylval.string);
  }
}
    break;

  case 68:
#line 624 "ircd_parser.y"
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
#line 638 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.network_desc);
    DupString(ServerInfo.network_desc, yylval.string);
  }
}
    break;

  case 70:
#line 647 "ircd_parser.y"
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
#line 675 "ircd_parser.y"
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
#line 705 "ircd_parser.y"
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
#line 721 "ircd_parser.y"
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
#line 777 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.name);
    DupString(AdminInfo.name, yylval.string);
  }
}
    break;

  case 82:
#line 786 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.email);
    DupString(AdminInfo.email, yylval.string);
  }
}
    break;

  case 83:
#line 795 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.description);
    DupString(AdminInfo.description, yylval.string);
  }
}
    break;

  case 96:
#line 819 "ircd_parser.y"
    {
                        }
    break;

  case 97:
#line 823 "ircd_parser.y"
    {
                        }
    break;

  case 98:
#line 827 "ircd_parser.y"
    {
                        }
    break;

  case 99:
#line 831 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
}
    break;

  case 100:
#line 838 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
}
    break;

  case 101:
#line 845 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
}
    break;

  case 102:
#line 852 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
}
    break;

  case 103:
#line 856 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
}
    break;

  case 104:
#line 860 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
}
    break;

  case 105:
#line 864 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
}
    break;

  case 106:
#line 868 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
}
    break;

  case 107:
#line 872 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
}
    break;

  case 108:
#line 876 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
}
    break;

  case 109:
#line 882 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 110:
#line 891 "ircd_parser.y"
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
#line 903 "ircd_parser.y"
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
    if (strlen(yylval.string) > OPERNICKLEN)
      yylval.string[OPERNICKLEN] = '\0';

    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 138:
#line 1018 "ircd_parser.y"
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

  case 139:
#line 1037 "ircd_parser.y"
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

  case 140:
#line 1049 "ircd_parser.y"
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

  case 141:
#line 1060 "ircd_parser.y"
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

  case 142:
#line 1071 "ircd_parser.y"
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

  case 143:
#line 1113 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 144:
#line 1122 "ircd_parser.y"
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

  case 145:
#line 1133 "ircd_parser.y"
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

  case 146:
#line 1144 "ircd_parser.y"
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

  case 147:
#line 1155 "ircd_parser.y"
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

  case 148:
#line 1166 "ircd_parser.y"
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

  case 149:
#line 1177 "ircd_parser.y"
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

  case 150:
#line 1188 "ircd_parser.y"
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

  case 151:
#line 1199 "ircd_parser.y"
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

  case 152:
#line 1210 "ircd_parser.y"
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

  case 153:
#line 1221 "ircd_parser.y"
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

  case 154:
#line 1232 "ircd_parser.y"
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

  case 155:
#line 1243 "ircd_parser.y"
    {
}
    break;

  case 159:
#line 1247 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 160:
#line 1248 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 161:
#line 1251 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 162:
#line 1258 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 163:
#line 1265 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 164:
#line 1272 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 165:
#line 1279 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 166:
#line 1286 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 167:
#line 1293 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 168:
#line 1300 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 169:
#line 1307 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 170:
#line 1314 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 171:
#line 1321 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 172:
#line 1328 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 173:
#line 1335 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 174:
#line 1342 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 175:
#line 1349 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 176:
#line 1356 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) ClearConfEncrypted(yy_aconf);
    else SetConfEncrypted(yy_aconf);
  }
}
    break;

  case 177:
#line 1369 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = (struct ClassItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 178:
#line 1376 "ircd_parser.y"
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

  case 193:
#line 1403 "ircd_parser.y"
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

  case 194:
#line 1449 "ircd_parser.y"
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

  case 195:
#line 1495 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 196:
#line 1501 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = (yyvsp[-1].number);
}
    break;

  case 197:
#line 1507 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 198:
#line 1513 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 199:
#line 1519 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 200:
#line 1525 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 201:
#line 1531 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = (yyvsp[-1].number);
}
    break;

  case 202:
#line 1537 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 203:
#line 1546 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    listener_address = NULL;
    listener_flags = 0;
  }
}
    break;

  case 204:
#line 1553 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 205:
#line 1562 "ircd_parser.y"
    {
}
    break;

  case 209:
#line 1567 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_SSL;
}
    break;

  case 210:
#line 1571 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_HIDDEN;
}
    break;

  case 221:
#line 1584 "ircd_parser.y"
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

  case 222:
#line 1599 "ircd_parser.y"
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

  case 223:
#line 1621 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 224:
#line 1630 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 225:
#line 1642 "ircd_parser.y"
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

  case 226:
#line 1654 "ircd_parser.y"
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

  case 246:
#line 1719 "ircd_parser.y"
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

  case 247:
#line 1738 "ircd_parser.y"
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

  case 248:
#line 1751 "ircd_parser.y"
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

  case 249:
#line 1762 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 250:
#line 1771 "ircd_parser.y"
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

  case 251:
#line 1782 "ircd_parser.y"
    {
}
    break;

  case 255:
#line 1786 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 256:
#line 1787 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 257:
#line 1790 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 258:
#line 1798 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 259:
#line 1805 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 260:
#line 1812 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 261:
#line 1819 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 262:
#line 1826 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 263:
#line 1833 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 264:
#line 1840 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 265:
#line 1847 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 266:
#line 1854 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 267:
#line 1863 "ircd_parser.y"
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

  case 268:
#line 1874 "ircd_parser.y"
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

  case 269:
#line 1885 "ircd_parser.y"
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

  case 270:
#line 1896 "ircd_parser.y"
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

  case 271:
#line 1907 "ircd_parser.y"
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

  case 272:
#line 1918 "ircd_parser.y"
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

  case 273:
#line 1930 "ircd_parser.y"
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

  case 274:
#line 1949 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 275:
#line 1959 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = (yyvsp[-1].number);
  }
}
    break;

  case 276:
#line 1968 "ircd_parser.y"
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

  case 277:
#line 1983 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 278:
#line 1990 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 285:
#line 2002 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 286:
#line 2011 "ircd_parser.y"
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

  case 287:
#line 2026 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char def_reason[] = "No reason";

    create_nick_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
  }
}
    break;

  case 288:
#line 2039 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(ULINE_TYPE);
    yy_match_item = map_to_conf(yy_conf);
    yy_match_item->action = SHARED_ALL;
  }
}
    break;

  case 289:
#line 2047 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 296:
#line 2058 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 297:
#line 2067 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    split_nuh(yylval.string, NULL, &yy_match_item->user, &yy_match_item->host);
  }
}
    break;

  case 298:
#line 2075 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 302:
#line 2082 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 303:
#line 2086 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TKLINE;
}
    break;

  case 304:
#line 2090 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 305:
#line 2094 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 306:
#line 2098 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TXLINE;
}
    break;

  case 307:
#line 2102 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 308:
#line 2106 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 309:
#line 2110 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TRESV;
}
    break;

  case 310:
#line 2114 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 311:
#line 2118 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_LOCOPS;
}
    break;

  case 312:
#line 2122 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 313:
#line 2131 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_conf->flags = SHARED_ALL;
  }
}
    break;

  case 314:
#line 2138 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_conf->name == NULL)
      DupString(yy_conf->name, "*");
    yy_conf = NULL;
  }
}
    break;

  case 320:
#line 2151 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 321:
#line 2157 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = 0;
}
    break;

  case 325:
#line 2164 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_KLINE;
}
    break;

  case 326:
#line 2168 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TKLINE;
}
    break;

  case 327:
#line 2172 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNKLINE;
}
    break;

  case 328:
#line 2176 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_XLINE;
}
    break;

  case 329:
#line 2180 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TXLINE;
}
    break;

  case 330:
#line 2184 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNXLINE;
}
    break;

  case 331:
#line 2188 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_RESV;
}
    break;

  case 332:
#line 2192 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TRESV;
}
    break;

  case 333:
#line 2196 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNRESV;
}
    break;

  case 334:
#line 2200 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_LOCOPS;
}
    break;

  case 335:
#line 2204 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = SHARED_ALL;
}
    break;

  case 336:
#line 2213 "ircd_parser.y"
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

  case 337:
#line 2231 "ircd_parser.y"
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

  case 360:
#line 2373 "ircd_parser.y"
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

  case 361:
#line 2385 "ircd_parser.y"
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

  case 362:
#line 2397 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 363:
#line 2406 "ircd_parser.y"
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

  case 364:
#line 2418 "ircd_parser.y"
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

  case 365:
#line 2430 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = (yyvsp[-1].number);
}
    break;

  case 366:
#line 2436 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 367:
#line 2440 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 368:
#line 2448 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 369:
#line 2457 "ircd_parser.y"
    {
}
    break;

  case 373:
#line 2461 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 374:
#line 2462 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 375:
#line 2465 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfLazyLink(yy_aconf);
    else SetConfLazyLink(yy_aconf);
  }
}
    break;

  case 376:
#line 2472 "ircd_parser.y"
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

  case 377:
#line 2483 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfCryptLink(yy_aconf);
    else SetConfCryptLink(yy_aconf);
  }
}
    break;

  case 378:
#line 2490 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAllowAutoConn(yy_aconf);
    else SetConfAllowAutoConn(yy_aconf);
  }
}
    break;

  case 379:
#line 2497 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAwayBurst(yy_aconf);
    else SetConfAwayBurst(yy_aconf);
  }
}
    break;

  case 380:
#line 2504 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfTopicBurst(yy_aconf);
    else SetConfTopicBurst(yy_aconf);
  }
}
    break;

  case 381:
#line 2514 "ircd_parser.y"
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

  case 382:
#line 2555 "ircd_parser.y"
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

  case 383:
#line 2566 "ircd_parser.y"
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

  case 384:
#line 2577 "ircd_parser.y"
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

  case 385:
#line 2592 "ircd_parser.y"
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

  case 386:
#line 2603 "ircd_parser.y"
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

  case 387:
#line 2616 "ircd_parser.y"
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

  case 388:
#line 2629 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 389:
#line 2638 "ircd_parser.y"
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

  case 390:
#line 2673 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    userbuf[0] = hostbuf[0] = reasonbuf[0] = '\0';
    regex_ban = 0;
  }
}
    break;

  case 391:
#line 2680 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (userbuf[0] && hostbuf[0])
    {
      if (regex_ban)
      {
#ifdef HAVE_REGEX_H
        int ecode = 0;
        regex_t *exp_user = MyMalloc(sizeof(regex_t));
        regex_t *exp_host = MyMalloc(sizeof(regex_t));

        if ((ecode = regcomp(exp_user, userbuf, REG_EXTENDED|REG_ICASE|REG_NOSUB)) ||
            (ecode = regcomp(exp_host, hostbuf, REG_EXTENDED|REG_ICASE|REG_NOSUB)))
        {
          char errbuf[IRCD_BUFSIZE];

          regerror(ecode, NULL, errbuf, sizeof(errbuf));

          MyFree(exp_user);
          MyFree(exp_host);
          ilog(L_ERROR, "Failed to add regular expression based K-Line: %s", errbuf);
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
#else
        yyerror("Your system doesn't support regex");
#endif
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

  case 392:
#line 2744 "ircd_parser.y"
    {
}
    break;

  case 396:
#line 2749 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 403:
#line 2758 "ircd_parser.y"
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

  case 404:
#line 2774 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 405:
#line 2783 "ircd_parser.y"
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

  case 406:
#line 2792 "ircd_parser.y"
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

  case 412:
#line 2808 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 413:
#line 2817 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 414:
#line 2829 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(EXEMPTDLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    DupString(yy_aconf->passwd, "*");
  }
}
    break;

  case 415:
#line 2837 "ircd_parser.y"
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

  case 420:
#line 2853 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 421:
#line 2865 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    regex_ban = 0;
    reasonbuf[0] = gecos_name[0] = '\0';
  }
}
    break;

  case 422:
#line 2872 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (gecos_name[0])
    {
      int ecode = 0;

      if (regex_ban)
      {
#ifdef HAVE_REGEX_H
        regex_t *exp_p = MyMalloc(sizeof(regex_t));

        if ((ecode = regcomp(exp_p, gecos_name, REG_EXTENDED|REG_ICASE|REG_NOSUB)))
        {
          char errbuf[IRCD_BUFSIZE];

          regerror(ecode, NULL, errbuf, sizeof(errbuf));

          MyFree(exp_p);
          ilog(L_ERROR, "Failed to add regular expression based X-Line: %s", errbuf);
          break;
        }

        yy_conf = make_conf_item(RXLINE_TYPE);
        yy_conf->regexpname = exp_p;
#else
        yyerror("Your system doesn't support regex");
#endif
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

  case 423:
#line 2915 "ircd_parser.y"
    {
}
    break;

  case 427:
#line 2920 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 434:
#line 2929 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(gecos_name, yylval.string, sizeof(gecos_name));
}
    break;

  case 435:
#line 2935 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 492:
#line 2980 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr = (yyvsp[-1].number);
}
    break;

  case 493:
#line 2986 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr6 = (yyvsp[-1].number);
}
    break;

  case 494:
#line 2992 "ircd_parser.y"
    {
  if (ypass == 1) /* must be set in the 1st pass */
    ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 495:
#line 2998 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
}
    break;

  case 496:
#line 3003 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 497:
#line 3008 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kill_chase_time_limit = (yyvsp[-1].number);
}
    break;

  case 498:
#line 3014 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 499:
#line 3020 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 500:
#line 3026 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 501:
#line 3032 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 502:
#line 3038 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 503:
#line 3044 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_time = (yyvsp[-1].number); 
}
    break;

  case 504:
#line 3050 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_changes = (yyvsp[-1].number);
}
    break;

  case 505:
#line 3056 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_accept = (yyvsp[-1].number);
}
    break;

  case 506:
#line 3062 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_spam_exit_message_time = (yyvsp[-1].number);
}
    break;

  case 507:
#line 3068 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_warn_delta = (yyvsp[-1].number);
}
    break;

  case 508:
#line 3074 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = (yyvsp[-1].number);
}
    break;

  case 509:
#line 3080 "ircd_parser.y"
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

  case 510:
#line 3091 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 511:
#line 3097 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 512:
#line 3106 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 513:
#line 3112 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 514:
#line 3118 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 515:
#line 3124 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 516:
#line 3128 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 517:
#line 3134 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 518:
#line 3138 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 519:
#line 3144 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait = (yyvsp[-1].number);
}
    break;

  case 520:
#line 3150 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.caller_id_wait = (yyvsp[-1].number);
}
    break;

  case 521:
#line 3156 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait_simple = (yyvsp[-1].number);
}
    break;

  case 522:
#line 3162 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 523:
#line 3168 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 524:
#line 3174 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 525:
#line 3180 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 526:
#line 3186 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
}
    break;

  case 527:
#line 3197 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.idletime = (yyvsp[-1].number);
}
    break;

  case 528:
#line 3203 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dots_in_ident = (yyvsp[-1].number);
}
    break;

  case 529:
#line 3209 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.maximum_links = (yyvsp[-1].number);
}
    break;

  case 530:
#line 3215 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_targets = (yyvsp[-1].number);
}
    break;

  case 531:
#line 3221 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 532:
#line 3230 "ircd_parser.y"
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

  case 533:
#line 3262 "ircd_parser.y"
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

  case 534:
#line 3280 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 535:
#line 3286 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 536:
#line 3295 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 537:
#line 3301 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 538:
#line 3306 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 539:
#line 3312 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 543:
#line 3319 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 544:
#line 3323 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 545:
#line 3327 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEAF;
}
    break;

  case 546:
#line 3331 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 547:
#line 3335 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 548:
#line 3339 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 549:
#line 3343 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 550:
#line 3347 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 551:
#line 3351 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 552:
#line 3355 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 553:
#line 3359 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 554:
#line 3363 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 555:
#line 3367 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 556:
#line 3371 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 557:
#line 3375 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 558:
#line 3379 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 559:
#line 3383 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 560:
#line 3387 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 561:
#line 3393 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 565:
#line 3400 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 566:
#line 3404 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 567:
#line 3408 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEAF;
}
    break;

  case 568:
#line 3412 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 569:
#line 3416 "ircd_parser.y"
    { 
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 570:
#line 3420 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 571:
#line 3424 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 572:
#line 3428 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 573:
#line 3432 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 574:
#line 3436 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 575:
#line 3440 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 576:
#line 3444 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 577:
#line 3448 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 578:
#line 3452 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 579:
#line 3456 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 580:
#line 3460 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 581:
#line 3464 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 582:
#line 3468 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 583:
#line 3474 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard = (yyvsp[-1].number);
}
    break;

  case 584:
#line 3480 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard_simple = (yyvsp[-1].number);
}
    break;

  case 585:
#line 3486 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.default_floodcount = (yyvsp[-1].number);
}
    break;

  case 586:
#line 3492 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.client_flood = (yyvsp[-1].number);
}
    break;

  case 587:
#line 3498 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 588:
#line 3507 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->flags = 0;
  }
}
    break;

  case 589:
#line 3515 "ircd_parser.y"
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

  case 599:
#line 3542 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 600:
#line 3548 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = (yyvsp[-1].number);
}
    break;

  case 601:
#line 3554 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 605:
#line 3560 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 606:
#line 3564 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 607:
#line 3570 "ircd_parser.y"
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

  case 608:
#line 3589 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 609:
#line 3598 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 610:
#line 3602 "ircd_parser.y"
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

  case 613:
#line 3642 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 614:
#line 3646 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 634:
#line 3676 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 635:
#line 3682 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_except = yylval.number;
}
    break;

  case 636:
#line 3688 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_invex = yylval.number;
}
    break;

  case 637:
#line 3694 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_knock = yylval.number;
}
    break;

  case 638:
#line 3700 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay = (yyvsp[-1].number);
}
    break;

  case 639:
#line 3706 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay_channel = (yyvsp[-1].number);
}
    break;

  case 640:
#line 3712 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 641:
#line 3718 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_chans_per_user = (yyvsp[-1].number);
}
    break;

  case 642:
#line 3724 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 643:
#line 3730 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_bans = (yyvsp[-1].number);
}
    break;

  case 644:
#line 3736 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_user_count = (yyvsp[-1].number);
}
    break;

  case 645:
#line 3742 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_server_count = (yyvsp[-1].number);
}
    break;

  case 646:
#line 3748 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 647:
#line 3754 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 648:
#line 3760 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.burst_topicwho = yylval.number;
}
    break;

  case 659:
#line 3780 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 660:
#line 3786 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 661:
#line 3792 "ircd_parser.y"
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

  case 662:
#line 3806 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 663:
#line 3812 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 664:
#line 3818 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 1037 of yacc.c.  */
#line 7039 "y.tab.c"

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



