#include <stdio.h>
int main()
{
    int a, i;
    int sum = 0;
    int flag = 1;
    int count = 0;
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        if (flag=1)
        {
            sum+=i;
        }
        
        
        
    }
    printf("%d", sum);

    return 0;
}