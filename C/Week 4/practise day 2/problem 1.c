#include<stdio.h>
#include<string.h>
int main()
{
    int m,i,j;
    scanf("%d",&m);
    char store[100];
    int index=0;
    for(i=0;i<m;i++)
    {
        char a[100];
        scanf("%s",a);
        for(j=0;j<strlen(a);j++)
        {
            store[index]=a[j];
            index++;
        }
        store[index]=' ';
        index++;
    }
    store[index]='\0';
    printf("%s",store);


    return 0;
}