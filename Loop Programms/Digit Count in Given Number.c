#include<stdio.h>
#include<conio.h>

int main ()
{
      signed int No1 = 0;
       long long int No2 = 0, Cnt = 0;

    printf("\n Enter A Positive Number =");
    scanf("%d",&No1);

    No2 = No1;
   for (Cnt = 0;  No2 > 0; Cnt++)
    {
        No2= No2/10;
    }
    printf("\n Digit in Are %d = %d ",No1,Cnt);

    getch ();
    return 0;
}
