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
        vector<int> v;
        int n, k = 1, ans = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {

            while (v[i] > k)
            {
                ans += v[i] - k;
                k = v[i];
            }
            while (v[i] == k || v[i] < k)
            {
                k++;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}