#include<stdio.h>
void fun(int a)
{
    int sum=0;
    if(a>0)
    {
        fun(a-1);
        sum+=a;
        printf("%d",sum);
    }
    
}
int main(void)
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}