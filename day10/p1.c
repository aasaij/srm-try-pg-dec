#include<string.h>
//strcpy
int main(){
	char str1[100] = "Yoganandh";
	char str2[100] = " Muthu";
//	strcpy(str2, str1);//str2 = str1;
//	puts(str2);
//	printf("%d\n", strlen(str1));
//	strcat(str1,str2 ); // str1 = str1 + str2;
//	puts(str1);
//	printf("%d", stricmp(str1, str2));
//	strncpy(str2, str1, 5);
//	strncat(str1, str2, 2);
//	strncmp()
//	if (strchr("AEIOUaeiou", 'a') != NULL)
//		printf("Yes");
//	else
//		printf("No");
	if (strstr("This is test", "was") != NULL)
		printf("Yes");
	else
		printf("No");
		
//	puts(str1);
	return 0;
}