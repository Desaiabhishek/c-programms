
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main ()
{
    struct stud
    {
        int Roll_No;
        char  Name[40];
        long long int Mob_No;
        float Per;
    };

    struct stud Std1;

    Std1.Roll_No = 12;
    strcpy(Std1.Name,"Kunal Nikam");
    Std1.Mob_No = 9423347525;
    Std1.Per = 71.5582;

    printf("\n\n Student Details =>");

    printf("\n  Student Roll No = %d",Std1.Roll_No);
    printf("\n Student Name = %s",Std1.Name);
    printf("\n  Student Mobile No = %d",Std1.Mob_No);
    printf("\n  Student Percentage = %0.2f",Std1.Per);

    getch();
    return 0;

}
