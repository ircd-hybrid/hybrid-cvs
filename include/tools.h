/*
 * tools.h
 *
 * Definitions/prototypes for src/tools.c
 *
 * Adrian Chadd <adrian@creative.net.au>
 *
 * $Id: tools.h,v 1.2 2000/12/02 15:19:30 db Exp $
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

void
dlinkAdd(void *data, dlink_node * m, dlink_list * list);

void
dlinkAddBefore(dlink_node *b, void *data, dlink_node *m, dlink_list *list);

void
dlinkAddTail(void *data, dlink_node *m, dlink_list *list);

void
dlinkDelete(dlink_node *m, dlink_list *list);

void
dlinkMoveList(dlink_list *from, dlink_list *to);

#endif
