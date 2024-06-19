#include<bits/stdc++.h>
using namespace std;
vector<int>merge_sort(vector<int>a)
{
    if (a.size()<=1)
    {
        return a;
    }
    int mid=a.size()/2;
    int i;
    vector<int>b;
    vector<int>c;
    for ( i = 0; i < mid; i++)
    {
        b.push_back(a[i]);
    }
    for ( i = mid; i < a.size(); i++)
    {
        c.push_back(a[i]);
    }
    vector<int>sorted_b=merge_sort(b);
    vector<int>sorted_c=merge_sort(c);
    vector<int>sorted_a;

    int idx1=0,idx2=0;
    for ( i = 0; i <a.size(); i++)
    {
        if (idx1==b.size())
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if (idx2==c.size())
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else if (sorted_b[idx1]<sorted_c[idx2])
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
    }
    return sorted_a;
}
int main()
{
    int n;
    cin>>n;
    vector<int>array(n);
    int i;
    for ( i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    vector<int>Final_array=merge_sort(array);
    for ( i = 0; i <Final_array.size(); i++)
    {
        cout<<Final_array[i]<<" ";
    }
    return 0;
}