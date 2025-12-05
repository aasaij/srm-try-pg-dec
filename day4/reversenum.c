//Program to reverse a number
#include <stdio.h>
int main(){
	long long int n, reverse=0;
	scanf("%lld", &n);
	while(n!=0){
		int remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n /= 10;
	}
	printf("%lld\n", reverse)	;
	return 0;
}