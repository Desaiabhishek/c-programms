#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 5

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
  struct Stud Std[Size];
  int i = 0;

     printf("\n \t Enter Student Details =>");

  for(i = 0; i < Size; i++)
  {
  printf("\n\n Enter Student Details For Roll Number %d =>\n",i+1);
  Std[i].Roll_No = i + 1;

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

  for(i = 0; i < Size; i++)
  {
  printf("\n Roll No = %d",Std[i].Roll_No = i + 1);
  printf("\n Name = %s",Std[i].Name);
  printf("\n Mobile No = %d",Std[i].Mob_No);
  printf("\n Percentage = %0.2f\n",Std[i].Per);

  }

  getch ();
  return 0;
}
