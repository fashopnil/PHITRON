#include<stdio.h>
int main()
{
    int r,i,j;
    scanf("%d",&r);
    int x=3,y=3;
    int a[x+1][y+1];

    for(i=0;i<=x;i++)
    {
        for(j=0;j<=y;j++)
        {
            a[i][j]=0;
        }
    }
    int row,col;
    for(i=1;i<=r;i++)
    {
        scanf("%d%d",&row,&col);
        a[row][col]=1;
    }
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=y;j++)
        {
            if(a[i][j]==0)
            {
                printf("%d %d",i,j);
                printf("\n");
            }
        }
        
    }
    return 0;
}