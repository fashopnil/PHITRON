#include<stdio.h>
int main()
{
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    // bowls plate koyta lagbe b,p;
    //washb washp jotogula wash korte hobe;
    int b = 0, p = 0, washB = 0, washP = 0;
    for (int i = 1;i <= n;i++)
    {
        int in;
        scanf("%d", &in);
        if (in == 1)
            b++;
        if (in == 2)
            p++;
    }
    if (b > m)
        washB += (b - m);
    if (m > b)
        k += (m - b);
    if (p > k)
        washP += (p - k);
    printf("%d", washB + washP);
    return 0;
}