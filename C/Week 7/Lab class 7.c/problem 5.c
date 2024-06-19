#include <stdio.h>
int leap(int y)
{
    if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int distinct(int a)
{
    int ld = 0, i;
    int countdigit[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    while (a > 0)
    {
        ld = a % 10;
        countdigit[ld]++;
        a /= 10;
    }
    for (i = 0; i < 10; i++)
    {
        if (countdigit[i] > 1)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    if (leap(n) && distinct(n))
    {
        printf("Beautiful");
    }
    else
    {
        printf("Ugly");
    }
    
    
    return 0;
}