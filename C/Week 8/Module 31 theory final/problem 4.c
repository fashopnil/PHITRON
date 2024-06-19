#include<stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
    char s[100],i,j;
    scanf("%s",s);
    int len=strlen(s);
    for ( i = 0; i < len; i++)
    {
        s[i]=s[i]-97;
    }
    int max=INT_MIN;
    for ( i = 0;i< len; i++)
    {
        if (s[i]>max)
        {
            max=s[i];
        }
    }
    int freq[max+1];
    for ( i = 0; i <= max; i++)
    {
        freq[i]=0;
    }
    for ( i = 0; i < len ; i++)
    {
        freq[s[i]]++;
    }
    for ( i = 0; i <= max; i++)
    {
        if (freq[i]!=0)
        {
            for ( j = 1; j <= freq[i]; j++)
            {
                printf("%c",(i+97));
            }
        }  
    }
    return 0;
}
