#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        long long int A,B;
        long long int result=0;
        cin>>A>>B;
        result=(A*B)%100;
        cout<<result<<"\n";
    }
    
    return 0;
}