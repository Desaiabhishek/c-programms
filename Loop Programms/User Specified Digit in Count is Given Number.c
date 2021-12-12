#include<stdio.h>
#include<conio.h>

int main()
{
   long long int No = 0;
    int Dcount = 0, Temp = 0, Dig = 0;

    printf("\n Enter Positive Number =");
	scanf("%d",&No);


	printf(" \n Enter to be Counted in Given Number =");
  scanf("%d",&Dig);

		Temp = No;
		while (Temp>0)
		{

			if((Temp%10) == Dig)
			{
				Dcount++;
			}
				Temp=Temp/10;
		}
				printf("\n Count of %d Digit in %d Number is =%d",Dig,No,Dcount);

				getch();
return 0;
}

