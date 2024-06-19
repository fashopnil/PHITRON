#include<stdio.h>
int main()
{
    int n,i,input[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&input[i]);
    }
    int largest=0;
    largest=input[0];
    for(i=0;i<n;i++)
    {
        if(input[i]>largest)
        {
            largest=input[i];
        }
    }
    int ara[largest+1];
    for(i=0;i<=largest;i++)
    {
        ara[i]=0;
    }
    for(i=0;i<n;i++)
    {
        ara[input[i]]+=1;
    }
    int uni=0; int dup=0;
    for(i=largest;i>0;i--)
    {
        if(ara[i]>1)
        {
            dup+=1;
        }
        if(ara[i]==1)
        {
            uni+=1;
        }

    }
    if(dup>1)
    {
        printf("No");
    }
    else{
        printf("Yes");
    }



    return 0;
}
