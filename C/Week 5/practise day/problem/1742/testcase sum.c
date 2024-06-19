#include<stdio.h>
int main()
{
    int test,i;
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a+b==c || a+c==b || b+c==a)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        
    }

    return 0;
}