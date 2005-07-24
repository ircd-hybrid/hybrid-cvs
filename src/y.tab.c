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
/* $Id: y.tab.c,v 7.33 2005/07/24 00:05:44 michael Exp $ */
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
     BYTES = 269,
     KBYTES = 270,
     MBYTES = 271,
     GBYTES = 272,
     TBYTES = 273,
     CALLER_ID_WAIT = 274,
     CAN_FLOOD = 275,
     CAN_IDLE = 276,
     CHANNEL = 277,
     CIPHER_PREFERENCE = 278,
     CLASS = 279,
     COMPRESSED = 280,
     COMPRESSION_LEVEL = 281,
     CONNECT = 282,
     CONNECTFREQ = 283,
     CRYPTLINK = 284,
     DEFAULT_CIPHER_PREFERENCE = 285,
     DEFAULT_FLOODCOUNT = 286,
     DEFAULT_SPLIT_SERVER_COUNT = 287,
     DEFAULT_SPLIT_USER_COUNT = 288,
     DENY = 289,
     DESCRIPTION = 290,
     DIE = 291,
     DISABLE_AUTH = 292,
     DISABLE_HIDDEN = 293,
     DISABLE_LOCAL_CHANNELS = 294,
     DISABLE_REMOTE_COMMANDS = 295,
     DOT_IN_IP6_ADDR = 296,
     DOTS_IN_IDENT = 297,
     DURATION = 298,
     EGDPOOL_PATH = 299,
     EMAIL = 300,
     ENABLE = 301,
     ENCRYPTED = 302,
     EXCEED_LIMIT = 303,
     EXEMPT = 304,
     FAILED_OPER_NOTICE = 305,
     FAKENAME = 306,
     IRCD_FLAGS = 307,
     FLATTEN_LINKS = 308,
     FFAILED_OPERLOG = 309,
     FOPERLOG = 310,
     FUSERLOG = 311,
     GECOS = 312,
     GENERAL = 313,
     GLINE = 314,
     GLINES = 315,
     GLINE_EXEMPT = 316,
     GLINE_LOG = 317,
     GLINE_TIME = 318,
     GLINE_MIN_CIDR = 319,
     GLINE_MIN_CIDR6 = 320,
     GLOBAL_KILL = 321,
     NEED_IDENT = 322,
     HAVENT_READ_CONF = 323,
     HIDDEN = 324,
     HIDDEN_ADMIN = 325,
     HIDDEN_OPER = 326,
     HIDE_SERVER_IPS = 327,
     HIDE_SERVERS = 328,
     HIDE_SPOOF_IPS = 329,
     HOST = 330,
     HUB = 331,
     HUB_MASK = 332,
     IDLETIME = 333,
     IGNORE_BOGUS_TS = 334,
     IP = 335,
     KILL = 336,
     KILL_CHASE_TIME_LIMIT = 337,
     KLINE = 338,
     KLINE_EXEMPT = 339,
     KLINE_REASON = 340,
     KLINE_WITH_REASON = 341,
     KNOCK_DELAY = 342,
     KNOCK_DELAY_CHANNEL = 343,
     LAZYLINK = 344,
     LEAF_MASK = 345,
     LINKS_DELAY = 346,
     LISTEN = 347,
     LOGGING = 348,
     LOG_LEVEL = 349,
     MAXIMUM_LINKS = 350,
     MAX_ACCEPT = 351,
     MAX_BANS = 352,
     MAX_CHANS_PER_USER = 353,
     MAX_GLOBAL = 354,
     MAX_IDENT = 355,
     MAX_LOCAL = 356,
     MAX_NICK_CHANGES = 357,
     MAX_NICK_TIME = 358,
     MAX_NUMBER = 359,
     MAX_TARGETS = 360,
     MESSAGE_LOCALE = 361,
     MIN_NONWILDCARD = 362,
     MIN_NONWILDCARD_SIMPLE = 363,
     MODULE = 364,
     MODULES = 365,
     NAME = 366,
     NEED_PASSWORD = 367,
     NETWORK_DESC = 368,
     NETWORK_NAME = 369,
     NICK = 370,
     NICK_CHANGES = 371,
     NO_CREATE_ON_SPLIT = 372,
     NO_JOIN_ON_SPLIT = 373,
     NO_OPER_FLOOD = 374,
     NO_TILDE = 375,
     NOT = 376,
     NUMBER = 377,
     NUMBER_PER_IDENT = 378,
     NUMBER_PER_IP = 379,
     NUMBER_PER_IP_GLOBAL = 380,
     OPERATOR = 381,
     OPER_LOG = 382,
     OPER_ONLY_UMODES = 383,
     OPER_PASS_RESV = 384,
     OPER_SPY_T = 385,
     OPER_UMODES = 386,
     INVITE_OPS_ONLY = 387,
     PACE_WAIT = 388,
     PACE_WAIT_SIMPLE = 389,
     PASSWORD = 390,
     PATH = 391,
     PING_COOKIE = 392,
     PING_TIME = 393,
     PORT = 394,
     QSTRING = 395,
     QUIET_ON_BAN = 396,
     REASON = 397,
     REDIRPORT = 398,
     REDIRSERV = 399,
     REGEX_T = 400,
     REHASH = 401,
     REMOTE = 402,
     REMOTEBAN = 403,
     RESTRICTED = 404,
     RSA_PRIVATE_KEY_FILE = 405,
     RSA_PUBLIC_KEY_FILE = 406,
     SSL_CERTIFICATE_FILE = 407,
     RESV = 408,
     RESV_EXEMPT = 409,
     SECONDS = 410,
     MINUTES = 411,
     HOURS = 412,
     DAYS = 413,
     WEEKS = 414,
     SENDQ = 415,
     SEND_PASSWORD = 416,
     SERVERHIDE = 417,
     SERVERINFO = 418,
     SERVLINK_PATH = 419,
     SID = 420,
     TKLINE_EXPIRE_NOTICES = 421,
     T_SHARED = 422,
     T_CLUSTER = 423,
     TYPE = 424,
     SHORT_MOTD = 425,
     SILENT = 426,
     SPOOF = 427,
     SPOOF_NOTICE = 428,
     STATS_I_OPER_ONLY = 429,
     STATS_K_OPER_ONLY = 430,
     STATS_O_OPER_ONLY = 431,
     STATS_P_OPER_ONLY = 432,
     TBOOL = 433,
     TMASKED = 434,
     T_REJECT = 435,
     TS_MAX_DELTA = 436,
     TS_WARN_DELTA = 437,
     TWODOTS = 438,
     T_ALL = 439,
     T_BOTS = 440,
     T_SOFTCALLERID = 441,
     T_CALLERID = 442,
     T_CCONN = 443,
     T_CLIENT_FLOOD = 444,
     T_DEBUG = 445,
     T_DRONE = 446,
     T_EXTERNAL = 447,
     T_FULL = 448,
     T_INVISIBLE = 449,
     T_IPV4 = 450,
     T_IPV6 = 451,
     T_LOCOPS = 452,
     T_LOGPATH = 453,
     T_L_CRIT = 454,
     T_L_DEBUG = 455,
     T_L_ERROR = 456,
     T_L_INFO = 457,
     T_L_NOTICE = 458,
     T_L_TRACE = 459,
     T_L_WARN = 460,
     T_MAX_CLIENTS = 461,
     T_NCHANGE = 462,
     T_OPERWALL = 463,
     T_REJ = 464,
     T_SERVNOTICE = 465,
     T_SKILL = 466,
     T_SPY = 467,
     T_SSL = 468,
     T_UNAUTH = 469,
     T_UNRESV = 470,
     T_UNXLINE = 471,
     T_WALLOP = 472,
     THROTTLE_TIME = 473,
     TRUE_NO_OPER_FLOOD = 474,
     UNKLINE = 475,
     USER = 476,
     USE_EGD = 477,
     USE_EXCEPT = 478,
     USE_INVEX = 479,
     USE_KNOCK = 480,
     USE_LOGGING = 481,
     USE_WHOIS_ACTUALLY = 482,
     VHOST = 483,
     VHOST6 = 484,
     XLINE = 485,
     WARN = 486,
     WARN_NO_NLINE = 487
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
#define BYTES 269
#define KBYTES 270
#define MBYTES 271
#define GBYTES 272
#define TBYTES 273
#define CALLER_ID_WAIT 274
#define CAN_FLOOD 275
#define CAN_IDLE 276
#define CHANNEL 277
#define CIPHER_PREFERENCE 278
#define CLASS 279
#define COMPRESSED 280
#define COMPRESSION_LEVEL 281
#define CONNECT 282
#define CONNECTFREQ 283
#define CRYPTLINK 284
#define DEFAULT_CIPHER_PREFERENCE 285
#define DEFAULT_FLOODCOUNT 286
#define DEFAULT_SPLIT_SERVER_COUNT 287
#define DEFAULT_SPLIT_USER_COUNT 288
#define DENY 289
#define DESCRIPTION 290
#define DIE 291
#define DISABLE_AUTH 292
#define DISABLE_HIDDEN 293
#define DISABLE_LOCAL_CHANNELS 294
#define DISABLE_REMOTE_COMMANDS 295
#define DOT_IN_IP6_ADDR 296
#define DOTS_IN_IDENT 297
#define DURATION 298
#define EGDPOOL_PATH 299
#define EMAIL 300
#define ENABLE 301
#define ENCRYPTED 302
#define EXCEED_LIMIT 303
#define EXEMPT 304
#define FAILED_OPER_NOTICE 305
#define FAKENAME 306
#define IRCD_FLAGS 307
#define FLATTEN_LINKS 308
#define FFAILED_OPERLOG 309
#define FOPERLOG 310
#define FUSERLOG 311
#define GECOS 312
#define GENERAL 313
#define GLINE 314
#define GLINES 315
#define GLINE_EXEMPT 316
#define GLINE_LOG 317
#define GLINE_TIME 318
#define GLINE_MIN_CIDR 319
#define GLINE_MIN_CIDR6 320
#define GLOBAL_KILL 321
#define NEED_IDENT 322
#define HAVENT_READ_CONF 323
#define HIDDEN 324
#define HIDDEN_ADMIN 325
#define HIDDEN_OPER 326
#define HIDE_SERVER_IPS 327
#define HIDE_SERVERS 328
#define HIDE_SPOOF_IPS 329
#define HOST 330
#define HUB 331
#define HUB_MASK 332
#define IDLETIME 333
#define IGNORE_BOGUS_TS 334
#define IP 335
#define KILL 336
#define KILL_CHASE_TIME_LIMIT 337
#define KLINE 338
#define KLINE_EXEMPT 339
#define KLINE_REASON 340
#define KLINE_WITH_REASON 341
#define KNOCK_DELAY 342
#define KNOCK_DELAY_CHANNEL 343
#define LAZYLINK 344
#define LEAF_MASK 345
#define LINKS_DELAY 346
#define LISTEN 347
#define LOGGING 348
#define LOG_LEVEL 349
#define MAXIMUM_LINKS 350
#define MAX_ACCEPT 351
#define MAX_BANS 352
#define MAX_CHANS_PER_USER 353
#define MAX_GLOBAL 354
#define MAX_IDENT 355
#define MAX_LOCAL 356
#define MAX_NICK_CHANGES 357
#define MAX_NICK_TIME 358
#define MAX_NUMBER 359
#define MAX_TARGETS 360
#define MESSAGE_LOCALE 361
#define MIN_NONWILDCARD 362
#define MIN_NONWILDCARD_SIMPLE 363
#define MODULE 364
#define MODULES 365
#define NAME 366
#define NEED_PASSWORD 367
#define NETWORK_DESC 368
#define NETWORK_NAME 369
#define NICK 370
#define NICK_CHANGES 371
#define NO_CREATE_ON_SPLIT 372
#define NO_JOIN_ON_SPLIT 373
#define NO_OPER_FLOOD 374
#define NO_TILDE 375
#define NOT 376
#define NUMBER 377
#define NUMBER_PER_IDENT 378
#define NUMBER_PER_IP 379
#define NUMBER_PER_IP_GLOBAL 380
#define OPERATOR 381
#define OPER_LOG 382
#define OPER_ONLY_UMODES 383
#define OPER_PASS_RESV 384
#define OPER_SPY_T 385
#define OPER_UMODES 386
#define INVITE_OPS_ONLY 387
#define PACE_WAIT 388
#define PACE_WAIT_SIMPLE 389
#define PASSWORD 390
#define PATH 391
#define PING_COOKIE 392
#define PING_TIME 393
#define PORT 394
#define QSTRING 395
#define QUIET_ON_BAN 396
#define REASON 397
#define REDIRPORT 398
#define REDIRSERV 399
#define REGEX_T 400
#define REHASH 401
#define REMOTE 402
#define REMOTEBAN 403
#define RESTRICTED 404
#define RSA_PRIVATE_KEY_FILE 405
#define RSA_PUBLIC_KEY_FILE 406
#define SSL_CERTIFICATE_FILE 407
#define RESV 408
#define RESV_EXEMPT 409
#define SECONDS 410
#define MINUTES 411
#define HOURS 412
#define DAYS 413
#define WEEKS 414
#define SENDQ 415
#define SEND_PASSWORD 416
#define SERVERHIDE 417
#define SERVERINFO 418
#define SERVLINK_PATH 419
#define SID 420
#define TKLINE_EXPIRE_NOTICES 421
#define T_SHARED 422
#define T_CLUSTER 423
#define TYPE 424
#define SHORT_MOTD 425
#define SILENT 426
#define SPOOF 427
#define SPOOF_NOTICE 428
#define STATS_I_OPER_ONLY 429
#define STATS_K_OPER_ONLY 430
#define STATS_O_OPER_ONLY 431
#define STATS_P_OPER_ONLY 432
#define TBOOL 433
#define TMASKED 434
#define T_REJECT 435
#define TS_MAX_DELTA 436
#define TS_WARN_DELTA 437
#define TWODOTS 438
#define T_ALL 439
#define T_BOTS 440
#define T_SOFTCALLERID 441
#define T_CALLERID 442
#define T_CCONN 443
#define T_CLIENT_FLOOD 444
#define T_DEBUG 445
#define T_DRONE 446
#define T_EXTERNAL 447
#define T_FULL 448
#define T_INVISIBLE 449
#define T_IPV4 450
#define T_IPV6 451
#define T_LOCOPS 452
#define T_LOGPATH 453
#define T_L_CRIT 454
#define T_L_DEBUG 455
#define T_L_ERROR 456
#define T_L_INFO 457
#define T_L_NOTICE 458
#define T_L_TRACE 459
#define T_L_WARN 460
#define T_MAX_CLIENTS 461
#define T_NCHANGE 462
#define T_OPERWALL 463
#define T_REJ 464
#define T_SERVNOTICE 465
#define T_SKILL 466
#define T_SPY 467
#define T_SSL 468
#define T_UNAUTH 469
#define T_UNRESV 470
#define T_UNXLINE 471
#define T_WALLOP 472
#define THROTTLE_TIME 473
#define TRUE_NO_OPER_FLOOD 474
#define UNKLINE 475
#define USER 476
#define USE_EGD 477
#define USE_EXCEPT 478
#define USE_INVEX 479
#define USE_KNOCK 480
#define USE_LOGGING 481
#define USE_WHOIS_ACTUALLY 482
#define VHOST 483
#define VHOST6 484
#define XLINE 485
#define WARN 486
#define WARN_NO_NLINE 487




/* Copy the first part of user declarations.  */
#line 25 "ircd_parser.y"


/* XXX */
#define WE_ARE_MEMORY_C

#define YY_NO_UNPUT
#include <regex.h>

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
#line 134 "ircd_parser.y"
typedef union YYSTYPE {
  int number;
  char *string;
} YYSTYPE;
/* Line 190 of yacc.c.  */
#line 654 "y.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 213 of yacc.c.  */
#line 666 "y.tab.c"

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
#define YYLAST   1289

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  238
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  304
/* YYNRULES -- Number of rules. */
#define YYNRULES  639
/* YYNRULES -- Number of states. */
#define YYNSTATES  1296

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   487

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   237,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   233,
       2,   236,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   235,     2,   234,     2,     2,     2,     2,
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
     225,   226,   227,   228,   229,   230,   231,   232
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
      97,   103,   106,   108,   110,   112,   114,   119,   124,   130,
     133,   135,   137,   139,   141,   143,   145,   147,   149,   151,
     153,   155,   157,   159,   164,   169,   174,   179,   184,   189,
     194,   199,   204,   209,   214,   220,   223,   225,   227,   229,
     231,   233,   238,   243,   248,   254,   257,   259,   261,   263,
     265,   267,   269,   271,   273,   275,   277,   282,   287,   292,
     297,   302,   307,   312,   317,   322,   327,   332,   337,   342,
     347,   348,   356,   357,   359,   362,   364,   366,   368,   370,
     372,   374,   376,   378,   380,   382,   384,   386,   388,   390,
     392,   394,   396,   398,   400,   402,   407,   409,   414,   419,
     424,   429,   434,   439,   444,   449,   454,   459,   464,   469,
     474,   479,   484,   489,   490,   496,   500,   502,   505,   507,
     509,   511,   513,   515,   517,   519,   521,   523,   525,   527,
     529,   531,   533,   535,   537,   538,   546,   547,   549,   552,
     554,   556,   558,   560,   562,   564,   566,   568,   570,   572,
     574,   579,   581,   586,   591,   596,   601,   606,   611,   616,
     621,   622,   629,   630,   636,   640,   642,   644,   646,   649,
     651,   653,   655,   657,   659,   661,   666,   670,   672,   674,
     678,   683,   688,   689,   696,   699,   701,   703,   705,   707,
     709,   711,   713,   715,   717,   719,   721,   723,   725,   727,
     729,   731,   733,   738,   743,   748,   753,   754,   760,   764,
     766,   769,   771,   773,   775,   777,   779,   781,   783,   785,
     787,   789,   791,   796,   801,   806,   811,   816,   821,   826,
     831,   836,   841,   842,   849,   852,   854,   856,   858,   860,
     862,   867,   872,   877,   878,   885,   888,   890,   892,   894,
     896,   898,   903,   908,   909,   915,   919,   921,   923,   925,
     927,   929,   931,   933,   935,   936,   943,   946,   948,   950,
     952,   954,   959,   960,   966,   970,   972,   974,   976,   978,
     980,   982,   984,   986,   988,   989,   997,   998,  1000,  1003,
    1005,  1007,  1009,  1011,  1013,  1015,  1017,  1019,  1021,  1023,
    1025,  1027,  1029,  1031,  1033,  1035,  1037,  1039,  1041,  1046,
    1048,  1053,  1058,  1063,  1068,  1073,  1078,  1083,  1084,  1090,
    1094,  1096,  1098,  1100,  1102,  1104,  1106,  1111,  1116,  1121,
    1126,  1131,  1136,  1141,  1146,  1151,  1152,  1159,  1162,  1164,
    1166,  1168,  1170,  1175,  1180,  1181,  1188,  1191,  1193,  1195,
    1197,  1199,  1204,  1209,  1210,  1217,  1220,  1222,  1224,  1226,
    1231,  1232,  1239,  1240,  1246,  1250,  1252,  1254,  1257,  1259,
    1261,  1263,  1265,  1267,  1272,  1277,  1283,  1286,  1288,  1290,
    1292,  1294,  1296,  1298,  1300,  1302,  1304,  1306,  1308,  1310,
    1312,  1314,  1316,  1318,  1320,  1322,  1324,  1326,  1328,  1330,
    1332,  1334,  1336,  1338,  1340,  1342,  1344,  1346,  1348,  1350,
    1352,  1354,  1356,  1358,  1360,  1362,  1364,  1366,  1368,  1370,
    1372,  1374,  1376,  1378,  1380,  1382,  1384,  1386,  1388,  1390,
    1392,  1394,  1399,  1404,  1409,  1414,  1419,  1424,  1429,  1434,
    1439,  1444,  1449,  1454,  1459,  1464,  1469,  1474,  1479,  1484,
    1489,  1494,  1499,  1504,  1509,  1514,  1519,  1524,  1529,  1534,
    1539,  1544,  1549,  1554,  1559,  1564,  1569,  1574,  1579,  1584,
    1589,  1594,  1599,  1604,  1609,  1614,  1619,  1624,  1629,  1630,
    1636,  1640,  1642,  1644,  1646,  1648,  1650,  1652,  1654,  1656,
    1658,  1660,  1662,  1664,  1666,  1668,  1670,  1672,  1674,  1676,
    1677,  1683,  1687,  1689,  1691,  1693,  1695,  1697,  1699,  1701,
    1703,  1705,  1707,  1709,  1711,  1713,  1715,  1717,  1719,  1721,
    1723,  1728,  1733,  1738,  1743,  1748,  1749,  1756,  1759,  1761,
    1763,  1765,  1767,  1769,  1771,  1773,  1775,  1780,  1785,  1786,
    1792,  1796,  1798,  1800,  1802,  1807,  1812,  1813,  1819,  1823,
    1825,  1827,  1829,  1835,  1838,  1840,  1842,  1844,  1846,  1848,
    1850,  1852,  1854,  1856,  1858,  1860,  1862,  1864,  1866,  1868,
    1870,  1875,  1880,  1885,  1890,  1895,  1900,  1905,  1910,  1915,
    1920,  1925,  1930,  1935,  1940,  1946,  1949,  1951,  1953,  1955,
    1957,  1959,  1961,  1963,  1965,  1970,  1975,  1980,  1985,  1990
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     239,     0,    -1,    -1,   239,   240,    -1,   264,    -1,   270,
      -1,   281,    -1,   516,    -1,   309,    -1,   324,    -1,   337,
      -1,   250,    -1,   533,    -1,   360,    -1,   367,    -1,   377,
      -1,   386,    -1,   412,    -1,   418,    -1,   424,    -1,   439,
      -1,   500,    -1,   429,    -1,   245,    -1,     1,   233,    -1,
       1,   234,    -1,    -1,   242,    -1,   122,   241,    -1,   122,
     155,   241,    -1,   122,   156,   241,    -1,   122,   157,   241,
      -1,   122,   158,   241,    -1,   122,   159,   241,    -1,    -1,
     244,    -1,   122,   243,    -1,   122,    14,   243,    -1,   122,
      15,   243,    -1,   122,    16,   243,    -1,   110,   235,   246,
     234,   233,    -1,   246,   247,    -1,   247,    -1,   248,    -1,
     249,    -1,     1,    -1,   109,   236,   140,   233,    -1,   136,
     236,   140,   233,    -1,   163,   235,   251,   234,   233,    -1,
     251,   252,    -1,   252,    -1,   255,    -1,   260,    -1,   263,
      -1,   257,    -1,   258,    -1,   259,    -1,   262,    -1,   254,
      -1,   261,    -1,   256,    -1,   253,    -1,     1,    -1,   152,
     236,   140,   233,    -1,   150,   236,   140,   233,    -1,   111,
     236,   140,   233,    -1,   165,   236,   140,   233,    -1,    35,
     236,   140,   233,    -1,   114,   236,   140,   233,    -1,   113,
     236,   140,   233,    -1,   228,   236,   140,   233,    -1,   229,
     236,   140,   233,    -1,   206,   236,   122,   233,    -1,    76,
     236,   178,   233,    -1,     5,   235,   265,   234,   233,    -1,
     265,   266,    -1,   266,    -1,   267,    -1,   269,    -1,   268,
      -1,     1,    -1,   111,   236,   140,   233,    -1,    45,   236,
     140,   233,    -1,    35,   236,   140,   233,    -1,    93,   235,
     271,   234,   233,    -1,   271,   272,    -1,   272,    -1,   273,
      -1,   274,    -1,   275,    -1,   279,    -1,   280,    -1,   276,
      -1,   278,    -1,   277,    -1,     1,    -1,   198,   236,   140,
     233,    -1,   127,   236,   140,   233,    -1,    62,   236,   140,
     233,    -1,    56,   236,   140,   233,    -1,    54,   236,   140,
     233,    -1,    55,   236,   140,   233,    -1,    94,   236,   199,
     233,    -1,    94,   236,   201,   233,    -1,    94,   236,   205,
     233,    -1,    94,   236,   203,   233,    -1,    94,   236,   204,
     233,    -1,    94,   236,   202,   233,    -1,    94,   236,   200,
     233,    -1,   226,   236,   178,   233,    -1,    -1,   126,   282,
     283,   235,   284,   234,   233,    -1,    -1,   287,    -1,   284,
     285,    -1,   285,    -1,   286,    -1,   288,    -1,   289,    -1,
     291,    -1,   293,    -1,   294,    -1,   295,    -1,   296,    -1,
     297,    -1,   298,    -1,   299,    -1,   300,    -1,   301,    -1,
     302,    -1,   303,    -1,   290,    -1,   292,    -1,   304,    -1,
       1,    -1,   111,   236,   140,   233,    -1,   140,    -1,   221,
     236,   140,   233,    -1,   135,   236,   140,   233,    -1,    47,
     236,   178,   233,    -1,    70,   236,   178,   233,    -1,   151,
     236,   140,   233,    -1,    24,   236,   140,   233,    -1,    66,
     236,   178,   233,    -1,   147,   236,   178,   233,    -1,    83,
     236,   178,   233,    -1,   230,   236,   178,   233,    -1,   220,
     236,   178,   233,    -1,    59,   236,   178,   233,    -1,   116,
     236,   178,   233,    -1,    36,   236,   178,   233,    -1,   146,
     236,   178,   233,    -1,     5,   236,   178,   233,    -1,    -1,
      52,   305,   236,   306,   233,    -1,   306,   237,   307,    -1,
     307,    -1,   121,   308,    -1,   308,    -1,    66,    -1,   147,
      -1,    83,    -1,   220,    -1,   230,    -1,    59,    -1,    36,
      -1,   146,    -1,     5,    -1,    70,    -1,   116,    -1,   208,
      -1,   130,    -1,    71,    -1,   148,    -1,    -1,    24,   310,
     311,   235,   312,   234,   233,    -1,    -1,   315,    -1,   312,
     313,    -1,   313,    -1,   314,    -1,   316,    -1,   317,    -1,
     318,    -1,   319,    -1,   320,    -1,   321,    -1,   322,    -1,
     323,    -1,     1,    -1,   111,   236,   140,   233,    -1,   140,
      -1,   138,   236,   242,   233,    -1,   124,   236,   122,   233,
      -1,    28,   236,   242,   233,    -1,   104,   236,   122,   233,
      -1,    99,   236,   122,   233,    -1,   101,   236,   122,   233,
      -1,   100,   236,   122,   233,    -1,   160,   236,   244,   233,
      -1,    -1,    92,   325,   235,   330,   234,   233,    -1,    -1,
      52,   327,   236,   328,   233,    -1,   328,   237,   329,    -1,
     329,    -1,   213,    -1,    69,    -1,   330,   331,    -1,   331,
      -1,   332,    -1,   326,    -1,   335,    -1,   336,    -1,     1,
      -1,   139,   236,   333,   233,    -1,   333,   237,   334,    -1,
     334,    -1,   122,    -1,   122,   183,   122,    -1,    80,   236,
     140,   233,    -1,    75,   236,   140,   233,    -1,    -1,    10,
     338,   235,   339,   234,   233,    -1,   339,   340,    -1,   340,
      -1,   341,    -1,   342,    -1,   344,    -1,   345,    -1,   350,
      -1,   351,    -1,   352,    -1,   354,    -1,   355,    -1,   356,
      -1,   343,    -1,   357,    -1,   358,    -1,   353,    -1,   359,
      -1,     1,    -1,   221,   236,   140,   233,    -1,   135,   236,
     140,   233,    -1,   173,   236,   178,   233,    -1,    24,   236,
     140,   233,    -1,    -1,    52,   346,   236,   347,   233,    -1,
     347,   237,   348,    -1,   348,    -1,   121,   349,    -1,   349,
      -1,   173,    -1,    48,    -1,    84,    -1,    67,    -1,    20,
      -1,    21,    -1,   120,    -1,    61,    -1,   154,    -1,   112,
      -1,    84,   236,   178,   233,    -1,    67,   236,   178,   233,
      -1,    48,   236,   178,   233,    -1,    20,   236,   178,   233,
      -1,   120,   236,   178,   233,    -1,    61,   236,   178,   233,
      -1,   172,   236,   140,   233,    -1,   144,   236,   140,   233,
      -1,   143,   236,   122,   233,    -1,   112,   236,   178,   233,
      -1,    -1,   153,   361,   235,   362,   234,   233,    -1,   362,
     363,    -1,   363,    -1,   364,    -1,   365,    -1,   366,    -1,
       1,    -1,   142,   236,   140,   233,    -1,    22,   236,   140,
     233,    -1,   115,   236,   140,   233,    -1,    -1,   167,   368,
     235,   369,   234,   233,    -1,   369,   370,    -1,   370,    -1,
     371,    -1,   372,    -1,   373,    -1,     1,    -1,   111,   236,
     140,   233,    -1,   221,   236,   140,   233,    -1,    -1,   169,
     374,   236,   375,   233,    -1,   375,   237,   376,    -1,   376,
      -1,    83,    -1,   220,    -1,   230,    -1,   216,    -1,   153,
      -1,   215,    -1,   184,    -1,    -1,   168,   378,   235,   379,
     234,   233,    -1,   379,   380,    -1,   380,    -1,   381,    -1,
     382,    -1,     1,    -1,   111,   236,   140,   233,    -1,    -1,
     169,   383,   236,   384,   233,    -1,   384,   237,   385,    -1,
     385,    -1,    83,    -1,   220,    -1,   230,    -1,   216,    -1,
     153,    -1,   215,    -1,   197,    -1,   184,    -1,    -1,    27,
     387,   388,   235,   389,   234,   233,    -1,    -1,   392,    -1,
     389,   390,    -1,   390,    -1,   391,    -1,   393,    -1,   394,
      -1,   395,    -1,   396,    -1,   397,    -1,   398,    -1,   399,
      -1,   408,    -1,   409,    -1,   410,    -1,   407,    -1,   404,
      -1,   406,    -1,   405,    -1,   403,    -1,   411,    -1,     1,
      -1,   111,   236,   140,   233,    -1,   140,    -1,    75,   236,
     140,   233,    -1,   161,   236,   140,   233,    -1,     3,   236,
     140,   233,    -1,   139,   236,   122,   233,    -1,     6,   236,
     195,   233,    -1,     6,   236,   196,   233,    -1,    51,   236,
     140,   233,    -1,    -1,    52,   400,   236,   401,   233,    -1,
     401,   237,   402,    -1,   402,    -1,    89,    -1,    25,    -1,
      29,    -1,    11,    -1,    13,    -1,   151,   236,   140,   233,
      -1,    47,   236,   178,   233,    -1,    29,   236,   178,   233,
      -1,    25,   236,   178,   233,    -1,    11,   236,   178,   233,
      -1,    77,   236,   140,   233,    -1,    90,   236,   140,   233,
      -1,    24,   236,   140,   233,    -1,    23,   236,   140,   233,
      -1,    -1,    81,   413,   235,   414,   234,   233,    -1,   414,
     415,    -1,   415,    -1,   416,    -1,   417,    -1,     1,    -1,
     221,   236,   140,   233,    -1,   142,   236,   140,   233,    -1,
      -1,    34,   419,   235,   420,   234,   233,    -1,   420,   421,
      -1,   421,    -1,   422,    -1,   423,    -1,     1,    -1,    80,
     236,   140,   233,    -1,   142,   236,   140,   233,    -1,    -1,
      49,   425,   235,   426,   234,   233,    -1,   426,   427,    -1,
     427,    -1,   428,    -1,     1,    -1,    80,   236,   140,   233,
      -1,    -1,    57,   430,   235,   435,   234,   233,    -1,    -1,
      52,   432,   236,   433,   233,    -1,   433,   237,   434,    -1,
     434,    -1,   145,    -1,   435,   436,    -1,   436,    -1,   437,
      -1,   438,    -1,   431,    -1,     1,    -1,   111,   236,   140,
     233,    -1,   142,   236,   140,   233,    -1,    58,   235,   440,
     234,   233,    -1,   440,   441,    -1,   441,    -1,   448,    -1,
     449,    -1,   451,    -1,   452,    -1,   453,    -1,   454,    -1,
     455,    -1,   456,    -1,   457,    -1,   458,    -1,   447,    -1,
     460,    -1,   461,    -1,   462,    -1,   476,    -1,   463,    -1,
     465,    -1,   467,    -1,   466,    -1,   469,    -1,   464,    -1,
     470,    -1,   471,    -1,   472,    -1,   473,    -1,   475,    -1,
     477,    -1,   474,    -1,   491,    -1,   478,    -1,   482,    -1,
     483,    -1,   487,    -1,   468,    -1,   497,    -1,   495,    -1,
     496,    -1,   479,    -1,   450,    -1,   480,    -1,   481,    -1,
     498,    -1,   486,    -1,   459,    -1,   499,    -1,   484,    -1,
     485,    -1,   444,    -1,   446,    -1,   442,    -1,   443,    -1,
     445,    -1,     1,    -1,    64,   236,   122,   233,    -1,    65,
     236,   122,   233,    -1,    13,   236,   178,   233,    -1,   227,
     236,   178,   233,    -1,   166,   236,   178,   233,    -1,    82,
     236,   122,   233,    -1,    74,   236,   178,   233,    -1,    79,
     236,   178,   233,    -1,    40,   236,   178,   233,    -1,    50,
     236,   178,   233,    -1,     8,   236,   178,   233,    -1,   103,
     236,   242,   233,    -1,   102,   236,   122,   233,    -1,    96,
     236,   122,   233,    -1,     9,   236,   242,   233,    -1,   182,
     236,   242,   233,    -1,   181,   236,   242,   233,    -1,    68,
     236,   122,   233,    -1,    86,   236,   178,   233,    -1,    85,
     236,   140,   233,    -1,   232,   236,   178,   233,    -1,   176,
     236,   178,   233,    -1,   177,   236,   178,   233,    -1,   175,
     236,   178,   233,    -1,   175,   236,   179,   233,    -1,   174,
     236,   178,   233,    -1,   174,   236,   179,   233,    -1,   133,
     236,   242,   233,    -1,    19,   236,   242,   233,    -1,   134,
     236,   242,   233,    -1,   170,   236,   178,   233,    -1,   119,
     236,   178,   233,    -1,   219,   236,   178,   233,    -1,   129,
     236,   178,   233,    -1,   106,   236,   140,   233,    -1,    78,
     236,   242,   233,    -1,    42,   236,   122,   233,    -1,    95,
     236,   122,   233,    -1,   105,   236,   122,   233,    -1,   164,
     236,   140,   233,    -1,    30,   236,   140,   233,    -1,    26,
     236,   122,   233,    -1,   222,   236,   178,   233,    -1,    44,
     236,   140,   233,    -1,   137,   236,   178,   233,    -1,    37,
     236,   178,   233,    -1,   218,   236,   242,   233,    -1,    -1,
     131,   488,   236,   489,   233,    -1,   489,   237,   490,    -1,
     490,    -1,   185,    -1,   188,    -1,   190,    -1,   193,    -1,
     211,    -1,   207,    -1,   209,    -1,   214,    -1,   212,    -1,
     192,    -1,   208,    -1,   210,    -1,   194,    -1,   217,    -1,
     186,    -1,   187,    -1,   197,    -1,    -1,   128,   492,   236,
     493,   233,    -1,   493,   237,   494,    -1,   494,    -1,   185,
      -1,   188,    -1,   190,    -1,   193,    -1,   211,    -1,   207,
      -1,   209,    -1,   214,    -1,   212,    -1,   192,    -1,   208,
      -1,   210,    -1,   194,    -1,   217,    -1,   186,    -1,   187,
      -1,   197,    -1,   107,   236,   122,   233,    -1,   108,   236,
     122,   233,    -1,    31,   236,   122,   233,    -1,   189,   236,
     244,   233,    -1,    41,   236,   178,   233,    -1,    -1,    60,
     501,   235,   502,   234,   233,    -1,   502,   503,    -1,   503,
      -1,   504,    -1,   505,    -1,   506,    -1,   510,    -1,   511,
      -1,   512,    -1,     1,    -1,    46,   236,   178,   233,    -1,
      43,   236,   242,   233,    -1,    -1,    93,   507,   236,   508,
     233,    -1,   508,   237,   509,    -1,   509,    -1,   180,    -1,
      12,    -1,   221,   236,   140,   233,    -1,   111,   236,   140,
     233,    -1,    -1,     4,   513,   236,   514,   233,    -1,   514,
     237,   515,    -1,   515,    -1,   180,    -1,    12,    -1,    22,
     235,   517,   234,   233,    -1,   517,   518,    -1,   518,    -1,
     519,    -1,   520,    -1,   521,    -1,   522,    -1,   528,    -1,
     523,    -1,   524,    -1,   525,    -1,   526,    -1,   527,    -1,
     529,    -1,   530,    -1,   531,    -1,   532,    -1,     1,    -1,
      39,   236,   178,   233,    -1,   223,   236,   178,   233,    -1,
     224,   236,   178,   233,    -1,   225,   236,   178,   233,    -1,
      87,   236,   242,   233,    -1,    88,   236,   242,   233,    -1,
     132,   236,   178,   233,    -1,    98,   236,   122,   233,    -1,
     141,   236,   178,   233,    -1,    97,   236,   122,   233,    -1,
      33,   236,   122,   233,    -1,    32,   236,   122,   233,    -1,
     117,   236,   178,   233,    -1,   118,   236,   178,   233,    -1,
     162,   235,   534,   234,   233,    -1,   534,   535,    -1,   535,
      -1,   536,    -1,   537,    -1,   538,    -1,   540,    -1,   539,
      -1,   541,    -1,     1,    -1,    53,   236,   178,   233,    -1,
      73,   236,   178,   233,    -1,    91,   236,   242,   233,    -1,
      69,   236,   178,   233,    -1,    38,   236,   178,   233,    -1,
      72,   236,   178,   233,    -1
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
     981,   981,   981,   982,   982,   982,   983,   983,   984,   984,
     984,   985,   985,   986,   986,   988,  1000,  1012,  1035,  1047,
    1058,  1069,  1111,  1120,  1131,  1142,  1153,  1164,  1175,  1186,
    1197,  1208,  1219,  1231,  1230,  1234,  1234,  1235,  1236,  1238,
    1245,  1252,  1259,  1266,  1273,  1280,  1287,  1294,  1301,  1308,
    1315,  1322,  1329,  1336,  1350,  1349,  1369,  1369,  1371,  1371,
    1372,  1373,  1374,  1375,  1376,  1377,  1378,  1379,  1380,  1381,
    1383,  1429,  1475,  1481,  1487,  1493,  1499,  1505,  1511,  1517,
    1527,  1526,  1543,  1542,  1546,  1546,  1547,  1551,  1557,  1557,
    1558,  1558,  1558,  1558,  1558,  1560,  1562,  1562,  1564,  1571,
    1584,  1593,  1606,  1605,  1679,  1679,  1680,  1680,  1680,  1680,
    1681,  1681,  1682,  1682,  1682,  1683,  1683,  1684,  1684,  1684,
    1685,  1685,  1687,  1716,  1729,  1740,  1750,  1749,  1753,  1753,
    1754,  1755,  1757,  1765,  1772,  1779,  1786,  1793,  1800,  1807,
    1814,  1821,  1830,  1841,  1852,  1863,  1874,  1885,  1897,  1916,
    1926,  1935,  1951,  1950,  1963,  1963,  1964,  1964,  1964,  1964,
    1966,  1975,  1990,  2009,  2008,  2024,  2024,  2025,  2025,  2025,
    2025,  2027,  2036,  2052,  2051,  2057,  2057,  2058,  2062,  2066,
    2070,  2074,  2078,  2082,  2092,  2091,  2113,  2113,  2114,  2114,
    2114,  2116,  2123,  2122,  2128,  2128,  2129,  2133,  2137,  2141,
    2145,  2149,  2153,  2157,  2167,  2166,  2316,  2316,  2317,  2317,
    2318,  2318,  2318,  2319,  2319,  2319,  2320,  2320,  2320,  2321,
    2321,  2321,  2322,  2322,  2322,  2323,  2323,  2324,  2326,  2338,
    2350,  2359,  2371,  2383,  2389,  2393,  2401,  2411,  2410,  2414,
    2414,  2415,  2419,  2427,  2431,  2435,  2441,  2482,  2493,  2504,
    2519,  2530,  2543,  2556,  2565,  2601,  2600,  2623,  2623,  2624,
    2624,  2624,  2626,  2635,  2648,  2647,  2669,  2669,  2670,  2670,
    2670,  2672,  2681,  2694,  2693,  2714,  2714,  2715,  2715,  2717,
    2730,  2729,  2777,  2776,  2780,  2780,  2781,  2787,  2787,  2788,
    2788,  2788,  2788,  2790,  2799,  2811,  2814,  2814,  2815,  2815,
    2816,  2816,  2817,  2817,  2818,  2818,  2819,  2819,  2820,  2820,
    2821,  2822,  2822,  2823,  2823,  2824,  2824,  2825,  2825,  2826,
    2826,  2827,  2827,  2828,  2828,  2829,  2830,  2830,  2831,  2831,
    2832,  2833,  2833,  2834,  2834,  2835,  2835,  2836,  2837,  2837,
    2838,  2838,  2839,  2839,  2840,  2840,  2841,  2841,  2842,  2842,
    2843,  2847,  2853,  2859,  2865,  2870,  2875,  2881,  2887,  2893,
    2899,  2905,  2911,  2917,  2923,  2929,  2935,  2941,  2947,  2958,
    2964,  2973,  2979,  2985,  2991,  2995,  3001,  3005,  3011,  3017,
    3023,  3029,  3035,  3041,  3047,  3053,  3064,  3070,  3076,  3082,
    3088,  3097,  3129,  3147,  3153,  3162,  3168,  3173,  3180,  3179,
    3185,  3185,  3186,  3190,  3194,  3198,  3202,  3206,  3210,  3214,
    3218,  3222,  3226,  3230,  3234,  3238,  3242,  3246,  3250,  3257,
    3256,  3262,  3262,  3263,  3267,  3271,  3275,  3279,  3283,  3287,
    3291,  3295,  3299,  3303,  3307,  3311,  3315,  3319,  3323,  3327,
    3333,  3339,  3345,  3351,  3357,  3367,  3366,  3392,  3392,  3393,
    3394,  3395,  3396,  3397,  3398,  3399,  3401,  3407,  3414,  3413,
    3418,  3418,  3419,  3423,  3429,  3452,  3462,  3461,  3504,  3504,
    3505,  3509,  3518,  3521,  3521,  3522,  3523,  3524,  3525,  3526,
    3527,  3528,  3529,  3530,  3531,  3532,  3533,  3534,  3535,  3536,
    3538,  3544,  3550,  3556,  3562,  3568,  3574,  3580,  3586,  3592,
    3598,  3604,  3610,  3616,  3625,  3628,  3628,  3629,  3629,  3630,
    3631,  3632,  3633,  3634,  3636,  3642,  3648,  3662,  3668,  3674
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ACCEPT_PASSWORD", "ACTION", "ADMIN",
  "AFTYPE", "T_ALLOW", "ANTI_NICK_FLOOD", "ANTI_SPAM_EXIT_MESSAGE_TIME",
  "IRCD_AUTH", "AUTOCONN", "T_BLOCK", "BURST_AWAY", "BYTES", "KBYTES",
  "MBYTES", "GBYTES", "TBYTES", "CALLER_ID_WAIT", "CAN_FLOOD", "CAN_IDLE",
  "CHANNEL", "CIPHER_PREFERENCE", "CLASS", "COMPRESSED",
  "COMPRESSION_LEVEL", "CONNECT", "CONNECTFREQ", "CRYPTLINK",
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
  "SID", "TKLINE_EXPIRE_NOTICES", "T_SHARED", "T_CLUSTER", "TYPE",
  "SHORT_MOTD", "SILENT", "SPOOF", "SPOOF_NOTICE", "STATS_I_OPER_ONLY",
  "STATS_K_OPER_ONLY", "STATS_O_OPER_ONLY", "STATS_P_OPER_ONLY", "TBOOL",
  "TMASKED", "T_REJECT", "TS_MAX_DELTA", "TS_WARN_DELTA", "TWODOTS",
  "T_ALL", "T_BOTS", "T_SOFTCALLERID", "T_CALLERID", "T_CCONN",
  "T_CLIENT_FLOOD", "T_DEBUG", "T_DRONE", "T_EXTERNAL", "T_FULL",
  "T_INVISIBLE", "T_IPV4", "T_IPV6", "T_LOCOPS", "T_LOGPATH", "T_L_CRIT",
  "T_L_DEBUG", "T_L_ERROR", "T_L_INFO", "T_L_NOTICE", "T_L_TRACE",
  "T_L_WARN", "T_MAX_CLIENTS", "T_NCHANGE", "T_OPERWALL", "T_REJ",
  "T_SERVNOTICE", "T_SKILL", "T_SPY", "T_SSL", "T_UNAUTH", "T_UNRESV",
  "T_UNXLINE", "T_WALLOP", "THROTTLE_TIME", "TRUE_NO_OPER_FLOOD",
  "UNKLINE", "USER", "USE_EGD", "USE_EXCEPT", "USE_INVEX", "USE_KNOCK",
  "USE_LOGGING", "USE_WHOIS_ACTUALLY", "VHOST", "VHOST6", "XLINE", "WARN",
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
  "oper_class", "oper_global_kill", "oper_remote", "oper_kline",
  "oper_xline", "oper_unkline", "oper_gline", "oper_nick_changes",
  "oper_die", "oper_rehash", "oper_admin", "oper_flags", "@2",
  "oper_flags_items", "oper_flags_item", "oper_flags_item_atom",
  "class_entry", "@3", "class_name_b", "class_items", "class_item",
  "class_name", "class_name_t", "class_ping_time", "class_number_per_ip",
  "class_connectfreq", "class_max_number", "class_max_global",
  "class_max_local", "class_max_ident", "class_sendq", "listen_entry",
  "@4", "listen_flags", "@5", "listen_flags_items", "listen_flags_item",
  "listen_items", "listen_item", "listen_port", "port_items", "port_item",
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
  "connect_flags_items", "connect_flags_item",
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
  "serverhide_entry", "serverhide_items", "serverhide_item",
  "serverhide_flatten_links", "serverhide_hide_servers",
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
     485,   486,   487,    59,   125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   238,   239,   239,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   241,   241,   242,   242,
     242,   242,   242,   242,   243,   243,   244,   244,   244,   244,
     245,   246,   246,   247,   247,   247,   248,   249,   250,   251,
     251,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   265,   266,   266,   266,
     266,   267,   268,   269,   270,   271,   271,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   273,   274,   275,   276,
     277,   278,   279,   279,   279,   279,   279,   279,   279,   280,
     282,   281,   283,   283,   284,   284,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   305,   304,   306,   306,   307,   307,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   310,   309,   311,   311,   312,   312,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     325,   324,   327,   326,   328,   328,   329,   329,   330,   330,
     331,   331,   331,   331,   331,   332,   333,   333,   334,   334,
     335,   336,   338,   337,   339,   339,   340,   340,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   340,   340,   340,
     340,   340,   341,   342,   343,   344,   346,   345,   347,   347,
     348,   348,   349,   349,   349,   349,   349,   349,   349,   349,
     349,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   361,   360,   362,   362,   363,   363,   363,   363,
     364,   365,   366,   368,   367,   369,   369,   370,   370,   370,
     370,   371,   372,   374,   373,   375,   375,   376,   376,   376,
     376,   376,   376,   376,   378,   377,   379,   379,   380,   380,
     380,   381,   383,   382,   384,   384,   385,   385,   385,   385,
     385,   385,   385,   385,   387,   386,   388,   388,   389,   389,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   391,   392,
     393,   394,   395,   396,   397,   397,   398,   400,   399,   401,
     401,   402,   402,   402,   402,   402,   403,   404,   405,   406,
     407,   408,   409,   410,   411,   413,   412,   414,   414,   415,
     415,   415,   416,   417,   419,   418,   420,   420,   421,   421,
     421,   422,   423,   425,   424,   426,   426,   427,   427,   428,
     430,   429,   432,   431,   433,   433,   434,   435,   435,   436,
     436,   436,   436,   437,   438,   439,   440,   440,   441,   441,
     441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
     441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
     441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
     441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
     441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   465,   466,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   488,   487,
     489,   489,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   492,
     491,   493,   493,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     495,   496,   497,   498,   499,   501,   500,   502,   502,   503,
     503,   503,   503,   503,   503,   503,   504,   505,   507,   506,
     508,   508,   509,   509,   510,   511,   513,   512,   514,   514,
     515,   515,   516,   517,   517,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   534,   535,   535,   535,
     535,   535,   535,   535,   536,   537,   538,   539,   540,   541
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     0,     1,     2,     3,
       3,     3,     3,     3,     0,     1,     2,     3,     3,     3,
       5,     2,     1,     1,     1,     1,     4,     4,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     5,     2,     1,     1,     1,     1,
       1,     4,     4,     4,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       0,     7,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     0,     5,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     7,     0,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       0,     6,     0,     5,     3,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     4,     3,     1,     1,     3,
       4,     4,     0,     6,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     0,     5,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     0,     6,     2,     1,     1,     1,     1,     1,
       4,     4,     4,     0,     6,     2,     1,     1,     1,     1,
       1,     4,     4,     0,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     6,     2,     1,     1,     1,
       1,     4,     0,     5,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     7,     0,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       4,     4,     4,     4,     4,     4,     4,     0,     5,     3,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     4,     4,     0,     6,     2,     1,     1,     1,
       1,     4,     4,     0,     6,     2,     1,     1,     1,     4,
       0,     6,     0,     5,     3,     1,     1,     2,     1,     1,
       1,     1,     1,     4,     4,     5,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     0,     5,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       5,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     0,     5,
       3,     1,     1,     1,     4,     4,     0,     5,     3,     1,
       1,     1,     5,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       2,     0,     1,     0,     0,   222,     0,   174,   324,   384,
     393,   400,     0,   565,   375,   200,     0,     0,   110,   272,
       0,     0,   283,   304,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,     0,
     176,   326,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,    80,     0,     0,
       0,     0,    76,    77,    79,    78,     0,   609,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   594,   595,   596,   597,   598,   600,   601,
     602,   603,   604,   599,   605,   606,   607,   608,   191,     0,
     177,   349,     0,   327,     0,     0,     0,   470,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   539,
       0,   518,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   417,   467,   468,   465,   469,   466,   428,   418,   419,
     456,   420,   421,   422,   423,   424,   425,   426,   427,   461,
     429,   430,   431,   433,   438,   434,   436,   435,   451,   437,
     439,   440,   441,   442,   445,   443,   432,   444,   447,   455,
     457,   458,   448,   449,   463,   464,   460,   450,   446,   453,
     454,   452,   459,   462,     0,     0,     0,    95,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,    88,
      89,    92,    94,    93,    90,    91,    45,     0,     0,     0,
      42,    43,    44,   136,     0,   113,     0,   633,     0,     0,
       0,     0,     0,     0,     0,   626,   627,   628,   629,   631,
     630,   632,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,    61,    58,    51,    60,
      54,    55,    56,    52,    59,    57,    53,     0,     0,     0,
       0,     0,     0,    75,   241,     0,     0,     0,   246,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,   226,   227,   236,   228,   229,   230,   231,   232,
     239,   233,   234,   235,   237,   238,   240,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   593,     0,     0,   390,     0,     0,     0,   387,
     388,   389,   398,     0,     0,   396,   397,   412,   402,     0,
       0,   411,     0,   408,   409,   410,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   416,
     575,   586,     0,     0,   578,     0,     0,     0,   568,   569,
     570,   571,   572,   573,   574,   381,     0,     0,     0,   378,
     379,   380,   214,   202,     0,     0,     0,   211,     0,   209,
     210,   212,   213,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,     0,    41,     0,   279,     0,
       0,     0,     0,   275,   276,   277,   278,     0,     0,     0,
       0,     0,     0,     0,   625,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,   290,     0,
     293,     0,     0,   286,   287,   288,   289,   310,     0,   312,
       0,   307,   308,   309,     0,     0,     0,    74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,     0,     0,     0,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     592,   189,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   347,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   357,     0,     0,     0,     0,     0,     0,     0,
       0,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     345,   342,   344,   343,   341,   338,   339,   340,   346,     0,
       0,     0,   386,     0,     0,   395,     0,     0,     0,     0,
     407,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
       0,     0,     0,     0,     0,     0,   415,     0,     0,     0,
       0,     0,     0,     0,   567,     0,     0,     0,   377,     0,
       0,     0,     0,     0,   208,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,     0,    40,   134,     0,     0,     0,     0,   153,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   115,   116,   117,   118,   131,   119,   132,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   133,     0,     0,     0,     0,   274,     0,     0,     0,
       0,     0,     0,   624,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,     0,     0,     0,
     285,     0,     0,     0,   306,    83,    82,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   223,   621,   620,   610,    26,    26,    26,
      26,    26,    28,    27,   614,   615,   619,   617,   622,   623,
     616,   618,   611,   612,   613,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   328,     0,     0,   385,     0,   394,
       0,     0,     0,   401,   481,   485,   473,   499,   512,   511,
     562,   516,   479,   564,   507,   514,   480,   471,   472,   488,
     477,   506,   478,   476,   490,   489,   508,   484,   483,   482,
     509,   505,   560,   561,   502,   543,   557,   558,   544,   545,
     552,   546,   555,   559,   548,   553,   549,   554,   547,   551,
     550,   556,     0,   542,   504,   522,   536,   537,   523,   524,
     531,   525,   534,   538,   527,   532,   528,   533,   526,   530,
     529,   535,     0,   521,   498,   500,   515,   510,   475,   501,
     496,   497,   494,   495,   492,   493,   487,   486,    34,    34,
      34,    36,    35,   563,   517,   503,   513,   474,   491,     0,
       0,     0,     0,     0,     0,   566,     0,     0,   376,     0,
       0,     0,   218,     0,   217,   201,   100,   101,    99,    98,
     102,   108,   103,   107,   105,   106,   104,    97,    96,   109,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,     0,     0,     0,   273,   638,   634,   637,   639,
     635,   636,    67,    73,    65,    69,    68,    64,    63,    66,
      72,    70,    71,     0,     0,     0,   284,     0,     0,   305,
     265,   245,   264,   256,   257,   253,   259,   255,   254,   261,
     258,     0,   260,   252,     0,   249,   251,   267,   263,   262,
     271,   266,   243,   270,   269,   268,   244,   242,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   175,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   325,   391,   392,   399,   406,     0,   405,   413,   414,
     540,     0,   519,     0,    37,    38,    39,   591,   590,     0,
     589,   577,   576,   583,   582,     0,   581,   585,   584,   383,
     382,   207,   206,     0,   205,   221,   220,     0,   215,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,   281,
     282,   280,   291,   297,   301,   303,   302,   300,   298,   299,
       0,   296,   292,   311,   316,   320,   323,   322,   321,   319,
     317,   318,     0,   315,   250,   247,     0,   194,   196,   198,
     197,   195,   190,   193,   192,   199,   352,   354,   355,   370,
     374,   373,   369,   368,   367,   356,   364,   365,   362,   363,
     361,     0,   360,   350,   371,   372,   348,   353,   366,   351,
     403,     0,   541,   520,   587,     0,   579,     0,   203,     0,
     219,   216,   152,   142,   150,   139,   167,   165,   164,   159,
     168,   172,   161,   169,     0,   171,   166,   160,   173,   170,
     162,   163,     0,   156,   158,   148,   143,   140,   145,   135,
     149,   138,   151,   144,   141,   147,   137,   146,   294,     0,
     313,     0,   248,   358,     0,   404,   588,   580,   204,   157,
     154,     0,   295,   314,   359,   155
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     1,    24,   822,   823,   961,   962,    25,   249,   250,
     251,   252,    26,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,    27,    71,    72,    73,
      74,    75,    28,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,    29,    61,   254,   742,   743,   744,   255,
     745,   746,   747,   748,   749,   750,   751,   752,   753,   754,
     755,   756,   757,   758,   759,   760,   761,  1006,  1262,  1263,
    1264,    30,    50,   109,   571,   572,   573,   110,   574,   575,
     576,   577,   578,   579,   580,   581,    31,    58,   457,   699,
    1143,  1144,   458,   459,   460,   983,   984,   461,   462,    32,
      48,   320,   321,   322,   323,   324,   325,   326,   531,  1064,
    1065,  1066,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,    33,    62,   482,   483,   484,   485,   486,    34,
      65,   512,   513,   514,   515,   516,   787,  1180,  1181,    35,
      66,   520,   521,   522,   523,   792,  1192,  1193,    36,    51,
     112,   600,   601,   602,   113,   603,   604,   605,   606,   607,
     608,   609,   855,  1221,  1222,   610,   611,   612,   613,   614,
     615,   616,   617,   618,    37,    57,   448,   449,   450,   451,
      38,    52,   358,   359,   360,   361,    39,    53,   364,   365,
     366,    40,    54,   371,   626,  1116,  1117,   372,   373,   374,
     375,    41,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     409,   942,   943,   218,   407,   922,   923,   219,   220,   221,
     222,   223,    42,    56,   437,   438,   439,   440,   441,   690,
    1135,  1136,   442,   443,   444,   687,  1129,  1130,    43,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,    44,   264,   265,   266,   267,
     268,   269,   270,   271
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -944
static const short int yypact[] =
{
    -944,   703,  -944,  -224,  -228,  -944,  -178,  -944,  -944,  -944,
    -944,  -944,  -169,  -944,  -944,  -944,  -159,  -148,  -944,  -944,
    -127,  -126,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,   301,  -116,   546,
    -110,  -107,   -95,   -67,   -65,   384,   -56,   -20,   -14,   346,
      54,   -38,   -13,   307,   418,    -8,     8,  -944,  -108,    34,
      35,    23,  -944,  -944,  -944,  -944,   631,  -944,    59,    68,
      71,    73,    74,    79,    81,    82,    88,    89,    90,    93,
      99,   101,   171,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,    85,
    -944,  -944,   104,  -944,    76,     2,   247,  -944,   105,   107,
     113,   118,   119,   130,   145,   146,   147,   152,   155,   163,
     168,   175,   177,   180,   181,   182,   184,   186,   191,   194,
     195,   196,   197,   199,   200,   202,   203,   205,   207,  -944,
     208,  -944,   215,   218,   219,   220,   221,   224,   228,   231,
     232,   235,   236,   238,   239,   240,   242,   260,   262,   263,
      10,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,   276,   110,   290,  -944,   268,   269,
     270,   272,   273,   274,   278,   280,   211,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,   283,   284,    26,
    -944,  -944,  -944,  -944,   126,  -944,   229,  -944,   286,   287,
     289,   291,   292,   294,   225,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,   297,   303,   304,   305,   306,   309,   310,
     313,   315,   317,   319,   122,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,    13,    19,   116,
     233,   237,   151,  -944,  -944,   320,   326,   327,  -944,   331,
     333,   335,   339,   341,   344,   345,   348,   350,   353,   354,
     141,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,   285,   325,   404,
     469,   469,   471,   472,   420,   421,   422,   423,   427,   429,
     432,   293,  -944,   681,   725,  -944,   360,   376,    11,  -944,
    -944,  -944,  -944,   377,     5,  -944,  -944,  -944,  -944,   378,
     381,  -944,    96,  -944,  -944,  -944,   437,   469,   442,   469,
     497,   321,   500,   445,   448,   449,   506,   491,   467,   526,
     527,   528,   474,   469,   475,   534,   517,   480,   543,   544,
     545,   469,   547,   520,   548,   550,   495,   438,   498,   444,
     469,   469,   499,   541,   510,   512,  -133,  -115,   513,   515,
     469,   469,   572,   469,   518,   519,   521,   522,   462,  -944,
    -944,  -944,   465,   466,  -944,   476,   478,    58,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,   481,   482,    72,  -944,
    -944,  -944,  -944,  -944,   483,   484,   485,  -944,   125,  -944,
    -944,  -944,  -944,   570,   571,   576,   582,   436,   583,   584,
     551,   501,  -944,   592,   593,   502,  -944,   441,  -944,   503,
     504,   505,    12,  -944,  -944,  -944,  -944,   560,   564,   566,
     567,   569,   469,   523,  -944,   613,   577,   617,   619,   622,
     624,   625,   633,   656,   643,   646,   554,  -944,  -944,   552,
    -944,   561,   106,  -944,  -944,  -944,  -944,  -944,   562,  -944,
      47,  -944,  -944,  -944,   568,   573,   574,  -944,   621,   668,
     632,   575,   634,   636,   638,   639,   642,   669,   700,   683,
     684,   647,   686,   594,  -944,   595,   597,   599,   379,   600,
     602,   605,   606,   609,   610,   611,   612,   614,   615,   616,
    -944,  -944,   623,   626,   627,   651,   652,   653,   664,   666,
     667,    21,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,   674,   676,   680,   685,   689,   690,   698,
     701,   704,  -944,   705,   706,   708,   709,   711,   712,   713,
     172,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,   710,
     715,   618,  -944,   718,   620,  -944,   714,   720,   727,   628,
    -944,   635,   645,   650,   659,   672,   719,   722,   723,   724,
     726,   728,   729,   730,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,   741,   742,   743,   744,   745,   746,
     747,   748,   687,   749,   721,   750,   751,   752,   753,   754,
     755,   756,   757,   758,   759,   760,   761,   762,   763,    84,
     764,   765,   766,   767,   768,   769,  -944,   717,   469,   691,
     771,   777,   779,   772,  -944,   780,   782,   775,  -944,   774,
     783,   796,   817,   776,  -944,   778,   781,   784,   785,   786,
     787,   788,   789,   790,   791,   792,   793,   794,   795,  -944,
     797,   798,  -944,  -944,   799,   800,   801,   802,  -944,   803,
     804,   805,   806,   807,   808,   809,   810,   811,   812,   813,
     814,   815,    20,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,   818,   820,   863,   819,  -944,   821,   822,   823,
     824,   825,   826,  -944,   827,   828,   829,   830,   831,   832,
     833,   834,   835,   836,   837,  -944,   864,   838,   866,   839,
    -944,   872,   840,   842,  -944,  -944,  -944,  -944,   844,   845,
     846,   770,   847,   848,   849,   850,   851,   852,   853,   854,
     855,   856,   857,  -944,  -944,  -944,  -944,   469,   469,   469,
     469,   469,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,   469,   891,   893,   894,   907,
     892,   911,   469,   572,   858,  -944,   913,  -102,   895,   931,
     952,   915,   916,   917,   956,   861,   958,   959,   960,   961,
     912,   962,   963,   871,  -944,   873,   874,  -944,   875,  -944,
     964,   877,   878,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -229,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -205,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,   572,   572,
     572,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,    14,
     879,   880,    31,   881,   882,  -944,   883,   884,  -944,   -64,
     885,   886,   663,  -202,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,   927,   980,   943,   944,   887,   946,   947,   948,
     949,   988,   951,   990,   953,   954,   993,   957,   994,   965,
     903,  -944,   904,   905,   906,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,   908,   148,   909,  -944,   914,   137,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,   773,  -944,  -944,  -195,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,   918,   919,   920,   921,   922,   923,   924,
     925,   926,  -944,   928,   929,   930,   932,   933,   934,   935,
     936,   937,   938,   361,   939,   940,   941,   942,   945,   950,
     955,  -944,  -944,  -944,  -944,  -944,  -168,  -944,  -944,  -944,
    -944,   687,  -944,   721,  -944,  -944,  -944,  -944,  -944,  -123,
    -944,  -944,  -944,  -944,  -944,  -100,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,   -87,  -944,  -944,  -944,  1018,  -944,   817,
     966,   967,   968,   969,   538,   970,   971,   972,   973,   974,
     975,   976,   977,   978,   979,   981,   982,   983,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
     -73,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,   -24,  -944,  -944,  -944,   770,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,    49,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,   964,  -944,  -944,  -944,    14,  -944,    31,  -944,   -64,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,   559,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,    63,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,   148,
    -944,   137,  -944,  -944,   361,  -944,  -944,  -944,  -944,  -944,
    -944,   538,  -944,  -944,  -944,  -944
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -944,  -944,  -944,  -336,  -340,  -943,  -420,  -944,  -944,   702,
    -944,  -944,  -944,  -944,   670,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  1073,  -944,
    -944,  -944,  -944,  -944,   910,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,   403,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -143,
    -105,  -944,  -944,  -944,  -944,   579,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,   -79,  -944,   816,  -944,  -944,    15,  -944,  -944,  -944,
    -944,  -944,   859,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
     -19,   115,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,   699,  -944,  -944,  -944,  -944,
    -944,  -944,   673,  -944,  -944,  -944,  -944,  -944,   -99,  -944,
    -944,  -944,   662,  -944,  -944,  -944,  -944,   -97,  -944,  -944,
    -944,  -944,   586,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,   -94,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,   841,  -944,  -944,
    -944,  -944,  -944,   860,  -944,  -944,  -944,  -944,  -944,   862,
    -944,  -944,  -944,  -944,  -944,  -944,   -44,  -944,   865,  -944,
    -944,  -944,  -944,  1019,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,    69,  -944,  -944,  -944,    70,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,   843,  -944,  -944,  -944,  -944,
    -944,   -43,  -944,  -944,  -944,  -944,  -944,   -42,  -944,  -944,
    1103,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,  -944,
    -944,  -944,  -944,  -944,  -944,  -944,  -944,   984,  -944,  -944,
    -944,  -944,  -944,  -944
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned short int yytable[] =
{
     549,   550,   680,   362,  1120,  1141,   362,    47,  1121,    45,
      46,   117,   355,   478,   508,  1124,  1125,  1126,   118,   119,
     517,   723,   561,   120,    67,   724,  1127,   246,  1122,   121,
     108,  1148,  1123,   111,   479,  1149,   122,   632,  1195,   634,
     123,   124,  1196,  1133,   725,   671,   672,   125,   517,   562,
     126,   127,   128,   648,   129,   246,   726,    49,    68,   430,
     130,   656,   431,   673,   674,  1230,    55,   727,    69,  1231,
     665,   666,   728,   445,   131,   132,    59,   355,   133,   729,
     677,   678,   363,   681,   134,   363,   730,    60,   135,   136,
     731,   356,   137,  1094,  1095,   138,   139,   367,   958,   959,
     960,   432,   253,   732,   433,   140,   141,   508,    63,    64,
    1234,   445,   142,   143,  1235,   144,   145,   146,   147,    76,
     563,   564,   565,   272,   509,   566,   452,   480,   299,   148,
     518,   733,   567,  1236,    70,   247,   734,  1237,   149,   150,
     114,   151,   304,   152,   153,   568,  1238,   154,   368,  1142,
    1239,   434,   772,   357,   481,   735,   356,   273,   518,   569,
    1278,   305,   248,   247,  1279,   306,   736,   737,   115,   435,
     116,   738,    77,   582,   155,   583,   156,   453,   584,   224,
     157,   570,   510,   585,   158,   159,   160,   161,   519,   307,
     248,   162,   163,   308,  1128,   586,   587,   588,   274,   164,
     454,   589,   309,    78,    79,   455,   679,   369,   310,  1280,
      80,  1134,   227,  1281,   446,   225,   519,   509,   357,   590,
    1184,   226,   256,   591,   592,   311,   257,   297,   165,   166,
     478,  1173,   167,   275,   511,   276,   277,   168,   370,   624,
     739,   740,   169,   298,   428,   621,   765,   593,   367,   594,
     741,   479,   446,   312,  1020,   844,   524,   302,    81,    82,
     475,   313,   595,   258,   456,   228,   229,   230,    83,    84,
     300,   301,   278,   231,   279,   510,   314,   430,   259,   436,
     431,   793,  1283,   596,   315,   316,  1284,   280,    85,    86,
    1185,   452,   693,   447,   260,   337,  1290,   261,   262,   368,
    1291,  1174,    67,    87,   338,   232,   697,   339,   257,   340,
     341,   597,    88,   317,   318,   342,   263,   343,   344,   432,
     353,  1186,   433,   598,   345,   346,   347,   511,   281,   348,
     629,   447,  1175,   599,  1187,   349,    68,   350,   233,   354,
     789,   376,   453,   377,   480,   258,    69,   227,   970,   378,
     282,   283,  1188,  1189,   379,   380,   506,  1190,   369,   703,
     259,   477,   319,  1176,  1177,   454,   381,  1191,  1178,   434,
     455,   481,  1216,   525,  1217,   543,   260,   526,  1179,   261,
     262,   382,   383,   384,   527,   117,  1218,   435,   385,   370,
    1219,   386,   118,   119,    89,    90,    91,   120,   263,   387,
     228,   229,   230,   121,   388,   351,   863,   545,   231,   234,
     122,   389,    70,   390,   123,   124,   391,   392,   393,   272,
     394,   125,   395,  1091,   126,   127,   128,   396,   129,   456,
     397,   398,   399,   400,   130,   401,   402,   235,   403,   404,
     232,   405,   723,   406,   408,   471,   724,   546,   131,   132,
    1220,   410,   133,   273,   411,   412,   413,   414,   134,   493,
     415,   636,   135,   136,   416,   725,   137,   417,   418,   138,
     139,   419,   420,   233,   421,   422,   423,   726,   424,   140,
     141,  1078,  1079,  1080,  1081,  1082,   142,   143,   727,   144,
     145,   146,   147,   728,   274,  1083,   425,   436,   426,   427,
     729,   548,  1090,   148,   463,   464,   465,   730,   466,   467,
     468,   731,   149,   150,   469,   151,   470,   152,   153,   473,
     474,   154,   487,   488,   732,   489,   560,   490,   491,   275,
     492,   276,   277,   495,   817,   818,   819,   820,   821,   496,
     497,   498,   499,  1246,   234,   500,   501,    77,   155,   502,
     156,   503,   733,   504,   157,   505,   528,   734,   158,   159,
     160,   161,   529,   530,  1246,   162,   163,   532,   278,   533,
     279,   534,   235,   164,  1247,   535,   735,   536,    78,    79,
     537,   538,   547,   280,   539,    80,   540,   736,   737,   541,
     542,   548,   738,   551,   552,  1247,   619,  1248,   553,   554,
     555,   556,   165,   166,  1249,   557,   167,   558,  1250,  1251,
     559,   168,   620,   623,   627,   631,   169,   628,  1248,   635,
     633,  1252,   637,   638,   281,  1249,   639,   640,   641,  1250,
    1251,   642,   304,    81,    82,   709,   710,   711,   712,   713,
     714,   715,  1252,    83,    84,   643,   282,   283,   644,   645,
     646,   305,   647,   649,  1253,   306,   650,   651,   652,  1254,
     658,   739,   740,    85,    86,   653,   654,   655,  1255,   657,
     659,   741,   660,   661,   662,  1253,   663,   667,    87,   307,
     664,   668,   561,   308,  1256,  1257,  1258,    88,   669,  1255,
     670,   675,   309,   676,   679,   686,   682,   683,   310,   684,
     685,   688,   689,     2,     3,  1256,  1257,  1258,     4,   562,
     705,   706,   691,     5,   692,   311,   707,   695,   696,   700,
     701,   702,   708,   716,   717,     6,   582,     7,   583,   718,
       8,   584,   720,   721,   719,   722,   585,     9,   767,   762,
     763,   764,   768,   312,   769,   770,  1259,   771,   586,   587,
     588,   313,    10,   774,   589,   775,   773,   776,  1260,   777,
      11,    12,   778,    13,   779,   780,   314,  1259,  1261,    89,
      90,    91,   590,   781,   315,   316,   591,   592,   782,  1260,
     563,   564,   565,   783,    14,   566,   784,   785,   786,  1261,
    1053,  1054,   567,  1053,  1054,    15,    16,   788,   791,   798,
     593,   795,   594,   317,   318,   568,   796,   797,   799,   807,
     800,   801,   802,    17,   803,   595,   804,   805,  1055,   569,
     806,  1055,   808,   809,   810,   811,   812,   813,   814,    18,
     815,  1056,   816,   824,  1056,   825,   596,  1057,   826,   827,
    1057,   570,   828,   829,   830,   831,  1147,   832,   833,   834,
     865,   867,   319,   869,  1058,   866,    19,  1058,   868,   835,
     871,   873,   836,   837,   597,    20,    21,   872,   874,   971,
      22,    23,   905,   906,   907,   908,   598,   909,   875,   910,
     911,   912,  1059,   876,   913,  1059,   599,   838,   839,   840,
    1060,  1061,   877,  1060,   914,   915,   916,   917,   918,   919,
     841,   920,   842,   843,   921,   878,   925,   926,   927,   928,
     846,   929,   847,   930,   931,   932,   848,   973,   933,   974,
     976,   849,   977,   980,  1062,   850,   851,  1062,   934,   935,
     936,   937,   938,   939,   852,   940,   981,   853,   941,   982,
     854,   856,   857,  1063,   858,   859,  1063,   860,   861,   862,
     870,   476,   879,   969,   507,   880,   881,   882,  1022,   883,
    1023,   884,   885,   886,   887,   888,   889,   890,   891,   892,
     893,   894,   895,   896,   897,   898,   899,   900,   901,   902,
     903,   904,   924,   944,   945,   946,   947,   948,   949,   950,
     951,   952,   953,   954,   955,   956,   957,   963,   964,   965,
     966,   967,   968,  1024,  1043,   975,  1045,   972,   978,   985,
     979,   986,  1047,  1084,   987,  1085,  1086,   988,   989,   990,
     991,   992,   993,   994,   995,   996,   997,   998,   999,  1087,
    1000,  1001,  1088,  1089,  1108,  1002,  1003,  1004,  1005,  1007,
    1008,  1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,
    1018,  1019,  1025,  1093,  1026,  1027,  1028,  1029,  1030,  1031,
    1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,  1041,
    1042,  1097,  1046,  1096,  1044,  1049,  1048,  1050,  1051,  1052,
    1067,  1068,  1069,  1070,  1071,  1072,  1073,  1074,  1075,  1076,
    1077,  1092,  1098,  1099,  1100,  1101,  1102,  1103,  1104,  1105,
    1106,  1107,  1109,  1110,  1111,  1150,  1112,  1113,  1114,  1115,
    1118,  1119,  1131,  1132,  1137,  1138,  1139,  1140,  1145,  1146,
    1151,  1152,  1153,  1154,  1155,  1156,  1157,  1158,  1159,  1160,
    1161,  1162,  1163,  1164,  1166,  1165,  1168,  1169,  1170,  1171,
    1240,  1172,  1182,  1167,   303,  1021,   472,  1183,  1295,  1289,
     845,  1197,  1198,  1199,  1200,  1201,  1202,  1203,  1204,  1205,
    1288,  1206,  1207,  1208,  1241,  1209,  1210,  1211,  1212,  1213,
    1214,  1215,  1223,  1224,  1225,  1226,  1194,  1282,  1227,   544,
    1292,   766,   794,  1228,  1293,   790,   864,  1285,  1229,   429,
    1294,  1232,  1233,  1286,  1287,   352,     0,     0,     0,  1242,
    1243,  1244,  1245,  1265,  1266,  1267,  1268,  1269,  1270,  1271,
    1272,  1273,  1274,     0,  1275,  1276,  1277,     0,   622,     0,
       0,     0,     0,     0,     0,     0,   625,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   630,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   494,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   704,     0,     0,     0,     0,     0,
     694,     0,     0,     0,     0,     0,     0,     0,     0,   698
};

static const short int yycheck[] =
{
     340,   341,   422,     1,   233,    69,     1,   235,   237,   233,
     234,     1,     1,     1,     1,   958,   959,   960,     8,     9,
       1,     1,     1,    13,     1,     5,    12,     1,   233,    19,
     140,   233,   237,   140,    22,   237,    26,   377,   233,   379,
      30,    31,   237,    12,    24,   178,   179,    37,     1,    28,
      40,    41,    42,   393,    44,     1,    36,   235,    35,     1,
      50,   401,     4,   178,   179,   233,   235,    47,    45,   237,
     410,   411,    52,     1,    64,    65,   235,     1,    68,    59,
     420,   421,    80,   423,    74,    80,    66,   235,    78,    79,
      70,    80,    82,   195,   196,    85,    86,     1,    14,    15,
      16,    43,   140,    83,    46,    95,    96,     1,   235,   235,
     233,     1,   102,   103,   237,   105,   106,   107,   108,   235,
      99,   100,   101,     1,   111,   104,     1,   115,   236,   119,
     111,   111,   111,   233,   111,   109,   116,   237,   128,   129,
     235,   131,     1,   133,   134,   124,   233,   137,    52,   213,
     237,    93,   492,   142,   142,   135,    80,    35,   111,   138,
     233,    20,   136,   109,   237,    24,   146,   147,   235,   111,
     235,   151,     1,     1,   164,     3,   166,    52,     6,   235,
     170,   160,   169,    11,   174,   175,   176,   177,   169,    48,
     136,   181,   182,    52,   180,    23,    24,    25,    76,   189,
      75,    29,    61,    32,    33,    80,   122,   111,    67,   233,
      39,   180,     1,   237,   142,   235,   169,   111,   142,    47,
      83,   235,   235,    51,    52,    84,     1,   235,   218,   219,
       1,    83,   222,   111,   221,   113,   114,   227,   142,   234,
     220,   221,   232,   235,   234,   234,   234,    75,     1,    77,
     230,    22,   142,   112,   234,   234,   140,   234,    87,    88,
     234,   120,    90,    38,   139,    54,    55,    56,    97,    98,
     236,   236,   150,    62,   152,   169,   135,     1,    53,   221,
       4,   234,   233,   111,   143,   144,   237,   165,   117,   118,
     153,     1,   234,   221,    69,   236,   233,    72,    73,    52,
     237,   153,     1,   132,   236,    94,   234,   236,     1,   236,
     236,   139,   141,   172,   173,   236,    91,   236,   236,    43,
     235,   184,    46,   151,   236,   236,   236,   221,   206,   236,
     234,   221,   184,   161,   197,   236,    35,   236,   127,   235,
     234,   236,    52,   236,   115,    38,    45,     1,   688,   236,
     228,   229,   215,   216,   236,   236,   234,   220,   111,   234,
      53,   235,   221,   215,   216,    75,   236,   230,   220,    93,
      80,   142,    11,   140,    13,   234,    69,   140,   230,    72,
      73,   236,   236,   236,   233,     1,    25,   111,   236,   142,
      29,   236,     8,     9,   223,   224,   225,    13,    91,   236,
      54,    55,    56,    19,   236,   234,   234,   122,    62,   198,
      26,   236,   111,   236,    30,    31,   236,   236,   236,     1,
     236,    37,   236,   843,    40,    41,    42,   236,    44,   139,
     236,   236,   236,   236,    50,   236,   236,   226,   236,   236,
      94,   236,     1,   236,   236,   234,     5,   122,    64,    65,
      89,   236,    68,    35,   236,   236,   236,   236,    74,   234,
     236,   140,    78,    79,   236,    24,    82,   236,   236,    85,
      86,   236,   236,   127,   236,   236,   236,    36,   236,    95,
      96,   817,   818,   819,   820,   821,   102,   103,    47,   105,
     106,   107,   108,    52,    76,   835,   236,   221,   236,   236,
      59,   122,   842,   119,   236,   236,   236,    66,   236,   236,
     236,    70,   128,   129,   236,   131,   236,   133,   134,   236,
     236,   137,   236,   236,    83,   236,   233,   236,   236,   111,
     236,   113,   114,   236,   155,   156,   157,   158,   159,   236,
     236,   236,   236,     5,   198,   236,   236,     1,   164,   236,
     166,   236,   111,   236,   170,   236,   236,   116,   174,   175,
     176,   177,   236,   236,     5,   181,   182,   236,   150,   236,
     152,   236,   226,   189,    36,   236,   135,   236,    32,    33,
     236,   236,   178,   165,   236,    39,   236,   146,   147,   236,
     236,   122,   151,   122,   122,    36,   236,    59,   178,   178,
     178,   178,   218,   219,    66,   178,   222,   178,    70,    71,
     178,   227,   236,   236,   236,   178,   232,   236,    59,   122,
     178,    83,   122,   178,   206,    66,   178,   178,   122,    70,
      71,   140,     1,    87,    88,   199,   200,   201,   202,   203,
     204,   205,    83,    97,    98,   178,   228,   229,   122,   122,
     122,    20,   178,   178,   116,    24,   122,   140,   178,   121,
     140,   220,   221,   117,   118,   122,   122,   122,   130,   122,
     122,   230,   122,   178,   236,   116,   178,   178,   132,    48,
     236,   140,     1,    52,   146,   147,   148,   141,   178,   130,
     178,   178,    61,   178,   122,   233,   178,   178,    67,   178,
     178,   236,   236,     0,     1,   146,   147,   148,     5,    28,
     140,   140,   236,    10,   236,    84,   140,   236,   236,   236,
     236,   236,   140,   140,   140,    22,     1,    24,     3,   178,
      27,     6,   140,   140,   233,   233,    11,    34,   178,   236,
     236,   236,   178,   112,   178,   178,   208,   178,    23,    24,
      25,   120,    49,   140,    29,   178,   233,   140,   220,   140,
      57,    58,   140,    60,   140,   140,   135,   208,   230,   223,
     224,   225,    47,   140,   143,   144,    51,    52,   122,   220,
      99,   100,   101,   140,    81,   104,   140,   233,   236,   230,
      20,    21,   111,    20,    21,    92,    93,   236,   236,   178,
      75,   233,    77,   172,   173,   124,   233,   233,   140,   140,
     178,   236,   178,   110,   178,    90,   178,   178,    48,   138,
     178,    48,   122,   140,   140,   178,   140,   233,   233,   126,
     233,    61,   233,   233,    61,   233,   111,    67,   233,   233,
      67,   160,   233,   233,   233,   233,   183,   233,   233,   233,
     140,   233,   221,   233,    84,   140,   153,    84,   140,   236,
     140,   233,   236,   236,   139,   162,   163,   140,   233,   178,
     167,   168,   185,   186,   187,   188,   151,   190,   233,   192,
     193,   194,   112,   233,   197,   112,   161,   236,   236,   236,
     120,   121,   233,   120,   207,   208,   209,   210,   211,   212,
     236,   214,   236,   236,   217,   233,   185,   186,   187,   188,
     236,   190,   236,   192,   193,   194,   236,   140,   197,   140,
     140,   236,   140,   140,   154,   236,   236,   154,   207,   208,
     209,   210,   211,   212,   236,   214,   140,   236,   217,   122,
     236,   236,   236,   173,   236,   236,   173,   236,   236,   236,
     236,   249,   233,   236,   284,   233,   233,   233,   140,   233,
     140,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   140,   140,   233,   140,   236,   233,   233,
     236,   233,   140,   122,   233,   122,   122,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   122,
     233,   233,   140,   122,   122,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   233,   140,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   140,   233,   178,   236,   233,   236,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   140,   178,   178,   178,   140,   236,   140,   140,
     140,   140,   140,   140,   233,   178,   233,   233,   233,   145,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     140,   178,   178,   236,   178,   178,   178,   178,   140,   178,
     140,   178,   178,   140,   140,   178,   233,   233,   233,   233,
     122,   233,   233,   178,    71,   742,   236,   233,  1291,  1254,
     571,   233,   233,   233,   233,   233,   233,   233,   233,   233,
    1239,   233,   233,   233,  1149,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,  1061,  1196,   233,   320,
    1279,   482,   520,   233,  1281,   512,   600,  1231,   233,   170,
    1284,  1121,  1123,  1235,  1237,    92,    -1,    -1,    -1,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,    -1,   233,   233,   233,    -1,   358,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   364,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   372,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   264,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   458,    -1,    -1,    -1,    -1,    -1,
     437,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   239,     0,     1,     5,    10,    22,    24,    27,    34,
      49,    57,    58,    60,    81,    92,    93,   110,   126,   153,
     162,   163,   167,   168,   240,   245,   250,   264,   270,   281,
     309,   324,   337,   360,   367,   377,   386,   412,   418,   424,
     429,   439,   500,   516,   533,   233,   234,   235,   338,   235,
     310,   387,   419,   425,   430,   235,   501,   413,   325,   235,
     235,   282,   361,   235,   235,   368,   378,     1,    35,    45,
     111,   265,   266,   267,   268,   269,   235,     1,    32,    33,
      39,    87,    88,    97,    98,   117,   118,   132,   141,   223,
     224,   225,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   140,   311,
     315,   140,   388,   392,   235,   235,   235,     1,     8,     9,
      13,    19,    26,    30,    31,    37,    40,    41,    42,    44,
      50,    64,    65,    68,    74,    78,    79,    82,    85,    86,
      95,    96,   102,   103,   105,   106,   107,   108,   119,   128,
     129,   131,   133,   134,   137,   164,   166,   170,   174,   175,
     176,   177,   181,   182,   189,   218,   219,   222,   227,   232,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   491,   495,
     496,   497,   498,   499,   235,   235,   235,     1,    54,    55,
      56,    62,    94,   127,   198,   226,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,     1,   109,   136,   246,
     247,   248,   249,   140,   283,   287,   235,     1,    38,    53,
      69,    72,    73,    91,   534,   535,   536,   537,   538,   539,
     540,   541,     1,    35,    76,   111,   113,   114,   150,   152,
     165,   206,   228,   229,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   235,   235,   236,
     236,   236,   234,   266,     1,    20,    24,    48,    52,    61,
      67,    84,   112,   120,   135,   143,   144,   172,   173,   221,
     339,   340,   341,   342,   343,   344,   345,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   234,   518,   235,   235,     1,    80,   142,   420,   421,
     422,   423,     1,    80,   426,   427,   428,     1,    52,   111,
     142,   431,   435,   436,   437,   438,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   492,   236,   488,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   234,   441,
       1,     4,    43,    46,    93,   111,   221,   502,   503,   504,
     505,   506,   510,   511,   512,     1,   142,   221,   414,   415,
     416,   417,     1,    52,    75,    80,   139,   326,   330,   331,
     332,   335,   336,   236,   236,   236,   236,   236,   236,   236,
     236,   234,   272,   236,   236,   234,   247,   235,     1,    22,
     115,   142,   362,   363,   364,   365,   366,   236,   236,   236,
     236,   236,   236,   234,   535,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   234,   252,     1,   111,
     169,   221,   369,   370,   371,   372,   373,     1,   111,   169,
     379,   380,   381,   382,   140,   140,   140,   233,   236,   236,
     236,   346,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   234,   340,   122,   122,   178,   122,   242,
     242,   122,   122,   178,   178,   178,   178,   178,   178,   178,
     233,     1,    28,    99,   100,   101,   104,   111,   124,   138,
     160,   312,   313,   314,   316,   317,   318,   319,   320,   321,
     322,   323,     1,     3,     6,    11,    23,    24,    25,    29,
      47,    51,    52,    75,    77,    90,   111,   139,   151,   161,
     389,   390,   391,   393,   394,   395,   396,   397,   398,   399,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   236,
     236,   234,   421,   236,   234,   427,   432,   236,   236,   234,
     436,   178,   242,   178,   242,   122,   140,   122,   178,   178,
     178,   122,   140,   178,   122,   122,   122,   178,   242,   178,
     122,   140,   178,   122,   122,   122,   242,   122,   140,   122,
     122,   178,   236,   178,   236,   242,   242,   178,   140,   178,
     178,   178,   179,   178,   179,   178,   178,   242,   242,   122,
     244,   242,   178,   178,   178,   178,   233,   513,   236,   236,
     507,   236,   236,   234,   503,   236,   236,   234,   415,   327,
     236,   236,   236,   234,   331,   140,   140,   140,   140,   199,
     200,   201,   202,   203,   204,   205,   140,   140,   178,   233,
     140,   140,   233,     1,     5,    24,    36,    47,    52,    59,
      66,    70,    83,   111,   116,   135,   146,   147,   151,   220,
     221,   230,   284,   285,   286,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   236,   236,   236,   234,   363,   178,   178,   178,
     178,   178,   242,   233,   140,   178,   140,   140,   140,   140,
     140,   140,   122,   140,   140,   233,   236,   374,   236,   234,
     370,   236,   383,   234,   380,   233,   233,   233,   178,   140,
     178,   236,   178,   178,   178,   178,   178,   140,   122,   140,
     140,   178,   140,   233,   233,   233,   233,   155,   156,   157,
     158,   159,   241,   242,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   234,   313,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   400,   236,   236,   236,   236,
     236,   236,   236,   234,   390,   140,   140,   233,   140,   233,
     236,   140,   140,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   185,   186,   187,   188,   190,
     192,   193,   194,   197,   207,   208,   209,   210,   211,   212,
     214,   217,   493,   494,   233,   185,   186,   187,   188,   190,
     192,   193,   194,   197,   207,   208,   209,   210,   211,   212,
     214,   217,   489,   490,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,    14,    15,
      16,   243,   244,   233,   233,   233,   233,   233,   233,   236,
     242,   178,   236,   140,   140,   233,   140,   140,   233,   236,
     140,   140,   122,   333,   334,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   236,   236,   236,   236,   305,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     234,   285,   140,   140,   140,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   140,   236,   140,   233,   140,   236,   233,
     233,   233,   233,    20,    21,    48,    61,    67,    84,   112,
     120,   121,   154,   173,   347,   348,   349,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   241,   241,
     241,   241,   241,   242,   122,   122,   122,   122,   140,   122,
     242,   244,   233,   140,   195,   196,   178,   140,   140,   178,
     178,   178,   140,   236,   140,   140,   140,   140,   122,   140,
     140,   233,   233,   233,   233,   145,   433,   434,   233,   233,
     233,   237,   233,   237,   243,   243,   243,    12,   180,   514,
     515,   233,   233,    12,   180,   508,   509,   233,   233,   233,
     233,    69,   213,   328,   329,   233,   233,   183,   233,   237,
     178,   140,   178,   178,   236,   178,   178,   178,   178,   140,
     178,   140,   178,   178,   140,   178,   140,   178,   233,   233,
     233,   233,   233,    83,   153,   184,   215,   216,   220,   230,
     375,   376,   233,   233,    83,   153,   184,   197,   215,   216,
     220,   230,   384,   385,   349,   233,   237,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,    11,    13,    25,    29,
      89,   401,   402,   233,   233,   233,   233,   233,   233,   233,
     233,   237,   494,   490,   233,   237,   233,   237,   233,   237,
     122,   334,   233,   233,   233,   233,     5,    36,    59,    66,
      70,    71,    83,   116,   121,   130,   146,   147,   148,   208,
     220,   230,   306,   307,   308,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   237,
     233,   237,   348,   233,   237,   434,   515,   509,   329,   308,
     233,   237,   376,   385,   402,   307
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
  if (ypass == 2)
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

  case 135:
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

  case 136:
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

  case 137:
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

  case 138:
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

  case 139:
#line 1048 "ircd_parser.y"
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

  case 140:
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

  case 141:
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

  case 142:
#line 1112 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 143:
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

  case 144:
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

  case 145:
#line 1143 "ircd_parser.y"
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

  case 146:
#line 1154 "ircd_parser.y"
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

  case 147:
#line 1165 "ircd_parser.y"
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

  case 148:
#line 1176 "ircd_parser.y"
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

  case 149:
#line 1187 "ircd_parser.y"
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

  case 150:
#line 1198 "ircd_parser.y"
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

  case 151:
#line 1209 "ircd_parser.y"
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

  case 152:
#line 1220 "ircd_parser.y"
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

  case 153:
#line 1231 "ircd_parser.y"
    {
}
    break;

  case 157:
#line 1235 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 158:
#line 1236 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 159:
#line 1239 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 160:
#line 1246 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 161:
#line 1253 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 162:
#line 1260 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 163:
#line 1267 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 164:
#line 1274 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 165:
#line 1281 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 166:
#line 1288 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 167:
#line 1295 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 168:
#line 1302 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 169:
#line 1309 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 170:
#line 1316 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 171:
#line 1323 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 172:
#line 1330 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 173:
#line 1337 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 174:
#line 1350 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = (struct ClassItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 175:
#line 1357 "ircd_parser.y"
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

  case 190:
#line 1384 "ircd_parser.y"
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

  case 191:
#line 1430 "ircd_parser.y"
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

  case 192:
#line 1476 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 193:
#line 1482 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = (yyvsp[-1].number);
}
    break;

  case 194:
#line 1488 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 195:
#line 1494 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 196:
#line 1500 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 197:
#line 1506 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 198:
#line 1512 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = (yyvsp[-1].number);
}
    break;

  case 199:
#line 1518 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 200:
#line 1527 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    listener_address = NULL;
    listener_flags = 0;
  }
}
    break;

  case 201:
#line 1534 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 202:
#line 1543 "ircd_parser.y"
    {
}
    break;

  case 206:
#line 1548 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_SSL;
}
    break;

  case 207:
#line 1552 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_HIDDEN;
}
    break;

  case 218:
#line 1565 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    add_listener((yyvsp[0].number), listener_address, listener_flags);
    listener_flags = 0;
  }
}
    break;

  case 219:
#line 1572 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    int i;

    for (i = (yyvsp[-2].number); i <= (yyvsp[0].number); ++i)
      add_listener(i, listener_address, listener_flags);

    listener_flags = 0;
  }
}
    break;

  case 220:
#line 1585 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 221:
#line 1594 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 222:
#line 1606 "ircd_parser.y"
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

  case 223:
#line 1618 "ircd_parser.y"
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

  case 242:
#line 1688 "ircd_parser.y"
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

  case 243:
#line 1717 "ircd_parser.y"
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

  case 244:
#line 1730 "ircd_parser.y"
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

  case 245:
#line 1741 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 246:
#line 1750 "ircd_parser.y"
    {
}
    break;

  case 250:
#line 1754 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 251:
#line 1755 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 252:
#line 1758 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 253:
#line 1766 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 254:
#line 1773 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 255:
#line 1780 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 256:
#line 1787 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 257:
#line 1794 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 258:
#line 1801 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 259:
#line 1808 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 260:
#line 1815 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 261:
#line 1822 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 262:
#line 1831 "ircd_parser.y"
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

  case 263:
#line 1842 "ircd_parser.y"
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

  case 264:
#line 1853 "ircd_parser.y"
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

  case 265:
#line 1864 "ircd_parser.y"
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

  case 266:
#line 1875 "ircd_parser.y"
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

  case 267:
#line 1886 "ircd_parser.y"
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

  case 268:
#line 1898 "ircd_parser.y"
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

  case 269:
#line 1917 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 270:
#line 1927 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = (yyvsp[-1].number);
  }
}
    break;

  case 271:
#line 1936 "ircd_parser.y"
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

  case 272:
#line 1951 "ircd_parser.y"
    {
  if (ypass == 2)
    resv_reason = NULL;
}
    break;

  case 273:
#line 1955 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 280:
#line 1967 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 281:
#line 1976 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (IsChanPrefix(*yylval.string))
    {
      char def_reason[] = "No reason specified";

      create_channel_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
    }
  }
  /* ignore it for now.. but we really should make a warning if
   * its an erroneous name --fl_ */
}
    break;

  case 282:
#line 1991 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (clean_resv_nick(yylval.string))
    {
      char def_reason[] = "No reason specified";

      create_nick_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
    }
  }

  /* otherwise its erroneous, but ignore it for now */
}
    break;

  case 283:
#line 2009 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(ULINE_TYPE);
    yy_match_item = map_to_conf(yy_conf);
    yy_match_item->action = SHARED_ALL;
  }
}
    break;

  case 284:
#line 2017 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 291:
#line 2028 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 292:
#line 2037 "ircd_parser.y"
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

  case 293:
#line 2052 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 297:
#line 2059 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 298:
#line 2063 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 299:
#line 2067 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 300:
#line 2071 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 301:
#line 2075 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 302:
#line 2079 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 303:
#line 2083 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 304:
#line 2092 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_match_item = (struct MatchItem *)map_to_conf(yy_conf);
    yy_match_item->action = CLUSTER_ALL;
  }
}
    break;

  case 305:
#line 2100 "ircd_parser.y"
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

  case 311:
#line 2117 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 312:
#line 2123 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 316:
#line 2130 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_KLINE;
}
    break;

  case 317:
#line 2134 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNKLINE;
}
    break;

  case 318:
#line 2138 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_XLINE;
}
    break;

  case 319:
#line 2142 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNXLINE;
}
    break;

  case 320:
#line 2146 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_RESV;
}
    break;

  case 321:
#line 2150 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNRESV;
}
    break;

  case 322:
#line 2154 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_LOCOPS;
}
    break;

  case 323:
#line 2158 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = CLUSTER_ALL;
}
    break;

  case 324:
#line 2167 "ircd_parser.y"
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

  case 325:
#line 2185 "ircd_parser.y"
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

  case 348:
#line 2327 "ircd_parser.y"
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

  case 349:
#line 2339 "ircd_parser.y"
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

  case 350:
#line 2351 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 351:
#line 2360 "ircd_parser.y"
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

  case 352:
#line 2372 "ircd_parser.y"
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

  case 353:
#line 2384 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = (yyvsp[-1].number);
}
    break;

  case 354:
#line 2390 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 355:
#line 2394 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 356:
#line 2402 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 357:
#line 2411 "ircd_parser.y"
    {
}
    break;

  case 361:
#line 2416 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_LAZY_LINK;
}
    break;

  case 362:
#line 2420 "ircd_parser.y"
    {
  if (ypass == 2)
#ifndef HAVE_LIBZ
    yyerror("Ignoring flags = compressed; -- no zlib support");
#else
    yy_aconf->flags |= CONF_FLAGS_COMPRESSED;
#endif
}
    break;

  case 363:
#line 2428 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_CRYPTLINK;
}
    break;

  case 364:
#line 2432 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_ALLOW_AUTO_CONN;
}
    break;

  case 365:
#line 2436 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_BURST_AWAY;
}
    break;

  case 366:
#line 2442 "ircd_parser.y"
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

  case 367:
#line 2483 "ircd_parser.y"
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

  case 368:
#line 2494 "ircd_parser.y"
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

  case 369:
#line 2505 "ircd_parser.y"
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

  case 370:
#line 2520 "ircd_parser.y"
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

  case 371:
#line 2531 "ircd_parser.y"
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

  case 372:
#line 2544 "ircd_parser.y"
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

  case 373:
#line 2557 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 374:
#line 2566 "ircd_parser.y"
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

  case 375:
#line 2601 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(KLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 376:
#line 2608 "ircd_parser.y"
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

  case 382:
#line 2627 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    DupString(yy_aconf->host, yylval.string);
    split_user_host(yy_aconf->host, &yy_aconf->user, &yy_aconf->host);
  }
}
    break;

  case 383:
#line 2636 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 384:
#line 2648 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(DLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    /* default reason */
    DupString(yy_aconf->reason, "NO REASON");
  }
}
    break;

  case 385:
#line 2657 "ircd_parser.y"
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

  case 391:
#line 2673 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 392:
#line 2682 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 393:
#line 2694 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(EXEMPTDLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    DupString(yy_aconf->passwd, "*");
  }
}
    break;

  case 394:
#line 2702 "ircd_parser.y"
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

  case 399:
#line 2718 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 400:
#line 2730 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    gecos_flags = 0;
    gecos_reason[0] = gecos_name[0] = '\0';
  }
}
    break;

  case 401:
#line 2737 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (gecos_name[0])
    {
      regex_t *exp_p = NULL;
      int ecode = 0;

      if (gecos_flags & 1)
      {
        exp_p = MyMalloc(sizeof(regex_t));

        if ((ecode = regcomp(exp_p, gecos_name, REG_EXTENDED|REG_NOSUB)))
        {
          char errbuf[BUFSIZE];

          regerror(ecode, NULL, errbuf, sizeof(errbuf));

          MyFree(exp_p);
          ilog(L_ERROR, "Failed to add regular expression based X-Line: %s", errbuf);
          break;
        }

        yy_conf = make_conf_item(RXLINE_TYPE);
        yy_conf->regexpname = exp_p;
      }
      else
        yy_conf = make_conf_item(XLINE_TYPE);

      yy_match_item = map_to_conf(yy_conf);
      DupString(yy_conf->name, gecos_name);
      if (gecos_reason[0])
        DupString(yy_match_item->reason, gecos_reason);
      else
        DupString(yy_match_item->reason, "<No reason specified>");
    }
  }
}
    break;

  case 402:
#line 2777 "ircd_parser.y"
    {
}
    break;

  case 406:
#line 2782 "ircd_parser.y"
    {
  if (ypass == 2)
    gecos_flags |= 1;
}
    break;

  case 413:
#line 2791 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    gecos_name[0] = '\0';
    strlcpy(gecos_name, yylval.string, sizeof(gecos_reason));
  }
}
    break;

  case 414:
#line 2800 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    gecos_name[0] = '\0';
    strlcpy(gecos_reason, yylval.string, sizeof(gecos_name));
  }
}
    break;

  case 471:
#line 2848 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr = (yyvsp[-1].number);
}
    break;

  case 472:
#line 2854 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr6 = (yyvsp[-1].number);
}
    break;

  case 473:
#line 2860 "ircd_parser.y"
    {
  if (ypass == 1) /* must be set in the 1st pass */
    ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 474:
#line 2866 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
}
    break;

  case 475:
#line 2871 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 476:
#line 2876 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kill_chase_time_limit = (yyvsp[-1].number);
}
    break;

  case 477:
#line 2882 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 478:
#line 2888 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 479:
#line 2894 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 480:
#line 2900 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 481:
#line 2906 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 482:
#line 2912 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_time = (yyvsp[-1].number); 
}
    break;

  case 483:
#line 2918 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_changes = (yyvsp[-1].number);
}
    break;

  case 484:
#line 2924 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_accept = (yyvsp[-1].number);
}
    break;

  case 485:
#line 2930 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_spam_exit_message_time = (yyvsp[-1].number);
}
    break;

  case 486:
#line 2936 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_warn_delta = (yyvsp[-1].number);
}
    break;

  case 487:
#line 2942 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = (yyvsp[-1].number);
}
    break;

  case 488:
#line 2948 "ircd_parser.y"
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

  case 489:
#line 2959 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 490:
#line 2965 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 491:
#line 2974 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 492:
#line 2980 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 493:
#line 2986 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 494:
#line 2992 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 495:
#line 2996 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 496:
#line 3002 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 497:
#line 3006 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 498:
#line 3012 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait = (yyvsp[-1].number);
}
    break;

  case 499:
#line 3018 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.caller_id_wait = (yyvsp[-1].number);
}
    break;

  case 500:
#line 3024 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait_simple = (yyvsp[-1].number);
}
    break;

  case 501:
#line 3030 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 502:
#line 3036 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 503:
#line 3042 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 504:
#line 3048 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 505:
#line 3054 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
}
    break;

  case 506:
#line 3065 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.idletime = (yyvsp[-1].number);
}
    break;

  case 507:
#line 3071 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dots_in_ident = (yyvsp[-1].number);
}
    break;

  case 508:
#line 3077 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.maximum_links = (yyvsp[-1].number);
}
    break;

  case 509:
#line 3083 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_targets = (yyvsp[-1].number);
}
    break;

  case 510:
#line 3089 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 511:
#line 3098 "ircd_parser.y"
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

  case 512:
#line 3130 "ircd_parser.y"
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

  case 513:
#line 3148 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 514:
#line 3154 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 515:
#line 3163 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 516:
#line 3169 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 517:
#line 3174 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 518:
#line 3180 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 522:
#line 3187 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 523:
#line 3191 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 524:
#line 3195 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 525:
#line 3199 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 526:
#line 3203 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 527:
#line 3207 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 528:
#line 3211 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 529:
#line 3215 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 530:
#line 3219 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 531:
#line 3223 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 532:
#line 3227 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 533:
#line 3231 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 534:
#line 3235 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 535:
#line 3239 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 536:
#line 3243 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 537:
#line 3247 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 538:
#line 3251 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 539:
#line 3257 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 543:
#line 3264 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 544:
#line 3268 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 545:
#line 3272 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 546:
#line 3276 "ircd_parser.y"
    { 
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 547:
#line 3280 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 548:
#line 3284 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 549:
#line 3288 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 550:
#line 3292 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 551:
#line 3296 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 552:
#line 3300 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 553:
#line 3304 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 554:
#line 3308 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 555:
#line 3312 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 556:
#line 3316 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 557:
#line 3320 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 558:
#line 3324 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 559:
#line 3328 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 560:
#line 3334 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard = (yyvsp[-1].number);
}
    break;

  case 561:
#line 3340 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard_simple = (yyvsp[-1].number);
}
    break;

  case 562:
#line 3346 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.default_floodcount = (yyvsp[-1].number);
}
    break;

  case 563:
#line 3352 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.client_flood = (yyvsp[-1].number);
}
    break;

  case 564:
#line 3358 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 565:
#line 3367 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->flags = 0;
  }
}
    break;

  case 566:
#line 3375 "ircd_parser.y"
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

  case 576:
#line 3402 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 577:
#line 3408 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = (yyvsp[-1].number);
}
    break;

  case 578:
#line 3414 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 582:
#line 3420 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 583:
#line 3424 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 584:
#line 3430 "ircd_parser.y"
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

  case 585:
#line 3453 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 586:
#line 3462 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 587:
#line 3466 "ircd_parser.y"
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

  case 590:
#line 3506 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 591:
#line 3510 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 610:
#line 3539 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 611:
#line 3545 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_except = yylval.number;
}
    break;

  case 612:
#line 3551 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_invex = yylval.number;
}
    break;

  case 613:
#line 3557 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_knock = yylval.number;
}
    break;

  case 614:
#line 3563 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay = (yyvsp[-1].number);
}
    break;

  case 615:
#line 3569 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay_channel = (yyvsp[-1].number);
}
    break;

  case 616:
#line 3575 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 617:
#line 3581 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_chans_per_user = (yyvsp[-1].number);
}
    break;

  case 618:
#line 3587 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 619:
#line 3593 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_bans = (yyvsp[-1].number);
}
    break;

  case 620:
#line 3599 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_user_count = (yyvsp[-1].number);
}
    break;

  case 621:
#line 3605 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_server_count = (yyvsp[-1].number);
}
    break;

  case 622:
#line 3611 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 623:
#line 3617 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 634:
#line 3637 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 635:
#line 3643 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 636:
#line 3649 "ircd_parser.y"
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

  case 637:
#line 3663 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 638:
#line 3669 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 639:
#line 3675 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 1037 of yacc.c.  */
#line 6785 "y.tab.c"

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



