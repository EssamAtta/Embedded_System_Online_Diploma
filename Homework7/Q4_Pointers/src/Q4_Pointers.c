/*
 ============================================================================
 Name        : Q4_Pointers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[15] ;
	int *ptr_arr = arr;
	static int i = 0;
	//printf("input 5 numbers of elements in the array :\n ");
	printf("input 5 elements in the array :\n");
	for (; i<5; i++)
	{
		printf("element- %d :  ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",ptr_arr);
		if (i==4)
		{
			break;
		}
		else
		{
			ptr_arr++;
		}
	}
	printf("expected Output\n"
			"\n"
			"The elements of the array in reverse order are\n");
	for (;i>=0;i--)
	{
		printf("element- %d : %d\n", i+1, *ptr_arr);
		if (i==0)
				{
					break;
				}
				else
				{
					ptr_arr--;
				}
	}


	return EXIT_SUCCESS;
}
