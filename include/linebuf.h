/*
 * include stuff for the linebuf mechanism.
 *
 * Adrian Chadd <adrian@creative.net.au>
 */
#ifndef __LINEBUF_H__
#define __LINEBUF_H__

/* as much as I hate includes in header files .. */
#include <stdarg.h>
#include "tools.h"

/* How big we want a buffer - 510 data bytes, plus space for a '\0' */
#define BUF_DATA_SIZE		511

struct _buf_line;
struct _buf_head;

typedef struct _buf_line buf_line_t;
typedef struct _buf_head buf_head_t;

struct _buf_line {
    char buf[BUF_DATA_SIZE+2];
    unsigned int  terminated;	/* Whether we've terminated the buffer */
    unsigned int  flushing;     /* Whether we're flushing .. */
    unsigned int  binary;       /* Whether this linebuf may hold 8-bit data */
    int  len;			/* How much data we've got */
    int  refcount;              /* how many linked lists are we in? */
    struct _buf_line *next;     /* next in free list */
};

struct _buf_head {
    dlink_list list;		/* the actual dlink list */
    int  len;			/* length of all the data */
    int  alloclen;		/* Actual allocated data length */    
    int  writeofs;		/* offset in the first line for the write */
    int  numlines;		/* number of lines */
};

/* they should be functions, but .. */
#define linebuf_len(x)		((x)->len)
#define linebuf_alloclen(x)	((x)->alloclen)
#define linebuf_numlines(x)	((x)->numlines)

extern void linebuf_init(void);
extern buf_line_t *linebuf_allocate(void);
extern void linebuf_free(buf_line_t *);
/* declared as static */
/* extern buf_line_t *linebuf_new_line(buf_head_t *); */
/* extern void linebuf_done_line(buf_head_t *, buf_line_t *, dlink_node *); */
/* extern int linebuf_skip_crlf(char *, int); */
/* extern void linebuf_terminate_crlf(buf_head_t *, buf_line_t *); */
extern void linebuf_newbuf(buf_head_t *);
extern void client_flush_input(struct Client *);
extern void linebuf_donebuf(buf_head_t *);
extern int linebuf_parse(buf_head_t *, char *, int, int);
extern int linebuf_get(buf_head_t *, char *, int, int, int);
extern void linebuf_put(buf_head_t *, char *, int);
extern void linebuf_putmsg(buf_head_t *, const char *, va_list,
                           const char *, ...);
extern int linebuf_flush(int, buf_head_t *);
extern void linebuf_attach(buf_head_t *, buf_head_t *);
extern void count_linebuf_memory(int *, u_long *);
#endif
