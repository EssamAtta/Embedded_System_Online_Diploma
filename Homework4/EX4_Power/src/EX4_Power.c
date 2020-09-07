/*
 ============================================================================
 Name        : EX4_Power.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int power (int base, int number);
int main(void) {
	int b,po,result;
	printf("Enter base ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&b);
	printf("Enter power number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&po);
	result = power (b,po);
	printf("%d ^ %d is %d : ",b,po,result);



	return EXIT_SUCCESS;
}

int power (int base, int number)
{
	static int result = 1;
	if (base > 0 )
	{
		result = result * number ;
		base --;
		return power(base, number);
	}

	return result;}
