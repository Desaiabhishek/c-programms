#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int i = 0,j=0, values[5] = {0};

	for (i = 0,j=1; i < 5,j<5; i++,j++)
	{
		printf("\n Enter Element No %d= ", j);
		scanf("%d", &values[i]);
	}

	getch();
	system("cls");

	printf("\n\n Elements in Array are  =>\n\n");

	for (i = 0,j=1; i < 5; i++,j++)
	{
		printf("\n values of %d element = %d ", j, values[i]);
	}

	getch();
	return 0;
}