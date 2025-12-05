//program to print the following pattern
/*
INput 
5
output
1234512345
1234  1234
123    123
12      12
1        1
*/
#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	//Outer loop
	for (int r = n; r>=1; r--){
		for (int c = 1; c<=r; c++){
//			printf("%d", c);
			printf("*");
		}
		//printing space
		for (int j = 1; j<=(n-r)*2; j++)
			printf(" ");
		//Inner loop
		for (int c = 1; c<=r; c++){
//			printf("%d", c);
			printf("*");
		}
		printf("\n");		
	}
	return 0;	
}