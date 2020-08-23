/*
 ============================================================================
 Name        : EX7_swap_without_temp.c
 Author      : Essam Atta
 Version     :
 Copyright   : Your copyright notice
 Description : Swap without temp
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a = 0;
		float b = 0;
		fflush(stdout);
		fflush (stdin);
		printf("value of a:");
		fflush(stdout);
		fflush (stdin);
		scanf("%f",&a);
		fflush(stdout);
		fflush (stdin);
		printf("value of b:");
		fflush(stdout);
		fflush (stdin);
		scanf("%f",&b);
		a= a+b;
		b= a-b;
		a= a-b;
		printf("After swapping, value of a = %g\n", a);
		printf("After swapping, value of b = %g\n", b);
		return EXIT_SUCCESS;
}
