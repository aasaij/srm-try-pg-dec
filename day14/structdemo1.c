//Program to demonstrate structures

#include <stdio.h>
#include <string.h>
struct Employee{
	int id;
	char name[30];
	double salary;
};

void printEmployee(struct Employee e){
	printf("Employee Id     : %d\n", e.id);
	printf("Employee Name   : %s\n", e.name);
	printf("Employee Salary : %.2lf\n", e.salary);
}

int main(){
//	struct Employee emp = {101, "Raja", 1000000};
//	struct Employee emp = {.name = "Yoganand",.salary=2000000};
//	struct Employee emp = {1002	};
	struct Employee emp;
//	emp.id = 1004;
//	strcpy(emp.name, "Arul");
//	emp.salary = 3000000;
	
	struct Employee *ptr; //struct pointer
	ptr = &emp;
	ptr->id = 1004;
	strcpy(ptr->name, "Arul");
//	ptr->salary = 3000000;	
	(*ptr).salary = 4000000;
	printEmployee(emp);
	return 0;
}