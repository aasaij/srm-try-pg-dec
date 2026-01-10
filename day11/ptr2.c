//Program to demonstrate pointers
#include <stdio.h>

int main(){
	int x;
	//pointer declaration -- ptr is going to point an integer
	int *ptr;  // int* ptr;
	ptr = &x;
	x = 100;         
	printf("%d\n", x);
	printf("%d\n", *ptr);   
	printf("%d\n", *(&x));
	printf("%p", ptr);
	
	return 0;
}