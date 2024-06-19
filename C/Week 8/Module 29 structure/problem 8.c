#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks;
};

int main()
{
    struct student student;
    printf("Enter information:\n");

    printf("Enter name:\n");
    scanf("%s",student.name);
    printf("Displaying information:\nName:\n%s\n",student.name);

    printf("Enter roll number:\n");
    scanf("%d",&student.roll);
    printf("Roll number:\n%d",student.roll);


    printf("\nEnter marks:\n");
    scanf("%f",&student.marks);
    printf("Marks:\n%.2f",student.marks);
    
    return 0;
}