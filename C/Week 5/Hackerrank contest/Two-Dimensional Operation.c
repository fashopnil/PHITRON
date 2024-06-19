#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i+1==j+1 && arr[i][j]==i+1)
            {
                arr[i][j]+=3;
            }
            else if(arr[i][j]==i+1)
            {
                arr[i][j]+=2;
            }
            else if(arr[i][j]==j+1)
            {
                arr[i][j]+=1;
            }
        }
    }

     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    } 
    return 0;
}
