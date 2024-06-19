#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, i, j;
    cin >> a;
    vector<int> array1;
    for (i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        array1.push_back(x);
    }
    cin >> b;
    vector<int> array2(b);
    for (i = 0; i < b; i++)
    {
        int x;
        cin >> x;
        for (int y : array1)
        {
            if (x != y)
            {
                array1.push_back(x);
                break;
            }
        }
    }
    sort(array1.begin(), array1.end());
    for (i = 0; i < array1.size(); i++)
    {
        cout << array1[i];
    }
    return 0;
}