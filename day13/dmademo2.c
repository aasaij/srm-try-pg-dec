#include <stdio.h>
#include <stdlib.h>

int main(){
	int *arr, n=5; // arr[5]
	arr = (int *)malloc(5*sizeof(int));
	arr = (int *)realloc(arr, 7 * sizeof(int));
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 300;
	free(arr);
	return 0;
}