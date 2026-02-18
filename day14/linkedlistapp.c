//Program to demonstrate linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int value;
    struct Node *next;    
}node;
node *createNode(int data){
	node *temp =(node *) malloc(sizeof(node));    
	temp->value = data;
	temp->next = NULL;
	return temp;
}
node* addFirst(node* list, int element){
	node* newNode = createNode(element);
	newNode->next = list;
	list = newNode;
	return list;
}
node* addLast(node* list, int element){
	node* newNode = createNode(element);
	if (list){
		//list is not empty --> contains one or more nodes
		node* temp;
		//traversing the temp to the last node
		for (temp = list; temp->next; temp=temp->next);
		//now temp is pointer the last node
		temp->next = newNode;
	}
	else // list is empty
		list = newNode;
	return list;
}
node* addAt(node* list, int element, int pos){
	
}
void printList(node* list){
	if(list){
		//list is not empty
		printf("\n[");
		node* temp;
		for (temp = list; temp->next;temp=temp->next )
			printf("%d,", temp->value);
		printf("%d]", temp->value);
	}
	else{ //list is empty
		printf("\n[]");
	}
}

int main(){
    node *root = NULL;
    root = addFirst(root, 10);
    root = addFirst(root, 20);
    root = addFirst(root, 30);
    printList(root);
    root = addLast(root, 40);
    printList(root);
    return 0;    
}