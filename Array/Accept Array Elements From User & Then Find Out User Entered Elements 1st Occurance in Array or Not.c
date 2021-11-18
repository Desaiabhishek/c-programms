
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 9


int main()

{
    int i = 0, No = 0,Value[Size] = {0};
    int Flag = -1;

    for (i = 0; i < Size ; i++ )
    {
        printf("\n Enter Value Number %d = " ,i + 1);
        scanf("%d",&Value[i]);
    }
        system("cls");

        printf("\n\n Enter Element Whose 1st Occurrence You Want to Check in Array = ");
        scanf("%d",&No);

        for(i = 0 ; i < Size ; i++)
        {
            if(Value[i] == No)
            {
                Flag = i +1;

            }
        }

        printf("\n\n ****************************************\n");

        if (Flag > 0)
        {
            printf("\n 1st Occurrence of %d is Array at Location = %d",No,Flag);

        }
            else
            {
                printf("\n No Such Elements Present in Array");

            }
            printf("\n\n****************************************\n");

            getch();
            return 0;
}




