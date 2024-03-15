#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
bool subset(int n, int a[], int w)
{
    if (n == 0)
    {
        if (w == 0)
            return true;
        else
            return false;
    }
    if (dp[n][w] != -1)
        return dp[n][w];

    if (a[n - 1] <= w)
    {
        bool op1 = subset(n - 1, a, w - a[n - 1]);
        bool op2 = subset(n - 1, a, w);
        return dp[n][w] = op1 || op2;
    }
    else
    {
        bool op2 = subset(n - 1, a, w);
        return dp[n][w] = op2;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, val;
        cin >> n >> val;
        int w = 1000 - val;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= w; j++)
                dp[i][j] = -1;
        }

        if (subset(n, a, w))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}