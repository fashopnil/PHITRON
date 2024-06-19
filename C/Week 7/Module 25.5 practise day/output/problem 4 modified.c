#include<stdio.h>
int  fun(int input)
{
    int sum=0;
    if(input>0)
    {
        // printf("%d",input);
        sum+=input;
        fun(input-1);
        return sum;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int result=fun(n);
    printf("%d",result);

    return 0;
}