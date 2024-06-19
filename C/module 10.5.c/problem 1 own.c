#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    printf("%d %d ",arr[0],arr[1]);
    for(int i=2;i<n;i++)
    {
        arr[i]=(arr[i-1]+arr[i-2]);
        printf("%d ",arr[i]);
    }

    return 0;
}