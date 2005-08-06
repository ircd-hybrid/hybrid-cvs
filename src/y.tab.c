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
/*  $Id: y.tab.c,v 7.47 2005/08/06 16:30:25 michael Exp $ */
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
     UNKLINE = 478,
     USER = 479,
     USE_EGD = 480,
     USE_EXCEPT = 481,
     USE_INVEX = 482,
     USE_KNOCK = 483,
     USE_LOGGING = 484,
     USE_WHOIS_ACTUALLY = 485,
     VHOST = 486,
     VHOST6 = 487,
     XLINE = 488,
     WARN = 489,
     WARN_NO_NLINE = 490
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
#define UNKLINE 478
#define USER 479
#define USE_EGD 480
#define USE_EXCEPT 481
#define USE_INVEX 482
#define USE_KNOCK 483
#define USE_LOGGING 484
#define USE_WHOIS_ACTUALLY 485
#define VHOST 486
#define VHOST6 487
#define XLINE 488
#define WARN 489
#define WARN_NO_NLINE 490




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
static unsigned int listener_flags = 0;
static unsigned int gecos_flags = 0;
static char gecos_reason[REASONLEN + 1];
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
#line 131 "ircd_parser.y"
typedef union YYSTYPE {
  int number;
  char *string;
} YYSTYPE;
/* Line 190 of yacc.c.  */
#line 657 "y.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 213 of yacc.c.  */
#line 669 "y.tab.c"

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
#define YYLAST   1286

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  241
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  307
/* YYNRULES -- Number of rules. */
#define YYNRULES  649
/* YYNRULES -- Number of states. */
#define YYNSTATES  1325

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   490

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   240,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   236,
       2,   239,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   238,     2,   237,     2,     2,     2,     2,
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
     235
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
     739,   741,   743,   745,   747,   750,   755,   760,   765,   770,
     771,   777,   781,   783,   786,   788,   790,   792,   794,   796,
     798,   800,   802,   804,   806,   808,   813,   818,   823,   828,
     833,   838,   843,   848,   853,   858,   859,   866,   869,   871,
     873,   875,   877,   880,   885,   890,   895,   896,   903,   906,
     908,   910,   912,   914,   917,   922,   927,   928,   934,   938,
     940,   942,   944,   946,   948,   950,   952,   954,   955,   962,
     965,   967,   969,   971,   974,   979,   980,   986,   990,   992,
     994,   996,   998,  1000,  1002,  1004,  1006,  1008,  1009,  1017,
    1018,  1020,  1023,  1025,  1027,  1029,  1031,  1033,  1035,  1037,
    1039,  1041,  1043,  1045,  1047,  1049,  1051,  1053,  1055,  1057,
    1059,  1062,  1067,  1069,  1074,  1079,  1084,  1089,  1094,  1099,
    1104,  1105,  1111,  1115,  1117,  1120,  1122,  1124,  1126,  1128,
    1130,  1132,  1134,  1139,  1144,  1149,  1154,  1159,  1164,  1169,
    1174,  1179,  1180,  1187,  1190,  1192,  1194,  1196,  1198,  1203,
    1208,  1209,  1216,  1219,  1221,  1223,  1225,  1227,  1232,  1237,
    1238,  1245,  1248,  1250,  1252,  1254,  1259,  1260,  1267,  1268,
    1274,  1278,  1280,  1282,  1285,  1287,  1289,  1291,  1293,  1295,
    1300,  1305,  1311,  1314,  1316,  1318,  1320,  1322,  1324,  1326,
    1328,  1330,  1332,  1334,  1336,  1338,  1340,  1342,  1344,  1346,
    1348,  1350,  1352,  1354,  1356,  1358,  1360,  1362,  1364,  1366,
    1368,  1370,  1372,  1374,  1376,  1378,  1380,  1382,  1384,  1386,
    1388,  1390,  1392,  1394,  1396,  1398,  1400,  1402,  1404,  1406,
    1408,  1410,  1412,  1414,  1416,  1418,  1420,  1422,  1427,  1432,
    1437,  1442,  1447,  1452,  1457,  1462,  1467,  1472,  1477,  1482,
    1487,  1492,  1497,  1502,  1507,  1512,  1517,  1522,  1527,  1532,
    1537,  1542,  1547,  1552,  1557,  1562,  1567,  1572,  1577,  1582,
    1587,  1592,  1597,  1602,  1607,  1612,  1617,  1622,  1627,  1632,
    1637,  1642,  1647,  1652,  1657,  1658,  1664,  1668,  1670,  1672,
    1674,  1676,  1678,  1680,  1682,  1684,  1686,  1688,  1690,  1692,
    1694,  1696,  1698,  1700,  1702,  1704,  1706,  1707,  1713,  1717,
    1719,  1721,  1723,  1725,  1727,  1729,  1731,  1733,  1735,  1737,
    1739,  1741,  1743,  1745,  1747,  1749,  1751,  1753,  1755,  1760,
    1765,  1770,  1775,  1780,  1781,  1788,  1791,  1793,  1795,  1797,
    1799,  1801,  1803,  1805,  1807,  1812,  1817,  1818,  1824,  1828,
    1830,  1832,  1834,  1839,  1844,  1845,  1851,  1855,  1857,  1859,
    1861,  1867,  1870,  1872,  1874,  1876,  1878,  1880,  1882,  1884,
    1886,  1888,  1890,  1892,  1894,  1896,  1898,  1900,  1902,  1904,
    1909,  1914,  1919,  1924,  1929,  1934,  1939,  1944,  1949,  1954,
    1959,  1964,  1969,  1974,  1979,  1985,  1988,  1990,  1992,  1994,
    1996,  1998,  2000,  2002,  2004,  2009,  2014,  2019,  2024,  2029
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     242,     0,    -1,    -1,   242,   243,    -1,   267,    -1,   273,
      -1,   284,    -1,   521,    -1,   313,    -1,   328,    -1,   341,
      -1,   253,    -1,   539,    -1,   364,    -1,   371,    -1,   381,
      -1,   390,    -1,   417,    -1,   423,    -1,   429,    -1,   444,
      -1,   505,    -1,   434,    -1,   248,    -1,     1,   236,    -1,
       1,   237,    -1,    -1,   245,    -1,   123,   244,    -1,   123,
     156,   244,    -1,   123,   157,   244,    -1,   123,   158,   244,
      -1,   123,   159,   244,    -1,   123,   160,   244,    -1,    -1,
     247,    -1,   123,   246,    -1,   123,    15,   246,    -1,   123,
      16,   246,    -1,   123,    17,   246,    -1,   111,   238,   249,
     237,   236,    -1,   249,   250,    -1,   250,    -1,   251,    -1,
     252,    -1,     1,   236,    -1,   110,   239,   141,   236,    -1,
     137,   239,   141,   236,    -1,   164,   238,   254,   237,   236,
      -1,   254,   255,    -1,   255,    -1,   258,    -1,   263,    -1,
     266,    -1,   260,    -1,   261,    -1,   262,    -1,   265,    -1,
     257,    -1,   264,    -1,   259,    -1,   256,    -1,     1,   236,
      -1,   153,   239,   141,   236,    -1,   151,   239,   141,   236,
      -1,   112,   239,   141,   236,    -1,   166,   239,   141,   236,
      -1,    36,   239,   141,   236,    -1,   115,   239,   141,   236,
      -1,   114,   239,   141,   236,    -1,   231,   239,   141,   236,
      -1,   232,   239,   141,   236,    -1,   208,   239,   123,   236,
      -1,    77,   239,   179,   236,    -1,     5,   238,   268,   237,
     236,    -1,   268,   269,    -1,   269,    -1,   270,    -1,   272,
      -1,   271,    -1,     1,   236,    -1,   112,   239,   141,   236,
      -1,    46,   239,   141,   236,    -1,    36,   239,   141,   236,
      -1,    94,   238,   274,   237,   236,    -1,   274,   275,    -1,
     275,    -1,   276,    -1,   277,    -1,   278,    -1,   282,    -1,
     283,    -1,   279,    -1,   281,    -1,   280,    -1,     1,   236,
      -1,   200,   239,   141,   236,    -1,   128,   239,   141,   236,
      -1,    63,   239,   141,   236,    -1,    57,   239,   141,   236,
      -1,    55,   239,   141,   236,    -1,    56,   239,   141,   236,
      -1,    95,   239,   201,   236,    -1,    95,   239,   203,   236,
      -1,    95,   239,   207,   236,    -1,    95,   239,   205,   236,
      -1,    95,   239,   206,   236,    -1,    95,   239,   204,   236,
      -1,    95,   239,   202,   236,    -1,   229,   239,   179,   236,
      -1,    -1,   127,   285,   286,   238,   287,   237,   236,    -1,
      -1,   290,    -1,   287,   288,    -1,   288,    -1,   289,    -1,
     291,    -1,   292,    -1,   294,    -1,   296,    -1,   297,    -1,
     298,    -1,   300,    -1,   301,    -1,   302,    -1,   303,    -1,
     304,    -1,   299,    -1,   305,    -1,   306,    -1,   307,    -1,
     293,    -1,   295,    -1,   308,    -1,     1,   236,    -1,   112,
     239,   141,   236,    -1,   141,    -1,   224,   239,   141,   236,
      -1,   136,   239,   141,   236,    -1,    48,   239,   179,   236,
      -1,    71,   239,   179,   236,    -1,   152,   239,   141,   236,
      -1,    25,   239,   141,   236,    -1,    67,   239,   179,   236,
      -1,   148,   239,   179,   236,    -1,   149,   239,   179,   236,
      -1,    84,   239,   179,   236,    -1,   233,   239,   179,   236,
      -1,   223,   239,   179,   236,    -1,    60,   239,   179,   236,
      -1,   117,   239,   179,   236,    -1,    37,   239,   179,   236,
      -1,   147,   239,   179,   236,    -1,     5,   239,   179,   236,
      -1,    -1,    53,   309,   239,   310,   236,    -1,   310,   240,
     311,    -1,   311,    -1,   122,   312,    -1,   312,    -1,    67,
      -1,   148,    -1,    84,    -1,   223,    -1,   233,    -1,    60,
      -1,    37,    -1,   147,    -1,     5,    -1,    71,    -1,   117,
      -1,   210,    -1,   131,    -1,    72,    -1,   149,    -1,    48,
      -1,    -1,    25,   314,   315,   238,   316,   237,   236,    -1,
      -1,   319,    -1,   316,   317,    -1,   317,    -1,   318,    -1,
     320,    -1,   321,    -1,   322,    -1,   323,    -1,   324,    -1,
     325,    -1,   326,    -1,   327,    -1,     1,   236,    -1,   112,
     239,   141,   236,    -1,   141,    -1,   139,   239,   245,   236,
      -1,   125,   239,   123,   236,    -1,    29,   239,   245,   236,
      -1,   105,   239,   123,   236,    -1,   100,   239,   123,   236,
      -1,   102,   239,   123,   236,    -1,   101,   239,   123,   236,
      -1,   161,   239,   247,   236,    -1,    -1,    93,   329,   238,
     334,   237,   236,    -1,    -1,    53,   331,   239,   332,   236,
      -1,   332,   240,   333,    -1,   333,    -1,   215,    -1,    70,
      -1,   334,   335,    -1,   335,    -1,   336,    -1,   330,    -1,
     339,    -1,   340,    -1,     1,   236,    -1,   140,   239,   337,
     236,    -1,   337,   240,   338,    -1,   338,    -1,   123,    -1,
     123,   184,   123,    -1,    81,   239,   141,   236,    -1,    76,
     239,   141,   236,    -1,    -1,    10,   342,   238,   343,   237,
     236,    -1,   343,   344,    -1,   344,    -1,   345,    -1,   346,
      -1,   348,    -1,   349,    -1,   354,    -1,   355,    -1,   356,
      -1,   358,    -1,   359,    -1,   360,    -1,   347,    -1,   361,
      -1,   362,    -1,   357,    -1,   363,    -1,     1,   236,    -1,
     224,   239,   141,   236,    -1,   136,   239,   141,   236,    -1,
     174,   239,   179,   236,    -1,    25,   239,   141,   236,    -1,
      -1,    53,   350,   239,   351,   236,    -1,   351,   240,   352,
      -1,   352,    -1,   122,   353,    -1,   353,    -1,   174,    -1,
      49,    -1,    85,    -1,    68,    -1,    21,    -1,    22,    -1,
     121,    -1,    62,    -1,   155,    -1,   113,    -1,    85,   239,
     179,   236,    -1,    68,   239,   179,   236,    -1,    49,   239,
     179,   236,    -1,    21,   239,   179,   236,    -1,   121,   239,
     179,   236,    -1,    62,   239,   179,   236,    -1,   173,   239,
     141,   236,    -1,   145,   239,   141,   236,    -1,   144,   239,
     123,   236,    -1,   113,   239,   179,   236,    -1,    -1,   154,
     365,   238,   366,   237,   236,    -1,   366,   367,    -1,   367,
      -1,   368,    -1,   369,    -1,   370,    -1,     1,   236,    -1,
     143,   239,   141,   236,    -1,    23,   239,   141,   236,    -1,
     116,   239,   141,   236,    -1,    -1,   168,   372,   238,   373,
     237,   236,    -1,   373,   374,    -1,   374,    -1,   375,    -1,
     376,    -1,   377,    -1,     1,   236,    -1,   112,   239,   141,
     236,    -1,   224,   239,   141,   236,    -1,    -1,   170,   378,
     239,   379,   236,    -1,   379,   240,   380,    -1,   380,    -1,
      84,    -1,   223,    -1,   233,    -1,   218,    -1,   154,    -1,
     217,    -1,   185,    -1,    -1,   169,   382,   238,   383,   237,
     236,    -1,   383,   384,    -1,   384,    -1,   385,    -1,   386,
      -1,     1,   236,    -1,   112,   239,   141,   236,    -1,    -1,
     170,   387,   239,   388,   236,    -1,   388,   240,   389,    -1,
     389,    -1,    84,    -1,   223,    -1,   233,    -1,   218,    -1,
     154,    -1,   217,    -1,   199,    -1,   185,    -1,    -1,    28,
     391,   392,   238,   393,   237,   236,    -1,    -1,   396,    -1,
     393,   394,    -1,   394,    -1,   395,    -1,   397,    -1,   398,
      -1,   399,    -1,   400,    -1,   401,    -1,   402,    -1,   403,
      -1,   413,    -1,   414,    -1,   415,    -1,   412,    -1,   409,
      -1,   411,    -1,   410,    -1,   408,    -1,   416,    -1,     1,
     236,    -1,   112,   239,   141,   236,    -1,   141,    -1,    76,
     239,   141,   236,    -1,   162,   239,   141,   236,    -1,     3,
     239,   141,   236,    -1,   140,   239,   123,   236,    -1,     6,
     239,   197,   236,    -1,     6,   239,   198,   236,    -1,    52,
     239,   141,   236,    -1,    -1,    53,   404,   239,   405,   236,
      -1,   405,   240,   406,    -1,   406,    -1,   122,   407,    -1,
     407,    -1,    90,    -1,    26,    -1,    30,    -1,    11,    -1,
      13,    -1,   221,    -1,   152,   239,   141,   236,    -1,    48,
     239,   179,   236,    -1,    30,   239,   179,   236,    -1,    26,
     239,   179,   236,    -1,    11,   239,   179,   236,    -1,    78,
     239,   141,   236,    -1,    91,   239,   141,   236,    -1,    25,
     239,   141,   236,    -1,    24,   239,   141,   236,    -1,    -1,
      82,   418,   238,   419,   237,   236,    -1,   419,   420,    -1,
     420,    -1,   421,    -1,   422,    -1,     1,    -1,   224,   239,
     141,   236,    -1,   143,   239,   141,   236,    -1,    -1,    35,
     424,   238,   425,   237,   236,    -1,   425,   426,    -1,   426,
      -1,   427,    -1,   428,    -1,     1,    -1,    81,   239,   141,
     236,    -1,   143,   239,   141,   236,    -1,    -1,    50,   430,
     238,   431,   237,   236,    -1,   431,   432,    -1,   432,    -1,
     433,    -1,     1,    -1,    81,   239,   141,   236,    -1,    -1,
      58,   435,   238,   440,   237,   236,    -1,    -1,    53,   437,
     239,   438,   236,    -1,   438,   240,   439,    -1,   439,    -1,
     146,    -1,   440,   441,    -1,   441,    -1,   442,    -1,   443,
      -1,   436,    -1,     1,    -1,   112,   239,   141,   236,    -1,
     143,   239,   141,   236,    -1,    59,   238,   445,   237,   236,
      -1,   445,   446,    -1,   446,    -1,   453,    -1,   454,    -1,
     456,    -1,   457,    -1,   458,    -1,   459,    -1,   460,    -1,
     461,    -1,   462,    -1,   463,    -1,   452,    -1,   465,    -1,
     466,    -1,   467,    -1,   481,    -1,   468,    -1,   470,    -1,
     472,    -1,   471,    -1,   474,    -1,   469,    -1,   475,    -1,
     476,    -1,   477,    -1,   478,    -1,   480,    -1,   482,    -1,
     479,    -1,   496,    -1,   483,    -1,   487,    -1,   488,    -1,
     492,    -1,   473,    -1,   502,    -1,   500,    -1,   501,    -1,
     484,    -1,   455,    -1,   485,    -1,   486,    -1,   503,    -1,
     491,    -1,   464,    -1,   504,    -1,   489,    -1,   490,    -1,
     449,    -1,   451,    -1,   447,    -1,   448,    -1,   450,    -1,
       1,    -1,    65,   239,   123,   236,    -1,    66,   239,   123,
     236,    -1,    13,   239,   179,   236,    -1,   230,   239,   179,
     236,    -1,   167,   239,   179,   236,    -1,    83,   239,   123,
     236,    -1,    75,   239,   179,   236,    -1,    80,   239,   179,
     236,    -1,    41,   239,   179,   236,    -1,    51,   239,   179,
     236,    -1,     8,   239,   179,   236,    -1,   104,   239,   245,
     236,    -1,   103,   239,   123,   236,    -1,    97,   239,   123,
     236,    -1,     9,   239,   245,   236,    -1,   183,   239,   245,
     236,    -1,   182,   239,   245,   236,    -1,    69,   239,   123,
     236,    -1,    87,   239,   179,   236,    -1,    86,   239,   141,
     236,    -1,   235,   239,   179,   236,    -1,   177,   239,   179,
     236,    -1,   178,   239,   179,   236,    -1,   176,   239,   179,
     236,    -1,   176,   239,   180,   236,    -1,   175,   239,   179,
     236,    -1,   175,   239,   180,   236,    -1,   134,   239,   245,
     236,    -1,    20,   239,   245,   236,    -1,   135,   239,   245,
     236,    -1,   171,   239,   179,   236,    -1,   120,   239,   179,
     236,    -1,   222,   239,   179,   236,    -1,   130,   239,   179,
     236,    -1,   107,   239,   141,   236,    -1,    79,   239,   245,
     236,    -1,    43,   239,   123,   236,    -1,    96,   239,   123,
     236,    -1,   106,   239,   123,   236,    -1,   165,   239,   141,
     236,    -1,    31,   239,   141,   236,    -1,    27,   239,   123,
     236,    -1,   225,   239,   179,   236,    -1,    45,   239,   141,
     236,    -1,   138,   239,   179,   236,    -1,    38,   239,   179,
     236,    -1,   220,   239,   245,   236,    -1,    -1,   132,   493,
     239,   494,   236,    -1,   494,   240,   495,    -1,   495,    -1,
     186,    -1,   189,    -1,   191,    -1,   192,    -1,   195,    -1,
     213,    -1,   209,    -1,   211,    -1,   216,    -1,   214,    -1,
     194,    -1,   210,    -1,   212,    -1,   196,    -1,   219,    -1,
     187,    -1,   188,    -1,   199,    -1,    -1,   129,   497,   239,
     498,   236,    -1,   498,   240,   499,    -1,   499,    -1,   186,
      -1,   189,    -1,   191,    -1,   192,    -1,   195,    -1,   213,
      -1,   209,    -1,   211,    -1,   216,    -1,   214,    -1,   194,
      -1,   210,    -1,   212,    -1,   196,    -1,   219,    -1,   187,
      -1,   188,    -1,   199,    -1,   108,   239,   123,   236,    -1,
     109,   239,   123,   236,    -1,    32,   239,   123,   236,    -1,
     190,   239,   247,   236,    -1,    42,   239,   179,   236,    -1,
      -1,    61,   506,   238,   507,   237,   236,    -1,   507,   508,
      -1,   508,    -1,   509,    -1,   510,    -1,   511,    -1,   515,
      -1,   516,    -1,   517,    -1,     1,    -1,    47,   239,   179,
     236,    -1,    44,   239,   245,   236,    -1,    -1,    94,   512,
     239,   513,   236,    -1,   513,   240,   514,    -1,   514,    -1,
     181,    -1,    12,    -1,   224,   239,   141,   236,    -1,   112,
     239,   141,   236,    -1,    -1,     4,   518,   239,   519,   236,
      -1,   519,   240,   520,    -1,   520,    -1,   181,    -1,    12,
      -1,    23,   238,   522,   237,   236,    -1,   522,   523,    -1,
     523,    -1,   524,    -1,   525,    -1,   526,    -1,   527,    -1,
     533,    -1,   528,    -1,   529,    -1,   530,    -1,   531,    -1,
     532,    -1,   534,    -1,   535,    -1,   536,    -1,   537,    -1,
     538,    -1,     1,    -1,    40,   239,   179,   236,    -1,   226,
     239,   179,   236,    -1,   227,   239,   179,   236,    -1,   228,
     239,   179,   236,    -1,    88,   239,   245,   236,    -1,    89,
     239,   245,   236,    -1,   133,   239,   179,   236,    -1,    99,
     239,   123,   236,    -1,   142,   239,   179,   236,    -1,    98,
     239,   123,   236,    -1,    34,   239,   123,   236,    -1,    33,
     239,   123,   236,    -1,   118,   239,   179,   236,    -1,   119,
     239,   179,   236,    -1,    14,   239,   179,   236,    -1,   163,
     238,   540,   237,   236,    -1,   540,   541,    -1,   541,    -1,
     542,    -1,   543,    -1,   544,    -1,   546,    -1,   545,    -1,
     547,    -1,     1,    -1,    54,   239,   179,   236,    -1,    74,
     239,   179,   236,    -1,    92,   239,   245,   236,    -1,    70,
     239,   179,   236,    -1,    39,   239,   179,   236,    -1,    73,
     239,   179,   236,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   370,   370,   371,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   399,   399,   400,   404,
     408,   412,   416,   420,   426,   426,   427,   428,   429,   430,
     437,   440,   440,   441,   441,   441,   443,   460,   471,   474,
     475,   476,   476,   477,   477,   478,   478,   479,   480,   480,
     481,   481,   482,   484,   518,   578,   592,   610,   619,   633,
     642,   670,   700,   716,   766,   768,   768,   769,   769,   770,
     770,   772,   781,   790,   802,   804,   805,   807,   807,   808,
     808,   809,   809,   810,   810,   811,   813,   817,   821,   825,
     832,   839,   846,   850,   854,   858,   862,   866,   870,   876,
     886,   885,   978,   978,   979,   979,   980,   980,   980,   980,
     981,   981,   981,   982,   982,   982,   983,   983,   983,   984,
     984,   984,   985,   985,   986,   986,   988,  1000,  1012,  1035,
    1047,  1058,  1069,  1111,  1120,  1131,  1142,  1153,  1164,  1175,
    1186,  1197,  1208,  1219,  1230,  1242,  1241,  1245,  1245,  1246,
    1247,  1249,  1256,  1263,  1270,  1277,  1284,  1291,  1298,  1305,
    1312,  1319,  1326,  1333,  1340,  1347,  1354,  1368,  1367,  1387,
    1387,  1389,  1389,  1390,  1391,  1392,  1393,  1394,  1395,  1396,
    1397,  1398,  1399,  1401,  1447,  1493,  1499,  1505,  1511,  1517,
    1523,  1529,  1535,  1545,  1544,  1561,  1560,  1564,  1564,  1565,
    1569,  1575,  1575,  1576,  1576,  1576,  1576,  1576,  1578,  1580,
    1580,  1582,  1597,  1619,  1628,  1641,  1640,  1714,  1714,  1715,
    1715,  1715,  1715,  1716,  1716,  1717,  1717,  1717,  1718,  1718,
    1719,  1719,  1719,  1720,  1720,  1722,  1751,  1764,  1775,  1785,
    1784,  1788,  1788,  1789,  1790,  1792,  1800,  1807,  1814,  1821,
    1828,  1835,  1842,  1849,  1856,  1865,  1876,  1887,  1898,  1909,
    1920,  1932,  1951,  1961,  1970,  1986,  1985,  1998,  1998,  1999,
    1999,  1999,  1999,  2001,  2010,  2025,  2044,  2043,  2059,  2059,
    2060,  2060,  2060,  2060,  2062,  2071,  2087,  2086,  2092,  2092,
    2093,  2097,  2101,  2105,  2109,  2113,  2117,  2127,  2126,  2148,
    2148,  2149,  2149,  2149,  2151,  2158,  2157,  2163,  2163,  2164,
    2168,  2172,  2176,  2180,  2184,  2188,  2192,  2202,  2201,  2351,
    2351,  2352,  2352,  2353,  2353,  2353,  2354,  2354,  2354,  2355,
    2355,  2355,  2356,  2356,  2356,  2357,  2357,  2357,  2358,  2358,
    2359,  2361,  2373,  2385,  2394,  2406,  2418,  2424,  2428,  2436,
    2446,  2445,  2449,  2449,  2450,  2451,  2453,  2460,  2471,  2478,
    2485,  2492,  2502,  2543,  2554,  2565,  2580,  2591,  2604,  2617,
    2626,  2662,  2661,  2684,  2684,  2685,  2685,  2685,  2687,  2696,
    2709,  2708,  2730,  2730,  2731,  2731,  2731,  2733,  2742,  2755,
    2754,  2775,  2775,  2776,  2776,  2778,  2791,  2790,  2841,  2840,
    2844,  2844,  2845,  2851,  2851,  2852,  2852,  2852,  2852,  2854,
    2863,  2875,  2878,  2878,  2879,  2879,  2880,  2880,  2881,  2881,
    2882,  2882,  2883,  2883,  2884,  2884,  2885,  2886,  2886,  2887,
    2887,  2888,  2888,  2889,  2889,  2890,  2890,  2891,  2891,  2892,
    2892,  2893,  2894,  2894,  2895,  2895,  2896,  2897,  2897,  2898,
    2898,  2899,  2899,  2900,  2901,  2901,  2902,  2902,  2903,  2903,
    2904,  2904,  2905,  2905,  2906,  2906,  2907,  2911,  2917,  2923,
    2929,  2934,  2939,  2945,  2951,  2957,  2963,  2969,  2975,  2981,
    2987,  2993,  2999,  3005,  3011,  3022,  3028,  3037,  3043,  3049,
    3055,  3059,  3065,  3069,  3075,  3081,  3087,  3093,  3099,  3105,
    3111,  3117,  3128,  3134,  3140,  3146,  3152,  3161,  3193,  3211,
    3217,  3226,  3232,  3237,  3244,  3243,  3249,  3249,  3250,  3254,
    3258,  3262,  3266,  3270,  3274,  3278,  3282,  3286,  3290,  3294,
    3298,  3302,  3306,  3310,  3314,  3318,  3325,  3324,  3330,  3330,
    3331,  3335,  3339,  3343,  3347,  3351,  3355,  3359,  3363,  3367,
    3371,  3375,  3379,  3383,  3387,  3391,  3395,  3399,  3405,  3411,
    3417,  3423,  3429,  3439,  3438,  3464,  3464,  3465,  3466,  3467,
    3468,  3469,  3470,  3471,  3473,  3479,  3486,  3485,  3490,  3490,
    3491,  3495,  3501,  3524,  3534,  3533,  3576,  3576,  3577,  3581,
    3590,  3593,  3593,  3594,  3595,  3596,  3597,  3598,  3599,  3600,
    3601,  3602,  3603,  3604,  3605,  3606,  3607,  3608,  3609,  3611,
    3617,  3623,  3629,  3635,  3641,  3647,  3653,  3659,  3665,  3671,
    3677,  3683,  3689,  3695,  3704,  3707,  3707,  3708,  3708,  3709,
    3710,  3711,  3712,  3713,  3715,  3721,  3727,  3741,  3747,  3753
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
  "TRUE_NO_OPER_FLOOD", "UNKLINE", "USER", "USE_EGD", "USE_EXCEPT",
  "USE_INVEX", "USE_KNOCK", "USE_LOGGING", "USE_WHOIS_ACTUALLY", "VHOST",
  "VHOST6", "XLINE", "WARN", "WARN_NO_NLINE", "';'", "'}'", "'{'", "'='",
  "','", "$accept", "conf", "conf_item", "timespec_", "timespec",
  "sizespec_", "sizespec", "modules_entry", "modules_items",
  "modules_item", "modules_module", "modules_path", "serverinfo_entry",
  "serverinfo_items", "serverinfo_item", "serverinfo_ssl_certificate_file",
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
  "auth_class", "auth_flags", "@7", "auth_flags_items", "auth_flags_item",
  "auth_flags_item_atom", "auth_kline_exempt", "auth_need_ident",
  "auth_exceed_limit", "auth_can_flood", "auth_no_tilde",
  "auth_gline_exempt", "auth_spoof", "auth_redir_serv", "auth_redir_port",
  "auth_need_password", "resv_entry", "@8", "resv_items", "resv_item",
  "resv_creason", "resv_channel", "resv_nick", "shared_entry", "@9",
  "shared_items", "shared_item", "shared_name", "shared_user",
  "shared_type", "@10", "shared_types", "shared_type_item",
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
  "kill_entry", "@15", "kill_items", "kill_item", "kill_user",
  "kill_reason", "deny_entry", "@16", "deny_items", "deny_item", "deny_ip",
  "deny_reason", "exempt_entry", "@17", "exempt_items", "exempt_item",
  "exempt_ip", "gecos_entry", "@18", "gecos_flags", "@19",
  "gecos_flags_items", "gecos_flags_item", "gecos_items", "gecos_item",
  "gecos_name", "gecos_reason", "general_entry", "general_items",
  "general_item", "general_gline_min_cidr", "general_gline_min_cidr6",
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
  "@20", "umode_oitems", "umode_oitem", "general_oper_only_umodes", "@21",
  "umode_items", "umode_item", "general_min_nonwildcard",
  "general_min_nonwildcard_simple", "general_default_floodcount",
  "general_client_flood", "general_dot_in_ip6_addr", "gline_entry", "@22",
  "gline_items", "gline_item", "gline_enable", "gline_duration",
  "gline_logging", "@23", "gline_logging_types", "gline_logging_type_item",
  "gline_user", "gline_server", "gline_action", "@24", "gdeny_types",
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
     485,   486,   487,   488,   489,   490,    59,   125,   123,    61,
      44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   241,   242,   242,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   244,   244,   245,   245,
     245,   245,   245,   245,   246,   246,   247,   247,   247,   247,
     248,   249,   249,   250,   250,   250,   251,   252,   253,   254,
     254,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   268,   269,   269,   269,
     269,   270,   271,   272,   273,   274,   274,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   276,   277,   278,   279,
     280,   281,   282,   282,   282,   282,   282,   282,   282,   283,
     285,   284,   286,   286,   287,   287,   288,   288,   288,   288,
     288,   288,   288,   288,   288,   288,   288,   288,   288,   288,
     288,   288,   288,   288,   288,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   309,   308,   310,   310,   311,
     311,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   314,   313,   315,
     315,   316,   316,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   329,   328,   331,   330,   332,   332,   333,
     333,   334,   334,   335,   335,   335,   335,   335,   336,   337,
     337,   338,   338,   339,   340,   342,   341,   343,   343,   344,
     344,   344,   344,   344,   344,   344,   344,   344,   344,   344,
     344,   344,   344,   344,   344,   345,   346,   347,   348,   350,
     349,   351,   351,   352,   352,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   365,   364,   366,   366,   367,
     367,   367,   367,   368,   369,   370,   372,   371,   373,   373,
     374,   374,   374,   374,   375,   376,   378,   377,   379,   379,
     380,   380,   380,   380,   380,   380,   380,   382,   381,   383,
     383,   384,   384,   384,   385,   387,   386,   388,   388,   389,
     389,   389,   389,   389,   389,   389,   389,   391,   390,   392,
     392,   393,   393,   394,   394,   394,   394,   394,   394,   394,
     394,   394,   394,   394,   394,   394,   394,   394,   394,   394,
     394,   395,   396,   397,   398,   399,   400,   401,   401,   402,
     404,   403,   405,   405,   406,   406,   407,   407,   407,   407,
     407,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   418,   417,   419,   419,   420,   420,   420,   421,   422,
     424,   423,   425,   425,   426,   426,   426,   427,   428,   430,
     429,   431,   431,   432,   432,   433,   435,   434,   437,   436,
     438,   438,   439,   440,   440,   441,   441,   441,   441,   442,
     443,   444,   445,   445,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   470,   471,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   493,   492,   494,   494,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   497,   496,   498,   498,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   500,   501,
     502,   503,   504,   506,   505,   507,   507,   508,   508,   508,
     508,   508,   508,   508,   509,   510,   512,   511,   513,   513,
     514,   514,   515,   516,   518,   517,   519,   519,   520,   520,
     521,   522,   522,   523,   523,   523,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   523,   523,   523,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   540,   541,   541,   541,
     541,   541,   541,   541,   542,   543,   544,   545,   546,   547
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
       1,     1,     1,     1,     2,     4,     4,     4,     4,     0,
       5,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     2,     4,     4,     4,     0,     6,     2,     1,
       1,     1,     1,     2,     4,     4,     0,     5,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     6,     2,
       1,     1,     1,     2,     4,     0,     5,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     7,     0,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     1,     4,     4,     4,     4,     4,     4,     4,
       0,     5,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     0,     6,     2,     1,     1,     1,     1,     4,     4,
       0,     6,     2,     1,     1,     1,     1,     4,     4,     0,
       6,     2,     1,     1,     1,     4,     0,     6,     0,     5,
       3,     1,     1,     2,     1,     1,     1,     1,     1,     4,
       4,     5,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
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
       1,     1,     1,     1,     4,     4,     4,     4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       2,     0,     1,     0,     0,   225,     0,   177,   327,   390,
     399,   406,     0,   573,   381,   203,     0,     0,   110,   275,
       0,     0,   286,   307,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,     0,
     179,   329,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    79,    78,     0,   618,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   602,   603,   604,   605,   606,   608,
     609,   610,   611,   612,   607,   613,   614,   615,   616,   617,
     194,     0,   180,   352,     0,   330,     0,     0,     0,   476,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   546,     0,   524,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   423,   473,   474,   471,   475,   472,   434,
     424,   425,   462,   426,   427,   428,   429,   430,   431,   432,
     433,   467,   435,   436,   437,   439,   444,   440,   442,   441,
     457,   443,   445,   446,   447,   448,   451,   449,   438,   450,
     453,   461,   463,   464,   454,   455,   469,   470,   466,   456,
     452,   459,   460,   458,   465,   468,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,    88,    89,    92,    94,    93,    90,    91,     0,     0,
       0,     0,    42,    43,    44,   137,     0,   113,     0,   643,
       0,     0,     0,     0,     0,     0,     0,   636,   637,   638,
     639,   641,   640,   642,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,    61,    58,
      51,    60,    54,    55,    56,    52,    59,    57,    53,     0,
       0,    80,     0,     0,     0,     0,    75,     0,     0,     0,
       0,   249,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   228,   229,   230,   239,   231,   232,
     233,   234,   235,   242,   236,   237,   238,   240,   241,   243,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   601,     0,     0,   396,
       0,     0,     0,   393,   394,   395,   404,     0,     0,   402,
     403,   418,   408,     0,     0,   417,     0,   414,   415,   416,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   422,   583,   594,     0,     0,   586,     0,
       0,     0,   576,   577,   578,   579,   580,   581,   582,   387,
       0,     0,     0,   384,   385,   386,     0,   205,     0,     0,
       0,   214,     0,   212,   213,   215,   216,    95,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,    45,     0,
       0,     0,    41,     0,     0,     0,     0,     0,     0,   278,
     279,   280,   281,     0,     0,     0,     0,     0,     0,     0,
     635,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,   296,     0,     0,
     289,   290,   291,   292,     0,     0,   315,     0,   310,   311,
     312,     0,     0,     0,    74,   244,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   227,     0,     0,     0,     0,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   600,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   360,     0,     0,     0,     0,     0,     0,     0,     0,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   348,
     345,   347,   346,   344,   341,   342,   343,   349,     0,     0,
       0,   392,     0,     0,   401,     0,     0,     0,     0,   413,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,   421,     0,     0,     0,     0,
       0,     0,     0,   575,     0,     0,     0,   383,   217,     0,
       0,     0,     0,     0,   211,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,     0,    40,     0,     0,     0,     0,     0,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   115,   116,   117,   118,   132,   119,
     133,   120,   121,   122,   128,   123,   124,   125,   126,   127,
     129,   130,   131,   134,   282,     0,     0,     0,     0,   277,
       0,     0,     0,     0,     0,     0,   634,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,   293,
       0,     0,     0,     0,   288,   313,     0,     0,     0,   309,
      83,    82,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   226,   633,
     630,   629,   619,    26,    26,    26,    26,    26,    28,    27,
     623,   624,   628,   626,   631,   632,   625,   627,   620,   621,
     622,   192,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   181,   350,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   331,     0,     0,   391,     0,   400,     0,     0,
       0,   407,   487,   491,   479,   505,   518,   517,   570,   522,
     485,   572,   513,   520,   486,   477,   478,   494,   483,   512,
     484,   482,   496,   495,   514,   490,   489,   488,   515,   511,
     568,   569,   508,   550,   565,   566,   551,   552,   553,   560,
     554,   563,   567,   556,   561,   557,   562,   555,   559,   558,
     564,     0,   549,   510,   528,   543,   544,   529,   530,   531,
     538,   532,   541,   545,   534,   539,   535,   540,   533,   537,
     536,   542,     0,   527,   504,   506,   521,   516,   481,   507,
     502,   503,   500,   501,   498,   499,   493,   492,    34,    34,
      34,    36,    35,   571,   523,   509,   519,   480,   497,     0,
       0,     0,     0,     0,     0,   574,     0,     0,   382,     0,
       0,     0,   221,     0,   220,   204,   100,   101,    99,    98,
     102,   108,   103,   107,   105,   106,   104,    97,    96,   109,
      46,    47,   135,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,     0,     0,     0,   276,   648,   644,
     647,   649,   645,   646,    67,    73,    65,    69,    68,    64,
      63,    66,    72,    70,    71,     0,     0,     0,   287,     0,
       0,   308,   268,   248,   267,   259,   260,   256,   262,   258,
     257,   264,   261,     0,   263,   255,     0,   252,   254,   270,
     266,   265,   274,   269,   246,   273,   272,   271,   247,   245,
      29,    30,    31,    32,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   328,   397,   398,   405,   412,     0,   411,
     419,   420,   547,     0,   525,     0,    37,    38,    39,   599,
     598,     0,   597,   585,   584,   591,   590,     0,   589,   593,
     592,   389,   388,   210,   209,     0,   208,   224,   223,     0,
     218,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,   284,   285,   283,   294,   300,   304,   306,   305,
     303,   301,   302,     0,   299,   295,   314,   319,   323,   326,
     325,   324,   322,   320,   321,     0,   318,   253,   250,     0,
     197,   199,   201,   200,   198,   193,   196,   195,   202,   355,
     357,   358,   376,   380,   379,   375,   374,   373,   359,   369,
     370,   367,   368,   366,     0,   371,     0,   363,   365,   353,
     377,   378,   351,   356,   372,   354,   409,     0,   548,   526,
     595,     0,   587,     0,   206,     0,   222,   219,   154,   143,
     152,   140,   169,   167,   176,   166,   161,   170,   174,   163,
     171,     0,   173,   168,   162,   175,   172,   164,   165,     0,
     158,   160,   150,   144,   141,   147,   136,   151,   139,   153,
     145,   146,   142,   149,   138,   148,   297,     0,   316,     0,
     251,   364,   361,     0,   410,   596,   588,   207,   159,   156,
       0,   298,   317,   362,   157
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     1,    24,   838,   839,   981,   982,    25,   251,   252,
     253,   254,    26,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,    27,    71,    72,    73,
      74,    75,    28,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,    29,    61,   256,   753,   754,   755,   257,
     756,   757,   758,   759,   760,   761,   762,   763,   764,   765,
     766,   767,   768,   769,   770,   771,   772,   773,  1027,  1289,
    1290,  1291,    30,    50,   111,   580,   581,   582,   112,   583,
     584,   585,   586,   587,   588,   589,   590,    31,    58,   461,
     709,  1165,  1166,   462,   463,   464,  1003,  1004,   465,   466,
      32,    48,   323,   324,   325,   326,   327,   328,   329,   539,
    1086,  1087,  1088,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,    33,    62,   488,   489,   490,   491,   492,
      34,    65,   519,   520,   521,   522,   523,   801,  1203,  1204,
      35,    66,   527,   528,   529,   530,   807,  1215,  1216,    36,
      51,   114,   609,   610,   611,   115,   612,   613,   614,   615,
     616,   617,   618,   873,  1246,  1247,  1248,   619,   620,   621,
     622,   623,   624,   625,   626,   627,    37,    57,   452,   453,
     454,   455,    38,    52,   362,   363,   364,   365,    39,    53,
     368,   369,   370,    40,    54,   375,   635,  1138,  1139,   376,
     377,   378,   379,    41,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   413,   962,   963,   220,   411,   941,   942,   221,
     222,   223,   224,   225,    42,    56,   441,   442,   443,   444,
     445,   699,  1157,  1158,   446,   447,   448,   696,  1151,  1152,
      43,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    44,   266,
     267,   268,   269,   270,   271,   272,   273
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -872
static const short int yypact[] =
{
    -872,   723,  -872,  -179,  -229,  -872,  -222,  -872,  -872,  -872,
    -872,  -872,  -215,  -872,  -872,  -872,  -205,  -203,  -872,  -872,
    -200,  -195,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,   264,  -192,   534,
    -135,   -92,  -183,  -172,  -162,   420,  -156,  -144,  -139,   351,
     180,   -14,   -98,   396,   368,   -81,   -73,  -101,   -60,   -45,
     -38,    41,  -872,  -872,  -872,  -872,   657,  -872,   -29,    -6,
      -4,    -1,    16,    35,    38,    40,    50,    64,    68,    74,
      75,    76,    77,   118,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,   -12,  -872,  -872,    21,  -872,    47,     4,    97,  -872,
      82,    83,    87,    89,   120,   121,   123,   127,   128,   132,
     133,   134,   136,   138,   139,   141,   142,   143,   152,   163,
     174,   176,   177,   178,   179,   181,   185,   187,   188,   191,
     192,  -872,   193,  -872,   195,   199,   200,   202,   203,   214,
     221,   225,   228,   229,   233,   235,   239,   245,   248,   251,
     253,   254,     9,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,   307,     6,   282,    70,
     255,   257,   259,   262,   263,   266,   271,   272,    67,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,   175,   273,
     274,    24,  -872,  -872,  -872,  -872,    48,  -872,   231,  -872,
     275,   279,   283,   291,   294,   299,    72,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,   301,   302,   303,   305,   306,   314,
     318,   321,   322,   324,   326,   330,   217,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,   101,
      96,  -872,   117,   156,   405,   337,  -872,   339,   340,   343,
     347,  -872,   349,   353,   354,   355,   362,   366,   367,   370,
     372,   373,   374,   220,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
     399,   467,   484,   435,   494,   494,   495,   502,   449,   450,
     452,   456,   457,   458,   464,   408,  -872,   298,   785,  -872,
     410,   415,    20,  -872,  -872,  -872,  -872,   417,    12,  -872,
    -872,  -872,  -872,   418,   425,  -872,   158,  -872,  -872,  -872,
     486,   494,   487,   494,   545,   528,   547,   492,   493,   496,
     554,   533,   504,   558,   562,   563,   508,   494,   509,   568,
     549,   513,   570,   571,   574,   494,   576,   559,   578,   579,
     524,   465,   529,   478,   494,   494,   532,   577,   542,   548,
    -116,   -59,   550,   552,   494,   494,   607,   494,   555,   556,
     557,   560,   501,  -872,  -872,  -872,   505,   506,  -872,   510,
     511,   168,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
     515,   517,    61,  -872,  -872,  -872,   516,  -872,   518,   525,
     526,  -872,   124,  -872,  -872,  -872,  -872,  -872,   597,   600,
     606,   622,   183,   625,   626,   589,   538,  -872,  -872,   628,
     634,   553,  -872,   472,   561,   544,   546,   564,   159,  -872,
    -872,  -872,  -872,   608,   613,   615,   616,   619,   494,   572,
    -872,  -872,   665,   620,   666,   673,   677,   678,   679,   680,
     699,   682,   683,   590,  -872,   591,   596,  -872,   601,    44,
    -872,  -872,  -872,  -872,   592,   602,  -872,    58,  -872,  -872,
    -872,   593,   603,   609,  -872,  -872,   663,   695,   664,   605,
     668,   669,   670,   672,   674,   711,   731,   714,   716,   681,
     717,   623,  -872,   630,   631,   632,   633,   503,   635,   636,
     637,   638,   639,   642,   643,   644,   646,   647,   648,  -872,
     649,   651,   654,   656,   659,   660,   661,   662,   684,   685,
     218,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,   667,   687,   688,   697,   700,   705,   712,   713,   715,
     718,  -872,   720,   721,   722,   730,   732,   733,   735,   172,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,   755,   761,
     676,  -872,   768,   686,  -872,   736,   775,   776,   698,  -872,
     726,   740,   741,   742,   743,   744,   745,   746,   747,   748,
     749,   750,   751,   752,   753,   756,   757,   758,   759,   760,
     762,   763,   764,   765,   766,   767,   769,   770,   771,   772,
     773,   719,   774,   754,   777,   778,   779,   780,   781,   782,
     783,   784,   786,   787,   788,   789,   790,   791,   333,   792,
     793,   794,   795,   796,   797,  -872,   798,   494,   811,   799,
     814,   815,   800,  -872,   817,   850,   803,  -872,  -872,   801,
     856,   863,   739,   805,  -872,   806,   807,   808,   809,   810,
     812,   813,   816,   818,   819,   820,   821,   822,   823,  -872,
     824,   825,  -872,   826,   827,   828,   829,   830,  -872,   831,
     832,   833,   834,   835,   836,   837,   838,   839,   840,   841,
     842,   843,   844,    19,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,   870,   871,   880,   848,  -872,
     849,   851,   852,   853,   854,   855,  -872,   857,   858,   859,
     860,   861,   862,   864,   865,   866,   867,   868,  -872,  -872,
     893,   847,   894,   869,  -872,  -872,   906,   872,   873,  -872,
    -872,  -872,  -872,   874,   876,   877,   658,   878,   879,   881,
     882,   883,   884,   885,   886,   887,   888,   889,  -872,  -872,
    -872,  -872,  -872,   494,   494,   494,   494,   494,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,   494,   927,   928,   930,   940,   923,   942,   494,
     607,   890,  -872,  -872,   951,    95,   920,   965,   966,   929,
     937,   948,   987,   891,   988,   990,   991,   992,  1011,   994,
     995,   901,  -872,   902,   903,  -872,   904,  -872,   996,   905,
     907,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -232,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -225,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,   607,   607,
     607,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,     7,
     908,   909,    22,   910,   911,  -872,   912,   913,  -872,   -67,
     914,   915,   737,  -210,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,   973,  1012,   975,   976,   917,   978,   979,
     980,   981,  1020,   983,  1022,   985,   986,   989,  1025,   993,
    1026,   997,   933,  -872,   934,   935,   938,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,   939,   258,   941,  -872,   943,
     671,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,   691,  -872,  -872,  -208,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,   944,   945,   946,   947,   949,
     950,   952,   953,   954,  -872,   955,   956,   957,   958,   959,
     960,   961,   962,   963,   964,   551,   967,   968,   969,   970,
     971,   972,   974,  -872,  -872,  -872,  -872,  -872,  -171,  -872,
    -872,  -872,  -872,   719,  -872,   754,  -872,  -872,  -872,  -872,
    -872,  -136,  -872,  -872,  -872,  -872,  -872,  -126,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -103,  -872,  -872,  -872,  1050,
    -872,   739,   977,   982,   984,   998,   567,   999,  1000,  1001,
    1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1013,
    1014,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,   -47,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,   -13,  -872,  -872,  -872,   658,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,     1,  -872,    36,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,   996,  -872,  -872,
    -872,     7,  -872,    22,  -872,   -67,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,   499,  -872,  -872,  -872,  -872,  -872,  -872,  -872,    51,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,   258,  -872,   671,
    -872,  -872,  -872,   551,  -872,  -872,  -872,  -872,  -872,  -872,
     567,  -872,  -872,  -872,  -872
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -872,  -872,  -872,  -497,  -344,  -871,  -424,  -872,  -872,   936,
    -872,  -872,  -872,  -872,   892,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  1113,  -872,
    -872,  -872,  -872,  -872,  1015,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,   111,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -401,  -361,  -872,  -872,  -872,  -872,   621,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,   -63,  -872,   802,  -872,  -872,    43,  -872,  -872,
    -872,  -872,  -872,   896,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,   -10,   129,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,   727,  -872,  -872,  -872,
    -872,  -872,  -872,   692,  -872,  -872,  -872,  -872,  -872,   -91,
    -872,  -872,  -872,   690,  -872,  -872,  -872,  -872,   -88,  -872,
    -872,  -872,  -872,   614,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,   -89,   -22,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,   804,
    -872,  -872,  -872,  -872,  -872,   895,  -872,  -872,  -872,  -872,
    -872,   897,  -872,  -872,  -872,  -872,  -872,  -872,   -32,  -872,
     875,  -872,  -872,  -872,  -872,  1054,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,    84,  -872,  -872,  -872,    85,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,   845,  -872,  -872,
    -872,  -872,  -872,   -36,  -872,  -872,  -872,  -872,  -872,   -31,
    -872,  -872,  1138,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    1016,  -872,  -872,  -872,  -872,  -872,  -872
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned short int yytable[] =
{
     558,   559,   689,  1163,  1142,   366,   110,   449,  1143,    47,
     119,  1144,  1239,   366,  1240,  1145,    49,   120,   121,  1149,
     733,   359,   122,    55,   734,   248,  1170,  1241,  1218,   123,
    1171,  1242,  1219,    59,  1155,    60,   124,   641,    63,   643,
     125,   126,    67,    64,   735,   515,    76,   127,   359,   113,
     128,   129,   130,   657,   131,   116,   736,    45,    46,   524,
     132,   665,   449,   680,   681,  1256,   117,   737,   229,  1257,
     674,   675,   738,   259,   133,   134,   118,    68,   135,   739,
     686,   687,   226,   690,   136,   367,   740,    69,   137,   138,
     741,  1243,   139,   367,   227,   140,   141,   524,   371,   228,
    1260,   360,   515,   742,  1261,   142,   143,  1146,  1147,  1148,
    1262,   260,   144,   145,  1263,   146,   147,   148,   149,    77,
     682,   683,   230,   231,   232,   456,   261,   255,   360,   150,
     233,   743,    78,  1264,   249,   301,   744,  1265,   151,   152,
     258,   153,   262,   154,   155,   263,   264,   156,  1164,   450,
     372,    79,    80,    70,   785,   745,   516,   299,    81,   371,
     484,   250,   234,   361,   265,   300,   746,   747,   748,   434,
     525,   749,   435,   591,   157,   592,   158,   457,   593,   302,
     159,   248,   485,   594,   160,   161,   162,   163,  1150,  1306,
     361,   164,   165,  1307,   303,   235,   595,   596,   597,   166,
     458,   304,   598,  1156,   450,   459,    82,    83,   525,   373,
     340,   372,   436,   516,   517,   437,    84,    85,   274,   570,
     599,   307,  1245,  1308,   600,   601,   357,  1309,   526,   167,
     451,   168,   484,   341,   169,   342,    86,    87,   343,   170,
     374,   308,   750,   751,   171,   309,   432,   571,   602,   633,
     603,    88,   752,   275,   485,   344,  1042,   630,   531,   358,
      89,   481,   438,   604,   460,    67,   526,   236,   518,   310,
     373,   517,  1312,   311,   345,   486,  1313,   346,   305,   347,
     439,   803,   312,   456,   605,   451,   483,  1319,   313,   348,
     249,  1320,  1116,  1117,   276,   808,   237,   532,   706,   570,
      68,   374,   487,   349,   476,   314,   467,   350,   434,   499,
      69,   435,   606,   351,   352,   353,   354,   250,   572,   573,
     574,   380,   381,   575,   607,   518,   382,   571,   383,   277,
     576,   278,   279,   315,   608,   457,  1100,  1101,  1102,  1103,
    1104,   316,  1196,   577,    90,    91,    92,   486,   978,   979,
     980,   436,   229,   990,   437,   355,   317,   578,   458,   384,
     385,   713,   386,   459,   318,   319,   387,   388,   280,   274,
     281,   389,   390,   391,   487,   392,    70,   393,   394,   579,
     395,   396,   397,   282,   719,   720,   721,   722,   723,   724,
     725,   398,   440,   320,   321,   638,   778,   259,   572,   573,
     574,   438,   399,   575,   275,   702,   230,   231,   232,   881,
     576,   478,  1197,   400,   233,   401,   402,   403,   404,   439,
     405,   119,   460,   577,   406,   283,   407,   408,   120,   121,
     409,   410,   412,   122,   414,   260,  1113,   578,   415,   416,
     123,   417,   418,  1198,   322,   276,   234,   124,   284,   285,
     261,   125,   126,   419,   513,   861,   688,   551,   127,   579,
     420,   128,   129,   130,   421,   131,   262,   422,   423,   263,
     264,   132,   424,   733,   425,  1199,  1200,   734,   426,   235,
     277,  1201,   278,   279,   427,   133,   134,   428,   265,   135,
     429,  1202,   430,   431,   468,   136,   469,   735,   470,   137,
     138,   471,   472,   139,  1272,   473,   140,   141,  1105,   736,
     474,   475,   479,   480,   493,  1112,   142,   143,   494,   280,
     737,   281,   495,   144,   145,   738,   146,   147,   148,   149,
     496,   440,   739,   497,   282,    77,  1273,   501,   498,   740,
     150,   502,   503,   741,   504,   505,   533,  1274,    78,   151,
     152,   236,   153,   506,   154,   155,   742,   507,   156,  1275,
     508,   509,  1239,   510,  1240,   511,  1276,    79,    80,   512,
    1277,  1278,  1272,   534,    81,   535,   283,  1241,   553,   536,
     237,  1242,   537,  1279,   743,   157,   538,   158,   540,   744,
     554,   159,   541,   542,   543,   160,   161,   162,   163,   284,
     285,   544,   164,   165,  1273,   545,   546,   555,   745,   547,
     166,   548,   549,   550,   556,  1274,  1280,   557,   560,   746,
     747,   748,    82,    83,   749,   561,   557,  1275,   562,   563,
    1282,   564,    84,    85,  1276,   565,   566,   567,  1277,  1278,
     167,  1243,   168,   568,   569,   169,  1283,  1284,  1285,   628,
     170,  1279,    86,    87,   629,   171,   632,   636,   307,   833,
     834,   835,   836,   837,   637,   640,   642,    88,   644,   645,
     646,   647,   648,  1244,   651,   649,    89,   650,   308,  1075,
    1076,   653,   309,   652,  1280,   654,   655,   656,   658,  1281,
     660,   659,   661,   662,   663,   750,   751,   664,  1282,   666,
     667,   668,   669,   670,   671,   752,   310,  1077,   672,  1286,
     311,   676,  1075,  1076,  1283,  1284,  1285,   673,   677,   312,
    1078,   678,  1287,     2,     3,   313,  1079,   679,     4,   684,
     688,   685,  1288,     5,   691,   692,   693,   695,   715,   694,
    1077,   716,   314,  1080,   697,   698,     6,   717,     7,   700,
     701,     8,   708,  1078,   704,  1207,   705,   710,     9,  1079,
      90,    91,    92,   718,   711,   712,   726,   727,   728,   730,
     315,  1081,  1245,    10,   729,   731,  1080,  1286,   316,  1082,
    1083,    11,    12,   775,    13,   776,   591,   780,   592,   732,
    1287,   593,   781,   317,   782,   783,   594,   774,   784,   788,
    1288,   318,   319,   777,  1081,    14,   787,   789,   786,   595,
     596,   597,  1082,  1084,   790,   598,    15,    16,   791,   792,
     793,   794,   795,   796,   797,  1208,   798,   799,   805,   810,
     320,   321,  1085,   599,    17,   800,   814,   600,   601,   811,
     802,   806,   813,   815,   816,   812,  1084,   817,   818,   819,
      18,   820,   822,   821,   823,   824,  1209,   825,   827,   828,
     826,   602,  1002,   603,  1043,  1085,   829,   830,   831,   832,
    1210,   840,   841,   842,   843,   844,   604,    19,   845,   846,
     847,   322,   848,   849,   850,   851,    20,    21,  1211,  1212,
     852,    22,    23,   853,  1213,   854,   883,   605,   855,   856,
     857,   858,   884,   863,  1214,   923,   924,   925,   926,   886,
     927,   928,   885,   929,   930,   931,   889,   890,   932,  1324,
    1318,  1169,   887,   859,   860,   606,   864,   865,   933,   934,
     935,   936,   937,   938,   891,   939,   866,   607,   940,   867,
     944,   945,   946,   947,   868,   948,   949,   608,   950,   951,
     952,   869,   870,   953,   871,   993,   994,   872,   996,   874,
     875,   876,   892,   954,   955,   956,   957,   958,   959,   877,
     960,   878,   879,   961,   880,   888,   893,   894,   895,   896,
     897,   898,   899,   900,   901,   902,   903,   904,   905,   906,
     991,   997,   907,   908,   909,   910,   911,  1000,   912,   913,
     914,   915,   916,   917,  1001,   918,   919,   920,   921,   922,
     943,  1044,  1045,   964,   965,   966,   967,   968,   969,   970,
     971,  1046,   972,   973,   974,   975,   976,   977,   983,   984,
     985,   986,   987,   988,  1065,  1067,   995,   989,   992,   998,
     999,  1005,  1006,  1007,  1008,  1009,  1010,  1069,  1011,  1012,
    1106,  1107,  1013,  1108,  1014,  1015,  1016,  1017,  1018,  1019,
    1020,  1021,  1022,  1109,  1110,  1111,  1023,  1024,  1025,  1026,
    1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,
    1038,  1039,  1040,  1041,  1047,  1048,  1066,  1049,  1050,  1051,
    1052,  1053,  1115,  1054,  1055,  1056,  1057,  1058,  1059,  1118,
    1060,  1061,  1062,  1063,  1064,  1068,  1119,  1120,  1121,  1071,
    1072,  1070,  1073,  1074,  1089,  1090,  1122,  1091,  1092,  1093,
    1094,  1095,  1096,  1097,  1098,  1099,  1114,  1123,  1124,  1126,
    1125,  1127,  1128,  1129,  1130,  1131,  1132,  1133,  1134,  1135,
    1136,  1140,  1137,  1141,  1153,  1154,  1159,  1160,  1161,  1162,
    1167,  1168,  1172,  1173,  1174,  1175,  1176,  1177,  1178,  1179,
    1180,  1181,  1182,  1183,  1184,  1185,  1187,  1189,  1186,  1191,
    1192,  1193,  1188,  1266,  1194,  1195,  1190,  1205,   514,  1206,
    1220,  1221,  1222,  1223,   306,  1224,  1225,   482,  1226,  1227,
    1228,  1229,  1230,  1231,  1232,  1233,  1234,  1235,  1236,  1237,
    1238,   862,  1317,  1249,  1250,  1251,  1252,  1253,  1254,  1310,
    1255,   804,  1217,  1268,  1267,   779,  1321,   809,  1269,   552,
    1270,  1322,  1311,   882,  1323,  1314,   433,  1316,  1258,  1259,
    1315,   356,     0,     0,  1271,  1292,  1293,  1294,  1295,  1296,
    1297,  1298,  1299,  1300,  1301,  1302,  1303,     0,     0,  1304,
    1305,   639,     0,   477,     0,     0,   707,   631,     0,     0,
       0,     0,     0,     0,   714,   634,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   500,     0,     0,     0,   703
};

static const short int yycheck[] =
{
     344,   345,   426,    70,   236,     1,   141,     1,   240,   238,
       1,   236,    11,     1,    13,   240,   238,     8,     9,    12,
       1,     1,    13,   238,     5,     1,   236,    26,   236,    20,
     240,    30,   240,   238,    12,   238,    27,   381,   238,   383,
      31,    32,     1,   238,    25,     1,   238,    38,     1,   141,
      41,    42,    43,   397,    45,   238,    37,   236,   237,     1,
      51,   405,     1,   179,   180,   236,   238,    48,     1,   240,
     414,   415,    53,     1,    65,    66,   238,    36,    69,    60,
     424,   425,   238,   427,    75,    81,    67,    46,    79,    80,
      71,    90,    83,    81,   238,    86,    87,     1,     1,   238,
     236,    81,     1,    84,   240,    96,    97,   978,   979,   980,
     236,    39,   103,   104,   240,   106,   107,   108,   109,     1,
     179,   180,    55,    56,    57,     1,    54,   141,    81,   120,
      63,   112,    14,   236,   110,   236,   117,   240,   129,   130,
     238,   132,    70,   134,   135,    73,    74,   138,   215,   143,
      53,    33,    34,   112,   498,   136,   112,   238,    40,     1,
       1,   137,    95,   143,    92,   238,   147,   148,   149,     1,
     112,   152,     4,     1,   165,     3,   167,    53,     6,   239,
     171,     1,    23,    11,   175,   176,   177,   178,   181,   236,
     143,   182,   183,   240,   239,   128,    24,    25,    26,   190,
      76,   239,    30,   181,   143,    81,    88,    89,   112,   112,
     239,    53,    44,   112,   170,    47,    98,    99,     1,     1,
      48,     1,   221,   236,    52,    53,   238,   240,   170,   220,
     224,   222,     1,   239,   225,   239,   118,   119,   239,   230,
     143,    21,   223,   224,   235,    25,   237,    29,    76,   237,
      78,   133,   233,    36,    23,   239,   237,   237,   141,   238,
     142,   237,    94,    91,   140,     1,   170,   200,   224,    49,
     112,   170,   236,    53,   239,   116,   240,   239,   237,   239,
     112,   237,    62,     1,   112,   224,   238,   236,    68,   239,
     110,   240,   197,   198,    77,   237,   229,   141,   237,     1,
      36,   143,   143,   239,   237,    85,   236,   239,     1,   237,
      46,     4,   140,   239,   239,   239,   239,   137,   100,   101,
     102,   239,   239,   105,   152,   224,   239,    29,   239,   112,
     112,   114,   115,   113,   162,    53,   833,   834,   835,   836,
     837,   121,    84,   125,   226,   227,   228,   116,    15,    16,
      17,    44,     1,   697,    47,   237,   136,   139,    76,   239,
     239,   237,   239,    81,   144,   145,   239,   239,   151,     1,
     153,   239,   239,   239,   143,   239,   112,   239,   239,   161,
     239,   239,   239,   166,   201,   202,   203,   204,   205,   206,
     207,   239,   224,   173,   174,   237,   237,     1,   100,   101,
     102,    94,   239,   105,    36,   237,    55,    56,    57,   237,
     112,   236,   154,   239,    63,   239,   239,   239,   239,   112,
     239,     1,   140,   125,   239,   208,   239,   239,     8,     9,
     239,   239,   239,    13,   239,    39,   860,   139,   239,   239,
      20,   239,   239,   185,   224,    77,    95,    27,   231,   232,
      54,    31,    32,   239,   237,   237,   123,   237,    38,   161,
     239,    41,    42,    43,   239,    45,    70,   239,   239,    73,
      74,    51,   239,     1,   239,   217,   218,     5,   239,   128,
     112,   223,   114,   115,   239,    65,    66,   239,    92,    69,
     239,   233,   239,   239,   239,    75,   239,    25,   239,    79,
      80,   239,   239,    83,     5,   239,    86,    87,   852,    37,
     239,   239,   239,   239,   239,   859,    96,    97,   239,   151,
      48,   153,   239,   103,   104,    53,   106,   107,   108,   109,
     239,   224,    60,   239,   166,     1,    37,   236,   239,    67,
     120,   239,   239,    71,   239,   239,   141,    48,    14,   129,
     130,   200,   132,   239,   134,   135,    84,   239,   138,    60,
     239,   239,    11,   239,    13,   239,    67,    33,    34,   239,
      71,    72,     5,   236,    40,   236,   208,    26,   179,   239,
     229,    30,   239,    84,   112,   165,   239,   167,   239,   117,
     123,   171,   239,   239,   239,   175,   176,   177,   178,   231,
     232,   239,   182,   183,    37,   239,   239,   123,   136,   239,
     190,   239,   239,   239,   179,    48,   117,   123,   123,   147,
     148,   149,    88,    89,   152,   123,   123,    60,   179,   179,
     131,   179,    98,    99,    67,   179,   179,   179,    71,    72,
     220,    90,   222,   179,   236,   225,   147,   148,   149,   239,
     230,    84,   118,   119,   239,   235,   239,   239,     1,   156,
     157,   158,   159,   160,   239,   179,   179,   133,   123,   141,
     123,   179,   179,   122,   141,   179,   142,   123,    21,    21,
      22,   123,    25,   179,   117,   123,   123,   179,   179,   122,
     141,   123,   179,   123,   123,   223,   224,   123,   131,   123,
     141,   123,   123,   179,   239,   233,    49,    49,   179,   210,
      53,   179,    21,    22,   147,   148,   149,   239,   141,    62,
      62,   179,   223,     0,     1,    68,    68,   179,     5,   179,
     123,   179,   233,    10,   179,   179,   179,   236,   141,   179,
      49,   141,    85,    85,   239,   239,    23,   141,    25,   239,
     239,    28,   236,    62,   239,    84,   239,   239,    35,    68,
     226,   227,   228,   141,   239,   239,   141,   141,   179,   141,
     113,   113,   221,    50,   236,   141,    85,   210,   121,   121,
     122,    58,    59,   239,    61,   239,     1,   179,     3,   236,
     223,     6,   179,   136,   179,   179,    11,   236,   179,   179,
     233,   144,   145,   239,   113,    82,   141,   141,   236,    24,
      25,    26,   121,   155,   141,    30,    93,    94,   141,   141,
     141,   141,   123,   141,   141,   154,   236,   236,   236,   236,
     173,   174,   174,    48,   111,   239,   141,    52,    53,   236,
     239,   239,   179,   179,   239,   236,   155,   179,   179,   179,
     127,   179,   141,   179,   123,   141,   185,   141,   141,   236,
     179,    76,   123,    78,   753,   174,   236,   236,   236,   236,
     199,   236,   236,   236,   236,   236,    91,   154,   236,   236,
     236,   224,   236,   236,   236,   236,   163,   164,   217,   218,
     239,   168,   169,   239,   223,   239,   141,   112,   239,   239,
     239,   239,   141,   236,   233,   186,   187,   188,   189,   141,
     191,   192,   236,   194,   195,   196,   141,   141,   199,  1320,
    1281,   184,   236,   239,   239,   140,   239,   239,   209,   210,
     211,   212,   213,   214,   236,   216,   239,   152,   219,   239,
     186,   187,   188,   189,   239,   191,   192,   162,   194,   195,
     196,   239,   239,   199,   239,   141,   141,   239,   141,   239,
     239,   239,   236,   209,   210,   211,   212,   213,   214,   239,
     216,   239,   239,   219,   239,   239,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     179,   141,   236,   236,   236,   236,   236,   141,   236,   236,
     236,   236,   236,   236,   141,   236,   236,   236,   236,   236,
     236,   141,   141,   236,   236,   236,   236,   236,   236,   236,
     236,   141,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   141,   141,   236,   239,   239,   236,
     239,   236,   236,   236,   236,   236,   236,   141,   236,   236,
     123,   123,   236,   123,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   123,   141,   123,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   236,   236,   239,   236,   236,   236,
     236,   236,   141,   236,   236,   236,   236,   236,   236,   179,
     236,   236,   236,   236,   236,   236,   141,   141,   179,   236,
     236,   239,   236,   236,   236,   236,   179,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   179,   141,   141,
     239,   141,   141,   141,   123,   141,   141,   236,   236,   236,
     236,   236,   146,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   179,   141,   179,   179,   239,   179,   179,   179,
     179,   141,   179,   141,   179,   179,   141,   141,   179,   236,
     236,   236,   179,   123,   236,   236,   179,   236,   286,   236,
     236,   236,   236,   236,    71,   236,   236,   251,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   580,  1265,   236,   236,   236,   236,   236,   236,  1219,
     236,   519,  1083,   236,  1171,   488,  1307,   527,   236,   323,
     236,  1309,  1244,   609,  1313,  1257,   172,  1263,  1143,  1145,
    1261,    93,    -1,    -1,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,    -1,    -1,   236,
     236,   376,    -1,   238,    -1,    -1,   452,   362,    -1,    -1,
      -1,    -1,    -1,    -1,   462,   368,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   266,    -1,    -1,    -1,   441
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   242,     0,     1,     5,    10,    23,    25,    28,    35,
      50,    58,    59,    61,    82,    93,    94,   111,   127,   154,
     163,   164,   168,   169,   243,   248,   253,   267,   273,   284,
     313,   328,   341,   364,   371,   381,   390,   417,   423,   429,
     434,   444,   505,   521,   539,   236,   237,   238,   342,   238,
     314,   391,   424,   430,   435,   238,   506,   418,   329,   238,
     238,   285,   365,   238,   238,   372,   382,     1,    36,    46,
     112,   268,   269,   270,   271,   272,   238,     1,    14,    33,
      34,    40,    88,    89,    98,    99,   118,   119,   133,   142,
     226,   227,   228,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     141,   315,   319,   141,   392,   396,   238,   238,   238,     1,
       8,     9,    13,    20,    27,    31,    32,    38,    41,    42,
      43,    45,    51,    65,    66,    69,    75,    79,    80,    83,
      86,    87,    96,    97,   103,   104,   106,   107,   108,   109,
     120,   129,   130,   132,   134,   135,   138,   165,   167,   171,
     175,   176,   177,   178,   182,   183,   190,   220,   222,   225,
     230,   235,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     496,   500,   501,   502,   503,   504,   238,   238,   238,     1,
      55,    56,    57,    63,    95,   128,   200,   229,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,     1,   110,
     137,   249,   250,   251,   252,   141,   286,   290,   238,     1,
      39,    54,    70,    73,    74,    92,   540,   541,   542,   543,
     544,   545,   546,   547,     1,    36,    77,   112,   114,   115,
     151,   153,   166,   208,   231,   232,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   238,
     238,   236,   239,   239,   239,   237,   269,     1,    21,    25,
      49,    53,    62,    68,    85,   113,   121,   136,   144,   145,
     173,   174,   224,   343,   344,   345,   346,   347,   348,   349,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   237,   523,   238,   238,     1,
      81,   143,   425,   426,   427,   428,     1,    81,   431,   432,
     433,     1,    53,   112,   143,   436,   440,   441,   442,   443,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   497,   239,   493,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   237,   446,     1,     4,    44,    47,    94,   112,
     224,   507,   508,   509,   510,   511,   515,   516,   517,     1,
     143,   224,   419,   420,   421,   422,     1,    53,    76,    81,
     140,   330,   334,   335,   336,   339,   340,   236,   239,   239,
     239,   239,   239,   239,   239,   239,   237,   275,   236,   239,
     239,   237,   250,   238,     1,    23,   116,   143,   366,   367,
     368,   369,   370,   239,   239,   239,   239,   239,   239,   237,
     541,   236,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   237,   255,     1,   112,   170,   224,   373,
     374,   375,   376,   377,     1,   112,   170,   383,   384,   385,
     386,   141,   141,   141,   236,   236,   239,   239,   239,   350,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   237,   344,   179,   123,   123,   179,   123,   245,   245,
     123,   123,   179,   179,   179,   179,   179,   179,   179,   236,
       1,    29,   100,   101,   102,   105,   112,   125,   139,   161,
     316,   317,   318,   320,   321,   322,   323,   324,   325,   326,
     327,     1,     3,     6,    11,    24,    25,    26,    30,    48,
      52,    53,    76,    78,    91,   112,   140,   152,   162,   393,
     394,   395,   397,   398,   399,   400,   401,   402,   403,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   239,   239,
     237,   426,   239,   237,   432,   437,   239,   239,   237,   441,
     179,   245,   179,   245,   123,   141,   123,   179,   179,   179,
     123,   141,   179,   123,   123,   123,   179,   245,   179,   123,
     141,   179,   123,   123,   123,   245,   123,   141,   123,   123,
     179,   239,   179,   239,   245,   245,   179,   141,   179,   179,
     179,   180,   179,   180,   179,   179,   245,   245,   123,   247,
     245,   179,   179,   179,   179,   236,   518,   239,   239,   512,
     239,   239,   237,   508,   239,   239,   237,   420,   236,   331,
     239,   239,   239,   237,   335,   141,   141,   141,   141,   201,
     202,   203,   204,   205,   206,   207,   141,   141,   179,   236,
     141,   141,   236,     1,     5,    25,    37,    48,    53,    60,
      67,    71,    84,   112,   117,   136,   147,   148,   149,   152,
     223,   224,   233,   287,   288,   289,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   236,   239,   239,   239,   237,   367,
     179,   179,   179,   179,   179,   245,   236,   141,   179,   141,
     141,   141,   141,   141,   141,   123,   141,   141,   236,   236,
     239,   378,   239,   237,   374,   236,   239,   387,   237,   384,
     236,   236,   236,   179,   141,   179,   239,   179,   179,   179,
     179,   179,   141,   123,   141,   141,   179,   141,   236,   236,
     236,   236,   236,   156,   157,   158,   159,   160,   244,   245,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   237,   317,   236,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   404,   239,   239,   239,   239,   239,   239,
     239,   237,   394,   141,   141,   236,   141,   236,   239,   141,
     141,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   186,   187,   188,   189,   191,   192,   194,
     195,   196,   199,   209,   210,   211,   212,   213,   214,   216,
     219,   498,   499,   236,   186,   187,   188,   189,   191,   192,
     194,   195,   196,   199,   209,   210,   211,   212,   213,   214,
     216,   219,   494,   495,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,    15,    16,
      17,   246,   247,   236,   236,   236,   236,   236,   236,   239,
     245,   179,   239,   141,   141,   236,   141,   141,   236,   239,
     141,   141,   123,   337,   338,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   239,   239,   239,   239,   309,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   237,   288,   141,   141,   141,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   141,   239,   141,   236,   141,
     239,   236,   236,   236,   236,    21,    22,    49,    62,    68,
      85,   113,   121,   122,   155,   174,   351,   352,   353,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     244,   244,   244,   244,   244,   245,   123,   123,   123,   123,
     141,   123,   245,   247,   236,   141,   197,   198,   179,   141,
     141,   179,   179,   179,   141,   239,   141,   141,   141,   141,
     123,   141,   141,   236,   236,   236,   236,   146,   438,   439,
     236,   236,   236,   240,   236,   240,   246,   246,   246,    12,
     181,   519,   520,   236,   236,    12,   181,   513,   514,   236,
     236,   236,   236,    70,   215,   332,   333,   236,   236,   184,
     236,   240,   179,   141,   179,   179,   239,   179,   179,   179,
     179,   141,   179,   141,   179,   179,   179,   141,   179,   141,
     179,   236,   236,   236,   236,   236,    84,   154,   185,   217,
     218,   223,   233,   379,   380,   236,   236,    84,   154,   185,
     199,   217,   218,   223,   233,   388,   389,   353,   236,   240,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,    11,
      13,    26,    30,    90,   122,   221,   405,   406,   407,   236,
     236,   236,   236,   236,   236,   236,   236,   240,   499,   495,
     236,   240,   236,   240,   236,   240,   123,   338,   236,   236,
     236,   236,     5,    37,    48,    60,    67,    71,    72,    84,
     117,   122,   131,   147,   148,   149,   210,   223,   233,   310,
     311,   312,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   240,   236,   240,
     352,   407,   236,   240,   439,   520,   514,   333,   312,   236,
     240,   380,   389,   406,   311
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
#line 399 "ircd_parser.y"
    { (yyval.number) = 0; }
    break;

  case 28:
#line 401 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number);
		}
    break;

  case 29:
#line 405 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number);
		}
    break;

  case 30:
#line 409 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number);
		}
    break;

  case 31:
#line 413 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number);
		}
    break;

  case 32:
#line 417 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number);
		}
    break;

  case 33:
#line 421 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number);
		}
    break;

  case 34:
#line 426 "ircd_parser.y"
    { (yyval.number) = 0; }
    break;

  case 36:
#line 427 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
    break;

  case 37:
#line 428 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
    break;

  case 38:
#line 429 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
    break;

  case 39:
#line 430 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
    break;

  case 46:
#line 444 "ircd_parser.y"
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
#line 461 "ircd_parser.y"
    {
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
}
    break;

  case 63:
#line 485 "ircd_parser.y"
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
#line 519 "ircd_parser.y"
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
#line 579 "ircd_parser.y"
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
#line 593 "ircd_parser.y"
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
#line 611 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.description);
    DupString(ServerInfo.description,yylval.string);
  }
}
    break;

  case 68:
#line 620 "ircd_parser.y"
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
#line 634 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.network_desc);
    DupString(ServerInfo.network_desc, yylval.string);
  }
}
    break;

  case 70:
#line 643 "ircd_parser.y"
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
#line 671 "ircd_parser.y"
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
#line 701 "ircd_parser.y"
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
#line 717 "ircd_parser.y"
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

  case 81:
#line 773 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.name);
    DupString(AdminInfo.name, yylval.string);
  }
}
    break;

  case 82:
#line 782 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.email);
    DupString(AdminInfo.email, yylval.string);
  }
}
    break;

  case 83:
#line 791 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.description);
    DupString(AdminInfo.description, yylval.string);
  }
}
    break;

  case 96:
#line 814 "ircd_parser.y"
    {
                        }
    break;

  case 97:
#line 818 "ircd_parser.y"
    {
                        }
    break;

  case 98:
#line 822 "ircd_parser.y"
    {
                        }
    break;

  case 99:
#line 826 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
}
    break;

  case 100:
#line 833 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
}
    break;

  case 101:
#line 840 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
}
    break;

  case 102:
#line 847 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
}
    break;

  case 103:
#line 851 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
}
    break;

  case 104:
#line 855 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
}
    break;

  case 105:
#line 859 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
}
    break;

  case 106:
#line 863 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
}
    break;

  case 107:
#line 867 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
}
    break;

  case 108:
#line 871 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
}
    break;

  case 109:
#line 877 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 110:
#line 886 "ircd_parser.y"
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
#line 898 "ircd_parser.y"
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
#line 989 "ircd_parser.y"
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
#line 1001 "ircd_parser.y"
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
#line 1013 "ircd_parser.y"
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

  case 139:
#line 1036 "ircd_parser.y"
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
#line 1048 "ircd_parser.y"
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
#line 1059 "ircd_parser.y"
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
#line 1070 "ircd_parser.y"
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
#line 1112 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 144:
#line 1121 "ircd_parser.y"
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
#line 1132 "ircd_parser.y"
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
#line 1143 "ircd_parser.y"
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
#line 1154 "ircd_parser.y"
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
#line 1165 "ircd_parser.y"
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
#line 1176 "ircd_parser.y"
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
#line 1187 "ircd_parser.y"
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
#line 1198 "ircd_parser.y"
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
#line 1209 "ircd_parser.y"
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
#line 1220 "ircd_parser.y"
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
#line 1231 "ircd_parser.y"
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
#line 1242 "ircd_parser.y"
    {
}
    break;

  case 159:
#line 1246 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 160:
#line 1247 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 161:
#line 1250 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 162:
#line 1257 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 163:
#line 1264 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 164:
#line 1271 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 165:
#line 1278 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 166:
#line 1285 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 167:
#line 1292 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 168:
#line 1299 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 169:
#line 1306 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 170:
#line 1313 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 171:
#line 1320 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 172:
#line 1327 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 173:
#line 1334 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 174:
#line 1341 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 175:
#line 1348 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 176:
#line 1355 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) ClearConfEncrypted(yy_aconf);
    else SetConfEncrypted(yy_aconf);
  }
}
    break;

  case 177:
#line 1368 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = (struct ClassItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 178:
#line 1375 "ircd_parser.y"
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
#line 1402 "ircd_parser.y"
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
#line 1448 "ircd_parser.y"
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
#line 1494 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 196:
#line 1500 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = (yyvsp[-1].number);
}
    break;

  case 197:
#line 1506 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 198:
#line 1512 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 199:
#line 1518 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 200:
#line 1524 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 201:
#line 1530 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = (yyvsp[-1].number);
}
    break;

  case 202:
#line 1536 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 203:
#line 1545 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    listener_address = NULL;
    listener_flags = 0;
  }
}
    break;

  case 204:
#line 1552 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 205:
#line 1561 "ircd_parser.y"
    {
}
    break;

  case 209:
#line 1566 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_SSL;
}
    break;

  case 210:
#line 1570 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_HIDDEN;
}
    break;

  case 221:
#line 1583 "ircd_parser.y"
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
#line 1598 "ircd_parser.y"
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
#line 1620 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 224:
#line 1629 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 225:
#line 1641 "ircd_parser.y"
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
#line 1653 "ircd_parser.y"
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

  case 245:
#line 1723 "ircd_parser.y"
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

  case 246:
#line 1752 "ircd_parser.y"
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

  case 247:
#line 1765 "ircd_parser.y"
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

  case 248:
#line 1776 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 249:
#line 1785 "ircd_parser.y"
    {
}
    break;

  case 253:
#line 1789 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 254:
#line 1790 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 255:
#line 1793 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 256:
#line 1801 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 257:
#line 1808 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 258:
#line 1815 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 259:
#line 1822 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 260:
#line 1829 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 261:
#line 1836 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 262:
#line 1843 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 263:
#line 1850 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 264:
#line 1857 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 265:
#line 1866 "ircd_parser.y"
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

  case 266:
#line 1877 "ircd_parser.y"
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

  case 267:
#line 1888 "ircd_parser.y"
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

  case 268:
#line 1899 "ircd_parser.y"
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

  case 269:
#line 1910 "ircd_parser.y"
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

  case 270:
#line 1921 "ircd_parser.y"
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

  case 271:
#line 1933 "ircd_parser.y"
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

  case 272:
#line 1952 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 273:
#line 1962 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = (yyvsp[-1].number);
  }
}
    break;

  case 274:
#line 1971 "ircd_parser.y"
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

  case 275:
#line 1986 "ircd_parser.y"
    {
  if (ypass == 2)
    resv_reason = NULL;
}
    break;

  case 276:
#line 1990 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 283:
#line 2002 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 284:
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

  case 285:
#line 2026 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (clean_resv_nick(yylval.string))
    {
      char def_reason[] = "No reason";

      create_nick_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
    }
  }

  /* otherwise its erroneous, but ignore it for now */
}
    break;

  case 286:
#line 2044 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(ULINE_TYPE);
    yy_match_item = map_to_conf(yy_conf);
    yy_match_item->action = SHARED_ALL;
  }
}
    break;

  case 287:
#line 2052 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 294:
#line 2063 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 295:
#line 2072 "ircd_parser.y"
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

  case 296:
#line 2087 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 300:
#line 2094 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 301:
#line 2098 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 302:
#line 2102 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 303:
#line 2106 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 304:
#line 2110 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 305:
#line 2114 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 306:
#line 2118 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 307:
#line 2127 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_match_item = (struct MatchItem *)map_to_conf(yy_conf);
    yy_match_item->action = CLUSTER_ALL;
  }
}
    break;

  case 308:
#line 2135 "ircd_parser.y"
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

  case 314:
#line 2152 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 315:
#line 2158 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 319:
#line 2165 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_KLINE;
}
    break;

  case 320:
#line 2169 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNKLINE;
}
    break;

  case 321:
#line 2173 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_XLINE;
}
    break;

  case 322:
#line 2177 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNXLINE;
}
    break;

  case 323:
#line 2181 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_RESV;
}
    break;

  case 324:
#line 2185 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNRESV;
}
    break;

  case 325:
#line 2189 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_LOCOPS;
}
    break;

  case 326:
#line 2193 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = CLUSTER_ALL;
}
    break;

  case 327:
#line 2202 "ircd_parser.y"
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

  case 328:
#line 2220 "ircd_parser.y"
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

  case 351:
#line 2362 "ircd_parser.y"
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

  case 352:
#line 2374 "ircd_parser.y"
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

  case 353:
#line 2386 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 354:
#line 2395 "ircd_parser.y"
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

  case 355:
#line 2407 "ircd_parser.y"
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

  case 356:
#line 2419 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = (yyvsp[-1].number);
}
    break;

  case 357:
#line 2425 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 358:
#line 2429 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 359:
#line 2437 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 360:
#line 2446 "ircd_parser.y"
    {
}
    break;

  case 364:
#line 2450 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 365:
#line 2451 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 366:
#line 2454 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfLazyLink(yy_aconf);
    else SetConfLazyLink(yy_aconf);
  }
}
    break;

  case 367:
#line 2461 "ircd_parser.y"
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

  case 368:
#line 2472 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfCryptLink(yy_aconf);
    else SetConfCryptLink(yy_aconf);
  }
}
    break;

  case 369:
#line 2479 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAllowAutoConn(yy_aconf);
    else SetConfAllowAutoConn(yy_aconf);
  }
}
    break;

  case 370:
#line 2486 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAwayBurst(yy_aconf);
    else SetConfAwayBurst(yy_aconf);
  }
}
    break;

  case 371:
#line 2493 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfTopicBurst(yy_aconf);
    else SetConfTopicBurst(yy_aconf);
  }
}
    break;

  case 372:
#line 2503 "ircd_parser.y"
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

  case 373:
#line 2544 "ircd_parser.y"
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

  case 374:
#line 2555 "ircd_parser.y"
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

  case 375:
#line 2566 "ircd_parser.y"
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

  case 376:
#line 2581 "ircd_parser.y"
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

  case 377:
#line 2592 "ircd_parser.y"
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

  case 378:
#line 2605 "ircd_parser.y"
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

  case 379:
#line 2618 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 380:
#line 2627 "ircd_parser.y"
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

  case 381:
#line 2662 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(KLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 382:
#line 2669 "ircd_parser.y"
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

  case 388:
#line 2688 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    DupString(yy_aconf->host, yylval.string);
    split_user_host(yy_aconf->host, &yy_aconf->user, &yy_aconf->host);
  }
}
    break;

  case 389:
#line 2697 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 390:
#line 2709 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(DLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    /* default reason */
    DupString(yy_aconf->reason, "No reason");
  }
}
    break;

  case 391:
#line 2718 "ircd_parser.y"
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

  case 397:
#line 2734 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 398:
#line 2743 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 399:
#line 2755 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(EXEMPTDLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    DupString(yy_aconf->passwd, "*");
  }
}
    break;

  case 400:
#line 2763 "ircd_parser.y"
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

  case 405:
#line 2779 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 406:
#line 2791 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    gecos_flags = 0;
    gecos_reason[0] = gecos_name[0] = '\0';
  }
}
    break;

  case 407:
#line 2798 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (gecos_name[0])
    {
      int ecode = 0;

      if (gecos_flags & 1)
      {
#ifdef HAVE_REGEX_H
        regex_t *exp_p = MyMalloc(sizeof(regex_t));

        if ((ecode = regcomp(exp_p, gecos_name, REG_EXTENDED|REG_ICASE|REG_NOSUB)))
        {
          char errbuf[BUFSIZE];

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
      if (gecos_reason[0])
        DupString(yy_match_item->reason, gecos_reason);
      else
        DupString(yy_match_item->reason, "No reason");
    }
  }
}
    break;

  case 408:
#line 2841 "ircd_parser.y"
    {
}
    break;

  case 412:
#line 2846 "ircd_parser.y"
    {
  if (ypass == 2)
    gecos_flags |= 1;
}
    break;

  case 419:
#line 2855 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    gecos_name[0] = '\0';
    strlcpy(gecos_name, yylval.string, sizeof(gecos_reason));
  }
}
    break;

  case 420:
#line 2864 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    gecos_name[0] = '\0';
    strlcpy(gecos_reason, yylval.string, sizeof(gecos_name));
  }
}
    break;

  case 477:
#line 2912 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr = (yyvsp[-1].number);
}
    break;

  case 478:
#line 2918 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr6 = (yyvsp[-1].number);
}
    break;

  case 479:
#line 2924 "ircd_parser.y"
    {
  if (ypass == 1) /* must be set in the 1st pass */
    ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 480:
#line 2930 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
}
    break;

  case 481:
#line 2935 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 482:
#line 2940 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kill_chase_time_limit = (yyvsp[-1].number);
}
    break;

  case 483:
#line 2946 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 484:
#line 2952 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 485:
#line 2958 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 486:
#line 2964 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 487:
#line 2970 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 488:
#line 2976 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_time = (yyvsp[-1].number); 
}
    break;

  case 489:
#line 2982 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_changes = (yyvsp[-1].number);
}
    break;

  case 490:
#line 2988 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_accept = (yyvsp[-1].number);
}
    break;

  case 491:
#line 2994 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_spam_exit_message_time = (yyvsp[-1].number);
}
    break;

  case 492:
#line 3000 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_warn_delta = (yyvsp[-1].number);
}
    break;

  case 493:
#line 3006 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = (yyvsp[-1].number);
}
    break;

  case 494:
#line 3012 "ircd_parser.y"
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

  case 495:
#line 3023 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 496:
#line 3029 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 497:
#line 3038 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 498:
#line 3044 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 499:
#line 3050 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 500:
#line 3056 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 501:
#line 3060 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 502:
#line 3066 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 503:
#line 3070 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 504:
#line 3076 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait = (yyvsp[-1].number);
}
    break;

  case 505:
#line 3082 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.caller_id_wait = (yyvsp[-1].number);
}
    break;

  case 506:
#line 3088 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait_simple = (yyvsp[-1].number);
}
    break;

  case 507:
#line 3094 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 508:
#line 3100 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 509:
#line 3106 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 510:
#line 3112 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 511:
#line 3118 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
}
    break;

  case 512:
#line 3129 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.idletime = (yyvsp[-1].number);
}
    break;

  case 513:
#line 3135 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dots_in_ident = (yyvsp[-1].number);
}
    break;

  case 514:
#line 3141 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.maximum_links = (yyvsp[-1].number);
}
    break;

  case 515:
#line 3147 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_targets = (yyvsp[-1].number);
}
    break;

  case 516:
#line 3153 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 517:
#line 3162 "ircd_parser.y"
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

  case 518:
#line 3194 "ircd_parser.y"
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

  case 519:
#line 3212 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 520:
#line 3218 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 521:
#line 3227 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 522:
#line 3233 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 523:
#line 3238 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 524:
#line 3244 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 528:
#line 3251 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 529:
#line 3255 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 530:
#line 3259 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEAF;
}
    break;

  case 531:
#line 3263 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 532:
#line 3267 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 533:
#line 3271 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 534:
#line 3275 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 535:
#line 3279 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 536:
#line 3283 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 537:
#line 3287 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 538:
#line 3291 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 539:
#line 3295 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 540:
#line 3299 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 541:
#line 3303 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 542:
#line 3307 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 543:
#line 3311 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 544:
#line 3315 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 545:
#line 3319 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 546:
#line 3325 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 550:
#line 3332 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 551:
#line 3336 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 552:
#line 3340 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEAF;
}
    break;

  case 553:
#line 3344 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 554:
#line 3348 "ircd_parser.y"
    { 
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 555:
#line 3352 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 556:
#line 3356 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 557:
#line 3360 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 558:
#line 3364 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 559:
#line 3368 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 560:
#line 3372 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 561:
#line 3376 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 562:
#line 3380 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 563:
#line 3384 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 564:
#line 3388 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 565:
#line 3392 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 566:
#line 3396 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 567:
#line 3400 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 568:
#line 3406 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard = (yyvsp[-1].number);
}
    break;

  case 569:
#line 3412 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard_simple = (yyvsp[-1].number);
}
    break;

  case 570:
#line 3418 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.default_floodcount = (yyvsp[-1].number);
}
    break;

  case 571:
#line 3424 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.client_flood = (yyvsp[-1].number);
}
    break;

  case 572:
#line 3430 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 573:
#line 3439 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->flags = 0;
  }
}
    break;

  case 574:
#line 3447 "ircd_parser.y"
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

  case 584:
#line 3474 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 585:
#line 3480 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = (yyvsp[-1].number);
}
    break;

  case 586:
#line 3486 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 590:
#line 3492 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 591:
#line 3496 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 592:
#line 3502 "ircd_parser.y"
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

  case 593:
#line 3525 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 594:
#line 3534 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 595:
#line 3538 "ircd_parser.y"
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

  case 598:
#line 3578 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 599:
#line 3582 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 619:
#line 3612 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 620:
#line 3618 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_except = yylval.number;
}
    break;

  case 621:
#line 3624 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_invex = yylval.number;
}
    break;

  case 622:
#line 3630 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_knock = yylval.number;
}
    break;

  case 623:
#line 3636 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay = (yyvsp[-1].number);
}
    break;

  case 624:
#line 3642 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay_channel = (yyvsp[-1].number);
}
    break;

  case 625:
#line 3648 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 626:
#line 3654 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_chans_per_user = (yyvsp[-1].number);
}
    break;

  case 627:
#line 3660 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 628:
#line 3666 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_bans = (yyvsp[-1].number);
}
    break;

  case 629:
#line 3672 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_user_count = (yyvsp[-1].number);
}
    break;

  case 630:
#line 3678 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_server_count = (yyvsp[-1].number);
}
    break;

  case 631:
#line 3684 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 632:
#line 3690 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 633:
#line 3696 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.burst_topicwho = yylval.number;
}
    break;

  case 644:
#line 3716 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 645:
#line 3722 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 646:
#line 3728 "ircd_parser.y"
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

  case 647:
#line 3742 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 648:
#line 3748 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 649:
#line 3754 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 1037 of yacc.c.  */
#line 6912 "y.tab.c"

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



