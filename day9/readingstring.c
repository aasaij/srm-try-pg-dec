//program to read a string and print character by character
#include <stdio.h>

int main(){
	char str[100];
	//read word
//	scanf("%s", str); // scanf("%s", &str[0]);
//	gets(str);
//	puts(str);
	//read sentence
    scanf("%[^\n]s", str);
    //printing the string character by character
    for (int i = 0; str[i]!='\0'; i++)
    	printf("%c", str[i]);
	return 00;
}