//Program to print X pattern

#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	int len;
	scanf("%s", str);
	len = strlen(str);
	for (int i = 1; i<=len; i++)
		printf("%*c\n", i, str[i])
	return 0;
}