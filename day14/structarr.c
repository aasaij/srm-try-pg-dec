//Program to demonstrate structures

#include <stdio.h>
struct Employee{
	int id; // 4
	char name[30]; // 30
	double salary; // 8
};

int main(){
//	struct Employee *emp = (struct Employee *)malloc(sizeof(struct Employee));
//	emp->id = 1001;
	//Array of structures
	struct Employee emps[2];
	emps[0].id = 1234;
	strcpy(emp[0].name,"Mouli");
	emp[0].salary = 5000000;

	emps[1].id = 12345;
	strcpy(emp[1].name,"Vignesh");
	emp[1].salary = 5500000;
	
	return 0;
}