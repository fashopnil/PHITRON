#include<stdio.h>
int add(int n,int numb[])
{
    int sum=0;
    int i;
    for(i=0;i<n;i++)
    {
        sum+=numb[i];
    }
   
    return sum;
}
int main()
{
    int ara[]= {13,74,174,234,4,3,6,345,54};
    int sum=add(9,ara);
    printf("%d",sum);
    return 0;
}