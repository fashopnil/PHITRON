#include<bits/stdc++.h>
using namespace std;
const int maxN=1000;
vector<int>adj[maxN];
bool visited[maxN];
int level[maxN];
void bfs(int node)
{
    queue<int>q;
    visited[node]=1;
    level[node]=0;
    q.push(node);
    while (!q.empty())
    {
        int head=q.front();
        q.pop();
        // cout<<head<<" ";
        for (int i :adj[head])
        {
            if (visited[i]==0)
            {
                visited[i]=1;
                level[i]=level[head]+1;
                q.push(i);
                
            }
            
        }
        
        
    }
    

}
int main(){
    int nodes,edges;
    cin>>nodes>>edges;
    for (int i = 0; i <edges; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(0);
    for (int i = 0; i <nodes; i++)
    {
        cout<<"nodes-"<<i<<" level-"<<level[i]<<endl;
    }
    
    return 0;
}