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
//	printf("%-*.*sgood\n", 20,10,"Sathish is sooo handsome!");
//	printf("%-20.10s", "Sathish is sooo handsome!");
//	printf("%5d %-15s %d\n", 10, "Raja", 10);
//	printf("%5d %-15s %d\n", 101, "Rajavel", 10);
//	printf("%5d %-15s %d\n", 1, "Veeramani", 20);
//	printf("%5d %-15s %d\n", 1, "Yoganandh", 10);	
//	printf("%5d %-.15s %d\n", 1, "Yoganandh is good", 10);	
	char str[] = "Harini";
	for (int i = 1; i<=6; i++)
		printf("%-6.*s\n", i,str);
//	printf("%-6.2s\n", str);
//	printf("%-6.3s\n", str);
//	printf("%-6.4s\n", str);
//	printf("%-6.5s\n", str);
//	printf("%-6.6s\n", str);
	return 0;
}