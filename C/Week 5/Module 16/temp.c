#include<stdio.h>
int Median(int size,int formedianarray[])
{
    int i,freq[size+1];
    for(i=1;i<size+1;i++)
    {
        freq[i]=0;
    }
    for(i=1;i<size+1;i++)
    {
        freq[formedianarray[i]]++;
    }
    for(i=1;i<size+1;i++)
    {
        printf("%d ",freq[i]);
    }

}
int main()
{
    int i,sizeOfArray; 
    scanf("%d",&sizeOfArray);
    int array[sizeOfArray];
    for(i=0;i<sizeOfArray;i++)
    {
        scanf("%d",&array[i]);
    }
    int result=Median(sizeOfArray,array);
    // printf("%d",result);



    return 0;
}
