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
  
};

bool comp(student a,student b)
{
    return a.std_id<b.std_id;
}
int main()
{
    vector<student>a;
    for (int i = 0; i < 10; i++)
    {
        a.push_back(student("A",20-i,20));
    }
    for (int i = 0; i < 10; i++)
    {
        a[i].print_information();
    }
    cout<<"After sorting";
    sort(a.begin(),a.end(),comp);
    for (int i = 0; i < 10; i++)
    {
        a[i].print_information();
    }
    
   
    return 0;
}