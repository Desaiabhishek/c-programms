#include <stdio.h>
#include <conio.h>
int main()
{
	int no1, no2, sum;
	printf("\n enter first no1=");
	scanf("%d", &no1);
	printf("\n enter second no2=");
	scanf("%d", &no2);
	sum = no1 + no2;
	printf("\n\n addition value is%d+%d=%d", no1, no2, sum);
	return 0;
}