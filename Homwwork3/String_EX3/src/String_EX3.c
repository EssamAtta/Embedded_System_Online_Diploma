/*
 ============================================================================
 Name        : String_EX3.c
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

char str[100];
char str_rev[100];
int str_len;
int i;
int j;

printf("Enter string:");
gets(&str);
for(str_len=0 ; str[str_len]!= NULL; str_len++){

}


for( i = str_len , j= 0 ; i-1 >= 0 ; i--){
        str_rev[j]= str[i-1];
        j++;

}

printf("\nReverse string is: %s", str_rev);

	return 0;
}
