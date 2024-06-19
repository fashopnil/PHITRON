#include<stdio.h>
#include<string.h>
#include<math.h>
int power2(int sum)
{
    int i=0,two=1;    
    while(two<sum)
    {
        two*=2;
        i++;
    }
    if(two==sum)
    {
        printf("Yes\nCost=2^%d",i);
    }
    else
    {
        printf("No");
    }
    

}

int main()
{
    char s[100];
    int i;
    scanf("%s",s);
    int sum=0;
    for(i=0;i<strlen(s);i++)
    {
        // 
        s[i]=s[i]-96;
        sum+=s[i];
    }
    // printf("%d ",sum);
    power2(sum);
    
    return 0;
}