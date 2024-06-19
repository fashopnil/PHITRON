#include<stdio.h>

int main()
{
    int i,j,row,col;
    scanf("%d%d",&row,&col);
    
    int a[row][col],b[row][col],c[row][col];
    for(i=0;i<row;i++)
    {
        
        for(j=0;j<col;j++)
        {
            scanf("%d %d",&a[i][j],&b[i][j]);
        }
    }
    // //for(i=0;i<row;i++)
    // {
        
    //     for(j=0;j<col;j++)
    //     {
    //         scanf("%d",&b[i][j]);
    //     }
    // }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }

    }
   
   for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");

    }
   
    
    return 0;
}