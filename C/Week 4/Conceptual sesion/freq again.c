#include <stdio.h>
#include <limits.h>
int main()
{
    int a[8] = {5, 4, 5, 7, 2, 1, 4, 2};
    int max = INT_MIN;
    int i, j;
    for (i = 0; i < 8; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    int freq[max + 1];
    for (i = 0; i <= max; i++)
    {
        freq[i] = 0;
    }
    for (i = 0; i < 8; i++)
    {
        freq[a[i]]++;
    }
    for (i = 0; i <= max; i++)
    {
        // if(freq[i]!=0)
        // printf("%d %d\n",i,freq[i]);
        // if(freq[i]!=0)
        // printf("%d ",i);
        if (freq[i] != 0)
            for (j = 0; j <= freq[i]; j++)
                printf("%d", i);
    }
    return 0;
}