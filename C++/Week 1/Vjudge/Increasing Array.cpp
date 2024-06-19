#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> ara(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ara[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ara[j] > ara[j + 1])
            {
                swap(ara[j], ara[j + 1]);
                count++;
            }
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << ara[i] << " ";
    // }

    cout << count;

    return 0;
}