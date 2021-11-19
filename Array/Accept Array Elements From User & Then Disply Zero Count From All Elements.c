#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Count 10

int main()
{
    int i = 0, Zero_Cnt = 0, Zer[Count] = {0};

    for (i = 0; i < Count; i++)
    {
        printf("\n Enter Elements Number %d = ",(i+1));
        scanf("%d",&Zer[i]);

    }

    system("cls");

    for ( i = 0; i < Count; i++)
    {
        if ( Zer[i] == 0 )
        {
            Zero_Cnt++;
        }
    }
    printf("\n\n **************************************\n");

        printf("\n Zero Count is %d",Zero_Cnt);

    printf("\n\n **************************************\n");
}
