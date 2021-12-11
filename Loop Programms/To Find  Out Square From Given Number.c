#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Sqr = 0;

    printf("\n Enter A Number =");
    scanf("%d",&No);

    Sqr = No*No;

    printf("\n Square Root of %d is = %d",No,Sqr);

    getch();
    return 0;
}
