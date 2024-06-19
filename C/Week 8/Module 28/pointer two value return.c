#include <stdio.h>
void func(int x, int y, int *p, int *q)
{
    if (x > y)
    {
        *p = x;
        *q = y;
    }
    else
    {
        *p = y;
        *q = x;
    }
}
int main()
{
    int a = 15, b = 12;
    int large, small;
    func(a, b, &large, &small);
    printf("%d %d\n", large, small);
    return 0;
}