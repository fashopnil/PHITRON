#include <stdio.h>
struct person
{
    int age;
    float salary;
};
void display(struct person p)
{

    printf("Age= %d Salary= %0.2f\n", p.age, p.salary);
}
int main()
{
    struct person p1, p2;
    p1.age = 23;
    p1.salary = 28000;
    display(p1);
    printf("\n");
    p2.age = 50;
    p2.salary = 70000;
    display(p2);
}