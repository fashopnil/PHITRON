#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max_val = a[0];
    for (int num : a)
    {
        max_val = max(max_val, num);
    }
    vector<int> cnt(max_val + 1, 0);
    for (i = 0; i < n; i++)
    {
        cnt[a[i]]++;
    }

    for (i = 0; i <= max_val; i++)
    {
        while (cnt[i] > 0)
        {
            cout << i << " ";
            cnt[i]--;
        }
    }
    return 0;
}