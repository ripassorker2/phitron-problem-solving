#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
bool vis[1005];
int level[1005];

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

    int src;
    cin >> src;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs_level(src);

    for (int i = 0; i < n; i++)
    {
        cout << i << " " << level[i] << " \n";
    }

    return 0;
}