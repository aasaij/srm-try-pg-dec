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
	if (pos == 0 || pos == 1)
		return addFirst(list, element);
	//checking the following conditions
	//1. The position shoule be > 1
	//2. The list should not empty
	//3. The list should contain atleast two elements
	if (pos > 1 && list && list->next) {
		node *temp=list;
		for (int i = 2;i<pos&&temp; i++)
			temp = temp->next;
		//checking temp is not null
		if (temp && temp->next){
			node* newNode = createNode(element);
			newNode->next = temp->next;
			temp->next = newNode;
		}
	}
	return list;
}
node* deleteFirst(node* list){
	if (list){
		//list is not empty
		node* temp = list;
		list = list->next;
		free(temp);
	}
	return list;
}
node* deleteLast(node* list){
	if (list){
		//list is not empty
		//checking whether list contains only one element
		if (list->next==NULL){
			free(list);
			return NULL;
		}
		//list contains more than one element
		//Traverse the temp pointer to the last but second element
		node* temp;
		for (temp = list; temp->next->next; temp = temp->next);
		free(temp->next);
		temp->next = NULL;
	}
	return list;
}
node* deleteAt(node* list, int pos){
	
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
    root = addAt(root, 15, 1);
    printList(root);
    root = addAt(root, 35, 4);
    printList(root);
    root = addAt(root, 35, 7);
    printList(root);
    root = deleteFirst(root);
    printList(root);
    root = deleteLast(root);
    printList(root);
    return 0;    
}