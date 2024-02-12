#include <bits/stdc++.h>
using namespace std;

int mat[1005][1005];
bool visited[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int n, m;

bool is_valid(int x, int y)
{
    return x >= 0 && y >= 0 && x < n && y < m && !visited[x][y] && mat[x][y] != -1;
}

void bfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    q.push(src);
    visited[src.first][src.second] = true;
    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();

        int x = parent.first, y = parent.second;

        for (int i = 0; i < 4; i++)
        {
            int nx = x + d[i].first, ny = y + d[i].second;
            if (is_valid(nx, ny))
            {
                q.push({nx, ny});
                visited[nx][ny] = true;
            }
        }
    }
}

int main()
{

    memset(mat, 0, sizeof(mat));
    memset(visited, false, sizeof(visited));

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < m; j++)
        {
            if (s[j] == '-')
                mat[i][j] = -1;
        }
    }
    pair<int, int> src, dest;
    cin >> src.first >> src.second >> dest.first >> dest.second;
    bfs(src);
    (visited[dest.first][dest.second]) ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}