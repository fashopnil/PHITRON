#include <stdio.h>
#include <string.h>
int main()
{
    int m, i, j, index = 0;
    char a[100], store[100];
    scanf("%d", &m);
    for (i = 0; i < m; i++)
    {
        scanf("%s",a);
        
        for (j = 0; j < strlen(a); j++)
        {
            store[index] = a[j];
            index++;
        }
        store[index] = ' ';
        index++;
    }

    store[index] = '\0';
    printf("%s", store);

    return 0;
}