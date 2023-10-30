#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;
    int mx = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    int mn = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    cout << mn << " " << mx << endl;
    cout << endl;
    return 0;
}