#include<stdio.h>
int main()
{
    int a[3][3],transpose[3][3],i,j,row,col;
    printf("Enter the number of rows & columns for the matrix:");
    scanf("%d %d",&row,&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            transpose[j][i]=a[i][j];
        }
    }
    printf("entered matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}