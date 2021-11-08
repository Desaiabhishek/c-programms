#include<stdio.h>
#include<conio.h>
int main()

{
	int no=0,temp=0,fact=1;
	
	printf("\n enter the number =");
	scanf("%d",&no);
	
	temp=no;
	while(temp>0)
	{
		fact=fact*temp;
		temp--;
	}
	printf("\n factorial of %d is= %d ",no,fact);
}