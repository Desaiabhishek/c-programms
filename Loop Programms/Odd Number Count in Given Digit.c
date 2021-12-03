#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, Odd_Cnt =0, Dig =0;

    printf("\n Enter A Number = ");
    scanf("%d",&No);

    Temp = No;

    while(Temp > 0 )
    {
        Dig = Temp % 10;

        if (Dig%2 == 1 && Dig != 0)
        {
            Odd_Cnt++;
        }
        Temp = Temp/10;

    }
       while(Temp < 0)
    {
        Dig = Temp % 10;

         if (Dig%2 == 1 && Dig != 0)
        {
            Odd_Cnt--;
        }
        Temp = Temp/10;

    }

    printf("\n Odd Digit in %d Are = %d",No,Odd_Cnt);

    getch();
    return 0;
}
