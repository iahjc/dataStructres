#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

//loop linklist 

#ifndef _LOOPLIST

#define _LOOPLIST


typedef int ElemType

typedef int Status

#define ERROR¡¡0

#define OK 1

//initalization loop linklist
void ds_init(node **pNode);

//insert
void ds_insert(node **pNode,int i);

//delete 
void ds_delete(node **pNode,int i);


//find
int ds_search(node *pNode,int elem);

#endif 

/*define struct **/
typedef struct CLinkList
{
	int data;
	struct CLinkList *next;
}node;

