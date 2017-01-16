#include "linkedList.h"

/**
*return the i element
*/
Status GetElem(LinkList L,int i,ElemType *e){
	int j;

	LinkList p;

	p = L->next;

	j = 1;

	while(p && j < i){
		p = p->next;
		++j;
	}

	if(!p || j > i){
		return ERROR;
	}

	*e = p->data;
	return OK;
}

//insert new node
Status ListInsert(LinkList *L,int i,ElemType e){
	LinkList p,s;
	int j;

	p = *L;
	j = 1;

	while(p && j<i){
		p  = p ->next;
		j++;
	}

	if(!p || j> i){
		return ERROR;
	}

	s = (LinkList)malloc(sizeof(Node));
	s->data = e;
	s->next = p->next;
	p->next = s;

	return OK;
}

Status ListDelete(LinkList *L,int i,ElemType *e){
	LinkList p,q;
	int j;

	p = *L;
	j = 1;

	while(p && j<i){
		p  = p ->next;
		j++;
	}

	if(!(p->next) || j> i){
		return ERROR;
	}

	q = p->next;
	p->next = q->next;
	*e = q->data;
	free(q);

	return OK;
}

void CreateListHead(LinkList *L,int n){
	LinkList p;
	int i;

	srand(time(0)); //初始化随机数字
	*L = (LinkList)malloc(sizeof(Node)); //生成新的节点
	(*L)->next = NULL;

	for(i = 0; i< n; i++){
		p = (LinkList)malloc(sizeof(Node));
		p->data = rand()%100+1;
		p->next = (*L)->next;
		(*L)->next = p;
	}
}


void CreateListTail(LinkList *L,int n){
	LinkList p,r;

	int i;

	srand(time(0));

	*L = (LinkList)malloc(sizeof(node));
	r = *L;

	for(i = 0; i< n; i++){
		p = (Node *)malloc(sizeof(Node));
		p->data = rand()%100 +1;
		r->next = p;
		r = p;
	}

	r->next = NULL;
}

Status ClearList(LinkList *L){
	LinkList p,q;
	p = (*L)->next;
	while(p){
		q = p->next;
		free(q);
		p = q;
	}

	(*L)->next = NULL;
	return OK;
}


int main(){

	


	return 0;
}