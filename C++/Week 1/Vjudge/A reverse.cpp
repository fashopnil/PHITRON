#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int L,R;
    cin>>L>>R;
    string S;
    cin>>S;
    // cout<<S[0]<<S[L]<<S[R];
    int i,j,temp=0;
    for (i = L-1,j=R-1; i<= j; i++,j--)
    {
        temp=S[i];
        S[i]=S[j];
        S[j]=temp;
    }
    cout<<S;

    return 0;
}