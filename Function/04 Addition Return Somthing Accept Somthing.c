
#include<stdio.h>
#include<conio.h>

  int  Add(int,int);

int main ()
{
 int No1 = 0,No2 = 0,Res = 0;
    printf("\n Enter Two Number =");
    scanf("%d%d",&No1,&No2);
    Res = Add(No1,No2);
    printf("\n Addition of %d + %d = %d",No1,No2,Res);
    getch ();
    return 0;
}
int Add( int No1,int No2 )
{
    int Sum = 0;

    Sum = No1 + No2;

    return Sum ;

}
