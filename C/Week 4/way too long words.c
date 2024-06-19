#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    char name[100];
    scanf("%s",name);
    int l=strlen(name)-1;
    
    if(l>10)
    {
        
        printf("%c%d%c\n",name[0],l-2,name[l-1]);
    }
    else
    {
        puts(name);
    }
    }


   
   
    return 0;
}