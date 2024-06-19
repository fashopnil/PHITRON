#include<stdio.h>
int sum(int a);
int main()
{
    int n,i;
    scanf("%d",&n);
    int ans=0;
    for(i=0;i<n;i++)
    {
        int input;
        scanf("%d",&input);
        ans+=sum(input);
    }
    printf("%d",ans);
    return 0;
}
int sum(int a)
{
   int first=a%10;
   int last=a/1000;
   return first+last;

}