#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int std_id;
    int age;
    string father_name;
    string mother_name;

    void print_information()
    {
        cout << name << " " << std_id << " " << age << " " << father_name << " " << mother_name << "\n";
    }
};
class rectengle
{
public:
    int height, width;
    int calculate_area()
    {
        return height * width;
    }
    int calculate_perimetre()
    {
        return 2 * (height + width);
    }
};
class person
{
public:
    string name;
    person *father, *mother;
    void print_info()
    {
        cout << "Name: " << name << "\n";
        cout << "Fathers name: " << father->name << "\n";
        cout << "Mothers name: " << mother->name << "\n";
    }
};

int main()
{
    // student s;
    // s.name = "Ferdous";
    // s.std_id = 1902133;
    // s.age = 24;
    // s.father_name = "Shawkat Ali";
    // s.mother_name = "Fatema Begum";
    // s.print_information();
    // student s2;
    // s2.name = "Ridoy";
    // s2.std_id = 1912133;
    // s2.age = 25;
    // s2.father_name = "Nabiullah";
    // s2.mother_name = "Amatullah";
    // s2.print_information();
    // rectengle r1;
    // r1.height=4;
    // r1.width=8;
    // cout<<r1.calculate_area()<<" "<<r1.calculate_perimetre()<<"\n";

    // rectengle r2;
    // r2.height=10;
    // r2.width=7;
    // cout<<r2.calculate_area()<<" "<<r2.calculate_perimetre()<<"\n";
    person p;
    p.father= new person;
    p.mother = new person;
    p.name = "A";
    p.father->name = "F";
    p.mother->name = "M";
    p.print_info();
    return 0;
}