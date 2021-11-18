#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Num 10
int main()
{
    int i = 0, Ele = 0, Ele_cnt = 0,Array[Num] = {0};

    for ( i = 0; i < Num ; i++)
    {
    printf("\n Enter Number %d = ",(i+1));
    scanf("%d",&Array[i]);
    }
    system("cls");

    printf("\n Enter The Element Whose Count You Want =");
    scanf("%d",&Ele);


    for ( i = 0; i < Num ; i++)
    {
       if(Array[i] == Ele)
       {
           Ele_cnt++;

       }
    printf("\n\n############################################\n");

    printf("\n Given Elements Count in Array = %d ",Ele_cnt);

    printf("\n\n#############################################\n");

    getch();
    return 0;
}
