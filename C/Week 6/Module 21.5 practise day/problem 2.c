#include<stdio.h>
int pattern(int x);
int main()
{
    int n;
    scanf("%d",&n);
    pattern(n);
    return 0;
}
int pattern(int x)
{
    int i,j;
    for(i=x;i>=1;i--)
    {
        
        for(j=0;j<x-i;j++)
        {
            printf(" ");
        }
        int k=0;
        while(k!=(2*i-1))
        {
            printf("*");
            k++;
        }
        printf("\n");
    }

}