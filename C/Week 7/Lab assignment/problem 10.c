#include<stdio.h>
int check7(int a)
{
    while(a>0)
    {
        if (a%10==7)
        {
            return 1;
        }
        else
        {
            a=a/10;
        }
    }
    return 0;
}
void  defining_array(int n,int *ara)
{
    int i;
    int count=0;
    int half=n/2;
    if (n%2==0)
    {
        half=n/2;
    }
    else
    {
        half=(n+1)/2;
    }
    for ( i = 0; i < n; i++)
    {
        if(check7(*ara))
        {
            count++;
        }
        ara++;
    }
    if (count>=half)
    {
        printf("Beautiful\n");
    }
    else
    {
        printf("Ugly\n");
    } 
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
    defining_array(n,array);
    return 0;
}