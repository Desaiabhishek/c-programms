#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, X = 0;

    printf("\n Enter A Number =");
    scanf("%d",&X);

    for(i = 1; i <= X; i++)
    {
        for(j = 1; j <= X; j++)
        {
            if(j == 1 || j == X || i == (X/2)+1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
