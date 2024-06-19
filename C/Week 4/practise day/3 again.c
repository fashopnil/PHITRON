#include<stdio.h>
#include<string.h>
int main()
{
    char input[100];
    scanf("%s",input);
    int consonant=0,vowels=0;
    for(int i=0;input[i]!='\0';i++)
    {
        if(input[i]=='a' || input[i]=='e'|| input[i]=='i'|| input[i]=='o' || input[i]=='u')
        {
            vowels++;
        }
        else
        {
            consonant++;
        }
    }
    printf("Vowels%d\nConsonants%d",vowels,consonant);
    return 0;
}