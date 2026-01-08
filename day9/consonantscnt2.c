//Program to count consonants
#include <stdio.h>
int main(){
	char str[100];
	int cnt = 0;
	scanf("%s", str);
	for (int i = 0; str[i]!='\0'; i++){
		char c = str[i];
		//checking whether the character is an alphabet 
		if ((c>=65 && c<=90) || (c>='a' && c<='z')){
			//checking whether the character is lower case
			//if so convert into upper case
			if (c>='a'&&c<='z')	c-=32;
			//checking vowels
			if (!(c=='A' || c=='E'||c=='I' || c=='O' || c=='U' ))
				cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}