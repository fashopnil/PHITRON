#include <stdio.h>
int main()
{
    FILE *inputfile = fopen("input.txt", "r");
    if (inputfile == NULL)
    {
        printf("File not found!");
    }
    FILE *outputfile = fopen("output.txt", "w");
    int a;
    while (fscanf(inputfile,"%d",&a)!=EOF)//is essentially saying: "Read an integer from the 
    //input file. If the value returned by fscanf is not EOF 
    //(i.e., we haven't reached the end of the file yet), then execute the loop body."
    {
        fprintf(outputfile,"%d ",a);
    }
    
    fclose(inputfile);
    fclose(outputfile);

    return 0;
}