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
        int x, y;
        cin >> x >> y;

        if (x <= y)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}