//Program to demonstrate storage classes
#include <stdio.h>
//global variable
int y; // 0 BSS segment
int main(){
	//local variable
	auto int x; // garbage --> stack segment
	int *test = (int*)malloc(sizeof(int)); --> heap segment
	static int a; // 0 --> BSS segment
	{
	    static int m=10; //DAta segment
	}
	
	printf("%d %d %d %d", x, y, a, m);
	
	return 0;
}