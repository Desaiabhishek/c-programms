#include<stdio.h>
#include<conio.h>

int main()
{
  int No = 0, Digit = 0, Sum = 0,fact = 0,Temp = 0;

  printf("\n Enter A Number =");
  scanf("%d",&No);

  Temp = No;

      while(Temp > 0)
      {
          Digit = Temp%10;

          fact = 1;

          while(Digit != 0)
          {
              fact *= Digit;
              Digit--;
          }

            Sum += fact;
            Temp/= 10;
      }

      if(No == Sum)
      {
          printf("\n Given Number %d is Strong Number.",No);
      }
      else
      {
           printf("\n Given Number %d is Not Strong Number.",No);
      }

  getch();
  return 0;
}
