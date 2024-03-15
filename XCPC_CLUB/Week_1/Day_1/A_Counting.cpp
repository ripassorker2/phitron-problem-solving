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

    while (x <= y)
    {
        ans++;
        x++;
    }
    cout << ans << endl;

    return 0;
}