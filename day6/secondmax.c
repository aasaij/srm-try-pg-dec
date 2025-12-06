#include <stdio.h>
#include <limits.h>
int main (){
	int n,max, smax;
	max = smax = INT_MIN; 
	scanf("%d",&n);
	int arr[n];
	for(int i =0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for (int i = 0; i<n; i++){
		if ( arr[i]>max){
			smax = max;
			max = arr[i];
		}
		else if (arr[i]>smax && arr[i]!=max)
			smax = arr[i];
	}
	printf("%d", smax);
	return 0 ;
}
