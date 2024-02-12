#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int parent[N];
int group_size[N];
int level[N];

void initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
        level[i] = 0;
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
    parent[leader2] = leader1;
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
void dsu_union_by_level(int node1, int node2)
{
    int leader1 = dsu_find(node1);
    int leader2 = dsu_find(node2);

    if (level[leader1] > level[leader2])
        parent[leader2] = leader1;

    else if (level[leader1] < level[leader2])
        parent[leader1] = leader2;
    else
    {
        parent[leader1] = leader2;
        level[leader2]++;
    }
}

int main()
{
    initialize(7);
    dsu_union_by_level(1, 2);
    dsu_union_by_level(2, 3);
    dsu_union_by_level(4, 5);
    dsu_union_by_level(5, 6);
    dsu_union_by_level(1, 4);

    cout << dsu_find(1) << endl;
    cout << dsu_find(4) << endl;
    return 0;
}