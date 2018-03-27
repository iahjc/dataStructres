#include "List.h"



/**
* 申请一块空间
*/
List* MakeEmpty(){
	List *Ptrl; // 声明
	Ptrl = (List *)malloc(sizeof(List)); // 开辟空间
	Ptrl->Last = -1;
	return Ptrl;
}



/**
*在线性列表L中查找x第一次出现的位置
*/
int Find(ElementType X,List *Ptrl){
	int i = 0;
	while(i <= Ptrl->Last && X != Ptrl->Data[i])i++;

	if(i > Ptrl->Last){
		printf("The position of the element X not found");
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
	// 判断是否表满了
	if(Ptrl->Last+1 > MAXSIZE){
		printf("the maximum of the table is full! not add new element!");
		return;
	}
	

	//判断插入的位置是否合法
	if(i>Ptrl->Last+2 || i < 1){
		printf("the position of inserting is wrongful! ");
		return;
	}

	//找到第i个位置 第i个位置后所有的元素往后挪移一位

	for(int k = Ptrl->Last; k>= i -1;  k--){
		Ptrl->Data[k+1] = Ptrl->Data[k];
	}

	Ptrl->Data[i-1] = X;
	Ptrl->Last++;
	return;
	
}


/*
*删除指定位置i的元素
*/
void Delete(int i,List *Ptrl){
	//查看删除位置是否合法
	if(i > Ptrl->Last+1 || i < 1){
		printf("the position of the deleted is wrongful！ please reselect the deleting location！");
		return;
	}

	//找到第i个元素，第i个元素之后的元素都往前挪移一位。

	for(int k = i ; k <= Ptrl->Last; k++){
		Ptrl->Data[k-1] = Ptrl->Data[k];
	}

	// last value minus 1
	Ptrl->Last--;
	return;
}

/*
* 显示列表里面的数据
*/
void ShowStr(List *Ptrl){

	if(Ptrl->Last < 0){
		printf("the table is null, no data!");
		return;
	}
	
	for(int i = 0; i<= Ptrl->Last; i++){
		printf("%c",Ptrl->Data[i]);
	}
	printf("\n");
	
}


int main(){
	List *Ptrl = MakeEmpty();
	Insert('A',1,Ptrl);
	Insert('B',2,Ptrl);
	Insert('C',3,Ptrl);
	Insert('D',4,Ptrl);
	Insert('E',5,Ptrl);
	Insert('F',6,Ptrl);
	Insert('G',7,Ptrl);
	Insert('H',8,Ptrl);

	ShowStr(Ptrl);
	
	printf("%d",Find('B',Ptrl));
	
	printf("\n");

	Delete(2,Ptrl);

	ShowStr(Ptrl);

	printf("\n");
	system("pause");
	return 0;
}

