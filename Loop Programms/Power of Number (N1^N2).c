#include<stdio.h>
#include<conio.h>
int main()
{

    int N1 = 0, N2 = 0, Temp = 0, Pow = 0;

    printf("\n Enter The Number =>");
    scanf("%d",&N1);

    printf("Enter The Number =>");
    scanf("%d",&N2);

    Temp = N2;

 for (Pow = 1 ; Temp > 0; Temp--)
    {
        Pow = Pow*N1;


    }
    printf("\n Power Of %d Raise to %d = %d",N1,N2,Pow);

    getch();
    return 0;
}
