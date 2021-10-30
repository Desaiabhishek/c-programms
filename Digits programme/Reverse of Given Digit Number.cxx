#include <stdio.h>
#include <conio.h>
int main()
{
	int no = 0, dig = 0, rev = 0, temp = 0;
	printf("\n Enter a positive number =");
	scanf("%d", &no);

	temp = no;

	while (temp > 0)
	{
		dig = temp % 10;
		rev = (rev * 10) + dig;
		temp = temp / 10;
	}
	printf(" \n\n Riverse of given number %d is=%d", no, rev);

	return 0;
}