#include <stdio.h>
#include <conio.h>
int main()
{
	int N1 = 1, N2 = 0, N3 = 0, cnt = 0;
	printf("\n Enter Count For Fibonacci Series =");
	scanf("%d",&cnt);

	printf("\n Fibonacci Series is =>\n\n");

	while (cnt > 0)
	{
		printf("%d\t", N3);

		N3 = N1 + N2;

		N1 = N2;
		N2 = N3;
		cnt--;
	}
	return 0;
}