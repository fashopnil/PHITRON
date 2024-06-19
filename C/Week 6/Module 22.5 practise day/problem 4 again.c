#include<stdio.h>
#include<limits.h>
void freq(int ara[],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        scanf("%d",&ara[i]);
    }
    int max= INT_MIN;
    for(i=0;i<size;i++)
    {
        if(max<ara[i])
        {
            max= ara[i];
        }
    }
    int freq_array[max+1];
    for(i=0;i<=max;i++)
    {
        freq_array[i]=0;
    }
    for(i=0;i<size;i++)
    {
        freq_array[ara[i]]++;
    }
    for(i=0;i<=max;i++)
    {
        if(freq_array[i]!=0)
        {
            for(j=0;j<freq_array[i];j++)
            {
                printf("%d ",i);
            }
        }
    }
}
int main(void)
{
    int n;
    scanf("%d",&n);
    int array[n];
    freq(array,n);

}