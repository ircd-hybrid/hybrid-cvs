/*
 * tools.h
 *
 * Definitions/prototypes for src/tools.c
 *
 * Adrian Chadd <adrian@creative.net.au>
 *
 * $Id: tools.h,v 1.1 2000/11/21 18:42:20 adrian Exp $
 */
#ifndef __TOOLS_H__
#define __TOOLS_H__

/*
 * double-linked-list stuff
 */
typedef struct _dlink_node dlink_node;
typedef struct _dlink_list dlink_list;

struct _dlink_node {
    void *data;
    dlink_node *prev;
    dlink_node *next;
};
  
struct _dlink_list {
    dlink_node *head;
    dlink_node *tail;
};

#endif
