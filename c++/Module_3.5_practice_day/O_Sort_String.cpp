#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<char, int> m;
    char c;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        m[c]++;
    }
    for (auto u : m)
    {
        while (u.second--)
        {
            cout << u.first;
        }
    }
    cout << endl;

    return 0;
}
