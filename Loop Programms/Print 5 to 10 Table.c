#include<stdio.h>
#include<conio.h>

int main ()
{
    int N1 = 0, N2 = 0;

    printf("\n \t Table 5 to 10=>\n\n");
    printf("\n\t*******************======*********************\n");

    for (N1 = 1; N1 <= 10; N1++)
    {

    for(N2= 5; N2 <= 10; N2++)
    {
        printf("\t %d",N1*N2);
    }
    printf("\n");
    }

     printf("\n\t*******************======*********************\n");
    getch ();
    return 0;

}
