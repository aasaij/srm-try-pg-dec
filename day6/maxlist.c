#include <stdio.h>

int main (){
	int n,max;
	scanf("%d",&n);
	int arr[n];
	for(int i =0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	max =arr[0];
	for(int j=1;j<n;j++){
		if (arr[j]>max){
			max = arr[j];
		}
	}
	printf("%d",max);
	
	return 0 ;
}