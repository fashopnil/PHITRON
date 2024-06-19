#include<stdio.h>
int main()
{
    int t,i,j,n;
    
    scanf("%d",&t);
    for ( i = 0; i < t; i++)
    {
        scanf("%d",&n);
        int a[n];
        int b[n];
        int count =0;
        for ( j = 0; j < n; j++)
        {
            
            scanf("%d",&a[j]);
            scanf("%d",&b[j]);
            if (b[j]!=a[j])
            {
                a[j]=1-a[i];
                count++;
            }
        }
        printf("Result =%d\n",count); 
    }
    
    return 0;
}