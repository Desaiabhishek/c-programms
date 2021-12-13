#include<stdio.h>
#include<conio.h>

int  fun(int);

int main ()

{
    int No1 = 0,Fact = 0;

    printf("\n Enter A Number =");
    scanf("%d",&No1);

    Fact = fun(No1);

    printf("\n Given %d Factorial is = %d ",No1,Fact);

    getch();
    return 0;
}

int fun(int No1)
{
    int Fact = 1;

    while( No1 > 0)
    {
     Fact = Fact * No1;
     No1--;

    }
    return Fact;
}


