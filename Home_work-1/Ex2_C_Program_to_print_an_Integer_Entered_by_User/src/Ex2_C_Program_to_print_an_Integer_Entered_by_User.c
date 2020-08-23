/*
 ============================================================================
 Name        : Ex2_C_Program_to_print_an_Integer_Entered_by_User.c
 Author      : Essam Atta
 Version     :V 1.0
 Copyright   : Your copyright notice
 Description : Program_to_print_an_Integer_Entered_by_User
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x=0;
	fflush(stdout);
	fflush (stdin);
	printf("Enter an Integer:");
	fflush(stdout);
	fflush (stdin);
	scanf("%d",&x);
	printf("You entered %d",x);

	return 0;
}
