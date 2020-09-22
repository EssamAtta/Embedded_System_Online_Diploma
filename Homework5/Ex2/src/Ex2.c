#include <stdio.h>
#include <stdlib.h>
struct Ssum_FT_INCH
{
	int ft;
	double inch;
};
int main()
{
	struct Ssum_FT_INCH x,y,sum;
	printf("Enter information for 1st distance:\n");
	printf("Enter the feet: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x.ft);
	printf("Enter the inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%lf", &x.inch);

	printf("Enter information for 2nd distance:\n");
	printf("Enter the feet: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &y.ft);
	printf("Enter the inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%lf", &y.inch);

	sum.ft = x.ft + y.ft;
	sum.inch = x.inch + y.inch;

	if (sum.inch >= 12)
	{
		sum.inch = sum.inch - 12;
		sum.ft++;

	}

	printf("Sum of distances = %d'%.1lf\"",sum.ft,sum.inch);

	return 0;
}
