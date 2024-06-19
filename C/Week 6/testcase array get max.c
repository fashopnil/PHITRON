#include<stdio.h>
#include<limits.h>
void input_array(int ara[],int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d",&ara[i]);
    }
}
int get_max(int ara[],int size)
{
    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(ara[i]>max)
        {
            max=ara[i];
        }
    }
    return max;
}
void solve(int t)
{
    int sz;
    scanf("%d",&sz);
    int num[sz];
    input_array(num,sz); 
    int max=get_max(num,sz); 
    printf("%d ",max);  
}
int main(void)
{
   int t;
   scanf("%d",&t);
   
   while(t--)
   {
        solve(t);
   }
}