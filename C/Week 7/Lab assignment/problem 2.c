#include <stdio.h>
#include <string.h>
void sorted(char input[])
{
    int i, j;
    int length = strlen(input);
    int temp;

    for (i = 0; i < length - 1; i++)
    {
        for (j = 0; j < length - 1; j++)
        {
            if (input[j] < input[j + 1])
            {
                temp = input[j];
                input[j] = input[j + 1];
                input[j + 1] = temp;
            }
        }
    }
    printf("%s", input);
}
int main()
{

    char string[100];
    scanf("%s", string);
    sorted(string);

    return 0;
}