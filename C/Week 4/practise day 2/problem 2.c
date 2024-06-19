#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char s[100];
    scanf("%d",s);
    int flag=0;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='0' && s[i]=='1')
        {
            flag=1;
        }
        else
        {   flag=0;
            printf("No");
            break;
        }
    }
    if(flag==1)
    {
        printf("Yes");
    }  
    return 0;
}