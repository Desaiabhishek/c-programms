#include<stdio.h>
#include<conio.h>
int main()
{
char ch = '0';
printf("\n Enter the character =");
ch= getche();
if (ch>='A' && ch<='Z')
{
	 printf("\n \t %c is the UPPER CASE",ch); 
}
else 
{
printf("\n \t %c is the LOWER CASE",ch);
}
return 0;
}