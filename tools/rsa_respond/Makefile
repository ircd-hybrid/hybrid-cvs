# $Id: Makefile,v 1.9 2003/05/10 02:20:25 joshk Exp $

LIBS = -lcrypto

LDFLAGS =
#LDFLAGS = -L/usr/local/ssl/lib

INCLUDES =
#INCLUDES = -I/usr/local/ssl/include

all: respond

respond: respond.c
	gcc -g -O2 -Wall -o respond respond.c -ggdb ${INCLUDES} ${LDFLAGS} ${LIBS}

clean:
	rm -f respond *.core *~ *.exe
