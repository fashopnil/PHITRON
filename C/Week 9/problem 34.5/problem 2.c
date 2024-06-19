#include<stdio.h>
int main()
{
    FILE *inputfile=fopen("input.txt","r");
    if (inputfile==NULL)
    {
        printf("File not found");
    }
    
    
    return 0;
}