#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Cub = 0;

    printf("\n Enter A Number =");
    scanf("%d",&No);

    Cub = No*No*No;

    printf("\n Cube Root of %d is = %d",No,Cub);

    getch();
    return 0;
}
