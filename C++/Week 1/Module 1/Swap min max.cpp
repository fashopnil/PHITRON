#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int a,b,c,d;
    // cin>>a>>b>>c>>d;
    // int mini= min({a,b,c,d});
    // int maxi=max({a,b,c,d});
    // cout<<"Minimum="<<mini<<"\n";
    // cout<<"Maximum="<<maxi<<"\n";

    vector<int>a={5,3,1,2};
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
        cout<<"\n";
    }
    sort(a.begin()+0,a.begin()+1+1);
    cout<<"After sorting"<<"\n";
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
        cout<<"\n";
    }
    

    return 0;
}