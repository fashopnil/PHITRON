#include <stdio.h>
int main()
{
    int i, j, R, r, c;
    int row = 8, col = 8;
    int chess[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            chess[i][j] = 0;
        }
    }
    
    scanf("%d", &R);
    while(R--)
    {
        scanf("%d %d", &r, &c);
         chess[r][c] = 1;

    }
    for (i = 0; i < row; i++)
    {
        int count = 0;
        for (j = 0; j < col; j++)
        {
            if (chess[i][j] = 1)
                count++;
        }
        if (count > 1)
            for (j = 0; j < col; j++)
            {
                chess[i][j] = 0;
            }
    }
    printf("---------------\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (chess[i][j] != 0)
                printf("%d %d", i, j);
        }
    }
    return 0;
}