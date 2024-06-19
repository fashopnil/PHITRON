#include<stdio.h>
int is_vowel(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int main()
{
    char c;
    scanf("%c",&c);
    if(is_vowel(c))
    {
        printf("Vowel");
    }
    else
    {
        printf("Not vowel");
    }
    
    return 0;
}