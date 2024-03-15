#include <bits/stdc++.h>
#define pi pair<int, int>
#define ll long long
using namespace std;
const ll N = 1005;
bool vis[N][N];
char mat[N][N];
map<pi, pi> parent;
ll n, m;
vector<pair<int, int>> d = {
    {-1, 0},
    {1, 0},
    {0, 1},
    {0, -1},
};

void bfs(ll si, ll sj)
{
    queue<pair<ll, ll>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    parent[{si, sj}] = {-1, -1};
    while (!q.empty())
    {
        auto par = q.front();
        ll a = par.first, b = par.second;
        q.pop();
        for (ll i = 0; i < 4; i++)
        {
            ll ci = a + d[i].first;
            ll cj = b + d[i].second;
            if (ci >= 0 && ci < n && cj >= 0 && cj < m && !vis[ci][cj] && mat[ci][cj] != '#')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                parent[{ci, cj}] = {a, b};
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    pi src, dest;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            mat[i][j] = c;
            if (c == 'D')
                src = {i, j};
            else if (c == 'R')
                dest = {i, j};

            vis[i][j] = false;
            parent[{i, j}] = {-1, -1};
        }
    }

    bfs(src.first, src.second);

    if (!vis[dest.first][dest.second])
    {
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
                cout << mat[i][j];
            cout << endl;
        }
    }
    else
    {
        while (parent[dest] != make_pair(-1, -1))
        {
            if (mat[dest.first][dest.second] != 'D' && mat[dest.first][dest.second] != 'R')
                mat[dest.first][dest.second] = 'X';
            dest = parent[dest];
        }

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cout << mat[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
