//Program to print factors of N
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for (int f = 1; f<=n/2; f++){
		if ( n % f == 0)
			printf("%d  ", f);
	}
	printf("%d", n);
	return 0;
}