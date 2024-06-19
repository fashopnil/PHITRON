#include<stdio.h>
int main()
{
    int n,i,j;
    int input[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&input[i]);
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {

            if(i!=j)
            {
                printf("%d ",j);
            }

        }
        printf("\n");
    }


    return 0;
}
