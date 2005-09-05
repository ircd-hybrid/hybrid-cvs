/* $Id: y.tab.h,v 7.58 2005/09/05 17:38:02 db Exp $ */
#ifndef YYERRCODE
#define YYERRCODE 256
#endif

#define ACCEPT_PASSWORD 257
#define ACTION 258
#define ADMIN 259
#define AFTYPE 260
#define T_ALLOW 261
#define ANTI_NICK_FLOOD 262
#define ANTI_SPAM_EXIT_MESSAGE_TIME 263
#define IRCD_AUTH 264
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
#define OPERS_BYPASS_CALLERID 275
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
#define NEED_IDENT 328
#define HAVENT_READ_CONF 329
#define HIDDEN 330
#define HIDDEN_ADMIN 331
#define HIDDEN_OPER 332
#define HIDE_SERVER_IPS 333
#define HIDE_SERVERS 334
#define HIDE_SPOOF_IPS 335
#define HOST 336
#define HUB 337
#define HUB_MASK 338
#define IDLETIME 339
#define IGNORE_BOGUS_TS 340
#define IP 341
#define KILL 342
#define KILL_CHASE_TIME_LIMIT 343
#define KLINE 344
#define KLINE_EXEMPT 345
#define KLINE_REASON 346
#define KLINE_WITH_REASON 347
#define KNOCK_DELAY 348
#define KNOCK_DELAY_CHANNEL 349
#define LAZYLINK 350
#define LEAF_MASK 351
#define LINKS_DELAY 352
#define LISTEN 353
#define T_LOG 354
#define LOGGING 355
#define LOG_LEVEL 356
#define MAXIMUM_LINKS 357
#define MAX_ACCEPT 358
#define MAX_BANS 359
#define MAX_CHANS_PER_USER 360
#define MAX_GLOBAL 361
#define MAX_IDENT 362
#define MAX_LOCAL 363
#define MAX_NICK_CHANGES 364
#define MAX_NICK_TIME 365
#define MAX_NUMBER 366
#define MAX_TARGETS 367
#define MESSAGE_LOCALE 368
#define MIN_NONWILDCARD 369
#define MIN_NONWILDCARD_SIMPLE 370
#define MODULE 371
#define MODULES 372
#define NAME 373
#define NEED_PASSWORD 374
#define NETWORK_DESC 375
#define NETWORK_NAME 376
#define NICK 377
#define NICK_CHANGES 378
#define NO_CREATE_ON_SPLIT 379
#define NO_JOIN_ON_SPLIT 380
#define NO_OPER_FLOOD 381
#define NO_TILDE 382
#define NOT 383
#define NUMBER 384
#define NUMBER_PER_IDENT 385
#define NUMBER_PER_IP 386
#define NUMBER_PER_IP_GLOBAL 387
#define OPERATOR 388
#define OPER_LOG 389
#define OPER_ONLY_UMODES 390
#define OPER_PASS_RESV 391
#define OPER_SPY_T 392
#define OPER_UMODES 393
#define INVITE_OPS_ONLY 394
#define JOIN_FLOOD_COUNT 395
#define JOIN_FLOOD_TIME 396
#define PACE_WAIT 397
#define PACE_WAIT_SIMPLE 398
#define PASSWORD 399
#define PATH 400
#define PING_COOKIE 401
#define PING_TIME 402
#define PING_WARNING 403
#define PORT 404
#define QSTRING 405
#define QUIET_ON_BAN 406
#define REASON 407
#define REDIRPORT 408
#define REDIRSERV 409
#define REGEX_T 410
#define REHASH 411
#define TREJECT_HOLD_TIME 412
#define REMOTE 413
#define REMOTEBAN 414
#define RESTRICTED 415
#define RSA_PRIVATE_KEY_FILE 416
#define RSA_PUBLIC_KEY_FILE 417
#define SSL_CERTIFICATE_FILE 418
#define RESV 419
#define RESV_EXEMPT 420
#define SECONDS 421
#define MINUTES 422
#define HOURS 423
#define DAYS 424
#define WEEKS 425
#define SENDQ 426
#define SEND_PASSWORD 427
#define SERVERHIDE 428
#define SERVERINFO 429
#define SERVLINK_PATH 430
#define IRCD_SID 431
#define TKLINE_EXPIRE_NOTICES 432
#define T_SHARED 433
#define T_CLUSTER 434
#define TYPE 435
#define SHORT_MOTD 436
#define SILENT 437
#define SPOOF 438
#define SPOOF_NOTICE 439
#define STATS_I_OPER_ONLY 440
#define STATS_K_OPER_ONLY 441
#define STATS_O_OPER_ONLY 442
#define STATS_P_OPER_ONLY 443
#define TBOOL 444
#define TMASKED 445
#define T_REJECT 446
#define TS_MAX_DELTA 447
#define TS_WARN_DELTA 448
#define TWODOTS 449
#define T_ALL 450
#define T_BOTS 451
#define T_SOFTCALLERID 452
#define T_CALLERID 453
#define T_CCONN 454
#define T_CLIENT_FLOOD 455
#define T_DEAF 456
#define T_DEBUG 457
#define T_DRONE 458
#define T_EXTERNAL 459
#define T_FULL 460
#define T_INVISIBLE 461
#define T_IPV4 462
#define T_IPV6 463
#define T_LOCOPS 464
#define T_LOGPATH 465
#define T_L_CRIT 466
#define T_L_DEBUG 467
#define T_L_ERROR 468
#define T_L_INFO 469
#define T_L_NOTICE 470
#define T_L_TRACE 471
#define T_L_WARN 472
#define T_MAX_CLIENTS 473
#define T_NCHANGE 474
#define T_OPERWALL 475
#define T_REJ 476
#define T_SERVNOTICE 477
#define T_SKILL 478
#define T_SPY 479
#define T_SSL 480
#define T_UNAUTH 481
#define T_UNRESV 482
#define T_UNXLINE 483
#define T_WALLOP 484
#define THROTTLE_TIME 485
#define TOPICBURST 486
#define TRUE_NO_OPER_FLOOD 487
#define TKLINE 488
#define TXLINE 489
#define TRESV 490
#define UNKLINE 491
#define USER 492
#define USE_EGD 493
#define USE_EXCEPT 494
#define USE_INVEX 495
#define USE_KNOCK 496
#define USE_LOGGING 497
#define USE_WHOIS_ACTUALLY 498
#define VHOST 499
#define VHOST6 500
#define XLINE 501
#define WARN 502
#define WARN_NO_NLINE 503
typedef union {
  int number;
  char *string;
} YYSTYPE;
extern YYSTYPE yylval;
