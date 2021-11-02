#include<stdio.h>
#include<conio.h>
int main()
{
	int No=0;
	printf("\n Enter the number =");
	scanf("%d",&No);
	 if (No%5==0 && No%7==0)
	 {
	 	printf("\n %d is divisible by both 5&7 ",No);	
	 }
	 else if(No%5==0)
	 {
	 	printf("\n %d is divisible by 5,not7 ",No);	
	 }
	else if(No%7==0)
	 {
	 	printf("\n %d is divisible by 7,not5 ",No);	
	 }
	 else
	  {
	 	printf("\n %d is not divisible by both 5&7 ",No);	
	 }
	 
}