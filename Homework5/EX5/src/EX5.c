#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

int main()
{
	double area ;
	int r;
	printf("Enter the radius : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&r);
	area = pi * r *r;
	printf("Area  = %.2lf",area);
	return 0;
}
