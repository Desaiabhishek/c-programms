#include <stdio.h>
#include <conio.h>
int main()
{
	int no = 0, dig =0,rev=0,temp= 0;
	printf("\n Enter a positive number =");
	scanf("%d", &no);
     
     temp=no;
     
	while (temp> 0)
	{
		dig= temp% 10;
		rev=(rev*10)+dig;
		temp=temp/10;
	}
	if(no == rev)
	{
	printf(" \n As,given number %d & its reverse %d are equal",no,rev);
	printf(" \n so given number is palindrome");
	}
	else
	{
printf(" \n As,given number %d & its reverse %d are  not equal",no,rev);
printf(" \n so given number is not palindrome");
	}
	return 0;
}