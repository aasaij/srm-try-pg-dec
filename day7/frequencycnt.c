//Program to count the frequency of an element in the list
#include <stdio.h>
int main(){
	int size, cnt = 0;
	scanf("%d", &size);
//	int arr[size] = {1,2,3,4}; // error
	int arr[size], searchElement;
	//reading list of elements from the user
	for (int i = 0; i<size;i++)
		scanf("%d",&arr[i]); //scanf("%d",&i[arr]); //
	scanf("%d", &searchElement);
	//implementing linear search algorithm
	for (int i = 0; i<size; i++){
		if (arr[i]==searchElement){
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}