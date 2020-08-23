/*
 ============================================================================
 Name        : Ex5_Write.c
 Author      : Essam Atta
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Find ASCII Value of a Character
 ASCII value of G = 71
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a= 0;
	int x= 0;
	fflush(stdout);
	fflush (stdin);
	printf("Enter character:");
	fflush(stdout);
	fflush (stdin);
	scanf("%c",&a);
	x = a;
	printf("ASCII value of %c is %d",a,x);



	return EXIT_SUCCESS;
}
