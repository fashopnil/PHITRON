#include<stdio.h>
#include<string.h>
int main()
{
    int i; 
    char s[100];
    scanf("%s",s);
    int count=0;
    for ( i = 0; s[i] != '\0'; i++)
    {
        // printf("%c->%d ",s[i],s[i]-'a'+1);
        count+=s[i]-'a'+1;
    }
    printf("%d",count);
    
    return 0;
}