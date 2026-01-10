//Program to print the following pattern
/*
Input
	Harini
Ouput
H
Ha
Har
Hari
Harin
Harini
*/
#include <stdio.h>

int main(){
	char str[100];
	int len;
	scanf("%s%n", str, &len);
	for(int i = 1; i<=len; i++)
		printf("%-*.*s%*.*s\n", len, i, str, len, i, str);
	return 0;
}