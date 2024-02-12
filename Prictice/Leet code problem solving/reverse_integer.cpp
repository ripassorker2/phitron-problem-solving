#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    long long int org = x;
    long long int rev = 0;
    x = abs(x);

    while (x > 0)
    {
        long long int d = abs(x) % 10;
        rev = (rev * 10) + d;
        x = x / 10;
    }

    if (rev > INT_MAX)
        return 0;
    if (rev < INT_MIN)
        return 0;

    if (org > 0)
        return rev;
    else
        return -rev;
}

int main()
{
    int n;
    cin >> n;

    cout << reverse(n)
         << endl;
    return 0;
}