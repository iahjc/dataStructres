#include <stdio.h>
#include <malloc.h>
#include <time.h>


#ifndef _List_H

#define _List_H 0

#define Status int
#define OK 1
#define ERROR 0

typedef int ElemType;




typedef struct Node
{
	ElemType data; //data fields
	struct Node* Next; //pointer fields
}Node;


typedef struct Node* LinkList;

//get listed list node
Status GetElem(LinkList L,int i,ElemType *e);

//insert new node
Status ListInsert(LinkList *L,int i,ElemType e);

//delete element;
Status ListDelete(LinkList *L,int i,ElemType e);

//insert head node prevout
void CreateListHead(LinkList *L,int n);

//insert end node 
void CreateListTail(LinkList *L,int n);


//clear linklist 
Status ClearList(LinkList *L);

//print all data
void showAllData(LinkList *L);


#endif 





