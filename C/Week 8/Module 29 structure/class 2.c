#include<stdio.h>
struct student
{
    int roll;
    // char name[50];
    int age;
    float weight;
};

int main()
{
    int a;
    struct student s;
    s.age=18;
    s.roll=63;
    s.weight=55.4;
    printf("%d\n%d\n%f",s.roll,s.age,s.weight);

    return 0;
}