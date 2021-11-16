#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int values[5] =  {0};
	
	printf("\n Enter Element No 1 =");
	scanf("%d",&values[0]);
	
	printf("\n Enter Element No 2 =");
	scanf("%d",&values[1]);
	
	printf("\n Enter Element No 3 =");
	scanf("%d",&values[2]);
	
	printf("\n Enter Element No 4 =");
	scanf("%d",&values[3]);
	
	printf("\n Enter Element No 5 =");
	scanf("%d",&values[4]);
	
	getch();
	system("cls");
	
	printf("\n \n New Values =>\n\n");
	
	printf("\n values of 1 element = %d ",values[0]);
	printf("\n values of 2 element = %d ",values[1]);
	printf("\n values of 3 element = %d ",values[2]);
	printf("\n values of 4 element = %d ",values[3]);
	printf("\n values of 5element = %d ",values[4]);
	
	getch();
	return 0;
}