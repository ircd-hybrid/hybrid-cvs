# $Id: Makefile,v 1.7 2001/10/25 05:21:13 wcampbel Exp $

all: respond

respond: respond.c
	gcc -g -O2 -Wall -o respond respond.c -lcrypto -ggdb

clean:
	rm -f respond *.core *~
