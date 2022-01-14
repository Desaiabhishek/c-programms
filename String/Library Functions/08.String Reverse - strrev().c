#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Name[20] = "";

    printf("\n Enter Your Name = ");
    gets(Name);

        strrev(Name);

    printf("\n After Reverse String = %s",Name);

    getch();
    return 0;
}
