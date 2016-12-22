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
*i是从1开始的
*/
void Insert(ElementType X,int i,List *Ptrl){
	//判断表是否满了
	if(Ptrl->Last+1 > MAXSIZE){
		printf("改表已达到最大限度，不能添加新元素");
		return -1;
	}
	

	//判断插入的位置是否合法
	if(i>Ptrl->Last+2 || i < 1){
		printf("插入的位置不合法，请重新选择位序");
		return -1;
	}

	//找到第i个位置  第i个位置后所有的元素往后挪移一个

	for(int k = Ptrl->Last; k>= i -1;  k--;){
		Ptrl->Data[K+1] = Ptrl->Data[K];
	}

	Ptrl->Data[i-1] = X;
	ptrl->Last++;

	return 0;
}


/*
*删除指定位置i的元素
*/
void Delete(int i,List *Ptrl){
	//查看删除位置是否合法
	if(i > Ptrl->Last+1 || i < 1){
		printf("删除的位置不合法，请重新选择删除位置");
		return -1;
	}

	//找到第i个元素，第i个元素之后的元素都往前挪移一位

	for(int k = i ; k <= Ptrl->Last; k++){
		Ptrl->Data[k-1] = Ptrl->Data[k];
	}

	//last值-1
	Ptrl->Last--;
	return 0;
}

/*
*显示列表里面的数据
*/
void ShowStr(List *Ptrl){

	if(Ptrl->Last < 0){
		printf("该表为空表，没有数据!");
		return -1;
	}

	for(int i = 0; i< Ptrl->Last; i++){
		printf("%d",Ptrl->Data[i]);
	}
}


int main(){
	List *Ptrl = MakeEmpty();
	Insert('A',1,Ptrl);
	ShowStr(Ptrl);
	
	
	return 0;
}