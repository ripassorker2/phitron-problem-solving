#include <bits/stdc++.h>
#define br "\n"

#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    vector<int> v(t);

    for (int i = 0; i < t; i++)
        cin >> v[i];

    int ans = 0;
    for (int i = 0; i < t; i++)
    {
        if (v[i] % 2 == 0)
            ans = max(ans, v[i]);
    }

    for (int i = 0; i < t - 1; i++)
    {
        for (int j = i + 1; j < t; j++)
        {
            if ((v[i] + v[j]) % 2 == 0)
                ans = max(ans, v[i] + v[j]);
        }
    }
    cout << ans << br;
    return 0;
}
