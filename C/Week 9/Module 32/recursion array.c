#include<stdio.h>
int solve(int ar[],int i,int n)
{
    if (i==n)
    {
        return 0;
    }   
    int s=solve(ar,i+1,n);
    return s+ar[i];
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
    int s=solve(ar,0,n);
    printf("%d",s);
    
    return 0;
}