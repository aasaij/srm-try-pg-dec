#include <stdio.h>
//Porgram to demonstrate pointer arithmetic
int main(){
	int x, *ptr;
	ptr = &x;
	*ptr = 100;
	printf("%d\n", *ptr);
	ptr++;
	*ptr = 200;
	printf("%d\n", *ptr);
	return 0;
}