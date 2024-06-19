#include <stdio.h>
int GCD(int a, int b)
{
    int i, j;

    for (j = 1; j <= a; j++)
    {
        if (a % j == 0 && b % j == 0)
        {
            i = j;
        }
    }
    return i;
}
int main()
{
    int t=0;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int ara[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ara[i]);
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (GCD(ara[i], ara[j]) == 1)
                {
                    count++;
                }
            }
        }
        printf("%d\n", count*2);
    }

    return 0;
}