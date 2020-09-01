/*
 ============================================================================
 Name        : EX4_CprogramToInsertAnElementinanArray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int no_ele;
	int array_1[20];
	int neu_ele;
	int pos;
	int neu_zahl_ele;
	printf("Enter no. of elements:\n ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&no_ele);
	if (no_ele <= 20){
	for (int i= 0; i<no_ele ; i++){
		fflush(stdin); fflush(stdout);
			scanf("%d",&array_1[i]);
	}
	printf("Enter the element to be inserted : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&neu_ele);
	no_ele ++;

	printf("Enter the location : ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&pos);

		for (neu_zahl_ele = no_ele  ; pos < neu_zahl_ele ; neu_zahl_ele --){
			array_1[neu_zahl_ele-1 ] = array_1[neu_zahl_ele -2];

		}
		array_1[pos-1]= neu_ele;

		for (int i=0; i < no_ele ;i++){
			printf("%d ",array_1[i]);
		}


	}



	return EXIT_SUCCESS;
}
