/*
 ============================================================================
 Name        : Q1_pointers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m = 29;
	int *ptr_m = &m;
	printf("Adress of m :%x\n Value of m :%d\n",(unsigned int)&m, m);
	printf("now ab is assigned with adress of m\n");
	printf("Adress of pointer ab :%x\nContent of pointer ab: %d\n",(unsigned int)ptr_m, *ptr_m);
	m = 34;
	printf("the value of m assigned to %d now\n",m);
	printf("Adress of pointer ab :%x\nContent of pointer ab: %d\n",(unsigned int)ptr_m, *ptr_m);

	*ptr_m = 7;
	printf("the pointter value ab is assigned with the value 7 now\n");
	printf("Adress of m :%x\n Value of m :%d\n",(unsigned int)&m, m);




	return EXIT_SUCCESS;
}
