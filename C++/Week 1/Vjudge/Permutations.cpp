#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n;
    cin >> n;
    if (n <= 4)
    {
        cout << "No Solutions";
        return 0;
    }

    vector<int> even, odd;

    for (int i = 1; i <= n; i++)

    {
        if (i % 2 == 0)
        {
            even.push_back(i);
        }
        else
        {
            odd.push_back(i);
        }
    }
    reverse(even.begin(),even.end());
    reverse(odd.begin(),odd.end());
    for (int i = 0; i < even.size(); i++)
    {
        cout<<even[i]<<" ";
    }

    for (int i = 0; i < odd.size(); i++)
    {
        cout<<odd[i]<<" ";
    }
    
    return 0;
}