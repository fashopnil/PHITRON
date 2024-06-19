#include<stdio.h>
int mysum(int x,int y)
{
    printf("Adding two numbers:\n");
    return x+y;
}
int main()
{
    int a,b;
    a=mysum(5,10);
    printf("%d\n",a);
    b=mysum(10,10);
    printf("%d",b);



    return 0;
}