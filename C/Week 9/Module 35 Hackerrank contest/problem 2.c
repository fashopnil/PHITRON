#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int a[n];
    int b[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    int temp = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    int temp2 = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (b[j] < b[j + 1])
            {
                temp2 = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp2;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ",a[i]-b[i]);
    }
   
    return 0;
}