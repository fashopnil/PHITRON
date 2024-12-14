#include <bits/stdc++.h>
using namespace std;
const int maxN = 1000;
bool visited_array[maxN];
vector<int> adj[maxN];
void bfs(int s)
{
    queue<int> q;
    cout << s << " ";
    visited_array[s] = true;
    q.push(s);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (int child : adj[node])
            if (!visited_array[child])
            {
                visited_array[child] = true;
                q.push(child);
                cout << child << " ";
            }
    };
}
int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 1; i <= e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    cout<<endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " -> ";
        for (int child : adj[i])
        {
            cout << child << " ";
        }
        cout << endl;
    }
}