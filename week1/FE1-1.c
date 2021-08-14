#include<stdio.h>

int main()
{
    float x , y;
    printf("Enter first number : ");
    scanf("%f" ,&x);
    printf("Enter second number : ");
    scanf("%f" ,&y);
    printf("%f + %f =  %f\n" ,x ,y ,x+y);
    printf("%f - %f =  %f\n" ,x ,y ,x-y);
    printf("%f x %f =  %f\n" ,x ,y ,x*y);
    printf("%f / %f =  %f" ,x ,y ,x/y);
    return 0 ;
}