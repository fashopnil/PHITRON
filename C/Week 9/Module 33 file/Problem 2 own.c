#include <stdio.h>
int main()
{
    FILE *inputfile;
    inputfile = fopen("input.txt", "r");

    FILE *outputfile;
    outputfile = fopen("output.txt", "w");
    while (1)
    {
        char ch = fgetc(inputfile);
        if (ch==EOF)
        {
            break;
        }
        
        
        fputc(ch, outputfile);
    }

    return 0;
}