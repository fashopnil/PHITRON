#include<stdio.h>
#include<math.h>
int isprime(int a)
{
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int T,i,j;
    scanf("%d",&T);
    for ( i = 0; i < T; i++)
    {
        int L,R;
        scanf("%d%d",&L,&R);
        for ( j = L; j <= R; j++)
        {
            if (j==1 || isprime(j))
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;
}