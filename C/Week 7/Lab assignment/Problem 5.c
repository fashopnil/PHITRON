#include <stdio.h>
int count_odd_even(int n,int ara[])
{
    int i;
    int sum=0;
    for (i = 1; i <= n; i++)
    {
        if ((ara[i] % 2 == 0 && i % 2 == 0) || (ara[i] % 2 != 0 && i % 2 != 0))
        {
            sum += i + ara[i];
        }
        
    }
    return sum;

}
int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);
    int array[n];
    for (i = 1; i <=n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    printf("%d",count_odd_even(n,array));

    return 0;
}