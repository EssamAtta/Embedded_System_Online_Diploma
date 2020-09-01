/*
 ============================================================================
 Name        : EX2_Program.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : calculate average using arrays
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int No_Array ;
	float average = 0;
	float sum = 0;
	int i;
	printf("Enter the Numbers of Data: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &No_Array);

	float array[No_Array];

	for(i= 0 ; i< No_Array ; i++ ){
        printf("%d. Enter number: ",i+1);
        fflush(stdin); fflush(stdout);
        scanf("%f", &array[i]);
        sum = sum  + array[i];

	}

    printf("Average = %.2f", sum/i);

	return EXIT_SUCCESS;
}
