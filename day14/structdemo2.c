//Program to demonstrate structures

#include <stdio.h>
#include <string.h>
struct Employee{
	int id; // 4
	char name[30]; // 30
	double salary; // 8
};

int main(){
//	printf("%d", sizeof(struct Employee));
//	printf("\n%d", sizeof(struct Employee*));
	struct Employee *emp = (struct Employee *)malloc(sizeof(struct Employee));
	emp->id = 1001;
	return 0;
}