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
        int n, k;
        cin >> n >> k;
        vector<int> a;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += a[i];
        if (sum < k)
            cout << 0 << "\n";
        else
        {
                }
    }

    return 0;
}