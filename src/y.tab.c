/* A Bison parser, made from ircd_parser.y, by GNU bison 1.75.  */
/* $Id: y.tab.c,v 7.21.2.2 2005/07/23 23:29:14 adx Exp $ */

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
     REHASH = 400,
     REMOTE = 401,
     REMOTEBAN = 402,
     RESTRICTED = 403,
     RSA_PRIVATE_KEY_FILE = 404,
     RSA_PUBLIC_KEY_FILE = 405,
     RESV = 406,
     RESV_EXEMPT = 407,
     SECONDS = 408,
     MINUTES = 409,
     HOURS = 410,
     DAYS = 411,
     WEEKS = 412,
     SENDQ = 413,
     SEND_PASSWORD = 414,
     SERVERHIDE = 415,
     SERVERINFO = 416,
     SERVLINK_PATH = 417,
     SID = 418,
     TKLINE_EXPIRE_NOTICES = 419,
     T_SHARED = 420,
     T_CLUSTER = 421,
     TYPE = 422,
     SHORT_MOTD = 423,
     SILENT = 424,
     SPOOF = 425,
     SPOOF_NOTICE = 426,
     STATS_I_OPER_ONLY = 427,
     STATS_K_OPER_ONLY = 428,
     STATS_O_OPER_ONLY = 429,
     STATS_P_OPER_ONLY = 430,
     TBOOL = 431,
     TMASKED = 432,
     T_REJECT = 433,
     TS_MAX_DELTA = 434,
     TS_WARN_DELTA = 435,
     TWODOTS = 436,
     T_ALL = 437,
     T_BOTS = 438,
     T_CALLERID = 439,
     T_CCONN = 440,
     T_CLIENT_FLOOD = 441,
     T_DEBUG = 442,
     T_DRONE = 443,
     T_EXTERNAL = 444,
     T_FULL = 445,
     T_INVISIBLE = 446,
     T_IPV4 = 447,
     T_IPV6 = 448,
     T_LOCOPS = 449,
     T_LOGPATH = 450,
     T_L_CRIT = 451,
     T_L_DEBUG = 452,
     T_L_ERROR = 453,
     T_L_INFO = 454,
     T_L_NOTICE = 455,
     T_L_TRACE = 456,
     T_L_WARN = 457,
     T_MAX_CLIENTS = 458,
     T_NCHANGE = 459,
     T_OPERWALL = 460,
     T_REJ = 461,
     T_SERVNOTICE = 462,
     T_SKILL = 463,
     T_SPY = 464,
     T_UNAUTH = 465,
     T_UNRESV = 466,
     T_UNXLINE = 467,
     T_WALLOP = 468,
     THROTTLE_TIME = 469,
     TRUE_NO_OPER_FLOOD = 470,
     UNKLINE = 471,
     USER = 472,
     USE_EGD = 473,
     USE_EXCEPT = 474,
     USE_INVEX = 475,
     USE_KNOCK = 476,
     USE_LOGGING = 477,
     USE_WHOIS_ACTUALLY = 478,
     VHOST = 479,
     VHOST6 = 480,
     XLINE = 481,
     WARN = 482,
     WARN_NO_NLINE = 483
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
#define REHASH 400
#define REMOTE 401
#define REMOTEBAN 402
#define RESTRICTED 403
#define RSA_PRIVATE_KEY_FILE 404
#define RSA_PUBLIC_KEY_FILE 405
#define RESV 406
#define RESV_EXEMPT 407
#define SECONDS 408
#define MINUTES 409
#define HOURS 410
#define DAYS 411
#define WEEKS 412
#define SENDQ 413
#define SEND_PASSWORD 414
#define SERVERHIDE 415
#define SERVERINFO 416
#define SERVLINK_PATH 417
#define SID 418
#define TKLINE_EXPIRE_NOTICES 419
#define T_SHARED 420
#define T_CLUSTER 421
#define TYPE 422
#define SHORT_MOTD 423
#define SILENT 424
#define SPOOF 425
#define SPOOF_NOTICE 426
#define STATS_I_OPER_ONLY 427
#define STATS_K_OPER_ONLY 428
#define STATS_O_OPER_ONLY 429
#define STATS_P_OPER_ONLY 430
#define TBOOL 431
#define TMASKED 432
#define T_REJECT 433
#define TS_MAX_DELTA 434
#define TS_WARN_DELTA 435
#define TWODOTS 436
#define T_ALL 437
#define T_BOTS 438
#define T_CALLERID 439
#define T_CCONN 440
#define T_CLIENT_FLOOD 441
#define T_DEBUG 442
#define T_DRONE 443
#define T_EXTERNAL 444
#define T_FULL 445
#define T_INVISIBLE 446
#define T_IPV4 447
#define T_IPV6 448
#define T_LOCOPS 449
#define T_LOGPATH 450
#define T_L_CRIT 451
#define T_L_DEBUG 452
#define T_L_ERROR 453
#define T_L_INFO 454
#define T_L_NOTICE 455
#define T_L_TRACE 456
#define T_L_WARN 457
#define T_MAX_CLIENTS 458
#define T_NCHANGE 459
#define T_OPERWALL 460
#define T_REJ 461
#define T_SERVNOTICE 462
#define T_SKILL 463
#define T_SPY 464
#define T_UNAUTH 465
#define T_UNRESV 466
#define T_UNXLINE 467
#define T_WALLOP 468
#define THROTTLE_TIME 469
#define TRUE_NO_OPER_FLOOD 470
#define UNKLINE 471
#define USER 472
#define USE_EGD 473
#define USE_EXCEPT 474
#define USE_INVEX 475
#define USE_KNOCK 476
#define USE_LOGGING 477
#define USE_WHOIS_ACTUALLY 478
#define VHOST 479
#define VHOST6 480
#define XLINE 481
#define WARN 482
#define WARN_NO_NLINE 483




/* Copy the first part of user declarations.  */
#line 25 "ircd_parser.y"


/* XXX */
#define WE_ARE_MEMORY_C

#define YY_NO_UNPUT
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
#line 128 "ircd_parser.y"
typedef union {
  int number;
  char *string;
} yystype;
/* Line 193 of /usr/local/share/bison/yacc.c.  */
#line 637 "y.tab.c"
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
#line 658 "y.tab.c"

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
#define YYLAST   1259

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  234
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  295
/* YYNRULES -- Number of rules. */
#define YYNRULES  622
/* YYNRULES -- Number of states. */
#define YYNSTATES  1268

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   483

#define YYTRANSLATE(X) \
  ((unsigned)(X) <= YYMAXUTOK ? yytranslate[X] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   233,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   229,
       2,   232,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   231,     2,   230,     2,     2,     2,     2,
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
     225,   226,   227,   228
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
      97,   103,   106,   108,   110,   112,   114,   119,   124,   130,
     133,   135,   137,   139,   141,   143,   145,   147,   149,   151,
     153,   155,   157,   162,   167,   172,   177,   182,   187,   192,
     197,   202,   207,   213,   216,   218,   220,   222,   224,   226,
     231,   236,   241,   247,   250,   252,   254,   256,   258,   260,
     262,   264,   266,   268,   270,   275,   280,   285,   290,   295,
     300,   305,   310,   315,   320,   325,   330,   335,   340,   341,
     349,   350,   352,   355,   357,   359,   361,   363,   365,   367,
     369,   371,   373,   375,   377,   379,   381,   383,   385,   387,
     389,   391,   393,   395,   400,   402,   407,   412,   417,   422,
     427,   432,   437,   442,   447,   452,   457,   462,   467,   472,
     477,   482,   483,   489,   493,   495,   498,   500,   502,   504,
     506,   508,   510,   512,   514,   516,   518,   520,   522,   524,
     526,   528,   530,   531,   539,   540,   542,   545,   547,   549,
     551,   553,   555,   557,   559,   561,   563,   565,   567,   572,
     574,   579,   584,   589,   594,   599,   604,   609,   614,   615,
     622,   625,   627,   629,   631,   633,   635,   640,   644,   646,
     648,   652,   657,   662,   663,   670,   673,   675,   677,   679,
     681,   683,   685,   687,   689,   691,   693,   695,   697,   699,
     701,   703,   705,   707,   712,   717,   722,   727,   728,   734,
     738,   740,   743,   745,   747,   749,   751,   753,   755,   757,
     759,   761,   763,   765,   770,   775,   780,   785,   790,   795,
     800,   805,   810,   815,   816,   823,   826,   828,   830,   832,
     834,   836,   841,   846,   851,   852,   859,   862,   864,   866,
     868,   870,   872,   877,   882,   883,   889,   893,   895,   897,
     899,   901,   903,   905,   907,   909,   910,   917,   920,   922,
     924,   926,   928,   933,   934,   940,   944,   946,   948,   950,
     952,   954,   956,   958,   960,   962,   963,   971,   972,   974,
     977,   979,   981,   983,   985,   987,   989,   991,   993,   995,
     997,   999,  1001,  1003,  1005,  1007,  1009,  1011,  1013,  1015,
    1020,  1022,  1027,  1032,  1037,  1042,  1047,  1052,  1057,  1058,
    1064,  1068,  1070,  1072,  1074,  1076,  1078,  1080,  1085,  1090,
    1095,  1100,  1105,  1110,  1115,  1120,  1125,  1126,  1133,  1136,
    1138,  1140,  1142,  1144,  1149,  1154,  1155,  1162,  1165,  1167,
    1169,  1171,  1173,  1178,  1183,  1184,  1191,  1194,  1196,  1198,
    1200,  1205,  1206,  1213,  1216,  1218,  1220,  1222,  1224,  1229,
    1234,  1240,  1243,  1245,  1247,  1249,  1251,  1253,  1255,  1257,
    1259,  1261,  1263,  1265,  1267,  1269,  1271,  1273,  1275,  1277,
    1279,  1281,  1283,  1285,  1287,  1289,  1291,  1293,  1295,  1297,
    1299,  1301,  1303,  1305,  1307,  1309,  1311,  1313,  1315,  1317,
    1319,  1321,  1323,  1325,  1327,  1329,  1331,  1333,  1335,  1337,
    1339,  1341,  1343,  1345,  1347,  1349,  1351,  1356,  1361,  1366,
    1371,  1376,  1381,  1386,  1391,  1396,  1401,  1406,  1411,  1416,
    1421,  1426,  1431,  1436,  1441,  1446,  1451,  1456,  1461,  1466,
    1471,  1476,  1481,  1486,  1491,  1496,  1501,  1506,  1511,  1516,
    1521,  1526,  1531,  1536,  1541,  1546,  1551,  1556,  1561,  1566,
    1571,  1576,  1581,  1586,  1587,  1593,  1597,  1599,  1601,  1603,
    1605,  1607,  1609,  1611,  1613,  1615,  1617,  1619,  1621,  1623,
    1625,  1627,  1629,  1631,  1632,  1638,  1642,  1644,  1646,  1648,
    1650,  1652,  1654,  1656,  1658,  1660,  1662,  1664,  1666,  1668,
    1670,  1672,  1674,  1676,  1681,  1686,  1691,  1696,  1701,  1702,
    1709,  1712,  1714,  1716,  1718,  1720,  1722,  1724,  1726,  1728,
    1733,  1738,  1739,  1745,  1749,  1751,  1753,  1755,  1760,  1765,
    1766,  1772,  1776,  1778,  1780,  1782,  1788,  1791,  1793,  1795,
    1797,  1799,  1801,  1803,  1805,  1807,  1809,  1811,  1813,  1815,
    1817,  1819,  1821,  1823,  1828,  1833,  1838,  1843,  1848,  1853,
    1858,  1863,  1868,  1873,  1878,  1883,  1888,  1893,  1899,  1902,
    1904,  1906,  1908,  1910,  1912,  1914,  1916,  1918,  1923,  1928,
    1933,  1938,  1943
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     235,     0,    -1,    -1,   235,   236,    -1,   259,    -1,   265,
      -1,   276,    -1,   503,    -1,   304,    -1,   319,    -1,   328,
      -1,   246,    -1,   520,    -1,   351,    -1,   358,    -1,   368,
      -1,   377,    -1,   403,    -1,   409,    -1,   415,    -1,   426,
      -1,   487,    -1,   420,    -1,   241,    -1,     1,   229,    -1,
       1,   230,    -1,    -1,   238,    -1,   122,   237,    -1,   122,
     153,   237,    -1,   122,   154,   237,    -1,   122,   155,   237,
      -1,   122,   156,   237,    -1,   122,   157,   237,    -1,    -1,
     240,    -1,   122,   239,    -1,   122,    14,   239,    -1,   122,
      15,   239,    -1,   122,    16,   239,    -1,   110,   231,   242,
     230,   229,    -1,   242,   243,    -1,   243,    -1,   244,    -1,
     245,    -1,     1,    -1,   109,   232,   140,   229,    -1,   136,
     232,   140,   229,    -1,   161,   231,   247,   230,   229,    -1,
     247,   248,    -1,   248,    -1,   250,    -1,   255,    -1,   258,
      -1,   252,    -1,   253,    -1,   254,    -1,   257,    -1,   249,
      -1,   256,    -1,   251,    -1,     1,    -1,   149,   232,   140,
     229,    -1,   111,   232,   140,   229,    -1,   163,   232,   140,
     229,    -1,    35,   232,   140,   229,    -1,   114,   232,   140,
     229,    -1,   113,   232,   140,   229,    -1,   224,   232,   140,
     229,    -1,   225,   232,   140,   229,    -1,   203,   232,   122,
     229,    -1,    76,   232,   176,   229,    -1,     5,   231,   260,
     230,   229,    -1,   260,   261,    -1,   261,    -1,   262,    -1,
     264,    -1,   263,    -1,     1,    -1,   111,   232,   140,   229,
      -1,    45,   232,   140,   229,    -1,    35,   232,   140,   229,
      -1,    93,   231,   266,   230,   229,    -1,   266,   267,    -1,
     267,    -1,   268,    -1,   269,    -1,   270,    -1,   274,    -1,
     275,    -1,   271,    -1,   273,    -1,   272,    -1,     1,    -1,
     195,   232,   140,   229,    -1,   127,   232,   140,   229,    -1,
      62,   232,   140,   229,    -1,    56,   232,   140,   229,    -1,
      54,   232,   140,   229,    -1,    55,   232,   140,   229,    -1,
      94,   232,   196,   229,    -1,    94,   232,   198,   229,    -1,
      94,   232,   202,   229,    -1,    94,   232,   200,   229,    -1,
      94,   232,   201,   229,    -1,    94,   232,   199,   229,    -1,
      94,   232,   197,   229,    -1,   222,   232,   176,   229,    -1,
      -1,   126,   277,   278,   231,   279,   230,   229,    -1,    -1,
     282,    -1,   279,   280,    -1,   280,    -1,   281,    -1,   283,
      -1,   284,    -1,   286,    -1,   288,    -1,   289,    -1,   290,
      -1,   291,    -1,   292,    -1,   293,    -1,   294,    -1,   295,
      -1,   296,    -1,   297,    -1,   298,    -1,   285,    -1,   287,
      -1,   299,    -1,     1,    -1,   111,   232,   140,   229,    -1,
     140,    -1,   217,   232,   140,   229,    -1,   135,   232,   140,
     229,    -1,    47,   232,   176,   229,    -1,    70,   232,   176,
     229,    -1,   150,   232,   140,   229,    -1,    24,   232,   140,
     229,    -1,    66,   232,   176,   229,    -1,   146,   232,   176,
     229,    -1,    83,   232,   176,   229,    -1,   226,   232,   176,
     229,    -1,   216,   232,   176,   229,    -1,    59,   232,   176,
     229,    -1,   116,   232,   176,   229,    -1,    36,   232,   176,
     229,    -1,   145,   232,   176,   229,    -1,     5,   232,   176,
     229,    -1,    -1,    52,   300,   232,   301,   229,    -1,   301,
     233,   302,    -1,   302,    -1,   121,   303,    -1,   303,    -1,
      66,    -1,   146,    -1,    83,    -1,   216,    -1,   226,    -1,
      59,    -1,    36,    -1,   145,    -1,     5,    -1,    70,    -1,
     116,    -1,   205,    -1,   130,    -1,    71,    -1,   147,    -1,
      -1,    24,   305,   306,   231,   307,   230,   229,    -1,    -1,
     310,    -1,   307,   308,    -1,   308,    -1,   309,    -1,   311,
      -1,   312,    -1,   313,    -1,   314,    -1,   315,    -1,   316,
      -1,   317,    -1,   318,    -1,     1,    -1,   111,   232,   140,
     229,    -1,   140,    -1,   138,   232,   238,   229,    -1,   124,
     232,   122,   229,    -1,    28,   232,   238,   229,    -1,   104,
     232,   122,   229,    -1,    99,   232,   122,   229,    -1,   101,
     232,   122,   229,    -1,   100,   232,   122,   229,    -1,   158,
     232,   240,   229,    -1,    -1,    92,   320,   231,   321,   230,
     229,    -1,   321,   322,    -1,   322,    -1,   323,    -1,   326,
      -1,   327,    -1,     1,    -1,   139,   232,   324,   229,    -1,
     324,   233,   325,    -1,   325,    -1,   122,    -1,   122,   181,
     122,    -1,    80,   232,   140,   229,    -1,    75,   232,   140,
     229,    -1,    -1,    10,   329,   231,   330,   230,   229,    -1,
     330,   331,    -1,   331,    -1,   332,    -1,   333,    -1,   335,
      -1,   336,    -1,   341,    -1,   342,    -1,   343,    -1,   345,
      -1,   346,    -1,   347,    -1,   334,    -1,   348,    -1,   349,
      -1,   344,    -1,   350,    -1,     1,    -1,   217,   232,   140,
     229,    -1,   135,   232,   140,   229,    -1,   171,   232,   176,
     229,    -1,    24,   232,   140,   229,    -1,    -1,    52,   337,
     232,   338,   229,    -1,   338,   233,   339,    -1,   339,    -1,
     121,   340,    -1,   340,    -1,   171,    -1,    48,    -1,    84,
      -1,    67,    -1,    20,    -1,    21,    -1,   120,    -1,    61,
      -1,   152,    -1,   112,    -1,    84,   232,   176,   229,    -1,
      67,   232,   176,   229,    -1,    48,   232,   176,   229,    -1,
      20,   232,   176,   229,    -1,   120,   232,   176,   229,    -1,
      61,   232,   176,   229,    -1,   170,   232,   140,   229,    -1,
     144,   232,   140,   229,    -1,   143,   232,   122,   229,    -1,
     112,   232,   176,   229,    -1,    -1,   151,   352,   231,   353,
     230,   229,    -1,   353,   354,    -1,   354,    -1,   355,    -1,
     356,    -1,   357,    -1,     1,    -1,   142,   232,   140,   229,
      -1,    22,   232,   140,   229,    -1,   115,   232,   140,   229,
      -1,    -1,   165,   359,   231,   360,   230,   229,    -1,   360,
     361,    -1,   361,    -1,   362,    -1,   363,    -1,   364,    -1,
       1,    -1,   111,   232,   140,   229,    -1,   217,   232,   140,
     229,    -1,    -1,   167,   365,   232,   366,   229,    -1,   366,
     233,   367,    -1,   367,    -1,    83,    -1,   216,    -1,   226,
      -1,   212,    -1,   151,    -1,   211,    -1,   182,    -1,    -1,
     166,   369,   231,   370,   230,   229,    -1,   370,   371,    -1,
     371,    -1,   372,    -1,   373,    -1,     1,    -1,   111,   232,
     140,   229,    -1,    -1,   167,   374,   232,   375,   229,    -1,
     375,   233,   376,    -1,   376,    -1,    83,    -1,   216,    -1,
     226,    -1,   212,    -1,   151,    -1,   211,    -1,   194,    -1,
     182,    -1,    -1,    27,   378,   379,   231,   380,   230,   229,
      -1,    -1,   383,    -1,   380,   381,    -1,   381,    -1,   382,
      -1,   384,    -1,   385,    -1,   386,    -1,   387,    -1,   388,
      -1,   389,    -1,   390,    -1,   399,    -1,   400,    -1,   401,
      -1,   398,    -1,   395,    -1,   397,    -1,   396,    -1,   394,
      -1,   402,    -1,     1,    -1,   111,   232,   140,   229,    -1,
     140,    -1,    75,   232,   140,   229,    -1,   159,   232,   140,
     229,    -1,     3,   232,   140,   229,    -1,   139,   232,   122,
     229,    -1,     6,   232,   192,   229,    -1,     6,   232,   193,
     229,    -1,    51,   232,   140,   229,    -1,    -1,    52,   391,
     232,   392,   229,    -1,   392,   233,   393,    -1,   393,    -1,
      89,    -1,    25,    -1,    29,    -1,    11,    -1,    13,    -1,
     150,   232,   140,   229,    -1,    47,   232,   176,   229,    -1,
      29,   232,   176,   229,    -1,    25,   232,   176,   229,    -1,
      11,   232,   176,   229,    -1,    77,   232,   140,   229,    -1,
      90,   232,   140,   229,    -1,    24,   232,   140,   229,    -1,
      23,   232,   140,   229,    -1,    -1,    81,   404,   231,   405,
     230,   229,    -1,   405,   406,    -1,   406,    -1,   407,    -1,
     408,    -1,     1,    -1,   217,   232,   140,   229,    -1,   142,
     232,   140,   229,    -1,    -1,    34,   410,   231,   411,   230,
     229,    -1,   411,   412,    -1,   412,    -1,   413,    -1,   414,
      -1,     1,    -1,    80,   232,   140,   229,    -1,   142,   232,
     140,   229,    -1,    -1,    49,   416,   231,   417,   230,   229,
      -1,   417,   418,    -1,   418,    -1,   419,    -1,     1,    -1,
      80,   232,   140,   229,    -1,    -1,    57,   421,   231,   422,
     230,   229,    -1,   422,   423,    -1,   423,    -1,   424,    -1,
     425,    -1,     1,    -1,   111,   232,   140,   229,    -1,   142,
     232,   140,   229,    -1,    58,   231,   427,   230,   229,    -1,
     427,   428,    -1,   428,    -1,   435,    -1,   436,    -1,   438,
      -1,   439,    -1,   440,    -1,   441,    -1,   442,    -1,   443,
      -1,   444,    -1,   445,    -1,   434,    -1,   447,    -1,   448,
      -1,   449,    -1,   463,    -1,   450,    -1,   452,    -1,   454,
      -1,   453,    -1,   456,    -1,   451,    -1,   457,    -1,   458,
      -1,   459,    -1,   460,    -1,   462,    -1,   464,    -1,   461,
      -1,   478,    -1,   465,    -1,   469,    -1,   470,    -1,   474,
      -1,   455,    -1,   484,    -1,   482,    -1,   483,    -1,   466,
      -1,   437,    -1,   467,    -1,   468,    -1,   485,    -1,   473,
      -1,   446,    -1,   486,    -1,   471,    -1,   472,    -1,   431,
      -1,   433,    -1,   429,    -1,   430,    -1,   432,    -1,     1,
      -1,    64,   232,   122,   229,    -1,    65,   232,   122,   229,
      -1,    13,   232,   176,   229,    -1,   223,   232,   176,   229,
      -1,   164,   232,   176,   229,    -1,    82,   232,   122,   229,
      -1,    74,   232,   176,   229,    -1,    79,   232,   176,   229,
      -1,    40,   232,   176,   229,    -1,    50,   232,   176,   229,
      -1,     8,   232,   176,   229,    -1,   103,   232,   238,   229,
      -1,   102,   232,   122,   229,    -1,    96,   232,   122,   229,
      -1,     9,   232,   238,   229,    -1,   180,   232,   238,   229,
      -1,   179,   232,   238,   229,    -1,    68,   232,   122,   229,
      -1,    86,   232,   176,   229,    -1,    85,   232,   140,   229,
      -1,   228,   232,   176,   229,    -1,   174,   232,   176,   229,
      -1,   175,   232,   176,   229,    -1,   173,   232,   176,   229,
      -1,   173,   232,   177,   229,    -1,   172,   232,   176,   229,
      -1,   172,   232,   177,   229,    -1,   133,   232,   238,   229,
      -1,    19,   232,   238,   229,    -1,   134,   232,   238,   229,
      -1,   168,   232,   176,   229,    -1,   119,   232,   176,   229,
      -1,   215,   232,   176,   229,    -1,   129,   232,   176,   229,
      -1,   106,   232,   140,   229,    -1,    78,   232,   238,   229,
      -1,    42,   232,   122,   229,    -1,    95,   232,   122,   229,
      -1,   105,   232,   122,   229,    -1,   162,   232,   140,   229,
      -1,    30,   232,   140,   229,    -1,    26,   232,   122,   229,
      -1,   218,   232,   176,   229,    -1,    44,   232,   140,   229,
      -1,   137,   232,   176,   229,    -1,    37,   232,   176,   229,
      -1,   214,   232,   238,   229,    -1,    -1,   131,   475,   232,
     476,   229,    -1,   476,   233,   477,    -1,   477,    -1,   183,
      -1,   185,    -1,   187,    -1,   190,    -1,   208,    -1,   204,
      -1,   206,    -1,   210,    -1,   209,    -1,   189,    -1,   205,
      -1,   207,    -1,   191,    -1,   213,    -1,   184,    -1,   194,
      -1,    -1,   128,   479,   232,   480,   229,    -1,   480,   233,
     481,    -1,   481,    -1,   183,    -1,   185,    -1,   187,    -1,
     190,    -1,   208,    -1,   204,    -1,   206,    -1,   210,    -1,
     209,    -1,   189,    -1,   205,    -1,   207,    -1,   191,    -1,
     213,    -1,   184,    -1,   194,    -1,   107,   232,   122,   229,
      -1,   108,   232,   122,   229,    -1,    31,   232,   122,   229,
      -1,   186,   232,   240,   229,    -1,    41,   232,   176,   229,
      -1,    -1,    60,   488,   231,   489,   230,   229,    -1,   489,
     490,    -1,   490,    -1,   491,    -1,   492,    -1,   493,    -1,
     497,    -1,   498,    -1,   499,    -1,     1,    -1,    46,   232,
     176,   229,    -1,    43,   232,   238,   229,    -1,    -1,    93,
     494,   232,   495,   229,    -1,   495,   233,   496,    -1,   496,
      -1,   178,    -1,    12,    -1,   217,   232,   140,   229,    -1,
     111,   232,   140,   229,    -1,    -1,     4,   500,   232,   501,
     229,    -1,   501,   233,   502,    -1,   502,    -1,   178,    -1,
      12,    -1,    22,   231,   504,   230,   229,    -1,   504,   505,
      -1,   505,    -1,   506,    -1,   507,    -1,   508,    -1,   509,
      -1,   515,    -1,   510,    -1,   511,    -1,   512,    -1,   513,
      -1,   514,    -1,   516,    -1,   517,    -1,   518,    -1,   519,
      -1,     1,    -1,    39,   232,   176,   229,    -1,   219,   232,
     176,   229,    -1,   220,   232,   176,   229,    -1,   221,   232,
     176,   229,    -1,    87,   232,   238,   229,    -1,    88,   232,
     238,   229,    -1,   132,   232,   176,   229,    -1,    98,   232,
     122,   229,    -1,   141,   232,   176,   229,    -1,    97,   232,
     122,   229,    -1,    33,   232,   122,   229,    -1,    32,   232,
     122,   229,    -1,   117,   232,   176,   229,    -1,   118,   232,
     176,   229,    -1,   160,   231,   521,   230,   229,    -1,   521,
     522,    -1,   522,    -1,   523,    -1,   524,    -1,   525,    -1,
     527,    -1,   526,    -1,   528,    -1,     1,    -1,    53,   232,
     176,   229,    -1,    73,   232,   176,   229,    -1,    91,   232,
     238,   229,    -1,    69,   232,   176,   229,    -1,    38,   232,
     176,   229,    -1,    72,   232,   176,   229,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   360,   360,   361,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   389,   389,   390,   394,
     398,   402,   406,   410,   416,   416,   417,   418,   419,   420,
     427,   430,   430,   431,   431,   431,   433,   450,   461,   464,
     464,   466,   466,   466,   467,   467,   468,   468,   469,   470,
     470,   471,   474,   529,   543,   561,   570,   584,   593,   621,
     651,   667,   717,   719,   719,   720,   720,   720,   721,   723,
     732,   741,   753,   755,   755,   758,   758,   758,   759,   759,
     760,   760,   761,   761,   764,   768,   772,   776,   783,   790,
     797,   801,   805,   809,   813,   817,   821,   827,   837,   836,
     929,   929,   930,   930,   931,   931,   931,   931,   931,   932,
     932,   932,   933,   933,   933,   934,   934,   935,   935,   935,
     936,   936,   937,   939,   951,   963,   986,   998,  1009,  1020,
    1062,  1071,  1082,  1093,  1104,  1115,  1126,  1137,  1148,  1159,
    1170,  1182,  1181,  1185,  1185,  1186,  1187,  1189,  1196,  1203,
    1210,  1217,  1224,  1231,  1238,  1245,  1252,  1259,  1266,  1273,
    1280,  1287,  1301,  1300,  1320,  1320,  1322,  1322,  1323,  1323,
    1324,  1325,  1326,  1327,  1328,  1329,  1330,  1331,  1334,  1380,
    1426,  1432,  1438,  1444,  1450,  1456,  1462,  1468,  1478,  1477,
    1490,  1490,  1491,  1491,  1491,  1491,  1493,  1495,  1495,  1497,
    1501,  1514,  1523,  1536,  1535,  1609,  1609,  1610,  1610,  1610,
    1610,  1610,  1611,  1611,  1612,  1612,  1612,  1613,  1613,  1614,
    1614,  1614,  1615,  1617,  1646,  1659,  1670,  1680,  1679,  1683,
    1683,  1684,  1685,  1687,  1695,  1702,  1709,  1716,  1723,  1730,
    1737,  1744,  1751,  1760,  1771,  1782,  1793,  1804,  1815,  1827,
    1846,  1856,  1865,  1881,  1880,  1893,  1893,  1894,  1894,  1894,
    1894,  1896,  1905,  1920,  1939,  1938,  1954,  1954,  1955,  1955,
    1955,  1955,  1957,  1966,  1982,  1981,  1987,  1987,  1988,  1992,
    1996,  2000,  2004,  2008,  2012,  2022,  2021,  2043,  2043,  2044,
    2044,  2044,  2046,  2053,  2052,  2058,  2058,  2059,  2063,  2067,
    2071,  2075,  2079,  2083,  2087,  2097,  2096,  2246,  2246,  2247,
    2247,  2248,  2248,  2248,  2248,  2249,  2249,  2249,  2250,  2250,
    2250,  2251,  2251,  2251,  2252,  2252,  2252,  2253,  2253,  2256,
    2268,  2280,  2289,  2301,  2313,  2319,  2323,  2331,  2341,  2340,
    2344,  2344,  2345,  2349,  2357,  2361,  2365,  2371,  2412,  2423,
    2434,  2449,  2460,  2473,  2486,  2495,  2531,  2530,  2553,  2553,
    2554,  2554,  2554,  2556,  2565,  2578,  2577,  2599,  2599,  2600,
    2600,  2600,  2602,  2611,  2624,  2623,  2644,  2644,  2645,  2645,
    2647,  2660,  2659,  2673,  2673,  2674,  2674,  2674,  2676,  2685,
    2697,  2700,  2700,  2701,  2701,  2701,  2702,  2702,  2703,  2703,
    2704,  2704,  2705,  2705,  2706,  2706,  2707,  2708,  2708,  2709,
    2709,  2710,  2710,  2711,  2711,  2712,  2712,  2713,  2713,  2714,
    2714,  2715,  2716,  2716,  2717,  2717,  2718,  2719,  2719,  2720,
    2720,  2721,  2721,  2722,  2723,  2723,  2724,  2724,  2725,  2725,
    2726,  2726,  2727,  2727,  2728,  2728,  2733,  2739,  2745,  2751,
    2756,  2761,  2767,  2773,  2779,  2785,  2791,  2797,  2803,  2809,
    2815,  2821,  2827,  2833,  2844,  2850,  2859,  2865,  2871,  2877,
    2881,  2887,  2891,  2897,  2903,  2909,  2915,  2921,  2927,  2933,
    2939,  2950,  2956,  2962,  2968,  2974,  2983,  3015,  3033,  3039,
    3048,  3054,  3059,  3066,  3065,  3071,  3071,  3072,  3076,  3080,
    3084,  3088,  3092,  3096,  3100,  3104,  3108,  3112,  3116,  3120,
    3124,  3128,  3132,  3139,  3138,  3144,  3144,  3145,  3149,  3153,
    3157,  3161,  3165,  3169,  3173,  3177,  3181,  3185,  3189,  3193,
    3197,  3201,  3205,  3211,  3217,  3223,  3229,  3235,  3245,  3244,
    3270,  3270,  3271,  3271,  3272,  3273,  3274,  3275,  3276,  3279,
    3285,  3292,  3291,  3296,  3296,  3297,  3301,  3307,  3330,  3340,
    3339,  3382,  3382,  3383,  3387,  3396,  3399,  3399,  3400,  3400,
    3401,  3402,  3403,  3404,  3405,  3406,  3407,  3408,  3409,  3410,
    3411,  3412,  3413,  3416,  3422,  3428,  3434,  3440,  3446,  3452,
    3458,  3464,  3470,  3476,  3482,  3488,  3494,  3503,  3506,  3506,
    3507,  3507,  3507,  3508,  3509,  3510,  3511,  3514,  3520,  3526,
    3540,  3546,  3552
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
  "IRCD_FLAGS", "FLATTEN_LINKS", "FFAILED_OPERLOG", "FOPERLOG", 
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
  "REDIRPORT", "REDIRSERV", "REHASH", "REMOTE", "REMOTEBAN", "RESTRICTED", 
  "RSA_PRIVATE_KEY_FILE", "RSA_PUBLIC_KEY_FILE", "RESV", "RESV_EXEMPT", 
  "SECONDS", "MINUTES", "HOURS", "DAYS", "WEEKS", "SENDQ", 
  "SEND_PASSWORD", "SERVERHIDE", "SERVERINFO", "SERVLINK_PATH", "SID", 
  "TKLINE_EXPIRE_NOTICES", "T_SHARED", "T_CLUSTER", "TYPE", "SHORT_MOTD", 
  "SILENT", "SPOOF", "SPOOF_NOTICE", "STATS_I_OPER_ONLY", 
  "STATS_K_OPER_ONLY", "STATS_O_OPER_ONLY", "STATS_P_OPER_ONLY", "TBOOL", 
  "TMASKED", "T_REJECT", "TS_MAX_DELTA", "TS_WARN_DELTA", "TWODOTS", 
  "T_ALL", "T_BOTS", "T_CALLERID", "T_CCONN", "T_CLIENT_FLOOD", "T_DEBUG", 
  "T_DRONE", "T_EXTERNAL", "T_FULL", "T_INVISIBLE", "T_IPV4", "T_IPV6", 
  "T_LOCOPS", "T_LOGPATH", "T_L_CRIT", "T_L_DEBUG", "T_L_ERROR", 
  "T_L_INFO", "T_L_NOTICE", "T_L_TRACE", "T_L_WARN", "T_MAX_CLIENTS", 
  "T_NCHANGE", "T_OPERWALL", "T_REJ", "T_SERVNOTICE", "T_SKILL", "T_SPY", 
  "T_UNAUTH", "T_UNRESV", "T_UNXLINE", "T_WALLOP", "THROTTLE_TIME", 
  "TRUE_NO_OPER_FLOOD", "UNKLINE", "USER", "USE_EGD", "USE_EXCEPT", 
  "USE_INVEX", "USE_KNOCK", "USE_LOGGING", "USE_WHOIS_ACTUALLY", "VHOST", 
  "VHOST6", "XLINE", "WARN", "WARN_NO_NLINE", "';'", "'}'", "'{'", "'='", 
  "','", "$accept", "conf", "conf_item", "timespec_", "timespec", 
  "sizespec_", "sizespec", "modules_entry", "modules_items", 
  "modules_item", "modules_module", "modules_path", "serverinfo_entry", 
  "serverinfo_items", "serverinfo_item", 
  "serverinfo_rsa_private_key_file", "serverinfo_name", "serverinfo_sid", 
  "serverinfo_description", "serverinfo_network_name", 
  "serverinfo_network_desc", "serverinfo_vhost", "serverinfo_vhost6", 
  "serverinfo_max_clients", "serverinfo_hub", "admin_entry", 
  "admin_items", "admin_item", "admin_name", "admin_email", 
  "admin_description", "logging_entry", "logging_items", "logging_item", 
  "logging_path", "logging_oper_log", "logging_gline_log", 
  "logging_fuserlog", "logging_ffailed_operlog", "logging_foperlog", 
  "logging_log_level", "logging_use_logging", "oper_entry", "@1", 
  "oper_name_b", "oper_items", "oper_item", "oper_name", "oper_name_t", 
  "oper_user", "oper_password", "oper_encrypted", "oper_hidden_admin", 
  "oper_rsa_public_key_file", "oper_class", "oper_global_kill", 
  "oper_remote", "oper_kline", "oper_xline", "oper_unkline", "oper_gline", 
  "oper_nick_changes", "oper_die", "oper_rehash", "oper_admin", 
  "oper_flags", "@2", "oper_flags_items", "oper_flags_item", 
  "oper_flags_item_atom", "class_entry", "@3", "class_name_b", 
  "class_items", "class_item", "class_name", "class_name_t", 
  "class_ping_time", "class_number_per_ip", "class_connectfreq", 
  "class_max_number", "class_max_global", "class_max_local", 
  "class_max_ident", "class_sendq", "listen_entry", "@4", "listen_items", 
  "listen_item", "listen_port", "port_items", "port_item", 
  "listen_address", "listen_host", "auth_entry", "@5", "auth_items", 
  "auth_item", "auth_user", "auth_passwd", "auth_spoof_notice", 
  "auth_class", "auth_flags", "@6", "auth_flags_items", "auth_flags_item", 
  "auth_flags_item_atom", "auth_kline_exempt", "auth_need_ident", 
  "auth_exceed_limit", "auth_can_flood", "auth_no_tilde", 
  "auth_gline_exempt", "auth_spoof", "auth_redir_serv", "auth_redir_port", 
  "auth_need_password", "resv_entry", "@7", "resv_items", "resv_item", 
  "resv_creason", "resv_channel", "resv_nick", "shared_entry", "@8", 
  "shared_items", "shared_item", "shared_name", "shared_user", 
  "shared_type", "@9", "shared_types", "shared_type_item", 
  "cluster_entry", "@10", "cluster_items", "cluster_item", "cluster_name", 
  "cluster_type", "@11", "cluster_types", "cluster_type_item", 
  "connect_entry", "@12", "connect_name_b", "connect_items", 
  "connect_item", "connect_name", "connect_name_t", "connect_host", 
  "connect_send_password", "connect_accept_password", "connect_port", 
  "connect_aftype", "connect_fakename", "connect_flags", "@13", 
  "connect_flags_items", "connect_flags_item", 
  "connect_rsa_public_key_file", "connect_encrypted", "connect_cryptlink", 
  "connect_compressed", "connect_auto", "connect_hub_mask", 
  "connect_leaf_mask", "connect_class", "connect_cipher_preference", 
  "kill_entry", "@14", "kill_items", "kill_item", "kill_user", 
  "kill_reason", "deny_entry", "@15", "deny_items", "deny_item", 
  "deny_ip", "deny_reason", "exempt_entry", "@16", "exempt_items", 
  "exempt_item", "exempt_ip", "gecos_entry", "@17", "gecos_items", 
  "gecos_item", "gecos_name", "gecos_reason", "general_entry", 
  "general_items", "general_item", "general_gline_min_cidr", 
  "general_gline_min_cidr6", "general_burst_away", 
  "general_use_whois_actually", "general_tkline_expire_notices", 
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
  "general_pace_wait_simple", "general_short_motd", 
  "general_no_oper_flood", "general_true_no_oper_flood", 
  "general_oper_pass_resv", "general_message_locale", "general_idletime", 
  "general_dots_in_ident", "general_maximum_links", "general_max_targets", 
  "general_servlink_path", "general_default_cipher_preference", 
  "general_compression_level", "general_use_egd", "general_egdpool_path", 
  "general_ping_cookie", "general_disable_auth", "general_throttle_time", 
  "general_oper_umodes", "@18", "umode_oitems", "umode_oitem", 
  "general_oper_only_umodes", "@19", "umode_items", "umode_item", 
  "general_min_nonwildcard", "general_min_nonwildcard_simple", 
  "general_default_floodcount", "general_client_flood", 
  "general_dot_in_ip6_addr", "gline_entry", "@20", "gline_items", 
  "gline_item", "gline_enable", "gline_duration", "gline_logging", "@21", 
  "gline_logging_types", "gline_logging_type_item", "gline_user", 
  "gline_server", "gline_action", "@22", "gdeny_types", "gdeny_type_item", 
  "channel_entry", "channel_items", "channel_item", 
  "channel_disable_local_channels", "channel_use_except", 
  "channel_use_invex", "channel_use_knock", "channel_knock_delay", 
  "channel_knock_delay_channel", "channel_invite_ops_only", 
  "channel_max_chans_per_user", "channel_quiet_on_ban", 
  "channel_max_bans", "channel_default_split_user_count", 
  "channel_default_split_server_count", "channel_no_create_on_split", 
  "channel_no_join_on_split", "serverhide_entry", "serverhide_items", 
  "serverhide_item", "serverhide_flatten_links", 
  "serverhide_hide_servers", "serverhide_links_delay", 
  "serverhide_hidden", "serverhide_disable_hidden", 
  "serverhide_hide_server_ips", 0
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
     475,   476,   477,   478,   479,   480,   481,   482,   483,    59,
     125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   234,   235,   235,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   237,   237,   238,   238,
     238,   238,   238,   238,   239,   239,   240,   240,   240,   240,
     241,   242,   242,   243,   243,   243,   244,   245,   246,   247,
     247,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   260,   261,   261,   261,   261,   262,
     263,   264,   265,   266,   266,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   268,   269,   270,   271,   272,   273,
     274,   274,   274,   274,   274,   274,   274,   275,   277,   276,
     278,   278,   279,   279,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   300,   299,   301,   301,   302,   302,   303,   303,   303,
     303,   303,   303,   303,   303,   303,   303,   303,   303,   303,
     303,   303,   305,   304,   306,   306,   307,   307,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   320,   319,
     321,   321,   322,   322,   322,   322,   323,   324,   324,   325,
     325,   326,   327,   329,   328,   330,   330,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   332,   333,   334,   335,   337,   336,   338,
     338,   339,   339,   340,   340,   340,   340,   340,   340,   340,
     340,   340,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   352,   351,   353,   353,   354,   354,   354,
     354,   355,   356,   357,   359,   358,   360,   360,   361,   361,
     361,   361,   362,   363,   365,   364,   366,   366,   367,   367,
     367,   367,   367,   367,   367,   369,   368,   370,   370,   371,
     371,   371,   372,   374,   373,   375,   375,   376,   376,   376,
     376,   376,   376,   376,   376,   378,   377,   379,   379,   380,
     380,   381,   381,   381,   381,   381,   381,   381,   381,   381,
     381,   381,   381,   381,   381,   381,   381,   381,   381,   382,
     383,   384,   385,   386,   387,   388,   388,   389,   391,   390,
     392,   392,   393,   393,   393,   393,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   404,   403,   405,   405,
     406,   406,   406,   407,   408,   410,   409,   411,   411,   412,
     412,   412,   413,   414,   416,   415,   417,   417,   418,   418,
     419,   421,   420,   422,   422,   423,   423,   423,   424,   425,
     426,   427,   427,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     452,   453,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   475,   474,   476,   476,   477,   477,   477,
     477,   477,   477,   477,   477,   477,   477,   477,   477,   477,
     477,   477,   477,   479,   478,   480,   480,   481,   481,   481,
     481,   481,   481,   481,   481,   481,   481,   481,   481,   481,
     481,   481,   481,   482,   483,   484,   485,   486,   488,   487,
     489,   489,   490,   490,   490,   490,   490,   490,   490,   491,
     492,   494,   493,   495,   495,   496,   496,   497,   498,   500,
     499,   501,   501,   502,   502,   503,   504,   504,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   521,
     522,   522,   522,   522,   522,   522,   522,   523,   524,   525,
     526,   527,   528
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
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     5,     2,     1,     1,     1,     1,     1,     4,
       4,     4,     5,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     0,     7,
       0,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     0,     5,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     7,     0,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       4,     4,     4,     4,     4,     4,     4,     4,     0,     6,
       2,     1,     1,     1,     1,     1,     4,     3,     1,     1,
       3,     4,     4,     0,     6,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     0,     5,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     0,     6,     2,     1,     1,     1,     1,
       1,     4,     4,     4,     0,     6,     2,     1,     1,     1,
       1,     1,     4,     4,     0,     5,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     6,     2,     1,     1,
       1,     1,     4,     0,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     7,     0,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     4,     4,     4,     4,     4,     4,     4,     0,     5,
       3,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     0,     6,     2,     1,
       1,     1,     1,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     4,     4,     0,     6,     2,     1,     1,     1,
       4,     0,     6,     2,     1,     1,     1,     1,     4,     4,
       5,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     0,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     0,     6,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     0,     5,     3,     1,     1,     1,     4,     4,     0,
       5,     3,     1,     1,     1,     5,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     5,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       2,     0,     1,     0,     0,   213,     0,   172,   315,   375,
     384,   391,     0,   548,   366,   198,     0,     0,   108,   263,
       0,     0,   274,   295,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,     0,
     174,   317,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,    74,    75,    77,    76,     0,   592,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   577,   578,   579,   580,   581,   583,   584,
     585,   586,   587,   582,   588,   589,   590,   591,   189,     0,
     175,   340,     0,   318,     0,     0,     0,   455,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   523,
       0,   503,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   402,   452,   453,   450,   454,   451,   413,   403,   404,
     441,   405,   406,   407,   408,   409,   410,   411,   412,   446,
     414,   415,   416,   418,   423,   419,   421,   420,   436,   422,
     424,   425,   426,   427,   430,   428,   417,   429,   432,   440,
     442,   443,   433,   434,   448,   449,   445,   435,   431,   438,
     439,   437,   444,   447,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    85,    86,
      87,    90,    92,    91,    88,    89,    45,     0,     0,     0,
      42,    43,    44,   134,     0,   111,     0,   616,     0,     0,
       0,     0,     0,     0,     0,   609,   610,   611,   612,   614,
     613,   615,    61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,    58,    51,    60,    54,    55,
      56,    52,    59,    57,    53,     0,     0,     0,     0,     0,
       0,    73,   232,     0,     0,     0,   237,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   216,
     217,   218,   227,   219,   220,   221,   222,   223,   230,   224,
     225,   226,   228,   229,   231,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     576,     0,     0,   381,     0,     0,     0,   378,   379,   380,
     389,     0,     0,   387,   388,   397,     0,     0,     0,   394,
     395,   396,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   401,   558,   569,     0,     0,
     561,     0,     0,     0,   551,   552,   553,   554,   555,   556,
     557,   372,     0,     0,     0,   369,   370,   371,   205,     0,
       0,     0,     0,   201,   202,   203,   204,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,     0,
      41,     0,   270,     0,     0,     0,     0,   266,   267,   268,
     269,     0,     0,     0,     0,     0,     0,     0,   608,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,   281,     0,   284,     0,     0,   277,   278,   279,   280,
     301,     0,   303,     0,   298,   299,   300,     0,     0,     0,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   215,     0,     0,
       0,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   575,   187,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   338,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   348,     0,     0,     0,     0,
       0,     0,     0,     0,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   336,   333,   335,   334,   332,   329,   330,
     331,   337,     0,     0,     0,   377,     0,     0,   386,     0,
       0,     0,   393,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,     0,     0,     0,   400,     0,
       0,     0,     0,     0,     0,     0,   550,     0,     0,     0,
     368,     0,     0,     0,     0,   200,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      82,     0,     0,    40,   132,     0,     0,     0,     0,   151,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,   114,   115,   116,   129,   117,
     130,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   131,     0,     0,     0,     0,   265,     0,     0,
       0,     0,     0,     0,   607,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,     0,     0,     0,
     276,     0,     0,     0,   297,    81,    80,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   214,   604,   603,   593,    26,    26,    26,
      26,    26,    28,    27,   597,   598,   602,   600,   605,   606,
     599,   601,   594,   595,   596,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   176,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   319,     0,     0,   376,     0,   385,
       0,     0,   392,   466,   470,   458,   484,   497,   496,   545,
     501,   464,   547,   492,   499,   465,   456,   457,   473,   462,
     491,   463,   461,   475,   474,   493,   469,   468,   467,   494,
     490,   543,   544,   487,   527,   541,   528,   529,   536,   530,
     539,   542,   532,   537,   533,   538,   531,   535,   534,   540,
       0,   526,   489,   507,   521,   508,   509,   516,   510,   519,
     522,   512,   517,   513,   518,   511,   515,   514,   520,     0,
     506,   483,   485,   500,   495,   460,   486,   481,   482,   479,
     480,   477,   478,   472,   471,    34,    34,    34,    36,    35,
     546,   502,   488,   498,   459,   476,     0,     0,     0,     0,
       0,     0,   549,     0,     0,   367,     0,     0,   209,     0,
     208,   199,    98,    99,    97,    96,   100,   106,   101,   105,
     103,   104,   102,    95,    94,   107,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,     0,     0,
       0,   264,   621,   617,   620,   622,   618,   619,    65,    71,
      63,    67,    66,    62,    64,    70,    68,    69,     0,     0,
       0,   275,     0,     0,   296,   256,   236,   255,   247,   248,
     244,   250,   246,   245,   252,   249,     0,   251,   243,     0,
     240,   242,   258,   254,   253,   262,   257,   234,   261,   260,
     259,   235,   233,    29,    30,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   173,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   316,   382,   383,   390,
     398,   399,   524,     0,   504,     0,    37,    38,    39,   574,
     573,     0,   572,   560,   559,   566,   565,     0,   564,   568,
     567,   374,   373,   212,   211,     0,   206,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   109,   272,   273,   271,
     282,   288,   292,   294,   293,   291,   289,   290,     0,   287,
     283,   302,   307,   311,   314,   313,   312,   310,   308,   309,
       0,   306,   241,   238,     0,   192,   194,   196,   195,   193,
     188,   191,   190,   197,   343,   345,   346,   361,   365,   364,
     360,   359,   358,   347,   355,   356,   353,   354,   352,     0,
     351,   341,   362,   363,   339,   344,   357,   342,   525,   505,
     570,     0,   562,     0,   210,   207,   150,   140,   148,   137,
     165,   163,   162,   157,   166,   170,   159,   167,     0,   169,
     164,   158,   171,   168,   160,   161,     0,   154,   156,   146,
     141,   138,   143,   133,   147,   136,   149,   142,   139,   145,
     135,   144,   285,     0,   304,     0,   239,   349,     0,   571,
     563,   155,   152,     0,   286,   305,   350,   153
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,    24,   812,   813,   948,   949,    25,   249,   250,
     251,   252,    26,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,    27,    71,    72,    73,    74,
      75,    28,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,    29,    61,   254,   733,   734,   735,   255,   736,
     737,   738,   739,   740,   741,   742,   743,   744,   745,   746,
     747,   748,   749,   750,   751,   752,   992,  1236,  1237,  1238,
      30,    50,   109,   564,   565,   566,   110,   567,   568,   569,
     570,   571,   572,   573,   574,    31,    58,   452,   453,   454,
     969,   970,   455,   456,    32,    48,   318,   319,   320,   321,
     322,   323,   324,   524,  1049,  1050,  1051,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,    33,    62,   476,
     477,   478,   479,   480,    34,    65,   505,   506,   507,   508,
     509,   777,  1158,  1159,    35,    66,   513,   514,   515,   516,
     782,  1170,  1171,    36,    51,   112,   593,   594,   595,   113,
     596,   597,   598,   599,   600,   601,   602,   845,  1199,  1200,
     603,   604,   605,   606,   607,   608,   609,   610,   611,    37,
      57,   444,   445,   446,   447,    38,    52,   356,   357,   358,
     359,    39,    53,   362,   363,   364,    40,    54,   368,   369,
     370,   371,    41,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   405,   929,   930,   218,   403,   910,   911,   219,   220,
     221,   222,   223,    42,    56,   433,   434,   435,   436,   437,
     682,  1117,  1118,   438,   439,   440,   679,  1111,  1112,    43,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    44,   264,   265,   266,
     267,   268,   269,   270,   271
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -933
static const short yypact[] =
{
    -933,   706,  -933,  -155,  -224,  -933,  -209,  -933,  -933,  -933,
    -933,  -933,  -198,  -933,  -933,  -933,  -190,  -165,  -933,  -933,
    -151,  -148,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,   286,  -142,   529,
     -34,    -2,   -84,   -72,   -70,   407,   -65,   -56,   -53,   368,
     183,    73,   -21,   405,   276,   -15,    -3,  -933,    32,    34,
      50,    11,  -933,  -933,  -933,  -933,   642,  -933,    53,    56,
      62,    65,    67,    74,    76,    82,    83,    91,    92,    96,
      97,    98,   172,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,    30,
    -933,  -933,    85,  -933,   201,    25,    10,  -933,   101,   103,
     106,   107,   109,   116,   117,   121,   122,   124,   132,   133,
     134,   136,   138,   139,   140,   141,   142,   144,   150,   156,
     171,   173,   175,   177,   179,   181,   182,   186,   187,  -933,
     189,  -933,   196,   197,   199,   203,   204,   209,   210,   213,
     218,   220,   221,   222,   223,   224,   227,   228,   229,   232,
       8,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,   301,    66,   216,  -933,   233,   234,
     236,   238,   241,   244,   248,   251,   145,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,   256,   258,    24,
    -933,  -933,  -933,  -933,   146,  -933,     9,  -933,   265,   272,
     273,   274,   275,   279,   202,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,   284,   285,   288,   290,   292,   293,   295,
     297,   302,   305,   154,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,    29,    84,   102,   123,   246,
     205,  -933,  -933,   307,   314,   315,  -933,   316,   317,   319,
     320,   323,   324,   325,   327,   328,   332,   334,   166,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,   282,   362,   225,   386,   386,
     431,   445,   396,   397,   400,   409,   415,   426,   427,   345,
    -933,   696,   690,  -933,   372,   373,    70,  -933,  -933,  -933,
    -933,   374,    27,  -933,  -933,  -933,   378,   381,    43,  -933,
    -933,  -933,   438,   386,   439,   386,   496,   480,   506,   455,
     456,   457,   515,   498,   463,   519,   522,   523,   464,   386,
     472,   527,   510,   475,   530,   533,   534,   386,   535,   520,
     536,   537,   489,   441,   499,   442,   386,   386,   501,   539,
     504,   505,   -77,   -68,   508,   509,   386,   386,   560,   386,
     511,   513,   516,   526,   466,  -933,  -933,  -933,   473,   476,
    -933,   478,   485,   252,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,   486,   488,     7,  -933,  -933,  -933,  -933,   490,
     491,   493,    17,  -933,  -933,  -933,  -933,   564,   572,   581,
     587,   398,   589,   591,   556,   507,  -933,   598,   599,   514,
    -933,   518,  -933,   521,   524,   525,     2,  -933,  -933,  -933,
    -933,   569,   570,   571,   575,   576,   386,   531,  -933,   619,
     585,   628,   630,   631,   632,   633,   652,   635,   636,   549,
    -933,  -933,   551,  -933,   552,    95,  -933,  -933,  -933,  -933,
    -933,   557,  -933,    54,  -933,  -933,  -933,   559,   561,   562,
    -933,   616,   653,   618,   573,   626,   627,   634,   638,   639,
     664,   684,   668,   671,   641,   678,   590,  -933,   592,   594,
     595,   -93,   596,   597,   601,   602,   604,   606,   607,   608,
     609,   610,   612,  -933,  -933,   611,   614,   615,   620,   621,
     623,   624,   629,   637,    19,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,   643,   644,   645,   646,
     647,   648,   651,   655,   657,  -933,   661,   662,   665,   666,
     667,   669,   670,   168,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,   687,   702,   622,  -933,   704,   674,  -933,   708,
     710,   675,  -933,   683,   689,   691,   695,   698,   699,   700,
     705,   714,   715,   717,   718,   719,   720,   721,   722,   723,
     724,   725,   726,   727,   728,   729,   730,   731,   733,   734,
     735,   736,   737,   738,   701,   739,   732,   740,   741,   742,
     743,   744,   745,   746,   747,   748,   749,   750,   751,   752,
     753,   -10,   754,   755,   756,   757,   758,   759,  -933,   693,
     386,   682,   703,   760,   790,   762,  -933,   791,   793,   763,
    -933,   821,   849,   774,   764,  -933,   765,   766,   767,   768,
     769,   770,   771,   772,   773,   775,   776,   777,   778,   779,
    -933,   780,   781,  -933,  -933,   782,   783,   784,   785,  -933,
     786,   787,   788,   789,   792,   794,   795,   796,   797,   798,
     799,   800,   801,    18,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,   850,   863,   871,   805,  -933,   806,   807,
     808,   809,   810,   811,  -933,   812,   813,   814,   815,   816,
     817,   818,   819,   820,   822,  -933,   872,   823,   873,   824,
    -933,   882,   825,   827,  -933,  -933,  -933,  -933,   829,   830,
     831,   761,   832,   833,   834,   835,   836,   837,   838,   839,
     840,   841,   842,  -933,  -933,  -933,  -933,   386,   386,   386,
     386,   386,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,   386,   901,   903,   928,   930,
     914,   950,   386,   560,   844,  -933,   934,   -67,   686,   935,
     936,   688,   692,   694,   937,   846,   939,   940,   941,   942,
     961,   944,   945,   857,  -933,   858,   859,  -933,   860,  -933,
     861,   862,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -193,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -176,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,   560,   560,   560,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,    20,   864,   865,    31,
     866,   867,  -933,   868,   869,  -933,   870,   874,   679,  -138,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,   916,   960,
     925,   926,   875,   929,   932,   933,   938,   964,   943,   966,
     946,   947,   970,   948,   971,   949,   883,  -933,   884,   886,
     887,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,   888,   169,
     889,  -933,   891,   460,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,   379,  -933,  -933,  -131,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,   892,   897,
     898,   899,   900,   902,   904,   905,   906,  -933,   907,   908,
     909,   910,   911,   912,   913,   915,   917,   918,   321,   919,
     920,   921,   922,   923,   924,   927,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,   701,  -933,   732,  -933,  -933,  -933,  -933,
    -933,  -101,  -933,  -933,  -933,  -933,  -933,   -98,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  1008,  -933,   774,   931,   951,
     952,   953,   462,   954,   955,   956,   957,   958,   959,   962,
     963,   965,   967,   968,   969,   972,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,   -71,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
      -4,  -933,  -933,  -933,   761,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,    47,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,    20,  -933,    31,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,   553,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,    93,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,   169,  -933,   460,  -933,  -933,   321,  -933,
    -933,  -933,  -933,   462,  -933,  -933,  -933,  -933
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -933,  -933,  -933,  -449,  -338,  -932,  -416,  -933,  -933,   625,
    -933,  -933,  -933,  -933,   580,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  1061,  -933,  -933,
    -933,  -933,  -933,   973,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,   410,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -398,   -83,
    -933,  -933,  -933,  -933,   593,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,   707,  -933,
    -933,    28,  -933,  -933,  -933,  -933,  -933,   843,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,   -20,   112,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
     697,  -933,  -933,  -933,  -933,  -933,  -933,   658,  -933,  -933,
    -933,  -933,  -933,   -91,  -933,  -933,  -933,   654,  -933,  -933,
    -933,  -933,   -90,  -933,  -933,  -933,  -933,   577,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,   -94,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,   802,  -933,  -933,  -933,  -933,  -933,   847,  -933,
    -933,  -933,  -933,  -933,   804,  -933,  -933,  -933,  -933,   803,
    -933,  -933,  -933,  -933,   998,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,    64,  -933,  -933,  -933,    69,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,   826,  -933,  -933,  -933,
    -933,  -933,   -39,  -933,  -933,  -933,  -933,  -933,   -36,  -933,
    -933,  1084,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,   974,  -933,
    -933,  -933,  -933,  -933,  -933
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, parse error.  */
#define YYTABLE_NINF -1
static const unsigned short yytable[] =
{
     542,   543,   672,   472,   945,   946,   947,    47,   441,   117,
     472,   365,    67,  1106,  1107,  1108,   118,   119,   448,   714,
     554,   120,    49,   715,   473,   246,   360,   121,   360,   541,
     501,   473,  1109,    55,   122,   624,  1102,   626,   123,   124,
    1103,    59,   716,  1115,   365,   125,    68,   555,   126,   127,
     128,   640,   129,  1104,   717,   510,    69,  1105,   130,   648,
     807,   808,   809,   810,   811,   718,    60,   441,   657,   658,
     719,   353,   131,   132,    45,    46,   133,   720,   669,   670,
      63,   673,   134,    64,   721,   510,   135,   136,   722,    76,
     137,  1126,   449,   138,   139,  1127,   501,   450,  1173,   663,
     664,   723,  1174,   140,   141,   361,   108,   361,   665,   666,
     142,   143,   671,   144,   145,   146,   147,   474,   556,   557,
     558,   366,    70,   559,   474,  1079,  1080,   148,  1210,   724,
     560,  1212,  1211,   247,   725,  1213,   149,   150,   111,   151,
     502,   152,   153,   561,   475,   154,   227,   114,   763,   442,
     354,   475,   367,   726,   366,   272,   451,   562,  1252,   115,
     248,   116,  1253,   727,   728,   511,   224,   302,   729,   575,
     155,   576,   156,    77,   577,   225,   157,   563,   226,   578,
     158,   159,   160,   161,   246,   367,   303,   162,   163,   273,
     304,   579,   580,   581,   164,   511,   503,   582,  1110,   228,
     229,   230,   353,   257,    78,    79,   502,   231,   442,  1116,
     256,    80,   355,   253,   305,   583,   295,   448,   306,   584,
     585,   512,   165,   166,   443,  1254,   167,   307,   296,  1255,
     274,   168,   756,   308,   730,   731,   169,   689,   424,   232,
     258,   300,   517,   586,   732,   587,   504,   694,  1006,   834,
     309,   512,  1151,   426,   469,   259,   427,   617,   588,    81,
      82,   351,   503,   518,   297,   275,   298,   276,   277,    83,
      84,   260,   233,   621,   261,   262,  1257,   272,   310,   589,
    1258,   354,   299,   443,   783,   335,   311,    67,   336,    85,
      86,   449,   247,   263,   337,   428,   450,   338,   429,   339,
     614,   312,   426,   278,    87,   427,   340,   590,   341,   313,
     314,   273,   504,    88,   342,   343,   352,   279,   591,   248,
    1152,    68,  1262,   344,   345,   779,  1263,   592,   346,   347,
     348,    69,  1194,   372,  1195,   373,   315,   316,   374,   375,
     234,   376,   957,   355,   428,   430,  1196,   429,   377,   378,
    1197,  1153,   274,   379,   380,   451,   381,   280,  1063,  1064,
    1065,  1066,  1067,   431,   382,   383,   384,   235,   385,   227,
     386,   387,   388,   389,   390,   465,   391,   471,   281,   282,
    1154,  1155,   392,   317,   499,  1156,   519,   275,   393,   276,
     277,    89,    90,    91,   430,  1157,   536,    70,   853,  1038,
    1039,   540,   349,   394,   538,   395,   257,   396,   117,   397,
    1198,   398,   431,   399,   400,   118,   119,  1076,   401,   402,
     120,   404,   228,   229,   230,   278,   121,  1040,   406,   407,
     231,   408,   487,   122,   520,   409,   410,   123,   124,   279,
    1041,   411,   412,   258,   125,   413,  1042,   126,   127,   128,
     414,   129,   415,   416,   417,   418,   419,   130,   259,   420,
     421,   422,   232,  1043,   423,   457,   458,  1220,   459,   432,
     460,   131,   132,   461,   260,   133,   462,   261,   262,   280,
     463,   134,   685,   464,   539,   135,   136,  1068,   467,   137,
     468,  1044,   138,   139,  1075,   233,   263,   481,  1221,  1045,
     281,   282,   140,   141,   482,   483,   484,   485,   541,   142,
     143,   486,   144,   145,   146,   147,   489,   490,   432,   714,
     491,  1222,   492,   715,   493,   494,   148,   495,  1223,   496,
      77,  1047,  1224,  1225,   497,   149,   150,   498,   151,   521,
     152,   153,   716,  1162,   154,  1226,   522,   523,   525,   526,
    1048,   527,   528,   544,   717,   529,   530,   531,  1220,   532,
     533,    78,    79,   234,   534,   718,   535,   545,    80,   155,
     719,   156,   546,   547,   553,   157,   548,   720,  1227,   158,
     159,   160,   161,  1228,   721,   549,   162,   163,   722,  1221,
     235,   550,  1229,   164,   700,   701,   702,   703,   704,   705,
     706,   723,   551,   552,   612,   613,   616,  1230,  1231,  1232,
     619,  1163,  1222,   620,   623,   625,    81,    82,   627,  1223,
     628,   165,   166,  1224,  1225,   167,    83,    84,   629,   724,
     168,   630,   631,   632,   725,   169,  1226,   633,   634,   635,
     639,   636,  1164,   302,   637,   638,    85,    86,   641,   642,
     643,   644,   645,   726,  1165,   646,   647,   649,   651,   652,
     650,    87,   303,   727,   728,   653,   304,  1233,   729,  1227,
      88,  1166,  1167,   654,   656,   655,  1168,   659,  1234,   660,
     661,   662,   671,  1229,   667,   668,  1169,   674,  1235,   675,
     305,   575,   676,   576,   306,   678,   577,   554,  1230,  1231,
    1232,   578,   677,   307,   696,   680,     2,     3,   681,   308,
     683,     4,   697,   579,   580,   581,     5,   684,   687,   582,
     688,   698,   691,   692,   555,   693,   309,   699,     6,   707,
       7,   708,   709,     8,   730,   731,   710,   583,   711,   712,
       9,   584,   585,   713,   732,   758,   759,   760,    89,    90,
      91,   761,   762,   753,   310,    10,   754,   755,  1233,   765,
     764,   766,   311,    11,    12,   586,    13,   587,   767,  1234,
     768,   769,   770,   771,   772,   773,   774,   312,   775,  1235,
     588,  1038,  1039,   776,   778,   313,   314,    14,   785,   781,
     786,   787,   788,   789,   790,   556,   557,   558,    15,    16,
     559,   589,   792,   793,   797,   791,   798,   560,   799,  1040,
     794,   800,   315,   316,   795,   796,    17,   801,   802,   803,
     561,   804,  1041,   805,   806,   814,   815,   855,  1042,   590,
     816,   817,    18,   818,   562,   819,   820,   821,   822,   823,
     591,   824,   856,   825,   858,  1043,   826,   827,   860,   592,
     861,   857,   828,   829,   563,   830,   831,    19,   958,   317,
    1125,   832,  1081,   500,  1084,  1267,    20,    21,  1085,   833,
    1086,    22,    23,  1044,   470,   836,   837,   838,   839,   840,
     841,  1045,  1046,   842,   894,   895,   896,   843,   897,   844,
     898,   899,   900,   846,   847,   901,   968,   848,   849,   850,
     960,   851,   852,   859,   862,   902,   903,   904,   905,   906,
     907,   908,   863,  1047,   909,   913,   914,   915,   864,   916,
     865,   917,   918,   919,   866,   956,   920,   867,   868,   869,
     961,   963,  1048,   964,   870,   959,   921,   922,   923,   924,
     925,   926,   927,   871,   872,   928,   873,   874,   875,   876,
     877,   878,   879,   880,   881,   882,   883,   884,   885,   886,
     887,   966,   888,   889,   890,   891,   892,   893,   912,   931,
     932,   933,   934,   935,   936,   937,   938,   939,   940,   941,
     942,   943,   944,   950,   951,   952,   953,   954,   955,   967,
    1008,   962,   965,   971,   972,   973,   974,   975,   976,   977,
     978,   979,   980,  1009,   981,   982,   983,   984,   985,   986,
     987,  1010,  1028,  1030,   988,   989,   990,   991,   993,   994,
     995,   996,  1032,  1069,   997,  1070,   998,   999,  1000,  1001,
    1002,  1003,  1004,  1005,  1011,  1012,  1013,  1014,  1015,  1016,
    1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,
    1071,  1027,  1072,  1031,  1073,  1029,  1034,  1033,  1035,  1036,
    1037,  1052,  1053,  1054,  1055,  1056,  1057,  1058,  1059,  1060,
    1061,  1062,  1074,  1077,  1078,  1082,  1083,  1087,  1088,  1089,
    1090,  1091,  1092,  1093,  1094,  1095,  1096,  1097,  1098,  1099,
    1100,  1101,  1128,  1113,  1114,  1119,  1120,  1121,  1122,  1123,
    1129,  1130,  1131,  1124,  1137,  1133,  1139,  1132,  1134,  1135,
    1142,  1144,  1146,  1147,  1136,  1148,  1149,  1150,  1160,  1138,
    1161,  1175,  1140,  1141,  1143,  1145,  1176,  1177,  1178,  1179,
    1214,  1180,   301,  1181,  1182,  1183,  1184,  1185,  1186,  1187,
    1188,  1189,  1190,  1007,  1191,  1261,  1192,  1193,  1201,  1202,
    1203,  1204,  1205,  1206,  1256,  1215,  1207,   835,  1172,   695,
    1216,   537,  1264,   780,  1266,  1265,   618,   784,   425,  1209,
     854,   622,  1208,   757,  1260,  1259,   350,     0,     0,     0,
    1217,  1218,  1219,  1239,  1240,  1241,  1242,  1243,  1244,     0,
       0,  1245,  1246,     0,  1247,     0,  1248,  1249,  1250,     0,
       0,  1251,     0,   615,     0,     0,     0,     0,     0,   466,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   488,     0,
       0,     0,     0,     0,     0,     0,   690,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   686
};

static const short yycheck[] =
{
     338,   339,   418,     1,    14,    15,    16,   231,     1,     1,
       1,     1,     1,   945,   946,   947,     8,     9,     1,     1,
       1,    13,   231,     5,    22,     1,     1,    19,     1,   122,
       1,    22,    12,   231,    26,   373,   229,   375,    30,    31,
     233,   231,    24,    12,     1,    37,    35,    28,    40,    41,
      42,   389,    44,   229,    36,     1,    45,   233,    50,   397,
     153,   154,   155,   156,   157,    47,   231,     1,   406,   407,
      52,     1,    64,    65,   229,   230,    68,    59,   416,   417,
     231,   419,    74,   231,    66,     1,    78,    79,    70,   231,
      82,   229,    75,    85,    86,   233,     1,    80,   229,   176,
     177,    83,   233,    95,    96,    80,   140,    80,   176,   177,
     102,   103,   122,   105,   106,   107,   108,   115,    99,   100,
     101,   111,   111,   104,   115,   192,   193,   119,   229,   111,
     111,   229,   233,   109,   116,   233,   128,   129,   140,   131,
     111,   133,   134,   124,   142,   137,     1,   231,   486,   142,
      80,   142,   142,   135,   111,     1,   139,   138,   229,   231,
     136,   231,   233,   145,   146,   111,   231,     1,   150,     1,
     162,     3,   164,     1,     6,   231,   168,   158,   231,    11,
     172,   173,   174,   175,     1,   142,    20,   179,   180,    35,
      24,    23,    24,    25,   186,   111,   167,    29,   178,    54,
      55,    56,     1,     1,    32,    33,   111,    62,   142,   178,
     231,    39,   142,   140,    48,    47,   231,     1,    52,    51,
      52,   167,   214,   215,   217,   229,   218,    61,   231,   233,
      76,   223,   230,    67,   216,   217,   228,   230,   230,    94,
      38,   230,   140,    75,   226,    77,   217,   230,   230,   230,
      84,   167,    83,     1,   230,    53,     4,   230,    90,    87,
      88,   231,   167,   140,   232,   111,   232,   113,   114,    97,
      98,    69,   127,   230,    72,    73,   229,     1,   112,   111,
     233,    80,   232,   217,   230,   232,   120,     1,   232,   117,
     118,    75,   109,    91,   232,    43,    80,   232,    46,   232,
     230,   135,     1,   149,   132,     4,   232,   139,   232,   143,
     144,    35,   217,   141,   232,   232,   231,   163,   150,   136,
     151,    35,   229,   232,   232,   230,   233,   159,   232,   232,
     232,    45,    11,   232,    13,   232,   170,   171,   232,   232,
     195,   232,   680,   142,    43,    93,    25,    46,   232,   232,
      29,   182,    76,   232,   232,   139,   232,   203,   807,   808,
     809,   810,   811,   111,   232,   232,   232,   222,   232,     1,
     232,   232,   232,   232,   232,   230,   232,   231,   224,   225,
     211,   212,   232,   217,   230,   216,   140,   111,   232,   113,
     114,   219,   220,   221,    93,   226,   230,   111,   230,    20,
      21,   176,   230,   232,   122,   232,     1,   232,     1,   232,
      89,   232,   111,   232,   232,     8,     9,   833,   232,   232,
      13,   232,    54,    55,    56,   149,    19,    48,   232,   232,
      62,   232,   230,    26,   229,   232,   232,    30,    31,   163,
      61,   232,   232,    38,    37,   232,    67,    40,    41,    42,
     232,    44,   232,   232,   232,   232,   232,    50,    53,   232,
     232,   232,    94,    84,   232,   232,   232,     5,   232,   217,
     232,    64,    65,   232,    69,    68,   232,    72,    73,   203,
     232,    74,   230,   232,   122,    78,    79,   825,   232,    82,
     232,   112,    85,    86,   832,   127,    91,   232,    36,   120,
     224,   225,    95,    96,   232,   232,   232,   232,   122,   102,
     103,   232,   105,   106,   107,   108,   232,   232,   217,     1,
     232,    59,   232,     5,   232,   232,   119,   232,    66,   232,
       1,   152,    70,    71,   232,   128,   129,   232,   131,   232,
     133,   134,    24,    83,   137,    83,   232,   232,   232,   232,
     171,   232,   232,   122,    36,   232,   232,   232,     5,   232,
     232,    32,    33,   195,   232,    47,   232,   122,    39,   162,
      52,   164,   176,   176,   229,   168,   176,    59,   116,   172,
     173,   174,   175,   121,    66,   176,   179,   180,    70,    36,
     222,   176,   130,   186,   196,   197,   198,   199,   200,   201,
     202,    83,   176,   176,   232,   232,   232,   145,   146,   147,
     232,   151,    59,   232,   176,   176,    87,    88,   122,    66,
     140,   214,   215,    70,    71,   218,    97,    98,   122,   111,
     223,   176,   176,   176,   116,   228,    83,   122,   140,   176,
     176,   122,   182,     1,   122,   122,   117,   118,   176,   122,
     140,   176,   122,   135,   194,   122,   122,   122,   122,   122,
     140,   132,    20,   145,   146,   176,    24,   205,   150,   116,
     141,   211,   212,   232,   232,   176,   216,   176,   216,   140,
     176,   176,   122,   130,   176,   176,   226,   176,   226,   176,
      48,     1,   176,     3,    52,   229,     6,     1,   145,   146,
     147,    11,   176,    61,   140,   232,     0,     1,   232,    67,
     232,     5,   140,    23,    24,    25,    10,   232,   232,    29,
     232,   140,   232,   232,    28,   232,    84,   140,    22,   140,
      24,   140,   176,    27,   216,   217,   229,    47,   140,   140,
      34,    51,    52,   229,   226,   176,   176,   176,   219,   220,
     221,   176,   176,   232,   112,    49,   232,   232,   205,   140,
     229,   176,   120,    57,    58,    75,    60,    77,   140,   216,
     140,   140,   140,   140,   122,   140,   140,   135,   229,   226,
      90,    20,    21,   232,   232,   143,   144,    81,   229,   232,
     229,   229,   176,   140,   176,    99,   100,   101,    92,    93,
     104,   111,   176,   176,   140,   232,   122,   111,   140,    48,
     176,   140,   170,   171,   176,   176,   110,   176,   140,   229,
     124,   229,    61,   229,   229,   229,   229,   140,    67,   139,
     229,   229,   126,   229,   138,   229,   229,   229,   229,   229,
     150,   229,   140,   232,   140,    84,   232,   232,   140,   159,
     140,   229,   232,   232,   158,   232,   232,   151,   176,   217,
     181,   232,   176,   283,   176,  1263,   160,   161,   176,   232,
     176,   165,   166,   112,   249,   232,   232,   232,   232,   232,
     232,   120,   121,   232,   183,   184,   185,   232,   187,   232,
     189,   190,   191,   232,   232,   194,   122,   232,   232,   232,
     140,   232,   232,   229,   229,   204,   205,   206,   207,   208,
     209,   210,   229,   152,   213,   183,   184,   185,   229,   187,
     229,   189,   190,   191,   229,   232,   194,   229,   229,   229,
     140,   140,   171,   140,   229,   232,   204,   205,   206,   207,
     208,   209,   210,   229,   229,   213,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   140,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   140,
     140,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   140,   229,   229,   229,   229,   229,   229,
     229,   140,   140,   140,   232,   232,   232,   232,   232,   232,
     232,   232,   140,   122,   232,   122,   232,   232,   232,   232,
     232,   232,   232,   232,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     122,   229,   122,   229,   140,   232,   229,   232,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   122,   229,   140,   140,   140,   140,   232,   140,
     140,   140,   140,   122,   140,   140,   229,   229,   229,   229,
     229,   229,   176,   229,   229,   229,   229,   229,   229,   229,
     140,   176,   176,   229,   140,   176,   140,   232,   176,   176,
     140,   140,   229,   229,   176,   229,   229,   229,   229,   176,
     229,   229,   176,   176,   176,   176,   229,   229,   229,   229,
     122,   229,    71,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   733,   229,  1228,   229,   229,   229,   229,
     229,   229,   229,   229,  1174,  1127,   229,   564,  1046,   452,
     229,   318,  1253,   505,  1258,  1255,   362,   513,   170,  1105,
     593,   368,  1103,   476,  1213,  1211,    92,    -1,    -1,    -1,
     229,   229,   229,   229,   229,   229,   229,   229,   229,    -1,
      -1,   229,   229,    -1,   229,    -1,   229,   229,   229,    -1,
      -1,   229,    -1,   356,    -1,    -1,    -1,    -1,    -1,   236,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   264,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   444,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   433
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,   235,     0,     1,     5,    10,    22,    24,    27,    34,
      49,    57,    58,    60,    81,    92,    93,   110,   126,   151,
     160,   161,   165,   166,   236,   241,   246,   259,   265,   276,
     304,   319,   328,   351,   358,   368,   377,   403,   409,   415,
     420,   426,   487,   503,   520,   229,   230,   231,   329,   231,
     305,   378,   410,   416,   421,   231,   488,   404,   320,   231,
     231,   277,   352,   231,   231,   359,   369,     1,    35,    45,
     111,   260,   261,   262,   263,   264,   231,     1,    32,    33,
      39,    87,    88,    97,    98,   117,   118,   132,   141,   219,
     220,   221,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,   140,   306,
     310,   140,   379,   383,   231,   231,   231,     1,     8,     9,
      13,    19,    26,    30,    31,    37,    40,    41,    42,    44,
      50,    64,    65,    68,    74,    78,    79,    82,    85,    86,
      95,    96,   102,   103,   105,   106,   107,   108,   119,   128,
     129,   131,   133,   134,   137,   162,   164,   168,   172,   173,
     174,   175,   179,   180,   186,   214,   215,   218,   223,   228,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   478,   482,
     483,   484,   485,   486,   231,   231,   231,     1,    54,    55,
      56,    62,    94,   127,   195,   222,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,     1,   109,   136,   242,
     243,   244,   245,   140,   278,   282,   231,     1,    38,    53,
      69,    72,    73,    91,   521,   522,   523,   524,   525,   526,
     527,   528,     1,    35,    76,   111,   113,   114,   149,   163,
     203,   224,   225,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   231,   231,   232,   232,   232,
     230,   261,     1,    20,    24,    48,    52,    61,    67,    84,
     112,   120,   135,   143,   144,   170,   171,   217,   330,   331,
     332,   333,   334,   335,   336,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   230,
     505,   231,   231,     1,    80,   142,   411,   412,   413,   414,
       1,    80,   417,   418,   419,     1,   111,   142,   422,   423,
     424,   425,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   479,   232,   475,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   230,   428,     1,     4,    43,    46,
      93,   111,   217,   489,   490,   491,   492,   493,   497,   498,
     499,     1,   142,   217,   405,   406,   407,   408,     1,    75,
      80,   139,   321,   322,   323,   326,   327,   232,   232,   232,
     232,   232,   232,   232,   232,   230,   267,   232,   232,   230,
     243,   231,     1,    22,   115,   142,   353,   354,   355,   356,
     357,   232,   232,   232,   232,   232,   232,   230,   522,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   230,
     248,     1,   111,   167,   217,   360,   361,   362,   363,   364,
       1,   111,   167,   370,   371,   372,   373,   140,   140,   140,
     229,   232,   232,   232,   337,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   230,   331,   122,   122,
     176,   122,   238,   238,   122,   122,   176,   176,   176,   176,
     176,   176,   176,   229,     1,    28,    99,   100,   101,   104,
     111,   124,   138,   158,   307,   308,   309,   311,   312,   313,
     314,   315,   316,   317,   318,     1,     3,     6,    11,    23,
      24,    25,    29,    47,    51,    52,    75,    77,    90,   111,
     139,   150,   159,   380,   381,   382,   384,   385,   386,   387,
     388,   389,   390,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   232,   232,   230,   412,   232,   230,   418,   232,
     232,   230,   423,   176,   238,   176,   238,   122,   140,   122,
     176,   176,   176,   122,   140,   176,   122,   122,   122,   176,
     238,   176,   122,   140,   176,   122,   122,   122,   238,   122,
     140,   122,   122,   176,   232,   176,   232,   238,   238,   176,
     140,   176,   176,   176,   177,   176,   177,   176,   176,   238,
     238,   122,   240,   238,   176,   176,   176,   176,   229,   500,
     232,   232,   494,   232,   232,   230,   490,   232,   232,   230,
     406,   232,   232,   232,   230,   322,   140,   140,   140,   140,
     196,   197,   198,   199,   200,   201,   202,   140,   140,   176,
     229,   140,   140,   229,     1,     5,    24,    36,    47,    52,
      59,    66,    70,    83,   111,   116,   135,   145,   146,   150,
     216,   217,   226,   279,   280,   281,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   232,   232,   232,   230,   354,   176,   176,
     176,   176,   176,   238,   229,   140,   176,   140,   140,   140,
     140,   140,   122,   140,   140,   229,   232,   365,   232,   230,
     361,   232,   374,   230,   371,   229,   229,   229,   176,   140,
     176,   232,   176,   176,   176,   176,   176,   140,   122,   140,
     140,   176,   140,   229,   229,   229,   229,   153,   154,   155,
     156,   157,   237,   238,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   230,   308,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   391,   232,   232,   232,   232,
     232,   232,   232,   230,   381,   140,   140,   229,   140,   229,
     140,   140,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   183,   184,   185,   187,   189,   190,
     191,   194,   204,   205,   206,   207,   208,   209,   210,   213,
     480,   481,   229,   183,   184,   185,   187,   189,   190,   191,
     194,   204,   205,   206,   207,   208,   209,   210,   213,   476,
     477,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,    14,    15,    16,   239,   240,
     229,   229,   229,   229,   229,   229,   232,   238,   176,   232,
     140,   140,   229,   140,   140,   229,   140,   140,   122,   324,
     325,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   232,   232,
     232,   232,   300,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   230,   280,   140,   140,
     140,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   140,   232,
     140,   229,   140,   232,   229,   229,   229,   229,    20,    21,
      48,    61,    67,    84,   112,   120,   121,   152,   171,   338,
     339,   340,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   237,   237,   237,   237,   237,   238,   122,
     122,   122,   122,   140,   122,   238,   240,   229,   140,   192,
     193,   176,   140,   140,   176,   176,   176,   140,   232,   140,
     140,   140,   140,   122,   140,   140,   229,   229,   229,   229,
     229,   229,   229,   233,   229,   233,   239,   239,   239,    12,
     178,   501,   502,   229,   229,    12,   178,   495,   496,   229,
     229,   229,   229,   229,   229,   181,   229,   233,   176,   140,
     176,   176,   232,   176,   176,   176,   176,   140,   176,   140,
     176,   176,   140,   176,   140,   176,   229,   229,   229,   229,
     229,    83,   151,   182,   211,   212,   216,   226,   366,   367,
     229,   229,    83,   151,   182,   194,   211,   212,   216,   226,
     375,   376,   340,   229,   233,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,    11,    13,    25,    29,    89,   392,
     393,   229,   229,   229,   229,   229,   229,   229,   481,   477,
     229,   233,   229,   233,   122,   325,   229,   229,   229,   229,
       5,    36,    59,    66,    70,    71,    83,   116,   121,   130,
     145,   146,   147,   205,   216,   226,   301,   302,   303,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   233,   229,   233,   339,   229,   233,   502,
     496,   303,   229,   233,   367,   376,   393,   302
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
#line 389 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 28:
#line 391 "ircd_parser.y"
    {
			yyval.number = yyvsp[-1].number + yyvsp[0].number;
		}
    break;

  case 29:
#line 395 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number + yyvsp[0].number;
		}
    break;

  case 30:
#line 399 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 + yyvsp[0].number;
		}
    break;

  case 31:
#line 403 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 + yyvsp[0].number;
		}
    break;

  case 32:
#line 407 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 + yyvsp[0].number;
		}
    break;

  case 33:
#line 411 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 * 7 + yyvsp[0].number;
		}
    break;

  case 34:
#line 416 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 36:
#line 417 "ircd_parser.y"
    { yyval.number = yyvsp[-1].number + yyvsp[0].number; }
    break;

  case 37:
#line 418 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number + yyvsp[0].number; }
    break;

  case 38:
#line 419 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 + yyvsp[0].number; }
    break;

  case 39:
#line 420 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 * 1024 + yyvsp[0].number; }
    break;

  case 46:
#line 434 "ircd_parser.y"
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
#line 451 "ircd_parser.y"
    {
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
}
    break;

  case 62:
#line 475 "ircd_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (ypass == 2)
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
      yyerror("Ignoring config file entry rsa_private_key -- file open failed");
      break;
    }

    ServerInfo.rsa_private_key = (RSA *)PEM_read_bio_RSAPrivateKey(file, NULL, 0, NULL);

    if (ServerInfo.rsa_private_key == NULL)
    {
      yyerror("Ignoring config file entry rsa_private_key -- "
              "couldn't extract key");
      break;
    }

    if (!RSA_check_key(ServerInfo.rsa_private_key))
    {
      yyerror("Ignoring config file entry rsa_private_key -- invalid key");
      break;
    }

    /* require 2048 bit (256 byte) key */
    if (RSA_size(ServerInfo.rsa_private_key) != 256)
    {
      yyerror("Ignoring config file entry rsa_private_key -- not 2048 bit");
      break;
    }

    BIO_set_close(file, BIO_CLOSE);
    BIO_free(file);
  }
#endif
}
    break;

  case 63:
#line 530 "ircd_parser.y"
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

  case 64:
#line 544 "ircd_parser.y"
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

  case 65:
#line 562 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.description);
    DupString(ServerInfo.description,yylval.string);
  }
}
    break;

  case 66:
#line 571 "ircd_parser.y"
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

  case 67:
#line 585 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.network_desc);
    DupString(ServerInfo.network_desc, yylval.string);
  }
}
    break;

  case 68:
#line 594 "ircd_parser.y"
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

  case 69:
#line 622 "ircd_parser.y"
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

  case 70:
#line 652 "ircd_parser.y"
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

  case 71:
#line 668 "ircd_parser.y"
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

  case 79:
#line 724 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.name);
    DupString(AdminInfo.name, yylval.string);
  }
}
    break;

  case 80:
#line 733 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.email);
    DupString(AdminInfo.email, yylval.string);
  }
}
    break;

  case 81:
#line 742 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.description);
    DupString(AdminInfo.description, yylval.string);
  }
}
    break;

  case 94:
#line 765 "ircd_parser.y"
    {
                        }
    break;

  case 95:
#line 769 "ircd_parser.y"
    {
                        }
    break;

  case 96:
#line 773 "ircd_parser.y"
    {
                        }
    break;

  case 97:
#line 777 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
}
    break;

  case 98:
#line 784 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
}
    break;

  case 99:
#line 791 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
}
    break;

  case 100:
#line 798 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
}
    break;

  case 101:
#line 802 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
}
    break;

  case 102:
#line 806 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
}
    break;

  case 103:
#line 810 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
}
    break;

  case 104:
#line 814 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
}
    break;

  case 105:
#line 818 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
}
    break;

  case 106:
#line 822 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
}
    break;

  case 107:
#line 828 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 108:
#line 837 "ircd_parser.y"
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

  case 109:
#line 849 "ircd_parser.y"
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

  case 133:
#line 940 "ircd_parser.y"
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

  case 134:
#line 952 "ircd_parser.y"
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

  case 135:
#line 964 "ircd_parser.y"
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

  case 136:
#line 987 "ircd_parser.y"
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

  case 137:
#line 999 "ircd_parser.y"
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

  case 138:
#line 1010 "ircd_parser.y"
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

  case 139:
#line 1021 "ircd_parser.y"
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

  case 140:
#line 1063 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 141:
#line 1072 "ircd_parser.y"
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

  case 142:
#line 1083 "ircd_parser.y"
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

  case 143:
#line 1094 "ircd_parser.y"
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

  case 144:
#line 1105 "ircd_parser.y"
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

  case 145:
#line 1116 "ircd_parser.y"
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

  case 146:
#line 1127 "ircd_parser.y"
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

  case 147:
#line 1138 "ircd_parser.y"
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

  case 148:
#line 1149 "ircd_parser.y"
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

  case 149:
#line 1160 "ircd_parser.y"
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

  case 150:
#line 1171 "ircd_parser.y"
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

  case 151:
#line 1182 "ircd_parser.y"
    {
}
    break;

  case 155:
#line 1186 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 156:
#line 1187 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 157:
#line 1190 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 158:
#line 1197 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 159:
#line 1204 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 160:
#line 1211 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 161:
#line 1218 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 162:
#line 1225 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 163:
#line 1232 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 164:
#line 1239 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 165:
#line 1246 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 166:
#line 1253 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 167:
#line 1260 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 168:
#line 1267 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 169:
#line 1274 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 170:
#line 1281 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 171:
#line 1288 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 172:
#line 1301 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = (struct ClassItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 173:
#line 1308 "ircd_parser.y"
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

  case 188:
#line 1335 "ircd_parser.y"
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

  case 189:
#line 1381 "ircd_parser.y"
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

  case 190:
#line 1427 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 191:
#line 1433 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = yyvsp[-1].number;
}
    break;

  case 192:
#line 1439 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 193:
#line 1445 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = yyvsp[-1].number;
}
    break;

  case 194:
#line 1451 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = yyvsp[-1].number;
}
    break;

  case 195:
#line 1457 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = yyvsp[-1].number;
}
    break;

  case 196:
#line 1463 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = yyvsp[-1].number;
}
    break;

  case 197:
#line 1469 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = yyvsp[-1].number;
}
    break;

  case 198:
#line 1478 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_address = NULL;
}
    break;

  case 199:
#line 1482 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 209:
#line 1498 "ircd_parser.y"
    {
  if (ypass == 2)
    add_listener(yyvsp[0].number, listener_address);
}
    break;

  case 210:
#line 1502 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    int i;

    for (i = yyvsp[-2].number; i <= yyvsp[0].number; i++)
    {
      add_listener(i, listener_address);
    }
  }
}
    break;

  case 211:
#line 1515 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 212:
#line 1524 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 213:
#line 1536 "ircd_parser.y"
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

  case 214:
#line 1548 "ircd_parser.y"
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

  case 233:
#line 1618 "ircd_parser.y"
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

  case 234:
#line 1647 "ircd_parser.y"
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

  case 235:
#line 1660 "ircd_parser.y"
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

  case 236:
#line 1671 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 237:
#line 1680 "ircd_parser.y"
    {
}
    break;

  case 241:
#line 1684 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 242:
#line 1685 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 243:
#line 1688 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 244:
#line 1696 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 245:
#line 1703 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 246:
#line 1710 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 247:
#line 1717 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 248:
#line 1724 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 249:
#line 1731 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 250:
#line 1738 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 251:
#line 1745 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 252:
#line 1752 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 253:
#line 1761 "ircd_parser.y"
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

  case 254:
#line 1772 "ircd_parser.y"
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

  case 255:
#line 1783 "ircd_parser.y"
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

  case 256:
#line 1794 "ircd_parser.y"
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

  case 257:
#line 1805 "ircd_parser.y"
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

  case 258:
#line 1816 "ircd_parser.y"
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

  case 259:
#line 1828 "ircd_parser.y"
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

  case 260:
#line 1847 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 261:
#line 1857 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = yyvsp[-1].number;
  }
}
    break;

  case 262:
#line 1866 "ircd_parser.y"
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

  case 263:
#line 1881 "ircd_parser.y"
    {
  if (ypass == 2)
    resv_reason = NULL;
}
    break;

  case 264:
#line 1885 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 271:
#line 1897 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 272:
#line 1906 "ircd_parser.y"
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

  case 273:
#line 1921 "ircd_parser.y"
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

  case 274:
#line 1939 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(ULINE_TYPE);
    yy_match_item = map_to_conf(yy_conf);
    yy_match_item->action = SHARED_ALL;
  }
}
    break;

  case 275:
#line 1947 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 282:
#line 1958 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 283:
#line 1967 "ircd_parser.y"
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

  case 284:
#line 1982 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 288:
#line 1989 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 289:
#line 1993 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 290:
#line 1997 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 291:
#line 2001 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 292:
#line 2005 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 293:
#line 2009 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 294:
#line 2013 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 295:
#line 2022 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_match_item = (struct MatchItem *)map_to_conf(yy_conf);
    yy_match_item->action = CLUSTER_ALL;
  }
}
    break;

  case 296:
#line 2030 "ircd_parser.y"
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

  case 302:
#line 2047 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 303:
#line 2053 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 307:
#line 2060 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_KLINE;
}
    break;

  case 308:
#line 2064 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNKLINE;
}
    break;

  case 309:
#line 2068 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_XLINE;
}
    break;

  case 310:
#line 2072 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNXLINE;
}
    break;

  case 311:
#line 2076 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_RESV;
}
    break;

  case 312:
#line 2080 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNRESV;
}
    break;

  case 313:
#line 2084 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_LOCOPS;
}
    break;

  case 314:
#line 2088 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = CLUSTER_ALL;
}
    break;

  case 315:
#line 2097 "ircd_parser.y"
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

  case 316:
#line 2115 "ircd_parser.y"
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

  case 339:
#line 2257 "ircd_parser.y"
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

  case 340:
#line 2269 "ircd_parser.y"
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

  case 341:
#line 2281 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 342:
#line 2290 "ircd_parser.y"
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

  case 343:
#line 2302 "ircd_parser.y"
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

  case 344:
#line 2314 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = yyvsp[-1].number;
}
    break;

  case 345:
#line 2320 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 346:
#line 2324 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 347:
#line 2332 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 348:
#line 2341 "ircd_parser.y"
    {
}
    break;

  case 352:
#line 2346 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_LAZY_LINK;
}
    break;

  case 353:
#line 2350 "ircd_parser.y"
    {
  if (ypass == 2)
#ifndef HAVE_LIBZ
    yyerror("Ignoring flags = compressed; -- no zlib support");
#else
    yy_aconf->flags |= CONF_FLAGS_COMPRESSED;
#endif
}
    break;

  case 354:
#line 2358 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_CRYPTLINK;
}
    break;

  case 355:
#line 2362 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_ALLOW_AUTO_CONN;
}
    break;

  case 356:
#line 2366 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_BURST_AWAY;
}
    break;

  case 357:
#line 2372 "ircd_parser.y"
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

  case 358:
#line 2413 "ircd_parser.y"
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

  case 359:
#line 2424 "ircd_parser.y"
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

  case 360:
#line 2435 "ircd_parser.y"
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

  case 361:
#line 2450 "ircd_parser.y"
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

  case 362:
#line 2461 "ircd_parser.y"
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

  case 363:
#line 2474 "ircd_parser.y"
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

  case 364:
#line 2487 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 365:
#line 2496 "ircd_parser.y"
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

  case 366:
#line 2531 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(KLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 367:
#line 2538 "ircd_parser.y"
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

  case 373:
#line 2557 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    DupString(yy_aconf->host, yylval.string);
    split_user_host(yy_aconf->host, &yy_aconf->user, &yy_aconf->host);
  }
}
    break;

  case 374:
#line 2566 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 375:
#line 2578 "ircd_parser.y"
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

  case 376:
#line 2587 "ircd_parser.y"
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

  case 382:
#line 2603 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 383:
#line 2612 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 384:
#line 2624 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(EXEMPTDLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    DupString(yy_aconf->passwd, "*");
  }
}
    break;

  case 385:
#line 2632 "ircd_parser.y"
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

  case 390:
#line 2648 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 391:
#line 2660 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(XLINE_TYPE);
    yy_match_item = (struct MatchItem *)map_to_conf(yy_conf);
    /* default reason */
    DupString(yy_match_item->reason,"Something about your name");
  }
}
    break;

  case 392:
#line 2669 "ircd_parser.y"
    {
  /* XXX */
}
    break;

  case 398:
#line 2677 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    DupString(yy_conf->name, yylval.string);
    collapse(yy_conf->name);
  }
}
    break;

  case 399:
#line 2686 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_match_item->reason);
    DupString(yy_match_item->reason, yylval.string);
  }
}
    break;

  case 456:
#line 2734 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr = yyvsp[-1].number;
}
    break;

  case 457:
#line 2740 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr6 = yyvsp[-1].number;
}
    break;

  case 458:
#line 2746 "ircd_parser.y"
    {
  if (ypass == 1) /* must be set in the 1st pass */
    ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 459:
#line 2752 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
}
    break;

  case 460:
#line 2757 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 461:
#line 2762 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kill_chase_time_limit = yyvsp[-1].number;
}
    break;

  case 462:
#line 2768 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 463:
#line 2774 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 464:
#line 2780 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 465:
#line 2786 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 466:
#line 2792 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 467:
#line 2798 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_time = yyvsp[-1].number; 
}
    break;

  case 468:
#line 2804 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_changes = yyvsp[-1].number;
}
    break;

  case 469:
#line 2810 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_accept = yyvsp[-1].number;
}
    break;

  case 470:
#line 2816 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_spam_exit_message_time = yyvsp[-1].number;
}
    break;

  case 471:
#line 2822 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_warn_delta = yyvsp[-1].number;
}
    break;

  case 472:
#line 2828 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = yyvsp[-1].number;
}
    break;

  case 473:
#line 2834 "ircd_parser.y"
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

  case 474:
#line 2845 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 475:
#line 2851 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 476:
#line 2860 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 477:
#line 2866 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 478:
#line 2872 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 479:
#line 2878 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 480:
#line 2882 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 481:
#line 2888 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 482:
#line 2892 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 483:
#line 2898 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait = yyvsp[-1].number;
}
    break;

  case 484:
#line 2904 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.caller_id_wait = yyvsp[-1].number;
}
    break;

  case 485:
#line 2910 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait_simple = yyvsp[-1].number;
}
    break;

  case 486:
#line 2916 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 487:
#line 2922 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 488:
#line 2928 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 489:
#line 2934 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 490:
#line 2940 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
}
    break;

  case 491:
#line 2951 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.idletime = yyvsp[-1].number;
}
    break;

  case 492:
#line 2957 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dots_in_ident = yyvsp[-1].number;
}
    break;

  case 493:
#line 2963 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.maximum_links = yyvsp[-1].number;
}
    break;

  case 494:
#line 2969 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_targets = yyvsp[-1].number;
}
    break;

  case 495:
#line 2975 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 496:
#line 2984 "ircd_parser.y"
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

  case 497:
#line 3016 "ircd_parser.y"
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

  case 498:
#line 3034 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 499:
#line 3040 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 500:
#line 3049 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 501:
#line 3055 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 502:
#line 3060 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 503:
#line 3066 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 507:
#line 3073 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 508:
#line 3077 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 509:
#line 3081 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 510:
#line 3085 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 511:
#line 3089 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 512:
#line 3093 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 513:
#line 3097 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 514:
#line 3101 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 515:
#line 3105 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 516:
#line 3109 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 517:
#line 3113 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 518:
#line 3117 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 519:
#line 3121 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 520:
#line 3125 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 521:
#line 3129 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 522:
#line 3133 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 523:
#line 3139 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 527:
#line 3146 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 528:
#line 3150 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 529:
#line 3154 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 530:
#line 3158 "ircd_parser.y"
    { 
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 531:
#line 3162 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 532:
#line 3166 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 533:
#line 3170 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 534:
#line 3174 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 535:
#line 3178 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 536:
#line 3182 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 537:
#line 3186 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 538:
#line 3190 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 539:
#line 3194 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 540:
#line 3198 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 541:
#line 3202 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 542:
#line 3206 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 543:
#line 3212 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard = yyvsp[-1].number;
}
    break;

  case 544:
#line 3218 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard_simple = yyvsp[-1].number;
}
    break;

  case 545:
#line 3224 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.default_floodcount = yyvsp[-1].number;
}
    break;

  case 546:
#line 3230 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.client_flood = yyvsp[-1].number;
}
    break;

  case 547:
#line 3236 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 548:
#line 3245 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->flags = 0;
  }
}
    break;

  case 549:
#line 3253 "ircd_parser.y"
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

  case 559:
#line 3280 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 560:
#line 3286 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = yyvsp[-1].number;
}
    break;

  case 561:
#line 3292 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 565:
#line 3298 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 566:
#line 3302 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 567:
#line 3308 "ircd_parser.y"
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

  case 568:
#line 3331 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 569:
#line 3340 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 570:
#line 3344 "ircd_parser.y"
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

  case 573:
#line 3384 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 574:
#line 3388 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 593:
#line 3417 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 594:
#line 3423 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_except = yylval.number;
}
    break;

  case 595:
#line 3429 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_invex = yylval.number;
}
    break;

  case 596:
#line 3435 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_knock = yylval.number;
}
    break;

  case 597:
#line 3441 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay = yyvsp[-1].number;
}
    break;

  case 598:
#line 3447 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay_channel = yyvsp[-1].number;
}
    break;

  case 599:
#line 3453 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 600:
#line 3459 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_chans_per_user = yyvsp[-1].number;
}
    break;

  case 601:
#line 3465 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 602:
#line 3471 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_bans = yyvsp[-1].number;
}
    break;

  case 603:
#line 3477 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_user_count = yyvsp[-1].number;
}
    break;

  case 604:
#line 3483 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_server_count = yyvsp[-1].number;
}
    break;

  case 605:
#line 3489 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 606:
#line 3495 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 617:
#line 3515 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 618:
#line 3521 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 619:
#line 3527 "ircd_parser.y"
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

  case 620:
#line 3541 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 621:
#line 3547 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 622:
#line 3553 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 1016 of /usr/local/share/bison/yacc.c.  */
#line 6525 "y.tab.c"

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


#line 360 "ircd_parser.y"

