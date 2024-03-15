#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int parent[N];
int group_size[N];

void initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}

int find(int n)
{
    if (parent[n] == -1)
        return n;
    int leader = find(parent[n]);
    parent[n] = leader;
    return leader;
}

void dsu_union_by_size(int n1, int n2)
{
    int l1 = find(n1);
    int l2 = find(n2);
    if (group_size[l1] > group_size[l2])
    {
        parent[l2] = l1;
        group_size[l1] += group_size[l2];
    }
    else
    {
        parent[l1] = l2;
        group_size[l2] += group_size[l1];
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    initialize(n);
    bool flag = false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int l1 = find(a);
        int l2 = find(b);
        if (l1 == l2)
            flag = true;
        else
            dsu_union_by_size(a, b);
    }

    if (flag)
        cout << "YES, Cycle detected." << endl;
    else
        cout << "Not found cycle." << endl;

    return 0;
}