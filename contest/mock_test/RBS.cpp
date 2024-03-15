#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;
        char ch[x];
        int l = 0, r = 0;

        for (int i = 0; i < x; i++)
            cin >> ch[i];

        for (int i = 0; i < x; i++)
        {
            if (ch[i] == ')')
                r++;
            else if (ch[i] == '(')
                l++;
        }
        if (l == r)
            cout << "Possible" << endl;
        else
            cout << "Impossible" << endl;
    }

    return 0;
}