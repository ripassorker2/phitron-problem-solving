#include <bits/stdc++.h>
#define br "\n"

#define ll long long int
using namespace std;
const int N = 1005;

int mat[N][N];
bool visited[N][N];
int dist[N][N];

int n, m;

pair<int, int> d[4] = {{1, -1}, {-1, 1}, {1, 1}, {-1, -1}};

bool isValid(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m && !visited[x][y] && mat[x][y] != 0;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    dist[si][sj] = 0;

    while (!q.empty())
    {
        int i = q.front().first;
        int j = q.front().second;
        q.pop();

        for (int k = 0; k < 4; k++)
        {
            int ni = i + d[k].first;
            int nj = j + d[k].second;

            if (isValid(ni, nj))
            {
                visited[ni][nj] = true;
                dist[ni][nj] = dist[i][j] + mat[ni][nj];
                q.push({ni, nj});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {

        cin >> n >> m;
        pair<int, int> src, dst;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
                visited[i][j] = false;

                if (mat[i][j] == -1)
                {
                    src.first = i;
                    src.second = j;
                }
                if (mat[i][j] == -2)
                {
                    dst.first = i;
                    dst.second = j;
                }
            }
        }

        bfs(src.first, src.second);

        if (!visited[dst.first][dst.second])
            cout << "Case " << i << ": Impossible" << br;
        else
            cout << "Case " << i << ": " << dist[dst.first][dst.second] + 2 << br;
    }

    return 0;
}
