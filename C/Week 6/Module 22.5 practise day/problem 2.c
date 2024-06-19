#include<stdio.h>
int loop(int n)
{
    int i,j,counter=2;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            while (!prime(counter))
            {
                counter++;
            }
            printf("%d ",counter);
            counter++;
        }
        printf("\n");
    }

}
int prime(int a)
{
    int i;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    loop(n);
    return 0;
}