//Program to add two numbers
#include <stdio.h>

int main(){
	double x, y, sum;
	scanf("%lf%lf", &x, &y);
	sum  = x + y;
	if ( sum == (long long int)sum)
		printf("%lld",(long long int)sum);
	else
		printf("%.2lf", sum);	
	return 0;
}