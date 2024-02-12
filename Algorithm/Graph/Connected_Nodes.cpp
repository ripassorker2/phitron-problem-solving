#include <bits/stdc++.h>
using namespace std;

vector<int> adj[10005];
int visited[10005];

int main()
{

    int node, edge;
    cin >> node >> edge;
    memset(adj, 0, sizeof(adj));
    memset(visited, 0, sizeof(visited));

    while (edge--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;

        sort(adj[x].begin(), adj[x].end(), greater<int>());

        if (adj[x].empty())
            cout << "-1" << endl;
        else
        {
            for (int i : adj[x])
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}