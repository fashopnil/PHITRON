#include<stdio.h>
#include<string.h>
int main()
{
    char cap[100];
    fgets(cap,sizeof(cap),stdin);
    
    if(cap[0]!='a-z')
    {
        for(int i=0;cap[i]!='\0';i++)
        {
            printf("%c",cap[i]);
        }
    }
    
}