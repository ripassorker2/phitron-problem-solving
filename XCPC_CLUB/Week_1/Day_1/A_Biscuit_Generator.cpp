#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    int h = a;
    while (a <= c)
    {
        a += h;
        ans += b;
    }
    cout << ans;

    return 0;
}