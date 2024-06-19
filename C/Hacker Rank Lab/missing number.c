#include<stdio.h>
int main()
{
    long long int t,i;
    
    scanf("%lld",&t);
    long long int s,a,b,c;
    
    for(i=0;i<t;i++)
    {
        
        scanf("%lld%lld%lld%lld",&s,&a,&b,&c);
        printf("%lld",s-(a+b+c));
    printf("\n");
    }
    


    return 0;
}