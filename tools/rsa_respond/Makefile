# $Id: Makefile,v 1.6 2001/10/24 05:26:06 androsyn Exp $

all: respond

respond: respond.c
	gcc -g -O2 -Wall -o respond respond.c -lcrypto -ggdb

clean:
	rm -f genkey respond *.core *~
