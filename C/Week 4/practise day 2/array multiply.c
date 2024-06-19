#include <stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col],b[row][col],c[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        
        for(int j=0;j<col;j++)
        {
            c[i][j]=0;
            for(int k=0;k<row;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
           
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}