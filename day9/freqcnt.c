//Program to count the digit frequency
#include <stdio.h>

int main(){
	int freq[10]= {0};	
	long long int n;
	scanf("%lld", &n);
	while(n!=0){
		int digit = n % 10;
		freq[digit]++; //freq[digit] = freq[digit]+1;
		n = n / 10;
	}
	for (int i = 0; i<10; i++)
		if (freq[i]!=0)
			printf("%d ==> %d\n", i, freq[i]);
	return 0;
}