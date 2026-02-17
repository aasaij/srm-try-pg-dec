#include <stdio.h>
void print(int n){
	if (n){
		print(n-1);
		printf("%d", n) ;		
	}
}


int main(){
	print(3);
}