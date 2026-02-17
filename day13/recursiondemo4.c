#include <stdio.h>
void print(int n){
	if (n){
		print(n-1);
		printf("%d", n) ;		
		print(n-1);
	}
}


int main(){
	print(3);
}