#include <stdio.h>

int main()
{
    int n;
    // Input Size
    scanf("%d", &n);
    int arr[n][n];
    // Input Matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int k = 0; k < n; k++)
    {

        for (int col = 0; col < n; col++)
        {
            if (col != k)
            {
                printf("%d ", arr[k][col]);
            }
        }

        for (int row = 0; row < n; row++)
        {
            if (row != k)
            {
                printf("%d ", arr[row][k]);
            }
        }
        printf("\n");
    }

    return 0;
}
