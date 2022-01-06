#include<stdio.h>
#include<conio.h>

int Check_Prime(int);

int main()
{
    int No = 0;

    printf("\n Enter A Number =");
    scanf("%d",&No);

    if(Check_Prime(No))
    {
      printf("\n Given Number %d is Prime.",No);
    }
    else
    {
       printf("\n Given Number %d is Not Prime.",No);
    }

  getch();
  return 0;
}

int Check_Prime(int Num)
{
    int i = 0;
     for(i = 1; i < Num/2; i++)
    {
        if(Num%2 == 0)
        {
            return 0;
        }
    }
    return 1;
}
