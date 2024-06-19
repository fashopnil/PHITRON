#include<stdio.h>
int main()
{
    int t,i,n;
    scanf("%d",&t);
    for ( i = 0; i < t; i++)
    {
        scanf("%d",&n);
        while (n>0)
        {
            int digit=n%10;
            char ch=digit +'A'-1;
            printf("%c",ch);
            n/=10;
        }
        printf("\n");
            
    }
    
    return 0;
}