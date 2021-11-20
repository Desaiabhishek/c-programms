#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main ()
{
    int i = 0,j = 0,Value[5] = {};

   for ( i = 0, j = 1; i < 5, j <= 5; i++ ,j++)
   {
    printf("\n Enter %d Elements = ",j);
    scanf("%d",&Value[i]);
   }


    system("cls");

    for( i = 0, j = 1; i < 5, j <= 5; i++, j++)
    {
    printf("\n Values Of %d Elements = %d",j,Value[i]);
    }

    getch ();
    return 0;
}
