#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,i;
    cin>>n;
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cin>>q;
    for ( i = 0; i < q; i++)
    {
        int target;
        cin>>target;
        int ans=0;
        int low=0,high=n-1;
        while (low<=high)
        {
            int mid=low+(high-low)/2;
            if (arr[mid]==target)
            {
                ans=1;
                break;
            }
            else if (arr[mid]>target)
            {
                high=mid-1;
            }
            else if (arr[mid]<target)
            {
                low=mid+1;
            }
        }
        if (ans==1)
        {
            cout<<"Yes"<<"\n";
        }
        else
        {
            cout<<"No"<<"\n";
        }
    }
    return 0;
}