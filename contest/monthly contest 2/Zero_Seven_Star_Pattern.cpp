#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, s, o, m;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < s; j++)
        {
            if (i == j || j == n - i - 1)
                cout << "*";
        }
        for (int j = 0; j < m; j++)
        {
            // if (i < n / 2 || j < n / 2)
            cout << "7";
        }
        for (int j = 0; j < o; j++)
        {
            /* code */
            cout << "0";
        }

        cout << endl;
    }

    return 0;
}