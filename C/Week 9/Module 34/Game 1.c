#include <stdio.h>
#include <stdbool.h>
int iswin(int a[][4], int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i][1] == a[i][2] && a[i][2] == a[i][3] && a[i][1] != -1)
        {
            return a[i][1];
        }
    }
    for (int j = 1; j <= n; j++)
    {
        if (a[1][j] == a[2][j] && a[2][j] == a[3][j] && a[1][j] != -1)
        {
            return a[1][j];
        }
    }
    if (a[1][1] == a[2][2] && a[2][2] == a[3][3] && a[1][1] != -1)
    {
        return a[1][1];
    }
    if (a[1][3] == a[2][2] && a[2][2] == a[3][1] && a[1][3] != -1)
    {
        return a[1][3];
    }
    return -1;
}
void printcell(int a[][4], int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (a[i][j] == -1)
                printf(" ");
            if (a[i][j] == 1)
                printf("X");
            if (a[i][j] == 2)
                printf("O");
            if (j < n)
            {
                printf("\t|\t");
            }
        }
        printf("\n");
        if (i < n)
            printf("_______________________________________");
        printf("\n\n");
    }
}
int main()
{
    int n = 3, i, j;
    int a[4][4];
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            a[i][j] = -1;
        }
    }
    bool player1 = true;
    bool player2 = false;
    while (true)
    {
        printcell(a, n);
        if (player1)
        {
            int r, c;
        Flag:
            printf("Player 1 Turn(x),Enter row column: ");
            scanf("%d%d", &r, &c);
            if (a[r][c] != -1)
            {
                printf("Cell already in use!\n");
                goto Flag;
            }

            a[r][c] = 1;
            player1 = false;
            player2 = true;
        }
        else
        {
            int r, c;
        Flag2:
            printf("Player 2 Turn(O),Enter row column: ");
            scanf("%d%d", &r, &c);
            if (a[r][c] != -1)
            {
                printf("Cell already in use!\n");
                goto Flag2;
            }
            a[r][c] = 2;
            player2 = false;
            player1 = true;
        }
        if (iswin(a, n) == 1)
        {
            printf("Player 1 won!\n");
            printcell(a,n);
            break;
        }
        else if (iswin(a,n)==2)
        {
            printf("Player 2 won!\n");
            printcell(a,n);
            break;
        }  
    }
    return 0;
}