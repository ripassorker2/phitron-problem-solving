#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int n, e;
vector<int> adj[N];
bool vis[N];
int dis[N];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    dis[src] = 0;
    vis[src] = true;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (int ch : adj[parent])
        {
            if (!vis[ch])
            {
                q.push(ch);
                dis[ch] = dis[parent] + 1;
                vis[ch] = true;
            }
        }
    }
}

int main()
{

    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));

    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int src, dest, k;
    cin >> src >> dest >> k;
    bfs(src);

    if (dis[dest] != -1)
    {
        if (k * 2 >= dis[dest])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}