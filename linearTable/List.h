#include <stdio.h>
#include <malloc.h>

#define MAXSIZE 100
typedef char ElementType;

// 给结构取一个别名
typedef struct  
{
	ElementType Data[MAXSIZE];
	int Last;
}List;

//比如 访问下标为I的元素： L.Data[i]或者Ptrl->Data[i]


//申请一块空间
List *MakeEmpty();
//在线性表L中查找X的第一次出现的位置
int Find(ElementType X,List *Ptrl);
//在位序i前插入一个新元素
void Insert(ElementType X,int i,List *Ptrl);
//删除指定位置i的元素
void Delete(int i,List *Ptrl);
//返回线性列表L的长度
int Length(List L);
//显示列表里面的数据
void ShowStr(List *Ptrl);



