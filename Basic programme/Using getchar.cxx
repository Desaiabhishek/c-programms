#include<stdio.h>
#include<conio.h>
int main()
{

char ch='$';
printf("\n \t value of character-%c.\n\n",ch);
printf("\n \t enter the new character value=");

ch=getch();
printf("\n \t new value of character=%c.",ch);

ch=getchar();

printf("\n \t new value of character=%c.",ch);
ch=getchar();
printf("\n \t new value of character=%c\n\n",ch);
return 0;
}

