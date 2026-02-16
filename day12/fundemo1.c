//Function definition syntax

//return_type <function_name> (<parameterList>){
//	<function_body>
//	return <return_value>;
//}
#include <stdio.h>
#include <stdbool.h>
bool isOdd(int n){
	if (n % 2 == 1)
		return true;
	return false;
}
int main(){
	//function declaration or function proto-type
//	void greet();
	void greet(char*, char);
//	bool isOdd(int);
	//function calling
//	greet();
//	greet();
//	greet();
//	greet("Mouli", 'M');
//	greet("DD", 'F');
	printf("%d", isOdd(100));
	return 0;
}

//function definition
//void greet(){
//	printf("Good morning!\n");
//	printf("Enjoy Learning!\n");
//	return;
//}

//void greet(char *user, char gender){
//	printf("Good morning \"%s%s\"\n", gender=='F' || gender=='f'?"Ms." : "Mr.", user);
//	printf("Enjoy Learning!\n");
//	return;
//}

