#include <stdio.h>
#include <limits.h>
int Median(int size, int formedianarray[])
{
    int i, j, max = INT_MIN;
    for (i = 0; i < size; i++)
    {
        if (max < formedianarray[i])
        {
            max = formedianarray[i];
        }
    }
    int freq[max + 1];
    for (i = 0; i <= max; i++)
    {
        freq[i] = 0;
    }
    for (i = 0; i <= size; i++)
    {
        freq[formedianarray[i]]++;
    }
    int sorted_array[size];
    for (i = 0; i <= size; i++)
    {
        sorted_array[i]=0;
    }
    for (i = 1; i <= max; i++)
    {
        if (freq[i] != 0)
            for (j = 0; j < freq[i]; j++)
            {
                sorted_array[j]=i;
            }
    }
    for (i = 0; i <= size; i++)
    {
        printf("%d",sorted_array[i]);
    }
}
int main()
{
    int i, sizeOfArray;
    scanf("%d", &sizeOfArray);
    int array[sizeOfArray];
    for (i = 0; i < sizeOfArray; i++)
    {
        scanf("%d", &array[i]);
    }
    Median(sizeOfArray, array);

    return 0;
}