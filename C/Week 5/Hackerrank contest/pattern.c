#include<stdio.h>
int main()
{
    int n,row,col;
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(row==1)
            {
                printf("%d",col);
            }
            else if(row==n)
            {
                printf("%d",row);
            }
            else if (col==1)
            {
                printf("%d",row);
            }
            else if (col==n)
            {
                printf("%d",col);
            }
            else
            {
                printf(" ");
            }
            
            
            
            {
                
            }
            
        }
         printf("\n");
    }
    return 0;
}