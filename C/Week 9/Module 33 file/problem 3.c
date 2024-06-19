#include <stdio.h>
int main()
{
    FILE *inputfile;
    FILE *outputfile;
    inputfile = fopen("input.txt", "r");
    if (inputfile == NULL)
    {
        printf("No File Found!!!");
        return 0;
    }
    outputfile = fopen("output.txt", "w");

    int n;
    fscanf(inputfile, "%d", &n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        fscanf(inputfile, "%d", &a);
        sum += a;
    }
    fprintf(outputfile, "%d", sum);

    return 0;
}