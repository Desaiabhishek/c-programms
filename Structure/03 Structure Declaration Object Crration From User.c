#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Stud
{
    int Roll_No;
    char Name[40];
    long long int Mob_No;
    float Per;
};
int main()
{
  struct Stud Std1,Std2;

  printf("\n\n Enter 1st Student Details =>\n");

  printf("\n Enter Student Roll No = ");
  scanf("%d",&Std1.Roll_No);

  fflush(stdin);
  printf("\n Enter Student Name = ");
  scanf("%(^\n)",&Std1.Name);

  printf("\n Enter Student Mobile No = ");
  scanf("%d",&Std1.Mob_No);

  printf("\n Enter Student Percentage = ");
  scanf("%f",&Std1.Per);


  printf("\n\n Enter 2nd Student Details =>\n");

  printf("\n Enter Student Roll No = ");
  scanf("%d",&Std2.Roll_No);

  fflush(stdin);
  printf("\n Enter Student Name = ");
  gets(Std2.Name);

  printf("\n Enter Student Mobile No = ");
  scanf("%d",&Std2.Mob_No);

  printf("\n Enter Student Percentage = ");
  scanf("%f",&Std2.Per);

  system("cls");

  printf("\n\n============ Student Details ============== ");

  printf("\n\n 1st Student Details=>\n");

  printf("\n Roll No = %d",Std1.Roll_No);
  printf("\n Name = %s",Std1.Name);
  printf("\n Mobile No = %d",Std1.Mob_No);
  printf("\n Percentage = %0.2f",Std1.Per);


  printf("\n\n 2nd Student Details=>\n");

  printf("\n Roll No = %d",Std2.Roll_No);
  printf("\n Name = %s",Std2.Name);
  printf("\n Mobile No = %d",Std2.Mob_No);
  printf("\n Percentage = %0.2f",Std2.Per);

  getch ();
  return 0;
}
