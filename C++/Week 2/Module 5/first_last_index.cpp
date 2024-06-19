#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>ara={1,2,3,3,3,4,5,6};
    int first_ind=-1;
    int last_ind=-1;
    int low=0;
    int target=3;
    int high=ara.size()-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (target==ara[mid])
        {
            first_ind=mid;
            high=mid-1;
        }
        else if(target>ara[mid])
        {
            low=mid+1;
        }
        else if (target<ara[mid])
        {
            high=mid-1;
        }

    }
    low=0;
    high=ara.size()-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (target==ara[mid])
        {
            last_ind=mid;
            low=mid+1;
        }
        else if(target>ara[mid])
        {
            low=mid+1;
        }
        else if (target<ara[mid])
        {
            high=mid-1;
        }

    }
    cout<<first_ind<<" "<<last_ind;

    



    return 0;
}