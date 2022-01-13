#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Name[20] = "Abc";
    char CopyName[20] = "Xyz";

    printf("\n Name Before Copy = %s",Name);
    printf("\n Copy Name Before Copy = %s",CopyName);

    getch();

    printf("\n\n Enter Your Name =");
    gets(Name);

    strcpy(CopyName,Name);

    printf("\n Name After Copy = %s",Name);
    printf("\n Copy Name After Copy = %s",CopyName);

    getch();
    return 0;
}
