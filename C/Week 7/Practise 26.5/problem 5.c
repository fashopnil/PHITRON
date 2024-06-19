#include<stdio.h>
int SumOfZero(int a,int ara[])
{
    int i,sum=0;
    for ( i = 0; i < a; i++)
    {
        if(ara[i]%10==0)
        sum+=ara[i];
    }
    return sum;
    

}
int main()
{
    int n,i;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    
    printf("%d",SumOfZero(n,array));
    return 0;
}