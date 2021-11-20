
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Num 11
int main()
{
    int i = 0,Max = 0, Min = 0, Ele[Num] = {0};

    for (i = 0; i < Num; i++)
    {
        printf("\n Enter The Number %d =",(i+1));
        scanf("%d",&Ele[i]);

        if( i == 0 || Max < Ele[i] )
        {
            Max = Ele[i];
        }

        if( i == 0 || Min > Ele[i])
        {
            Min = Ele[i];
        }
    }

    system("cls");

    printf("\n\n##################################\n");

     printf("\n Maximum Value Of Elements = %d",Max);
    printf("\n Minimum Value Of Elements = %d",Min);

    printf("\n\n##################################\n");
}
