#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int highest=arr[0];
    for(i=0;i<n;i++)
    {
        if(highest<arr[i])
        {
            highest=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",highest-arr[i]);
    }
    return 0; 
}