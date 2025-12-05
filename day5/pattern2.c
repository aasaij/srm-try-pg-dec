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
		//Inner loop
		for (int c = 1; c<=r; c++){
//			printf("%d", c);
//			printf("*");
//			printf("%c", c+64);
			printf("%c", 179);
		}
		printf("\n");		
	}
	return 0;	
}