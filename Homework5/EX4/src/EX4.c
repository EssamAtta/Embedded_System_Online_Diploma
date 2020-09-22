#include <stdio.h>
#include <stdlib.h>
struct Sstudent
{
	char m_Name[50];
	int m_Roll;
	double m_mark;

};

struct Sstudent Read_date (char text[]);
void print_struct (char text[], struct Sstudent x);

int main()
{
	struct Sstudent X[10];
	for (int i = 0; i<10 ; i++)
		X[i] = Read_date ("Enter informations of students");

	for (int i = 0; i<10 ; i++)
		print_struct ("Dispalying Information", X[i]);
	return 0;
}
/* *********************************** */
struct Sstudent Read_date (char text[])
{
	struct Sstudent a;
	printf("%s\n\n",text);
	printf("Enter the Name: ");
	fflush(stdin); fflush(stdout);
	scanf("%s", &a.m_Name);
	printf("Enter the Rollnumber: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &a.m_Roll);
	printf("Enter the mark: ");
	fflush(stdin); fflush(stdout);
	scanf("%lf", &a.m_mark);

	return a;

};
/* *********************************** */

/* *********************************** */
void print_struct (char text[], struct Sstudent x)
{
	printf("\n\n%s\nname:%s\nRoll:%d\nMarks: %lf",text, x.m_Name, x.m_Roll, x.m_mark);
}
/* *********************************** */
