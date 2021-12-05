#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Add(int, int);
int Sub(int, int);
int Mult(int, int);
int Div(int, int);
int Mod(int, int);

int main ()
{
    int Choice = 0, No1 = 0, No2 = 0;

    for(;;)
    {
        printf("\n=========== Calculator ===========\n\n");

        printf("\n*************=====*****************\n");
        printf("\n Select Choice =>\n");
        printf("\n\t\t 1. Addition\n\t\t 2. Subtraction\n\t\t 3. Multiplication\n\t\t 4. Division\n\t\t 5. Modulo\n\t\t 6. Exist  ");

        printf("\n*************=====*****************\n");

        printf("\n Enter Your Choice = ");
        scanf("%d",&Choice);

        switch (Choice)
        {
        case 1 :

            printf("\n Enter Two Number For Addition = ");
            scanf("%d%d",&No1,&No2);

            printf("\n Addition of %d + %d = %d",No1,No2,Add(No1,No2));
            getch ();
            system("cls");
            break ;

        case 2 :

               printf("\n Enter Two Number For Substraction = ");
            scanf("%d%d",&No1,&No2);

            printf("\n Substrction of %d - %d = %d",No1,No2,Sub(No1,No2));

            getch ();
            system("cls");
            break ;

        case 3 :

               printf("\n Enter Two Number For Multiplication = ");
            scanf("%d%d",&No1,&No2);

            printf("\n Multiplication of %d * %d = %d",No1,No2,Mult(No1,No2));

            getch ();
            system("cls");
            break ;

        case 4:

            printf("\n Enter Two Number For Division = ");
            scanf("%d%d",&No1,&No2);

            printf("\n Divison of %d / %d = %d",No1,No2,Div(No1,No2));

            getch ();
            system("cls");
            break ;

        case 5:

            printf("\n Enter Two Number For Modulo = ");
            scanf("%d%d",&No1,&No2);

            printf("\n Modulo of %d & %d = %d",No1,No2,Mod(No1,No2));

            getch ();
            system("cls");
            break ;

        case 6:

            goto Down;

        default :

            printf("\n Invalid Choice Please Select a valid Choice");
            getch ();
            system("cls");
            break;
        }
    }
    Down:
        printf("\n\n Thanks For Use This Calculator !!!");

        getch ();
        return 0;
}

int Add(int No1, int No2)
{
    int Sum = 0;

    Sum = No1 + No2;

    return Sum;
}

int Sub(int No1, int No2)
{
    int Mins = 0;

    Mins = No1 - No2;

    return Mins;
}

int Mult(int No1, int No2)
{
    int Multiply = 0;

    Multiply = No1 * No2;

    return Multiply;
}

int Div(int No1, int No2)
{
    int Divd = 0;

    Divd = No1 / No2;

    return Divd;
}

int Mod(int No1, int No2)
{
    int Modulo = 0;

    Modulo = No1 % No2;

    return Modulo;
}
