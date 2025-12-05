//Program to calculate compound interest
#include <stdio.h>
#include <math.h>
int main(){
	int principal;
	double rate, year, interest;
	scanf("%d", &principal);
	scanf("%lf", &rate);
	scanf("%lf", &year);
	interest = principal * pow(1+rate/100, year);
	printf("%.2lf", interest);
	return 0;
}