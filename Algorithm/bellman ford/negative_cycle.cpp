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

    int n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;

    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }
    for (int i = 0; i < n; i++)
        dis[i] = INT_MAX;

    dis[0] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ed : EdgeList)
        {
            if (dis[ed.u] < INT_MAX && dis[ed.u] + ed.c < dis[ed.v])
                dis[ed.v] = dis[ed.u] + ed.c;
        }
    }
    bool isCycle = false;
    for (Edge ed : EdgeList)
    {
        if (dis[ed.u] < INT_MAX && dis[ed.u] + ed.c < dis[ed.v])
        {
            isCycle = true;
            break;
        }
    }
    if (!isCycle)
    {
        for (int i = 0; i < n; i++)
            cout << dis[i] << " ";
    }
    else
        cout << "Negetive cycle detected";

    cout << endl;
    return 0;
}