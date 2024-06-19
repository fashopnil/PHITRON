#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,j;
    scanf("%s",s);
    int ok=1;
    for(i=0;i<strlen(s);i++)
    {
        if(!(s[i]=='0' || s[i]=='1'))
        {
            ok=0;
           break;

        }


    }
    if(ok)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
