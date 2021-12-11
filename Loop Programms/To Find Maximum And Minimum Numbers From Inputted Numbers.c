
#include<stdio.h>
#include<conio.h>
int main()

{
	int No=0, Max=0, Min=0, Cnt=0, Num=0;
	printf("\n Enter the how many numbers you have =");
	scanf("%d",&Num);

	  for (Cnt = 1; Cnt <= Num; Cnt++)
	  {
	  	printf("\n Enter number %d =",Cnt);
	  	scanf("%d",&No);

	  	if(Cnt == 1 || No > Max)
	  	{
	  		Max = No;
	  	}


	  	if(Cnt == 1 || No < Min)
	  	{
	  		Min = No;
	  	}
	  }

	  printf("\n Maximum from given %d numbers is =%d",Num,Max);
      printf("\n Minimum from given %d numbers is =%d",Num,Min);

      getch();
	  return 0;

}


