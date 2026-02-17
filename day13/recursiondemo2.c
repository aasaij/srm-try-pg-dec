//Program to demonstrate recursion

#include <stdio.h>
//head recursion
//tail recursion
void print(int n){
	if (n>0){ //base case
		print(n-1); // tail recursion
		printf("%d ", n);
		
	}
}

int main(){
		
	print(5);
	return 0;
}