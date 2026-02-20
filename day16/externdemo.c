//Program to demonstrate storage classes
//main file
#include <stdio.h>
extern char* userName;
extern int isAlpha(char);
int main(){
    printf("%s", userName);
	
	if (isAlpha('7'))
	    printf("\nAlphabet");
	else
	    printf("\nNot an alphabet!");
	return 0;
}