#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, fast, last;

    cin >> n;

    last = n % 10;
    n = n / 10;

    if (last % n == 0 || n % last == 0)
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