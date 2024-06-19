#include<stdio.h>
int even(int input);
int main()
{
    int n;
    scanf("%d",&n);
    even(n);
    return 0;
}
int even(int input)
{
    int i;
    for(i=2;i<=input;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}