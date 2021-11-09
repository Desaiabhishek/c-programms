#include <stdio.h>
#include <conio.h>
int main()
{
	int No = 0, Cube = 0;

	printf("\n Enter of Number to get Cube =");
	scanf("%d", &No);
	Cube = No * No * No;

	printf("\n Cube of %d is = %d", No, Cube);

	return 0;
}