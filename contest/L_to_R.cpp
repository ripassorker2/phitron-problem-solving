#include <bits/stdc++.h>
#define br "\n"
#define ll long long int
using namespace std;
const int N = 1000005;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, q;
    cin >> t;

    ll v[N];
    for (ll i = 1; i <= t; i++)
        cin >> v[i];

    cin >> q;
    for (ll i = 0; i < q; i++)
    {
        ll a, b;
        cin >> a >> b;
        ll ans = v[a] * v[b];
        cout << ans << br;
    }

    return 0;
}