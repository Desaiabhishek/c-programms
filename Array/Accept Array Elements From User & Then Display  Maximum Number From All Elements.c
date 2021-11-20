
#include<stdio.h>
#include<conio.h>

#define Num 10
int main()
{
    int i = 0,Max = 0, Maxi[Num] = {0};

    for (i = 0; i < Num ; i++ )
    {
        printf("\n Enter The Number %d =",(i+1));
        scanf("%d",&Maxi[i]);

        if ( i == 0 || Max < Maxi[i])
        {
            Max = Maxi[i];
        }
    }

    printf("\n\n#####################################\n");

    printf("\n Maximum Value Of Elements = %d",Max);

    printf("\n\n#####################################\n");

    getch();
    return 0;
}
