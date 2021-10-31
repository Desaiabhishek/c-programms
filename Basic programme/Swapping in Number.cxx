#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[])
{
	int No1 = 0, No2 = 0, temp = 0;
	printf("\n\t Enter 2 Numbers =\n");
	scanf("%d%d", &No1, &No2);

	printf("\n\n Number Before Swap => ");

	printf("\n 1st Number =%d", No1);

	printf("\n 2nd Number =%d", No2);

	temp = No1;
	No1 = No2;
	No2 = temp;

	printf("\n\n Number After Swap => ");

	printf("\n 1st Number =%d", No1);

	printf("\n 2nd Number =%d", No2);

	return 0;
}