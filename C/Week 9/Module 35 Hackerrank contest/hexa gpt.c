#include <stdio.h>

int GCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int t, i, j, k;
    scanf("%d", &t);
    for (k = 0; k < t; k++)
    {
        int n;
        scanf("%d", &n);
        int ara[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &ara[i]);
        }
        int count = 0;
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++) // Start j from i+1 to avoid duplicate pairs
            {
                if (ara[i] != ara[j])
                {
                    if (GCD(ara[i], ara[j]) == 1)
                    {
                        count++;
                    }
                }
            }
        }
        printf("%d\n", count);
    }

    return 0;
}