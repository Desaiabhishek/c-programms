#include<stdio.h>
#include<conio.h>
int main()

{
	int no=0,max=0,cnt=0,num=0;
	printf("\n Enter the how many numbers you have =");
	scanf("%d",&num);
	
	  for (cnt=1;cnt<=num;cnt++)
	  {
	  	printf("\n Enter number %d =",cnt);
	  	scanf("%d",&no);
	  	
	  	if(cnt==1 || no>max)
	  	{
	  		max=no;
	  	}
	  }
	  
	  printf("\n Maximum from given %d numbers is =%d",num,max);
	  
	  return 0;
	
}