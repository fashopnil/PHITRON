#include <stdio.h>
int fact(int x);
int main()
{
    int n,r;
    scanf("%d%d", &n,&r);
    int perm;
    int comb;
    perm = fact(n)/fact(n-r);
    comb=fact(n)/(fact(n-r)*fact(r));
    printf("nPr %d\n",perm);
    printf("nCr %d",comb);
    return 0;
}
int fact(int x)
{
    int res=1, i;
    for (i = 1; i <=x; i++)
    {
        res*= i;
    }
    return res;
}