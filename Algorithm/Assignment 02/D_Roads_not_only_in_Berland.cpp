#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
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

int main()
{

    int n;

    cin >> n;
    initialize(n);
    vector<pair<int, int>> removed;
    vector<pair<int, int>> added;
    for (int i = 1; i <= n - 1; i++)
    {

        int a, b;
        cin >> a >> b;
        int leader1 = dsu_find(a);
        int leader2 = dsu_find(b);
        if (leader1 == leader2)
            removed.push_back({a, b});
        else
            dsu_union(a, b);
    }

    cout << removed.size() << endl;

    for (int i = 2; i <= n; i++)
    {
        int leader1 = dsu_find(1);
        int leader2 = dsu_find(i);

        if (leader1 != leader2)
        {
            added.push_back({1, i});
            dsu_union(1, i);
        }
    }

    for (int i = 0; i < added.size(); i++)
    {
        cout << removed[i].first << " " << removed[i].second << " " << added[i].first << " " << added[i].second << endl;
    }

    cout << endl;
    return 0;
}