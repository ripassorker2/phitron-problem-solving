#include <bits/stdc++.h>
#define br "\n"

#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int n, s;
    n = t;

    for (int i = 1; i <= t; i++)
    {

        if (i == 1)
        {
            for (int j = 1; j <= t; j++)
                cout << j;
            cout << br;
        }
        else if (i == t)
        {
            for (int j = 1; j <= t; j++)
                cout << t;
            cout << br;
        }
        else
        {
            for (int j = i; j <= t + i + 1; j++)
            {
                if (j == i)
                    cout << j;
                else if (j == t + i - 1)
                    cout << t;
                else
                    cout << " ";
            }
            cout << br;
        }
    }

    return 0;
}