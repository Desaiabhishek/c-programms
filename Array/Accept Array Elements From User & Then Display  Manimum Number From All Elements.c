
#include<stdio.h>
#include<conio.h>

#define Num 11
int main()
{
    int i = 0, Min = 0, Mini[Num] = {0};

    for (i = 0; i < Num; i++)
    {
        printf("\n Enter The Number %d =",(i+1));
        scanf("%d",&Mini[i]);

        if( i == 0 || Min > Mini[i] )
        {
            Min = Mini[i];
        }
    }

    printf("\n\n##################################\n");

    printf("\n Minimum Value Of Elements = %d",Min);

    printf("\n\n##################################\n");
}
