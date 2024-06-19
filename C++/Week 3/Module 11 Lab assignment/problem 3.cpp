#include<bits/stdc++.h>
using namespace std;
int n,k;

vector<int>merge_sort(vector<int>a)
{
    if (a.size()<=1)
    {
        return a;
    }
    int mid=a.size()/2;
    vector<int>b;
    vector<int>c;
    int i;
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
    int idx1=0;
    int idx2=0;
    for ( i = 0; i < a.size(); i++)
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
    if (sorted_a.size()==n)
    {
        int i=0,j=sorted_a.size()-1;
        int counter= 0;
        while (i<j)
        {
            
        }
        

    }
    
    return sorted_a;
}
int main()
{
    int i;
    cin>>n;
    vector<int>a(n);
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cin>>k;
    vector<int>result=merge_sort(a);
    for ( i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}