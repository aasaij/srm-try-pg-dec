//Program to check whether the array is sorted or not (Ascending )
#include <stdio.h>

int main(){
	int size;
	scanf("%d", &size);
	int arr[size];
	//reading array elements
	for (int i = 0; i<size; i++)
		scanf("%d", &arr[i]);
	//checking whether the elements are sorted or not
	for (int i = 0; i<size-1;i++){
		if (arr[i]>arr[i+1]){
			printf("No");
			return 0;// terminate the app
		}
	}
	printf("Yes");
	return 0;
	
}