#include<bits/stdc++.h>
using namespace std;

/*Time complexity O(1)
Memory complexity O(1)
*/ 

int main()
{
    // int a,b,c;
    // cin>>a>>b>>c;
    // int maxi=max({a,b,c});
    // int mini=min({a,b,c});
    // int sum=a+b+c;
    // int mul=a*b*c;
    // cout<<maxi<<"\n";
    // cout<<mini<<"\n";
    // cout<<sum<<"\n";
    // cout<<mul<<"\n";
    int n;
    cin>>n;
    vector<int>a(n);
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    int maxi=a[0];
    int mini=a[0];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        maxi=max(maxi,a[i]);
        mini=min(mini,a[i]);
        sum=sum+a[i];
    }
    cout<<maxi<<"\n";
    cout<<mini<<"\n";
    cout<<sum<<"\n";
    
    return 0;
}