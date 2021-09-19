#include <stdio.h>

int factorial(int x)
{
    int fact = 1;
    for (int c = 1; c <= x; c++)
    {
        fact = fact * c;
    }
    return fact;
}

int main()
{
    int n, fact = 1;

    printf("Enter a number to calculate it's factorial : ");
    scanf("%d", &n);

    printf("Factorial of %d = %d\n", n , factorial(n) );
    return 0;
}