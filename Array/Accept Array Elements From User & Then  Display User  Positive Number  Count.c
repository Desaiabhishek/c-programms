
#include<stdio.h>
#include<conio.h>

#define Count 11

int main ()
{
    int i = 0, Positive_Count = 0, Pos[Count] = {0};

    for( i = 0; i < Count; i++)
    {
        printf("\n Enter Number %d = ",(i+1));
        scanf("%d",&Pos[i]);

        if ( Pos[i] > 0)
        {
            Positive_Count++;
        }
    }
    printf("\n\n*******************************\n");

    printf("\n Positive Count is = %d",Positive_Count);

    printf("\n\n*******************************\n");

    getch();
    return 0;


}
