#include <stdio.h>

#ifndef _List_H
#define MAXSIZE 100
typedef int ElementType

//申请一块空间	
List *MakeEmpty();
//根据位序K，返回相应元素
ElementType FindKth(int K,List L);
//在线性表L中查找X的第一次出现位置。
int Find(ElementType X,List *Ptrl);
//在位序i前插入一个新元素
void Insert(ElementType X,int i,List *Ptrl);
//删除指定位置i的元素
void Delete(int i,List L);
//返回线性表L的长度
int Length(List L);

#endif

//给结构取一个别名List
typedef struct 
{
	ElementType Data[MAXSIZE];
	int Last;
}List;

//声明list
List L,*Ptrl;

//比如 访问下标为I的元素：L.Data[i]或者Ptrl->Data[i]