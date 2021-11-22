#include<stdio.h>
#include<conio.h>

int main ()
{
    char ch = 'A';

    printf("\n Value of Character = %c\n\n",ch);

    printf("\n Enter New Character Value :");

    ch = getch();

    printf("\n\n New Value Of Character = %c \n\n",ch);

    getch ();
    return 0;
}
