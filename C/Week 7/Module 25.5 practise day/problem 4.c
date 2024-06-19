#include<stdio.h>
void firstrecursion(int a)
{
    if(a<=1)
    {
        printf("%d",a);
        return 0;
    }
    else
    {
        printf("%d",a);
       return firstrecursion(a-1);
    }
    

}
int main()
{
    int n;
    scanf("%d",&n);
    firstrecursion(n);
    return 0;
}