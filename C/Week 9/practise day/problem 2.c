#include<stdio.h>
int solve(int n,int ara[])
{
    if (n==0)
    {
        return 0;
    }
    int s = ara[n-1] % 10; 
    int sum=s+solve((n-1),ara);
    return sum;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int ara[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&ara[i]);
    }
    int s=solve(n,ara);
    printf("%d",s);
    return 0;
}