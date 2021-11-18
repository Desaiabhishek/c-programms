#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Cnt 10
int main ()
{
    int i = 0, Max1 = 0, Max2 = 0, Num[Cnt] = {0};

    for (i = 0; i < Cnt ; i++)
    {
        printf("\n Enter Number %d = ",(i+1));
        scanf("%d",&Num[i]);

        if ( i == 0 || Max1 < Num[i])
        {
            Max1 = Num[i];
        }
    }
    for (i = 0; i < Cnt; i++)
    {
        if ((i == 0 || Max2 < Num[i]) && (Num[i] != Max1))
        {
            Max2 = Num[i];
        }
    }
    system("cls");
    getch();

     printf("\n\n############################################\n");

     printf("\n 1st Maximum Number is %d",Max1);
     printf("\n 2nd Maximum Number is %d",Max2);

     printf("\n\n############################################\n");
    getch ();

    return 0;
}
