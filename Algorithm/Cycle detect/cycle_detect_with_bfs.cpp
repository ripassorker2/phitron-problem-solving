#include <bits/stdc++.h>
using namespace std;

const int input_size = 1e5 + 5;

vector<int> adj[input_size];
bool visited[input_size];
int parent[input_size];
bool isCycle;

bool bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : adj[par])
        {
            if (visited[child] && parent[par] != child)
                isCycle = true;

            if (!visited[child])
            {
                parent[child] = par;
                visited[child] = true;
                q.push(child);
            }
        }
    }

    return isCycle;
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
            bfs(i);
    }

    isCycle ? cout << "Cycle detected " << endl : cout << "Cycle not detected\n";

    cout << endl;
    return 0;
}