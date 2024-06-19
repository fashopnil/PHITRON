#include<stdio.h>
#include<string.h>
int main()
{
char name[100];

scanf("%s",name);
int vowels=0,consonant=0;
for(int i=0;name[i]!='\0';i++)
{
if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
{
vowels++;
}
else
{
consonant++;
}
}
printf("Vowels- %d",vowels);
printf("consonant-%d",consonant);
return 0;
}