#include<stdio.h>
#include<conio.h>
int main()

{
	int no=0,sum=0,cnt=0,num=0;
	printf("\n Enter the how many numbers you have =");
	scanf("%d",&num);
	
	  for (cnt=1;cnt<=num;cnt++)
	  {
	  	printf("\n Enter number %d =",cnt);
	  	scanf("%d",&no);
	  	
	  	sum=sum+no;
	  }
	  
	  printf("\n sum of given %d numbers is =%d",num,sum);
	  
	  return 0;
	
}