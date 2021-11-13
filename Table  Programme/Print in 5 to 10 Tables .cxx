#include <stdio.h>
#include <conio.h>

int main()
{
	int R = 0, C = 0;

	printf("\n table 5 to 10 = \n\n ");
printf("\n \t***********************===***********************\n");
	for (R= 1; R<= 10; R++)
	{
		for (C= 5; C<= 10; C++)
		{
			printf("\t %d ", R*C);
		}

		printf("\n");
	}
	printf("\n \t**********************===**********************");
	return 0;
}
