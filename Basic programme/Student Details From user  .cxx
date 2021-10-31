
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int Roll_no = 0;
	char name[15] = "";
	float per = 0.0;
	char course[12] = "";
	char city[15] = "";

	printf("\n student details");

	printf("\n\n enter the Roll_no=");
	scanf("%d", &Roll_no);

	fflush(stdin);
	printf("\n enter the name=");
	gets(name);

	printf("\n enter the percentage=");
	scanf("%f", &per);

	fflush(stdin);
	printf("\n enter the course= ");
	gets(course);

	fflush(stdin);
	printf("\n Enter the City=");
	gets(city);

	system("cls");

	printf("===============*****=================");

	printf("\n\t\tgiven student details \n");

	printf("\n   Roll_no = %d", Roll_no);
	printf("\n   Name = %s", name);
	printf("\n   Percentage = %.2f", per);
	printf("\n   Course = % s", course);
	printf("\n   City = %s\n", city);

	printf("\n===============*****===============");

	return 0;
}