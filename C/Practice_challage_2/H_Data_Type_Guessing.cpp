#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k, a, type;

    cin >> n >> k >> a;
    type = (n * k) / a * 1.0;
    y if ((n * k) % a != 0)
            cout
        << "double\n";

    else if (type <= 2147483647)
    {
        cout << "int\n";
    }
    else
    {
        cout << "long long" << endl;
    }

    cout
        << endl;
    return 0;
}