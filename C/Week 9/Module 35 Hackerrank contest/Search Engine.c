#include<stdio.h>
int main()
{
    int t,i,j;
    scanf("%d",&t);
    for ( i = 1; i <= t; i++)
    {
        int n;
        scanf("%d",&n);
        int array[n];
        for ( j = 1; j <=n; j++)
        {
            scanf("%d",&array[j]);
        }
        int s;
        scanf("%d",&s);
        int found=0;
        for ( j = 1; j <=n; j++)
        {
            if(s==array[j])
            {
                printf("Case %d: %d\n",i,j);
                found =1;
                break;
            }
        }
        if (found==0)
        {
            printf("Case %d: Not Found\n",i);
        }
    }
    return 0;
}