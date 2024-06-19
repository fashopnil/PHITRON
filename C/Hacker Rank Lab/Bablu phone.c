#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        char j;
        int n;
        scanf("%d%c",&n ,&j);
        if(n<=60)
        {
            printf("%d minutes\n",60-n+20*2+20*3);
        }
        if(n>60 && n<=80)
        {
            printf("%d minutes\n",(80-n)*2+20*3);
        }
        if (n>80 && n<=100)
        {
            printf("%d minutes\n",(100-n)*3);
        }
    }
    return 0;
}