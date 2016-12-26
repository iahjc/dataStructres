#include <stdio.h>
#include <malloc.h>

#ifndef _List_H

#define _List_H 0

/*************************************************************************************/

/*以下是关于线性表链接存储(单链表)操作的18中算法*/
/*1.初始化链接，即置单链表的表头指针为空*/
/*2.创建线性表，此函数输入负数终止读取数据*/
/*3.打印链表，链表的遍历*/
/*4.清除线性表L中的所有数据，即释放单链表L中所有的节点，使之成为一个空表。*/
/*5.返回单链表的长度*/
/*6.检查单链表是否为空，若为空则返回1，否则返回0*/
/*7.返回单链表中第pos个节点得元素，若pos超出范围，则停止程序运行*/
/*8.从单链表中查找具有给定值X的第一个元素，若查找成功则返回该节点data域的存储地址，否则返回NULL*/
/*9.把单链表中第pos个节点的值修改为X的值，若修改成功则返回1，否则返回0*/
/*10.向单链表的表头插入一个元素*/
/*11.向单链表的表尾插入一个元素*/
/*12.向单链表中第pos个节点位置插入元素为x的节点，若插入成功则返回1，否则返回0*/
/*13.向有序单链表中插入元素x节点，使得插入后仍然有序*/
/*14.从单链表中删除表头节点，并把该节点的值返回，若删除失败则停止程序运行*/
/*15.从单链表中删除表尾节点并返回他的值，若删除失败则停止程序运行*/
/*16.从单链表中删除第pos个节点并返回他的值，若删除失败则停止程序运行*/
/*17.从单链表中删除值为x的第一个节点，若删除成功则返回1，否则返回0*/
/*18.交换两个元素的位置*/
/*19.将线性表进行排序*/
/******************************************************************************************/

/*注意检查分配到的动态内存是否为空*/


#define Status int
#define OK 1
#define ERROR 0

typedef int ElementType;



struct Node;

typedef struct Node *PtrToNode;

typedef PtrToNode Position;

typedef PtrToNode List;



/*initialization linked list table,is set pointer to NULL on linked list table*/
void initList(List *pList);
/*created linked list table,the function input negative number  then stop read data*/
List createList(List pHead);
/*print linked list table,loop linked list table*/
void printList(List pHead);
/*clear all node on linked list table ,the set linked list table is empty*/
void clearList(List pHead);
/*return linked list table length*/
int sizeList(List pHead);
/*check linked list table is NULL ,is NULL then return one(1) ,or return zero(0)*/
int isEmptyList(List pHead);
/*return to linked list table of "pos" node , pos out of range, or stop run program*/
int getElement(List pHead,int pos);
/*find the first node with X in the linked list table,success return data,or return null*/
ElementType getElemAddr(List pHead,ElementType X);
/*update of pos  with X in linked list table, if succesful return 1 or return 0 */
int modifyElem(List pNode,int pos,ElementType X);
/*insert data in linked list table head*/
int insertHeadList(List *pHead,ElementType insertElem);
/*insert node in linked list table end*/
int insertLastList(List pHead,ElementType insertElem);
/**/
int isAddPos(List pNode,int pos,ElementType X);
/**/
int OrrderList(List pNode,ElementType X);
/**/
int DelHeadList(List *pList);
/**/
int DelLastList(List pNode);
/**/
int DelPos(List pNode,int pos);
/**/
int Delx(List *pNode,int x);
/**/
int exchange2pos(List pList,int pos1,int pos2);
int swap(int *p1,int *p2);
/**/
int Arrange(List pNode);

#endif 

struct Node
{
	ElementType Data;
	Position Next;
};
