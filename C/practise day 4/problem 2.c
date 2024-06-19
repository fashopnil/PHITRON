#include<stdio.h>
int main()
{
    int n,i,j,q;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    printf("%d %d",ara[0],ara[1]);
    scanf("%d",&q);
    int index,value=0;
    for(i=0;i<q;i++)
    {
        scanf("%d%d",&index,&value);
        ara[index]=ara[index]+value;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",ara[i]);
    }



    return 0;
}
