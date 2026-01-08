//Program to count vowels
#include <stdio.h>
#include <ctype.h>
int main(){
	char str[100];
	int cnt = 0;
	scanf("%s", str);
	for (int i = 0; str[i]!='\0'; i++){
		char c = toupper(str[i]);
		if (c=='A' || c=='E'||c=='I' || c=='O' || c=='U' )
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}