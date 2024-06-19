#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int *p,*q,*r;
    p=&a;q=&b;r=&c;
    
    int sum=*p+*q+*r;
    printf("%d",sum);
    return 0;
}