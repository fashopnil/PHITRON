#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *inputfile = fopen("input.txt", "r");
    if (inputfile == NULL)
    {
        printf("File not founded!");
    }
    FILE *outputfile = fopen("output.txt", "w");
    int t, i, j, n;
    fscanf(inputfile,"%d", &t);
    for (i = 0; i < t; i++)
    {
        fscanf(inputfile,"%d", &n);
        if (n > 0)
        {
            for (j = n; j >= -n; j--)
            {
                fprintf(outputfile,"%d ", j);
            }
        }
        else if (n < 0)
        {
            for (j = -n; j <= n; j++)
            {
                fprintf(inputfile,"%d ", j);
            }
        }
        fprintf(outputfile,"\n");
    }
    return 0;
}