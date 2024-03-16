#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b;
    cin >> a >> b;
    ll count = 0;
    for (ll i = 0; i < b; i++)
    {
        if (a <= b)
        {
            count++;
            a *= 2;
        }
        else
            break;
    }
    cout << count;

    return 0;
}