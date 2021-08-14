#include<stdio.h>

int main()
{
    float x[2] ;
    printf("Enter first number : ");
    scanf("%f" ,&x[0]);
    printf("Enter second number : ");
    scanf("%f" ,&x[1]);
    printf("%f + %f =  %f\n" ,x[0] ,x[1] ,x[0]+x[1]);
    printf("%f - %f =  %f\n" ,x[0] ,x[1] ,x[0]-x[1]);
    printf("%f x %f =  %f\n" ,x[0] ,x[1] ,x[0]*x[1]);
    printf("%f / %f =  %f\n" ,x[0] ,x[1] ,x[0]/x[1]);
    return 0 ;
}