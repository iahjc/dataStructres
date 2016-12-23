#include <stdio.h>
#include <malloc.h>

#ifndef _List_H

#define _List_H 0

typedef int ElementType;

struct Node;

typedef struct Node *PtrToNode;

typedef PtrToNode Position;

typedef PtrToNode List;

//make linked list empty table;
List MakeEmpty(List L); 
//test linked list table it is empty table 
int IsEmpty(List *L);
//judge the node is last node 
int IsLast(Position *P,List *L);
Position Find(ElementType X,List L);

//in the linked list table delete node X 
void Delete(ElementType X,List *L);


//where elementType node are linked list table 
Position *FindPrevious(ElementType X,List *L);


//insert linked list table data 
void Insert(ElementType X,List L,Position P);



void DeleteList(List L);
Position Header(List L);
Position First(List L);
Position Advance(Position P);
ElementType Retrieve(Position P);



#endif 

struct Node
{
	ElementType Data;
	Position Next;
};
