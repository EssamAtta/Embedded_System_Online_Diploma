/*
 ============================================================================
 Name        : C_Program_to_Check_Whether_a_Number_is_Even_or_Odd.c
 Author      : Essam Atta
 Version     :
 Copyright   : Your copyright notice
 Description : The program idea
Numbers perfectly divisible by 2 are known
even numbers and numbers which are not divisible by 2are called odd numbers.
This program takes an integer from user and checks whether that number is even or odd
 and displays the result.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int x=0;
	while (1){
	printf("\n");
	fflush(stdin);
	fflush(stdout);
	printf("Enter number to be checked : ");
	fflush(stdin);

	fflush(stdout);
	printf("\n");
	scanf("%d", &x);
	printf("the enterd value is %s", (x%2==0)? "even":"odd");
	}

	return EXIT_SUCCESS;
}
