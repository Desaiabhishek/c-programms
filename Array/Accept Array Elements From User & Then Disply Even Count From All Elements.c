#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Count 10

int main()
{
    int i = 0, Even_Cnt = 0, Eve[Count] = {0};

    for (i = 0; i < Count; i++)
    {
        printf("\n Enter Elements Number %d = ",(i+1));
        scanf("%d",&Eve[i]);

    }

    system("cls");

    for ( i = 0; i < Count; i++)
    {
        if ( Eve[i]%2 == 0 && Eve[i] != 0  )
        {
            Even_Cnt++;
        }
    }
    printf("\n\n **************************************\n");

        printf("\n Even Count is %d",Even_Cnt);

    printf("\n\n **************************************\n");
}
