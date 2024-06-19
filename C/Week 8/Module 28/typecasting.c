#include<stdio.h>
int main()
{
    int a=7;
    int *pi;
    double *pd;
    double b=9.56;
    pd=(double*)pi;
   
    printf("%d %lf ",a,b);
    printf("%p %p",pi,pd);
    return 0;
}