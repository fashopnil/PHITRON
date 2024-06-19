#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    vector<int>v;
    for ( i = 0; i < n; i++)
    {
        int input;
        cin>>input;
        v.push_back(input);
    }
    for(int val:v)
    {
        cout<<val<<" ";
    }
    
    
    
    return 0;
}