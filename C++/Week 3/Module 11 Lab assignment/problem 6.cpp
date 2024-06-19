#include <bits/stdc++.h>
using namespace std;
int binary_search(vector<int> &a, int T)
{
    int i,j;
    int left = 0;
    int right = a.size() - 1;
    int count = 0;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        //jan ta khaya dise ekhan theke
        if (a[mid] == T)
        {
            count++;
            i = mid + 1;
            while (a[i] == T)
            {
                if (a[i] == T)
                {
                    count++;
                }
                i++;
            }
            j=mid-1;
            while (a[j]==T)
            {
                count++;
                j--;
            }
            break;
            //ei porjonto. 1+ hour gese. 
        }
        else if (a[mid] < T)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return count;
}
int main()
{
    int n, i, T;
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> T;
    int result = binary_search(a, T);
    if (result >= 2)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}