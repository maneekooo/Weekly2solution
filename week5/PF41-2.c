#include <stdio.h>

int maximum(int a , int b)
{
    if(a>b)
      return a;
    else
      return b;
}

int main()
{
    int n, max, num[100];
    printf("enter number of term : ");
    scanf("%d",&n);
     for(int i=0;i<n;i++)
     {
         printf("num.%d ",i+1);
         scanf("%d",&num[i]);
     }
     for(int i=0;i<n;i++)
     {
        max = maximum(num[i] ,num[i-1]);
     }
     printf("%d is max",max);
    return 0;
}