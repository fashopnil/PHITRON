#include<stdio.h>
int g=10;
void add(int n,int m)
{
    printf("add-%d\n",g);
    scanf("%d %d",&n,&m);
    int a=n+m;
    printf("%d\n",a);
    g=g+a;


}
int main(void)
{
    printf("Main-%d",g);
    int a,b;

    add(a,b);
    
}