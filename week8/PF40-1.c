#include <stdio.h>
#include <string.h>

void ReChar(char ch[100])
{ 
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
   
}

int main()
{
    char ch[100];
    printf("Enter string : ");
    gets(ch);
    ReChar(ch);
    printf("New string : %s ",ch);
    return 0;
}