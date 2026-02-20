//Program to display the stack application
#include <stdio.h>
#include <stdlib.h>
//defining the stack structure
typedef struct Stack{
	int capacity;
	int size;
	int *elements;
}stack;
stack* createStack(int max){
	stack *temp = (stack*)malloc(sizeof(stack));
	temp->capacity = max;
	temp->size = -1;
	temp->elements = (int*)malloc(sizeof(int) * max);
	return temp;
}
int main(){
	stack *st = createStack(3);
	return 0;
}