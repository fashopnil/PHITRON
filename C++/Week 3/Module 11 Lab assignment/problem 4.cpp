#include<bits/stdc++.h>
using namespace std;

bool isSubset(vector<int> &a,vector<int> &b)
{
    int i=0;
    int j=0;
    while (i<a.size() && j <b.size())
    {
        if (a[i]==b[j])
        {
            i++;
            j=-1;
        }
        j++; 
    }
    return i==a.size();
    
}

int main() {
    int n, m, i;
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> m;
    vector<int> b(m);
    for (i = 0; i < m; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (isSubset(a, b)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
