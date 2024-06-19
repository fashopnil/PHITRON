#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[20];
    scanf("%s",s);
    int a,b,sumplus=0,i;
    scanf("%d%d",&a,&b);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='+')
        {
            sumplus+=a+b;
        }
        if (s[i]=='*')
        {
            sumplus+=a*b;
        }
    }
    printf("%d",sumplus);

    return 0;
}
