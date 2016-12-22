#include <stdio.h>

#ifndef _List_H
#define MAXSIZE 100
typedef int ElementType

//����һ��ռ�	
List *MakeEmpty();
//����λ��K��������ӦԪ��
ElementType FindKth(int K,List L);
//�����Ա�L�в���X�ĵ�һ�γ���λ�á�
int Find(ElementType X,List *Ptrl);
//��λ��iǰ����һ����Ԫ��
void Insert(ElementType X,int i,List *Ptrl);
//ɾ��ָ��λ��i��Ԫ��
void Delete(int i,List L);
//�������Ա�L�ĳ���
int Length(List L);

#endif

//���ṹȡһ������List
typedef struct 
{
	ElementType Data[MAXSIZE];
	int Last;
}List;

//����list
List L,*Ptrl;

//���� �����±�ΪI��Ԫ�أ�L.Data[i]����Ptrl->Data[i]