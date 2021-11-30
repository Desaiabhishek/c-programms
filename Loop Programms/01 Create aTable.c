#include<stdio.h>
#include<conio.h>

int main ()
{
    int Cnt = 0, No = 0;
    printf("\n Enter Number =");
    scanf("%d",&No);

    for (Cnt =1; Cnt <= 10; Cnt++)
    {
        printf("\n %d",No*Cnt);
    }
    getch ();
    return 0;

}
