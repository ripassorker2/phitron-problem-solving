#include <bits/stdc++.h>
using namespace std;

const int N = 1e18;

int main()
{
    int n;
    cin >> n;
    long long int mat[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == -1)
                mat[i][j] = N;
        }
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][k] != N && mat[k][j] != N)
                    mat[i][j] = min(mat[i][k] + mat[k][j], mat[i][j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}