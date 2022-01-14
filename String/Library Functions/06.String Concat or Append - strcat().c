#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char FName[20] = "";
    char SName[20] = "";

    printf("\n Enter Your First Name = ");
    gets(FName);

    printf("\n Enter Your Surname =");
    gets(SName);

    getch();

    strcat(FName,SName);

    printf("\n First Name After String Concat = %s",FName);

    printf("\n Surname After String Concat = %s",SName);

    getch();
    return 0;
}
