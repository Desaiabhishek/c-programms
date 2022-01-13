
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Name[20] ={'K','A','R','A','N','\0'};
    char City[20] = "Karad-50";
    char Course[20] ="Bcs Comp Sci" ;
    char College[40];

    printf("\n Enter Your College Name =");
    gets(College);

    getch();

    printf("\n Length of College Name = %d",strlen(College));
    printf("\n Length of City = %d",strlen(City));
    printf("\n Length of Name =%d",strlen(Name));
    printf("\n Length of Course =%d",strlen(Course));

    getch();
    return 0;
}
