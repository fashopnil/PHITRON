#include<bits/stdc++.h>
using namespace std;
vector<int>even_generator(vector<int>a)
{
    int i;
    vector<int> result;
    for ( i = 0; i < a.size(); i++)
    {
        if (a[i]%2==0)
        {
            result.push_back(a[i]);
        }
        
    }
    
    return result;
}
int main()
{
    vector<int> a ={10,5,7,8,2};
    vector<int>result=even_generator(a);
    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    

    return 0;
}