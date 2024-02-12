#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    ll mat[n][n];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            mat[i][j] = LLONG_MAX;
            if (i == j)
                mat[i][j] = 0;
        }
    }
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        mat[a][b] = min(mat[a][b], c);
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (mat[i][k] != LLONG_MAX && mat[k][j] != LLONG_MAX &&
                    mat[i][k] + mat[k][j] < mat[i][j])
                    mat[i][j] = mat[i][k] + mat[k][j];
            }
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (mat[x][y] != LLONG_MAX)
            cout << mat[x][y] << endl;
        else
            cout << "-1" << endl;
    }

    return 0;
}