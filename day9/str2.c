//Demonstration of string
#include <stdio.h>
int main(){
	char str[] = "Arul is good";
	str[4] = '\0';
//	printf("%s", str);
//	printf("%s", str+5);
//	printf("testing"+3);
	puts(str)	;
	puts(str+5);
	puts("testing"+3);
return 0;
}