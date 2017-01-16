#include <stdio.h>
#include <malloc.h>

//array is a static list 

//judge statement variable 
#ifndef _STATICLSIT

#define _STATICLIST

#define MAXSIZE 1000

typedef int Status
#define OK 1
#define ERROR¡¡0


//data type
typedef int ElemType


//initialization static linklist 
Status InitList(StaticLinkList space);

//insert static linklist 
 Status ListInsert(StaticLinkList L,int i,ElemType e);



//gets the index of the free component 
int Malloc_SLL(StaticLinkList space);

#endif 

typedef struct {
	ElemType data; //data domain
	int cur;  //cursor 
}Component,StaticLinkList[MAXSIZE];