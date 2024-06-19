#include<stdio.h>
int main()
{
    int i,j;
    int x=3,y=3;//ekhane x=3,y=3 dhora hoyeche kenO? 
    int a[x+1][y+1];//bujhi nai. x+1,y+1 keno dhora hocche?

    
    int q,row,col;
    scanf("%d", &q);
    for (i = 0; i < q; i++)
    {
        scanf("%d%d",&row,&col);
        a[row][col]=1;

    }
     for(i=1;i<=x;i++)//ekhane i=0 theke x porjonto print korle hobe na?
    {
        for(j=1;j<=y;j++)// ekhane abar j<y keno?
        {
            if(a[i][j]!=1)
            {
                printf("%d%d\n",i,j);
            }
        }
        printf("\n");
    }   
    return 0;
}