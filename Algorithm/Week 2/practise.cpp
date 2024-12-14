#include <bits/stdc++.h>
using namespace std;
const int maxN = 1000;
bool visited[maxN];
vector<int> adj[maxN];
int bfs(int s)
{
    cout << s<<" ";
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (int child : adj[node])
        {
            if (!visited[child])
            {
                visited[child] = true;
                q.push(child);
                cout << child << " ";
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
    bfs(1);

    return 0;
}