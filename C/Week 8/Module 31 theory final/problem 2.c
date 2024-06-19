#include<stdio.h>
int main()
{
    int n,zero=0,one=1,i;
    scanf("%d",&n);
    int sum=0;
    printf("%d ",zero);
    printf("%d ",one);
    for ( i = 2; i < n; i++)
    {
        sum=zero+one;
        printf("%d ",sum);
        zero=one;
        one=sum;
    }
}