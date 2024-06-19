#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    scanf("%s",str1);
    int l=strlen(str1);
    for(int i=0;i<l/2;i++)
    {
        if(str1[i]==str1[l-i-1])
        {
            continue;
        }
        else
        {
            printf("Not palindrome");
            return 0;
        }

    }
    
    printf("Palindrome");
    return 0;
}