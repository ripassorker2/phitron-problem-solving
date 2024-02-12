#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
bool vis[1005];

void bfs_traverse(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        cout << par << " ";
        for (int child : adj[par])
        {
            // cout << child << " ";
            if (!vis[child])
            {
                q.push(child);
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
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
    }
    int src;
    cin >> src;
    memset(vis, false, sizeof(vis));
    bfs_traverse(src);

    cout << endl;
    return 0;
}
