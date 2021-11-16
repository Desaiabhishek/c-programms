#include<stdio.h>
#include<conio.h>
int main()
{
	int values[5] =  {23,34,0,55,45};
	
	printf("\n values of 1st element = %d ",values[0]);
	printf("\n values of 2nd element = %d ",values[1]);
	printf("\n values of 3rd element = %d ",values[2]);
	printf("\n values of 4th element = %d ",values[3]);
	printf("\n values of 5th element = %d ",values[4]);
	
	getch();
	
	values[2]=15;
	values[4]=101;
	values[0]=5;
	
	printf("\n \n New Values =>\n\n");
	
	printf("\n values of 1 element = %d ",values[0]);
	printf("\n values of 2 element = %d ",values[1]);
	printf("\n values of 3 element = %d ",values[2]);
	printf("\n values of 4 element = %d ",values[3]);
	printf("\n values of 5element = %d ",values[4]);
	
	getch();
	return 0;
}