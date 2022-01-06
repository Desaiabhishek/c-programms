#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0,No = 0;

    printf("\n Enter A Number =");
    scanf("%d",&No);

    for(i = 1; i < No/2; i++)
    {
        if(No%2 == 0)
        {
            break;
        }
    }
    if(i == No/2)
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
