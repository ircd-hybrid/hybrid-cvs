# $Id: Makefile,v 1.8 2003/01/25 22:42:20 lusky Exp $

LIBS = -lcrypto

LDFLAGS =
#LDFLAGS = -L/usr/local/ssl/lib

INCLUDES =
#INCLUDES = -I/usr/local/ssl/include

all: respond

respond: respond.c
	gcc -g -O2 -Wall -o respond respond.c -ggdb ${INCLUDES} ${LDFLAGS} ${LIBS}

clean:
	rm -f respond *.core *~
