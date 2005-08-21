/* A Bison parser, made by GNU Bison 1.875d.  */

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
/* $Id: y.tab.c,v 7.60 2005/08/21 17:19:17 knight Exp $ */

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
     PACE_WAIT = 390,
     PACE_WAIT_SIMPLE = 391,
     PASSWORD = 392,
     PATH = 393,
     PING_COOKIE = 394,
     PING_TIME = 395,
     PORT = 396,
     QSTRING = 397,
     QUIET_ON_BAN = 398,
     REASON = 399,
     REDIRPORT = 400,
     REDIRSERV = 401,
     REGEX_T = 402,
     REHASH = 403,
     REMOTE = 404,
     REMOTEBAN = 405,
     RESTRICTED = 406,
     RSA_PRIVATE_KEY_FILE = 407,
     RSA_PUBLIC_KEY_FILE = 408,
     SSL_CERTIFICATE_FILE = 409,
     RESV = 410,
     RESV_EXEMPT = 411,
     SECONDS = 412,
     MINUTES = 413,
     HOURS = 414,
     DAYS = 415,
     WEEKS = 416,
     SENDQ = 417,
     SEND_PASSWORD = 418,
     SERVERHIDE = 419,
     SERVERINFO = 420,
     SERVLINK_PATH = 421,
     IRCD_SID = 422,
     TKLINE_EXPIRE_NOTICES = 423,
     T_SHARED = 424,
     T_CLUSTER = 425,
     TYPE = 426,
     SHORT_MOTD = 427,
     SILENT = 428,
     SPOOF = 429,
     SPOOF_NOTICE = 430,
     STATS_I_OPER_ONLY = 431,
     STATS_K_OPER_ONLY = 432,
     STATS_O_OPER_ONLY = 433,
     STATS_P_OPER_ONLY = 434,
     TBOOL = 435,
     TMASKED = 436,
     T_REJECT = 437,
     TS_MAX_DELTA = 438,
     TS_WARN_DELTA = 439,
     TWODOTS = 440,
     T_ALL = 441,
     T_BOTS = 442,
     T_SOFTCALLERID = 443,
     T_CALLERID = 444,
     T_CCONN = 445,
     T_CLIENT_FLOOD = 446,
     T_DEAF = 447,
     T_DEBUG = 448,
     T_DRONE = 449,
     T_EXTERNAL = 450,
     T_FULL = 451,
     T_INVISIBLE = 452,
     T_IPV4 = 453,
     T_IPV6 = 454,
     T_LOCOPS = 455,
     T_LOGPATH = 456,
     T_L_CRIT = 457,
     T_L_DEBUG = 458,
     T_L_ERROR = 459,
     T_L_INFO = 460,
     T_L_NOTICE = 461,
     T_L_TRACE = 462,
     T_L_WARN = 463,
     T_MAX_CLIENTS = 464,
     T_NCHANGE = 465,
     T_OPERWALL = 466,
     T_REJ = 467,
     T_SERVNOTICE = 468,
     T_SKILL = 469,
     T_SPY = 470,
     T_SSL = 471,
     T_UNAUTH = 472,
     T_UNRESV = 473,
     T_UNXLINE = 474,
     T_WALLOP = 475,
     THROTTLE_TIME = 476,
     TOPICBURST = 477,
     TRUE_NO_OPER_FLOOD = 478,
     TKLINE = 479,
     TXLINE = 480,
     TRESV = 481,
     UNKLINE = 482,
     USER = 483,
     USE_EGD = 484,
     USE_EXCEPT = 485,
     USE_INVEX = 486,
     USE_KNOCK = 487,
     USE_LOGGING = 488,
     USE_WHOIS_ACTUALLY = 489,
     VHOST = 490,
     VHOST6 = 491,
     XLINE = 492,
     WARN = 493,
     WARN_NO_NLINE = 494
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
#define PACE_WAIT 390
#define PACE_WAIT_SIMPLE 391
#define PASSWORD 392
#define PATH 393
#define PING_COOKIE 394
#define PING_TIME 395
#define PORT 396
#define QSTRING 397
#define QUIET_ON_BAN 398
#define REASON 399
#define REDIRPORT 400
#define REDIRSERV 401
#define REGEX_T 402
#define REHASH 403
#define REMOTE 404
#define REMOTEBAN 405
#define RESTRICTED 406
#define RSA_PRIVATE_KEY_FILE 407
#define RSA_PUBLIC_KEY_FILE 408
#define SSL_CERTIFICATE_FILE 409
#define RESV 410
#define RESV_EXEMPT 411
#define SECONDS 412
#define MINUTES 413
#define HOURS 414
#define DAYS 415
#define WEEKS 416
#define SENDQ 417
#define SEND_PASSWORD 418
#define SERVERHIDE 419
#define SERVERINFO 420
#define SERVLINK_PATH 421
#define IRCD_SID 422
#define TKLINE_EXPIRE_NOTICES 423
#define T_SHARED 424
#define T_CLUSTER 425
#define TYPE 426
#define SHORT_MOTD 427
#define SILENT 428
#define SPOOF 429
#define SPOOF_NOTICE 430
#define STATS_I_OPER_ONLY 431
#define STATS_K_OPER_ONLY 432
#define STATS_O_OPER_ONLY 433
#define STATS_P_OPER_ONLY 434
#define TBOOL 435
#define TMASKED 436
#define T_REJECT 437
#define TS_MAX_DELTA 438
#define TS_WARN_DELTA 439
#define TWODOTS 440
#define T_ALL 441
#define T_BOTS 442
#define T_SOFTCALLERID 443
#define T_CALLERID 444
#define T_CCONN 445
#define T_CLIENT_FLOOD 446
#define T_DEAF 447
#define T_DEBUG 448
#define T_DRONE 449
#define T_EXTERNAL 450
#define T_FULL 451
#define T_INVISIBLE 452
#define T_IPV4 453
#define T_IPV6 454
#define T_LOCOPS 455
#define T_LOGPATH 456
#define T_L_CRIT 457
#define T_L_DEBUG 458
#define T_L_ERROR 459
#define T_L_INFO 460
#define T_L_NOTICE 461
#define T_L_TRACE 462
#define T_L_WARN 463
#define T_MAX_CLIENTS 464
#define T_NCHANGE 465
#define T_OPERWALL 466
#define T_REJ 467
#define T_SERVNOTICE 468
#define T_SKILL 469
#define T_SPY 470
#define T_SSL 471
#define T_UNAUTH 472
#define T_UNRESV 473
#define T_UNXLINE 474
#define T_WALLOP 475
#define THROTTLE_TIME 476
#define TOPICBURST 477
#define TRUE_NO_OPER_FLOOD 478
#define TKLINE 479
#define TXLINE 480
#define TRESV 481
#define UNKLINE 482
#define USER 483
#define USE_EGD 484
#define USE_EXCEPT 485
#define USE_INVEX 486
#define USE_KNOCK 487
#define USE_LOGGING 488
#define USE_WHOIS_ACTUALLY 489
#define VHOST 490
#define VHOST6 491
#define XLINE 492
#define WARN 493
#define WARN_NO_NLINE 494




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
/* Line 191 of yacc.c.  */
#line 666 "y.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 678 "y.tab.c"

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
#define YYLAST   1309

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  245
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  313
/* YYNRULES -- Number of rules. */
#define YYNRULES  666
/* YYNRULES -- Number of states. */
#define YYNSTATES  1352

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   494

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   244,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   240,
       2,   243,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   242,     2,   241,     2,     2,     2,     2,
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
     235,   236,   237,   238,   239
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
    1456,  1458,  1460,  1462,  1467,  1472,  1477,  1482,  1487,  1492,
    1497,  1502,  1507,  1512,  1517,  1522,  1527,  1532,  1537,  1542,
    1547,  1552,  1557,  1562,  1567,  1572,  1577,  1582,  1587,  1592,
    1597,  1602,  1607,  1612,  1617,  1622,  1627,  1632,  1637,  1642,
    1647,  1652,  1657,  1662,  1667,  1672,  1677,  1682,  1687,  1692,
    1697,  1702,  1703,  1709,  1713,  1715,  1717,  1719,  1721,  1723,
    1725,  1727,  1729,  1731,  1733,  1735,  1737,  1739,  1741,  1743,
    1745,  1747,  1749,  1751,  1752,  1758,  1762,  1764,  1766,  1768,
    1770,  1772,  1774,  1776,  1778,  1780,  1782,  1784,  1786,  1788,
    1790,  1792,  1794,  1796,  1798,  1800,  1805,  1810,  1815,  1820,
    1825,  1826,  1833,  1836,  1838,  1840,  1842,  1844,  1846,  1848,
    1850,  1852,  1857,  1862,  1863,  1869,  1873,  1875,  1877,  1879,
    1884,  1889,  1890,  1896,  1900,  1902,  1904,  1906,  1912,  1915,
    1917,  1919,  1921,  1923,  1925,  1927,  1929,  1931,  1933,  1935,
    1937,  1939,  1941,  1943,  1945,  1947,  1949,  1954,  1959,  1964,
    1969,  1974,  1979,  1984,  1989,  1994,  1999,  2004,  2009,  2014,
    2019,  2024,  2030,  2033,  2035,  2037,  2039,  2041,  2043,  2045,
    2047,  2049,  2054,  2059,  2064,  2069,  2074
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     246,     0,    -1,    -1,   246,   247,    -1,   271,    -1,   277,
      -1,   288,    -1,   531,    -1,   317,    -1,   332,    -1,   345,
      -1,   257,    -1,   549,    -1,   369,    -1,   376,    -1,   386,
      -1,   395,    -1,   422,    -1,   432,    -1,   438,    -1,   453,
      -1,   515,    -1,   443,    -1,   252,    -1,     1,   240,    -1,
       1,   241,    -1,    -1,   249,    -1,   124,   248,    -1,   124,
     157,   248,    -1,   124,   158,   248,    -1,   124,   159,   248,
      -1,   124,   160,   248,    -1,   124,   161,   248,    -1,    -1,
     251,    -1,   124,   250,    -1,   124,    15,   250,    -1,   124,
      16,   250,    -1,   124,    17,   250,    -1,   112,   242,   253,
     241,   240,    -1,   253,   254,    -1,   254,    -1,   255,    -1,
     256,    -1,     1,   240,    -1,   111,   243,   142,   240,    -1,
     138,   243,   142,   240,    -1,   165,   242,   258,   241,   240,
      -1,   258,   259,    -1,   259,    -1,   262,    -1,   267,    -1,
     270,    -1,   264,    -1,   265,    -1,   266,    -1,   269,    -1,
     261,    -1,   268,    -1,   263,    -1,   260,    -1,     1,   240,
      -1,   154,   243,   142,   240,    -1,   152,   243,   142,   240,
      -1,   113,   243,   142,   240,    -1,   167,   243,   142,   240,
      -1,    37,   243,   142,   240,    -1,   116,   243,   142,   240,
      -1,   115,   243,   142,   240,    -1,   235,   243,   142,   240,
      -1,   236,   243,   142,   240,    -1,   209,   243,   124,   240,
      -1,    78,   243,   180,   240,    -1,     5,   242,   272,   241,
     240,    -1,   272,   273,    -1,   273,    -1,   274,    -1,   276,
      -1,   275,    -1,     1,   240,    -1,   113,   243,   142,   240,
      -1,    47,   243,   142,   240,    -1,    37,   243,   142,   240,
      -1,    95,   242,   278,   241,   240,    -1,   278,   279,    -1,
     279,    -1,   280,    -1,   281,    -1,   282,    -1,   286,    -1,
     287,    -1,   283,    -1,   285,    -1,   284,    -1,     1,   240,
      -1,   201,   243,   142,   240,    -1,   129,   243,   142,   240,
      -1,    64,   243,   142,   240,    -1,    58,   243,   142,   240,
      -1,    56,   243,   142,   240,    -1,    57,   243,   142,   240,
      -1,    96,   243,   202,   240,    -1,    96,   243,   204,   240,
      -1,    96,   243,   208,   240,    -1,    96,   243,   206,   240,
      -1,    96,   243,   207,   240,    -1,    96,   243,   205,   240,
      -1,    96,   243,   203,   240,    -1,   233,   243,   180,   240,
      -1,    -1,   128,   289,   290,   242,   291,   241,   240,    -1,
      -1,   294,    -1,   291,   292,    -1,   292,    -1,   293,    -1,
     295,    -1,   296,    -1,   298,    -1,   300,    -1,   301,    -1,
     302,    -1,   304,    -1,   305,    -1,   306,    -1,   307,    -1,
     308,    -1,   303,    -1,   309,    -1,   310,    -1,   311,    -1,
     297,    -1,   299,    -1,   312,    -1,     1,   240,    -1,   113,
     243,   142,   240,    -1,   142,    -1,   228,   243,   142,   240,
      -1,   137,   243,   142,   240,    -1,    49,   243,   180,   240,
      -1,    72,   243,   180,   240,    -1,   153,   243,   142,   240,
      -1,    26,   243,   142,   240,    -1,    68,   243,   180,   240,
      -1,   149,   243,   180,   240,    -1,   150,   243,   180,   240,
      -1,    85,   243,   180,   240,    -1,   237,   243,   180,   240,
      -1,   227,   243,   180,   240,    -1,    61,   243,   180,   240,
      -1,   118,   243,   180,   240,    -1,    38,   243,   180,   240,
      -1,   148,   243,   180,   240,    -1,     5,   243,   180,   240,
      -1,    -1,    54,   313,   243,   314,   240,    -1,   314,   244,
     315,    -1,   315,    -1,   123,   316,    -1,   316,    -1,    68,
      -1,   149,    -1,    85,    -1,   227,    -1,   237,    -1,    61,
      -1,    38,    -1,   148,    -1,     5,    -1,    72,    -1,   118,
      -1,   211,    -1,   132,    -1,    73,    -1,   150,    -1,    49,
      -1,    -1,    26,   318,   319,   242,   320,   241,   240,    -1,
      -1,   323,    -1,   320,   321,    -1,   321,    -1,   322,    -1,
     324,    -1,   325,    -1,   326,    -1,   327,    -1,   328,    -1,
     329,    -1,   330,    -1,   331,    -1,     1,   240,    -1,   113,
     243,   142,   240,    -1,   142,    -1,   140,   243,   249,   240,
      -1,   126,   243,   124,   240,    -1,    30,   243,   249,   240,
      -1,   106,   243,   124,   240,    -1,   101,   243,   124,   240,
      -1,   103,   243,   124,   240,    -1,   102,   243,   124,   240,
      -1,   162,   243,   251,   240,    -1,    -1,    94,   333,   242,
     338,   241,   240,    -1,    -1,    54,   335,   243,   336,   240,
      -1,   336,   244,   337,    -1,   337,    -1,   216,    -1,    71,
      -1,   338,   339,    -1,   339,    -1,   340,    -1,   334,    -1,
     343,    -1,   344,    -1,     1,   240,    -1,   141,   243,   341,
     240,    -1,   341,   244,   342,    -1,   342,    -1,   124,    -1,
     124,   185,   124,    -1,    82,   243,   142,   240,    -1,    77,
     243,   142,   240,    -1,    -1,    10,   346,   242,   347,   241,
     240,    -1,   347,   348,    -1,   348,    -1,   349,    -1,   350,
      -1,   352,    -1,   354,    -1,   359,    -1,   360,    -1,   361,
      -1,   363,    -1,   364,    -1,   365,    -1,   351,    -1,   366,
      -1,   367,    -1,   362,    -1,   368,    -1,   353,    -1,     1,
     240,    -1,   228,   243,   142,   240,    -1,   137,   243,   142,
     240,    -1,   175,   243,   180,   240,    -1,    26,   243,   142,
     240,    -1,    49,   243,   180,   240,    -1,    -1,    54,   355,
     243,   356,   240,    -1,   356,   244,   357,    -1,   357,    -1,
     123,   358,    -1,   358,    -1,   175,    -1,    50,    -1,    86,
      -1,    69,    -1,    22,    -1,    23,    -1,   122,    -1,    63,
      -1,   156,    -1,   114,    -1,    86,   243,   180,   240,    -1,
      69,   243,   180,   240,    -1,    50,   243,   180,   240,    -1,
      22,   243,   180,   240,    -1,   122,   243,   180,   240,    -1,
      63,   243,   180,   240,    -1,   174,   243,   142,   240,    -1,
     146,   243,   142,   240,    -1,   145,   243,   124,   240,    -1,
     114,   243,   180,   240,    -1,    -1,   155,   370,   242,   371,
     241,   240,    -1,   371,   372,    -1,   372,    -1,   373,    -1,
     374,    -1,   375,    -1,     1,   240,    -1,   144,   243,   142,
     240,    -1,    24,   243,   142,   240,    -1,   117,   243,   142,
     240,    -1,    -1,   169,   377,   242,   378,   241,   240,    -1,
     378,   379,    -1,   379,    -1,   380,    -1,   381,    -1,   382,
      -1,     1,   240,    -1,   113,   243,   142,   240,    -1,   228,
     243,   142,   240,    -1,    -1,   171,   383,   243,   384,   240,
      -1,   384,   244,   385,    -1,   385,    -1,    85,    -1,   224,
      -1,   227,    -1,   237,    -1,   225,    -1,   219,    -1,   155,
      -1,   226,    -1,   218,    -1,   200,    -1,   186,    -1,    -1,
     170,   387,   242,   388,   241,   240,    -1,   388,   389,    -1,
     389,    -1,   390,    -1,   391,    -1,     1,   240,    -1,   113,
     243,   142,   240,    -1,    -1,   171,   392,   243,   393,   240,
      -1,   393,   244,   394,    -1,   394,    -1,    85,    -1,   224,
      -1,   227,    -1,   237,    -1,   225,    -1,   219,    -1,   155,
      -1,   226,    -1,   218,    -1,   200,    -1,   186,    -1,    -1,
      29,   396,   397,   242,   398,   241,   240,    -1,    -1,   401,
      -1,   398,   399,    -1,   399,    -1,   400,    -1,   402,    -1,
     403,    -1,   404,    -1,   405,    -1,   406,    -1,   407,    -1,
     408,    -1,   418,    -1,   419,    -1,   420,    -1,   417,    -1,
     414,    -1,   416,    -1,   415,    -1,   413,    -1,   421,    -1,
       1,   240,    -1,   113,   243,   142,   240,    -1,   142,    -1,
      77,   243,   142,   240,    -1,   163,   243,   142,   240,    -1,
       3,   243,   142,   240,    -1,   141,   243,   124,   240,    -1,
       6,   243,   198,   240,    -1,     6,   243,   199,   240,    -1,
      53,   243,   142,   240,    -1,    -1,    54,   409,   243,   410,
     240,    -1,   410,   244,   411,    -1,   411,    -1,   123,   412,
      -1,   412,    -1,    91,    -1,    27,    -1,    31,    -1,    11,
      -1,    13,    -1,   222,    -1,   153,   243,   142,   240,    -1,
      49,   243,   180,   240,    -1,    31,   243,   180,   240,    -1,
      27,   243,   180,   240,    -1,    11,   243,   180,   240,    -1,
      79,   243,   142,   240,    -1,    92,   243,   142,   240,    -1,
      26,   243,   142,   240,    -1,    25,   243,   142,   240,    -1,
      -1,    83,   423,   242,   428,   241,   240,    -1,    -1,   171,
     425,   243,   426,   240,    -1,   426,   244,   427,    -1,   427,
      -1,   147,    -1,   428,   429,    -1,   429,    -1,   430,    -1,
     431,    -1,   424,    -1,     1,    -1,   228,   243,   142,   240,
      -1,   144,   243,   142,   240,    -1,    -1,    36,   433,   242,
     434,   241,   240,    -1,   434,   435,    -1,   435,    -1,   436,
      -1,   437,    -1,     1,    -1,    82,   243,   142,   240,    -1,
     144,   243,   142,   240,    -1,    -1,    51,   439,   242,   440,
     241,   240,    -1,   440,   441,    -1,   441,    -1,   442,    -1,
       1,    -1,    82,   243,   142,   240,    -1,    -1,    59,   444,
     242,   449,   241,   240,    -1,    -1,   171,   446,   243,   447,
     240,    -1,   447,   244,   448,    -1,   448,    -1,   147,    -1,
     449,   450,    -1,   450,    -1,   451,    -1,   452,    -1,   445,
      -1,     1,    -1,   113,   243,   142,   240,    -1,   144,   243,
     142,   240,    -1,    60,   242,   454,   241,   240,    -1,   454,
     455,    -1,   455,    -1,   462,    -1,   463,    -1,   465,    -1,
     466,    -1,   467,    -1,   468,    -1,   469,    -1,   470,    -1,
     471,    -1,   472,    -1,   461,    -1,   474,    -1,   475,    -1,
     476,    -1,   491,    -1,   477,    -1,   479,    -1,   481,    -1,
     480,    -1,   484,    -1,   478,    -1,   485,    -1,   486,    -1,
     487,    -1,   488,    -1,   490,    -1,   492,    -1,   489,    -1,
     506,    -1,   493,    -1,   497,    -1,   498,    -1,   502,    -1,
     482,    -1,   483,    -1,   512,    -1,   510,    -1,   511,    -1,
     494,    -1,   464,    -1,   495,    -1,   496,    -1,   513,    -1,
     501,    -1,   473,    -1,   514,    -1,   499,    -1,   500,    -1,
     458,    -1,   460,    -1,   456,    -1,   457,    -1,   459,    -1,
       1,    -1,    66,   243,   124,   240,    -1,    67,   243,   124,
     240,    -1,    13,   243,   180,   240,    -1,   234,   243,   180,
     240,    -1,   168,   243,   180,   240,    -1,    84,   243,   124,
     240,    -1,    76,   243,   180,   240,    -1,    81,   243,   180,
     240,    -1,    42,   243,   180,   240,    -1,    52,   243,   180,
     240,    -1,     8,   243,   180,   240,    -1,   105,   243,   249,
     240,    -1,   104,   243,   124,   240,    -1,    98,   243,   124,
     240,    -1,     9,   243,   249,   240,    -1,   184,   243,   249,
     240,    -1,   183,   243,   249,   240,    -1,    70,   243,   124,
     240,    -1,    88,   243,   180,   240,    -1,    87,   243,   142,
     240,    -1,   239,   243,   180,   240,    -1,   178,   243,   180,
     240,    -1,   179,   243,   180,   240,    -1,   177,   243,   180,
     240,    -1,   177,   243,   181,   240,    -1,   176,   243,   180,
     240,    -1,   176,   243,   181,   240,    -1,   135,   243,   249,
     240,    -1,    20,   243,   249,   240,    -1,    21,   243,   180,
     240,    -1,   136,   243,   249,   240,    -1,   172,   243,   180,
     240,    -1,   121,   243,   180,   240,    -1,   223,   243,   180,
     240,    -1,   131,   243,   180,   240,    -1,   108,   243,   142,
     240,    -1,    80,   243,   249,   240,    -1,    44,   243,   124,
     240,    -1,    97,   243,   124,   240,    -1,   107,   243,   124,
     240,    -1,   166,   243,   142,   240,    -1,    32,   243,   142,
     240,    -1,    28,   243,   124,   240,    -1,   229,   243,   180,
     240,    -1,    46,   243,   142,   240,    -1,   139,   243,   180,
     240,    -1,    39,   243,   180,   240,    -1,   221,   243,   249,
     240,    -1,    -1,   133,   503,   243,   504,   240,    -1,   504,
     244,   505,    -1,   505,    -1,   187,    -1,   190,    -1,   192,
      -1,   193,    -1,   196,    -1,   214,    -1,   210,    -1,   212,
      -1,   217,    -1,   215,    -1,   195,    -1,   211,    -1,   213,
      -1,   197,    -1,   220,    -1,   188,    -1,   189,    -1,   200,
      -1,    -1,   130,   507,   243,   508,   240,    -1,   508,   244,
     509,    -1,   509,    -1,   187,    -1,   190,    -1,   192,    -1,
     193,    -1,   196,    -1,   214,    -1,   210,    -1,   212,    -1,
     217,    -1,   215,    -1,   195,    -1,   211,    -1,   213,    -1,
     197,    -1,   220,    -1,   188,    -1,   189,    -1,   200,    -1,
     109,   243,   124,   240,    -1,   110,   243,   124,   240,    -1,
      33,   243,   124,   240,    -1,   191,   243,   251,   240,    -1,
      43,   243,   180,   240,    -1,    -1,    62,   516,   242,   517,
     241,   240,    -1,   517,   518,    -1,   518,    -1,   519,    -1,
     520,    -1,   521,    -1,   525,    -1,   526,    -1,   527,    -1,
       1,    -1,    48,   243,   180,   240,    -1,    45,   243,   249,
     240,    -1,    -1,    95,   522,   243,   523,   240,    -1,   523,
     244,   524,    -1,   524,    -1,   182,    -1,    12,    -1,   228,
     243,   142,   240,    -1,   113,   243,   142,   240,    -1,    -1,
       4,   528,   243,   529,   240,    -1,   529,   244,   530,    -1,
     530,    -1,   182,    -1,    12,    -1,    24,   242,   532,   241,
     240,    -1,   532,   533,    -1,   533,    -1,   534,    -1,   535,
      -1,   536,    -1,   537,    -1,   543,    -1,   538,    -1,   539,
      -1,   540,    -1,   541,    -1,   542,    -1,   544,    -1,   545,
      -1,   546,    -1,   547,    -1,   548,    -1,     1,    -1,    41,
     243,   180,   240,    -1,   230,   243,   180,   240,    -1,   231,
     243,   180,   240,    -1,   232,   243,   180,   240,    -1,    89,
     243,   249,   240,    -1,    90,   243,   249,   240,    -1,   134,
     243,   180,   240,    -1,   100,   243,   124,   240,    -1,   143,
     243,   180,   240,    -1,    99,   243,   124,   240,    -1,    35,
     243,   124,   240,    -1,    34,   243,   124,   240,    -1,   119,
     243,   180,   240,    -1,   120,   243,   180,   240,    -1,    14,
     243,   180,   240,    -1,   164,   242,   550,   241,   240,    -1,
     550,   551,    -1,   551,    -1,   552,    -1,   553,    -1,   554,
      -1,   556,    -1,   555,    -1,   557,    -1,     1,    -1,    55,
     243,   180,   240,    -1,    75,   243,   180,   240,    -1,    93,
     243,   249,   240,    -1,    71,   243,   180,   240,    -1,    40,
     243,   180,   240,    -1,    74,   243,   180,   240,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   375,   375,   376,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   404,   404,   405,   409,
     413,   417,   421,   425,   431,   431,   432,   433,   434,   435,
     442,   445,   445,   446,   446,   446,   448,   465,   476,   479,
     480,   481,   481,   482,   482,   483,   483,   484,   485,   485,
     486,   486,   487,   489,   523,   583,   597,   615,   624,   638,
     647,   675,   705,   721,   771,   773,   773,   774,   774,   775,
     775,   777,   786,   795,   808,   810,   811,   813,   813,   814,
     814,   815,   815,   816,   816,   817,   819,   823,   827,   831,
     838,   845,   852,   856,   860,   864,   868,   872,   876,   882,
     892,   891,   984,   984,   985,   985,   986,   986,   986,   986,
     987,   987,   987,   988,   988,   988,   989,   989,   989,   990,
     990,   990,   991,   991,   992,   992,   994,  1006,  1018,  1037,
    1049,  1060,  1071,  1113,  1122,  1133,  1144,  1155,  1166,  1177,
    1188,  1199,  1210,  1221,  1232,  1244,  1243,  1247,  1247,  1248,
    1249,  1251,  1258,  1265,  1272,  1279,  1286,  1293,  1300,  1307,
    1314,  1321,  1328,  1335,  1342,  1349,  1356,  1370,  1369,  1389,
    1389,  1391,  1391,  1392,  1393,  1394,  1395,  1396,  1397,  1398,
    1399,  1400,  1401,  1403,  1449,  1495,  1501,  1507,  1513,  1519,
    1525,  1531,  1537,  1547,  1546,  1563,  1562,  1566,  1566,  1567,
    1571,  1577,  1577,  1578,  1578,  1578,  1578,  1578,  1580,  1582,
    1582,  1584,  1599,  1621,  1630,  1643,  1642,  1711,  1711,  1712,
    1712,  1712,  1712,  1713,  1713,  1714,  1714,  1714,  1715,  1715,
    1716,  1716,  1716,  1717,  1717,  1717,  1719,  1738,  1751,  1762,
    1771,  1783,  1782,  1786,  1786,  1787,  1788,  1790,  1798,  1805,
    1812,  1819,  1826,  1833,  1840,  1847,  1854,  1863,  1874,  1885,
    1896,  1907,  1918,  1930,  1949,  1959,  1968,  1984,  1983,  1999,
    1999,  2000,  2000,  2000,  2000,  2002,  2011,  2026,  2040,  2039,
    2055,  2055,  2056,  2056,  2056,  2056,  2058,  2067,  2076,  2075,
    2081,  2081,  2082,  2086,  2090,  2094,  2098,  2102,  2106,  2110,
    2114,  2118,  2122,  2132,  2131,  2148,  2148,  2149,  2149,  2149,
    2151,  2158,  2157,  2163,  2163,  2164,  2168,  2172,  2176,  2180,
    2184,  2188,  2192,  2196,  2200,  2204,  2214,  2213,  2363,  2363,
    2364,  2364,  2365,  2365,  2365,  2366,  2366,  2366,  2367,  2367,
    2367,  2368,  2368,  2368,  2369,  2369,  2369,  2370,  2370,  2371,
    2373,  2385,  2397,  2406,  2418,  2430,  2436,  2440,  2448,  2458,
    2457,  2461,  2461,  2462,  2463,  2465,  2472,  2483,  2490,  2497,
    2504,  2514,  2555,  2566,  2577,  2592,  2603,  2616,  2629,  2638,
    2674,  2673,  2745,  2744,  2748,  2748,  2749,  2755,  2755,  2756,
    2756,  2756,  2756,  2758,  2774,  2784,  2783,  2805,  2805,  2806,
    2806,  2806,  2808,  2817,  2830,  2829,  2850,  2850,  2851,  2851,
    2853,  2866,  2865,  2916,  2915,  2919,  2919,  2920,  2926,  2926,
    2927,  2927,  2927,  2927,  2929,  2935,  2944,  2947,  2947,  2948,
    2948,  2949,  2949,  2950,  2950,  2951,  2951,  2952,  2952,  2953,
    2953,  2954,  2955,  2955,  2956,  2956,  2957,  2957,  2958,  2958,
    2959,  2959,  2960,  2960,  2961,  2961,  2962,  2963,  2963,  2964,
    2964,  2965,  2965,  2966,  2966,  2967,  2967,  2968,  2968,  2969,
    2970,  2970,  2971,  2971,  2972,  2972,  2973,  2973,  2974,  2974,
    2975,  2975,  2976,  2980,  2986,  2992,  2998,  3003,  3008,  3014,
    3020,  3026,  3032,  3038,  3044,  3050,  3056,  3062,  3068,  3074,
    3080,  3091,  3097,  3106,  3112,  3118,  3124,  3128,  3134,  3138,
    3144,  3150,  3156,  3162,  3168,  3174,  3180,  3186,  3192,  3203,
    3209,  3215,  3221,  3227,  3236,  3268,  3286,  3292,  3301,  3307,
    3312,  3319,  3318,  3324,  3324,  3325,  3329,  3333,  3337,  3341,
    3345,  3349,  3353,  3357,  3361,  3365,  3369,  3373,  3377,  3381,
    3385,  3389,  3393,  3400,  3399,  3405,  3405,  3406,  3410,  3414,
    3418,  3422,  3426,  3430,  3434,  3438,  3442,  3446,  3450,  3454,
    3458,  3462,  3466,  3470,  3474,  3480,  3486,  3492,  3498,  3504,
    3514,  3513,  3539,  3539,  3540,  3541,  3542,  3543,  3544,  3545,
    3546,  3548,  3554,  3561,  3560,  3565,  3565,  3566,  3570,  3576,
    3595,  3605,  3604,  3647,  3647,  3648,  3652,  3661,  3664,  3664,
    3665,  3666,  3667,  3668,  3669,  3670,  3671,  3672,  3673,  3674,
    3675,  3676,  3677,  3678,  3679,  3680,  3682,  3688,  3694,  3700,
    3706,  3712,  3718,  3724,  3730,  3736,  3742,  3748,  3754,  3760,
    3766,  3775,  3778,  3778,  3779,  3779,  3780,  3781,  3782,  3783,
    3784,  3786,  3792,  3798,  3812,  3818,  3824
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
  "INVITE_OPS_ONLY", "PACE_WAIT", "PACE_WAIT_SIMPLE", "PASSWORD", "PATH",
  "PING_COOKIE", "PING_TIME", "PORT", "QSTRING", "QUIET_ON_BAN", "REASON",
  "REDIRPORT", "REDIRSERV", "REGEX_T", "REHASH", "REMOTE", "REMOTEBAN",
  "RESTRICTED", "RSA_PRIVATE_KEY_FILE", "RSA_PUBLIC_KEY_FILE",
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
      59,   125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   245,   246,   246,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   248,   248,   249,   249,
     249,   249,   249,   249,   250,   250,   251,   251,   251,   251,
     252,   253,   253,   254,   254,   254,   255,   256,   257,   258,
     258,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   259,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   272,   273,   273,   273,
     273,   274,   275,   276,   277,   278,   278,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   280,   281,   282,   283,
     284,   285,   286,   286,   286,   286,   286,   286,   286,   287,
     289,   288,   290,   290,   291,   291,   292,   292,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   292,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   313,   312,   314,   314,   315,
     315,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   318,   317,   319,
     319,   320,   320,   321,   321,   321,   321,   321,   321,   321,
     321,   321,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   333,   332,   335,   334,   336,   336,   337,
     337,   338,   338,   339,   339,   339,   339,   339,   340,   341,
     341,   342,   342,   343,   344,   346,   345,   347,   347,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   349,   350,   351,   352,
     353,   355,   354,   356,   356,   357,   357,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   370,   369,   371,
     371,   372,   372,   372,   372,   373,   374,   375,   377,   376,
     378,   378,   379,   379,   379,   379,   380,   381,   383,   382,
     384,   384,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   387,   386,   388,   388,   389,   389,   389,
     390,   392,   391,   393,   393,   394,   394,   394,   394,   394,
     394,   394,   394,   394,   394,   394,   396,   395,   397,   397,
     398,   398,   399,   399,   399,   399,   399,   399,   399,   399,
     399,   399,   399,   399,   399,   399,   399,   399,   399,   399,
     400,   401,   402,   403,   404,   405,   406,   406,   407,   409,
     408,   410,   410,   411,   411,   412,   412,   412,   412,   412,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     423,   422,   425,   424,   426,   426,   427,   428,   428,   429,
     429,   429,   429,   430,   431,   433,   432,   434,   434,   435,
     435,   435,   436,   437,   439,   438,   440,   440,   441,   441,
     442,   444,   443,   446,   445,   447,   447,   448,   449,   449,
     450,   450,   450,   450,   451,   452,   453,   454,   454,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   479,   480,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     501,   503,   502,   504,   504,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   507,   506,   508,   508,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   510,   511,   512,   513,   514,
     516,   515,   517,   517,   518,   518,   518,   518,   518,   518,
     518,   519,   520,   522,   521,   523,   523,   524,   524,   525,
     526,   528,   527,   529,   529,   530,   530,   531,   532,   532,
     533,   533,   533,   533,   533,   533,   533,   533,   533,   533,
     533,   533,   533,   533,   533,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   550,   551,   551,   551,   551,   551,   551,
     551,   552,   553,   554,   555,   556,   557
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
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
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
static const unsigned short int yydefact[] =
{
       2,     0,     1,     0,     0,   225,     0,   177,   336,   405,
     414,   421,     0,   590,   390,   203,     0,     0,   110,   277,
       0,     0,   288,   313,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,     0,
     179,   338,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    79,    78,     0,   635,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   619,   620,   621,   622,   623,   625,
     626,   627,   628,   629,   624,   630,   631,   632,   633,   634,
     194,     0,   180,   361,     0,   339,     0,     0,     0,   492,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   563,     0,   541,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   438,   489,   490,   487,   491,   488,
     449,   439,   440,   478,   441,   442,   443,   444,   445,   446,
     447,   448,   483,   450,   451,   452,   454,   459,   455,   457,
     456,   472,   473,   458,   460,   461,   462,   463,   466,   464,
     453,   465,   468,   477,   479,   480,   469,   470,   485,   486,
     482,   471,   467,   475,   476,   474,   481,   484,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    86,    87,    88,    89,    92,    94,    93,    90,    91,
       0,     0,     0,     0,    42,    43,    44,   137,     0,   113,
       0,   660,     0,     0,     0,     0,     0,     0,     0,   653,
     654,   655,   656,   658,   657,   659,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
      61,    58,    51,    60,    54,    55,    56,    52,    59,    57,
      53,     0,     0,    80,     0,     0,     0,     0,    75,     0,
       0,     0,     0,     0,   251,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   228,   229,   230,
     239,   231,   244,   232,   233,   234,   235,   242,   236,   237,
     238,   240,   241,   243,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     618,     0,     0,   411,     0,     0,     0,   408,   409,   410,
     419,     0,     0,   417,   418,   433,     0,     0,   423,   432,
       0,   429,   430,   431,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   437,   600,
     611,     0,     0,   603,     0,     0,     0,   593,   594,   595,
     596,   597,   598,   599,   402,     0,   392,     0,   401,     0,
     398,   399,   400,     0,   205,     0,     0,     0,   214,     0,
     212,   213,   215,   216,    95,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,    45,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,   280,   281,   282,   283,
       0,     0,     0,     0,     0,     0,     0,   652,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,     0,   298,     0,     0,   291,   292,   293,
     294,     0,     0,   321,     0,   316,   317,   318,     0,     0,
       0,    74,   245,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     227,     0,     0,     0,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   617,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   369,
       0,     0,     0,     0,     0,     0,     0,     0,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   357,   354,   356,
     355,   353,   350,   351,   352,   358,     0,     0,     0,   407,
       0,     0,   416,     0,     0,     0,     0,   428,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,     0,     0,     0,   436,     0,     0,     0,     0,     0,
       0,     0,   592,     0,     0,     0,     0,   397,   217,     0,
       0,     0,     0,     0,   211,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,     0,    40,     0,     0,     0,     0,     0,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   115,   116,   117,   118,   132,   119,
     133,   120,   121,   122,   128,   123,   124,   125,   126,   127,
     129,   130,   131,   134,   284,     0,     0,     0,     0,   279,
       0,     0,     0,     0,     0,     0,   651,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,   295,
       0,     0,     0,     0,   290,   319,     0,     0,     0,   315,
      83,    82,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   226,
     650,   647,   646,   636,    26,    26,    26,    26,    26,    28,
      27,   640,   641,   645,   643,   648,   649,   642,   644,   637,
     638,   639,   192,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   181,   359,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   340,     0,     0,   406,     0,   415,     0,
       0,     0,   422,   503,   507,   495,   521,   522,   535,   534,
     587,   539,   501,   589,   530,   537,   502,   493,   494,   510,
     499,   529,   500,   498,   512,   511,   531,   506,   505,   504,
     532,   528,   585,   586,   525,   567,   582,   583,   568,   569,
     570,   577,   571,   580,   584,   573,   578,   574,   579,   572,
     576,   575,   581,     0,   566,   527,   545,   560,   561,   546,
     547,   548,   555,   549,   558,   562,   551,   556,   552,   557,
     550,   554,   553,   559,     0,   544,   520,   523,   538,   533,
     497,   524,   518,   519,   516,   517,   514,   515,   509,   508,
      34,    34,    34,    36,    35,   588,   540,   526,   536,   496,
     513,     0,     0,     0,     0,     0,     0,   591,     0,     0,
       0,   391,     0,     0,     0,   221,     0,   220,   204,   100,
     101,    99,    98,   102,   108,   103,   107,   105,   106,   104,
      97,    96,   109,    46,    47,   135,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   114,     0,     0,     0,
     278,   665,   661,   664,   666,   662,   663,    67,    73,    65,
      69,    68,    64,    63,    66,    72,    70,    71,     0,     0,
       0,   289,     0,     0,   314,   270,   249,   250,   269,   261,
     262,   258,   264,   260,   259,   266,   263,     0,   265,   257,
       0,   254,   256,   272,   268,   267,   276,   271,   247,   275,
     274,   273,   248,   246,    29,    30,    31,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   178,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   337,   412,   413,
     420,   434,   435,   427,     0,   426,   564,     0,   542,     0,
      37,    38,    39,   616,   615,     0,   614,   602,   601,   608,
     607,     0,   606,   610,   609,   404,   396,     0,   395,   403,
     210,   209,     0,   208,   224,   223,     0,   218,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,   286,
     287,   285,   296,   302,   308,   312,   311,   310,   307,   303,
     306,   309,   304,   305,     0,   301,   297,   320,   325,   331,
     335,   334,   333,   330,   326,   329,   332,   327,   328,     0,
     324,   255,   252,     0,   197,   199,   201,   200,   198,   193,
     196,   195,   202,   364,   366,   367,   385,   389,   388,   384,
     383,   382,   368,   378,   379,   376,   377,   375,     0,   380,
       0,   372,   374,   362,   386,   387,   360,   365,   381,   363,
     424,     0,   565,   543,   612,     0,   604,     0,   393,     0,
     206,     0,   222,   219,   154,   143,   152,   140,   169,   167,
     176,   166,   161,   170,   174,   163,   171,     0,   173,   168,
     162,   175,   172,   164,   165,     0,   158,   160,   150,   144,
     141,   147,   136,   151,   139,   153,   145,   146,   142,   149,
     138,   148,   299,     0,   322,     0,   253,   373,   370,     0,
     425,   613,   605,   394,   207,   159,   156,     0,   300,   323,
     371,   157
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     1,    24,   849,   850,   993,   994,    25,   253,   254,
     255,   256,    26,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,    27,    71,    72,    73,
      74,    75,    28,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    29,    61,   258,   763,   764,   765,   259,
     766,   767,   768,   769,   770,   771,   772,   773,   774,   775,
     776,   777,   778,   779,   780,   781,   782,   783,  1040,  1315,
    1316,  1317,    30,    50,   111,   588,   589,   590,   112,   591,
     592,   593,   594,   595,   596,   597,   598,    31,    58,   468,
     719,  1182,  1183,   469,   470,   471,  1016,  1017,   472,   473,
      32,    48,   326,   327,   328,   329,   330,   331,   332,   333,
     547,  1100,  1101,  1102,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,    33,    62,   495,   496,   497,   498,
     499,    34,    65,   526,   527,   528,   529,   530,   811,  1224,
    1225,    35,    66,   534,   535,   536,   537,   817,  1239,  1240,
      36,    51,   114,   617,   618,   619,   115,   620,   621,   622,
     623,   624,   625,   626,   884,  1270,  1271,  1272,   627,   628,
     629,   630,   631,   632,   633,   634,   635,    37,    57,   458,
     714,  1177,  1178,   459,   460,   461,   462,    38,    52,   366,
     367,   368,   369,    39,    53,   372,   373,   374,    40,    54,
     379,   645,  1154,  1155,   380,   381,   382,   383,    41,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   418,   974,
     975,   222,   416,   953,   954,   223,   224,   225,   226,   227,
      42,    56,   446,   447,   448,   449,   450,   708,  1171,  1172,
     451,   452,   453,   705,  1165,  1166,    43,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    44,   268,   269,   270,   271,   272,
     273,   274,   275
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -829
static const short int yypact[] =
{
    -829,   793,  -829,  -217,  -237,  -829,  -234,  -829,  -829,  -829,
    -829,  -829,  -210,  -829,  -829,  -829,  -207,  -204,  -829,  -829,
    -192,  -146,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,    11,  -144,   648,
     -43,    -3,   -89,   -78,   -56,   416,   -54,   -49,   -32,   413,
      24,    69,   -16,   306,   452,    17,    36,  -133,    43,    44,
      51,    14,  -829,  -829,  -829,  -829,   691,  -829,    57,    60,
      70,    80,    82,    83,    85,    87,    90,    91,   100,   102,
     105,   106,   108,   141,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,    76,  -829,  -829,    95,  -829,     3,    10,   170,  -829,
     110,   113,   114,   116,   127,   132,   133,   135,   140,   142,
     143,   145,   146,   147,   148,   151,   152,   153,   159,   160,
     161,   162,   164,   165,   166,   167,   169,   172,   173,   175,
     176,   177,  -829,   178,  -829,   185,   187,   189,   190,   191,
     196,   198,   200,   202,   203,   204,   207,   208,   211,   213,
     214,   218,   220,    13,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,   284,    62,
     265,    72,   223,   229,   230,   231,   233,   235,   241,   242,
     103,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
     144,   245,   247,    27,  -829,  -829,  -829,  -829,   158,  -829,
     112,  -829,   248,   250,   258,   262,   263,   264,   224,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,   186,   267,   273,   274,
     275,   276,   285,   286,   288,   289,   290,   291,   157,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,   183,     2,  -829,   271,   298,   325,   268,  -829,   287,
     292,   295,   297,   300,  -829,   302,   305,   307,   311,   313,
     314,   315,   317,   318,   319,   321,   194,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,   361,   442,   453,   398,   457,   457,
     459,   461,   407,   409,   410,   418,   421,   422,   425,   356,
    -829,   602,   815,  -829,   365,   369,    26,  -829,  -829,  -829,
    -829,   372,     8,  -829,  -829,  -829,   374,   375,  -829,  -829,
      94,  -829,  -829,  -829,   443,   457,   454,   457,   455,   498,
     499,   516,   462,   464,   472,   532,   517,   478,   540,   541,
     543,   488,   457,   489,   546,   530,   493,   551,   552,   553,
     457,   554,   537,   557,   560,   505,   448,   506,   451,   457,
     457,   515,   558,   519,   521,  -151,  -113,   526,   529,   457,
     457,   590,   457,   536,   538,   539,   542,   480,  -829,  -829,
    -829,   469,   483,  -829,   484,   486,   124,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,   487,  -829,   492,  -829,    30,
    -829,  -829,  -829,   481,  -829,   496,   500,   503,  -829,    86,
    -829,  -829,  -829,  -829,  -829,   589,   594,   607,   608,   423,
     609,   610,   573,   518,  -829,  -829,   613,   614,   522,  -829,
     426,   525,   523,   527,   528,    12,  -829,  -829,  -829,  -829,
     592,   593,   596,   598,   599,   457,   544,  -829,  -829,   627,
     601,   641,   645,   646,   647,   650,   653,   666,   654,   657,
     561,  -829,   564,   563,  -829,   565,    41,  -829,  -829,  -829,
    -829,   567,   566,  -829,    74,  -829,  -829,  -829,   570,   571,
     574,  -829,  -829,   635,   678,   643,   644,   587,   651,   652,
     655,   658,   659,   692,   719,   703,   705,   668,   707,   611,
    -829,   616,   617,   619,   620,   412,   621,   622,   623,   631,
     633,   634,   637,   642,   649,   660,   662,  -829,   663,   632,
     638,   640,   661,   665,   667,   669,   670,   671,   261,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,   676,
     674,   675,   677,   679,   680,   681,   682,   683,   684,  -829,
     686,   687,   688,   689,   693,   694,   695,   197,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,   708,   712,   704,  -829,
     742,   706,  -829,   743,   751,   700,   709,  -829,   710,   713,
     714,   720,   721,   731,   735,   736,   739,   740,   741,   744,
     745,   746,   753,   755,   756,   762,   765,   769,   770,   772,
     773,   774,   775,   776,   778,   779,   780,   787,   789,   790,
     777,   792,   811,   794,   795,   796,   797,   798,   799,   800,
     801,   802,   803,   804,   805,   806,   807,   115,   808,   809,
     810,   812,   813,   814,  -829,   702,   457,   726,   716,   840,
     841,   816,  -829,   875,   817,   891,   818,  -829,  -829,   819,
     909,   913,   771,   821,  -829,   823,   824,   825,   826,   827,
     828,   829,   830,   831,   832,   833,   834,   835,   836,  -829,
     837,   838,  -829,   839,   842,   843,   844,   845,  -829,   846,
     847,   848,   849,   850,   851,   852,   853,   854,   855,   856,
     857,   858,   859,    65,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,   915,   917,   938,   863,  -829,
     864,   865,   866,   867,   868,   869,  -829,   870,   871,   872,
     873,   874,   876,   877,   878,   879,   880,   881,  -829,  -829,
     939,   882,   940,   883,  -829,  -829,   941,   884,   886,  -829,
    -829,  -829,  -829,   888,   889,   890,   892,   588,   893,   894,
     895,   896,   897,   898,   899,   900,   901,   902,   903,  -829,
    -829,  -829,  -829,  -829,   457,   457,   457,   457,   457,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,   457,   960,   991,   998,  1000,   989,  1020,
     457,   590,   905,  -829,  -829,  1004,  -122,   767,  1005,  1006,
     969,   970,   971,  1010,   910,  1012,  1013,  1014,  1015,  1034,
    1017,  1018,   921,  -829,   922,   923,  -829,   924,  -829,   925,
     926,   585,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -200,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -197,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
     590,   590,   590,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,    -5,   927,   928,    -2,   929,   930,  -829,   931,   764,
     932,  -829,   -65,   933,   934,   750,  -191,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,   995,  1035,   996,   999,
     935,  1001,  1002,  1003,  1007,  1038,  1008,  1042,  1009,  1011,
    1016,  1043,  1019,  1044,  1021,   950,  -829,   952,   953,   954,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,   955,   672,
     957,  -829,   958,   715,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,   711,  -829,  -829,
    -180,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,   962,
     963,   964,   965,   966,   967,   968,   972,   973,  -829,   974,
     975,   976,   977,   978,   979,   980,   981,   982,   983,   468,
     984,   985,   986,   987,   988,   990,   992,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -171,  -829,  -829,   777,  -829,   811,
    -829,  -829,  -829,  -829,  -829,  -166,  -829,  -829,  -829,  -829,
    -829,  -135,  -829,  -829,  -829,  -829,  -829,  -128,  -829,  -829,
    -829,  -829,   -99,  -829,  -829,  -829,  1076,  -829,   771,   993,
     994,   997,  1022,   548,  1023,  1024,  1025,  1026,  1027,  1028,
    1029,  1030,  1031,  1032,  1033,  1036,  1037,  1039,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,   -35,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,   -23,
    -829,  -829,  -829,   588,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,    75,  -829,
      37,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,   585,  -829,  -829,  -829,    -5,  -829,    -2,  -829,   764,
    -829,   -65,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,   575,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,    61,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,   672,  -829,   715,  -829,  -829,  -829,   468,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,   548,  -829,  -829,
    -829,  -829
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -829,  -829,  -829,  -828,  -348,  -670,  -429,  -829,  -829,   698,
    -829,  -829,  -829,  -829,    67,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  1138,  -829,
    -829,  -829,  -829,  -829,  1040,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,   192,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -137,   -96,  -829,  -829,  -829,  -829,   656,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,   -62,  -829,   766,  -829,  -829,    48,  -829,  -829,
    -829,  -829,  -829,   912,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,   -12,   149,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,   747,  -829,  -829,
    -829,  -829,  -829,  -829,   717,  -829,  -829,  -829,  -829,  -829,
     -94,  -829,  -829,  -829,   718,  -829,  -829,  -829,  -829,   -95,
    -829,  -829,  -829,  -829,   624,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,   -92,   -20,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,   -44,  -829,   791,  -829,  -829,  -829,  -829,  -829,
     885,  -829,  -829,  -829,  -829,  -829,   887,  -829,  -829,  -829,
    -829,  -829,  -829,   -28,  -829,   904,  -829,  -829,  -829,  -829,
    1081,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
      96,  -829,  -829,  -829,    92,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,   860,  -829,  -829,  -829,  -829,  -829,   -31,
    -829,  -829,  -829,  -829,  -829,   -27,  -829,  -829,  1164,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,  -829,
    -829,  -829,  -829,  -829,  -829,  -829,  1041,  -829,  -829,  -829,
    -829,  -829,  -829
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned short int yytable[] =
{
     566,   567,   698,   531,   363,    47,  1180,  1163,    49,   370,
    1169,   370,    67,   491,   119,    67,  1114,  1115,  1116,  1117,
    1118,   120,   121,    45,    46,   250,   122,   363,   250,   689,
     690,   454,    55,   123,   124,    59,   492,   649,    60,   651,
    1156,   125,   522,  1158,  1157,   126,   127,  1159,    68,  1187,
      63,    68,   128,  1188,   666,   129,   130,   131,    69,   132,
    1242,    69,   674,   454,  1243,   133,   743,   691,   692,  1280,
     744,   683,   684,  1281,  1284,   531,  1130,  1131,  1285,   134,
     135,   695,   696,   136,   699,   364,  1263,   463,  1264,   137,
     371,   745,   371,   138,   139,   375,    64,   140,    76,   110,
     141,   142,  1265,   746,   231,  1286,  1266,   303,   364,  1287,
     143,   144,  1288,   491,   747,   532,  1289,   145,   146,   748,
     147,   148,   149,   150,    70,   439,   749,    70,   440,   493,
     990,   991,   992,   750,   151,   251,   492,   751,   251,   113,
     464,  1290,    77,   152,   153,  1291,   154,   365,   155,   156,
     752,  1181,   157,   116,   523,    78,   494,   795,   276,   232,
     233,   234,   252,   465,   117,   252,  1267,   235,   466,   441,
     365,   375,   442,   533,   455,    79,    80,  1164,   753,   158,
    1170,   159,    81,   754,   522,   160,   118,   532,   228,   161,
     162,   163,   164,   229,   277,   309,   165,   166,   599,   236,
     600,   456,   755,   601,   167,  1332,   455,   376,   602,  1333,
     230,   257,   524,   756,   757,   758,   310,  1334,   759,   443,
     311,  1335,   603,   604,   605,   261,   260,   467,   606,   493,
      82,    83,   237,   456,   168,   278,   169,   444,   377,   697,
      84,    85,   170,   312,   313,   533,   607,   171,   314,   641,
     608,   609,   172,   788,   437,   307,   494,   315,   457,   301,
      86,    87,   578,   316,   262,   378,   463,   638,   488,   525,
     279,   716,   280,   281,   610,    88,   611,  1338,   302,   263,
     317,  1339,   813,   376,    89,   439,   304,   305,   440,   612,
     457,   579,   760,   761,   306,   264,   523,  1269,   265,   266,
     344,  1346,   762,   345,   238,  1347,  1055,   261,   318,   282,
     613,   283,   474,   346,   377,   818,   319,   267,   361,   464,
    1160,  1161,  1162,   347,   284,   348,   349,   723,   350,   441,
     351,   320,   442,   352,   353,   646,   239,   362,   614,   321,
     322,   378,   465,   354,   483,   355,   262,   466,   356,   357,
     615,   358,   445,   384,   524,   521,   385,   386,  1002,   387,
     616,   263,   580,   581,   582,   711,   285,   583,   323,   324,
     388,    90,    91,    92,   584,   389,   390,   264,   391,   443,
     265,   266,   359,   392,   485,   393,   394,   585,   395,   396,
     397,   398,   286,   287,   399,   400,   401,   444,   520,   267,
     490,   586,   402,   403,   404,   405,   467,   406,   407,   408,
     409,   525,   410,   538,   231,   411,   412,   119,   413,   414,
     415,   417,   325,   587,   120,   121,   508,   743,   419,   122,
     420,   744,   421,   422,   423,   559,   123,   124,   892,   424,
     539,   425,  1127,   426,   125,   427,   428,   429,   126,   127,
     430,   431,   745,   276,   432,   128,   433,   434,   129,   130,
     131,   435,   132,   436,   746,   506,   475,   540,   133,   232,
     233,   234,   476,   477,   478,   747,   479,   235,   480,  1263,
     748,  1264,   134,   135,   481,   482,   136,   749,   486,   277,
     487,   500,   137,   501,   750,  1265,   138,   139,   751,  1266,
     140,   502,   872,   141,   142,   503,   504,   505,   541,   236,
     509,   752,   445,   143,   144,  1119,   510,   511,   512,   513,
     145,   146,  1126,   147,   148,   149,   150,   542,   514,   515,
     278,   516,   517,   518,   519,   543,   565,   151,   544,   753,
     545,   561,   237,   546,   754,   548,   152,   153,   549,   154,
     550,   155,   156,  1298,   551,   157,   552,   553,   554,  1267,
     555,   556,   557,   755,   558,   279,   562,   280,   281,   844,
     845,   846,   847,   848,   756,   757,   758,   563,   564,   759,
    1298,   565,   158,   568,   159,   569,  1299,   570,   160,   571,
     572,  1268,   161,   162,   163,   164,   577,  1300,   573,   165,
     166,   574,   575,   578,   282,   576,   283,   167,   636,  1301,
    1089,  1090,   637,  1299,   238,   640,  1302,   643,   644,   284,
    1303,  1304,   653,   648,  1300,   729,   730,   731,   732,   733,
     734,   735,   579,  1305,   650,   652,  1301,   168,  1091,   169,
     655,   654,   656,  1302,   657,   170,   239,  1303,  1304,    77,
     171,  1092,   658,   760,   761,   172,   659,  1093,   661,   660,
    1305,   285,    78,   762,   662,   663,  1306,   664,   665,   667,
     668,  1307,   669,   670,  1094,   671,   672,   673,   675,   676,
    1308,   677,    79,    80,   678,   679,   681,   286,   287,    81,
    1269,   680,   309,  1306,   682,   685,  1309,  1310,  1311,   687,
     686,   688,  1095,   580,   581,   582,   693,  1308,   583,   694,
    1096,  1097,   706,   310,   697,   584,   700,   311,   701,   702,
     704,   718,   703,  1309,  1310,  1311,   707,   709,   585,   710,
     713,   725,  1153,  1089,  1090,   715,   726,    82,    83,   720,
     312,   313,   586,   721,  1098,   314,   722,    84,    85,   727,
     728,   736,   737,   738,   315,   740,   741,  1213,   739,  1312,
     316,  1091,   742,  1099,   587,   784,   785,    86,    87,   797,
     786,   787,   790,   791,  1092,  1313,   792,   317,   793,   794,
    1093,   798,    88,   799,   796,  1314,  1312,   800,   801,   802,
     805,    89,   803,     2,     3,   804,   806,  1094,     4,   807,
    1228,   808,  1313,     5,   809,   318,   810,   815,   812,   816,
     820,   821,  1314,   319,   822,   823,   599,     6,   600,     7,
     824,   601,     8,   825,   826,  1095,   602,  1214,   320,     9,
     827,   828,   829,  1096,   833,   830,   321,   322,   831,   832,
     603,   604,   605,   834,    10,   835,   606,   836,   837,   838,
     894,   839,    11,    12,   895,    13,   840,   841,  1215,   842,
     843,   851,   852,   853,   607,   323,   324,  1098,   608,   609,
    1229,   854,  1216,   855,   856,   863,    14,   857,    90,    91,
      92,   864,   858,   865,   897,   899,  1099,    15,    16,   859,
    1217,  1218,   610,   900,   611,  1015,  1219,  1220,  1221,  1222,
     860,  1230,   861,   862,   866,    17,  1003,   612,   867,  1223,
     868,  1176,   869,   870,   871,  1231,   874,   875,   876,   325,
     877,    18,   878,   879,   880,   881,   882,   883,   613,   885,
     886,   887,   888,  1232,  1233,  1186,   889,   890,   891,  1234,
    1235,  1236,  1237,   901,   896,  1001,   898,  1132,    19,   902,
     903,   489,  1238,   904,   905,  1056,   614,    20,    21,  1004,
     906,   907,    22,    23,   935,   936,   937,   938,   615,   939,
     940,   908,   941,   942,   943,   909,   910,   944,   616,   911,
     912,   913,  1005,  1006,   914,   915,   916,   945,   946,   947,
     948,   949,   950,   917,   951,   918,   919,   952,   956,   957,
     958,   959,   920,   960,   961,   921,   962,   963,   964,   922,
     923,   965,   924,   925,   926,   927,   928,  1008,   929,   930,
     931,   966,   967,   968,   969,   970,   971,   932,   972,   933,
     934,   973,   955,  1010,   976,   977,   978,   979,   980,   981,
     982,   983,   984,   985,   986,   987,   988,   989,   995,   996,
     997,  1013,   998,   999,  1000,  1014,  1007,  1057,  1011,  1058,
    1009,  1018,  1012,  1019,  1020,  1021,  1022,  1023,  1024,  1025,
    1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,
    1059,  1078,  1080,  1082,  1120,  1036,  1037,  1038,  1039,  1041,
    1042,  1043,  1044,  1045,  1046,  1047,  1048,  1049,  1050,  1051,
    1052,  1053,  1054,  1060,  1061,  1062,  1063,  1064,  1065,  1066,
    1067,  1068,  1069,  1070,  1071,  1121,  1072,  1073,  1074,  1075,
    1076,  1077,  1122,  1081,  1123,  1079,  1084,  1083,  1085,  1086,
    1087,  1124,  1088,  1103,  1104,  1105,  1106,  1107,  1108,  1109,
    1110,  1111,  1112,  1113,  1125,  1128,  1129,  1133,  1134,  1135,
    1136,  1137,  1138,  1139,  1140,  1141,  1142,  1143,  1144,  1145,
    1146,  1147,  1148,  1149,  1150,  1151,  1152,  1167,  1168,  1173,
    1174,  1175,  1179,  1184,  1185,  1189,  1191,  1190,  1193,  1192,
    1198,  1194,  1195,  1196,  1200,  1204,  1206,  1197,  1199,  1201,
    1208,  1202,  1209,  1210,  1211,  1212,  1203,  1226,  1227,  1205,
    1292,  1207,  1244,  1245,  1246,  1247,  1248,  1249,  1250,   308,
    1351,  1345,  1251,  1252,  1253,  1254,  1255,  1256,  1257,  1258,
    1259,  1260,  1261,  1262,  1273,  1274,  1275,  1276,  1277,  1344,
    1278,  1336,  1279,  1294,  1295,   724,  1293,  1296,   560,  1348,
    1349,   893,   789,   814,   873,  1343,  1241,  1350,  1337,  1282,
     717,   639,   819,  1340,   438,  1283,  1342,   360,  1341,   642,
       0,     0,  1297,  1318,  1319,  1320,  1321,  1322,  1323,  1324,
    1325,  1326,  1327,  1328,     0,     0,  1329,  1330,     0,  1331,
     484,     0,     0,     0,   647,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   712,     0,     0,   507
};

static const short int yycheck[] =
{
     348,   349,   431,     1,     1,   242,    71,    12,   242,     1,
      12,     1,     1,     1,     1,     1,   844,   845,   846,   847,
     848,     8,     9,   240,   241,     1,    13,     1,     1,   180,
     181,     1,   242,    20,    21,   242,    24,   385,   242,   387,
     240,    28,     1,   240,   244,    32,    33,   244,    37,   240,
     242,    37,    39,   244,   402,    42,    43,    44,    47,    46,
     240,    47,   410,     1,   244,    52,     1,   180,   181,   240,
       5,   419,   420,   244,   240,     1,   198,   199,   244,    66,
      67,   429,   430,    70,   432,    82,    11,     1,    13,    76,
      82,    26,    82,    80,    81,     1,   242,    84,   242,   142,
      87,    88,    27,    38,     1,   240,    31,   240,    82,   244,
      97,    98,   240,     1,    49,   113,   244,   104,   105,    54,
     107,   108,   109,   110,   113,     1,    61,   113,     4,   117,
      15,    16,    17,    68,   121,   111,    24,    72,   111,   142,
      54,   240,     1,   130,   131,   244,   133,   144,   135,   136,
      85,   216,   139,   242,   113,    14,   144,   505,     1,    56,
      57,    58,   138,    77,   242,   138,    91,    64,    82,    45,
     144,     1,    48,   171,   144,    34,    35,   182,   113,   166,
     182,   168,    41,   118,     1,   172,   242,   113,   242,   176,
     177,   178,   179,   242,    37,     1,   183,   184,     1,    96,
       3,   171,   137,     6,   191,   240,   144,   113,    11,   244,
     242,   142,   171,   148,   149,   150,    22,   240,   153,    95,
      26,   244,    25,    26,    27,     1,   242,   141,    31,   117,
      89,    90,   129,   171,   221,    78,   223,   113,   144,   124,
      99,   100,   229,    49,    50,   171,    49,   234,    54,   241,
      53,    54,   239,   241,   241,   241,   144,    63,   228,   242,
     119,   120,     1,    69,    40,   171,     1,   241,   241,   228,
     113,   241,   115,   116,    77,   134,    79,   240,   242,    55,
      86,   244,   241,   113,   143,     1,   243,   243,     4,    92,
     228,    30,   227,   228,   243,    71,   113,   222,    74,    75,
     243,   240,   237,   243,   201,   244,   241,     1,   114,   152,
     113,   154,   240,   243,   144,   241,   122,    93,   242,    54,
     990,   991,   992,   243,   167,   243,   243,   241,   243,    45,
     243,   137,    48,   243,   243,   241,   233,   242,   141,   145,
     146,   171,    77,   243,   241,   243,    40,    82,   243,   243,
     153,   243,   228,   243,   171,   288,   243,   243,   706,   243,
     163,    55,   101,   102,   103,   241,   209,   106,   174,   175,
     243,   230,   231,   232,   113,   243,   243,    71,   243,    95,
      74,    75,   241,   243,   240,   243,   243,   126,   243,   243,
     243,   243,   235,   236,   243,   243,   243,   113,   241,    93,
     242,   140,   243,   243,   243,   243,   141,   243,   243,   243,
     243,   228,   243,   142,     1,   243,   243,     1,   243,   243,
     243,   243,   228,   162,     8,     9,   240,     1,   243,    13,
     243,     5,   243,   243,   243,   241,    20,    21,   241,   243,
     142,   243,   871,   243,    28,   243,   243,   243,    32,    33,
     243,   243,    26,     1,   243,    39,   243,   243,    42,    43,
      44,   243,    46,   243,    38,   241,   243,   142,    52,    56,
      57,    58,   243,   243,   243,    49,   243,    64,   243,    11,
      54,    13,    66,    67,   243,   243,    70,    61,   243,    37,
     243,   243,    76,   243,    68,    27,    80,    81,    72,    31,
      84,   243,   241,    87,    88,   243,   243,   243,   240,    96,
     243,    85,   228,    97,    98,   863,   243,   243,   243,   243,
     104,   105,   870,   107,   108,   109,   110,   240,   243,   243,
      78,   243,   243,   243,   243,   243,   124,   121,   243,   113,
     243,   180,   129,   243,   118,   243,   130,   131,   243,   133,
     243,   135,   136,     5,   243,   139,   243,   243,   243,    91,
     243,   243,   243,   137,   243,   113,   124,   115,   116,   157,
     158,   159,   160,   161,   148,   149,   150,   124,   180,   153,
       5,   124,   166,   124,   168,   124,    38,   180,   172,   180,
     180,   123,   176,   177,   178,   179,   240,    49,   180,   183,
     184,   180,   180,     1,   152,   180,   154,   191,   243,    61,
      22,    23,   243,    38,   201,   243,    68,   243,   243,   167,
      72,    73,   124,   180,    49,   202,   203,   204,   205,   206,
     207,   208,    30,    85,   180,   180,    61,   221,    50,   223,
     124,   142,   180,    68,   180,   229,   233,    72,    73,     1,
     234,    63,   180,   227,   228,   239,   124,    69,   180,   142,
      85,   209,    14,   237,   124,   124,   118,   124,   180,   180,
     124,   123,   142,   180,    86,   124,   124,   124,   124,   142,
     132,   124,    34,    35,   124,   180,   180,   235,   236,    41,
     222,   243,     1,   118,   243,   180,   148,   149,   150,   180,
     142,   180,   114,   101,   102,   103,   180,   132,   106,   180,
     122,   123,   243,    22,   124,   113,   180,    26,   180,   180,
     240,   240,   180,   148,   149,   150,   243,   243,   126,   243,
     243,   142,   147,    22,    23,   243,   142,    89,    90,   243,
      49,    50,   140,   243,   156,    54,   243,    99,   100,   142,
     142,   142,   142,   180,    63,   142,   142,    85,   240,   211,
      69,    50,   240,   175,   162,   240,   243,   119,   120,   142,
     243,   243,   180,   180,    63,   227,   180,    86,   180,   180,
      69,   180,   134,   142,   240,   237,   211,   142,   142,   142,
     124,   143,   142,     0,     1,   142,   142,    86,     5,   142,
      85,   240,   227,    10,   240,   114,   243,   240,   243,   243,
     240,   240,   237,   122,   240,   180,     1,    24,     3,    26,
     142,     6,    29,   180,   180,   114,    11,   155,   137,    36,
     243,   180,   180,   122,   142,   180,   145,   146,   180,   180,
      25,    26,    27,   124,    51,   142,    31,   142,   180,   142,
     142,   240,    59,    60,   142,    62,   240,   240,   186,   240,
     240,   240,   240,   240,    49,   174,   175,   156,    53,    54,
     155,   240,   200,   240,   240,   243,    83,   240,   230,   231,
     232,   243,   240,   243,   142,   142,   175,    94,    95,   240,
     218,   219,    77,   142,    79,   124,   224,   225,   226,   227,
     240,   186,   240,   240,   243,   112,   180,    92,   243,   237,
     243,   147,   243,   243,   243,   200,   240,   243,   243,   228,
     243,   128,   243,   243,   243,   243,   243,   243,   113,   243,
     243,   243,   243,   218,   219,   185,   243,   243,   243,   224,
     225,   226,   227,   243,   240,   243,   240,   180,   155,   240,
     240,   253,   237,   240,   240,   763,   141,   164,   165,   243,
     240,   240,   169,   170,   187,   188,   189,   190,   153,   192,
     193,   240,   195,   196,   197,   240,   240,   200,   163,   240,
     240,   240,   142,   142,   240,   240,   240,   210,   211,   212,
     213,   214,   215,   240,   217,   240,   240,   220,   187,   188,
     189,   190,   240,   192,   193,   240,   195,   196,   197,   240,
     240,   200,   240,   240,   240,   240,   240,   142,   240,   240,
     240,   210,   211,   212,   213,   214,   215,   240,   217,   240,
     240,   220,   240,   142,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   142,   240,   240,   240,   142,   240,   142,   240,   142,
     243,   240,   243,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     142,   142,   142,   142,   124,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   124,   240,   240,   240,   240,
     240,   240,   124,   240,   124,   243,   240,   243,   240,   240,
     240,   142,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   124,   240,   142,   142,   142,   180,
     180,   180,   142,   243,   142,   142,   142,   142,   124,   142,
     142,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   180,   180,   142,   243,   180,
     142,   180,   180,   180,   142,   142,   142,   180,   180,   180,
     240,   180,   240,   240,   240,   240,   180,   240,   240,   180,
     124,   180,   240,   240,   240,   240,   240,   240,   240,    71,
    1347,  1307,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,  1291,
     240,  1243,   240,   240,   240,   469,  1188,   240,   326,  1333,
    1335,   617,   495,   526,   588,  1289,  1097,  1339,  1268,  1157,
     459,   366,   534,  1281,   173,  1159,  1287,    93,  1285,   372,
      -1,    -1,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,    -1,    -1,   240,   240,    -1,   240,
     240,    -1,    -1,    -1,   380,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   446,    -1,    -1,   268
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   246,     0,     1,     5,    10,    24,    26,    29,    36,
      51,    59,    60,    62,    83,    94,    95,   112,   128,   155,
     164,   165,   169,   170,   247,   252,   257,   271,   277,   288,
     317,   332,   345,   369,   376,   386,   395,   422,   432,   438,
     443,   453,   515,   531,   549,   240,   241,   242,   346,   242,
     318,   396,   433,   439,   444,   242,   516,   423,   333,   242,
     242,   289,   370,   242,   242,   377,   387,     1,    37,    47,
     113,   272,   273,   274,   275,   276,   242,     1,    14,    34,
      35,    41,    89,    90,    99,   100,   119,   120,   134,   143,
     230,   231,   232,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     142,   319,   323,   142,   397,   401,   242,   242,   242,     1,
       8,     9,    13,    20,    21,    28,    32,    33,    39,    42,
      43,    44,    46,    52,    66,    67,    70,    76,    80,    81,
      84,    87,    88,    97,    98,   104,   105,   107,   108,   109,
     110,   121,   130,   131,   133,   135,   136,   139,   166,   168,
     172,   176,   177,   178,   179,   183,   184,   191,   221,   223,
     229,   234,   239,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     501,   502,   506,   510,   511,   512,   513,   514,   242,   242,
     242,     1,    56,    57,    58,    64,    96,   129,   201,   233,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
       1,   111,   138,   253,   254,   255,   256,   142,   290,   294,
     242,     1,    40,    55,    71,    74,    75,    93,   550,   551,
     552,   553,   554,   555,   556,   557,     1,    37,    78,   113,
     115,   116,   152,   154,   167,   209,   235,   236,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   242,   242,   240,   243,   243,   243,   241,   273,     1,
      22,    26,    49,    50,    54,    63,    69,    86,   114,   122,
     137,   145,   146,   174,   175,   228,   347,   348,   349,   350,
     351,   352,   353,   354,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   241,
     533,   242,   242,     1,    82,   144,   434,   435,   436,   437,
       1,    82,   440,   441,   442,     1,   113,   144,   171,   445,
     449,   450,   451,   452,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   507,   243,   503,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   241,   455,     1,
       4,    45,    48,    95,   113,   228,   517,   518,   519,   520,
     521,   525,   526,   527,     1,   144,   171,   228,   424,   428,
     429,   430,   431,     1,    54,    77,    82,   141,   334,   338,
     339,   340,   343,   344,   240,   243,   243,   243,   243,   243,
     243,   243,   243,   241,   279,   240,   243,   243,   241,   254,
     242,     1,    24,   117,   144,   371,   372,   373,   374,   375,
     243,   243,   243,   243,   243,   243,   241,   551,   240,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     241,   259,     1,   113,   171,   228,   378,   379,   380,   381,
     382,     1,   113,   171,   388,   389,   390,   391,   142,   142,
     142,   240,   240,   243,   243,   243,   243,   355,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   241,
     348,   180,   124,   124,   180,   124,   249,   249,   124,   124,
     180,   180,   180,   180,   180,   180,   180,   240,     1,    30,
     101,   102,   103,   106,   113,   126,   140,   162,   320,   321,
     322,   324,   325,   326,   327,   328,   329,   330,   331,     1,
       3,     6,    11,    25,    26,    27,    31,    49,    53,    54,
      77,    79,    92,   113,   141,   153,   163,   398,   399,   400,
     402,   403,   404,   405,   406,   407,   408,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   243,   243,   241,   435,
     243,   241,   441,   243,   243,   446,   241,   450,   180,   249,
     180,   249,   180,   124,   142,   124,   180,   180,   180,   124,
     142,   180,   124,   124,   124,   180,   249,   180,   124,   142,
     180,   124,   124,   124,   249,   124,   142,   124,   124,   180,
     243,   180,   243,   249,   249,   180,   142,   180,   180,   180,
     181,   180,   181,   180,   180,   249,   249,   124,   251,   249,
     180,   180,   180,   180,   240,   528,   243,   243,   522,   243,
     243,   241,   518,   243,   425,   243,   241,   429,   240,   335,
     243,   243,   243,   241,   339,   142,   142,   142,   142,   202,
     203,   204,   205,   206,   207,   208,   142,   142,   180,   240,
     142,   142,   240,     1,     5,    26,    38,    49,    54,    61,
      68,    72,    85,   113,   118,   137,   148,   149,   150,   153,
     227,   228,   237,   291,   292,   293,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   240,   243,   243,   243,   241,   372,
     180,   180,   180,   180,   180,   249,   240,   142,   180,   142,
     142,   142,   142,   142,   142,   124,   142,   142,   240,   240,
     243,   383,   243,   241,   379,   240,   243,   392,   241,   389,
     240,   240,   240,   180,   142,   180,   180,   243,   180,   180,
     180,   180,   180,   142,   124,   142,   142,   180,   142,   240,
     240,   240,   240,   240,   157,   158,   159,   160,   161,   248,
     249,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   241,   321,   240,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   409,   243,   243,   243,   243,   243,
     243,   243,   241,   399,   142,   142,   240,   142,   240,   142,
     142,   243,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   187,   188,   189,   190,   192,
     193,   195,   196,   197,   200,   210,   211,   212,   213,   214,
     215,   217,   220,   508,   509,   240,   187,   188,   189,   190,
     192,   193,   195,   196,   197,   200,   210,   211,   212,   213,
     214,   215,   217,   220,   504,   505,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
      15,    16,    17,   250,   251,   240,   240,   240,   240,   240,
     240,   243,   249,   180,   243,   142,   142,   240,   142,   243,
     142,   240,   243,   142,   142,   124,   341,   342,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   243,   243,   243,   243,
     313,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   241,   292,   142,   142,   142,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   142,   243,
     142,   240,   142,   243,   240,   240,   240,   240,   240,    22,
      23,    50,    63,    69,    86,   114,   122,   123,   156,   175,
     356,   357,   358,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   248,   248,   248,   248,   248,   249,
     124,   124,   124,   124,   142,   124,   249,   251,   240,   142,
     198,   199,   180,   142,   142,   180,   180,   180,   142,   243,
     142,   142,   142,   142,   124,   142,   142,   240,   240,   240,
     240,   240,   240,   147,   447,   448,   240,   244,   240,   244,
     250,   250,   250,    12,   182,   529,   530,   240,   240,    12,
     182,   523,   524,   240,   240,   240,   147,   426,   427,   240,
      71,   216,   336,   337,   240,   240,   185,   240,   244,   180,
     142,   180,   180,   243,   180,   180,   180,   180,   142,   180,
     142,   180,   180,   180,   142,   180,   142,   180,   240,   240,
     240,   240,   240,    85,   155,   186,   200,   218,   219,   224,
     225,   226,   227,   237,   384,   385,   240,   240,    85,   155,
     186,   200,   218,   219,   224,   225,   226,   227,   237,   393,
     394,   358,   240,   244,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,    11,    13,    27,    31,    91,   123,   222,
     410,   411,   412,   240,   240,   240,   240,   240,   240,   240,
     240,   244,   509,   505,   240,   244,   240,   244,   240,   244,
     240,   244,   124,   342,   240,   240,   240,   240,     5,    38,
      49,    61,    68,    72,    73,    85,   118,   123,   132,   148,
     149,   150,   211,   227,   237,   314,   315,   316,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   244,   240,   244,   357,   412,   240,   244,
     448,   530,   524,   427,   337,   316,   240,   244,   385,   394,
     411,   315
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
#line 404 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 28:
#line 406 "ircd_parser.y"
    {
			yyval.number = yyvsp[-1].number + yyvsp[0].number;
		}
    break;

  case 29:
#line 410 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number + yyvsp[0].number;
		}
    break;

  case 30:
#line 414 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 + yyvsp[0].number;
		}
    break;

  case 31:
#line 418 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 + yyvsp[0].number;
		}
    break;

  case 32:
#line 422 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 + yyvsp[0].number;
		}
    break;

  case 33:
#line 426 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 * 7 + yyvsp[0].number;
		}
    break;

  case 34:
#line 431 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 36:
#line 432 "ircd_parser.y"
    { yyval.number = yyvsp[-1].number + yyvsp[0].number; }
    break;

  case 37:
#line 433 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number + yyvsp[0].number; }
    break;

  case 38:
#line 434 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 + yyvsp[0].number; }
    break;

  case 39:
#line 435 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 * 1024 + yyvsp[0].number; }
    break;

  case 46:
#line 449 "ircd_parser.y"
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
#line 466 "ircd_parser.y"
    {
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
}
    break;

  case 63:
#line 490 "ircd_parser.y"
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
#line 524 "ircd_parser.y"
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
#line 584 "ircd_parser.y"
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
#line 598 "ircd_parser.y"
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
#line 616 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.description);
    DupString(ServerInfo.description,yylval.string);
  }
}
    break;

  case 68:
#line 625 "ircd_parser.y"
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
#line 639 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.network_desc);
    DupString(ServerInfo.network_desc, yylval.string);
  }
}
    break;

  case 70:
#line 648 "ircd_parser.y"
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
#line 676 "ircd_parser.y"
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
#line 706 "ircd_parser.y"
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
#line 722 "ircd_parser.y"
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
#line 778 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.name);
    DupString(AdminInfo.name, yylval.string);
  }
}
    break;

  case 82:
#line 787 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.email);
    DupString(AdminInfo.email, yylval.string);
  }
}
    break;

  case 83:
#line 796 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.description);
    DupString(AdminInfo.description, yylval.string);
  }
}
    break;

  case 96:
#line 820 "ircd_parser.y"
    {
                        }
    break;

  case 97:
#line 824 "ircd_parser.y"
    {
                        }
    break;

  case 98:
#line 828 "ircd_parser.y"
    {
                        }
    break;

  case 99:
#line 832 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
}
    break;

  case 100:
#line 839 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
}
    break;

  case 101:
#line 846 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
}
    break;

  case 102:
#line 853 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
}
    break;

  case 103:
#line 857 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
}
    break;

  case 104:
#line 861 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
}
    break;

  case 105:
#line 865 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
}
    break;

  case 106:
#line 869 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
}
    break;

  case 107:
#line 873 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
}
    break;

  case 108:
#line 877 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
}
    break;

  case 109:
#line 883 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 110:
#line 892 "ircd_parser.y"
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
#line 904 "ircd_parser.y"
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
#line 995 "ircd_parser.y"
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
#line 1007 "ircd_parser.y"
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
#line 1019 "ircd_parser.y"
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
#line 1038 "ircd_parser.y"
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
#line 1050 "ircd_parser.y"
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
#line 1061 "ircd_parser.y"
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
#line 1072 "ircd_parser.y"
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
#line 1114 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 144:
#line 1123 "ircd_parser.y"
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
#line 1134 "ircd_parser.y"
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
#line 1145 "ircd_parser.y"
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
#line 1156 "ircd_parser.y"
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
#line 1167 "ircd_parser.y"
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
#line 1178 "ircd_parser.y"
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
#line 1189 "ircd_parser.y"
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
#line 1200 "ircd_parser.y"
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
#line 1211 "ircd_parser.y"
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
#line 1222 "ircd_parser.y"
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
#line 1233 "ircd_parser.y"
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
#line 1244 "ircd_parser.y"
    {
}
    break;

  case 159:
#line 1248 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 160:
#line 1249 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 161:
#line 1252 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 162:
#line 1259 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 163:
#line 1266 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 164:
#line 1273 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 165:
#line 1280 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 166:
#line 1287 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 167:
#line 1294 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 168:
#line 1301 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 169:
#line 1308 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 170:
#line 1315 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 171:
#line 1322 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 172:
#line 1329 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 173:
#line 1336 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 174:
#line 1343 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 175:
#line 1350 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 176:
#line 1357 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) ClearConfEncrypted(yy_aconf);
    else SetConfEncrypted(yy_aconf);
  }
}
    break;

  case 177:
#line 1370 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = (struct ClassItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 178:
#line 1377 "ircd_parser.y"
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
#line 1404 "ircd_parser.y"
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
#line 1450 "ircd_parser.y"
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
#line 1496 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 196:
#line 1502 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = yyvsp[-1].number;
}
    break;

  case 197:
#line 1508 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 198:
#line 1514 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = yyvsp[-1].number;
}
    break;

  case 199:
#line 1520 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = yyvsp[-1].number;
}
    break;

  case 200:
#line 1526 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = yyvsp[-1].number;
}
    break;

  case 201:
#line 1532 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = yyvsp[-1].number;
}
    break;

  case 202:
#line 1538 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = yyvsp[-1].number;
}
    break;

  case 203:
#line 1547 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    listener_address = NULL;
    listener_flags = 0;
  }
}
    break;

  case 204:
#line 1554 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 205:
#line 1563 "ircd_parser.y"
    {
}
    break;

  case 209:
#line 1568 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_SSL;
}
    break;

  case 210:
#line 1572 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_HIDDEN;
}
    break;

  case 221:
#line 1585 "ircd_parser.y"
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

  case 222:
#line 1600 "ircd_parser.y"
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

  case 223:
#line 1622 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 224:
#line 1631 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 225:
#line 1643 "ircd_parser.y"
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
#line 1655 "ircd_parser.y"
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
#line 1720 "ircd_parser.y"
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
#line 1739 "ircd_parser.y"
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
#line 1752 "ircd_parser.y"
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
#line 1763 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 250:
#line 1772 "ircd_parser.y"
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
#line 1783 "ircd_parser.y"
    {
}
    break;

  case 255:
#line 1787 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 256:
#line 1788 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 257:
#line 1791 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 258:
#line 1799 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 259:
#line 1806 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 260:
#line 1813 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 261:
#line 1820 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 262:
#line 1827 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 263:
#line 1834 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 264:
#line 1841 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 265:
#line 1848 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 266:
#line 1855 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 267:
#line 1864 "ircd_parser.y"
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
#line 1875 "ircd_parser.y"
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
#line 1886 "ircd_parser.y"
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
#line 1897 "ircd_parser.y"
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
#line 1908 "ircd_parser.y"
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
#line 1919 "ircd_parser.y"
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
#line 1931 "ircd_parser.y"
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
#line 1950 "ircd_parser.y"
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
#line 1960 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = yyvsp[-1].number;
  }
}
    break;

  case 276:
#line 1969 "ircd_parser.y"
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
#line 1984 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 278:
#line 1991 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 285:
#line 2003 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 286:
#line 2012 "ircd_parser.y"
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
#line 2027 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char def_reason[] = "No reason";

    create_nick_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
  }
}
    break;

  case 288:
#line 2040 "ircd_parser.y"
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
#line 2048 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 296:
#line 2059 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 297:
#line 2068 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    split_nuh(yylval.string, NULL, &yy_match_item->user, &yy_match_item->host);
  }
}
    break;

  case 298:
#line 2076 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 302:
#line 2083 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 303:
#line 2087 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TKLINE;
}
    break;

  case 304:
#line 2091 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 305:
#line 2095 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 306:
#line 2099 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TXLINE;
}
    break;

  case 307:
#line 2103 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 308:
#line 2107 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 309:
#line 2111 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TRESV;
}
    break;

  case 310:
#line 2115 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 311:
#line 2119 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_LOCOPS;
}
    break;

  case 312:
#line 2123 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 313:
#line 2132 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_conf->flags = SHARED_ALL;
  }
}
    break;

  case 314:
#line 2139 "ircd_parser.y"
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
#line 2152 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 321:
#line 2158 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = 0;
}
    break;

  case 325:
#line 2165 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_KLINE;
}
    break;

  case 326:
#line 2169 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TKLINE;
}
    break;

  case 327:
#line 2173 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNKLINE;
}
    break;

  case 328:
#line 2177 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_XLINE;
}
    break;

  case 329:
#line 2181 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TXLINE;
}
    break;

  case 330:
#line 2185 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNXLINE;
}
    break;

  case 331:
#line 2189 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_RESV;
}
    break;

  case 332:
#line 2193 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TRESV;
}
    break;

  case 333:
#line 2197 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNRESV;
}
    break;

  case 334:
#line 2201 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_LOCOPS;
}
    break;

  case 335:
#line 2205 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = SHARED_ALL;
}
    break;

  case 336:
#line 2214 "ircd_parser.y"
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
#line 2232 "ircd_parser.y"
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

  case 361:
#line 2386 "ircd_parser.y"
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
#line 2398 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 363:
#line 2407 "ircd_parser.y"
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
#line 2419 "ircd_parser.y"
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
#line 2431 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = yyvsp[-1].number;
}
    break;

  case 366:
#line 2437 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 367:
#line 2441 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 368:
#line 2449 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 369:
#line 2458 "ircd_parser.y"
    {
}
    break;

  case 373:
#line 2462 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 374:
#line 2463 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 375:
#line 2466 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfLazyLink(yy_aconf);
    else SetConfLazyLink(yy_aconf);
  }
}
    break;

  case 376:
#line 2473 "ircd_parser.y"
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
#line 2484 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfCryptLink(yy_aconf);
    else SetConfCryptLink(yy_aconf);
  }
}
    break;

  case 378:
#line 2491 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAllowAutoConn(yy_aconf);
    else SetConfAllowAutoConn(yy_aconf);
  }
}
    break;

  case 379:
#line 2498 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAwayBurst(yy_aconf);
    else SetConfAwayBurst(yy_aconf);
  }
}
    break;

  case 380:
#line 2505 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfTopicBurst(yy_aconf);
    else SetConfTopicBurst(yy_aconf);
  }
}
    break;

  case 381:
#line 2515 "ircd_parser.y"
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
#line 2556 "ircd_parser.y"
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
#line 2567 "ircd_parser.y"
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
#line 2578 "ircd_parser.y"
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
#line 2593 "ircd_parser.y"
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
#line 2604 "ircd_parser.y"
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
#line 2617 "ircd_parser.y"
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
#line 2630 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 389:
#line 2639 "ircd_parser.y"
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
#line 2674 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    userbuf[0] = hostbuf[0] = reasonbuf[0] = '\0';
    regex_ban = 0;
  }
}
    break;

  case 391:
#line 2681 "ircd_parser.y"
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
#line 2745 "ircd_parser.y"
    {
}
    break;

  case 396:
#line 2750 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 403:
#line 2759 "ircd_parser.y"
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
#line 2775 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 405:
#line 2784 "ircd_parser.y"
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
#line 2793 "ircd_parser.y"
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
#line 2809 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 413:
#line 2818 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 414:
#line 2830 "ircd_parser.y"
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
#line 2838 "ircd_parser.y"
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
#line 2854 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 421:
#line 2866 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    regex_ban = 0;
    reasonbuf[0] = gecos_name[0] = '\0';
  }
}
    break;

  case 422:
#line 2873 "ircd_parser.y"
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
#line 2916 "ircd_parser.y"
    {
}
    break;

  case 427:
#line 2921 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 434:
#line 2930 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(gecos_name, yylval.string, sizeof(gecos_name));
}
    break;

  case 435:
#line 2936 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 493:
#line 2981 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr = yyvsp[-1].number;
}
    break;

  case 494:
#line 2987 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr6 = yyvsp[-1].number;
}
    break;

  case 495:
#line 2993 "ircd_parser.y"
    {
  if (ypass == 1) /* must be set in the 1st pass */
    ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 496:
#line 2999 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
}
    break;

  case 497:
#line 3004 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 498:
#line 3009 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kill_chase_time_limit = yyvsp[-1].number;
}
    break;

  case 499:
#line 3015 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 500:
#line 3021 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 501:
#line 3027 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 502:
#line 3033 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 503:
#line 3039 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 504:
#line 3045 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_time = yyvsp[-1].number; 
}
    break;

  case 505:
#line 3051 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_changes = yyvsp[-1].number;
}
    break;

  case 506:
#line 3057 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_accept = yyvsp[-1].number;
}
    break;

  case 507:
#line 3063 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_spam_exit_message_time = yyvsp[-1].number;
}
    break;

  case 508:
#line 3069 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_warn_delta = yyvsp[-1].number;
}
    break;

  case 509:
#line 3075 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = yyvsp[-1].number;
}
    break;

  case 510:
#line 3081 "ircd_parser.y"
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

  case 511:
#line 3092 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 512:
#line 3098 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 513:
#line 3107 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 514:
#line 3113 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 515:
#line 3119 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 516:
#line 3125 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 517:
#line 3129 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 518:
#line 3135 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 519:
#line 3139 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 520:
#line 3145 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait = yyvsp[-1].number;
}
    break;

  case 521:
#line 3151 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.caller_id_wait = yyvsp[-1].number;
}
    break;

  case 522:
#line 3157 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.opers_bypass_callerid = yylval.number;
}
    break;

  case 523:
#line 3163 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait_simple = yyvsp[-1].number;
}
    break;

  case 524:
#line 3169 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 525:
#line 3175 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 526:
#line 3181 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 527:
#line 3187 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 528:
#line 3193 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
}
    break;

  case 529:
#line 3204 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.idletime = yyvsp[-1].number;
}
    break;

  case 530:
#line 3210 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dots_in_ident = yyvsp[-1].number;
}
    break;

  case 531:
#line 3216 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.maximum_links = yyvsp[-1].number;
}
    break;

  case 532:
#line 3222 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_targets = yyvsp[-1].number;
}
    break;

  case 533:
#line 3228 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 534:
#line 3237 "ircd_parser.y"
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

  case 535:
#line 3269 "ircd_parser.y"
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

  case 536:
#line 3287 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 537:
#line 3293 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 538:
#line 3302 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 539:
#line 3308 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 540:
#line 3313 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 541:
#line 3319 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 545:
#line 3326 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 546:
#line 3330 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 547:
#line 3334 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEAF;
}
    break;

  case 548:
#line 3338 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 549:
#line 3342 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 550:
#line 3346 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 551:
#line 3350 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 552:
#line 3354 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 553:
#line 3358 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 554:
#line 3362 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 555:
#line 3366 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 556:
#line 3370 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 557:
#line 3374 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 558:
#line 3378 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 559:
#line 3382 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 560:
#line 3386 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 561:
#line 3390 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 562:
#line 3394 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 563:
#line 3400 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 567:
#line 3407 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 568:
#line 3411 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 569:
#line 3415 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEAF;
}
    break;

  case 570:
#line 3419 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 571:
#line 3423 "ircd_parser.y"
    { 
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 572:
#line 3427 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 573:
#line 3431 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 574:
#line 3435 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 575:
#line 3439 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 576:
#line 3443 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 577:
#line 3447 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 578:
#line 3451 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 579:
#line 3455 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 580:
#line 3459 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 581:
#line 3463 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 582:
#line 3467 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 583:
#line 3471 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 584:
#line 3475 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 585:
#line 3481 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard = yyvsp[-1].number;
}
    break;

  case 586:
#line 3487 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard_simple = yyvsp[-1].number;
}
    break;

  case 587:
#line 3493 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.default_floodcount = yyvsp[-1].number;
}
    break;

  case 588:
#line 3499 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.client_flood = yyvsp[-1].number;
}
    break;

  case 589:
#line 3505 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 590:
#line 3514 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->flags = 0;
  }
}
    break;

  case 591:
#line 3522 "ircd_parser.y"
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

  case 601:
#line 3549 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 602:
#line 3555 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = yyvsp[-1].number;
}
    break;

  case 603:
#line 3561 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 607:
#line 3567 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 608:
#line 3571 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 609:
#line 3577 "ircd_parser.y"
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

  case 610:
#line 3596 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 611:
#line 3605 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 612:
#line 3609 "ircd_parser.y"
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

  case 615:
#line 3649 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 616:
#line 3653 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 636:
#line 3683 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 637:
#line 3689 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_except = yylval.number;
}
    break;

  case 638:
#line 3695 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_invex = yylval.number;
}
    break;

  case 639:
#line 3701 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_knock = yylval.number;
}
    break;

  case 640:
#line 3707 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay = yyvsp[-1].number;
}
    break;

  case 641:
#line 3713 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay_channel = yyvsp[-1].number;
}
    break;

  case 642:
#line 3719 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 643:
#line 3725 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_chans_per_user = yyvsp[-1].number;
}
    break;

  case 644:
#line 3731 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 645:
#line 3737 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_bans = yyvsp[-1].number;
}
    break;

  case 646:
#line 3743 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_user_count = yyvsp[-1].number;
}
    break;

  case 647:
#line 3749 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_server_count = yyvsp[-1].number;
}
    break;

  case 648:
#line 3755 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 649:
#line 3761 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 650:
#line 3767 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.burst_topicwho = yylval.number;
}
    break;

  case 661:
#line 3787 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 662:
#line 3793 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 663:
#line 3799 "ircd_parser.y"
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

  case 664:
#line 3813 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 665:
#line 3819 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 666:
#line 3825 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 1010 of yacc.c.  */
#line 7026 "y.tab.c"

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



