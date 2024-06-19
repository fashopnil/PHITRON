#include <stdio.h>
int main()
{
    FILE *inputfile;
    inputfile = fopen("input.txt", "r");
    if (inputfile==NULL)
    {
        printf("No File Found");
    }
    
    FILE *outputfle;
    outputfle= fopen("output.txt","w");
    while (1)
    {
        char ch = fgetc(inputfile);
        if (ch==EOF)
        {
            break;
        }
        fputc(ch,outputfle);
    }

    return 0;
}