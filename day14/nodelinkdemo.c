//Program to demonstrate linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int value;
    struct Node *next;    
}node;

int main(){
    node *x =(node *) malloc(sizeof(node));    
    x->next =(node *) malloc(sizeof(node));
    x->next->next =(node *) malloc(sizeof(node));
    x->value = 123;
    x->next->value = 1234;
    x->next->next->value = 123456;
    return 0;    
}