#include<stdio.h>
int main()
{
    int row=3,col=3,i,j,k;
    int a[row][col],b[col][row],ans[row][col];
    printf("First Matrix Input:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Second Matrix Input:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            ans[i][j]=0;
            for(k=0;k<row;k++)
            {
                ans[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("Final output\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",ans[i][j]);
        }
        printf("\n");
    }


    return 0;
}