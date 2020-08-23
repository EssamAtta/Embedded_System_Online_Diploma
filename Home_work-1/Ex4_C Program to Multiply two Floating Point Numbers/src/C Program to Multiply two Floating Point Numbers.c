/*
 ============================================================================
 Name        : C.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Multiply two Floating Point Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x=0;
	float y=0;
	fflush(stdout);
	fflush (stdin);
	printf("Enter two numbers:");
	fflush(stdout);
	fflush (stdin);
	scanf("%f",&x);
	fflush(stdout);
	fflush (stdin);
	scanf("%f",&y);

	printf("product %f",x*y);

	return 0;
}
