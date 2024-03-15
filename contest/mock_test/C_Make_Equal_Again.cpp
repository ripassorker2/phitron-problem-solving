#include <bits/stdc++.h>
#define ll long long int
#define br "\n"
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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int same = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != a[0])
            {
                same = 1;
                break;
            }
        }

        if (same == 0)
            cout << 0 << br;
        else
        {
            int first = a[0], last = a[n - 1], fc = 0, lc = 0;
            for (int i = 0; i < n; i++)
            {
                if (first == a[i])
                    fc++;
                else
                    break;
            }
            for (int i = n - 1; i >= 0; i--)
            {
                if (last == a[i])
                    lc++;
                else
                    break;
            }

            if (first == last)
                cout << n - (fc + lc) << br;
            else
                cout << n - max(fc, lc) << br;
        }
    }

    return 0;
}