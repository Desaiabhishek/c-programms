#include<stdio.h>
#include<conio.h>

int main ()
{
    int N1 = 0, N2 = 0, Sp = 0, Ep = 0;

    printf("\n Enter The Start Number =>");
    scanf("%d",&Sp);


    printf("\n Enter The End Number =>");
    scanf("%d",&Ep);

    for (N1 = 1; N1 <= 10; N1++)
    {
       if(Sp < Ep)
       {

    for(N2= Sp; N2 <= Ep; N2++)
    {
        printf("\t %d",N1*N2);
    }
       }
       else
       {
           for (N2 = Sp; N2>= Ep; N2--)
           {
               printf("\t %d",N1*N2);
           }
       }
    printf("\n");
    }

    getch ();
    return 0;

}
