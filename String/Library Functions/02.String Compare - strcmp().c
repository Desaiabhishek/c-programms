#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Name1[20] = "";
    char Name2[20] = "";

    int Cnt = 0;

    printf("\n Enter Your First String =");
    gets(Name1);

    printf("\n Enter Your Second String =");
    gets(Name2);

    Cnt = strcmp(Name1,Name2);

    if(Cnt == 0)
    {
        printf("\n Both String Equal.");
    }
    else if(Cnt > 0)
    {
        printf("\n first String is Alphabetically Greater Than Second String.");
    }
    else
    {
         printf("\n first String is Alphabetically Less Than Second String.");
    }

    getch();
    return 0;
}
