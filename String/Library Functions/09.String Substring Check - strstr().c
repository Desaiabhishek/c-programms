#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Name1[20] = "";
    char Name2[20] = "";

    char*cPtr = NULL;

    printf("\n Enter Your String 1 = ");
    gets(Name1);

    printf("\n Enter Your String 2 =");
    gets(Name2);

   cPtr = strstr(Name1,Name2);

    if(cPtr == NULL)
    {
        printf("\n Substring Didnt't Found.");
    }
    else
    {
         printf("\n Given Substring Present in Main String.");

    }
    getch();
    return 0;
}
