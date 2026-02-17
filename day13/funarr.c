//Passing array to function
#include <stdio.h>
void change (char s[]){
	s[0]= 'N';
}
int main(){
	char str[] = "Santhiya";
	change(str);
	printf("%s", str);
	return 00;
}