#include <stdio.h>
#include <conio.h>
int main()
{
	char sp = '0', ep = '0';
	printf("\n Enter a range to print character =");

	printf("\n \t Start Print =");
	sp = getche();

	printf("\n \t End Point =");
	ep = getche();

	if (sp < ep)
	{
		while (sp <= ep)
		{
			printf("\n %c ", sp);

			sp++;
		}
	}
	else
	{
		while (sp >= ep)
		{
			printf("\n %c ", sp);

			sp--;
		}
	}
	return 0;
}