#include<bits/stdc++.h>
using namespace std;
// string erase_first_last(string s)
// {
//     s.erase(s.begin());
//     s.pop_back();
//     return s;
// }

void swaping(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main()
{
    // string s;
    // cin>>s;
    // string ans=erase_first_last(s);
    // cout<<s<<"\n";
    // cout<<ans<<"\n";
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;

    return 0;
}