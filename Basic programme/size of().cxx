#include<stdio.h>
#include<conio.h>
int main()
{
	int no= 55;
	char my='F';
	double dnum=47562.22;
	
	printf("\n \t size 1= %d",sizeof(no));
	
	printf("\n \t size 2= %d",sizeof(dnum));
	
	printf("\n \t size 3= %d",sizeof(my));
	
	printf("\n \t size 4= %d",sizeof(long int));
	
	printf("\n \t size 5= %d",sizeof(float));
	
	printf("\n \t size 6= %d",sizeof(char));
	
	return 0;
	
}