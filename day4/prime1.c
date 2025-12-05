#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for (int i = 2; i<=n/2; i++){
		if ( n % i == 0){
			printf("Not Prime");
			return 0; // terminate the main
		}
	}
	printf("Prime");
	return 0;
}