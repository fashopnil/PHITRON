#include<stdio.h>
int main()
{
    int i,n,m;
    scanf("%d%d",&n,&m);
    int a[n],b[m];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]<b[i])
            {
                count++;
            }
            else{
                break;
            }
        }
        if(count>0)
        {
            printf("%d ",count);
        }
        
    }
    

    return 0;
}