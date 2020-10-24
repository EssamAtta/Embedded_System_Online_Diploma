/*
 ============================================================================
 Name        : Q3_Pointers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[100] ;
	static int i ;
	char *ptr_str = NULL;
	printf("Input string :");
	fflush(stdin); fflush(stdout);
	scanf("%s",str);
for (i = 0; i<100; i++)
{
	if (str[i] == '\0')
		{
		ptr_str = &str[i-1];
		break;

		}
}
printf(" Revesrse of the string is :");
for (;i>0; i--  )
{
	printf("%c", *ptr_str);
	ptr_str--;
}





	return EXIT_SUCCESS;
}
