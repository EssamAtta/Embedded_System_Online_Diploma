#include <stdio.h>
#include <stdlib.h>
struct Scomplex
{
	double real;
	double img;

};
int main()
{
	struct Scomplex x,y,sum;

	printf("for 1st complex number\n");
	printf("Enter the real and imgainary respectively: ");
	fflush(stdin); fflush(stdout);
	scanf("%lf %lf", &x.real,&x.img);


	printf("for 2nd complex number\n");
	printf("Enter the real and imgainary respectively: ");
	fflush(stdin); fflush(stdout);
	scanf("%lf %lf", &y.real, &y.img);


	sum.real = x.real + y.real;
	sum.img = x.img + y.img;

	printf("sum = %.1lf+%.1lfi",sum.real, sum.img);
	return 0;
}
