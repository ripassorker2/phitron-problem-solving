#include <bits/stdc++.h>
using namespace std;

const int node_size = 1005;
vector<int> adj[node_size];
bool visited[node_size];

void dfs(int src)
{
    cout << src << " ";
    visited[src] = true;
    for (int child : adj[src])
    {
        if (!visited[child])
            dfs(child);
    }
}

int main()
{

    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    memset(visited, false, sizeof(visited));

    int src;
    cin >> src;
    dfs(src);

    return 0;
}