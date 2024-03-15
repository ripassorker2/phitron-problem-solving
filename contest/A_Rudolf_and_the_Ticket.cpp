#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> ar1(n);
        vector<int> ar2(m);

        for (int i = 0; i < n; i++)
            cin >> ar1[i];
        for (int i = 0; i < m; i++)
            cin >> ar2[i];

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (ar1[i] + ar2[j] <= k)
                    cnt++;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}
