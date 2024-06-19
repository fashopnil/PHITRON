#include <stdio.h>
#include <limits.h>
void bubble(int size, int array[])
{
    int temp = 0, i, j;
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
float median(int size, int array[])
{
    bubble(size, array);
    if (size % 2 != 0)
    {
        return array[size / 2];
    }
    else
    {
        int mid1 = array[size / 2];
        int mid2 = array[(size / 2) - 1];
        return (mid1 + mid2) / 2.0;
    }
}
int main(void)
{
    int size;
    scanf("%d", &size);
    int array[size];
    float result = median(size, array);
    printf("%f", result);

    return 0;
}