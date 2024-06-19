#include<stdio.h>
int main()
{
    int n,l,r,i,j;
    scanf("%d%d%d",&n,&l,&r);
    int min[n],max[n];
    for(i=0;i<n;i++)
    {
        min[i]=0;
        max[i]=0;
    }
    for(i=1,j=0;i<n;i*2,j++)
    {
        min[j]=i;
        max[j]=i;
        printf("Value of min=%d value of max%d\n",min[j],max[j]);
    }
    
    return 0;
}