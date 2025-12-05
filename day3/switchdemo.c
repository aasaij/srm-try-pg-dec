//Program to demonstrate switch statement
#include <stdio.h>

int main(){
	int num1, num2;
	char sign;
	scanf("%d %c %d", &num1, &sign, &num2);
	switch(sign){
		case '+':
			printf("%d %c %d = %d", num1, sign, num2, num1+num2); break;
		case '-':
			printf("%d %c %d = %d", num1, sign, num2, num1-num2); break;
		case '*': case 'x': case 'X':
			printf("%d %c %d = %d", num1, sign, num2, num1*num2); break;
		case '/':
			printf("%d %c %d = %.2f", num1, sign, num2, (float)num1/num2); break;
		case '%':
			printf("%d %c %d = %d", num1, sign, num2, num1%num2); break;
		default:
			printf("Invalid Operation!");	
	}
	return 0;
}


//100 + 200