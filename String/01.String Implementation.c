
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Name[20] ={'K','A','R','A','N'};
    char City[20] = "Karad";
    char Course[20] ="Bcs Comp Sci" ;
    char College[40];

    printf("\n Enter Your College Name =");
    gets(College);

    getch();

    printf("\n Given College Name = %s",College);
    printf("\n Given City = %s",City);

    puts("\n Given Name =");
    puts(Name);

    puts("\n Given Course =");
    puts(Course);

    getch();
    return 0;
}
