/*
 ============================================================================
 Name        : MultideimensionalArraySum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float array_1 [2][2];
	float array_2 [2][2];
	float sum [2][2];
	char i,j;
	printf("Enter the elements of the 1st matrix \n");
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("Enter a%d%d  ",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%f",&array_1[i][j]);
		}
	}
	printf("Enter the elements of the 2nd matrix \n");
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("Enter b%d%d ",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%f",&array_2[i][j]);
		}
	}

	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			sum[i][j] = array_1[i][j] + array_2 [i][j];
		}

	}

	printf("sum of the Matrix \n");
	for (i=0;i<2;i++){
			for (j=0;j<2;j++){
				printf("%.2f ",sum [i][j]);

			}
			printf("\n");
		}



	return EXIT_SUCCESS;
}
