#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];
    printf("Enter string : ");
    scanf("%[^\n]",&ch);
    for(int i = 0 ; i < strlen(ch) ; i++)
    {
        if(ch[i]>='a'&& ch[i]<='z')//a=97 , A=65
        {
             ch[i] = ch[i] - ('a'-'A');
        }
        else if (ch[i]>='A'&& ch[i]<='Z')
        {
             ch[i] = ch[i] + ('a'-'A');
        }
    }
    printf("New string : %s ",ch);
    return 0;
}