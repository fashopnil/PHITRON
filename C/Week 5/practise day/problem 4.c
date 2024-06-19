#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,j;
    scanf("%s",s);
    int size=strlen(s);
    printf("%c",s[0]);
    for(i=1;i<size;i++)
    {
        if(s[i]!=s[i-1])
        printf("%c",s[i]);
    }
    
    return 0;
}
