#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
bool vis[1005];

void bfs_level_track(int src, int dst)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    vis[src] = true;

    while (!q.empty())
    {
        auto p = q.front();
        q.pop();

        int parent = p.first;
        int level = p.second;

        if (parent == dst)
        {
            cout << level << endl;
        }

        for (int child : adj[parent])
        {
            if (!vis[child])
            {
                q.push({child, level + 1});
                vis[child] = true;
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

    bfs_level_track(src, 3);

    cout << endl;
    return 0;
}