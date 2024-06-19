#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string S;
    cin >> S;
    int current = 1, count = 1;
    for (int i = 1; i < S.size(); i++)
    {
        if (S[i] == S[i - 1])
        {
            current++;
        }
        else
        {
            current = 1;
        }
        if (current > count)
        {
            count = current;
        }
    }
    cout << count;
    return 0;
}