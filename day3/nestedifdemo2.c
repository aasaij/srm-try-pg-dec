//Program to demonstrate nested if
#include <stdio.h>
//Method - 2
int main(){
	int x, y, z, max, min, mid;
	scanf("%d %d %d", &x,&y, &z);
	max = x>y && x > z ? x : ( y > z ? y : z);
	min = x<y && x < z ? x : ( y < z ? y : z);
	mid  = x + y + z - (max+min);
	printf("%d<=%d<=%d", min, mid, max);
	return 0;
}