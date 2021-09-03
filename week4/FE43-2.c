#include <stdio.h>

int main()
{
     int x;
     printf("Enter number : ");
     scanf("%d", &x);
     if (x > 2)
     {
          for (int i = 2; i < x; i++)
          {
               if (x % i == 0)
               {
                    printf("Not Prime Number");
               }
               else
               {
                    printf("Prime Number");
               }
          }
     }
     else if (x == 2)
     {
          printf("Prime Number");
     }
     else
     {
          printf("Not Prime Number");
     }

     return 0;
}