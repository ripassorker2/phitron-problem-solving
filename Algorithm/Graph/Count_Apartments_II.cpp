#include <bits/stdc++.h>
using namespace std;

int mat[1001][1001];
bool visited[1001][1001];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

vector<int> apt;

int n, m;

bool is_valid(int x, int y)
{
    return x >= 0 && y >= 0 && x < n && y < m && !visited[x][y] && mat[x][y] != -1;
}

void bfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    q.push(src);

    apt.push_back(1);

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

                int s = apt.back();
                apt.pop_back();
                apt.push_back(s + 1);
            }
        }
    }
}

int main()
{

    memset(mat, 0, sizeof(mat));
    memset(visited, false, sizeof(visited));

    cin >> n >> m;
    pair<int, int> src, dest;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < m; j++)
        {
            if (s[j] == '#')
                mat[i][j] = -1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && mat[i][j] != -1)
                bfs({i, j});
        };
    }

    sort(apt.begin(), apt.end());

    if (apt.empty())
    {
        cout << 0 << endl;
    }
    else
    {
        for (int i : apt)
            cout << i << " ";
    }
    cout << endl;

    return 0;
}