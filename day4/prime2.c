//Prime number
#include <stdio.h>
//Method - 2
int main(){
	int n;
	scanf("%d", &n);
	for (int i = 2; i*i<=n; i++){
		if ( n % i == 0){
			printf("Not Prime");
			return 0; // terminate the main
		}
	}
	printf("Prime");
	return 0;
}