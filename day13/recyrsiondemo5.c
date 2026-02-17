#include <stdio.h>
int fact(n){
	if (n==0 || n==1)	
		return 1;
	else
		return n * fact(n-1);
}

int main(){
	int x;
	scanf("%d", &x);
	printf("%d\n", fact(x));
	
	return 0;
}