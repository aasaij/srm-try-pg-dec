//Program to demonstrate pointers
#include <stdio.h>

int main(){
	int x;
	//pointer declaration -- ptr is going to point an integer
	int *ptr;  // int* ptr;
	ptr = &x;
	x = 100;         
	ptr= 200;
	x=x+1;
	printf("%d\n", x);
	printf("%d\n", *ptr);   
	printf("%d\n", *(&x));
	printf("%p\n", ptr);
	printf("%p\n", &ptr);
	
	return 0;
}