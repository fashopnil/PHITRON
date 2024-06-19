#include<stdio.h>
struct employee
{
    char name[20];
    int number;
    int id;
    char address[50];
};

int main()
{
    int a;
    struct employee shopnil;
    scanf("%s %d %d %s",&shopnil.name,&shopnil.number,&shopnil.id,&shopnil.address);

    printf("%s %d %d %s",shopnil.name,shopnil.number,shopnil.id,shopnil.address);

    
    
    return 0;
}