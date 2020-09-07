/*
 ============================================================================
 Name        : EX2_Fact_Recursive.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : 
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int fact (int n);

int main(void) {
	int x;
	int factorial = 0;
	printf("Enter postive number:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	factorial = fact (x);
	printf("factorial of %d is %d",x,factorial);

	return EXIT_SUCCESS;
}


int fact (int n){
	static int facto = 1;

	facto = facto * n;
	n--;
	if (n>0) return fact(n);
	else return facto;
	}

