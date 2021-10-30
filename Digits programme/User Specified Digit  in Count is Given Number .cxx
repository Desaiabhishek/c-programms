#include<conio.h>
#include<conio.h>
int main()

{

int no=0,temp=0,dcount=0,dig=0;

	printf("\n Enter Positive Number =");
	scanf("%d",&no);
	printf(" \n Enter to be counted in given number =");
  scanf("%d"  ,&dig);
    
		temp=no;
		while (temp>0)
		{
			
			if((temp%10)==dig)
			{
				dcount++;
			}
				temp=temp/10;
		}
				printf("\n count of %d digit in %d number is =%d",dig,no,dcount);
return 0;
}
