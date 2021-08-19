#include <stdio.h>

int main()
{
    double x;
    double y;
    double z;
    printf("Enter three numbers : ");
    scanf("%lf %lf %lf", &x, &y, &z);
    printf("%lf", x * (x > y && x > z) + y * (y > x && y > z) + z * (z > x && z > y));
    return 0;
}