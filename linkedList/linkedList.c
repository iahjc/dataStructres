#include "linkedList.h"


/**
*return the i element
*/
Status GetElem(LinkList L,int i,ElemType *e){
	int j;

	LinkList p;

	p = L->Next;

	j = 1;

	while(p && j < i){
		p = p->Next;
		++j;
	}

	if(!p || j > i){
		return ERROR;
	}

	*e = p->data;
	return OK;
}


Status ListDelete(LinkList *L,int i,ElemType *e){
	LinkList p,q;
	int j;

	p = *L;
	j = 1;

	while(p->Next && j<i){
		p  = p ->Next;
		++j;
	}

	if(!(p->Next) || j> i){
		return ERROR;
	}

	q = p->Next;
	p->Next = q->Next;
	*e = q->data;
	free(q);

	return OK;
}




void CreateListTail(LinkList *L,int n){
	LinkList p,r;

	int i;

	srand(time(0));

	*L = (LinkList)malloc(sizeof(Node));
	r = *L;

	for(i = 0; i< n; i++){
		p = (Node *)malloc(sizeof(Node));
		p->data = rand()%100 +1;
		r->Next = p;
		r = p;
	}

	r->Next = NULL;
}

Status ClearList(LinkList *L){
	LinkList p,q;
	p = (*L)->Next;
	while(p){
		q = p->Next;
		free(q);
		p = q;
	}

	(*L)->Next = NULL;
	return OK;
}



//insert new node
Status ListInsert(LinkList *L,int i,ElemType e){
	LinkList p,s;
	int j;

	p = *L;
	j = 1;

	while(p && j<i){
		p  = p ->Next;
		j++;
	}

	if(!p || j> i){
		return ERROR;
	}

	s = (LinkList)malloc(sizeof(Node));
	s->data = e;
	s->Next = p->Next;
	p->Next = s;

	return OK;
}


void CreateListHead(LinkList *L,int n){
	
	LinkList p;
	int i;
	
	srand(time(0)); //初始化随机数字
	
	(*L) = (LinkList)malloc(sizeof(Node)); //生成新的节点
	
	(*L)->Next = NULL;

	for(i = 0; i< n; i++){
		p = (LinkList)malloc(sizeof(Node));
		p->data = rand()%100+1;
		p->Next = (*L)->Next;
		(*L)->Next = p;
	}
}


//print all data
void showAllData(LinkList *L){
	LinkList p;
	p = *L;
	p = p->Next;
	//delete head node

	while(p){
		printf("%d    \n",p->data);
		p = p->Next;
	}
}



int main(){

	//not init NULL
	LinkList* Li ;

	CreateListHead(Li,3);

	//ListInsert(LinkList *L,int i,ElemType e){
	int status = ListInsert(Li,2,99);
	
	printf("%d \n",status);
	
	//delete node 
//	Status ListDelete(LinkList *L,int i,ElemType *e){
	
	ElemType *ee;

	status = ListDelete(Li,1,ee);
	
	printf("delete element index 1 raw data is %d \n",ee);

	//insert 

	//printf("ccc");
	showAllData(Li);

	system("pause");
	return 0;
}