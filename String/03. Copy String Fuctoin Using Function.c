#include<stdio.h>
#include<conio.h>

void CpyString(char*,char*);

int main()
{
    char Str[30] = "",Cstr[30] = "";

    printf("\n Enter A String =");
    gets(Str);

    CpyString(Str,Cstr);

    printf("\n Main String = %s.",Str);
    printf("\n Copy String = %s.",Cstr);

    getch();
    return 0;
}

void CpyString(char *Str,char *Cstr)
{
    int i = 0;

    while(Str[i] > 0)
    {
        Cstr[i] = Str[i];
        i++;
    }
}
