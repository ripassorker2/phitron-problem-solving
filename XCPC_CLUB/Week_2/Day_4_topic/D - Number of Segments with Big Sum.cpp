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
    ll l = 0, r = 0, sum = 0, res = 0;
    while (r < n)
    {
        sum += v[r];
        while (sum >= s && r < n)
        {
            res += n - r;
            sum -= v[l];
            l++;
        }
        r++;
    }
    cout << res << endl;
    return 0;
}