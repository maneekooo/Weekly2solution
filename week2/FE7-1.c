#include <stdio.h>

int main()
{
    double x;
    double y;
    double z;
    printf("Enter three numbers : ");
    scanf("%lf %lf %lf", &x, &y, &z);
    if (x > y && x > z)
    {
        printf("%lf", x);
    }
    else if (y > z && y > x)
    {
        printf("%lf", y);
    }
    else
    {
        printf("%lf", z);
    }
    return 0;
}