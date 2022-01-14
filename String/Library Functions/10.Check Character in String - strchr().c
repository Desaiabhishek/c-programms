#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Name[20] = "";
    char Ch = '\0';

    char*cPtr = NULL;

    printf("\n Enter Your Name = ");
    gets(Name);

    printf("\n Enter A Character To Be Checked in String =");
    Ch = getche();

   cPtr = strchr(Name, Ch);

    if(cPtr == NULL)
    {
        printf("\n Character Didnt't Found in String.");
    }
    else
    {
         printf("\n Given Character Present in String.");

    }
    getch();
    return 0;
}
