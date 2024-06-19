#include<stdio.h>
int main()
{
    int test,t;
    scanf("%d",&test);
    for(t=1;t<=test;t++)
    {
        long long int n,m,flag,i;
        m=n/2;
        flag=0;
        scanf("%lld",&n);
        if(n==0 || n==1 || n==60)
        {
            flag=1;
        }
        for(i=2;i<m;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("Yes");
            printf("\n");  
        }
        else if(flag==1)
        {
            printf("No");
            printf("\n");
        }
    }
    return 0;
}