#include<bits/stdc++.h>
using namespace std;

class user{
    protected:
    string name;
    int age;
};

class admin:user{
    private:
    string designation;
    public:
    void set(string s,int ag, string dg)
    {
        name=s;
        age=ag;
        designation=dg;

    }
    void print()
    {
        cout<<name<<"\n";
        cout<<age<<"\n";
        cout<<designation<<"\n";

    }
};
class student{
    private:
    string name;
    int id;
    int age;
    string parent_name;
    public:
    void printinformation()
    {
        cout<<name<<" "<<id<<" "<<age<<"\n";
    }
    void setinformation(string cname,int cid,int cage)
    {
        name=cname;
        id=cid;
        age=cage;

    }

};
int main()
{
    // student s;
    // s.setinformation("A",1902133,29);
    // s.printinformation();
    admin a;
    a.set("A",20,"D");
    a.print();
    return 0;
}