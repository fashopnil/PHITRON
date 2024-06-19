#include <stdio.h>
int factorial(int input)
{
    int i, multiply = 1;
    for (i = 1; i <= input; i++)
    {
        multiply *= i;
    }
    return multiply;
}
int ratio(int input1, int input2)
{
    int result = 0;
    result = factorial(input1) / factorial(input2);
    return result;
}
int main(void)
{
    int a, b, result = 0;
    scanf("%d%d", &a, &b);
    result = ratio(a, b);
    printf("%d", result);

    return 0;
}