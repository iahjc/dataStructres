#include "List.h"

/**
*����һ��ռ�
*/
List *MakeEmpty(){
	List *Ptrl; //����
	Ptrl = (List*)malloc(sizeof(List)); //���ٿռ�
	Ptrl->Last = -1;
	return Ptrl;
}

/**
*����λ��K��������Ӧ��Ԫ��
*/
ElementType FindKth(int K,List L){
	//�ж�k�Ƿ�Խ��
	if(K<0 && K > L.Last+1){
		printf("λ��Kֵ���Ϸ�����λ��û�����Ӧ��Ԫ�ء�")
		return 0;
	}

	return L.Data[K-1];	
}

/**
*�����Ա�L�в���X�ĵ�һ�γ���λ�á�
*/
int Find(ElementType X,List *Ptrl){
	int i = 0;
	while(i <= Ptrl->Last && X != Ptrl->Data[i])i++;

	if(i > Ptrl->Last){
		printf("û���ҵ�Ԫ��X��һ�γ��ֵ�λ��!")
		return -1;
	}else{
		return i;
	}
}


/*
*��λ��iǰ����һ����Ԫ��
*/
void Insert(ElementType X,int i,List *Ptrl){
	//�жϲ����λ���Ƿ�Ϸ�
	if(i>Ptrl->Last+1 && i < 0){
		printf("�����λ�ò��Ϸ���������ѡ��λ��");
		return -1;
	}

	//�ҵ���i��λ��  ��i��λ�ú����е�Ԫ������Ų��һ��

	for(int k = Ptrl->Last; k>= i;  k--;){
		Ptrl->Data[K+1] = Ptrl->Data[K];
	}

	Ptrl->Data[i] = X;
	ptrl->Last++;
}