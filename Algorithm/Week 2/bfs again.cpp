#include <bits/stdc++.h>
using namespace std;
const int maxN = 1000;
bool visited[maxN];
vector<int> adj[maxN];
void bfs(int node)
{
    queue<int> q;
    visited[node] = 1;
    q.push(node);
    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        cout << head << " ";
        for (int child : adj[head])
        {
            if (visited[child] == 0)
            {
                visited[child] = 1;
                q.push(child);
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs(0);
}