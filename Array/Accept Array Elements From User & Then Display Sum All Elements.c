#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Num 9
int main()
{

    int i = 0, Sum = 0, All[Num] = {0};

    for (i = 0; i < Num; i++)
    {
        printf("\n Enter The Number %d =",(i+1));
        scanf("%d",&All[i]);

        Sum = Sum + All[i];
    }
    system("cls");

    printf("\n\n=================================\n");

     printf("\n Sum Of All Elements = %d",Sum);

    printf("\n\n=================================\n");

    getch ();
    return 0;

}
