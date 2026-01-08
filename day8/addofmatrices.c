//Program to find addition of two matrices
#include<stdio.h>

int main(){
	int row, col;
	scanf("%d x %d", &row, &col); // 5 x 3
	int a[row][col], b[row][col], res[row][col];
	//Reading elements for matrix A
	for (int r = 0; r<row; r++)
		for(int c = 0; c<col; c++)
			scanf("%d", &a[r][c]);
	//Reading elements for matrix B
	for (int r = 0; r<row; r++)
		for(int c = 0; c<col; c++)
			scanf("%d", &b[r][c]);	
	//Adding two matrices
	//Reading elements for matrix A
	for (int r = 0; r<row; r++)
		for(int c = 0; c<col; c++)
			res[r][c] = a[r][c] + b[r][c];
	//Reading elements for matrix A
	for (int r = 0; r<row; r++){
		for(int c = 0; c<col; c++)
			printf("%d ", res[r][c]);			
		printf("\n");
	}
			
	return 0;
}