#include <stdio.h>
int is_prime(int a)
{
    int i;
    if (a == 0)
    {
        return 0;
    }
    else if (a == 2)
    {
        return 1;
    }
    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}
int primecount(int n, int *array)
{
    int i;
    int sum=0;
    for (i = 0; i < n; i++)
    {
        if (is_prime(*array))
        {
            sum++;
        }
        array++;
    }
    printf("Prime numbers: %d\n",sum);
}
float even_avarage(float n,int *ara)
{
    int i;
    float sum=0;
    float count=0;
    for(i=0;i<n;i++)
    {
        if (*ara%2==0)
        {
            sum+=*ara;
            count++;
        }
        ara++;
    }
    return sum/count;
}
int main()
{
    int n, i;
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    primecount(n, array);
    printf("Average of all even integers:%f",even_avarage(n,array));

    return 0;
}