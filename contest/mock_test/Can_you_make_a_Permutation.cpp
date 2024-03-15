#include <bits/stdc++.h>
#define br "\n"
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll i = 0;

        while (k > 0 && i < n)
        {
            if (a[i] > n)
            {
                a[i] = n;
                k--;
            }
            i++;
        }

        bool flag = true;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] > n)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
