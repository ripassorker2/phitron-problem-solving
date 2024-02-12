#include <bits/stdc++.h>
using namespace std;

#define lli long long int

const int N = 1e3 + 6;
vector<pair<int, int>> v[N];
long long int dis[N];

class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};
void dijkstra(int src)
{
    priority_queue<pair<lli, lli>, vector<pair<lli, lli>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<lli, lli> parent = pq.top();
        pq.pop();
        lli node = parent.first;
        lli cost = parent.second;

        for (pair<lli, lli> child : v[node])
        {
            lli childnode = child.first;
            lli childcost = child.second;

            if (cost + childcost < dis[childnode])
            {
                dis[childnode] = cost + childcost;
                pq.push({childnode, dis[childnode]});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }

    for (int i = 0; i <= n; i++)
        dis[i] = INT_MAX;

    int src;
    cin >> src;
    dijkstra(src);
    int t;
    cin >> t;

    while (t--)
    {
        lli val, cost;
        cin >> val >> cost;

        if (dis[val] <= cost)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e6;
// vector<pair<int, int>> v[N];
// int dis[N];
// class cmp
// {
// public:
//     bool operator()(pair<int, int> a, pair<int, int> b)
//     {
//         return a.second > b.second;
//     }
// };
// void dijkstra(int src)
// {
//     priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
//     pq.push({src, 0});
//     dis[src] = 0;
//     while (!pq.empty())
//     {
//         pair<int, int> parent = pq.top();
//         pq.pop();
//         int node = parent.first;
//         int cost = parent.second;
//         for (pair<int, int> child : v[node])
//         {
//             int childNode = child.first;
//             int childCost = child.second;
//             if (cost + childCost < dis[childNode])
//             {

//                 dis[childNode] = cost + childCost;
//                 pq.push({childNode, dis[childNode]});
//             }
//         }
//     }
// }
// int main()
// {
//     int n, e;
//     cin >> n >> e;
//     while (e--)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;
//         v[a].push_back({b, c});
//     }
//     for (int i = 0; i < n; i++)
//     {
//         dis[i] = INT_MAX;
//     }

//     int src;
//     cin >> src;
//     dijkstra(src);

//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int dest, cost;
//         cin >> dest >> cost;
//         if (dis[dest] <= cost)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }

//     return 0;
// }
