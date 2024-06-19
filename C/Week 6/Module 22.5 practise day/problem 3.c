#include<stdio.h>
char result[500]= "";
void merge(char s[])
{
    strcat(result,s);
    strcat(result," ");
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        char s[100];
        scanf("%s",s);
        merge(s);
    }
    printf("%s",result);

    return 0;
}
