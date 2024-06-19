#include<stdio.h>
int lcm(int m,int n)
{
    return (m*n)/gcd(m,n);
}
int gcd(int m,int n)
{
    int i;
    for(i=m;i>=1;i--)
    {
        if(m%i==0 && n%i==0)
        {
            return i;
        }
    }
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int ans= gcd(a,b);
    int ans2=lcm(a,b);
    printf("%d\n",ans);
    printf("%d",ans2);

    return 0;
}