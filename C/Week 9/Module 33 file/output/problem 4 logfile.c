#include<stdio.h>
int main()
{
    FILE *logfile= fopen("logfile.txt","a");
    FILE *inputfile=fopen("habajabi.txt","r");
    if (inputfile==NULL)
    {
        fprintf(logfile,"file not found");
    }
    
    fprintf(logfile,"Hello at 11.35 AM\n");
    return 0;
}