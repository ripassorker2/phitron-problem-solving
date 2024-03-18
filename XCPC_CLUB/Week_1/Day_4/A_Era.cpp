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
        int n;
        cin >> n;

        vector<int> arr;
        arr.push_back(0);

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        ll ans = 0, index = 0;

        for (ll i = 1; i <= n; i++)
        {
            if (arr[i] > i)
            {
                ll c = arr[i] - i;
                for (ll j = 1; j <= c - index; j++)
                {
                    ans++;
                }
                index += c;
            }
        }

        if (arr[1] > 2)
            ans += arr[1] - 1;

        cout << ans << "\n";
    }

    return 0;
}
