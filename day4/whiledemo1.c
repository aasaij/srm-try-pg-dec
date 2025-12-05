//Program to print natural numbers upto N

//while (<condition>){
//	<statements>
//}
#include <stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	i=1;
	while(i<=n){
		printf("%d ", i);
		i++;
	}
	
	return 0;
}