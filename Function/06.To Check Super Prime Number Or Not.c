#include<stdio.h>
#include<conio.h>

int Check_Prime(int);
int Check_Super_Prime(int);

int main()
{
    int No = 0,Ret = 0;

    printf("\n Enter A Number =");
    scanf("%d",&No);

    Ret = Check_Super_Prime(No);

    if(Ret == 2)
    {
      printf("\n Given Number %d is Super Prime.",No);
    }
    else if(Ret == 1)
    {
       printf("\n Given Number %d is Prime But Not Super Prime.",No);
    }
    else
    {
       printf("\n Given Number %d is Not Prime.",No);
    }

  getch();
  return 0;
}

int Check_Super_Prime(int Num)
{
    int Sum = 0;

    if(Check_Prime(Num))
    {
      Sum = Check_Sum(Num);

      if(Check_Prime(Sum))
      {
          return 2;
      }
      return 1;
    }
return 0;
}

int Check_Sum(int No)
{
    int Sum = 0;

    while(No > 0)
    {
        Sum = Sum + (No%10);
        No /= 10;
    }
    return Sum;
}

int Check_Prime(int Num)
{
    int i = 0;

     for(i = 2; i < Num/2; i++)
    {
        if(Num%i == 0)
        {
            return 0;
        }
    }
    return 1;
}
