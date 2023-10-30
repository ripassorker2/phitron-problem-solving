#include <bits/stdc++.h>
using namespace std;
#define lli long long int;

int main()
{

    int a, b, c, d, m = 0, n = 0;

    cin >> a >> b >> c >> d;
    int p = a, q = c;
    for (int i = 1; i < b; i++)
    {
        if (a * a > 10)
        {
            a = (a * a) % 10;
            cout << a << "ok";
            m++;
        }
    }
    for (int i = 1; i < d; i++)
    {
        if (c * c > 10)
        {
            c = (c * c) % 10;
            n++;
        }
    }
    if (m == n)
    {
        if (p > q)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else if (m > n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO"
             << "\n";
    }
    cout << a << " " << c;
    cout << "\n"
         << m << " " << n;
    return 0;
}