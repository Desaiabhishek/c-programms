#include <stdio.h>
#include <conio.h>

int main()

{
	int No = 0, Dig = 0, DSum = 0, Temp = 0;

	printf("\n Enter a Positive Number =");
	scanf("%d", &No);

	Temp = No;

	while (Temp > 0)
	{
		Dig = Temp % 10;
		DSum = DSum + Dig;
		Temp = Temp / 10;
	}

	printf(" \n Sum Of Digit %d is = %d", No, DSum);

	getch();
	return 0;
}
