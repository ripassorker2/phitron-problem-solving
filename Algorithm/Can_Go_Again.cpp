#include <bits/stdc++.h>
using namespace std;

#define lli long long int

class Edge
{
public:
    lli u, v, c;
    Edge(lli u, lli v, lli c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

const lli X = 1e6 + 5;
lli dis[X];

int main()
{
    lli n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;

    while (e--)
    {
        lli u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }

    for (int i = 1; i <= n; i++)
        dis[i] = 1e18;

    int src;
    cin >> src;
    dis[src] = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ed : EdgeList)
        {
            if (dis[ed.u] < 1e18 && dis[ed.u] + ed.c < dis[ed.v])
                dis[ed.v] = dis[ed.u] + ed.c;
        }
    }

    bool isCycle = false;
    for (Edge ed : EdgeList)
    {
        if (dis[ed.u] < 1e18 && dis[ed.u] + ed.c < dis[ed.v])
        {
            isCycle = true;
            break;
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (!isCycle)
        {
            if (dis[x] != 1e18)
                cout << dis[x] << endl;
            else
                cout << "Not Possible\n";
        }
    }

    if (isCycle)
        cout << "Negative Cycle Detected\n";

    return 0;
}
