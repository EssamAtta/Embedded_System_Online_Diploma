/*
 ============================================================================
 Name        : Q2_Pointers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char arr_alpha[27];
	char* ptr_alpha  = NULL;

	printf("Expectd Output :\ the Alphabets are :\n "
			"----------------------------------\n ");
	ptr_alpha = arr_alpha;

	for (char k = 'A'; k<='Z'; k++ ){
		*ptr_alpha = k;
		ptr_alpha++;



	}

	for (char i = 0; i<27; i++ ){
		printf("%c ",arr_alpha[i]);
	}

	return EXIT_SUCCESS;
}
