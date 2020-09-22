/*
 ============================================================================
 Name        : EX5_programToSearchanelementinArray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(void) {

	int array_1[100];
	char size_array_ch=0;
	int size_aray;
	char suche_1;
	int suche=0;
	bool flag_break = false;
	int counter=1;
	printf("enter size of Array: ");
	fflush(stdin); fflush(stdout);
	size_aray = atoi (gets(&size_array_ch));
	printf("\n");
	if (size_aray > 100 ){
		printf("Range from 0 to 100 ");
	}
	else{
		for (int i= 0; i < size_aray; i++){
			fflush(stdin); fflush(stdout);
			scanf("%d",&array_1[i]);
			fflush(stdin); fflush(stdout);
			printf("\n");
		}
		fflush(stdin); fflush(stdout);
		printf("Enter the element to be searched :\n");
		suche = atoi (gets(&suche_1));

		for (int i = 0; i< size_aray ; i++){
			if (array_1[i] == suche){
				flag_break = true;
				break;
			}


			else{
				counter ++;

			}

		}
		if (flag_break ){
			printf("\nNumber found at location = %d", counter);
		}
		else
			printf("\nno match found");

	}

	return 0;
}
