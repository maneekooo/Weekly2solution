#include <stdio.h>

int isPrime(int);

int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d", &x);

    if (isPrime(x) == 1 || x == 1)
        printf("Not Prime Number");

    else
        printf("Prime Number");

    return 0;
}

int isPrime(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
            return 1;

        else
            return 0;
    }
}