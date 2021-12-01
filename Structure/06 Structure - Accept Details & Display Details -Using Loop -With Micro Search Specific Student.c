#include<stdio.h>
#include<conio.h>
#include<Stdlib.h>

#define Cnt 5

struct Stud
{
    int Roll_No;
    char Name[30];
    long long int Mob_No;
    float Per;
};

int main ()
{
    struct Stud Std[Cnt];
    int i = 0, SRNo = 0;

    printf("\n\t\t Enter Student Details =>\n");

    for( i = 0; i < Cnt; i++)
    {
        printf("\n\n Enter Details of Student For Roll No %d => \n",i+1);
        Std[Cnt].Roll_No = i +1;

        fflush(stdin);
        printf("\n Enter Student Name = ");
        scanf("%[^\n]",&Std[i].Name);

        printf("\n Enter Student Mobile No = ");
        scanf("%lld",&Std[i].Mob_No);

        printf("\n Enter Student Percentage = ");
        scanf("%f",&Std[i].Per);

     }
     getch();
     system("cls");

     for(;;)
     {
         printf("\n Enter a Roll No To Search Information ");
         printf("\n Note : Enter a Zero or -Ve Value To Stop Searching = ");
         scanf("%d",&SRNo);

         if(SRNo <= 0)
         {
             break ;
         }

         for(i = 0; i < Cnt; i++)
         {
             if ((i+1) == SRNo)
             {
                 printf("\n\n %d Student Details of Roll No %d Are =>",SRNo,SRNo);

                 printf("\n Student Name = %d ",Std[i].Name);
                 printf("\n Student Mobile No = %lld ",Std[i].Mob_No);
                 printf("\n Student Percentage = %d ",Std[i].Per);

                 break ;
             }
         }
             if (i == Cnt)
             {
                 printf("\n Given Roll No Student is Not Found !!!");
             }
                 printf("\n Enter Any Key to Search Student New Roll No =");

                 getch();
                 system("cls");
     }

printf("\n Thanks For Use This ");

             getch();
             return 0;
}
