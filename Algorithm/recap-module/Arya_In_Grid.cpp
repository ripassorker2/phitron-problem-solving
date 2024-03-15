#include <bits/stdc++.h>
using namespace std;

const int N = 10005;
bool vis[N][N];
int n, m, x, y, L, cnt = 0;

vector<pair<int, int>> d = {{x - L, y}, {x + L, y}, {x, y - 1}, {x, y + 1}};

bool isValid(int i, int j)
{
    return i >= 1 && i <= n && j >= 1 && j <= m;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    cnt++;

    for (int i = 0; i < 4; i++)
    {
        int nx = si + d[i].first;
        int ny = sj + d[i].second;

        cout << si << " " << ny << endl;
        cout << "ses";
        if (isValid(nx, ny) && !vis[nx][ny])
            dfs(nx, ny);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> x >> y >> L;
        memset(vis, false, sizeof(vis));
        cnt = 0;
        dfs(x, y);
        // cout << cnt << endl;
    }

    return 0;
}
