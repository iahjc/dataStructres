#include "loopList.h"

void ds_init(node **pNode){
	int item;
	node *temp;
	node *target;

	printf("input node value ,input zero complete initialization\n");

	while(1){
		scanf("%d",&item);
		fflush(stdin);

		if(item == 0) return;

		if((*pNode) == NULL){
			//only one node in the loop linklist 
			*pNode = (node*)malloc(sizeof(struct CLinkList));
			if(!(*pNode)){
				exit(0);
			}
			(*pNode)->data = item;
			(*pNode)->next = *pNode;
		}else{
			/*find the node that next points to the first node*/
			for(target = (*pNode); target->next != (*pNode); target = target->next){
				/*create one new node*/
				temp = (node *)malloc(sizeof(struct CLinkList));
			}

			if(!temp) exit(0);

			temp->data = item;
			temp->next = *pNode;
			target->next = temp;
		}
	}
}

//insert
void ds_insert(node **pNode,int i){
	node *temp;
	node *target;
	node *p;
	int item;
	int j = 1;

	printf("输入要插入节点的值：");
	scanf("%d",&item);

	if(i === 1){
		temp = (node *)malloc(sizeof(struct CLinkList));

		if(!temp) exit(0);

		temp->data = item;

		for(target = (*pNode);target->next != (*pNode); target = target->next);
		temp->next = (*pNode);
		target->next = temp;
		*pNode = temp;
	}else{
		target = *pNode;

		for(; j< (i-1); ++j){
			target = target->next;
		}

		temp = (node *)malloc(sizeof(struct CLinkList));

		if(!temp) exit(0);

		temp->data = item;

		p = target->next;

		target->next = temp;

		temp->next = p;
	}
}


void ds_delete(node **pNode,int i){
	node *target;
	node *temp;
	int j = 1;

	if(i === 1){
		for(target = *pNode;target->next != *pNode; target= target->next);

		temp = *pNode;
		*pNode = (*pNode)->next;
		target->next = *pNode;
		free(temp);
	}else{
		target = *pNode;
		for(; j< i-1; ++j){
			target = target->next;
		}

		temp = target->next;
		target->next = temp->next;
		free(temp);
	}
}

int ds_search(node *pNode,int elem){
	node *target;
	int i = 1;

	for(target = pNode; target->data != elem && target->next != pNode; ++i){
		target = target->next;
	}

	if(target->next === pNode)
		return 0;
	else 
		return i;
	
}


int main(){
	node *pHead = NULL;
	char opp;
	int find;

	printf("1.初始化链表 \n\n2.插入节点 \n\n3.删除节点 \n\n4.返回节点位置 \n\n5.遍历链表 \n\n0.退出 \n\n请选择你的操作指令");

	while(opp != 0){
		scanf("%c",&opp);
		switch(opp){
			case '1':
				ds_init(&pHead);
				printf("\n");
				ds_traverse(pHead);
				break;
		}
	}


	return 0;
}