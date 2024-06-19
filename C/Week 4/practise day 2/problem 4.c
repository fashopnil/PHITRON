#include <stdio.h>
int main()
{
    int row, col, i, j, k;
    scanf("%d %d", &row, &col);
    int a[row][col], b[row][col], result[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            result[i][j]=0;
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            for (k = 0; k < row; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (j = 0; j < row; j++)
    {
        for (k = 0; k < col; k++)
        {
            printf("%d ", result[j][k]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}