//program to print the following pattern
/*
INput 
5
output
1
12
123
1234
12345
*/
#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	//Outer loop
	for (int i = 1; i<=n; i++){
		//Inner loop
		for (int j = 1; j<=i; j++){
			printf("%d", j);
		}
		printf("\n");		
	}
	return 0;	
}