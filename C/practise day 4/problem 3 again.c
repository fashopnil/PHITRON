#include<stdio.h>
int main()
{
    int n,i,max;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    max=ara[0];
    for(i=0;i<n;i++)
    {
        if(max>ara[i])
        {
            max=ara[i];
        }
    }
    printf("%d",max);

    return 0;
}
