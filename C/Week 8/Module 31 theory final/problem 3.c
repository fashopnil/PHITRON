#include<stdio.h>
int passbyvalue(int a)
{ 
    a=5;
    return a;
}
int passbyreference(int *a)
{
    *a=5;
    return a;
}
int main()
{
    int n=10,m=10;
    passbyvalue(n);
    passbyreference(&m);
    printf("%d %d",n,m);
    return 0;
}