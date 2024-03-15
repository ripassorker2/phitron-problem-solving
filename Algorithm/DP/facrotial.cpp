#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    int nf = fact(n - 1);
    return nf * n;
}

int main()
{
    int n;
    cin >> n;

    int ans = fact(n);
    cout << ans << endl;

    cout << endl;
    return 0;
}
