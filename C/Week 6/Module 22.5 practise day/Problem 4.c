#include <stdio.h>
#include <limits.h>
int test(int m,int arr[])
{
    int  i,j;
    int max = INT_MIN;
    for (i = 0; i < m; i++)
    {
        if (arr[i] > INT_MIN)
        {
            max = arr[i];
        }
    }
    int freq[max + 1];
    for (i = 0; i <= max; i++)
    {
        freq[i] = 0;
    }
    for (i = 0; i < m; i++)
    {
        freq[arr[i]]++;
    }
    for (i = 0; i <= max; i++)
    {
        if(freq[i]!=0)
        {
            for(j=0;j<freq[i];j++)
            {
                printf("%d ",i);
            }
        }
    }
       return 0;
}
int main()
{
    int n,i;
    scanf("%d", &n);
    int ara[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    test(n,ara);
    return 0;
}