#include <stdio.h>
int main()
{
    FILE *inputfile = fopen("input.txt", "r");
    if (inputfile == NULL)
    {
        printf("File not founded!");
    }
    FILE *outputfile = fopen("output.txt", "a");

    int n;
    fscanf(inputfile, "%d", &n);
    if (n % 4 == 0)
    {
        fprintf(outputfile, "%d-->Yes\n", n);
    }
    else
    {
        fprintf(outputfile,"%d-->No\n",n);
    }
    

    return 0;
}