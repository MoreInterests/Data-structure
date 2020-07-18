#ifndef __LINKLIST_H__
#define __LINKLIST_H__

typedef int data_t;

typedef struct node{
	data_t data;
	struct node *next;
}listnode,*linklist;


#endif
