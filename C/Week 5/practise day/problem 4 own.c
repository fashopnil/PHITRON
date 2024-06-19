#include<stdio.h>
#include<string.h>
int main()
{
    char input[100];
    int i;
    scanf("%s",input);
    int size=strlen(input);
    printf("%c",input[0]);
    for(i=1;i<size;i++)
    {
        if(input[i]!=input[i-1])
        {
            printf("%c",input[i]);
        }
    }
    

    return 0;
}