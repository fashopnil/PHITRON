#include <stdio.h>
int BinaryCheck(char string[])
{
    int i;
    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] != '0' || string[i] != '1')
        {
            return 0;
        }
    }
    return 1;
    
}
int main()
{
    char string[100];
    scanf("%s", string);
    int result=BinaryCheck(string);
    if (result == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}