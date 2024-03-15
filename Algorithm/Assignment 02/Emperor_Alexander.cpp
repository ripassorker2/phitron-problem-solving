#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int parent[N];
int group_size[N];

void initialize(int n)
{
    for (int i = 1; i <= n; i++)
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

void dsu_union(int node1, int node2)
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

class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

int main()
{

    int n, e;
    cin >> n >> e;
    initialize(n);
    vector<Edge> edgeList;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));
    }

    sort(edgeList.begin(), edgeList.end(), cmp);

    long long int cost = 0, duplicate = 0;

    for (Edge edge : edgeList)
    {
        int leader1 = dsu_find(edge.u);
        int leader2 = dsu_find(edge.v);
        if (leader1 != leader2)
        {
            dsu_union(edge.u, edge.v);
            cost += edge.w;
        }
        else
            duplicate++;
    }

    int components = 0;
    for (int i = 1; i <= n; i++)
    {
        if (parent[i] == -1)
            components++;
    }
    if (components > 1)
        cout << "Not Possible" << endl;
    else if (cost)
        cout << duplicate << " " << cost << endl;

    return 0;
}