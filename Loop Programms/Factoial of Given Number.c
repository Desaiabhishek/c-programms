#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, Fact = 1;

    printf("\n Enter A Number = ");
    scanf("%d",&No);

    Temp = No;

    while(Temp > 0)
    {
        Fact = Fact * Temp;

        Temp--;

    }
    printf("\n Factorial of %d is = %d",No,Fact);

    getch();
    return 0;
}
