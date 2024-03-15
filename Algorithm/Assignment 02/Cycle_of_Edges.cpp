#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
bool vis[N];
vector<int> adj[N];
int parent[N];
bool ans = false;
int cycleEdge = 0;
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : adj[par])
        {
            if (vis[child] && parent[par] != child)
            {
                ans = true;
                cycleEdge++;
            }

            if (!vis[child])
            {
                vis[child] = true;
                parent[child] = par;
                q.push(child);
            }
        }
    }
}
int main()
{
    memset(vis, 0, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
            bfs(i);
    }
    if (ans)
        cout << cycleEdge / 2 << endl;
    else
        cout << "0" << endl;
    return 0;
}