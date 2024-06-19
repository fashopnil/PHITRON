#include<stdio.h>
int smallest(int k,int arr[])
{
    int number=arr[k-1];
    return number;
}
int largest(int a,int arr[],int k)
{
    int number=arr[a-k];
    return number;
}

void sorting(int a,int arr[],int b)
{
    int i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<a-1;j++)
        if(arr[j]>arr[j+1])
        {
            int temp= arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    // for(i=0;i<a;i++)
    // {
    //     printf("%d \n",arr[i]);
    // }

}
int main(void)
{
    int n,k,i;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);

    }
    scanf("%d",&k);
    sorting(n,array,k);
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("Largets %dth element,%d, Smallest %dth element, %d",k,largest(n,array,k),k,smallest(k,array));


    return 0;
}