#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int n[a];
    for (int i = 0; i < a; i++)
    {
        cin>>n[i];
    }
    int sum=1;
    for (int i = 0; i < a; i++)
    {
        sum=sum*n[i];
    }
    cout<<sum;
    
    
    return 0;
}