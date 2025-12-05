//program to print the following pattern
/*
INput 
5
output
12345
 1234
  123
   12
    1
*/
#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	//Outer loop
	for (int r = n; r>=1; r--){
		//printing space
		for (int j = 1; j<=n-r; j++)
			printf(" ");
		//Inner loop
		for (int c = 1; c<=r; c++){
			printf("%d", c);
		}
		printf("\n");		
	}
	return 0;	
}