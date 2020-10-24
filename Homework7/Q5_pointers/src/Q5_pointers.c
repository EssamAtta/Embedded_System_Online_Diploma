/*
 ============================================================================
 Name        : Q5_pointers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct Data
{
	char * Employee_Name;
	int Employee_ID;
};

int main(void) {
	struct Data Employees[2] = {{"Alex", 1002}, {"Donia", 25} };
	struct Data * ptr_str = Employees;
	printf("Employee Name : %s\n"
			"Employee ID : %d\n", ptr_str->Employee_Name, ptr_str->Employee_ID);


	return EXIT_SUCCESS;
}
