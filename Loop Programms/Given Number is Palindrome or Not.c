#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, Rev = 0, Dig = 0;

    printf("\n Positive A Number = ");
    scanf("%d",&No);

    Temp = No;

    while(Temp > 0 )
    {
        Dig = Temp % 10;
        Rev = (Rev*10)+Dig;
        Temp = Temp/10;

    }

    if (No == Rev)
    {
      printf(" \n As,given number %d & its reverse %d are equal",No,Rev);
	printf(" \n\n so given number is palindrome");
	}
	else
	{
printf(" \n As,given number %d & its reverse %d are  not equal",No,Rev);
printf(" \n\n so given number is not palindrome");
	}

    getch();
    return 0;
}
