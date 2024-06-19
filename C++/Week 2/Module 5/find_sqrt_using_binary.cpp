#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int low=1;
    int high=x;
    int ans;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (mid*mid<=x)
        {
            ans=mid;
            low=mid+1;
        }
        else if (mid*mid>x)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return ans;
}