#include<stdio.h>
#include<string.h>
int main()
{
    char cap[100];
    int i;
    fgets(cap,sizeof(cap),stdin);
    for(i=0;cap[i]!='\0';i++)
    {
        if(cap[i]>='a' && cap[i]<='z')
        cap[i]-=32;
    }
    puts(cap);
    return 0;
}
