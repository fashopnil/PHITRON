#include <stdio.h>
int swap(int *a, int *b)
{
    int temp=*a;
    *a = *b;
    *b = temp;
}
int main(void)
{
    int n, i,j;
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int temp = 0;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
            }
        }
        
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    
}