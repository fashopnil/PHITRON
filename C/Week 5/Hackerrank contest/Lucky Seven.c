#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, i, j,k;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        char s[20];
        scanf("%s",s);
        int len = strlen(s), flag = 0;
        for (j = 0; j < len / 2; j++)
        {
            if (s[j] != s[len - j - 1])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            if(len<=7)
                printf("Case #3: %s",s);
            else
            {
                printf("Case #2: %c%d%c",s[0],strlen(s)-2,s[strlen(s)-1]);
            }
        }
        else
        {
            printf("Case #1: Not Palindrome");
            
        }
        printf("\n");
    }
    return 0;
}