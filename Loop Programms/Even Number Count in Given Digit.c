#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, Even_Cnt =0, Dig;

    printf("\n Enter A Number = ");
    scanf("%d",&No);

    Temp = No;

    while(Temp > 0 )
    {
        Dig = Temp % 10;

        if (Dig%2 == 0 && Dig != 0)
        {
            Even_Cnt++;
        }
        Temp = Temp/10;

    }
       while(Temp < 0)
    {
        Dig = Temp % 10;

         if (Dig%2 == 0 && Dig != 0)
        {
            Even_Cnt--;
        }
        Temp = Temp/10;

    }

    printf("\n Even Digit in %d Are = %d",No,Even_Cnt);

    getch();
    return 0;
}
