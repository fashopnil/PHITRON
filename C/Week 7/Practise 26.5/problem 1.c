#include <stdio.h>
int main(void)
{
    float a, b;
    scanf("%f%f", &a, &b);
    float *x, *y;
    x = &a;
    y = &b;
    float sum = (*x + *y) / 2;
    printf("%f",sum);
}