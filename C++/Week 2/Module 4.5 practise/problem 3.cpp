#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {

        //s[i]='a'+((s[i]-'a'+6)%26);
        //z=97+(122-97+6)%26
        if (i%2==0)
        {
            if(s[i]=='z')
            {
                s[i]='a';
            }
            else
            s[i]=s[i]+1;
        } 
    }
    cout<<s;
    
    return 0;
}