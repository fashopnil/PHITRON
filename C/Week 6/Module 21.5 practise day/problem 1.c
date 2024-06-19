#include<stdio.h>
int plusminus(int n)
{
    int i;
    if(n>0)
    {
        for(i=n;i>=-n;i--)
        {
            printf("%d ",i);
        }
    }
    else
    {
        for(i=n;i<=n*(-1);i++)
        {
            printf("%d ",i);
        }    
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    plusminus(n);
    return 0;
}