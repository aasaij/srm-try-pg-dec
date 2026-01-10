//Program to print the following pattern
/*
Input
	Harini
Ouput
H
Ha
Har
Hari
Harin
Harini
*/
#include <stdio.h>

int main(){
	char str[100];
	int len;
	scanf("%s%n", str, &len);
	for(int i = 1; i<=len; i++)
		printf("%-*.*s%*.*s", len, i, str, len, i, str);
	
	for(int i = len; i>=1; i--)
		printf("%-*.*s%*.*s\n", len, i, str, len, i, str);
		
	return 0;
}
//Ramya
//R       R
// a     a
//  m   m
//   y y
//    a 
//   y y    
//  m   m   
// a     a  
//R       R



    