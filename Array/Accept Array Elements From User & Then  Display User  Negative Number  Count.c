
#include<stdio.h>
#include<conio.h>

#define Count 11

int main ()
{
    int i = 0, Negative_Count = 0, Neg[Count] = {0};

    for( i = 0; i < Count; i++)
    {
        printf("\n Enter Number %d = ",(i+1));
        scanf("%d",&Neg[i]);

        if ( Neg[i] < 0)
        {
            Negative_Count++;
        }
    }
    printf("\n\n*******************************\n");

    printf("\n Positive Count is = %d",Negative_Count);

    printf("\n\n*******************************\n");

    getch();
    return 0;


}
