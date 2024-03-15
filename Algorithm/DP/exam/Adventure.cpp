#include <bits/stdc++.h>
using namespace std;
const int maxn = 1004;
const int maxw = 1004;
int dp[maxn][maxw];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        int weight[n];
        int value[n];

        for (int i = 0; i < n; i++)
            cin >> weight[i];

        for (int i = 0; i < n; i++)
            cin >> value[i];

        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= w; j++)
            {
                if (weight[i - 1] <= j)
                {
                    int op1 = dp[i - 1][j - weight[i - 1]] + value[i - 1];
                    int op2 = dp[i - 1][j];
                    dp[i][j] = max(op1, op2);
                }
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        cout << dp[n][w] << endl;
    }

    return 0;
}