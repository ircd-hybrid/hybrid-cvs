/*  $Id: y.tab.c,v 7.63 2005/09/03 06:05:38 michael Exp $ */
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
     FOPERLOG = 312,
     FUSERLOG = 313,
     GECOS = 314,
     GENERAL = 315,
     GLINE = 316,
     GLINES = 317,
     GLINE_EXEMPT = 318,
     GLINE_LOG = 319,
     GLINE_TIME = 320,
     GLINE_MIN_CIDR = 321,
     GLINE_MIN_CIDR6 = 322,
     GLOBAL_KILL = 323,
     NEED_IDENT = 324,
     HAVENT_READ_CONF = 325,
     HIDDEN = 326,
     HIDDEN_ADMIN = 327,
     HIDDEN_OPER = 328,
     HIDE_SERVER_IPS = 329,
     HIDE_SERVERS = 330,
     HIDE_SPOOF_IPS = 331,
     HOST = 332,
     HUB = 333,
     HUB_MASK = 334,
     IDLETIME = 335,
     IGNORE_BOGUS_TS = 336,
     IP = 337,
     KILL = 338,
     KILL_CHASE_TIME_LIMIT = 339,
     KLINE = 340,
     KLINE_EXEMPT = 341,
     KLINE_REASON = 342,
     KLINE_WITH_REASON = 343,
     KNOCK_DELAY = 344,
     KNOCK_DELAY_CHANNEL = 345,
     LAZYLINK = 346,
     LEAF_MASK = 347,
     LINKS_DELAY = 348,
     LISTEN = 349,
     LOGGING = 350,
     LOG_LEVEL = 351,
     MAXIMUM_LINKS = 352,
     MAX_ACCEPT = 353,
     MAX_BANS = 354,
     MAX_CHANS_PER_USER = 355,
     MAX_GLOBAL = 356,
     MAX_IDENT = 357,
     MAX_LOCAL = 358,
     MAX_NICK_CHANGES = 359,
     MAX_NICK_TIME = 360,
     MAX_NUMBER = 361,
     MAX_TARGETS = 362,
     MESSAGE_LOCALE = 363,
     MIN_NONWILDCARD = 364,
     MIN_NONWILDCARD_SIMPLE = 365,
     MODULE = 366,
     MODULES = 367,
     NAME = 368,
     NEED_PASSWORD = 369,
     NETWORK_DESC = 370,
     NETWORK_NAME = 371,
     NICK = 372,
     NICK_CHANGES = 373,
     NO_CREATE_ON_SPLIT = 374,
     NO_JOIN_ON_SPLIT = 375,
     NO_OPER_FLOOD = 376,
     NO_TILDE = 377,
     NOT = 378,
     NUMBER = 379,
     NUMBER_PER_IDENT = 380,
     NUMBER_PER_IP = 381,
     NUMBER_PER_IP_GLOBAL = 382,
     OPERATOR = 383,
     OPER_LOG = 384,
     OPER_ONLY_UMODES = 385,
     OPER_PASS_RESV = 386,
     OPER_SPY_T = 387,
     OPER_UMODES = 388,
     INVITE_OPS_ONLY = 389,
     JOIN_FLOOD_COUNT = 390,
     JOIN_FLOOD_TIME = 391,
     PACE_WAIT = 392,
     PACE_WAIT_SIMPLE = 393,
     PASSWORD = 394,
     PATH = 395,
     PING_COOKIE = 396,
     PING_TIME = 397,
     PING_WARNING = 398,
     PORT = 399,
     QSTRING = 400,
     QUIET_ON_BAN = 401,
     REASON = 402,
     REDIRPORT = 403,
     REDIRSERV = 404,
     REGEX_T = 405,
     REHASH = 406,
     TREJECT_HOLD_TIME = 407,
     REMOTE = 408,
     REMOTEBAN = 409,
     RESTRICTED = 410,
     RSA_PRIVATE_KEY_FILE = 411,
     RSA_PUBLIC_KEY_FILE = 412,
     SSL_CERTIFICATE_FILE = 413,
     RESV = 414,
     RESV_EXEMPT = 415,
     SECONDS = 416,
     MINUTES = 417,
     HOURS = 418,
     DAYS = 419,
     WEEKS = 420,
     SENDQ = 421,
     SEND_PASSWORD = 422,
     SERVERHIDE = 423,
     SERVERINFO = 424,
     SERVLINK_PATH = 425,
     IRCD_SID = 426,
     TKLINE_EXPIRE_NOTICES = 427,
     T_SHARED = 428,
     T_CLUSTER = 429,
     TYPE = 430,
     SHORT_MOTD = 431,
     SILENT = 432,
     SPOOF = 433,
     SPOOF_NOTICE = 434,
     STATS_I_OPER_ONLY = 435,
     STATS_K_OPER_ONLY = 436,
     STATS_O_OPER_ONLY = 437,
     STATS_P_OPER_ONLY = 438,
     TBOOL = 439,
     TMASKED = 440,
     T_REJECT = 441,
     TS_MAX_DELTA = 442,
     TS_WARN_DELTA = 443,
     TWODOTS = 444,
     T_ALL = 445,
     T_BOTS = 446,
     T_SOFTCALLERID = 447,
     T_CALLERID = 448,
     T_CCONN = 449,
     T_CLIENT_FLOOD = 450,
     T_DEAF = 451,
     T_DEBUG = 452,
     T_DRONE = 453,
     T_EXTERNAL = 454,
     T_FULL = 455,
     T_INVISIBLE = 456,
     T_IPV4 = 457,
     T_IPV6 = 458,
     T_LOCOPS = 459,
     T_LOGPATH = 460,
     T_L_CRIT = 461,
     T_L_DEBUG = 462,
     T_L_ERROR = 463,
     T_L_INFO = 464,
     T_L_NOTICE = 465,
     T_L_TRACE = 466,
     T_L_WARN = 467,
     T_MAX_CLIENTS = 468,
     T_NCHANGE = 469,
     T_OPERWALL = 470,
     T_REJ = 471,
     T_SERVNOTICE = 472,
     T_SKILL = 473,
     T_SPY = 474,
     T_SSL = 475,
     T_UNAUTH = 476,
     T_UNRESV = 477,
     T_UNXLINE = 478,
     T_WALLOP = 479,
     THROTTLE_TIME = 480,
     TOPICBURST = 481,
     TRUE_NO_OPER_FLOOD = 482,
     TKLINE = 483,
     TXLINE = 484,
     TRESV = 485,
     UNKLINE = 486,
     USER = 487,
     USE_EGD = 488,
     USE_EXCEPT = 489,
     USE_INVEX = 490,
     USE_KNOCK = 491,
     USE_LOGGING = 492,
     USE_WHOIS_ACTUALLY = 493,
     VHOST = 494,
     VHOST6 = 495,
     XLINE = 496,
     WARN = 497,
     WARN_NO_NLINE = 498
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
#define FOPERLOG 312
#define FUSERLOG 313
#define GECOS 314
#define GENERAL 315
#define GLINE 316
#define GLINES 317
#define GLINE_EXEMPT 318
#define GLINE_LOG 319
#define GLINE_TIME 320
#define GLINE_MIN_CIDR 321
#define GLINE_MIN_CIDR6 322
#define GLOBAL_KILL 323
#define NEED_IDENT 324
#define HAVENT_READ_CONF 325
#define HIDDEN 326
#define HIDDEN_ADMIN 327
#define HIDDEN_OPER 328
#define HIDE_SERVER_IPS 329
#define HIDE_SERVERS 330
#define HIDE_SPOOF_IPS 331
#define HOST 332
#define HUB 333
#define HUB_MASK 334
#define IDLETIME 335
#define IGNORE_BOGUS_TS 336
#define IP 337
#define KILL 338
#define KILL_CHASE_TIME_LIMIT 339
#define KLINE 340
#define KLINE_EXEMPT 341
#define KLINE_REASON 342
#define KLINE_WITH_REASON 343
#define KNOCK_DELAY 344
#define KNOCK_DELAY_CHANNEL 345
#define LAZYLINK 346
#define LEAF_MASK 347
#define LINKS_DELAY 348
#define LISTEN 349
#define LOGGING 350
#define LOG_LEVEL 351
#define MAXIMUM_LINKS 352
#define MAX_ACCEPT 353
#define MAX_BANS 354
#define MAX_CHANS_PER_USER 355
#define MAX_GLOBAL 356
#define MAX_IDENT 357
#define MAX_LOCAL 358
#define MAX_NICK_CHANGES 359
#define MAX_NICK_TIME 360
#define MAX_NUMBER 361
#define MAX_TARGETS 362
#define MESSAGE_LOCALE 363
#define MIN_NONWILDCARD 364
#define MIN_NONWILDCARD_SIMPLE 365
#define MODULE 366
#define MODULES 367
#define NAME 368
#define NEED_PASSWORD 369
#define NETWORK_DESC 370
#define NETWORK_NAME 371
#define NICK 372
#define NICK_CHANGES 373
#define NO_CREATE_ON_SPLIT 374
#define NO_JOIN_ON_SPLIT 375
#define NO_OPER_FLOOD 376
#define NO_TILDE 377
#define NOT 378
#define NUMBER 379
#define NUMBER_PER_IDENT 380
#define NUMBER_PER_IP 381
#define NUMBER_PER_IP_GLOBAL 382
#define OPERATOR 383
#define OPER_LOG 384
#define OPER_ONLY_UMODES 385
#define OPER_PASS_RESV 386
#define OPER_SPY_T 387
#define OPER_UMODES 388
#define INVITE_OPS_ONLY 389
#define JOIN_FLOOD_COUNT 390
#define JOIN_FLOOD_TIME 391
#define PACE_WAIT 392
#define PACE_WAIT_SIMPLE 393
#define PASSWORD 394
#define PATH 395
#define PING_COOKIE 396
#define PING_TIME 397
#define PING_WARNING 398
#define PORT 399
#define QSTRING 400
#define QUIET_ON_BAN 401
#define REASON 402
#define REDIRPORT 403
#define REDIRSERV 404
#define REGEX_T 405
#define REHASH 406
#define TREJECT_HOLD_TIME 407
#define REMOTE 408
#define REMOTEBAN 409
#define RESTRICTED 410
#define RSA_PRIVATE_KEY_FILE 411
#define RSA_PUBLIC_KEY_FILE 412
#define SSL_CERTIFICATE_FILE 413
#define RESV 414
#define RESV_EXEMPT 415
#define SECONDS 416
#define MINUTES 417
#define HOURS 418
#define DAYS 419
#define WEEKS 420
#define SENDQ 421
#define SEND_PASSWORD 422
#define SERVERHIDE 423
#define SERVERINFO 424
#define SERVLINK_PATH 425
#define IRCD_SID 426
#define TKLINE_EXPIRE_NOTICES 427
#define T_SHARED 428
#define T_CLUSTER 429
#define TYPE 430
#define SHORT_MOTD 431
#define SILENT 432
#define SPOOF 433
#define SPOOF_NOTICE 434
#define STATS_I_OPER_ONLY 435
#define STATS_K_OPER_ONLY 436
#define STATS_O_OPER_ONLY 437
#define STATS_P_OPER_ONLY 438
#define TBOOL 439
#define TMASKED 440
#define T_REJECT 441
#define TS_MAX_DELTA 442
#define TS_WARN_DELTA 443
#define TWODOTS 444
#define T_ALL 445
#define T_BOTS 446
#define T_SOFTCALLERID 447
#define T_CALLERID 448
#define T_CCONN 449
#define T_CLIENT_FLOOD 450
#define T_DEAF 451
#define T_DEBUG 452
#define T_DRONE 453
#define T_EXTERNAL 454
#define T_FULL 455
#define T_INVISIBLE 456
#define T_IPV4 457
#define T_IPV6 458
#define T_LOCOPS 459
#define T_LOGPATH 460
#define T_L_CRIT 461
#define T_L_DEBUG 462
#define T_L_ERROR 463
#define T_L_INFO 464
#define T_L_NOTICE 465
#define T_L_TRACE 466
#define T_L_WARN 467
#define T_MAX_CLIENTS 468
#define T_NCHANGE 469
#define T_OPERWALL 470
#define T_REJ 471
#define T_SERVNOTICE 472
#define T_SKILL 473
#define T_SPY 474
#define T_SSL 475
#define T_UNAUTH 476
#define T_UNRESV 477
#define T_UNXLINE 478
#define T_WALLOP 479
#define THROTTLE_TIME 480
#define TOPICBURST 481
#define TRUE_NO_OPER_FLOOD 482
#define TKLINE 483
#define TXLINE 484
#define TRESV 485
#define UNKLINE 486
#define USER 487
#define USE_EGD 488
#define USE_EXCEPT 489
#define USE_INVEX 490
#define USE_KNOCK 491
#define USE_LOGGING 492
#define USE_WHOIS_ACTUALLY 493
#define VHOST 494
#define VHOST6 495
#define XLINE 496
#define WARN 497
#define WARN_NO_NLINE 498




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
#line 675 "y.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 213 of yacc.c.  */
#line 687 "y.tab.c"

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
#define YYLAST   1343

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  249
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  317
/* YYNRULES -- Number of rules. */
#define YYNRULES  674
/* YYNRULES -- Number of states. */
#define YYNSTATES  1372

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   498

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   248,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   244,
       2,   247,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   246,     2,   245,     2,     2,     2,     2,
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
     235,   236,   237,   238,   239,   240,   241,   242,   243
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
     582,   584,   586,   588,   591,   596,   598,   603,   608,   613,
     618,   623,   628,   633,   638,   643,   644,   651,   652,   658,
     662,   664,   666,   668,   671,   673,   675,   677,   679,   681,
     684,   689,   693,   695,   697,   701,   706,   711,   712,   719,
     722,   724,   726,   728,   730,   732,   734,   736,   738,   740,
     742,   744,   746,   748,   750,   752,   754,   756,   759,   764,
     769,   774,   779,   784,   785,   791,   795,   797,   800,   802,
     804,   806,   808,   810,   812,   814,   816,   818,   820,   822,
     827,   832,   837,   842,   847,   852,   857,   862,   867,   872,
     873,   880,   883,   885,   887,   889,   891,   894,   899,   904,
     909,   910,   917,   920,   922,   924,   926,   928,   931,   936,
     941,   942,   948,   952,   954,   956,   958,   960,   962,   964,
     966,   968,   970,   972,   974,   976,   977,   984,   987,   989,
     991,   993,   996,  1001,  1002,  1008,  1012,  1014,  1016,  1018,
    1020,  1022,  1024,  1026,  1028,  1030,  1032,  1034,  1036,  1037,
    1045,  1046,  1048,  1051,  1053,  1055,  1057,  1059,  1061,  1063,
    1065,  1067,  1069,  1071,  1073,  1075,  1077,  1079,  1081,  1083,
    1085,  1087,  1090,  1095,  1097,  1102,  1107,  1112,  1117,  1122,
    1127,  1132,  1133,  1139,  1143,  1145,  1148,  1150,  1152,  1154,
    1156,  1158,  1160,  1162,  1167,  1172,  1177,  1182,  1187,  1192,
    1197,  1202,  1207,  1208,  1215,  1216,  1222,  1226,  1228,  1230,
    1233,  1235,  1237,  1239,  1241,  1243,  1248,  1253,  1254,  1261,
    1264,  1266,  1268,  1270,  1272,  1277,  1282,  1283,  1290,  1293,
    1295,  1297,  1299,  1304,  1305,  1312,  1313,  1319,  1323,  1325,
    1327,  1330,  1332,  1334,  1336,  1338,  1340,  1345,  1350,  1356,
    1359,  1361,  1363,  1365,  1367,  1369,  1371,  1373,  1375,  1377,
    1379,  1381,  1383,  1385,  1387,  1389,  1391,  1393,  1395,  1397,
    1399,  1401,  1403,  1405,  1407,  1409,  1411,  1413,  1415,  1417,
    1419,  1421,  1423,  1425,  1427,  1429,  1431,  1433,  1435,  1437,
    1439,  1441,  1443,  1445,  1447,  1449,  1451,  1453,  1455,  1457,
    1459,  1461,  1463,  1465,  1467,  1469,  1471,  1473,  1475,  1480,
    1485,  1490,  1495,  1500,  1505,  1510,  1515,  1520,  1525,  1530,
    1535,  1540,  1545,  1550,  1555,  1560,  1565,  1570,  1575,  1580,
    1585,  1590,  1595,  1600,  1605,  1610,  1615,  1620,  1625,  1630,
    1635,  1640,  1645,  1650,  1655,  1660,  1665,  1670,  1675,  1680,
    1685,  1690,  1695,  1700,  1705,  1710,  1715,  1720,  1725,  1730,
    1731,  1737,  1741,  1743,  1745,  1747,  1749,  1751,  1753,  1755,
    1757,  1759,  1761,  1763,  1765,  1767,  1769,  1771,  1773,  1775,
    1777,  1779,  1780,  1786,  1790,  1792,  1794,  1796,  1798,  1800,
    1802,  1804,  1806,  1808,  1810,  1812,  1814,  1816,  1818,  1820,
    1822,  1824,  1826,  1828,  1833,  1838,  1843,  1848,  1853,  1854,
    1861,  1864,  1866,  1868,  1870,  1872,  1874,  1876,  1878,  1880,
    1885,  1890,  1891,  1897,  1901,  1903,  1905,  1907,  1912,  1917,
    1918,  1924,  1928,  1930,  1932,  1934,  1940,  1943,  1945,  1947,
    1949,  1951,  1953,  1955,  1957,  1959,  1961,  1963,  1965,  1967,
    1969,  1971,  1973,  1975,  1977,  1982,  1987,  1992,  1997,  2002,
    2007,  2012,  2017,  2022,  2027,  2032,  2037,  2042,  2047,  2052,
    2058,  2061,  2063,  2065,  2067,  2069,  2071,  2073,  2075,  2077,
    2082,  2087,  2092,  2097,  2102
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     250,     0,    -1,    -1,   250,   251,    -1,   275,    -1,   281,
      -1,   292,    -1,   539,    -1,   321,    -1,   337,    -1,   350,
      -1,   261,    -1,   557,    -1,   374,    -1,   381,    -1,   391,
      -1,   400,    -1,   427,    -1,   437,    -1,   443,    -1,   458,
      -1,   523,    -1,   448,    -1,   256,    -1,     1,   244,    -1,
       1,   245,    -1,    -1,   253,    -1,   124,   252,    -1,   124,
     161,   252,    -1,   124,   162,   252,    -1,   124,   163,   252,
      -1,   124,   164,   252,    -1,   124,   165,   252,    -1,    -1,
     255,    -1,   124,   254,    -1,   124,    15,   254,    -1,   124,
      16,   254,    -1,   124,    17,   254,    -1,   112,   246,   257,
     245,   244,    -1,   257,   258,    -1,   258,    -1,   259,    -1,
     260,    -1,     1,   244,    -1,   111,   247,   145,   244,    -1,
     140,   247,   145,   244,    -1,   169,   246,   262,   245,   244,
      -1,   262,   263,    -1,   263,    -1,   266,    -1,   271,    -1,
     274,    -1,   268,    -1,   269,    -1,   270,    -1,   273,    -1,
     265,    -1,   272,    -1,   267,    -1,   264,    -1,     1,   244,
      -1,   158,   247,   145,   244,    -1,   156,   247,   145,   244,
      -1,   113,   247,   145,   244,    -1,   171,   247,   145,   244,
      -1,    37,   247,   145,   244,    -1,   116,   247,   145,   244,
      -1,   115,   247,   145,   244,    -1,   239,   247,   145,   244,
      -1,   240,   247,   145,   244,    -1,   213,   247,   124,   244,
      -1,    78,   247,   184,   244,    -1,     5,   246,   276,   245,
     244,    -1,   276,   277,    -1,   277,    -1,   278,    -1,   280,
      -1,   279,    -1,     1,   244,    -1,   113,   247,   145,   244,
      -1,    47,   247,   145,   244,    -1,    37,   247,   145,   244,
      -1,    95,   246,   282,   245,   244,    -1,   282,   283,    -1,
     283,    -1,   284,    -1,   285,    -1,   286,    -1,   290,    -1,
     291,    -1,   287,    -1,   289,    -1,   288,    -1,     1,   244,
      -1,   205,   247,   145,   244,    -1,   129,   247,   145,   244,
      -1,    64,   247,   145,   244,    -1,    58,   247,   145,   244,
      -1,    56,   247,   145,   244,    -1,    57,   247,   145,   244,
      -1,    96,   247,   206,   244,    -1,    96,   247,   208,   244,
      -1,    96,   247,   212,   244,    -1,    96,   247,   210,   244,
      -1,    96,   247,   211,   244,    -1,    96,   247,   209,   244,
      -1,    96,   247,   207,   244,    -1,   237,   247,   184,   244,
      -1,    -1,   128,   293,   294,   246,   295,   245,   244,    -1,
      -1,   298,    -1,   295,   296,    -1,   296,    -1,   297,    -1,
     299,    -1,   300,    -1,   302,    -1,   304,    -1,   305,    -1,
     306,    -1,   308,    -1,   309,    -1,   310,    -1,   311,    -1,
     312,    -1,   307,    -1,   313,    -1,   314,    -1,   315,    -1,
     301,    -1,   303,    -1,   316,    -1,     1,   244,    -1,   113,
     247,   145,   244,    -1,   145,    -1,   232,   247,   145,   244,
      -1,   139,   247,   145,   244,    -1,    49,   247,   184,   244,
      -1,    72,   247,   184,   244,    -1,   157,   247,   145,   244,
      -1,    26,   247,   145,   244,    -1,    68,   247,   184,   244,
      -1,   153,   247,   184,   244,    -1,   154,   247,   184,   244,
      -1,    85,   247,   184,   244,    -1,   241,   247,   184,   244,
      -1,   231,   247,   184,   244,    -1,    61,   247,   184,   244,
      -1,   118,   247,   184,   244,    -1,    38,   247,   184,   244,
      -1,   151,   247,   184,   244,    -1,     5,   247,   184,   244,
      -1,    -1,    54,   317,   247,   318,   244,    -1,   318,   248,
     319,    -1,   319,    -1,   123,   320,    -1,   320,    -1,    68,
      -1,   153,    -1,    85,    -1,   231,    -1,   241,    -1,    61,
      -1,    38,    -1,   151,    -1,     5,    -1,    72,    -1,   118,
      -1,   215,    -1,   132,    -1,    73,    -1,   154,    -1,    49,
      -1,    -1,    26,   322,   323,   246,   324,   245,   244,    -1,
      -1,   327,    -1,   324,   325,    -1,   325,    -1,   326,    -1,
     328,    -1,   329,    -1,   330,    -1,   331,    -1,   332,    -1,
     333,    -1,   334,    -1,   335,    -1,   336,    -1,     1,   244,
      -1,   113,   247,   145,   244,    -1,   145,    -1,   142,   247,
     253,   244,    -1,   143,   247,   253,   244,    -1,   126,   247,
     124,   244,    -1,    30,   247,   253,   244,    -1,   106,   247,
     124,   244,    -1,   101,   247,   124,   244,    -1,   103,   247,
     124,   244,    -1,   102,   247,   124,   244,    -1,   166,   247,
     255,   244,    -1,    -1,    94,   338,   246,   343,   245,   244,
      -1,    -1,    54,   340,   247,   341,   244,    -1,   341,   248,
     342,    -1,   342,    -1,   220,    -1,    71,    -1,   343,   344,
      -1,   344,    -1,   345,    -1,   339,    -1,   348,    -1,   349,
      -1,     1,   244,    -1,   144,   247,   346,   244,    -1,   346,
     248,   347,    -1,   347,    -1,   124,    -1,   124,   189,   124,
      -1,    82,   247,   145,   244,    -1,    77,   247,   145,   244,
      -1,    -1,    10,   351,   246,   352,   245,   244,    -1,   352,
     353,    -1,   353,    -1,   354,    -1,   355,    -1,   357,    -1,
     359,    -1,   364,    -1,   365,    -1,   366,    -1,   368,    -1,
     369,    -1,   370,    -1,   356,    -1,   371,    -1,   372,    -1,
     367,    -1,   373,    -1,   358,    -1,     1,   244,    -1,   232,
     247,   145,   244,    -1,   139,   247,   145,   244,    -1,   179,
     247,   184,   244,    -1,    26,   247,   145,   244,    -1,    49,
     247,   184,   244,    -1,    -1,    54,   360,   247,   361,   244,
      -1,   361,   248,   362,    -1,   362,    -1,   123,   363,    -1,
     363,    -1,   179,    -1,    50,    -1,    86,    -1,    69,    -1,
      22,    -1,    23,    -1,   122,    -1,    63,    -1,   160,    -1,
     114,    -1,    86,   247,   184,   244,    -1,    69,   247,   184,
     244,    -1,    50,   247,   184,   244,    -1,    22,   247,   184,
     244,    -1,   122,   247,   184,   244,    -1,    63,   247,   184,
     244,    -1,   178,   247,   145,   244,    -1,   149,   247,   145,
     244,    -1,   148,   247,   124,   244,    -1,   114,   247,   184,
     244,    -1,    -1,   159,   375,   246,   376,   245,   244,    -1,
     376,   377,    -1,   377,    -1,   378,    -1,   379,    -1,   380,
      -1,     1,   244,    -1,   147,   247,   145,   244,    -1,    24,
     247,   145,   244,    -1,   117,   247,   145,   244,    -1,    -1,
     173,   382,   246,   383,   245,   244,    -1,   383,   384,    -1,
     384,    -1,   385,    -1,   386,    -1,   387,    -1,     1,   244,
      -1,   113,   247,   145,   244,    -1,   232,   247,   145,   244,
      -1,    -1,   175,   388,   247,   389,   244,    -1,   389,   248,
     390,    -1,   390,    -1,    85,    -1,   228,    -1,   231,    -1,
     241,    -1,   229,    -1,   223,    -1,   159,    -1,   230,    -1,
     222,    -1,   204,    -1,   190,    -1,    -1,   174,   392,   246,
     393,   245,   244,    -1,   393,   394,    -1,   394,    -1,   395,
      -1,   396,    -1,     1,   244,    -1,   113,   247,   145,   244,
      -1,    -1,   175,   397,   247,   398,   244,    -1,   398,   248,
     399,    -1,   399,    -1,    85,    -1,   228,    -1,   231,    -1,
     241,    -1,   229,    -1,   223,    -1,   159,    -1,   230,    -1,
     222,    -1,   204,    -1,   190,    -1,    -1,    29,   401,   402,
     246,   403,   245,   244,    -1,    -1,   406,    -1,   403,   404,
      -1,   404,    -1,   405,    -1,   407,    -1,   408,    -1,   409,
      -1,   410,    -1,   411,    -1,   412,    -1,   413,    -1,   423,
      -1,   424,    -1,   425,    -1,   422,    -1,   419,    -1,   421,
      -1,   420,    -1,   418,    -1,   426,    -1,     1,   244,    -1,
     113,   247,   145,   244,    -1,   145,    -1,    77,   247,   145,
     244,    -1,   167,   247,   145,   244,    -1,     3,   247,   145,
     244,    -1,   144,   247,   124,   244,    -1,     6,   247,   202,
     244,    -1,     6,   247,   203,   244,    -1,    53,   247,   145,
     244,    -1,    -1,    54,   414,   247,   415,   244,    -1,   415,
     248,   416,    -1,   416,    -1,   123,   417,    -1,   417,    -1,
      91,    -1,    27,    -1,    31,    -1,    11,    -1,    13,    -1,
     226,    -1,   157,   247,   145,   244,    -1,    49,   247,   184,
     244,    -1,    31,   247,   184,   244,    -1,    27,   247,   184,
     244,    -1,    11,   247,   184,   244,    -1,    79,   247,   145,
     244,    -1,    92,   247,   145,   244,    -1,    26,   247,   145,
     244,    -1,    25,   247,   145,   244,    -1,    -1,    83,   428,
     246,   433,   245,   244,    -1,    -1,   175,   430,   247,   431,
     244,    -1,   431,   248,   432,    -1,   432,    -1,   150,    -1,
     433,   434,    -1,   434,    -1,   435,    -1,   436,    -1,   429,
      -1,     1,    -1,   232,   247,   145,   244,    -1,   147,   247,
     145,   244,    -1,    -1,    36,   438,   246,   439,   245,   244,
      -1,   439,   440,    -1,   440,    -1,   441,    -1,   442,    -1,
       1,    -1,    82,   247,   145,   244,    -1,   147,   247,   145,
     244,    -1,    -1,    51,   444,   246,   445,   245,   244,    -1,
     445,   446,    -1,   446,    -1,   447,    -1,     1,    -1,    82,
     247,   145,   244,    -1,    -1,    59,   449,   246,   454,   245,
     244,    -1,    -1,   175,   451,   247,   452,   244,    -1,   452,
     248,   453,    -1,   453,    -1,   150,    -1,   454,   455,    -1,
     455,    -1,   456,    -1,   457,    -1,   450,    -1,     1,    -1,
     113,   247,   145,   244,    -1,   147,   247,   145,   244,    -1,
      60,   246,   459,   245,   244,    -1,   459,   460,    -1,   460,
      -1,   470,    -1,   471,    -1,   473,    -1,   474,    -1,   475,
      -1,   476,    -1,   477,    -1,   478,    -1,   479,    -1,   480,
      -1,   469,    -1,   482,    -1,   483,    -1,   484,    -1,   499,
      -1,   485,    -1,   487,    -1,   489,    -1,   488,    -1,   492,
      -1,   486,    -1,   493,    -1,   494,    -1,   495,    -1,   496,
      -1,   498,    -1,   500,    -1,   497,    -1,   514,    -1,   501,
      -1,   505,    -1,   506,    -1,   510,    -1,   490,    -1,   491,
      -1,   520,    -1,   518,    -1,   519,    -1,   502,    -1,   472,
      -1,   503,    -1,   504,    -1,   521,    -1,   509,    -1,   481,
      -1,   522,    -1,   507,    -1,   508,    -1,   463,    -1,   468,
      -1,   461,    -1,   462,    -1,   464,    -1,   465,    -1,   466,
      -1,   467,    -1,     1,    -1,    66,   247,   124,   244,    -1,
      67,   247,   124,   244,    -1,    13,   247,   184,   244,    -1,
     238,   247,   184,   244,    -1,   152,   247,   124,   244,    -1,
     135,   247,   124,   244,    -1,   136,   247,   124,   244,    -1,
     172,   247,   184,   244,    -1,    84,   247,   124,   244,    -1,
      76,   247,   184,   244,    -1,    81,   247,   184,   244,    -1,
      42,   247,   184,   244,    -1,    52,   247,   184,   244,    -1,
       8,   247,   184,   244,    -1,   105,   247,   253,   244,    -1,
     104,   247,   124,   244,    -1,    98,   247,   124,   244,    -1,
       9,   247,   253,   244,    -1,   188,   247,   253,   244,    -1,
     187,   247,   253,   244,    -1,    70,   247,   124,   244,    -1,
      88,   247,   184,   244,    -1,    87,   247,   145,   244,    -1,
     243,   247,   184,   244,    -1,   182,   247,   184,   244,    -1,
     183,   247,   184,   244,    -1,   181,   247,   184,   244,    -1,
     181,   247,   185,   244,    -1,   180,   247,   184,   244,    -1,
     180,   247,   185,   244,    -1,   137,   247,   253,   244,    -1,
      20,   247,   253,   244,    -1,    21,   247,   184,   244,    -1,
     138,   247,   253,   244,    -1,   176,   247,   184,   244,    -1,
     121,   247,   184,   244,    -1,   227,   247,   184,   244,    -1,
     131,   247,   184,   244,    -1,   108,   247,   145,   244,    -1,
      80,   247,   253,   244,    -1,    44,   247,   124,   244,    -1,
      97,   247,   124,   244,    -1,   107,   247,   124,   244,    -1,
     170,   247,   145,   244,    -1,    32,   247,   145,   244,    -1,
      28,   247,   124,   244,    -1,   233,   247,   184,   244,    -1,
      46,   247,   145,   244,    -1,   141,   247,   184,   244,    -1,
      39,   247,   184,   244,    -1,   225,   247,   253,   244,    -1,
      -1,   133,   511,   247,   512,   244,    -1,   512,   248,   513,
      -1,   513,    -1,   191,    -1,   194,    -1,   196,    -1,   197,
      -1,   200,    -1,   218,    -1,   214,    -1,   216,    -1,   221,
      -1,   219,    -1,   199,    -1,   215,    -1,   217,    -1,   201,
      -1,   224,    -1,   192,    -1,   193,    -1,   204,    -1,    -1,
     130,   515,   247,   516,   244,    -1,   516,   248,   517,    -1,
     517,    -1,   191,    -1,   194,    -1,   196,    -1,   197,    -1,
     200,    -1,   218,    -1,   214,    -1,   216,    -1,   221,    -1,
     219,    -1,   199,    -1,   215,    -1,   217,    -1,   201,    -1,
     224,    -1,   192,    -1,   193,    -1,   204,    -1,   109,   247,
     124,   244,    -1,   110,   247,   124,   244,    -1,    33,   247,
     124,   244,    -1,   195,   247,   255,   244,    -1,    43,   247,
     184,   244,    -1,    -1,    62,   524,   246,   525,   245,   244,
      -1,   525,   526,    -1,   526,    -1,   527,    -1,   528,    -1,
     529,    -1,   533,    -1,   534,    -1,   535,    -1,     1,    -1,
      48,   247,   184,   244,    -1,    45,   247,   253,   244,    -1,
      -1,    95,   530,   247,   531,   244,    -1,   531,   248,   532,
      -1,   532,    -1,   186,    -1,    12,    -1,   232,   247,   145,
     244,    -1,   113,   247,   145,   244,    -1,    -1,     4,   536,
     247,   537,   244,    -1,   537,   248,   538,    -1,   538,    -1,
     186,    -1,    12,    -1,    24,   246,   540,   245,   244,    -1,
     540,   541,    -1,   541,    -1,   542,    -1,   543,    -1,   544,
      -1,   545,    -1,   551,    -1,   546,    -1,   547,    -1,   548,
      -1,   549,    -1,   550,    -1,   552,    -1,   553,    -1,   554,
      -1,   555,    -1,   556,    -1,     1,    -1,    41,   247,   184,
     244,    -1,   234,   247,   184,   244,    -1,   235,   247,   184,
     244,    -1,   236,   247,   184,   244,    -1,    89,   247,   253,
     244,    -1,    90,   247,   253,   244,    -1,   134,   247,   184,
     244,    -1,   100,   247,   124,   244,    -1,   146,   247,   184,
     244,    -1,    99,   247,   124,   244,    -1,    35,   247,   124,
     244,    -1,    34,   247,   124,   244,    -1,   119,   247,   184,
     244,    -1,   120,   247,   184,   244,    -1,    14,   247,   184,
     244,    -1,   168,   246,   558,   245,   244,    -1,   558,   559,
      -1,   559,    -1,   560,    -1,   561,    -1,   562,    -1,   564,
      -1,   563,    -1,   565,    -1,     1,    -1,    55,   247,   184,
     244,    -1,    75,   247,   184,   244,    -1,    93,   247,   253,
     244,    -1,    71,   247,   184,   244,    -1,    40,   247,   184,
     244,    -1,    74,   247,   184,   244,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   380,   380,   381,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   409,   409,   410,   414,
     418,   422,   426,   430,   436,   436,   437,   438,   439,   440,
     447,   450,   450,   451,   451,   451,   453,   470,   481,   484,
     485,   486,   486,   487,   487,   488,   488,   489,   490,   490,
     491,   491,   492,   494,   528,   588,   602,   620,   629,   643,
     652,   680,   710,   726,   776,   778,   778,   779,   779,   780,
     780,   782,   791,   800,   813,   815,   816,   818,   818,   819,
     819,   820,   820,   821,   821,   822,   824,   828,   832,   836,
     843,   850,   857,   861,   865,   869,   873,   877,   881,   887,
     897,   896,   989,   989,   990,   990,   991,   991,   991,   991,
     992,   992,   992,   993,   993,   993,   994,   994,   994,   995,
     995,   995,   996,   996,   997,   997,   999,  1011,  1023,  1042,
    1054,  1065,  1076,  1118,  1127,  1138,  1149,  1160,  1171,  1182,
    1193,  1204,  1215,  1226,  1237,  1249,  1248,  1252,  1252,  1253,
    1254,  1256,  1263,  1270,  1277,  1284,  1291,  1298,  1305,  1312,
    1319,  1326,  1333,  1340,  1347,  1354,  1361,  1375,  1374,  1394,
    1394,  1396,  1396,  1397,  1398,  1399,  1400,  1401,  1402,  1403,
    1404,  1405,  1406,  1407,  1409,  1456,  1503,  1509,  1515,  1521,
    1527,  1533,  1539,  1545,  1551,  1561,  1560,  1577,  1576,  1580,
    1580,  1581,  1585,  1591,  1591,  1592,  1592,  1592,  1592,  1592,
    1594,  1596,  1596,  1598,  1613,  1635,  1644,  1657,  1656,  1725,
    1725,  1726,  1726,  1726,  1726,  1727,  1727,  1728,  1728,  1728,
    1729,  1729,  1730,  1730,  1730,  1731,  1731,  1731,  1733,  1752,
    1765,  1776,  1785,  1797,  1796,  1800,  1800,  1801,  1802,  1804,
    1812,  1819,  1826,  1833,  1840,  1847,  1854,  1861,  1868,  1877,
    1888,  1899,  1910,  1921,  1932,  1944,  1963,  1973,  1982,  1998,
    1997,  2013,  2013,  2014,  2014,  2014,  2014,  2016,  2025,  2040,
    2054,  2053,  2069,  2069,  2070,  2070,  2070,  2070,  2072,  2081,
    2090,  2089,  2095,  2095,  2096,  2100,  2104,  2108,  2112,  2116,
    2120,  2124,  2128,  2132,  2136,  2146,  2145,  2162,  2162,  2163,
    2163,  2163,  2165,  2172,  2171,  2177,  2177,  2178,  2182,  2186,
    2190,  2194,  2198,  2202,  2206,  2210,  2214,  2218,  2228,  2227,
    2377,  2377,  2378,  2378,  2379,  2379,  2379,  2380,  2380,  2380,
    2381,  2381,  2381,  2382,  2382,  2382,  2383,  2383,  2383,  2384,
    2384,  2385,  2387,  2399,  2411,  2420,  2432,  2444,  2450,  2454,
    2462,  2472,  2471,  2475,  2475,  2476,  2477,  2479,  2486,  2497,
    2504,  2511,  2518,  2528,  2569,  2580,  2591,  2606,  2617,  2630,
    2643,  2652,  2688,  2687,  2749,  2748,  2752,  2752,  2753,  2759,
    2759,  2760,  2760,  2760,  2760,  2762,  2778,  2788,  2787,  2809,
    2809,  2810,  2810,  2810,  2812,  2821,  2834,  2833,  2854,  2854,
    2855,  2855,  2857,  2870,  2869,  2911,  2910,  2914,  2914,  2915,
    2921,  2921,  2922,  2922,  2922,  2922,  2924,  2930,  2939,  2942,
    2942,  2943,  2943,  2944,  2944,  2945,  2945,  2946,  2946,  2947,
    2947,  2948,  2948,  2949,  2950,  2950,  2951,  2951,  2952,  2952,
    2953,  2953,  2954,  2954,  2955,  2955,  2956,  2956,  2957,  2958,
    2958,  2959,  2959,  2960,  2960,  2961,  2961,  2962,  2962,  2963,
    2963,  2964,  2965,  2965,  2966,  2966,  2967,  2967,  2968,  2968,
    2969,  2969,  2970,  2970,  2971,  2971,  2972,  2973,  2977,  2983,
    2989,  2995,  3000,  3005,  3010,  3015,  3020,  3026,  3032,  3038,
    3044,  3050,  3056,  3062,  3068,  3074,  3080,  3086,  3092,  3103,
    3109,  3118,  3124,  3130,  3136,  3140,  3146,  3150,  3156,  3162,
    3168,  3174,  3180,  3186,  3192,  3198,  3204,  3215,  3221,  3227,
    3233,  3239,  3248,  3280,  3298,  3304,  3313,  3319,  3324,  3331,
    3330,  3336,  3336,  3337,  3341,  3345,  3349,  3353,  3357,  3361,
    3365,  3369,  3373,  3377,  3381,  3385,  3389,  3393,  3397,  3401,
    3405,  3412,  3411,  3417,  3417,  3418,  3422,  3426,  3430,  3434,
    3438,  3442,  3446,  3450,  3454,  3458,  3462,  3466,  3470,  3474,
    3478,  3482,  3486,  3492,  3498,  3504,  3510,  3516,  3526,  3525,
    3551,  3551,  3552,  3553,  3554,  3555,  3556,  3557,  3558,  3560,
    3566,  3573,  3572,  3577,  3577,  3578,  3582,  3588,  3607,  3617,
    3616,  3659,  3659,  3660,  3664,  3673,  3676,  3676,  3677,  3678,
    3679,  3680,  3681,  3682,  3683,  3684,  3685,  3686,  3687,  3688,
    3689,  3690,  3691,  3692,  3694,  3700,  3706,  3712,  3718,  3724,
    3730,  3736,  3742,  3748,  3754,  3760,  3766,  3772,  3778,  3787,
    3790,  3790,  3791,  3791,  3792,  3793,  3794,  3795,  3796,  3798,
    3804,  3810,  3824,  3830,  3836
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
  "DEFAULT_SPLIT_USER_COUNT", "DENY", "DESCRIPTION", "DIE", "DISABLE_AUTH",
  "DISABLE_HIDDEN", "DISABLE_LOCAL_CHANNELS", "DISABLE_REMOTE_COMMANDS",
  "DOT_IN_IP6_ADDR", "DOTS_IN_IDENT", "DURATION", "EGDPOOL_PATH", "EMAIL",
  "ENABLE", "ENCRYPTED", "EXCEED_LIMIT", "EXEMPT", "FAILED_OPER_NOTICE",
  "FAKENAME", "IRCD_FLAGS", "FLATTEN_LINKS", "FFAILED_OPERLOG", "FOPERLOG",
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
  "INVITE_OPS_ONLY", "JOIN_FLOOD_COUNT", "JOIN_FLOOD_TIME", "PACE_WAIT",
  "PACE_WAIT_SIMPLE", "PASSWORD", "PATH", "PING_COOKIE", "PING_TIME",
  "PING_WARNING", "PORT", "QSTRING", "QUIET_ON_BAN", "REASON", "REDIRPORT",
  "REDIRSERV", "REGEX_T", "REHASH", "TREJECT_HOLD_TIME", "REMOTE",
  "REMOTEBAN", "RESTRICTED", "RSA_PRIVATE_KEY_FILE", "RSA_PUBLIC_KEY_FILE",
  "SSL_CERTIFICATE_FILE", "RESV", "RESV_EXEMPT", "SECONDS", "MINUTES",
  "HOURS", "DAYS", "WEEKS", "SENDQ", "SEND_PASSWORD", "SERVERHIDE",
  "SERVERINFO", "SERVLINK_PATH", "IRCD_SID", "TKLINE_EXPIRE_NOTICES",
  "T_SHARED", "T_CLUSTER", "TYPE", "SHORT_MOTD", "SILENT", "SPOOF",
  "SPOOF_NOTICE", "STATS_I_OPER_ONLY", "STATS_K_OPER_ONLY",
  "STATS_O_OPER_ONLY", "STATS_P_OPER_ONLY", "TBOOL", "TMASKED", "T_REJECT",
  "TS_MAX_DELTA", "TS_WARN_DELTA", "TWODOTS", "T_ALL", "T_BOTS",
  "T_SOFTCALLERID", "T_CALLERID", "T_CCONN", "T_CLIENT_FLOOD", "T_DEAF",
  "T_DEBUG", "T_DRONE", "T_EXTERNAL", "T_FULL", "T_INVISIBLE", "T_IPV4",
  "T_IPV6", "T_LOCOPS", "T_LOGPATH", "T_L_CRIT", "T_L_DEBUG", "T_L_ERROR",
  "T_L_INFO", "T_L_NOTICE", "T_L_TRACE", "T_L_WARN", "T_MAX_CLIENTS",
  "T_NCHANGE", "T_OPERWALL", "T_REJ", "T_SERVNOTICE", "T_SKILL", "T_SPY",
  "T_SSL", "T_UNAUTH", "T_UNRESV", "T_UNXLINE", "T_WALLOP",
  "THROTTLE_TIME", "TOPICBURST", "TRUE_NO_OPER_FLOOD", "TKLINE", "TXLINE",
  "TRESV", "UNKLINE", "USER", "USE_EGD", "USE_EXCEPT", "USE_INVEX",
  "USE_KNOCK", "USE_LOGGING", "USE_WHOIS_ACTUALLY", "VHOST", "VHOST6",
  "XLINE", "WARN", "WARN_NO_NLINE", "';'", "'}'", "'{'", "'='", "','",
  "$accept", "conf", "conf_item", "timespec_", "timespec", "sizespec_",
  "sizespec", "modules_entry", "modules_items", "modules_item",
  "modules_module", "modules_path", "serverinfo_entry", "serverinfo_items",
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
  "general_reject_hold_time", "general_jflood_count",
  "general_jflood_time", "general_tkline_expire_notices",
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
  "general_opers_bypass_callerid", "general_pace_wait_simple",
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
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,    59,   125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   249,   250,   250,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   252,   252,   253,   253,
     253,   253,   253,   253,   254,   254,   255,   255,   255,   255,
     256,   257,   257,   258,   258,   258,   259,   260,   261,   262,
     262,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   276,   277,   277,   277,
     277,   278,   279,   280,   281,   282,   282,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   284,   285,   286,   287,
     288,   289,   290,   290,   290,   290,   290,   290,   290,   291,
     293,   292,   294,   294,   295,   295,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   317,   316,   318,   318,   319,
     319,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   322,   321,   323,
     323,   324,   324,   325,   325,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   338,   337,   340,   339,   341,
     341,   342,   342,   343,   343,   344,   344,   344,   344,   344,
     345,   346,   346,   347,   347,   348,   349,   351,   350,   352,
     352,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   354,   355,
     356,   357,   358,   360,   359,   361,   361,   362,   362,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   375,
     374,   376,   376,   377,   377,   377,   377,   378,   379,   380,
     382,   381,   383,   383,   384,   384,   384,   384,   385,   386,
     388,   387,   389,   389,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   392,   391,   393,   393,   394,
     394,   394,   395,   397,   396,   398,   398,   399,   399,   399,
     399,   399,   399,   399,   399,   399,   399,   399,   401,   400,
     402,   402,   403,   403,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   405,   406,   407,   408,   409,   410,   411,   411,
     412,   414,   413,   415,   415,   416,   416,   417,   417,   417,
     417,   417,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   428,   427,   430,   429,   431,   431,   432,   433,
     433,   434,   434,   434,   434,   435,   436,   438,   437,   439,
     439,   440,   440,   440,   441,   442,   444,   443,   445,   445,
     446,   446,   447,   449,   448,   451,   450,   452,   452,   453,
     454,   454,   455,   455,   455,   455,   456,   457,   458,   459,
     459,   460,   460,   460,   460,   460,   460,   460,   460,   460,
     460,   460,   460,   460,   460,   460,   460,   460,   460,   460,
     460,   460,   460,   460,   460,   460,   460,   460,   460,   460,
     460,   460,   460,   460,   460,   460,   460,   460,   460,   460,
     460,   460,   460,   460,   460,   460,   460,   460,   460,   460,
     460,   460,   460,   460,   460,   460,   460,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   487,   488,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   511,
     510,   512,   512,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   515,   514,   516,   516,   517,   517,   517,   517,   517,
     517,   517,   517,   517,   517,   517,   517,   517,   517,   517,
     517,   517,   517,   518,   519,   520,   521,   522,   524,   523,
     525,   525,   526,   526,   526,   526,   526,   526,   526,   527,
     528,   530,   529,   531,   531,   532,   532,   533,   534,   536,
     535,   537,   537,   538,   538,   539,   540,   540,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   556,   557,
     558,   558,   559,   559,   559,   559,   559,   559,   559,   560,
     561,   562,   563,   564,   565
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
       1,     1,     1,     2,     4,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     6,     0,     5,     3,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     2,
       4,     3,     1,     1,     3,     4,     4,     0,     6,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     4,     4,
       4,     4,     4,     0,     5,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     0,
       6,     2,     1,     1,     1,     1,     2,     4,     4,     4,
       0,     6,     2,     1,     1,     1,     1,     2,     4,     4,
       0,     5,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     6,     2,     1,     1,
       1,     2,     4,     0,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     7,
       0,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     1,     4,     4,     4,     4,     4,     4,
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
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
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
       2,     0,     1,     0,     0,   227,     0,   177,   338,   407,
     416,   423,     0,   598,   392,   205,     0,     0,   110,   279,
       0,     0,   290,   315,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,     0,
     179,   340,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    79,    78,     0,   643,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   627,   628,   629,   630,   631,   633,
     634,   635,   636,   637,   632,   638,   639,   640,   641,   642,
     195,     0,   180,   363,     0,   341,     0,     0,     0,   497,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   571,     0,   549,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   440,   491,   492,
     489,   493,   494,   495,   496,   490,   451,   441,   442,   480,
     443,   444,   445,   446,   447,   448,   449,   450,   485,   452,
     453,   454,   456,   461,   457,   459,   458,   474,   475,   460,
     462,   463,   464,   465,   468,   466,   455,   467,   470,   479,
     481,   482,   471,   472,   487,   488,   484,   473,   469,   477,
     478,   476,   483,   486,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,    88,
      89,    92,    94,    93,    90,    91,     0,     0,     0,     0,
      42,    43,    44,   137,     0,   113,     0,   668,     0,     0,
       0,     0,     0,     0,     0,   661,   662,   663,   664,   666,
     665,   667,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,    61,    58,    51,    60,
      54,    55,    56,    52,    59,    57,    53,     0,     0,    80,
       0,     0,     0,     0,    75,     0,     0,     0,     0,     0,
     253,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   230,   231,   232,   241,   233,   246,   234,
     235,   236,   237,   244,   238,   239,   240,   242,   243,   245,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   626,     0,     0,   413,
       0,     0,     0,   410,   411,   412,   421,     0,     0,   419,
     420,   435,     0,     0,   425,   434,     0,   431,   432,   433,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   439,   608,   619,
       0,     0,   611,     0,     0,     0,   601,   602,   603,   604,
     605,   606,   607,   404,     0,   394,     0,   403,     0,   400,
     401,   402,     0,   207,     0,     0,     0,   216,     0,   214,
     215,   217,   218,    95,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,    45,     0,     0,     0,    41,     0,
       0,     0,     0,     0,     0,   282,   283,   284,   285,     0,
       0,     0,     0,     0,     0,     0,   660,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,   300,     0,     0,   293,   294,   295,   296,
       0,     0,   323,     0,   318,   319,   320,     0,     0,     0,
      74,   247,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   229,
       0,     0,     0,     0,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   625,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     371,     0,     0,     0,     0,     0,     0,     0,     0,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   359,   356,
     358,   357,   355,   352,   353,   354,   360,     0,     0,     0,
     409,     0,     0,   418,     0,     0,     0,     0,   430,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,     0,     0,     0,   438,     0,
       0,     0,     0,     0,     0,     0,   600,     0,     0,     0,
       0,   399,   219,     0,     0,     0,     0,     0,   213,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,     0,     0,    40,     0,     0,     0,
       0,     0,   155,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   115,   116,
     117,   118,   132,   119,   133,   120,   121,   122,   128,   123,
     124,   125,   126,   127,   129,   130,   131,   134,   286,     0,
       0,     0,     0,   281,     0,     0,     0,     0,     0,     0,
     659,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,   297,     0,     0,     0,     0,   292,   321,
       0,     0,     0,   317,    83,    82,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   228,   658,   655,   654,   644,    26,    26,
      26,    26,    26,    28,    27,   648,   649,   653,   651,   656,
     657,   650,   652,   645,   646,   647,   193,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   181,   361,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   342,     0,
       0,   408,     0,   417,     0,     0,     0,   424,   511,   515,
     500,   529,   530,   543,   542,   595,   547,   509,   597,   538,
     545,   510,   498,   499,   518,   507,   537,   508,   506,   520,
     519,   539,   514,   513,   512,   540,   536,   593,   594,   533,
     575,   590,   591,   576,   577,   578,   585,   579,   588,   592,
     581,   586,   582,   587,   580,   584,   583,   589,     0,   574,
     535,   553,   568,   569,   554,   555,   556,   563,   557,   566,
     570,   559,   564,   560,   565,   558,   562,   561,   567,     0,
     552,   503,   504,   528,   531,   546,   502,   541,   505,   532,
     526,   527,   524,   525,   522,   523,   517,   516,    34,    34,
      34,    36,    35,   596,   548,   534,   544,   501,   521,     0,
       0,     0,     0,     0,     0,   599,     0,     0,     0,   393,
       0,     0,     0,   223,     0,   222,   206,   100,   101,    99,
      98,   102,   108,   103,   107,   105,   106,   104,    97,    96,
     109,    46,    47,   135,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,     0,     0,     0,   280,   673,
     669,   672,   674,   670,   671,    67,    73,    65,    69,    68,
      64,    63,    66,    72,    70,    71,     0,     0,     0,   291,
       0,     0,   316,   272,   251,   252,   271,   263,   264,   260,
     266,   262,   261,   268,   265,     0,   267,   259,     0,   256,
     258,   274,   270,   269,   278,   273,   249,   277,   276,   275,
     250,   248,    29,    30,    31,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   178,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   339,   414,   415,   422,
     436,   437,   429,     0,   428,   572,     0,   550,     0,    37,
      38,    39,   624,   623,     0,   622,   610,   609,   616,   615,
       0,   614,   618,   617,   406,   398,     0,   397,   405,   212,
     211,     0,   210,   226,   225,     0,   220,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,   288,   289,
     287,   298,   304,   310,   314,   313,   312,   309,   305,   308,
     311,   306,   307,     0,   303,   299,   322,   327,   333,   337,
     336,   335,   332,   328,   331,   334,   329,   330,     0,   326,
     257,   254,     0,   199,   201,   203,   202,   200,   194,   198,
     196,   197,   204,   366,   368,   369,   387,   391,   390,   386,
     385,   384,   370,   380,   381,   378,   379,   377,     0,   382,
       0,   374,   376,   364,   388,   389,   362,   367,   383,   365,
     426,     0,   573,   551,   620,     0,   612,     0,   395,     0,
     208,     0,   224,   221,   154,   143,   152,   140,   169,   167,
     176,   166,   161,   170,   174,   163,   171,     0,   173,   168,
     162,   175,   172,   164,   165,     0,   158,   160,   150,   144,
     141,   147,   136,   151,   139,   153,   145,   146,   142,   149,
     138,   148,   301,     0,   324,     0,   255,   375,   372,     0,
     427,   621,   613,   396,   209,   159,   156,     0,   302,   325,
     373,   157
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     1,    24,   863,   864,  1011,  1012,    25,   259,   260,
     261,   262,    26,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,    27,    71,    72,    73,
      74,    75,    28,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,    29,    61,   264,   777,   778,   779,   265,
     780,   781,   782,   783,   784,   785,   786,   787,   788,   789,
     790,   791,   792,   793,   794,   795,   796,   797,  1058,  1335,
    1336,  1337,    30,    50,   111,   598,   599,   600,   112,   601,
     602,   603,   604,   605,   606,   607,   608,   609,    31,    58,
     477,   733,  1201,  1202,   478,   479,   480,  1034,  1035,   481,
     482,    32,    48,   332,   333,   334,   335,   336,   337,   338,
     339,   556,  1118,  1119,  1120,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,    33,    62,   504,   505,   506,
     507,   508,    34,    65,   535,   536,   537,   538,   539,   825,
    1243,  1244,    35,    66,   543,   544,   545,   546,   831,  1258,
    1259,    36,    51,   114,   628,   629,   630,   115,   631,   632,
     633,   634,   635,   636,   637,   899,  1290,  1291,  1292,   638,
     639,   640,   641,   642,   643,   644,   645,   646,    37,    57,
     467,   728,  1196,  1197,   468,   469,   470,   471,    38,    52,
     372,   373,   374,   375,    39,    53,   378,   379,   380,    40,
      54,   385,   656,  1173,  1174,   386,   387,   388,   389,    41,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   424,   989,   990,   228,   422,   968,   969,   229,
     230,   231,   232,   233,    42,    56,   455,   456,   457,   458,
     459,   722,  1190,  1191,   460,   461,   462,   719,  1184,  1185,
      43,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    44,   274,
     275,   276,   277,   278,   279,   280,   281
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -599
static const short int yypact[] =
{
    -599,   781,  -599,  -167,  -243,  -599,  -240,  -599,  -599,  -599,
    -599,  -599,  -233,  -599,  -599,  -599,  -230,  -221,  -599,  -599,
    -216,  -211,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,   275,  -198,   638,
     -92,   -87,  -186,  -176,  -134,   437,  -132,  -118,  -116,    81,
      67,   -12,   -70,   334,   513,   -44,   -41,   -24,   -21,   -17,
     -10,     3,  -599,  -599,  -599,  -599,   680,  -599,     0,     5,
      23,    36,    37,    52,    54,    61,    79,    82,    84,    90,
      91,    94,    97,   190,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,    20,  -599,  -599,    88,  -599,    65,    16,   183,  -599,
     101,   104,   107,   116,   117,   124,   125,   131,   132,   135,
     137,   138,   140,   149,   151,   152,   155,   167,   176,   181,
     182,   185,   186,   187,   197,   200,   202,   204,   205,   207,
     209,   215,  -599,   216,  -599,   217,   219,   221,   224,   225,
     227,   231,   235,   237,   238,   243,   245,   247,   248,   249,
     250,   252,   253,   254,   255,   258,    13,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,    60,    70,     9,    30,   259,   261,
     262,   263,   265,   268,   269,   272,    68,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,   193,   273,   279,    48,
    -599,  -599,  -599,  -599,   115,  -599,    89,  -599,   282,   285,
     286,   289,   290,   293,    87,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,   211,   301,   302,   305,   306,   307,   308,   309,
     310,   313,   314,   315,   191,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,    28,   220,  -599,
     322,   330,   377,   319,  -599,   321,   324,   332,   333,   335,
    -599,   336,   337,   338,   339,   341,   343,   346,   347,   348,
     350,   354,   228,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
     144,   435,   442,   393,   445,   445,   457,   476,   418,   419,
     420,   421,   424,   427,   428,   371,  -599,   385,   854,  -599,
     367,   369,    10,  -599,  -599,  -599,  -599,   374,    14,  -599,
    -599,  -599,   375,   380,  -599,  -599,    43,  -599,  -599,  -599,
     446,   445,   449,   445,   450,   511,   491,   514,   453,   456,
     459,   520,   500,   462,   523,   524,   525,   466,   445,   469,
     531,   512,   474,   535,   536,   539,   445,   543,   537,   544,
     552,   499,   439,   503,   441,   566,   570,   445,   445,   515,
     572,   553,   516,   517,    38,    58,   519,   521,   445,   445,
     583,   445,   526,   528,   529,   533,   475,  -599,  -599,  -599,
     471,   473,  -599,   477,   484,   168,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,   485,  -599,   486,  -599,   128,  -599,
    -599,  -599,   478,  -599,   488,   489,   492,  -599,    27,  -599,
    -599,  -599,  -599,  -599,   578,   595,   596,   600,   210,   603,
     605,   567,   518,  -599,  -599,   611,   614,   527,  -599,   538,
     530,   541,   545,   546,    19,  -599,  -599,  -599,  -599,   576,
     579,   580,   581,   591,   445,   532,  -599,  -599,   632,   599,
     635,   640,   650,   651,   652,   654,   676,   656,   658,   560,
    -599,   565,   564,  -599,   569,    66,  -599,  -599,  -599,  -599,
     574,   573,  -599,    74,  -599,  -599,  -599,   577,   582,   589,
    -599,  -599,   629,   682,   641,   660,   588,   661,   662,   664,
     669,   670,   697,   732,   716,   717,   684,   721,   626,  -599,
     639,   643,   644,   645,   229,   646,   647,   653,   655,   657,
     671,   677,   679,   681,   683,   686,  -599,   690,   637,   648,
     649,   659,   666,   673,   685,   689,   691,   694,   214,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
     693,   695,   696,   698,   700,   701,   704,   705,   706,   709,
    -599,   710,   711,   712,   714,   715,   723,   727,   208,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,   737,   749,   731,
    -599,   753,   733,  -599,   755,   757,   734,   736,  -599,   738,
     739,   740,   741,   748,   750,   751,   759,   762,   766,   769,
     770,   771,   773,   774,   775,   776,   784,   786,   787,   789,
     790,   791,   792,   793,   794,   795,   796,   797,   798,   799,
     801,   772,   802,   808,   803,   804,   805,   806,   807,   809,
     810,   811,   812,   813,   814,   815,   816,   817,   818,   819,
     820,   353,   821,   822,   823,   824,   825,   826,  -599,   827,
     445,   720,   828,   760,   779,   829,  -599,   783,   830,   833,
     832,  -599,  -599,   831,   852,   871,   920,   835,  -599,   836,
     837,   838,   839,   840,   841,   842,   843,   844,   845,   846,
     847,   848,   849,  -599,   850,   851,  -599,   853,   855,   856,
     857,   858,  -599,   859,   860,   861,   862,   863,   864,   865,
     866,   867,   868,   869,   870,   872,   873,   114,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,   907,
     926,   927,   874,  -599,   877,   878,   879,   880,   881,   882,
    -599,   883,   884,   885,   886,   887,   888,   889,   890,   891,
     892,   893,  -599,  -599,   951,   894,   953,   895,  -599,  -599,
     954,   896,   898,  -599,  -599,  -599,  -599,   900,   901,   902,
     903,   692,   904,   905,   906,   908,   909,   910,   911,   912,
     913,   914,   915,  -599,  -599,  -599,  -599,  -599,   445,   445,
     445,   445,   445,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,   445,   976,   977,
    1014,  1016,  1006,  1036,   445,   445,   583,   917,  -599,  -599,
    1017,    92,   742,  1018,  1019,   981,   982,   983,  1023,   922,
    1025,  1026,  1027,  1028,  1050,  1030,  1031,   933,  -599,   934,
     935,  -599,   936,  -599,   937,   938,   785,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -239,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -236,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,   583,   583,
     583,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,    -5,
     939,   940,    12,   941,   942,  -599,   943,  1038,   945,  -599,
     -53,   946,   947,  1003,  -225,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  1009,  1049,  1011,  1012,   950,  1015,
    1020,  1021,  1022,  1053,  1024,  1055,  1029,  1032,  1033,  1056,
    1034,  1057,  1035,   959,  -599,   963,   965,   966,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,   967,   608,   968,  -599,
     970,   688,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,   800,  -599,  -599,  -217,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,   971,   978,   979,
     980,   984,   985,   986,   987,   988,   989,  -599,   990,   991,
     992,   993,   994,   995,   996,   997,   998,   999,   370,  1000,
    1001,  1002,  1004,  1005,  1007,  1008,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -212,  -599,  -599,   772,  -599,   808,  -599,
    -599,  -599,  -599,  -599,  -206,  -599,  -599,  -599,  -599,  -599,
    -197,  -599,  -599,  -599,  -599,  -599,  -172,  -599,  -599,  -599,
    -599,  -149,  -599,  -599,  -599,  1096,  -599,   920,  1010,  1013,
    1037,  1039,   593,  1040,  1041,  1042,  1043,  1044,  1045,  1046,
    1047,  1048,  1051,  1052,  1054,  1058,  1059,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -142,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -141,  -599,
    -599,  -599,   692,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,   312,  -599,
    -113,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,   785,  -599,  -599,  -599,    -5,  -599,    12,  -599,  1038,
    -599,   -53,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,   636,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,   -74,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,   608,  -599,   688,  -599,  -599,  -599,   370,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,   593,  -599,  -599,
    -599,  -599
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -599,  -599,  -599,  -419,  -354,  -598,  -438,  -599,  -599,   962,
    -599,  -599,  -599,  -599,   931,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  1155,  -599,
    -599,  -599,  -599,  -599,  1060,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,   162,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -423,  -100,  -599,  -599,  -599,  -599,   663,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,   -64,  -599,   777,  -599,  -599,    46,  -599,
    -599,  -599,  -599,  -599,   918,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,    -6,   143,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,   756,  -599,
    -599,  -599,  -599,  -599,  -599,   724,  -599,  -599,  -599,  -599,
    -599,   -91,  -599,  -599,  -599,   722,  -599,  -599,  -599,  -599,
     -89,  -599,  -599,  -599,  -599,   642,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,   -96,   -20,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,   -45,  -599,   875,  -599,  -599,  -599,  -599,
    -599,   897,  -599,  -599,  -599,  -599,  -599,   899,  -599,  -599,
    -599,  -599,  -599,  -599,   -34,  -599,   919,  -599,  -599,  -599,
    -599,  1095,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,    95,  -599,  -599,  -599,    96,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,   876,  -599,  -599,
    -599,  -599,  -599,   -33,  -599,  -599,  -599,  -599,  -599,   -30,
    -599,  -599,  1183,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,  -599,
    1061,  -599,  -599,  -599,  -599,  -599,  -599
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned short int yytable[] =
{
     575,   576,   712,    47,    67,  1175,    49,  1182,  1177,  1176,
     472,   369,  1178,    55,   119,   376,    59,   376,  1199,  1206,
     500,   120,   121,  1207,  1188,    60,   122,  1261,   472,   531,
      63,  1262,  1300,   123,   124,    64,  1301,   660,  1304,   662,
      68,   125,  1305,   501,   381,   126,   127,  1306,    76,   256,
      69,  1307,   128,   110,   677,   129,   130,   131,   113,   132,
     116,   448,   685,   473,   449,   133,   369,   531,   256,   237,
     117,   463,  1308,   696,   697,   540,  1309,    45,    46,   134,
     135,   473,   237,   136,   709,   710,   474,   713,   267,   137,
     500,   475,   370,   138,   139,  1310,   377,   140,   377,  1311,
     141,   142,  1352,  1354,   474,   450,  1353,  1355,   451,   475,
     143,   144,   118,   501,   234,   757,    70,   145,   146,   758,
     147,   148,   149,   150,   238,   239,   240,   268,   235,   463,
     236,  1358,   241,   263,   151,  1359,   502,   238,   239,   240,
     759,   532,   269,   152,   153,   241,   154,   370,   155,   156,
     157,   158,   760,   476,   159,   452,   382,   371,   270,   257,
     809,   271,   272,   761,   242,   160,   503,  1200,   762,   448,
    1366,   476,   449,   453,  1367,   763,   266,   242,   257,   532,
     273,  1183,   764,   161,   381,   162,   765,   541,   258,   163,
     383,    77,   282,   164,   165,   166,   167,   243,  1189,   766,
     168,   169,   307,   533,    78,   308,   502,   258,   170,   610,
     243,   611,   371,   450,   612,   587,   451,   464,   384,   613,
     309,   540,   703,   704,    79,    80,   310,   767,   283,   315,
     311,    81,   768,   614,   615,   616,   503,   312,   171,   617,
     172,   533,   705,   706,   588,   465,   173,   350,   313,   542,
     316,   174,   351,   769,   317,   649,   175,   618,   446,   652,
     534,   619,   620,   452,   802,   770,   367,   771,   772,   284,
     352,   773,   737,   244,   483,   464,    67,   318,   319,    82,
      83,   453,   320,   353,   354,   621,   244,   622,   657,    84,
      85,   321,   454,   497,  1149,  1150,   382,   322,   534,   355,
     623,   356,   466,   465,   285,   245,   286,   287,   357,    86,
      87,   827,    68,   492,   323,   589,   590,   591,   245,   832,
     592,   624,    69,  1283,    88,  1284,   358,   593,   570,   359,
     383,   360,   515,   541,   368,   267,    89,   361,   362,  1285,
     594,   363,   324,  1286,   364,   774,   775,   288,   390,   289,
     325,   391,   625,   574,   392,   776,   595,   596,   384,  1073,
     466,   499,   290,   393,   394,   626,  1020,   326,  1008,  1009,
    1010,   395,   396,   730,   268,   627,   327,   328,   397,   398,
     597,  1283,   399,  1284,   400,   401,   587,   402,    70,   269,
     858,   859,   860,   861,   862,   542,   403,  1285,   404,   405,
     454,  1286,   406,  1287,   291,   270,   329,   330,   271,   272,
    1179,  1180,  1181,   725,   407,   588,   743,   744,   745,   746,
     747,   748,   749,   408,    90,    91,    92,   273,   409,   410,
     292,   293,   411,   412,   413,   365,   529,   494,   119,  1132,
    1133,  1134,  1135,  1136,   414,   120,   121,   415,  1146,   416,
     122,   417,   418,   907,   419,   517,   420,   123,   124,   887,
     331,  1287,   421,   423,   425,   125,   426,   547,   427,   126,
     127,   428,   429,   568,   430,   548,   128,   711,   431,   129,
     130,   131,   432,   132,   433,   434,   589,   590,   591,   133,
     435,   592,   436,  1288,   437,   438,   439,   440,   593,   441,
     442,   443,   444,   134,   135,   445,   484,   136,   485,   486,
     487,   594,   488,   137,   282,   489,   490,   138,   139,   491,
     495,   140,   549,  1137,   141,   142,   496,   595,   596,   509,
    1144,  1145,   510,   511,   143,   144,   512,   513,  1289,   757,
     514,   145,   146,   758,   147,   148,   149,   150,   518,   519,
     283,   597,   520,   521,   522,   523,   524,   525,   151,   571,
     526,   527,   528,   550,   759,   551,   572,   152,   153,   574,
     154,   552,   155,   156,   157,   158,   760,   573,   159,   553,
     554,   577,   555,   557,   558,   559,   560,   761,   561,   160,
     562,   284,   762,   563,   564,   565,  1289,   566,  1318,   763,
     578,   567,   579,   580,   581,   582,   764,   161,   583,   162,
     765,   584,   585,   163,   647,   586,   648,   164,   165,   166,
     167,   651,   654,   766,   168,   169,   285,   655,   286,   287,
     659,  1319,   170,   661,   663,   664,   665,   667,   666,    77,
     668,  1318,  1320,   669,   670,   671,   672,   673,   674,   675,
     676,   767,    78,   678,  1321,   679,   768,   680,   681,   682,
     683,  1322,   171,   684,   172,  1323,  1324,   686,   688,   288,
     173,   289,    79,    80,  1319,   174,   689,   769,  1325,    81,
     175,   315,   687,   690,   290,  1320,   691,   692,   693,   770,
     694,   771,   772,  1232,   695,   773,   699,  1321,   700,   698,
     701,   702,   316,   707,  1322,   708,   317,   711,  1323,  1324,
     714,  1326,   715,   716,  1107,  1108,  1327,   717,   720,   718,
     721,  1325,   732,   739,   723,  1328,   291,    82,    83,   318,
     319,   724,   727,   729,   320,   734,   735,    84,    85,   736,
     740,   741,  1109,   321,  1329,   742,  1330,  1331,   750,   322,
     751,   752,   292,   293,  1326,  1110,   754,    86,    87,   755,
     804,  1111,   753,   805,   806,   807,   323,  1233,  1328,   774,
     775,   756,    88,  1247,   798,   808,   810,   811,  1112,   776,
     813,     2,     3,   812,    89,   814,     4,  1329,   799,  1330,
    1331,     5,   800,   801,   324,   815,   816,   817,  1234,   818,
     819,   820,   325,   821,   822,     6,  1113,     7,  1332,   823,
       8,   824,  1235,   837,  1114,  1115,   826,     9,   829,   326,
     830,   834,  1107,  1108,  1333,   839,   835,   838,   327,   328,
    1236,  1237,    10,   836,  1334,   841,  1238,  1239,  1240,  1241,
      11,    12,   847,    13,   840,   842,   843,  1248,   844,  1242,
    1109,  1332,  1116,   845,   846,   610,   848,   611,   329,   330,
     612,   849,   850,  1110,    14,   613,   852,  1333,   851,  1111,
     853,  1117,    90,    91,    92,    15,    16,  1334,  1249,   614,
     615,   616,   909,   854,   877,   617,  1112,   855,   856,   857,
     865,   866,  1250,    17,   910,   878,   879,   867,   912,   868,
     914,   869,   915,   618,  1021,  1023,   880,   619,   620,    18,
    1251,  1252,   331,   881,  1113,   870,  1253,  1254,  1255,  1256,
     882,   871,  1114,   872,  1024,   873,  1151,   874,  1026,  1257,
     875,   621,   883,   622,   876,  1172,   884,   889,   885,  1074,
      19,   886,   890,   891,  1371,   892,   623,   893,   894,    20,
      21,   895,   896,   897,    22,    23,   898,   900,   901,   902,
    1116,   903,   904,   950,   951,   952,   953,   624,   954,   955,
     905,   956,   957,   958,   906,   911,   959,   913,  1028,  1117,
     917,   916,   918,   919,   920,   921,   960,   961,   962,   963,
     964,   965,   922,   966,   923,   924,   967,  1031,   625,   971,
     972,   973,   974,   925,   975,   976,   926,   977,   978,   979,
     927,   626,   980,   928,   929,   930,  1032,   931,   932,   933,
     934,   627,   981,   982,   983,   984,   985,   986,   935,   987,
     936,   937,   988,   938,   939,   940,   941,   942,   943,   944,
     945,   946,   947,   948,  1033,   949,   970,   991,   992,   993,
     994,   995,  1075,   996,   997,   998,   999,  1000,  1001,  1002,
    1003,  1004,  1005,  1006,  1007,  1013,  1014,  1015,  1016,  1017,
    1018,  1076,  1077,  1025,  1019,  1022,  1029,  1027,  1030,  1036,
    1037,  1038,  1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,
    1047,  1048,  1049,  1050,  1051,  1052,  1096,  1053,  1098,  1100,
    1138,  1139,  1054,  1055,  1056,  1057,  1059,  1060,  1061,  1062,
    1063,  1064,  1065,  1066,  1067,  1068,  1069,  1070,  1078,  1071,
    1072,  1079,  1080,  1081,  1082,  1083,  1084,  1085,  1086,  1087,
    1088,  1089,  1090,  1091,  1092,  1093,  1094,  1095,  1140,  1099,
    1141,  1097,  1102,  1101,  1103,  1104,  1105,  1106,  1121,  1122,
    1123,  1142,  1124,  1125,  1126,  1127,  1128,  1129,  1130,  1131,
    1143,  1147,  1148,  1152,  1153,  1154,  1155,  1156,  1157,  1158,
    1159,  1160,  1161,  1162,  1163,  1164,  1165,  1166,  1167,  1168,
    1169,  1170,  1171,  1186,  1187,  1192,  1193,  1194,  1195,  1198,
    1203,  1204,  1205,  1208,  1209,  1210,  1211,  1212,  1217,  1213,
    1219,  1223,  1225,  1227,  1214,  1215,  1216,  1228,  1218,  1229,
    1230,  1231,  1245,  1220,  1246,  1263,  1221,  1222,  1224,  1226,
    1312,   498,  1264,  1265,  1266,   530,   314,  1365,  1267,  1268,
    1269,  1270,  1271,  1272,  1273,  1274,  1275,  1276,  1277,  1278,
    1279,  1280,  1281,  1282,  1293,  1294,  1295,  1364,  1296,  1297,
     569,  1298,  1299,  1313,  1314,   738,  1356,  1315,  1260,   828,
     803,   888,  1368,  1370,  1363,   833,  1369,  1360,  1357,   650,
     908,   447,  1302,  1303,  1362,  1361,   366,   653,     0,     0,
       0,  1316,     0,  1317,  1338,  1339,  1340,  1341,  1342,  1343,
    1344,  1345,  1346,     0,     0,  1347,  1348,     0,  1349,     0,
       0,     0,  1350,  1351,     0,   658,   493,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   726,     0,     0,     0,   516,     0,     0,     0,     0,
       0,     0,     0,   731
};

static const short int yycheck[] =
{
     354,   355,   440,   246,     1,   244,   246,    12,   244,   248,
       1,     1,   248,   246,     1,     1,   246,     1,    71,   244,
       1,     8,     9,   248,    12,   246,    13,   244,     1,     1,
     246,   248,   244,    20,    21,   246,   248,   391,   244,   393,
      37,    28,   248,    24,     1,    32,    33,   244,   246,     1,
      47,   248,    39,   145,   408,    42,    43,    44,   145,    46,
     246,     1,   416,    54,     4,    52,     1,     1,     1,     1,
     246,     1,   244,   427,   428,     1,   248,   244,   245,    66,
      67,    54,     1,    70,   438,   439,    77,   441,     1,    76,
       1,    82,    82,    80,    81,   244,    82,    84,    82,   248,
      87,    88,   244,   244,    77,    45,   248,   248,    48,    82,
      97,    98,   246,    24,   246,     1,   113,   104,   105,     5,
     107,   108,   109,   110,    56,    57,    58,    40,   246,     1,
     246,   244,    64,   145,   121,   248,   117,    56,    57,    58,
      26,   113,    55,   130,   131,    64,   133,    82,   135,   136,
     137,   138,    38,   144,   141,    95,   113,   147,    71,   111,
     514,    74,    75,    49,    96,   152,   147,   220,    54,     1,
     244,   144,     4,   113,   248,    61,   246,    96,   111,   113,
      93,   186,    68,   170,     1,   172,    72,   113,   140,   176,
     147,     1,     1,   180,   181,   182,   183,   129,   186,    85,
     187,   188,   246,   175,    14,   246,   117,   140,   195,     1,
     129,     3,   147,    45,     6,     1,    48,   147,   175,    11,
     244,     1,   184,   185,    34,    35,   247,   113,    37,     1,
     247,    41,   118,    25,    26,    27,   147,   247,   225,    31,
     227,   175,   184,   185,    30,   175,   233,   247,   245,   175,
      22,   238,   247,   139,    26,   245,   243,    49,   245,   245,
     232,    53,    54,    95,   245,   151,   246,   153,   154,    78,
     247,   157,   245,   205,   244,   147,     1,    49,    50,    89,
      90,   113,    54,   247,   247,    77,   205,    79,   245,    99,
     100,    63,   232,   245,   202,   203,   113,    69,   232,   247,
      92,   247,   232,   175,   113,   237,   115,   116,   247,   119,
     120,   245,    37,   245,    86,   101,   102,   103,   237,   245,
     106,   113,    47,    11,   134,    13,   247,   113,   184,   247,
     147,   247,   245,   113,   246,     1,   146,   247,   247,    27,
     126,   247,   114,    31,   247,   231,   232,   156,   247,   158,
     122,   247,   144,   124,   247,   241,   142,   143,   175,   245,
     232,   246,   171,   247,   247,   157,   720,   139,    15,    16,
      17,   247,   247,   245,    40,   167,   148,   149,   247,   247,
     166,    11,   247,    13,   247,   247,     1,   247,   113,    55,
     161,   162,   163,   164,   165,   175,   247,    27,   247,   247,
     232,    31,   247,    91,   213,    71,   178,   179,    74,    75,
    1008,  1009,  1010,   245,   247,    30,   206,   207,   208,   209,
     210,   211,   212,   247,   234,   235,   236,    93,   247,   247,
     239,   240,   247,   247,   247,   245,   245,   244,     1,   858,
     859,   860,   861,   862,   247,     8,     9,   247,   886,   247,
      13,   247,   247,   245,   247,   244,   247,    20,    21,   245,
     232,    91,   247,   247,   247,    28,   247,   145,   247,    32,
      33,   247,   247,   245,   247,   145,    39,   124,   247,    42,
      43,    44,   247,    46,   247,   247,   101,   102,   103,    52,
     247,   106,   247,   123,   247,   247,   247,   247,   113,   247,
     247,   247,   247,    66,    67,   247,   247,    70,   247,   247,
     247,   126,   247,    76,     1,   247,   247,    80,    81,   247,
     247,    84,   145,   877,    87,    88,   247,   142,   143,   247,
     884,   885,   247,   247,    97,    98,   247,   247,   226,     1,
     247,   104,   105,     5,   107,   108,   109,   110,   247,   247,
      37,   166,   247,   247,   247,   247,   247,   247,   121,   124,
     247,   247,   247,   244,    26,   244,   124,   130,   131,   124,
     133,   247,   135,   136,   137,   138,    38,   184,   141,   247,
     247,   124,   247,   247,   247,   247,   247,    49,   247,   152,
     247,    78,    54,   247,   247,   247,   226,   247,     5,    61,
     124,   247,   184,   184,   184,   184,    68,   170,   184,   172,
      72,   184,   184,   176,   247,   244,   247,   180,   181,   182,
     183,   247,   247,    85,   187,   188,   113,   247,   115,   116,
     184,    38,   195,   184,   184,   124,   145,   184,   124,     1,
     184,     5,    49,   184,   124,   145,   184,   124,   124,   124,
     184,   113,    14,   184,    61,   124,   118,   145,   184,   124,
     124,    68,   225,   124,   227,    72,    73,   124,   124,   156,
     233,   158,    34,    35,    38,   238,   124,   139,    85,    41,
     243,     1,   145,   184,   171,    49,   247,   184,   247,   151,
     124,   153,   154,    85,   124,   157,   124,    61,   145,   184,
     184,   184,    22,   184,    68,   184,    26,   124,    72,    73,
     184,   118,   184,   184,    22,    23,   123,   184,   247,   244,
     247,    85,   244,   145,   247,   132,   213,    89,    90,    49,
      50,   247,   247,   247,    54,   247,   247,    99,   100,   247,
     145,   145,    50,    63,   151,   145,   153,   154,   145,    69,
     145,   184,   239,   240,   118,    63,   145,   119,   120,   145,
     184,    69,   244,   184,   184,   184,    86,   159,   132,   231,
     232,   244,   134,    85,   244,   184,   244,   145,    86,   241,
     145,     0,     1,   184,   146,   145,     5,   151,   247,   153,
     154,    10,   247,   247,   114,   145,   145,   145,   190,   145,
     124,   145,   122,   145,   244,    24,   114,    26,   215,   244,
      29,   247,   204,   184,   122,   123,   247,    36,   244,   139,
     247,   244,    22,    23,   231,   184,   244,   145,   148,   149,
     222,   223,    51,   244,   241,   247,   228,   229,   230,   231,
      59,    60,   145,    62,   184,   184,   184,   159,   184,   241,
      50,   215,   160,   184,   184,     1,   124,     3,   178,   179,
       6,   145,   145,    63,    83,    11,   145,   231,   184,    69,
     244,   179,   234,   235,   236,    94,    95,   241,   190,    25,
      26,    27,   145,   244,   247,    31,    86,   244,   244,   244,
     244,   244,   204,   112,   145,   247,   247,   244,   145,   244,
     145,   244,   145,    49,   184,   145,   247,    53,    54,   128,
     222,   223,   232,   247,   114,   244,   228,   229,   230,   231,
     247,   244,   122,   244,   145,   244,   184,   244,   145,   241,
     244,    77,   247,    79,   244,   150,   247,   244,   247,   777,
     159,   247,   247,   247,  1367,   247,    92,   247,   247,   168,
     169,   247,   247,   247,   173,   174,   247,   247,   247,   247,
     160,   247,   247,   191,   192,   193,   194,   113,   196,   197,
     247,   199,   200,   201,   247,   244,   204,   244,   145,   179,
     244,   247,   244,   244,   244,   244,   214,   215,   216,   217,
     218,   219,   244,   221,   244,   244,   224,   145,   144,   191,
     192,   193,   194,   244,   196,   197,   244,   199,   200,   201,
     244,   157,   204,   244,   244,   244,   145,   244,   244,   244,
     244,   167,   214,   215,   216,   217,   218,   219,   244,   221,
     244,   244,   224,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   124,   244,   244,   244,   244,   244,
     244,   244,   145,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   145,   145,   244,   247,   247,   244,   247,   247,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   145,   244,   145,   145,
     124,   124,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   244,   247,
     247,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   124,   244,
     124,   247,   244,   247,   244,   244,   244,   244,   244,   244,
     244,   145,   244,   244,   244,   244,   244,   244,   244,   244,
     124,   244,   145,   145,   145,   184,   184,   184,   145,   247,
     145,   145,   145,   145,   124,   145,   145,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   150,   244,
     244,   244,   189,   184,   145,   184,   184,   247,   145,   184,
     145,   145,   145,   244,   184,   184,   184,   244,   184,   244,
     244,   244,   244,   184,   244,   244,   184,   184,   184,   184,
     124,   259,   244,   244,   244,   294,    71,  1327,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,  1311,   244,   244,
     332,   244,   244,  1207,   244,   478,  1262,   244,  1115,   535,
     504,   598,  1353,  1359,  1309,   543,  1355,  1301,  1288,   372,
     628,   176,  1176,  1178,  1307,  1305,    93,   378,    -1,    -1,
      -1,   244,    -1,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,    -1,    -1,   244,   244,    -1,   244,    -1,
      -1,    -1,   244,   244,    -1,   386,   246,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   455,    -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   468
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   250,     0,     1,     5,    10,    24,    26,    29,    36,
      51,    59,    60,    62,    83,    94,    95,   112,   128,   159,
     168,   169,   173,   174,   251,   256,   261,   275,   281,   292,
     321,   337,   350,   374,   381,   391,   400,   427,   437,   443,
     448,   458,   523,   539,   557,   244,   245,   246,   351,   246,
     322,   401,   438,   444,   449,   246,   524,   428,   338,   246,
     246,   293,   375,   246,   246,   382,   392,     1,    37,    47,
     113,   276,   277,   278,   279,   280,   246,     1,    14,    34,
      35,    41,    89,    90,    99,   100,   119,   120,   134,   146,
     234,   235,   236,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   556,
     145,   323,   327,   145,   402,   406,   246,   246,   246,     1,
       8,     9,    13,    20,    21,    28,    32,    33,    39,    42,
      43,    44,    46,    52,    66,    67,    70,    76,    80,    81,
      84,    87,    88,    97,    98,   104,   105,   107,   108,   109,
     110,   121,   130,   131,   133,   135,   136,   137,   138,   141,
     152,   170,   172,   176,   180,   181,   182,   183,   187,   188,
     195,   225,   227,   233,   238,   243,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   514,   518,
     519,   520,   521,   522,   246,   246,   246,     1,    56,    57,
      58,    64,    96,   129,   205,   237,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,     1,   111,   140,   257,
     258,   259,   260,   145,   294,   298,   246,     1,    40,    55,
      71,    74,    75,    93,   558,   559,   560,   561,   562,   563,
     564,   565,     1,    37,    78,   113,   115,   116,   156,   158,
     171,   213,   239,   240,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   246,   246,   244,
     247,   247,   247,   245,   277,     1,    22,    26,    49,    50,
      54,    63,    69,    86,   114,   122,   139,   148,   149,   178,
     179,   232,   352,   353,   354,   355,   356,   357,   358,   359,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   245,   541,   246,   246,     1,
      82,   147,   439,   440,   441,   442,     1,    82,   445,   446,
     447,     1,   113,   147,   175,   450,   454,   455,   456,   457,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   515,   247,   511,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   245,   460,     1,     4,
      45,    48,    95,   113,   232,   525,   526,   527,   528,   529,
     533,   534,   535,     1,   147,   175,   232,   429,   433,   434,
     435,   436,     1,    54,    77,    82,   144,   339,   343,   344,
     345,   348,   349,   244,   247,   247,   247,   247,   247,   247,
     247,   247,   245,   283,   244,   247,   247,   245,   258,   246,
       1,    24,   117,   147,   376,   377,   378,   379,   380,   247,
     247,   247,   247,   247,   247,   245,   559,   244,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   245,
     263,     1,   113,   175,   232,   383,   384,   385,   386,   387,
       1,   113,   175,   393,   394,   395,   396,   145,   145,   145,
     244,   244,   247,   247,   247,   247,   360,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   245,   353,
     184,   124,   124,   184,   124,   253,   253,   124,   124,   184,
     184,   184,   184,   184,   184,   184,   244,     1,    30,   101,
     102,   103,   106,   113,   126,   142,   143,   166,   324,   325,
     326,   328,   329,   330,   331,   332,   333,   334,   335,   336,
       1,     3,     6,    11,    25,    26,    27,    31,    49,    53,
      54,    77,    79,    92,   113,   144,   157,   167,   403,   404,
     405,   407,   408,   409,   410,   411,   412,   413,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   247,   247,   245,
     440,   247,   245,   446,   247,   247,   451,   245,   455,   184,
     253,   184,   253,   184,   124,   145,   124,   184,   184,   184,
     124,   145,   184,   124,   124,   124,   184,   253,   184,   124,
     145,   184,   124,   124,   124,   253,   124,   145,   124,   124,
     184,   247,   184,   247,   124,   124,   253,   253,   184,   124,
     145,   184,   184,   184,   185,   184,   185,   184,   184,   253,
     253,   124,   255,   253,   184,   184,   184,   184,   244,   536,
     247,   247,   530,   247,   247,   245,   526,   247,   430,   247,
     245,   434,   244,   340,   247,   247,   247,   245,   344,   145,
     145,   145,   145,   206,   207,   208,   209,   210,   211,   212,
     145,   145,   184,   244,   145,   145,   244,     1,     5,    26,
      38,    49,    54,    61,    68,    72,    85,   113,   118,   139,
     151,   153,   154,   157,   231,   232,   241,   295,   296,   297,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   244,   247,
     247,   247,   245,   377,   184,   184,   184,   184,   184,   253,
     244,   145,   184,   145,   145,   145,   145,   145,   145,   124,
     145,   145,   244,   244,   247,   388,   247,   245,   384,   244,
     247,   397,   245,   394,   244,   244,   244,   184,   145,   184,
     184,   247,   184,   184,   184,   184,   184,   145,   124,   145,
     145,   184,   145,   244,   244,   244,   244,   244,   161,   162,
     163,   164,   165,   252,   253,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   245,   325,   244,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   414,
     247,   247,   247,   247,   247,   247,   247,   245,   404,   145,
     145,   244,   145,   244,   145,   145,   247,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     191,   192,   193,   194,   196,   197,   199,   200,   201,   204,
     214,   215,   216,   217,   218,   219,   221,   224,   516,   517,
     244,   191,   192,   193,   194,   196,   197,   199,   200,   201,
     204,   214,   215,   216,   217,   218,   219,   221,   224,   512,
     513,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,    15,    16,
      17,   254,   255,   244,   244,   244,   244,   244,   244,   247,
     253,   184,   247,   145,   145,   244,   145,   247,   145,   244,
     247,   145,   145,   124,   346,   347,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   247,   247,   247,   247,   317,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   245,   296,   145,   145,   145,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   145,   247,   145,   244,
     145,   247,   244,   244,   244,   244,   244,    22,    23,    50,
      63,    69,    86,   114,   122,   123,   160,   179,   361,   362,
     363,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   252,   252,   252,   252,   252,   253,   124,   124,
     124,   124,   145,   124,   253,   253,   255,   244,   145,   202,
     203,   184,   145,   145,   184,   184,   184,   145,   247,   145,
     145,   145,   145,   124,   145,   145,   244,   244,   244,   244,
     244,   244,   150,   452,   453,   244,   248,   244,   248,   254,
     254,   254,    12,   186,   537,   538,   244,   244,    12,   186,
     531,   532,   244,   244,   244,   150,   431,   432,   244,    71,
     220,   341,   342,   244,   244,   189,   244,   248,   184,   145,
     184,   184,   247,   184,   184,   184,   184,   145,   184,   145,
     184,   184,   184,   145,   184,   145,   184,   244,   244,   244,
     244,   244,    85,   159,   190,   204,   222,   223,   228,   229,
     230,   231,   241,   389,   390,   244,   244,    85,   159,   190,
     204,   222,   223,   228,   229,   230,   231,   241,   398,   399,
     363,   244,   248,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,    11,    13,    27,    31,    91,   123,   226,
     415,   416,   417,   244,   244,   244,   244,   244,   244,   244,
     244,   248,   517,   513,   244,   248,   244,   248,   244,   248,
     244,   248,   124,   347,   244,   244,   244,   244,     5,    38,
      49,    61,    68,    72,    73,    85,   118,   123,   132,   151,
     153,   154,   215,   231,   241,   318,   319,   320,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   248,   244,   248,   362,   417,   244,   248,
     453,   538,   532,   432,   342,   320,   244,   248,   390,   399,
     416,   319
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
#line 409 "ircd_parser.y"
    { (yyval.number) = 0; }
    break;

  case 28:
#line 411 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number);
		}
    break;

  case 29:
#line 415 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number);
		}
    break;

  case 30:
#line 419 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number);
		}
    break;

  case 31:
#line 423 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number);
		}
    break;

  case 32:
#line 427 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number);
		}
    break;

  case 33:
#line 431 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number);
		}
    break;

  case 34:
#line 436 "ircd_parser.y"
    { (yyval.number) = 0; }
    break;

  case 36:
#line 437 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
    break;

  case 37:
#line 438 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
    break;

  case 38:
#line 439 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
    break;

  case 39:
#line 440 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
    break;

  case 46:
#line 454 "ircd_parser.y"
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
#line 471 "ircd_parser.y"
    {
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
}
    break;

  case 63:
#line 495 "ircd_parser.y"
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
#line 529 "ircd_parser.y"
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
#line 589 "ircd_parser.y"
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
#line 603 "ircd_parser.y"
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
#line 621 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.description);
    DupString(ServerInfo.description,yylval.string);
  }
}
    break;

  case 68:
#line 630 "ircd_parser.y"
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
#line 644 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.network_desc);
    DupString(ServerInfo.network_desc, yylval.string);
  }
}
    break;

  case 70:
#line 653 "ircd_parser.y"
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
#line 681 "ircd_parser.y"
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
#line 711 "ircd_parser.y"
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
#line 727 "ircd_parser.y"
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
#line 783 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.name);
    DupString(AdminInfo.name, yylval.string);
  }
}
    break;

  case 82:
#line 792 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.email);
    DupString(AdminInfo.email, yylval.string);
  }
}
    break;

  case 83:
#line 801 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.description);
    DupString(AdminInfo.description, yylval.string);
  }
}
    break;

  case 96:
#line 825 "ircd_parser.y"
    {
                        }
    break;

  case 97:
#line 829 "ircd_parser.y"
    {
                        }
    break;

  case 98:
#line 833 "ircd_parser.y"
    {
                        }
    break;

  case 99:
#line 837 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
}
    break;

  case 100:
#line 844 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
}
    break;

  case 101:
#line 851 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
}
    break;

  case 102:
#line 858 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
}
    break;

  case 103:
#line 862 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
}
    break;

  case 104:
#line 866 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
}
    break;

  case 105:
#line 870 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
}
    break;

  case 106:
#line 874 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
}
    break;

  case 107:
#line 878 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
}
    break;

  case 108:
#line 882 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
}
    break;

  case 109:
#line 888 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 110:
#line 897 "ircd_parser.y"
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
#line 909 "ircd_parser.y"
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
#line 1000 "ircd_parser.y"
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
#line 1012 "ircd_parser.y"
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
#line 1024 "ircd_parser.y"
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
#line 1043 "ircd_parser.y"
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
#line 1055 "ircd_parser.y"
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
#line 1066 "ircd_parser.y"
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
#line 1077 "ircd_parser.y"
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
#line 1119 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 144:
#line 1128 "ircd_parser.y"
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
#line 1139 "ircd_parser.y"
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
#line 1150 "ircd_parser.y"
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
#line 1161 "ircd_parser.y"
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
#line 1172 "ircd_parser.y"
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
#line 1183 "ircd_parser.y"
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
#line 1194 "ircd_parser.y"
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
#line 1205 "ircd_parser.y"
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
#line 1216 "ircd_parser.y"
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
#line 1227 "ircd_parser.y"
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
#line 1238 "ircd_parser.y"
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
#line 1249 "ircd_parser.y"
    {
}
    break;

  case 159:
#line 1253 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 160:
#line 1254 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 161:
#line 1257 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 162:
#line 1264 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 163:
#line 1271 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 164:
#line 1278 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 165:
#line 1285 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 166:
#line 1292 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 167:
#line 1299 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 168:
#line 1306 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 169:
#line 1313 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 170:
#line 1320 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 171:
#line 1327 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 172:
#line 1334 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 173:
#line 1341 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 174:
#line 1348 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 175:
#line 1355 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 176:
#line 1362 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) ClearConfEncrypted(yy_aconf);
    else SetConfEncrypted(yy_aconf);
  }
}
    break;

  case 177:
#line 1375 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = (struct ClassItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 178:
#line 1382 "ircd_parser.y"
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

  case 194:
#line 1410 "ircd_parser.y"
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

  case 195:
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

  case 196:
#line 1504 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 197:
#line 1510 "ircd_parser.y"
    {
  if (ypass == 1)
    PingWarning(yy_class) = (yyvsp[-1].number);
}
    break;

  case 198:
#line 1516 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = (yyvsp[-1].number);
}
    break;

  case 199:
#line 1522 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 200:
#line 1528 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 201:
#line 1534 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 202:
#line 1540 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 203:
#line 1546 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = (yyvsp[-1].number);
}
    break;

  case 204:
#line 1552 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 205:
#line 1561 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    listener_address = NULL;
    listener_flags = 0;
  }
}
    break;

  case 206:
#line 1568 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 207:
#line 1577 "ircd_parser.y"
    {
}
    break;

  case 211:
#line 1582 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_SSL;
}
    break;

  case 212:
#line 1586 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_HIDDEN;
}
    break;

  case 223:
#line 1599 "ircd_parser.y"
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

  case 224:
#line 1614 "ircd_parser.y"
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

  case 225:
#line 1636 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 226:
#line 1645 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 227:
#line 1657 "ircd_parser.y"
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

  case 228:
#line 1669 "ircd_parser.y"
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

  case 248:
#line 1734 "ircd_parser.y"
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

  case 249:
#line 1753 "ircd_parser.y"
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

  case 250:
#line 1766 "ircd_parser.y"
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

  case 251:
#line 1777 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 252:
#line 1786 "ircd_parser.y"
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

  case 253:
#line 1797 "ircd_parser.y"
    {
}
    break;

  case 257:
#line 1801 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 258:
#line 1802 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 259:
#line 1805 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 260:
#line 1813 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 261:
#line 1820 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 262:
#line 1827 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 263:
#line 1834 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 264:
#line 1841 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 265:
#line 1848 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 266:
#line 1855 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 267:
#line 1862 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 268:
#line 1869 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 269:
#line 1878 "ircd_parser.y"
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

  case 270:
#line 1889 "ircd_parser.y"
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

  case 271:
#line 1900 "ircd_parser.y"
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

  case 272:
#line 1911 "ircd_parser.y"
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

  case 273:
#line 1922 "ircd_parser.y"
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

  case 274:
#line 1933 "ircd_parser.y"
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

  case 275:
#line 1945 "ircd_parser.y"
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

  case 276:
#line 1964 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 277:
#line 1974 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = (yyvsp[-1].number);
  }
}
    break;

  case 278:
#line 1983 "ircd_parser.y"
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

  case 279:
#line 1998 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 280:
#line 2005 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 287:
#line 2017 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 288:
#line 2026 "ircd_parser.y"
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

  case 289:
#line 2041 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char def_reason[] = "No reason";

    create_nick_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
  }
}
    break;

  case 290:
#line 2054 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(ULINE_TYPE);
    yy_match_item = map_to_conf(yy_conf);
    yy_match_item->action = SHARED_ALL;
  }
}
    break;

  case 291:
#line 2062 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 298:
#line 2073 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 299:
#line 2082 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    split_nuh(yylval.string, NULL, &yy_match_item->user, &yy_match_item->host);
  }
}
    break;

  case 300:
#line 2090 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 304:
#line 2097 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 305:
#line 2101 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TKLINE;
}
    break;

  case 306:
#line 2105 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 307:
#line 2109 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 308:
#line 2113 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TXLINE;
}
    break;

  case 309:
#line 2117 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 310:
#line 2121 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 311:
#line 2125 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TRESV;
}
    break;

  case 312:
#line 2129 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 313:
#line 2133 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_LOCOPS;
}
    break;

  case 314:
#line 2137 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 315:
#line 2146 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_conf->flags = SHARED_ALL;
  }
}
    break;

  case 316:
#line 2153 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_conf->name == NULL)
      DupString(yy_conf->name, "*");
    yy_conf = NULL;
  }
}
    break;

  case 322:
#line 2166 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 323:
#line 2172 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = 0;
}
    break;

  case 327:
#line 2179 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_KLINE;
}
    break;

  case 328:
#line 2183 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TKLINE;
}
    break;

  case 329:
#line 2187 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNKLINE;
}
    break;

  case 330:
#line 2191 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_XLINE;
}
    break;

  case 331:
#line 2195 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TXLINE;
}
    break;

  case 332:
#line 2199 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNXLINE;
}
    break;

  case 333:
#line 2203 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_RESV;
}
    break;

  case 334:
#line 2207 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TRESV;
}
    break;

  case 335:
#line 2211 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNRESV;
}
    break;

  case 336:
#line 2215 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_LOCOPS;
}
    break;

  case 337:
#line 2219 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = SHARED_ALL;
}
    break;

  case 338:
#line 2228 "ircd_parser.y"
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

  case 339:
#line 2246 "ircd_parser.y"
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

  case 362:
#line 2388 "ircd_parser.y"
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

  case 363:
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

  case 364:
#line 2412 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 365:
#line 2421 "ircd_parser.y"
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

  case 366:
#line 2433 "ircd_parser.y"
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

  case 367:
#line 2445 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = (yyvsp[-1].number);
}
    break;

  case 368:
#line 2451 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 369:
#line 2455 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 370:
#line 2463 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 371:
#line 2472 "ircd_parser.y"
    {
}
    break;

  case 375:
#line 2476 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 376:
#line 2477 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 377:
#line 2480 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfLazyLink(yy_aconf);
    else SetConfLazyLink(yy_aconf);
  }
}
    break;

  case 378:
#line 2487 "ircd_parser.y"
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

  case 379:
#line 2498 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfCryptLink(yy_aconf);
    else SetConfCryptLink(yy_aconf);
  }
}
    break;

  case 380:
#line 2505 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAllowAutoConn(yy_aconf);
    else SetConfAllowAutoConn(yy_aconf);
  }
}
    break;

  case 381:
#line 2512 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAwayBurst(yy_aconf);
    else SetConfAwayBurst(yy_aconf);
  }
}
    break;

  case 382:
#line 2519 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfTopicBurst(yy_aconf);
    else SetConfTopicBurst(yy_aconf);
  }
}
    break;

  case 383:
#line 2529 "ircd_parser.y"
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

  case 384:
#line 2570 "ircd_parser.y"
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

  case 385:
#line 2581 "ircd_parser.y"
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

  case 386:
#line 2592 "ircd_parser.y"
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

  case 387:
#line 2607 "ircd_parser.y"
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

  case 388:
#line 2618 "ircd_parser.y"
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

  case 389:
#line 2631 "ircd_parser.y"
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

  case 390:
#line 2644 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 391:
#line 2653 "ircd_parser.y"
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

  case 392:
#line 2688 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    userbuf[0] = hostbuf[0] = reasonbuf[0] = '\0';
    regex_ban = 0;
  }
}
    break;

  case 393:
#line 2695 "ircd_parser.y"
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

  case 394:
#line 2749 "ircd_parser.y"
    {
}
    break;

  case 398:
#line 2754 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 405:
#line 2763 "ircd_parser.y"
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

  case 406:
#line 2779 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 407:
#line 2788 "ircd_parser.y"
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

  case 408:
#line 2797 "ircd_parser.y"
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

  case 414:
#line 2813 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 415:
#line 2822 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 416:
#line 2834 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(EXEMPTDLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    DupString(yy_aconf->passwd, "*");
  }
}
    break;

  case 417:
#line 2842 "ircd_parser.y"
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

  case 422:
#line 2858 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 423:
#line 2870 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    regex_ban = 0;
    reasonbuf[0] = gecos_name[0] = '\0';
  }
}
    break;

  case 424:
#line 2877 "ircd_parser.y"
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

  case 425:
#line 2911 "ircd_parser.y"
    {
}
    break;

  case 429:
#line 2916 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 436:
#line 2925 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(gecos_name, yylval.string, sizeof(gecos_name));
}
    break;

  case 437:
#line 2931 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 498:
#line 2978 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr = (yyvsp[-1].number);
}
    break;

  case 499:
#line 2984 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr6 = (yyvsp[-1].number);
}
    break;

  case 500:
#line 2990 "ircd_parser.y"
    {
  if (ypass == 1) /* must be set in the 1st pass */
    ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 501:
#line 2996 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
}
    break;

  case 502:
#line 3001 "ircd_parser.y"
    {
  GlobalSetOptions.rejecttime = yylval.number;
}
    break;

  case 503:
#line 3006 "ircd_parser.y"
    {
  GlobalSetOptions.joinfloodcount = yylval.number;
}
    break;

  case 504:
#line 3011 "ircd_parser.y"
    {
  GlobalSetOptions.joinfloodtime = yylval.number;
}
    break;

  case 505:
#line 3016 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 506:
#line 3021 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kill_chase_time_limit = (yyvsp[-1].number);
}
    break;

  case 507:
#line 3027 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 508:
#line 3033 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 509:
#line 3039 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 510:
#line 3045 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 511:
#line 3051 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 512:
#line 3057 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_time = (yyvsp[-1].number); 
}
    break;

  case 513:
#line 3063 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_changes = (yyvsp[-1].number);
}
    break;

  case 514:
#line 3069 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_accept = (yyvsp[-1].number);
}
    break;

  case 515:
#line 3075 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_spam_exit_message_time = (yyvsp[-1].number);
}
    break;

  case 516:
#line 3081 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_warn_delta = (yyvsp[-1].number);
}
    break;

  case 517:
#line 3087 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = (yyvsp[-1].number);
}
    break;

  case 518:
#line 3093 "ircd_parser.y"
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

  case 519:
#line 3104 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 520:
#line 3110 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 521:
#line 3119 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 522:
#line 3125 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 523:
#line 3131 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 524:
#line 3137 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 525:
#line 3141 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 526:
#line 3147 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 527:
#line 3151 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 528:
#line 3157 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait = (yyvsp[-1].number);
}
    break;

  case 529:
#line 3163 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.caller_id_wait = (yyvsp[-1].number);
}
    break;

  case 530:
#line 3169 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.opers_bypass_callerid = yylval.number;
}
    break;

  case 531:
#line 3175 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait_simple = (yyvsp[-1].number);
}
    break;

  case 532:
#line 3181 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 533:
#line 3187 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 534:
#line 3193 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 535:
#line 3199 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 536:
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

  case 537:
#line 3216 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.idletime = (yyvsp[-1].number);
}
    break;

  case 538:
#line 3222 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dots_in_ident = (yyvsp[-1].number);
}
    break;

  case 539:
#line 3228 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.maximum_links = (yyvsp[-1].number);
}
    break;

  case 540:
#line 3234 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_targets = (yyvsp[-1].number);
}
    break;

  case 541:
#line 3240 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 542:
#line 3249 "ircd_parser.y"
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

  case 543:
#line 3281 "ircd_parser.y"
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

  case 544:
#line 3299 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 545:
#line 3305 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 546:
#line 3314 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 547:
#line 3320 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 548:
#line 3325 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 549:
#line 3331 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 553:
#line 3338 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 554:
#line 3342 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 555:
#line 3346 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEAF;
}
    break;

  case 556:
#line 3350 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 557:
#line 3354 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 558:
#line 3358 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 559:
#line 3362 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 560:
#line 3366 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 561:
#line 3370 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 562:
#line 3374 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 563:
#line 3378 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 564:
#line 3382 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 565:
#line 3386 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 566:
#line 3390 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 567:
#line 3394 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 568:
#line 3398 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 569:
#line 3402 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 570:
#line 3406 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 571:
#line 3412 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 575:
#line 3419 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 576:
#line 3423 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 577:
#line 3427 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEAF;
}
    break;

  case 578:
#line 3431 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 579:
#line 3435 "ircd_parser.y"
    { 
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 580:
#line 3439 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 581:
#line 3443 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 582:
#line 3447 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 583:
#line 3451 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 584:
#line 3455 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 585:
#line 3459 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 586:
#line 3463 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 587:
#line 3467 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 588:
#line 3471 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 589:
#line 3475 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 590:
#line 3479 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 591:
#line 3483 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 592:
#line 3487 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 593:
#line 3493 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard = (yyvsp[-1].number);
}
    break;

  case 594:
#line 3499 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard_simple = (yyvsp[-1].number);
}
    break;

  case 595:
#line 3505 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.default_floodcount = (yyvsp[-1].number);
}
    break;

  case 596:
#line 3511 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.client_flood = (yyvsp[-1].number);
}
    break;

  case 597:
#line 3517 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 598:
#line 3526 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->flags = 0;
  }
}
    break;

  case 599:
#line 3534 "ircd_parser.y"
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

  case 609:
#line 3561 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 610:
#line 3567 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = (yyvsp[-1].number);
}
    break;

  case 611:
#line 3573 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 615:
#line 3579 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 616:
#line 3583 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 617:
#line 3589 "ircd_parser.y"
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

  case 618:
#line 3608 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 619:
#line 3617 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 620:
#line 3621 "ircd_parser.y"
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

  case 623:
#line 3661 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 624:
#line 3665 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 644:
#line 3695 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 645:
#line 3701 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_except = yylval.number;
}
    break;

  case 646:
#line 3707 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_invex = yylval.number;
}
    break;

  case 647:
#line 3713 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_knock = yylval.number;
}
    break;

  case 648:
#line 3719 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay = (yyvsp[-1].number);
}
    break;

  case 649:
#line 3725 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay_channel = (yyvsp[-1].number);
}
    break;

  case 650:
#line 3731 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 651:
#line 3737 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_chans_per_user = (yyvsp[-1].number);
}
    break;

  case 652:
#line 3743 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 653:
#line 3749 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_bans = (yyvsp[-1].number);
}
    break;

  case 654:
#line 3755 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_user_count = (yyvsp[-1].number);
}
    break;

  case 655:
#line 3761 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_server_count = (yyvsp[-1].number);
}
    break;

  case 656:
#line 3767 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 657:
#line 3773 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 658:
#line 3779 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.burst_topicwho = yylval.number;
}
    break;

  case 669:
#line 3799 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 670:
#line 3805 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 671:
#line 3811 "ircd_parser.y"
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

  case 672:
#line 3825 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 673:
#line 3831 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 674:
#line 3837 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 1037 of yacc.c.  */
#line 7095 "y.tab.c"

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



