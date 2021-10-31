#include<stdio.h>
#include<conio.h>
int main()

{
	float per=0.0;
	printf("\n \t enter percentage =");
	scanf("%f",&per);
	
	if (per>70)
	{
		if(per>80)
		{
			if(per>90)
			{
				printf("\n \t A+ Grade");
			}
			else
			{
				printf("\n \t A Grade");
			}
		}
	
			else
			{
				printf("\n \t B Grade");
			}
	}
	
	
	else if(per>35)
	{
		if (per>50)
		{
			if(per>60)
			{
				printf("\n \t C Grade");
			}
			else
			{
			printf("\n \t D Grade ");
			}
		}
		else
		{
			printf("\n \t E Grade ");
		}
	}
	else
	{
		printf("\n \t Fail");
	}
	return 0;	
}