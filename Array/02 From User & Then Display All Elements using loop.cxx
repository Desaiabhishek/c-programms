#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int i = 0, values[5] = {0};

	for (i = 0; i < 5; i++)
	{
		printf("\n Enter Element No %d= ", i + 1);
		scanf("%d", &values[i]);
	}

	getch();
	system("cls");

	printf("\n\n Elements in Array are  =>\n\n");

	for (i = 0; i < 5; i++)
	{
		printf("\n values of %d element = %d ", i + 1, values[i]);
	}

	getch();
	return 0;
}