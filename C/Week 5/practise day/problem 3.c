#include<stdio.h>
int main()
{
    int n,i,sum;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=ara[i]%10;
    }
    printf("Sum= %d",sum);
    

    return 0;
}