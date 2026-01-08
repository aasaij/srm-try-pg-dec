//Program to print main and off diagonal elements of square matrix
#include <stdio.h>

int main(){
	int rowSize, colSize;
	scanf("%d %d", &rowSize, &colSize);
	if (rowSize == colSize){
		int arr[rowSize][colSize];
		//reading elements for matrix
		for (int r = 0; r<rowSize; r++)
			for (int c = 0; c<colSize; c++)
				scanf("%d", &arr[r][c]);
		//printing the main diagonal elements
		printf("Main diagonal elements : ");
		for (int i = 0; i<rowSize; i++)
			printf("%d ", arr[i][i]);
		printf("\nOff diagonal elements : ");
		for (int i = 0; i<rowSize; i++)
			printf("%d ", arr[i][colSize-i-1]);		
	}
	else
		printf("N/A");
	return 0;
}