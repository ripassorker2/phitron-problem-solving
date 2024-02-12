#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
bool vis[1005];
int level[1005];
int par[1005];

void bfs_level(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (int child : adj[parent])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[parent] + 1;
                par[child] = parent;
            }
        }
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

    int src, dest;
    cin >> src >> dest;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(par, -1, sizeof(par));
    bfs_level(src);

    int x = dest;
    vector<int> path;
    while (x != -1)
    {
        path.push_back(x);
        x = par[x];
    }
    reverse(path.begin(), path.end());
    for (int i = 0; i < path.size(); i++)
    {
        cout << path[i] << " ";
    }

    return 0;
}