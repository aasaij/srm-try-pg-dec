#include <stdio.h>
int main(){
//
//int arr[5][5];
//int arr[3][3] = {{1,2,3}, {2,3,4}, {4,5,6}};
//int arr[][3] = {{1,2,3}, {2,3,4}, {4,5,6}};
int arr[][3] = {1,2,3,
				4,5,6,
				7,8,9,
				10,11,12, 
				13};
//To find number of rows
int rowSize = sizeof(arr) / sizeof(arr[0]); 
	printf("%d", rowSize);
	return 0;
}