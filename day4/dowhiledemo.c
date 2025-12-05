//do{
//	<statements>
//}while (<condition>);
//Program to count number of zeros, +ves and -ves
#include <stdio.h>
int main(){
	int p, n, z;
	p = n = z= 0;
	do{
		int x;
		scanf("%d", &x);
		if (x ==-1) break;
		if (x > 0) 
			p++;
		else if(x < 0)
			n++;
		else
			z++;			
	}while(1);
	printf("%d %d %d", p, n, z);
	return 0;
}
