#include <stdio.h>

int main()
{
    int x ;
    printf("enter : ");
    scanf("%d",&x);
    int count = 2 * x - 1;
    for (int j = 1 ; j <= count ; j++)
    {
        for(int i = 1 ; i <= count ; i++)
        {
            if ((j >= count - i + 1 || j <= i)&&!(j < i && j > count - i + 1))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

    
    return 0;
}