//Program to check whether the given character is upper case or not
#include <stdio.h>
#include <ctype.h>

int main(){
	char ch;
	scanf("%c", &ch);
//	if (ch >= 65 && ch<=90)
//	if(ch>='A' && ch <='Z')
//	if (isupper(ch))
//		printf("Yes");
//	else
//		printf("No");
	printf(isupper(ch)?"Yes":"No");
	return 0;
}