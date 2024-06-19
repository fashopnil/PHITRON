#include<stdio.h>
int main()
{
    int i,j,n,m;
    scanf("%d%d",&n,&m);
    int matrix[n][m],transpose[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            transpose[j][i]=matrix[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}