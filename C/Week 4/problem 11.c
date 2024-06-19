#include <stdio.h>
#include <string.h>
int main()
{
    int a[3][3], i, j, sum = 0;
    int corner1 = 0;
    int corner2 = 0;
    // taking input
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // makint summation of diagonal right to left;
    for (i = 0, j=3-1; j>=0; i++, j--)
    {
        corner2+=a[i][j];
    }

    // making summation of row 1;
    for (i = 0; i < 3; i++)
    {
        sum += a[0][i];
    }
    // making summation of row & col;

    for (i = 0; i < 3; i++)
    {
        int row = 0;
        int col = 0;

        for (j = 0; j < 3; j++)
        {
            row += a[i][j];
            col += a[j][i];
        }
        if (row != sum && col != sum)
        {
            printf("No");
            return 0;
        }
    }

    // making summation of diagonal;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                corner1 += a[i][j];
            }
        }
    }
    if (corner1 != sum && corner2!=sum)
    {
        printf("No");
        return 0;
    }
    printf("%d",corner2);
    printf("Yes");
    return 0;
}
