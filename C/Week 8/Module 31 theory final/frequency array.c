#include <stdio.h>
#include <limits.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int array[n];
    // taking input;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    // finding max;
    int max = INT_MIN;
    for (i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    // freq array setting to 0;
    int freq[max + 1];
    for (i = 0; i <= max; i++)
    {
        freq[i] = 0;
    }
    //
    for (i = 0; i < n; i++)
    {
        freq[array[i]]++;
    }
    for (i = 0; i <= max; i++)
    {
        // if (freq[i]!=0)
        // {
        //     printf("index no- %d Freq array no-%d ",i, freq[i]);
        // }
        // if (freq[i]!=0)
        // {
        //     printf("%d ",i);   
        // }
        if(freq!=0)
        {
            for ( j = 1; j <= freq[i]; j++)
            {
                printf("%d",i);
            }
            
        }
          
    }


    return 0;
}