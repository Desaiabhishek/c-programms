#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Count 10

int main()
{
    int i = 0, Odd_Cnt = 0, Odd[Count] = {0};

    for (i = 0; i < Count; i++)
    {
        printf("\n Enter Elements Number %d = ",(i+1));
        scanf("%d",&Odd[i]);

    }

    system("cls");

    for ( i = 0; i < Count; i++)
    {
        if ( Odd[i]%2 != 0  )
        {
            Odd_Cnt++;
        }
    }
    printf("\n\n **************************************\n");

        printf("\n Odd Count is %d",Odd_Cnt);

    printf("\n\n **************************************\n");
}
