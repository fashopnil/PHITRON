#include <stdio.h>
int main()
{
    int first[10][10], second[10][10], result[10][10], r1, r2, c1, c2, i, j, k;
    printf("Enter rows & colums for 1st matrix:");
    scanf("%d%d", &r1, &c1);

    printf("Enter rows & colums for 2nd matrix:");
    scanf("%d %d", &r2, &c2);

    while (c1 != r2)
    {
        printf("Error! Column of 1st matrix not equal to row of 2nd matrix");

        printf("Enter rows & colums for 1st matrix:");
        scanf("%d%d", &r1, &c1);

        printf("Enter rows & colums for 2nd matrix:");
        scanf("%d %d", &r2, &c2);
    }
    //taking first matrix input;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&first[i][j]);
        }
    }
    //taking second matrix input;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&second[i][j]);
        }
    }
    //first matrix print;
    printf("\nPrinting first matrix: \n");
    for(i=0;i<r1;i++)
    {
        printf("\t"); 
        for(j=0;j<c1;j++)
        {
            scanf("%d ",&first[i][j]);
        }
    }
    //2nd matrix print;
    for(i=0;i<r2;i++)
    {
        printf("\t"); 
        for(j=0;j<c2;j++)
        {
            scanf("%d ",&second[i][j]);
        }
    }

}