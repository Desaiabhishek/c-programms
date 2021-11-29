#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Stud
{
    int Roll_No;
    char Name[40];
    char City[30];
    long long int Mob_No;
    float Per;
};
int main()
{
  struct Stud Std[5];
  int i = 0;
  for(i = 0; i < 5; i++)
  {
      printf("\n \t Enter Student Details =>");

  printf("\n\n Enter Student No %d Details =>\n",i+1);

  printf("\n Enter Student Roll No = ");
  scanf("%d",&Std[i].Roll_No);

  fflush(stdin);
  printf("\n Enter Student Name = ");
  gets(Std[i].Name);

  fflush(stdin);
  printf("\n Enter Student City = ");
  gets(Std[i].City);

  printf("\n Enter Student Mobile No = ");
  scanf("%d",&Std[i].Mob_No);

  printf("\n Enter Student Percentage = ");
  scanf("%f",&Std[i].Per);

  }

  system("cls");

  printf("\n\n============ Student Details ============== ");

  for(i = 0; i < 5; i++)
  {

  printf("\n\n %d Student Details Are =>\n",i+1);

  printf("\n Roll No = %d",Std[i].Roll_No);
  printf("\n Name = %s",Std[i].Name);
  printf("\n Mobile No = %d",Std[i].Mob_No);
  printf("\n Percentage = %0.2f",Std[i].Per);

  }

  getch ();
  return 0;
}
