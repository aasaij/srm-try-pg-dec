//Program to find sum and average of list of N integers

#include <stdio.h>

int main(){
	int n, sum=0;
	scanf("%d", &n);	
	int arr[n];
	//getting list of N integers and storing into an array
	for(int idx = 0; idx<n; idx++)
		scanf("%d", &arr[idx]);
	//Finding sum of list of N integers
	for (int idx = 0; idx<n; idx++)
		sum = sum + arr[idx]; // sum+=arr[idx]
	printf("Sum : %d\tAverage : %.2f", sum, (float)sum/n);
	return 0;
}