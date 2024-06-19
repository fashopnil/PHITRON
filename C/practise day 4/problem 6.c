#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=i;j>=0;j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
