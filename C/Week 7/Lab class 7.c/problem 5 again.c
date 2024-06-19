#include <stdio.h>
int leap(int a)
{
    if ((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0))
        return 1;
    else
        return 0;
}
int distinct(int a)
{
    int i, ld = 0;
    int digitcount[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    while (a > 0)
    {
        ld = a % 10;
        digitcount[ld]++;
        a /= 10;
    }
    for (i = 0; i < 10; i++)
    {
        if (digitcount[i] > 1)
            return 0;
    }
    return 1;
}
int main(void)
{
    int n;
    scanf("%d", &n);
    if (leap(n) && distinct(n))
        printf("Beautiful");
    else
        printf("Ugly");
}