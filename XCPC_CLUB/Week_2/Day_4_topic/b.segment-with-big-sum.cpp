#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    ll s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    ll l = 0, r = 0, sum = 0, ans = INT_MAX;
    while (r < n)
    {
        sum += v[r];

        while (sum >= s && r < n)
        {
            ans = min(ans, r - l + 1);
            sum -= v[l];
            l++;
        }

        r++;
    }
    if (ans == INT_MAX)
        cout << "-1" << endl;
    else
        cout << ans;
    return 0;
}