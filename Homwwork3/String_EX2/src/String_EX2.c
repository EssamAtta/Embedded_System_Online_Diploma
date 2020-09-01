/*
 ============================================================================
 Name        : String_EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[15];
	int i;
	printf("Enter a String : ");
	fflush(stdin); fflush(stdout);
	scanf("%s",str);
	for (i = 0; ; i++)
	{
		if(str[i] == '\0')
			break;
		else
		{

		}

	}
	printf("Length of String = %d",i);


	return EXIT_SUCCESS;
}
