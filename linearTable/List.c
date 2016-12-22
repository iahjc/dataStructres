#include "List.h"

/**
*申请一块空间
*/
List *MakeEmpty(){
	List *Ptrl; //声明
	Ptrl = (List*)malloc(sizeof(List)); //开辟空间
	Ptrl->Last = -1;
	return Ptrl;
}

/**
*根据位序K，返回相应的元素
*/
ElementType FindKth(int K,List L){
	//判读k是否越界
	if(K<0 && K > L.Last+1){
		printf("位序K值不合法，该位置没有相对应的元素。")
		return 0;
	}

	return L.Data[K-1];	
}

/**
*在线性表L中查找X的第一次出现位置。
*/
int Find(ElementType X,List *Ptrl){
	int i = 0;
	while(i <= Ptrl->Last && X != Ptrl->Data[i])i++;

	if(i > Ptrl->Last){
		printf("没有找到元素X第一次出现的位置!")
		return -1;
	}else{
		return i;
	}
}


/*
*在位序i前插入一个新元素
*/
void Insert(ElementType X,int i,List *Ptrl){
	//判断插入的位置是否合法
	if(i>Ptrl->Last+1 && i < 0){
		printf("插入的位置不合法，请重新选择位序");
		return -1;
	}

	//找到第i个位置  第i个位置后所有的元素往后挪移一个

	for(int k = Ptrl->Last; k>= i;  k--;){
		Ptrl->Data[K+1] = Ptrl->Data[K];
	}

	Ptrl->Data[i] = X;
	ptrl->Last++;
}