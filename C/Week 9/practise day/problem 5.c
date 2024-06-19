#include<stdio.h>
int solve(n)
{
    if (n==0)
    {
        return 0;
    }
    int s=n+solve(n-1);
    return s;
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int s=solve(n);
    printf("%d",s);

    return 0;
}