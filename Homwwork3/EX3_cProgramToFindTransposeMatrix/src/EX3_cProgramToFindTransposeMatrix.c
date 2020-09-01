/*
 ============================================================================
 Name        : EX3_cProgramToFindTransposeMatrix.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int row;
	int col;
	int i,j;
	printf("enter the no of Rows of Matrix : ");
	fflush(stdin); fflush(stdout);
    scanf("%d", &row);
    printf("enter the no of colums of Matrix : ");
	fflush(stdin); fflush(stdout);
    scanf("%d", &col);
    printf("Matrix dimension is %d x %d\n", row, col);
    int Mat_A[row][col];
    int Mat_transpose[col][row];
    printf("Enter the elements of the Matrix:\n ");
    for(i = 0 ;i<row; i++){
        for (j= 0 ; j<col; j++){
            printf("Enter element a%d%d:", i+1,j+1);
            fflush(stdin); fflush(stdout);
            scanf("%d", &Mat_A[i][j]);
        }
    }
    printf("Entered matrix is:\n");
    for(i = 0 ;i<row; i++){
        for (j= 0 ; j<col; j++){
            printf("%d ",Mat_A[i][j]);

        }
        printf("\n");
    }
     printf("Matrix transpose is:\n");
    for(i = 0 ;i<col; i++){
        for (j= 0 ; j<row; j++){
            Mat_transpose[i][j] = Mat_A[j][i];
            printf("%d ",Mat_transpose[i][j]);
        }
        printf("\n");
    }



	return 0;
}
