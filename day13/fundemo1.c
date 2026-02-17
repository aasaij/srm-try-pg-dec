#include <stdio.h>


int main(){	
	int calc(int, int, char);
	int x, y;
	char sign;
	scanf("%d %c %d", &x, &sign, &y);
	printf("%d %c %d = %d\n", x, sign, y, calc(x,y,sign));
	return 0;
}
void testing(){
	printf("%d", calc(1,7,'+'));
}
int calc(int a, int b, char s){
	switch(s){
		case '+':
			return a + b;
		case '-':
			return a-b;
		case '*': case 'x': case 'X':
			return a * b;
		case '/':
			return a/b;
		default:
			return -1;
	}
}