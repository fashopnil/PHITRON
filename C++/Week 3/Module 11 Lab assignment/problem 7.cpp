#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b;
    cin>>n;
    vector<int>ara(n);
    for ( i = 0; i < n; i++)
    {
        cin>>ara[i];
    }
    cin>>a>>b;
    ara.erase(ara.begin()+a-1,ara.begin()+b);
    for ( i = 0; i < ara.size(); i++)
    {
        cout<<ara[i]<<" ";
    }
    return 0;
}