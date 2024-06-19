#include<bits/stdc++.h>
using namespace std;
class FamilyMembers
{
public:
    string name;
    int age;
    string education;
    FamilyMembers *father,*mother;

    FamilyMembers()
    {
        father=nullptr;
        mother=nullptr;
    }
    void printinfo()
    {
        cout<<name<<" "<<age<<" "<<education<<" "<<father->name<<" "<<mother->name<<"\n";
    }
};

int main()
{
    FamilyMembers M[10];
    FamilyMembers M;
    M.father=new FamilyMembers;
    M.mother= new FamilyMembers;
    M.name="Saifan";
    M.age=7;
    M.education="Class 1";
    M.father->name="Shahjahan";
    M.mother->name="Suma";

    M.printinfo();
    return 0;
}