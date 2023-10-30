#include <bits/stdc++.h>
using namespace std;
#define lli long double

lli getPower(int a, lli b)
{
    int res = 1;

    for (int i = 1; i <= b; i++)
    {
        res = res * a;
    }
    return res;
}

int main()
{

    lli a, c;
    lli b, d;

    cin >> a >> b >> c >> d;
    lli res1 = getPower(a, b);
    lli res2 = getPower(c, d);

    cout << res1 << "        " << res2 << endl;

    if (res1 > res2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    cout << endl;
    return 0;
}