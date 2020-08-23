/*
 ============================================================================
 Name        : Write.c
 Author      : Essam Atta
 Version     :
 Copyright   : Your copyright notice
 Description : sawp 2 numbers
 Enter value of a: 1.20
 Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a = 0;
	float b = 0;
	float temp = 0;
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
	temp = a;
	a=b;
	b=temp;
	printf("After swapping, value of a = %g\n", a);
	printf("After swapping, value of b = %g\n", b);
	return EXIT_SUCCESS;
}
