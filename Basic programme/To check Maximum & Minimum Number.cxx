#include<stdio.h>
#include<conio.h>
int main()
{
int num1=0,num2=0;
printf("\n enter the number=");
scanf("%d%d",&num1,&num2);
if (num1>num2)
{
printf("\n %d is an maximum number \n %d is munimum number",num1,num2);
}
else
{
printf("\n %d is an maximum number. \n %d is minimum number",num2,num1);
}
return 0;
}