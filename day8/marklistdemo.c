//Program to print mark list
#include <stdio.h>

int main(){
	int size, subjects;
	scanf("%d %d", &size, &subjects);
	int marks[size][subjects], rollNo[size];
	for (int r = 0; r<size; r++){
		printf("Roll Number : ");
		scanf("%d", &rollNo[r]);
		for (int c = 0; c<subjects; c++)
			scanf("%d", &marks[r][c]);
	}
	***********************************************************
	RollNumber Subject1 Subject2 Subject3  Total Average Result
	***********************************************************
	45           10      10        10       30    10      Pass
	***********************************************************	
	
	return 0;
}