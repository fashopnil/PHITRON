#include <stdio.h>
struct student
{
    double weight;
    int roll;
};

int main()
{
    int i;
    struct student s[10];
    for (i = 0; i < 10; i++)
    {
        s[i].roll = 11+i;
        s[i].weight = 55.9+i*3;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d %lf\n",s[i].roll,s[i].weight);
    }
    return 0;
}