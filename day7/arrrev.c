//Program to print list of elements in reverse order

#include <stdio.h>

int main(){
	int arr[] = {1,2,3,4,5};
	//finding the size of array
	int size = sizeof(arr)/sizeof(arr[0]);
	//Traversing the list in reverse order
	for (int index = size-1; index>=0; index--)
		printf("%d ", arr[index]);
	return 0;
}

//5 4 3 2 1