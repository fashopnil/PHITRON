#include <stdio.h>
#include <limits.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    for (i = 0; i < n; i++)
    {
        s[i] = s[i] - 97;
    }
    int max = INT_MIN;
    for (i = 0; i < n; i++)
    {
        if (s[i] > max)
        {
            max = s[i];
        }
    }
    int sorted[max + 1];
    for (i = 0; i <= max; i++)
    {
        sorted[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        sorted[s[i]]++;
    }
    int count=0;
    for (i = 0; i <= max; i++)
    {
        if (sorted[i] == 1)
        {
            count ++;
        }
    }
    printf("%d",count);
    return 0;
}