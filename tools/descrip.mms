# MMS/MMK Makefile for OpenVMS
# Copyright (c) 2001 Edward Brocklesby

CC=	CC
CFLAGS=	/STANDARD=ISOC94
LDFLAGS=

ALL : CONVERTCONF,MKPASSWD

CRYPT.C : [-.SRC]CRYPT.C
	COPY [-.SRC]CRYPT.C []

MKPASSWD : MKPASSWD.C CRYPT.C
	CC MKPASSWD
	CC CRYPT
	LINK MKPASSWD, CRYPT


CONVERTCONF : CONVERTCONF.C
	CC CONVERTCONF
	LINK CONVERTCONF

CLEAN : 
	DELETE *.OBJ;*
	DELETE *.EXE;*
