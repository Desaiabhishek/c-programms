#include <stdio.h>
#include <conio.h>
int main()
{
	int i = 0, j = 0, No1 = 0, No2 = 0;
	printf("\n Enter Row Size =");
	scanf("%d",&No1);

	printf("\n Enter Column Size =");
	scanf("%d", &No2);
	
	printf("\n Pattern Printing =>\n\n");

	for (i = 1; i <= No1; i++)
	{
		for (j = 1; j <= No2; j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
	return 0;
}