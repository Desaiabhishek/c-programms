#include<stdio.h>
#include<conio.h>
int main()
{
	int no1=0,no2=0,cnt=0;
	printf("\n Enter a positive number =");
	scanf("%d",&no1);
	no2=no1;
	while(no2>0)
	{
	no2= no2/10;
	
		cnt++;
		}
		printf(" \n\n Digit in %d are =%d",no1,cnt);	
	
}