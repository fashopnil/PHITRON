#include<stdio.h>
int main()
{
    int i,j,array3x3[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array3x3[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",array3x3[j][i]);
        }
        printf("\n");
    }
    return 0;
}