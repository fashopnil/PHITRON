#include<stdio.h>
int solve(int ar[],int n)
{
    if (n==0)
    {
        return 0;
    }
    int s=solve(ar+1,n-1);
    return s+ar[0];
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int s=solve(ar,n);
    printf("%d",s);
    

    return 0;
}