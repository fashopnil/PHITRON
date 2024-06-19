#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n, i,j;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = a[0], sumeven=0, flag=0;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            if (a[i] > max)
            {
                max = a[i];
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            sumeven = a[i] + a[j];
            if (sumeven % 2 == 0)
            {
                if (sumeven > max)
                {
                    flag=1;
                }
            }
        } 
    }
    if (flag == 1)
    {
        printf("%d", sumeven);
    }
    else
    {
        printf("%d", max);
    }
    return 0;
}