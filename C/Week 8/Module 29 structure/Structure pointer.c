#include<stdio.h>
struct student
{
    double weight;
    int roll;
    int age;
};

int main()
{
    struct student s={.roll=12,.weight=85.2,.age=24};
    struct student *sp;
    sp=&s;
    printf("%d\n%d\n%lf",sp->age,sp->roll,sp->weight);

    return 0;
}