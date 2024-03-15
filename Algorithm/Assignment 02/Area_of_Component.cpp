#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
bool vis[N][N];
int dis[N][N];
char a[N][N];

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
bool valid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m && a[i][j] == '.' && !vis[i][j];
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj))
            {

                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[a][b] + 1;
            }
        }
    }
}

int minareaofcomp()
{
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '.' && !vis[i][j])
            {
                bfs(i, j);
                int areaOfComp = 0;
                for (int x = 0; x < n; x++)
                {
                    for (int y = 0; y < m; y++)
                    {
                        if (dis[x][y] != -1)
                        {
                            areaOfComp++;
                            vis[x][y] = true;
                        }
                    }
                }

                if (areaOfComp < min)
                    min = areaOfComp;

                memset(dis, -1, sizeof(dis));
            }
        }
    }
    return min;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));

    int minArea = minareaofcomp();
    if (minArea != INT_MAX)
        cout << minArea;
    else
        cout << -1;
    return 0;
}