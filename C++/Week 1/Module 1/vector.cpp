#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    for (int i = 0; i < 10; i++)
    {
        a.push_back(i); 
    }
    a.insert(a.begin()+1,100);
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<"\n";
    }
    a.erase(a.begin()+0);
    a.pop_back();
    cout<<"after delete"<<"\n";
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<"\n";
    }
    a.insert(a.begin()+1,200);
    a.resize(5);
    a.pop_back();
    cout<<"after resize"<<"\n";
    
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<"\n";
    }


    return 0;
}