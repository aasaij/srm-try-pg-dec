//program to demonstrate nested loop
#include <stdio.h>

int main(){
	//Outer loop
	for (int i = 1; i<=5; i++){
		//Inner loop
		for (int j = 1; j<=5; j++){
			printf("%d", j);
		}
		printf("\n");		
	}
	return 0;
	
}