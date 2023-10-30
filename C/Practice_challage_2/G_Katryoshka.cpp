#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define endl '\n'
int main()
{
    lli a, b, c;
    cin >> a >> b >> c;
    if (a == 0 || c == 0)
        cout << 0 << endl;
    else if (b != 0)
    {
        lli sum = min({a, b, c});
        a -= sum;
        b -= sum;
        c -= sum;
        sum += min(a / 2, c);
        cout << sum << endl;
    }

    return 0;
}