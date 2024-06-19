#include<stdio.h>
int IsPrime(int a)
{
    int i;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int SumOfDigit(int a)
{
    int sum=0;
    while(a>0)
    {
        sum+=a%10;
        a/=10;
    }
    return sum;

}
int main(void)
{
    int n;
    scanf("%d",&n);
    if(IsPrime(SumOfDigit(n)))
    printf("This is Shopnil's number-%d",SumOfDigit(n));
    else
    {
        printf("This is not Shopnil's number=%d",SumOfDigit);
    }
    
    return 0;
}