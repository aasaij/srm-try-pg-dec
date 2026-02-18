//Program to demonstrate nested structures
#include <stdio.h>
#include <string.h>
struct Employee{
	int id; // 4
	char name[30]; // 30
	double salary; // 8
	struct {
		int dd;
		int mm;
		int yy;
	}doj;
};

void printEmployee(struct Employee e){
	printf("Employee Id     : %d\n", e.id);
	printf("Employee Name   : %s\n", e.name);
	printf("Employee Salary : %.2lf\n", e.salary);
	printf("Date of Joining : %d/%d/%d\n", e.doj.dd, e.doj.mm, e.doj.yy);
}
int main(){
//	struct Employee *emp = (struct Employee *)malloc(sizeof(struct Employee));
//	emp->id = 1001;
	//Array of structures
	struct Employee emp[2];
	emp[0].id = 1234;
	strcpy(emp[0].name,"Mouli");
	emp[0].salary = 5000000;
	emp[0].doj.dd = 10;
	emp[0].doj.mm = 10;
	emp[0].doj.yy = 2027;

	emp[1].id = 12345;
	strcpy(emp[1].name,"Vignesh");
	emp[1].salary = 5500000;
	emp[1].doj.dd = 10;
	emp[1].doj.mm = 10;
	emp[1].doj.yy = 2027;
	printEmployee(emp[0]);
	printEmployee(emp[1]);
	
	return 0;
}