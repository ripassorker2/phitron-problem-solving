#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin >> x >> y;

    int ans = 0;

    for (int i = 0; i < 2; i++)
    {
        if (x > y)
        {
            ans += x;
            x--;
        }
        else
        {
            ans += y;
            y--;
        }
    }
    cout << ans << endl;

    return 0;
}