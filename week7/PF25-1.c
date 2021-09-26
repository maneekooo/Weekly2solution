#include <stdio.h>
void show(char *s, int x)
{
    for(int i = 1 ; i <= x ; i++)
    {
        printf("%s",s);
    }
}

int main()
{
    int x ;
    printf("enter : ");
    scanf("%d",&x);
    
    for(int i = 1 ; i <= x ; i++)
    {
        show("  ",x-i);
        show("* ",(2*i)-1);
        show("  ",x-i);
        printf("\n");
    }
    return 0;
}