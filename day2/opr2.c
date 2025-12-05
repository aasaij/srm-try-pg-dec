#include <stdio.h>

int main(){
	int x, y, z;
	x = 7;
	y = x--; // x = x + 1 ; y = x;
	z = ++x + --y; // y = y + 1; z = x + y; x = x + 1
	printf("%d %d %d", x, y, z);
//	printf("\n%d", ++x);
//	printf("\n%d", x);
	return 0;
}
//

//7 6 13
//7 5 12
//10 11 21
//10 11 22
//10 11 23

