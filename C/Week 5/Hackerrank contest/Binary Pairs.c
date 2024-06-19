#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,i,j,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int counter=0;
        scanf("%d",&n);
        char s[n];
        scanf(" %s",s);
        for(j=1;j<n;j++)
        {
            if(s[j-1]=='0' && s[j]=='1')
            {
                counter++;
            }    
            if(s[j-1]=='1' && s[j]=='0')
            {
                counter++;
            }
        }
        printf("%d\n",counter);
    }
    
   
    
    
    
    
    return 0;
}
