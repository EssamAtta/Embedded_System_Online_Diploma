/*
 ============================================================================
 Name        : String_EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

char str[100];
char suche;
char str_ln;
char freq=0;
int i;

printf("Enter a string ");
gets(str);
//printf("%s", str);
printf("Enter a charachter to find frequency : ");
fflush(stdin); fflush(stdout);
scanf("%c", &suche);
for ( i =0 ; str[i] != NULL ; i++){}
    str_ln = i;

while (i>= 0 )
{
    if (str[i] ==  suche ){
        freq ++ ;

        }
    else;
    i--;

}
if (freq > 0)
    printf("frequency of %c is  %d", suche, freq);
else
    printf("no match ");



	return 0;
}
