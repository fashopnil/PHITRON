#include <stdio.h>
#include <string.h>
int main()
{
    int i, sum = 0,counter=0;
    char s[100];
    scanf("%s", s);
    for (i = 0; i < strlen(s); i++)
    {
        sum += (s[i] - 'a') + 1;
    }
    int flag = 0;
    while (sum != 1)
    {
        if (sum % 2 == 0)
        {
           sum  = sum / 2;
            counter++;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag==0)
    {
        printf("Cost=2^%d", counter);
    }
    else
    {
        printf("No");
    }

    return 0;
}