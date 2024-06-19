#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;
    student(string name, int std_id, int age, string fathers_name, string mothers_name)
    {
        this->name = name;
        this->std_id = std_id;
        this->age = age;
        this->fathers_name = fathers_name;
        this->mothers_name = mothers_name;
    }
    student(string name, int std_id, int age)
    {
        this->name = name;
        this->std_id = std_id;
        this->age = age;
    }
    student()
    {
    }
    void print_information()
    {
        cout << name << " " << std_id << " " << age << " " << fathers_name << " " << mothers_name << "\n";
    }
    ~student()
    {
        cout << "called";
        print_information();
    }
};

class person
{
public:
    string name;
    person *father, *mother;
    person()
    {
        father=NULL;
        mother=NULL;
    }
    person(string name, string f_name, string m_name)
    {
        this->name = name;
        father = new person;
        father->name = f_name;
        mother = new person;
        mother->name = m_name;
    }
    
    void print_info()
    {
        cout << "Name: " << name << "\n";
        cout << "Fathers name: " << father->name << "\n";
        cout << "Mothers name: " << mother->name << "\n";
    }
    ~person()
    {
        if (father!=NULL)
        {
            delete father;
        }
        if (mother!=NULL)
        {
            delete mother;
        }  
    }
};
int main()
{
    // student s("A",10,20,"B","C");
    // s.print_information();
    // student s2("A",10,20);
    // s2.print_information();
    // student s3;
    person p("a", "b", "c");
    p.print_info();
    return 0;
}