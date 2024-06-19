#include<stdio.h>
void solve(int i,int n)
{
    if (i>n)
    {
        return ;
    }
    printf("%d\n",i);
    solve(i+1,n);

}
int main(void)
{
    int i,n;
    scanf("%d%d",&i,&n);
    solve(i,n);

}