#include <stdio.h>
#include <conio.h>
int main()

{
	int cnt = 1, no = 0;
	printf("\n enter a table  number =");
scanf("%d",&no);

	while (cnt <= 10)
	{
		printf("\n %d ",cnt* no);
		cnt++;
	}
	
	
	return 0;
}