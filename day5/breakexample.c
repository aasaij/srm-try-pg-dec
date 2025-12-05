//program to demonstrate break statement
#include <stdio.h>

int main(){
	for (int j = 1; j<=3; j++)
	for (int i = 1; i<=10;i++){
		if (i % 4==0)
			break;
			printf("%d", i);	
	}
	return 0;
}