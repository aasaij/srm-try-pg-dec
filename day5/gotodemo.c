//Program to demonstrate goto 
#include <stdio.h>

int main(){
	test: //label
		printf("You are all very talented!!!");
	goto test;
	
	return 0;
}