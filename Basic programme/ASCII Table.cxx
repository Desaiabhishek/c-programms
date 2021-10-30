#include <stdio.h>
#include <conio.h>
int main()
{
	int cnt = 0;
	printf("\n \t ASCII TABLE ");
	while (cnt < 128)
	{
		printf("\n\t %d = %c ", cnt, cnt);
		cnt++;
	}
	return 0;
}