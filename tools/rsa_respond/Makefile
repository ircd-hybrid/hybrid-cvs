# $Id: Makefile,v 1.4 2001/02/03 03:46:12 a1kmm Exp $

all: genkey respond
genkey: genkey.c
	gcc -O2 -Wall -pedantic -o genkey genkey.c -lcrypto

respond: respond.c
	gcc -O3 -Wall -pedantic -o respond respond.c -lcrypto -ggdb

clean:
	rm -f genkey respond *.core *~
