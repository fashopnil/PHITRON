#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n-1; i++)
    {
        cin >> a[i];
    }
    vector<int>cnt(n+1, 0);
    for (i = 0; i < n-1; i++)
    {
        cnt[a[i]]++;
    }
    for (i = 1; i <= n; i++)
    {
        if(cnt[i] == 0)
        {
            cout <<i<<" ";
        }
    }
    return 0;
}