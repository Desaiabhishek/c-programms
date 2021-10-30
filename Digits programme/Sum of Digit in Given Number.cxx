#include <stdio.h>
#include <conio.h>
int main()
{
	int no1 = 0,no2=0,dig=0,dsum= 0;
	printf("\n Enter a positive number =");
	scanf("%d", &no1);
	no2=no1;

	while (no2> 0)
	{
		dig=  no2%10;
		dsum= dsum+dig;
		no2= no2/ 10;

		
	}
	printf(" \n\n Sum of Digit in %d is =%d", no1,dsum);

	return 0;
}