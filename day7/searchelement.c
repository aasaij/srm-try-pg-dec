//Program to search an element in the list using linerar search algorithm
#include <stdio.h>
int main(){
	int size;
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
			printf("Found");
			return 0;
		}
	}
	printf("Not found!");
	return 0;
}