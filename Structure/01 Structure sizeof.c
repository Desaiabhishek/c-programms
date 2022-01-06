#include<stdio.h>
#include<conio.h>

int main ()
{
    struct stud
    {
        int Roll_No;
        char Name[50];
        char City[40];
        long long int Mob_No;
        int Phy;
        int Maths;
    };
    int Num = 0;

    struct stud Std;

    printf("\n Size Of Integer = %d",sizeof(int));
    printf("\n Size Of Integer Variable = %d",sizeof(Num));
    printf("\n Size Of Student Structure = %d",sizeof(struct stud));
    printf("\n Size Of Student Structure Object = %d",sizeof(Std));

    getch();
    return 0;
}
