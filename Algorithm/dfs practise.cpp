#include <bits/stdc++.h>
using namespace std;
const int maxN = 1000;
vector<int> adj[maxN];
bool visited[maxN];

void bfs(int node)
{
}
int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}