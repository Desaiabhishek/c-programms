
#include<stdio.h>
#include<conio.h>

void RevString(char*,char*);

int main()
{
   char Str[30] = "", Revstr[30] = "";

   printf("\n Enter A String =");
   gets(Str);

   RevString(Str,Revstr);

   printf(" \n Main String = %s.",Str);
   printf("\n Reverse String =%s.",Revstr);

   getch();
   return 0;
}

void RevString(char *Str,char *Rstr)
{
    int i = 0, j =0;

    while(Str[i] > '\0')
    {
        i++;
    }
    i = i -1;

    while(i >= 0)
    {
        Rstr[j] =Str[i];
        i--;
        j++;
    }
}
