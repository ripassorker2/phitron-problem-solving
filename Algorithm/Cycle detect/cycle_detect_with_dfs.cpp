#include <bits/stdc++.h>
using namespace std;

const int input_size = 1e5 + 5;

vector<int> adj[input_size];
bool visited[input_size];
int parent[input_size];
bool isCycle;

void dfs(int src)
{
    visited[src] = true;
    // cout << src << " ";
    for (int child : adj[src])
    {
        if (visited[child] && parent[src] != child)
            isCycle = true;
        if (!visited[child])
        {
            parent[child] = src;
            dfs(child);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    memset(adj, 0, sizeof(adj));
    memset(visited, false, sizeof(visited));
    memset(parent, -1, sizeof(parent));

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    isCycle = false;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
            dfs(i);
    }

    isCycle ? cout << "Cycle detected " << endl : cout << "Cycle not detected\n";

    cout
        << endl;
    return 0;
}