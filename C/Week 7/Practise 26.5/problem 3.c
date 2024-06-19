#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    int array[n];
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int *ptr;
    ptr=array;
    for (i = 0; i < n; i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
    
    return 0;
}