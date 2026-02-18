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
int main(){
    node *x =createNode(123) ;
    x->next =createNode(1234);
    x->next->next =createNode(12345);
    return 0;    
}