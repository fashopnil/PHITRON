#include<stdio.h>
#include<string.h>
int main()
{
   char str[100];
   scanf("%s",str);
   int l=strlen(str),i=0;
   for(i=0;i<l/2;i++)
   {
    if(str[i]==str[l-i-1])
    {
        continue;
    }
    else
    {
        printf("No");
        return 0;
    }
   }
   printf("Yes");
    return 0;
}
