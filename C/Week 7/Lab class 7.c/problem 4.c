#include<stdio.h>
int S(int a)
{
    if(a==1)
    {
        return 1;
    }
    else
    {
        return S()+;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",S(n));
    return 0;
}