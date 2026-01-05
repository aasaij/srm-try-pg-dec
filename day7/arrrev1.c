//Program to reverse the original array
#include <stdio.h>
int main(){
	int size;
	scanf("%d", &size);
//	int arr[size] = {1,2,3,4}; // error
	int arr[size];
	//reading list of elements from the user
	for (int i = 0; i<size;i++)
		scanf("%d",&arr[i]); //scanf("%d",&i[arr]); //
	//reversing the list
	for (int left=0, right=size-1; left < right; left++, right--){
		//swapping left and right elements
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
	}
	//printing the reversed list
	for (int i = 0; i<size; i++)
		printf("%d ", arr[i]);
	
	return 0;
}