#include <bits/stdc++.h>
#define ll long long int
const ll n = 1e5 + 5;
int group_size[n];
int parent[n];
using namespace std;
class edge
{
public:
    ll u, v, w;
    edge(ll u, ll v, ll w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
bool cmp(edge a, edge b)
{
    return a.w < b.w;
}

void dsu_initialize(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}
int find(int node)
{
    if (parent[node] == -1)
        return node;
    else
    {
        int leader = find(parent[node]);
        parent[node] = leader;
        return leader;
    }
}
void dsu_union_by_size(ll node1, ll node2)
{
    int leaderA = find(node1);
    int leaderB = find(node2);
    if (group_size[leaderA] > group_size[leaderB])
    {
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    vector<edge> edgelist;
    while (e--)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        edgelist.push_back(edge(u, v, w));
    }
    sort(edgelist.begin(), edgelist.end(), cmp);
    ll cost = 0;
    for (edge ed : edgelist)
    {
        int leaderU = find(ed.u);
        int leaderV = find(ed.v);
        if (leaderU == leaderV)
            continue;
        else
        {
            dsu_union_by_size(ed.u, ed.v);
            cost += ed.w;
        }
    }
    ll components = 0;
    for (int i = 1; i <= n; i++)
    {
        if (parent[i] == -1)
            components++;
    }
    if (components > 1)
        cout << "-1" << endl;
    else if (cost)
        cout << cost << endl;
    return 0;
}