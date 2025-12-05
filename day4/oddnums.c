//Program to print odd natural numbers up to N
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	//Printing Odd numbers
//	for (int i = 1;i<=n; i+=2)	
//		printf("%d ", i);
	//Printing odd numbers in reverse order
//	if(n %2==0)
//	{
//	for (int i = n-1; i>=1; i-=2)
//		printf("%d ", i);
//	}
//	else{
//		for (int i = n; i>=1; i-=2)
//			printf("%d ", i);		
//	}
//	for (int i = n%2?n:n-1; i>=1; i-=2)
//			printf("%d ", i);		
	for (int i = n%2?n:n-1; i>=1; printf("%d ", i), i-=2);

	return 0;
}