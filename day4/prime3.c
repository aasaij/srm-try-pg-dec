#include <stdio.h>
//Method - 3
int main(){
	int n;
	scanf("%d", &n);
	if  (n > 3 && ( n % 2 == 0 || n % 3 == 0))
		printf("Not Prime");
	else{
		for (int i = 5; i*i<=n; i+=6){
			if ( n % i == 0 || n % (i+2)==0){
				printf("Not Prime");
				return 0; // terminate the main
			}
		}
		printf("Prime");
	}
	return 0;
}