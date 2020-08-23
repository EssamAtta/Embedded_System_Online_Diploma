/*
 ============================================================================
 Name        : Ex3_C_Program_to_Add_2_integers.c
 Author      : Essam Atta
 Version     :V 1.0
 Copyright   : Your copyright notice
 Description : Ex3_C_Program_to_Add_2_integers.c
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x=0;
	int y=0;
	fflush(stdout);
	fflush (stdin);
	printf("Enter two integers:");
	fflush(stdout);
	fflush (stdin);
	scanf("%d",&x);
	fflush(stdout);
	fflush (stdin);
	scanf("%d",&y);

	printf("Sum %d",x+y);

	return 0;
}
