#include <stdio.h>
#include <conio.h>
int main()

{
	int cnt = 1, no = 0, sum=0;
	printf("\n enter 10 integers numbers for addition =");

	while (cnt <= 10)
	{
		printf("\n enter the number %d =",cnt);
		scanf("%d", &no);

		sum = sum + no;
		cnt++;
	}
	printf("\n Sum of given addition is %d ",sum);
	
	return 0;
}