#include<stdio.h>
#include<conio.h>
int main()

{
	int no=0,min=0,cnt=0,num=0;
	printf("\n Enter the how many numbers you have =");
	scanf("%d",&num);
	
	  for (cnt=1;cnt<=num;cnt++)
	  {
	  	printf("\n Enter number %d =",cnt);
	  	scanf("%d",&no);
	  	
	  	if(cnt==1 || no<min)
	  	{
	  		min=no;
	  	}
	  }
	  
	  printf("\n Minimum from given %d numbers is =%d",num,min);
	  
	  return 0;
	
}