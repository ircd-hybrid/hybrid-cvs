#ifndef YYERRCODE
#define YYERRCODE 256
#endif

#define ACCEPT 257
#define ACCEPT_PASSWORD 258
#define ACTION 259
#define ADMIN 260
#define AUTH 261
#define AUTOCONN 262
#define CLASS 263
#define CONNECT 264
#define CONNECTFREQ 265
#define DENY 266
#define DESCRIPTION 267
#define DIE 268
#define DOTS_IN_IDENT 269
#define EMAIL 270
#define ENCRYPTED 271
#define EXCEED_LIMIT 272
#define FNAME_USERLOG 273
#define FNAME_OPERLOG 274
#define FNAME_FOPERLOG 275
#define GECOS 276
#define GLINE 277
#define GLINES 278
#define GLINE_EXEMPT 279
#define GLINE_TIME 280
#define GLINE_LOG 281
#define GLOBAL_KILL 282
#define HAVE_IDENT 283
#define HOST 284
#define HUB 285
#define HUB_MASK 286
#define IDLETIME 287
#define INCLUDE 288
#define IP 289
#define IP_TYPE 290
#define KILL 291
#define KLINE 292
#define KLINE_EXEMPT 293
#define LAZYLINK 294
#define LEAF_MASK 295
#define LISTEN 296
#define LOGGING 297
#define T_LOGPATH 298
#define LOG_LEVEL 299
#define MAX_NUMBER 300
#define MAXIMUM_LINKS 301
#define MESSAGE_LOCALE 302
#define NAME 303
#define NETWORK_NAME 304
#define NETWORK_DESC 305
#define NICK_CHANGES 306
#define NO_HACK_OPS 307
#define NO_TILDE 308
#define NUMBER 309
#define NUMBER_PER_IP 310
#define OPERATOR 311
#define OPER_LOG 312
#define PASSWORD 313
#define PING_TIME 314
#define PORT 315
#define QSTRING 316
#define QUARANTINE 317
#define QUIET_ON_BAN 318
#define REASON 319
#define REDIRSERV 320
#define REDIRPORT 321
#define REHASH 322
#define REMOTE 323
#define RESTRICTED 324
#define SENDQ 325
#define SEND_PASSWORD 326
#define SERVERINFO 327
#define SERVER_MASK 328
#define SHARED 329
#define SPOOF 330
#define TREJECT 331
#define TNO 332
#define TYES 333
#define T_L_CRIT 334
#define T_L_DEBUG 335
#define T_L_ERROR 336
#define T_L_INFO 337
#define T_L_NOTICE 338
#define T_L_TRACE 339
#define T_L_WARN 340
#define UNKLINE 341
#define USER 342
#define VHOST 343
#define WARN 344
#define SILENT 345
#define GENERAL 346
#define FAILED_OPER_NOTICE 347
#define SHOW_FAILED_OPER_ID 348
#define ANTI_NICK_FLOOD 349
#define MAX_NICK_TIME 350
#define MAX_NICK_CHANGES 351
#define TS_MAX_DELTA 352
#define TS_WARN_DELTA 353
#define KLINE_WITH_REASON 354
#define KLINE_WITH_CONNECTION_CLOSED 355
#define WARN_NO_NLINE 356
#define NON_REDUNDANT_KLINES 357
#define E_LINES_OPER_ONLY 358
#define F_LINES_OPER_ONLY 359
#define O_LINES_OPER_ONLY 360
#define STATS_NOTICE 361
#define WHOIS_WAIT 362
#define PACE_WAIT 363
#define KNOCK_DELAY 364
#define SHORT_MOTD 365
#define NO_OPER_FLOOD 366
#define IAUTH_SERVER 367
#define IAUTH_PORT 368
#define STATS_P_NOTICE 369
#define INVITE_PLUS_I_ONLY 370
#define MODULE 371
#define MODULES 372
#define HIDESERVER 373
#define CLIENT_EXIT 374
#define T_BOTS 375
#define T_CCONN 376
#define T_DEBUG 377
#define T_DRONE 378
#define T_FULL 379
#define T_SKILL 380
#define T_LOCOPS 381
#define T_NCHANGE 382
#define T_REJ 383
#define T_UNAUTH 384
#define T_SPY 385
#define T_EXTERNAL 386
#define T_OPERWALL 387
#define T_SERVNOTICE 388
#define T_INVISIBLE 389
#define T_CALLERID 390
#define T_WALLOP 391
#define OPER_ONLY_UMODES 392
#define PATH 393
#define MAX_TARGETS 394
#define T_MAX_CLIENTS 395
#define LINKS_NOTICE 396
#define LINKS_DELAY 397
#define VCHANS_OPER_ONLY 398
typedef union {
        int  number;
        char *string;
        struct ip_value ip_entry;
} YYSTYPE;
extern YYSTYPE yylval;
