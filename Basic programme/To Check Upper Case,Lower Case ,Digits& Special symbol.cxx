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
else if (ch>='a' && ch<='z')
{
printf("\n \t %c is the LOWER CASE",ch);
}
else if(ch>='0' && ch<='9')
{
printf("\n \t %c is the DIGIT ",ch);

}
else 
printf("\n \t %c is the Special Symbol",ch);


return 0;
}