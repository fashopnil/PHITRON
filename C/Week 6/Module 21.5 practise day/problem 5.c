#include<stdio.h>
int operator(char c,int a,int b);
int main()
{
    char c;
    int a,b;
    scanf("%c",&c);
    scanf("%d%d",&a, &b);
    int result=operator(c,a,b);
    printf("%d",result);

    return 0;
}
int operator(char c,int a,int b)

{
    int sum=0;
    if(c=='+')
    {
        sum=a+b;
    }
    else if(c=='-')
    {
        sum=a-b;
    }
    else if(c=='*')
    {
        sum=a*b;
    }
    else if(c=='/')
    {
        sum=a/b;
    }
    return sum;
}