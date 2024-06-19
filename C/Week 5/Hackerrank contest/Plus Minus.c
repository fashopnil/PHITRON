#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, i, countmax = 1, count = 1;
    scanf("%d", &n);
    char plusminus[n];
    scanf("%s", plusminus);
    for (i = 1; i < n ; i++)
    {
        if (plusminus[i] == plusminus[i - 1])
        {
            count++;
        }
        if(count>countmax)
        {
            count++;
        }
        
    }
    

    
    return 0;
}