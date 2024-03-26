#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll s;
    cin >> n >> s;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    ll l = 0, r = 0, sum = 0, ans = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum > s)
        {
            sum -= v[l];
            l++;
        }
        else
            ans = max(ans, r - l + 1);
        r++;
    }
    cout << ans << endl;
    return 0;
}