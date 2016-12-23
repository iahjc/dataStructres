#include "LinkedList.h"

//judge the linked list table is empty
int IsEmpty(List *L){
	return L->Next == NULL;
}

//judge the node is last node 
int IsLast(Position *P,List *L){
	return P->Next == NULL;
}

//where elementType node are linked list table 
Position* FindPrevious(ElementType X,List *L){
	if(IsEmpty(L)){
		printy("the linked list table is empty��no data!");
		return ;
	}
	
	List *nextNode;
	nextNode = L;
	//loop the linked list table ,find elementType X position and return node 
	while (nextNode->Next != NULL && nextNode->Data != X)
	{
		nextNode = nextNode->Next;
	}

	return nextNode;
}


//in the linked list table delete node X 
void Delete(ElementType X,List *L){
	if(IsEmpty(L)){
		printy("the linked list table is empty��no data!");
		return ;
	}
	
	List *nextNode;
	nextNode = L;
	List *previousNode;
	//loop the linked list table ,find delete node X position,
	//the find node X next node points delete node X previous node 
	//and the delete node X free 
	while(nextNode->Next != NULL && nextNode->Data != X){ //if current node "Next" not NULL and current node "Data" not X then loop or jump loop struct
		prevousNode = nextNode;
		nextNode = nextNode->Next;
	}
	
	nextNode = prevousNode->Next;
	free(nextNode);
}



List MakeEmpty(List L){
	
}


void Insert(ElementType X,List L,Position P){

}