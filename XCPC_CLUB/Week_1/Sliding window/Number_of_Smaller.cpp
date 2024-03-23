#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> v1(n), v2(m);

    for (int i = 0; i < n; i++)
        cin >> v1[i];
    for (int i = 0; i < m; i++)
        cin >> v2[i];

    int t = 0, b = 0, ans = 0;

    while (b < m)
    {
        while (v2[b] > v1[t] && t < n)
        {
            ans++;
            t++;
        }
        b++;

        cout << ans << " ";
    }

    return 0;
}