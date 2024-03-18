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
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m[x]++;
        }

        int max = 0;
        for (auto i : m)
        {
            if (i.second >= 3)
                max = i.first;
        }

        if (max)
            cout << max << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}