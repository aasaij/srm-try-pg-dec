//Program to demonstrate pointers and arrays
#include <stdio.h>

int main(){
//	char *str = "Rajavel";
	char str[] = "Rajavel";
	char *ptr = str;
	ptr = ptr + 4; //pointer arithmetic
	str = str + 4; // array arithmetic --> error
	printf("%s", ptr);
//	printf("%c", *ptr++);
//	printf("%c", *ptr++);
//	printf("%c", *ptr);
//	printf("%c", *++ptr);
//	printf("%s", ptr--);
//	printf("\n%s", ptr);
	printf("%c", *str);
	printf("%c", *(str+1));
//	printf("%c", *str++);
//	printf("%c", *str);
//	printf("%c", *++str);
//	printf("%s", str--);
//	printf("\n%s", str);

	return 0;
}