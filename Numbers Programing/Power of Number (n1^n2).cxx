#include<stdio.h>
#include<conio.h>
int main()

{
	int n1=0,n2=0,temp=0,pow=1;
	
	printf("\n enter the number =");
	scanf("%d",&n1);
	
	printf("\n enter the number =");
	scanf("%d",&n2);
	
	temp=n2
	;
	while(temp>0)
	{
		pow=pow*n1;
		temp--;
	}
	printf("\n Power of %d Raise to %d= %d ",n1,n2,pow);
}