//Program to check whether the array is sorted or not (Ascending )
#include <stdio.h>

int main(){
	int size;
	scanf("%d", &size);
	int arr[size];
	//reading array elements
	for (int i = 0; i<size; i++)
		scanf("%d", &arr[i]);
	//Moving zeros to end=-9]
	for (int i = 0, j = size-1;i<j;){
		while(arr[i]==1 && i < j ) i++;
		while(arr[j]==0 && j > i) j --;
		if (i<j)
			arr[i] = arr[i]+arr[j] - (arr[j]=arr[i]);
	}
	for (int i = 0; i<size; i++)
		printf("%d ", arr[i]);
	
	return 0;
	
}


9943115155

