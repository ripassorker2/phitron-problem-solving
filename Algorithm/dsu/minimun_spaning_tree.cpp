#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int parent[N];
int group_size[N];

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

void initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node)
{
    if (parent[node] == -1)
        return node;
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}

void dsu_union_by_size(int node1, int node2)
{
    int leader1 = dsu_find(node1);
    int leader2 = dsu_find(node2);

    if (group_size[leader1] > group_size[leader2])
    {
        parent[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    }
    else
    {
        parent[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    initialize(n);
    vector<Edge> edges;

    for (int i = 0; i < e; i++)
    {
        int u, v, c;
        cin >> u >> v >> c;
        edges.push_back(Edge(u, v, c));
    }

    sort(edges.begin(), edges.end(), [](Edge a, Edge b)
         { return a.c < b.c; });

    int ans = 0;

    for (Edge ed : edges)
    {
        int u = dsu_find(ed.u);
        int v = dsu_find(ed.v);

        if (u == v)
            continue;
        else
        {
            dsu_union_by_size(ed.u, ed.v);
            ans += ed.c;
        }
    }

    cout << ans << endl;
    return 0;
}