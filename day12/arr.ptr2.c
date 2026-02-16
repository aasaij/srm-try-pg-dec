#include <stdio.h>
//program to demonstrate arrays and pointers
int main(){
	int arr[] = {1,12, 17, 8, 55, 34};
	int size = sizeof(arr)/sizeof(arr[0]);
	int *ptr;
	ptr = arr;
//	printf("%d", *ptr);	
//	printf("\n%d", ptr[-1]);
//	printf("\n%d", *(ptr+4));
//	printf("\n%d", *(ptr-4));
	for (int i = 1; i<=size; i++)
		printf("%d ", *ptr++);
	return 0;
}