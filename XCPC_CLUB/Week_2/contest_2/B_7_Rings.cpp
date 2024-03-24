#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int mul = x * y;

        int digit = 0;
        int temp = mul;
        while (temp != 0)
        {
            digit++;
            temp = temp / 10;
        }

        if (digit == 5)
        {
            if (mul / 10000 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}
