#include <stdio.h>
int main()
{
    int row, col, i, j;
    
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    if (row == col)
    {
        int flag=1;
        for (i = 0; i < row; i++)
        {
            
            for (j = 0; j < col; j++)
            {
                if (col-i==j)
                {
                    continue;
                }
                if (a[i][j] != 0)
                {
                    flag=0;
                }
            }
        }
        if(flag=1)
        {
            printf("Diagonal");
        }
        else
        {
            printf("Not Diagonal");
        }
        
    }
    else
    {
        printf("Not Diagonal");
    }
    

    return 0;
}