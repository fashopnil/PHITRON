#include <stdio.h>
int add_three_nums(int a, int b, int c)
{
	return a+b+c;
}
int main(void)
{
    int first,second,third=0;
    scanf("%d%d",&first,&second);
    int sum=add_three_nums(first,second,third);
    printf("%d",sum);
    
    return 0;
}