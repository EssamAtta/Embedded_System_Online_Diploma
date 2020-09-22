/*
 ============================================================================
 Name        : EX1_PrimeNumbersIntervals.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : 
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// Function prototype
void Prime_Numbers(int a, int b);

int main(void) {
	int x , y;
	printf("Enter two Numbers(intervels):");
	fflush(stdin);
	fflush(stdout);
	scanf("%d  %d",&x,&y);
	Prime_Numbers(x, y);
	return EXIT_SUCCESS;
}

void Prime_Numbers(int a, int b)
{
int flag= 0;

	printf("Prime Numbers between %d and %d are :", a,b);
	while (a <= b)
	{
		for (int i=2; i<=9;i++){
			if (a%i == 0)
			{
				flag = 1;
			}

		}
		if (flag == 1)
		{
			flag = 0;
			a++;
		}
		else
		{
			printf("%d ",a);
			a++;
		}
	}
}
