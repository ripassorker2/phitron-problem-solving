#include <bits/stdc++.h>
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

        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);
        int ans = 0;
        for (int i = 1; i < n; i++)
            ans += arr[i] - arr[0];

        cout << ans << "\n";
    }

    return 0;
}