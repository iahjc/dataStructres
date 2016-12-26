#include <stdio.h>
#include <malloc.h>

#ifndef _List_H

#define _List_H 0

/*************************************************************************************/

/*�����ǹ������Ա����Ӵ洢(������)������18���㷨*/
/*1.��ʼ�����ӣ����õ�����ı�ͷָ��Ϊ��*/
/*2.�������Ա��˺������븺����ֹ��ȡ����*/
/*3.��ӡ��������ı���*/
/*4.������Ա�L�е��������ݣ����ͷŵ�����L�����еĽڵ㣬ʹ֮��Ϊһ���ձ�*/
/*5.���ص�����ĳ���*/
/*6.��鵥�����Ƿ�Ϊ�գ���Ϊ���򷵻�1�����򷵻�0*/
/*7.���ص������е�pos���ڵ��Ԫ�أ���pos������Χ����ֹͣ��������*/
/*8.�ӵ������в��Ҿ��и���ֵX�ĵ�һ��Ԫ�أ������ҳɹ��򷵻ظýڵ�data��Ĵ洢��ַ�����򷵻�NULL*/
/*9.�ѵ������е�pos���ڵ��ֵ�޸�ΪX��ֵ�����޸ĳɹ��򷵻�1�����򷵻�0*/
/*10.������ı�ͷ����һ��Ԫ��*/
/*11.������ı�β����һ��Ԫ��*/
/*12.�������е�pos���ڵ�λ�ò���Ԫ��Ϊx�Ľڵ㣬������ɹ��򷵻�1�����򷵻�0*/
/*13.�����������в���Ԫ��x�ڵ㣬ʹ�ò������Ȼ����*/
/*14.�ӵ�������ɾ����ͷ�ڵ㣬���Ѹýڵ��ֵ���أ���ɾ��ʧ����ֹͣ��������*/
/*15.�ӵ�������ɾ����β�ڵ㲢��������ֵ����ɾ��ʧ����ֹͣ��������*/
/*16.�ӵ�������ɾ����pos���ڵ㲢��������ֵ����ɾ��ʧ����ֹͣ��������*/
/*17.�ӵ�������ɾ��ֵΪx�ĵ�һ���ڵ㣬��ɾ���ɹ��򷵻�1�����򷵻�0*/
/*18.��������Ԫ�ص�λ��*/
/*19.�����Ա��������*/
/******************************************************************************************/

/*ע������䵽�Ķ�̬�ڴ��Ƿ�Ϊ��*/


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
