#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Count 10

int main()
{
    int i = 0, Even_Cnt = 0,Odd_Cnt = 0, Zero_Cnt = 0, Num[Count] = {0};

    for (i = 0; i < Count; i++)
    {
        printf("\n Enter Elements Number %d = ",(i+1));
        scanf("%d",&Num[i]);

    }

    system("cls");

    for ( i = 0; i < Count; i++)
    {
         if ( Num[i]%2 == 0 && Num[i] != 0)
        {
           Even_Cnt++;
        }

        else if ( Num[i]%2 != 0)
        {
            Odd_Cnt++;
        }

     else
     {
         Zero_Cnt++;
     }

    }
    printf("\n\n **************************************\n");

        printf("\n Even Count is %d",Even_Cnt);
         printf("\n Odd Count is %d",Odd_Cnt);
          printf("\n Zero Count is %d",Zero_Cnt);


    printf("\n\n **************************************\n");
}
