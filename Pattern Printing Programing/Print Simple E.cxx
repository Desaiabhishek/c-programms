#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,x=0;

    printf("\n enter row and column size =");
    scanf("%d",&x);
   

    printf("\n Pattern Printing =>\n\n");

    for(i=1; i<=x; i++)
    {
        for(j=1; j<=x; j++)
        {
            if(i == 1 || i==x || j==1 || i==(x/2)+1)
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
}