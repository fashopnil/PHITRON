#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,a;
    cin>>n;
    vector<int>ara(n);
    for (int i = 1; i <= n-1; i++)
    {
        cin>>a;
        ara[a]=a;
    }
    for (int i = 1; i <= n; i++)
    {
        if (ara[i]==0)
        {
            cout<<i;
        }
    }
    return 0;
}