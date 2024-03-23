#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> v, ans;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] != k)
            ans.push_back(v[i]);
        }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}