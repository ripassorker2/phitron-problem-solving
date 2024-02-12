#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

int dis[10001];

int main()
{
    int n, m;
    cin >> n >> m;
    vector<Edge> EdgeList;
    for (int i = 0; i < m; i++)
    {
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }

    for (int i = 1; i <= n; i++)
        dis[i] = INT_MAX;

    dis[1] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge it : EdgeList)
        {
            if (dis[it.u] < INT_MAX && dis[it.u] + it.c < dis[it.v])
                dis[it.v] = dis[it.u] + it.c;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (dis[i] == INT_MAX)
            cout << "30000 ";
        else
            cout << dis[i] << " ";
    }
    return 0;
}