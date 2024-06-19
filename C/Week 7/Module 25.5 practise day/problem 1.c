#include<stdio.h>
int count(int a,int array[],int k)
{
    int i,sum=0;
    for(i=0;i<a;i++)
    {
        if(array[i]!=k)
        {
            sum++;
        }
    }
    return sum;
}
int main()
{
    int n,i,k;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    scanf("%d",&k);
    int result=count(n,array,k);
    printf("%d",result);
}