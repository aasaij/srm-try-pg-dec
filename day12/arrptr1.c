#include <stdio.h>

int main(){
	char names[][20] = {"Manoj", "Kevin", "Lokesh", "Bense", "Faizal", "K7"};
	char **ptr;
//	printf("%s", names+2);
	ptr = &names[0];
	printf("%s", *(ptr+2));
	
	return 0;
}