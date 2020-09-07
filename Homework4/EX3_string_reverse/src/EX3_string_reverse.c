/*
 ============================================================================
 Name        : EX3_string_reverse.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void str_reverse(char*a, int array_size);

int main(void) {
	char x[100];
	int arr_size=0;
	printf("Enter a sentence :");
	fflush(stdin);
	fflush(stdout);
	gets(x);
	arr_size = strlen(x);
	str_reverse(x, arr_size);
	return EXIT_SUCCESS;
}

void str_reverse(char*a, int arr_size)
{
int* ptr ;
ptr = a + arr_size;

if (arr_size >= 0 )
{
	printf("%c",*ptr);
	arr_size--;
	str_reverse(a,arr_size);
	}
}
