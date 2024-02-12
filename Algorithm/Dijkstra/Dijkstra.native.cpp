#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> adj[100];
int dis[100];

void dijkstra(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    dis[src] = 0;

    while (!q.empty())
    {
        auto p = q.front();
        q.pop();
        int parentValue = p.first;
        int parentCost = p.second;

        for (auto child : adj[parentValue])
        {
            int childValue = child.first, childCost = child.second;

            if (parentCost + childCost < dis[childValue])
            {
                dis[childValue] = parentCost + childCost;
                q.push({childValue, dis[childValue]});
            }
        }
    }
}

int main()
{

    int node, edge;
    cin >> node >> edge;
    while (edge--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }

    for (int i = 0; i < node; ++i)
        dis[i] = INT_MAX;

    dijkstra(0);

    for (int i = 0; i < node; i++)
    {
        cout << i << " -- " << dis[i] << endl;
    }

    cout
        << endl;
    return 0;
}