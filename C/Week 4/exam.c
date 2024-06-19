#include<stdio.h>
#include<string.h>
int main()
{
    int row,col,i,j,sum=0;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(row==col)
    {
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(i==j)
                {
                    sum+=sum + a[i][j];
                }
                if(row-i=j)
                {
                    sum1+= sum1+ a[i][j];
                }
                if(sum==sum1)
                {
                    

                }

            }
        }
        
    }




    return 0;
}
