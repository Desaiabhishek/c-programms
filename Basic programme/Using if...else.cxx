#include<stdio.h>
#include<conio.h>
int main()
{
	float budget=0.0;
	printf("\n enter your budget =");
	scanf("%f",&budget);
	if(budget>100000)
	{
		printf("\a\n welcome to showroom!!!");
		
	}
	else
	{
		printf("\n minimum budget required 10000/-");
		
	}
	printf("\n thanks for visiting");
	printf("\n visit again later");
	return 0;
	
}