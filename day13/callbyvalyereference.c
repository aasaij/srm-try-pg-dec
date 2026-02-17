//Program to demonstrate call by value and call by reference
#include <stdio.h>
//Call by value
//void swap(int a, int b){
//	int temp = a;
//	a = b;
//	b = temp;
//}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}


int main(){
	int x, y;
	x = 11, y=12;
	swap(&x, &y);
	printf("%d %d", x, y);
	return 0;
}