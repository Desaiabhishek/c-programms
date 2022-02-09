#include<stdio.h>
#include<conio.h>

int main()
{
   int i = 0,j = 0;

   printf("\n\n");

   for(i = 1; i <= 5; i++)
   {
       for(j = 1; j <= 5; j++)
       {
            if(i == 1 || i == 5 || j == (5/2)+1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
       }
       printf("\n");
   }

   printf("\n\n");

   for(i = 1; i <= 5; i++)
   {
       for(j = 1;  j <= 5; j++)
       {
           if( (i == 1 && (i+j == 3 || i+j == 5)) || (i == 2 || i == 3) || (i == 4 &&(i+j == 6 || i+j == 7 || i+j == 8)) || (i == 5 && i+j == 8) )
           {
               printf(" * ");
           }
           else
           {
               printf("   ");
           }
       }
       printf("\n");
   }

   printf("\n\n");

   for(i = 1; i <= 5; i++)
   {
       for(j = 1; j <= 5; j++)
       {
           if( (i == 1 && (j == 1 || j == 5))|| (i == 2 && (j == 1 || j == 5))|| (i == 3 && (j == 1 || j == 5))|| (i == 4 && (j == 1 || j == 5)) || (i == 5 && (j == 2 || j == 3 || j == 4)))
           {
               printf(" * ");

           }
           else
           {
               printf("   ");
           }
       }
       printf("\n");
   }
   getch();
   return 0;
}
