
#include<stdio.h>
#include<conio.h>

  void Add(int,int);

int main ()
{
 int No1 = 1,No2 = 0,Res = 0;
    printf("\n Enter Two Number =");
    scanf("%d%d",&No1,&No2);

    Add(No1,No2);
    getch ();
    return 0;
}
void Add( int No1,int No2 )
{
    int Sum = 0;

    Sum = No1 + No2;
      printf("\n Addition of %d + %d = %d",No1,No2,Sum);
    return ;

}
